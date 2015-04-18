<?php 
if (isset($_POST['hd'])) {
	$hd=$_POST['hd'];
	
	while (list ($key,$val) = @each ($hd)) {
		$table = "INSERT INTO role_has_permission  VALUES ('3','$val')";
            $mysqli->query($table) ;
                                       	}
    include('body/done.txt');
}
 
 elseif (isset($_POST['sup'])) {
	$sup=$_POST['sup'];
	
	while (list ($key,$val) = @each ($sup)) {
		$table = "INSERT INTO role_has_permission  VALUES ('2','$val')";
            $mysqli->query($table) ;
	                                        }
	include('body/done.txt');										
}

elseif (isset($_POST['std'])) {
	$std=$_POST['std'];
	
	while (list ($key,$val) = @each ($std)) {
		$table = "INSERT INTO role_has_permission  VALUES ('1','$val')";
            $mysqli->query($table) ;
	                                        }
	include('body/done.txt');										
}
else {
include('body/body_permission.inc');
}
?>