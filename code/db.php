<?php

$mysql_hostname = "LOCALHOST";
$mysql_username = "HD";
$mysql_password= "1234";
$mysql_database= "HS";

//$link = mysql_connect($mysql_hostname, $mysql_username,$mysql_password);
$mysqli = new mysqli($mysql_hostname, $mysql_username,$mysql_password,$mysql_database);
/*if (!$link) {
    die('Could not connect: ' . mysql_error());
}
echo 'Connected successfully';




//or die("something is broken");*/

//mssql_select_db($mysql_database , $mysqli) or die ("couldn't find database");


//mysql_close($link); 
/*$mysqli = new mysqli($mysql_hostname, $mysql_username,$mysql_password,$mysql_database);

/* check connection 
if ($mysqli->connect_errno) {
    printf("Connect failed: %s\n", $mysqli->connect_error);
    exit();
}*/


?>	