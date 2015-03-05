<?php
	if(!isset($_COOKIE['loggedin'])){
		header("location:index.php");
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
      <style type="text/css">
          .style1
          {
              font-size: medium;
              color: #FFFFFF;
          }
      </style>
  </head>
<body>
<div class="wrapper">
	<div class="comingsoonBlk">
	<h1>Welcome!</h1>
	<br />   
		   <a href="logout.php" class="style2"> <span class="style1">Logout </span> </a>
	
	<p>&nbsp;</p>
	<div class="socialMedia">
		&nbsp;&nbsp;
	</div>
		<br class="clr">
	</div>
</div>
<div class="copyright">	bootstrappage.com &copy; 2013.</div>
</body>
</html>