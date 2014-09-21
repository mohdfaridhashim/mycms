<?php
/*
*	module array
*/

//body
function define_module()
{

	$page_array = array();

	$page_array['0']="content";
	$page_array['1']="register";
	$page_array['1000']="logout";
	$page_array['404']="error";

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




function define_module_combine($request)
{

	$page_array = array();

	//$page_array['0']="content";

	//$page_array['404']="error";


	//non page index > 1000
	$page_array['1000']="jumbo";
	$page_array['1100']="news";
	$page_array['1200']="gallery";
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


//sidebar right
function define_module_sidebar_right()
{

	$page_array = array();

	$page_array['0']="content";
	$page_array['1']="sidebar";
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