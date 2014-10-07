<?php

if(empty($_POST))
{
	exit;
}

foreach($_POST as $key => $value)
{
	if($key == "submit") 
	{
		exit;
	}
}