<?php

function movepage($file)
{
	//$url = SERVER."/".$file;
	$url = $file;
   header("Location: $url");
}
