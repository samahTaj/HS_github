
  <head>
    <title>Housing Management System</title>
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <!-- Bootstrap -->
    <link href="bootstrap/css/bootstrap.min.css" rel="stylesheet">
    <!-- styles -->
    <link href="css/styles.css" rel="stylesheet">

    <!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries -->
    <!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
    <!--[if lt IE 9]>
      <script src="https://oss.maxcdn.com/libs/html5shiv/3.7.0/html5shiv.js"></script>
      <script src="https://oss.maxcdn.com/libs/respond.js/1.3.0/respond.min.js"></script>
    <![endif]-->
  </head>
  <body class="login-bg">
  	<div class="header">
	     <div class="container">
	        <div class="row">
	           <div class="col-md-12">
	              <!-- Logo -->
	              <div class="logo">
	                 <h1><a href="users.php">Housing Management System</a></h1>
	              </div>
	           </div>
	        </div>
	     </div>
	</div>

	<div class="page-content container">
		<div class="row">
			<div class="col-md-4 col-md-offset-4">
				<div class="login-wrapper">
			        <div class="box">
			            <div class="content-wrap">
		<form action="<?php echo $_SERVER['PHP_SELF']  ?>" method="post">
			<h1>Login </h1>
			<div>
				<input name="SID" id="SID" type="text" placeholder="Student ID"   required=""/>
			</div>
			<div>
				<input name="Pass" id="Pass" type="password" placeholder="Password" required=""/>
			</div>
			<div>
				<input class="btn btn-primary" name="Login_submit" id="Login_submit" type="submit" value="Log in" />
				
			</div>
		
		</form><!-- form -->
		<div class="button">
			<span id="AlertMessage" style="color:red">

                        </span>
		<?php
			if(isset($_POST['Login_submit']) && login_check($mysqli) != true )
  			echo "<script>AlertMessage.innerText = \"Your Login ID or Password is invalid\";</script>";
		?>
		</div><!-- button -->
		
</div>
			        </div>

			        
			    </div>
			</div>
		</div>
	</div>



    <!-- jQuery (necessary for Bootstrap's JavaScript plugins) -->
    <script src="https://code.jquery.com/jquery.js"></script>
    <!-- Include all compiled plugins (below), or include individual files as needed -->
    <script src="bootstrap/js/bootstrap.min.js"></script>
    <script src="js/custom.js"></script>
  </body>
</html>