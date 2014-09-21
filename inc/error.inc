<?php

function write_error($message,$file)
{
	trigger_error($message);
}

function write_error_log($stringData)
{
	$myFile = "log/error_log.txt";
	$stringData_log = date("Y-m-d h:i:sa")." : ".$stringData;
	$fh = fopen($myFile, 'a') or die("can't open file");
	fwrite($fh, $stringData_log);
	fclose($fh);
}

function read_error_log()
{
	$myFile = "log/error_log.txt";
	$fh = fopen($myFile, 'r');
	$theData = fgets($fh);
	fclose($fh);
	echo $theData;
}