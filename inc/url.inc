<?php
/* url routing */

/*old one */
function url_routing_old($array)
{

	$page_array = array();
	$page_array = $array;
	// module directory
	$dir_module = MODULE_DIR;

	if(isset($_GET['p']))
	{
		$page = $_GET['p'];
	}
	else
	{
		$page = '0';
	}

	if(isset($page_array[$page]))
	{
		$file = $dir_module."/".$page_array[$page]."/".$page_array[$page].".php";
		if (file_exists($file)) {

			ob_start();
			include_once $file;
			ob_end_flush(); 
		}
		else
		{
			echo "not exist";

		}
		
	}

}

/*
*	new one with fix
*	Not pass array instead pass a value
*	check the file exist or not
*	no class instance since this is not an oop standard router just a router
*	If not found error page but also must differ the home page
*	pass message to specific module
*/
function url_routing($page,$message='')
{

	// module directory
	$dir_module = MODULE_DIR;

	$file = $dir_module."/".$page."/".$page.".php";
	if (file_exists($file)) {
		include $file;
	}
	else
	{	
		write_error_log("PAGE Failed: ".$file." \n\n");
		$page = "error";
		$file = $dir_module."/".$page."/".$page.".php";
		include_once $file;

	}
		
}


?>