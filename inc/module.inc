<?php
/*
*	module array
*/

function define_module()
{

	$page_array = array();

	$page_array['0']="content";
	$page_array['404']="error";

	// page request based on GET P
	if(isset($_GET['p']))
	{
		$page = $_GET['p'];
		if(!isset($page_array[$page]))
		{
			$page = '404';
		}
	}
	else
	{
		$page = '0';
	}

	return $page_array[$page];
}

?>