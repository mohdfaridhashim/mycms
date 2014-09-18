<?php
/* url routing */


function url_routing()
{

	$dir_module = "module";
	$page_array = array();

	$page_array['0']="content";

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
			include_once $file;
		}
		else
		{
			echo "not exist";
		}
		
	}

}


?>