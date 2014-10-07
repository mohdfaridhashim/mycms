<?php

$user_agent = $_SERVER['HTTP_USER_AGENT']; 

if (preg_match('/MSIE/i', $user_agent)) { 
   echo "Internet Explorer";
} else {
   echo "Non-IE Browser";
} 

?>