<?php

/*
	created by mohd farid hashim
	check POST request to identify the POST request validity
	prevent hacking
	
*/

function validate_POST($key_function)
{
	foreach ($_POST as $key => $value) {
  	//print "{$key}: {$value}<br />";
		if($key == $key_function)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}