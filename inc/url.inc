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

/*fis router reference */
// function get_controller($page)
// {
// 		//compute the path to the file
// 		if(isset($_SESSION['login']))
// 		{
// 		$target = CONTROLLER_ROOT_ACC . $page . '.php';
// 		}
// 		else
// 		{
// 		$target = CONTROLLER_ROOT . $page . '.php';
// 		}
// 		if (file_exists($target))
// 		{
// 			//include controller
// 			include_once($target);
	
// 			//modify page to fit naming convention
// 			$class = $page . '_controller';
// 			if (class_exists($class))
// 			{
// 				//this will create a class
// 				$controller = new $class;
// 				//get the class numbers of function
// 				$function_qty = $controller->get_num_func();
// 				//execute main function of that class and return an array of function
// 				$functions = $controller->main();
// 				//looping until number of method executed in that class
// 				for($i = 0; $i < $function_qty; $i++)
// 				{
// 					if($functions[$i][1] == "true")
// 					{
// 						//view model get return value from a method of that class
// 						$views[$i] = $controller->$functions[$i][0]();
// 					}
// 					else
// 					{
// 						$controller->$functions[$i][0]();
// 					}
// 				}
// 				//view
// 				$user_view = $controller->view();
// 				$viewpage = VIEW_ROOT.$user_view;
// 				if (file_exists($viewpage))
// 				{
// 					include_once($viewpage);
// 				}
// 				else
// 				{
// 					$this->get_controller("errorview");
// 					//purposely for debug
// 					include_once($viewpage);
// 				}
// 			}
// 			else
// 			{
// 				$this->get_controller("error");
// 				//purposely for debug
// 				//$controller = new $class;
// 			}
// 		}
// 		else
// 			{
// 				//$this->get_controller("home");
// 				$this->get_controller("errorrequest");
// 				//purposely for debug
// 				//include_once($target);
// 			}
//}

?>