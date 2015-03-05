-
<?php
    include('db.php');
	
	//$selected = mysql_select_db("login", $dbhandle);

		if(isset($_POST['user']) && isset($_POST['pass'])){
			$user1 = $_POST['user'];
			$pass1 = $_POST['pass'];

			$query = $mysqli->query("SELECT id FROM user WHERE id=$user1");
			//$query1 = $mysqli->query("SELECT pass FROM user WHERE pass=$pass1");
			//$r=$query->num_rows;
			//$r1=$query1->num_rows;
			//$t=$r +$r1;
			if( $query->num_rows > 0 ) { //check if there is already an entry for that username
				echo "Username already exists!";
				
			}else{
				$mysqli->query("INSERT INTO user (id,pass) VALUES ($user1, $pass1)");
				echo "<script>				          alert('Welcome.')</script>";
				//$mysqli->query1("INSERT INTO user (id,pass) VALUES ($user1, $pass1)");
			     
				header("location:ind.php");
				
			}
	
		}
?>


<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <title>Comning soon page: bootstrap free templates</title>
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="description" content="">
    <meta name="author" content="bootstrappage.com">
<!-- Bootstrap style  --> 
    <link href="assets/css/bootstrap.min.css" rel="stylesheet"/>
	<link href="assets/css/comingsoon.css" rel="stylesheet"/>
<!-- Bootstrap style responsive -->
	<link href="assets/css/bootstrap-responsive.min.css" rel="stylesheet"/>
  </head>
<body>
<div class="wrapper">
	<div class="comingsoonBlk">
	<h1>Register</h1>
	<p>&nbsp;</p>
	<div class="socialMedia">
		&nbsp;&nbsp;
	</div>
    <form action="ind.php" method="POST">
				<p>Username:</p><input type="text" name="user" />
				<p>Password:</p><input type="password" name="pass" />
				<br />
				<input type="submit" value="Signup!" />
			</form>
			<br class="clr">
	</div>
</div>
<div class="copyright">	bootstrappage.com &copy; 2013.</div>
</body>
</html>