<?php
/**
 * @file views-view-table.tpl.php
 * Template to display a view as a table.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $rows: An array of row items. Each row is an array of content
 *   keyed by field ID.
 * - $header: an array of headers(labels) for fields.
 * - $themed_rows: a array of rows with themed fields.
 * @ingroup views_templates
 */
 $item_item = 'asset_data';
?>
<?php foreach ($themed_rows as $count => $row): ?>
<<?php print $item_item; ?>>
<?php foreach ($row as $field => $content): ?>
<?php if($content != NULL){ ?>
	<?php if($xml_tag[$field] == 'sequence'){
		print '<segment>
	';
         $segment = "open";
        }
	if($xml_tag[$field] == 'tc_in' || $xml_tag[$field] == 'tc_out' || $xml_tag[$field] == 'duration'){ ?>
	<<?php print $xml_tag[$field]; ?>>0<?php print_r ($content); ?>:00</<?php print $xml_tag[$field]; ?>>
	<?php ;} else { ?>
	<<?php print $xml_tag[$field]; ?>><?php print_r ($content); ?></<?php print $xml_tag[$field]; ?>>
	
        <?php ;} ?>
	<?php if($xml_tag[$field] == 'tc_out' && $segment = "open"){
	print '</segment>
	';
        $segment = "closed";
        }?>
<?php } ?>
<?php endforeach; ?>
</<?php print $item_item; ?>>
<?php endforeach; ?>