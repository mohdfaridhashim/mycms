<?php
/*
connecting to mysql database
hostname : localhost
username : root
password : 
*/
$con = mysql_connect("localhost","root","");
if(!$con)
{
die("connection to database failed".mysql_error());
}

/* selecting the database "newcms" */
$dataselect = mysql_select_db("newcms",$con);
if(!$dataselect)
{
die("Database namelist not selected".mysql_error());
}

define("TITLE", "My New CMS");
define("SERVER", $_SERVER['SERVER_NAME']);
define("INDEX", "index_1.php");


?>