<?php
/*
*	module
*/

//body
function define_module()
{
	include 'array_module.inc';
	$page_array = array();
	$page_array = $module_array;

	// page request based on GET P
	if(isset($_GET['p']))
	{
		$page = $_GET['p'];
		if(!isset($page_array[$page]))
		{
			write_error_log("Page Module Failed: ".$page."\n\n");
			$page = '404';

		}
	}
	else
	{
		$page = '0';
	}

	return $page_array[$page];
}



//non page index > 1000
function define_module_combine($request)
{


	$page_array = array();
	include 'array_module.inc';
	$page_array = $shared_module_array;

	
	if(isset($request))
	{
		$page = $request;
		if(!isset($page_array[$page]))
		{
			write_error_log("MODULE Failed: ".$page."\n\n");
			$page = '1000';

		}
	}

	return $page_array[$page];
}

//sidebar
function define_module_sidebar()
{

	$page_array = array();

	//$page_array['0']="content";
	$page_array['0']="sidebar";
	// page request based on GET P
	if(isset($_GET['p']))
	{
		$page = $_GET['p'];
		if(!isset($page_array[$page]))
		{
			write_error_log("MODULE sidebar Failed: ".$page."\n\n");
			//$page = '404';
			$page = '0';
		}
	}
	else
	{
		$page = '0';
	}

	return $page_array[$page];
}

function define_module_combine_old($request)
{

	$page_array = array();

	$page_array['0']="content";

	$page_array['404']="error";


	//non page index > 1000
	$page_array['1000']="jumbo";
	// page request based on GET P
	if(isset($request))
	{
		$page = $request;
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

