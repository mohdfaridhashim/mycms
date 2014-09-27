<?php
/*
*	Session config
*/
if(!isset($_SESSION)){session_start();}

/* Authentication based on session */
function checkAuth()
{
	if (!(isset($_SESSION['login']) && $_SESSION['login'] != '')) {
		return false;
	}
	else
	{
		return true;
	}
}

function Generate_ID()
{
	return session_id();
}

function destroy($session)
{
	if(isset($_SESSION[$session]))
	{
		unset($_SESSION[$session]);
	} 	
}

function complete_destroy()
{
	session_destroy();
}

function set_token()
{
	$token = md5(Generate_ID());
	$_SESSION['token'] = $token;	
}

function get_token()
{
	return $_SESSION['token'];
}