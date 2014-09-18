<?php

function sql_query_single($sql){
	$result =mysql_query($sql);
	if(!$result)
	{
		write_error_log("Query Failed: ". mysql_error());
	}
	else
	{
		return mysql_fetch_assoc($result);
	}
	
}

function sql_query_array($sql){
	$result=mysql_query($sql);
	$rows = array();
	$i = 0;
	if(!$result)
	{
		write_error_log("Query Failed: ". mysql_error());
	}
	else
	{
		while ($row = mysql_fetch_assoc($result)) {
		    $rows[] = $row;
		}
		return $rows;
		//it will display as array[row]['content']
	}
	
}

function sql_query_update($sql){
	$result =mysql_query($sql);
	if($result)
	{
		return 1;
	}
	else
	{
		write_error_log("Query Failed: ". mysql_error());
		return 0;
	}
	
}

function sql_query_insert($sql){
	$result =mysql_query($sql);
	if($result)
	{
		return 1;
	}
	else
	{
		write_error_log("Query Failed: ". mysql_error());
		return 0;
	}
	
}

function sql_close(){
	mysql_close();
}