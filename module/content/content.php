<?php




	if(user_permission('1') ==0 )
	{
		url_routing(define_module_combine('1000'),"makan");

	}
	include_once 'view/content.php';
	



	
?>