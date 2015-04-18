<head>
    <style type="text/css">
        #NewRoleName
        {
            width: 158px;
        }
        #OldRoleName
        {
            width: 158px;
        }
        #NewRoleName0
        {
            width: 140px;
        }
        .form-group
        {
            width: 516px;
            height: 116px;
        }
        .input-group
        {
            width: 205px;
        }
        </style>
<script type="text/javascript">



</script>
</head>
<div class="page-content">
    	<div class="row">
		  <div class="col-md-2">
		  	<div class="sidebar content-box" style="display: block;">
                <ul class="nav">
                    <!-- Main menu -->
                    <li ><a href="users.php"><i class="glyphicon glyphicon-user"></i> Users</a></li>
                    <li class="current" ><a href="role.php"><i class="glyphicon glyphicon-stats"></i> Roles</a></li>
                    <li><a href="permission.php"><i class="glyphicon glyphicon-list"></i> Permission</a></li>
                </ul>
             </div>
		  </div>
		  <div class="col-md-10">
		  	<div class="row">
		  		<div class="col-md-6">
		  			<div class="content-box-large">
		  				&nbsp;<br /><br />
		  				<div class="panel-heading">
						</div>
		  				<div class="panel-body">
		  					<div id="rootwizard">
								<div class="navbar">
								  <div class="navbar-inner">
								    <div class="container">
								<ul class="nav nav-pills" id="nav1">
								 	<li class="active" id="t1"><a href="#tab1" data-toggle="tab"  >Add Role</a></li>
									<li class="" id="t2"><a href="#tab2" data-toggle="tab"   >Edit Role</a></li>
								</ul> 
								 </div>
								  </div>
								</div>
								<div class="tab-content">
								    <div class="tab-pane active" id="tab1">
									
								      <form class="form-horizontal" role="form" action="" method="post">
										  <legend></legend> <div class="form-group">
                                        <div class="form-group">
											<div class="col-md-10">
												<div class="row">
													<div class="col-sm-12">
											<label class="control-label col-md-3" for="inputEmail3"> Role Name
                                                        <div class="input-group">
															
															<input type="text" class="form-control" name="role_name"  id="role_name" placeholder="Role Name" required=""/>
														</div>
														
													    </label>
													</div>
												</div>
											</div>
											</div>
										</div>
                                          <br />
										  	<br />
										  	<br/>	
                                      			 <div class="button">
                                         
                                 			<span id="AlertMessage" style="color:red">

                                              </span>
										  <?php
		                                     	if(isset($_POST['addrole_submit']) && add_role($mysqli) != true )
  		                                    	echo "<script>AlertMessage.innerText = \"Role name is existing \";</script>";
		                                   ?>
										   </div><!-- button -->								
											<div class="button">
                                           <span id="AlertMessage1" style="color:green">

                                              </span>
										  <?php
										       
		                                     	if(isset($_POST['addrole_submit']) && add_role($mysqli) == true )
  		                                    	echo "<script>AlertMessage1.innerText = \"Done \";</script>";
		                                   ?>
										   </div><!-- button -->
											<input name="addrole_submit" id="addrole_submit" type="submit" value="Add" class="btn btn-primary"/>
												
										</form>
										
									
								    </div>
								    <div class="tab-pane" id="tab2">
								      <form class="form-inline" role="form" action="" method="post" >
							<fieldset><legend></legend>
											    <div class="col-md-10">
												   <div class="row">
													   <div class="col-sm-12">
														   <div class="input-group">		
                                           <div class="form-group">
											<label class="control-label col-md-3" for="inputEmail3">&nbsp;&nbsp;Old Role Name&nbsp; 
                                               <br />
                                               &nbsp; 
                                               <input class="form-control" placeholder="Old Role Name" type="text"name="OldRoleName" id="OldRoleName"required=""/ ></label><br />
                                               <br /> 
                                               <br />
                                               <br />
                                               <br /> 
                                           
															
															   <label class="control-label col-md-3" for="inputEmail3">New Role Name&nbsp;&nbsp; 
                                               <br />
                                               &nbsp; 
										         			<input class="form-control" placeholder="New Role Name" type="text" name="NewRoleName" id="NewRoleName" required=""/ ></label>
															
														<br />
                                               <br />
															
														</div>
													</div>
												</div>
											</div>
										</div> <br/>
														 
			                             <br/>
			                             &nbsp;</fieldset>
                                         <div class="button">
                                         
                                 			<span id="AlertMessage11" style="color:red">

                                              </span>
										  <?php
		                                     	if(isset($_POST['editrole_submit']) && edit_role($mysqli) != true )
  		                                    	echo "<script>AlertMessage11.innerText = \"Role name is existing \";</script>";
		                                   ?>
										   </div><!-- button -->								
											<div class="button">
                                           <span id="AlertMessage12" style="color:green">

                                              </span>
										  <?php
		                                     	if(isset($_POST['editrole_submit']) && edit_role($mysqli) == true )
  		                                    	echo "<script>AlertMessage12.innerText = \"Done \";</script>";
		                                   ?>
										   </div><!-- button -->
											  <br /><br />  <br /><br />
								     	<input  name="editrole_submit" id="editrole_submit" type="submit" value="Edit" class="btn btn-primary"/>
							        </form>
								    </div>
									                <br /><br />
													
											
								</div>	
						
		  				</div>
		  			</div>
		  		</div>

		  	</div>

		  </div>
		</div>
    </div>