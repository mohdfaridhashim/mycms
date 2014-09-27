<?php

if(checkAuth() == false)
{
	movepage("index.php");
	exit();
}

url_routing(define_module_combine('1001'),"Logged Out&<center>You have logged out of the application.</center>");
include 'view/logout.php';
?>