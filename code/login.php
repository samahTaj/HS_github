<?php

session_start();
include('db.php');
	/*$username = "HD";
	$password = "1234";
	$hostname = "localhost";
	
	$dbhandle = mysql_connect($hostname, $username, $password) or die("Could not connect to database");
	
	$selected = mysql_select_db("login", $dbhandle);*/
	
	$myusername = $_POST['user'];
	$mypassword = $_POST['pass'];
	
	$myusername = stripslashes($myusername);
	$mypassword = stripslashes($mypassword);
	
	/*$query = "SELECT * FROM users WHERE Username='$myusername' and Password='$mypassword'";
	$result = mysql_query($query);*/
	//$count = mysql_num_rows($result);
	$result =  $mysqli->query("SELECT id FROM user WHERE id=$myusername and pass=$mypassword");
   // $num_results = $result->num_rows;
	$count = $result->num_rows;
//if (!$result ){
  //  echo "Could not successfully run query () from DB: " . mysql_error();
    //exit;
//}

	
	
	if($count==1){
		$seconds = 5 + time();
		setcookie(loggedin, date("F jS - g:i a"), $seconds);
		header("location:login_success.php");
	}else{
		echo 'Incorrect Username or Password';
	}
	
?>