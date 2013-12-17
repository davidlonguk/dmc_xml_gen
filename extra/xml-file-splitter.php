<!DOCTYPE HTML>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>DMC XML file splitter</title>

</head>

<body>
<h1>DMC XML file splitter</h1>

<?php
//INPUT FILE
//$xml=simplexml_load_file("all-in-one.xml");

// Check if Feed URL has been submitted to page
if (isset ($_POST["feedURL"])) {
	echo '<h2>Feed Data Received</h2>';
	$feedURL = $_POST["feedURL"];
	// echo '<p>Using data from: <a href="' . $feedURL . '">' . $feedURL . '</p>';
        

        //INPUT URL
        $response_xml_data = file_get_contents($feedURL);
        $xml = simplexml_load_string($response_xml_data);


        //OUTPUT FILENAME
        $filename = "./all-in-one.zip";

        //TEMP FOLDER NAME
        $tmpFolder = "tmp/";

        mkdir($tmpFolder);
        $zip = new ZipArchive();
        if(file_exists($filename)){
        unlink($filename);
        }
        if ($zip->open($filename, ZipArchive::CREATE)!==TRUE) {
            exit("cannot open <$filename>\n");
        }
        
        //function to create the xml files
        function createXML($filename, $xmlChild){
            // Wrap xml with header and footer
            $nonItems = '';
            $items = '';
            foreach ($xmlChild as $child) {
                if ($child->getName() == 'asset_data') {
                    $items .= $child->asXML();
                } else {
                    $nonItems .= $child->asXML();
                }
            }
            
            
              $xmlContent = sprintf('<file_information xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"><asset_data>%s</asset_data></file_information>',$nonItems, $items);
              $xml = simplexml_load_string($xmlContent);
//              echo '<pre>';
//              print_r($xml);
//              echo '</pre>';
//              echo '<br />';
//              
             // write XML to file 
                try{		
                        $xml->asXML($filename); 

                }catch(Exception $e){
                  echo 'Exception: ',  $e->getMessage(), "\n";
                }
        }

        //return the zip file
        function returnTheZipFile($fileLocation){
                $file_name = basename($fileLocation);
                // Read and write for owner, read for everybody else
                chmod($fileLocation, 0777);
                
                // echo $file_name;
                // echo '<br>';
                echo '<h3><a href="' . $fileLocation . '" style="color: red;">Download XML files</a></h3>';
                

          //  header("Content-Type: application/zip");
          //  header("Content-Disposition: attachment; filename=$file_name");
          //  header("Content-Length: " . filesize($fileLocation));

          //  readfile($fileLocation);    
        }

        function deleteDir($dirPath) {
           if (! is_dir($dirPath)) {
                throw new InvalidArgumentException("$dirPath must be a directory");
            }
            if (substr($dirPath, strlen($dirPath) - 1, 1) != '/') {
                $dirPath .= '/';
            }
            $files = glob($dirPath . '*', GLOB_MARK);
            foreach ($files as $file) {
                if (is_dir($file)) {
                    self::deleteDir($file);
                } else {
                    unlink($file);
                }
            }
            rmdir($dirPath);
         }

        $counter = 1;
        try{
                foreach($xml->children() as $child)
                {
                        //CREATE ONE FILE
                        $fileName = $tmpFolder . $child->upn;
                        if(empty($child->upn)){
                                $fileName = $tmpFolder . $counter;
                        }
                        $xmlFileName = $fileName . ".xml";
			$xmlFile = createXML($xmlFileName , $child);
                        $zip->addFile($xmlFileName);

                        // END CREATE ONE FILE
                $counter ++;
                }

                  $zip->close();  
                  // delete tmp folder
                  deleteDir($tmpFolder);

                  //return the file
                  returnTheZipFile($filename);


         }catch(Exception $e){
                  echo 'Exception: ',  $e->getMessage(), "\n";
        }
 

} else {?>
	<h2>Please provide link to XML</h2>
	<form action="" method="post">
		<input name="feedURL" id="feedURL" type="text" />
		<button type="submit">Split XML!</button>
	</form>
	
	<?php
	}
?>
       <p><a href="/dmc">Back to DMC XML Generator</a></p>

</body>
</html>
