<?php
/*
*	module array
*/

//body
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
			write_error_log("MODULE Failed: ".$page."\n\n");
			$page = '404';

		}
	}
	else
	{
		$page = '0';
	}

	return $page_array[$page];
}

//sidebar right
function define_module_sidebar_right()
{

	$page_array = array();

	$page_array['0']="content";

	// page request based on GET P
	if(isset($_GET['p']))
	{
		$page = $_GET['p'];
		if(!isset($page_array[$page]))
		{
			write_error_log("MODULE Failed: ".$page."\n\n");
			//$page = '404';
		}
	}
	else
	{
		$page = '0';
	}

	return $page_array[$page];
}


//sidebar left
function define_module_sidebar_left()
{

	$page_array = array();

	$page_array['0']="content";

	// page request based on GET P
	if(isset($_GET['p']))
	{
		$page = $_GET['p'];
		if(!isset($page_array[$page]))
		{
			write_error_log("MODULE Failed: ".$page."\n\n");
			//$page = '404';
		}
	}
	else
	{
		$page = '0';
	}

	return $page_array[$page];
}
?>