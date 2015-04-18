 
<div class="page-content">
    	<div class="row">
		  <div class="col-md-2">
		  	<div class="sidebar content-box" style="display: block;">
                <ul class="nav">
                    <!-- Main menu -->
                    <li class="current"><a href="users.php"><i class="glyphicon glyphicon-user"></i>Users</a></li>
  
                    <li><a href="role.php"><i class="glyphicon glyphicon-stats"></i> Roles</a></li>
                     <li ><a href="permission.php"><i class="glyphicon glyphicon-list"></i> Permission</a></li>
                    
                </ul>
             </div>
		  </div>
		  <div class="col-md-10">

		  	<div class="row">
  			</div>

  			<div class="content-box-large">
  				<div class="panel-heading">
				<div class="panel-options">
							</div>
  				<div class="panel-body">
  					<div class="table-responsive">
  					 <form method="post" action="user_success_select.php">
					<table cellpadding="0" cellspacing="0" border="0"  class="table table-striped table-bordered" >
						<thead>
							<tr>
							   
								<th>ID</th>
								<th>Name</th>
								<th>City</th>
								<th>State</th>
								<th>Residential Area</th>
								<th>Phone</th>
								<th>Role</th>
								
							</tr>
						</thead>
						<tbody>
  						<?php
                        if(isset($_POST['user_submit']) ){
                               if (isset($_POST['user'])) {
	                               $user=$_POST['user'];
	
		                            while( list ($key,$val) = @each ($user))
									{
									$result=$mysqli->query("select * from user where id=$val");
									 $result1 =  $mysqli->query("SELECT * FROM user_has_role where user_id=$val");
									  $result2 =  $mysqli->query("SELECT * FROM role ");
								      $num_results = $result->num_rows;
									 
                                     
                               		
									
                                    $row = mysqli_fetch_assoc($result)  ;
                                    $row1 = mysqli_fetch_assoc($result1); 
									echo "<div class=\"input-group\">";
									echo "<tr  > ";
									echo "<td ><input type=\"hidden\"  class=\"form-control\" id=";echo $row['id']." \" "." name=\"id[]\" value=";echo $row['id']." \" >".$row['id']."</td>";
									echo "<td >".$row['first_name']." ".$row['middle_name']." ".$row['last_name']."</td>";
							    	echo "<td><input type=\"text\" class=\"form-control\"  id=";echo $row['city']." \" "." name=\"city[]\"  value=";echo $row['city']." \" ></td>";
									echo "<td><input type=\"text\" class=\"form-control\"  id=\"state[]\" name=\"state[]\"   value=";echo $row['state']." \" ></td>";
									echo "<td><input type=\"text\" class=\"form-control\"  id=\"residential_area[]\" name=\"residential_area[]\"  value=\"";echo $row['residential_area']." \" ></td>";
									echo "<td><input type=\"text\" class=\"form-control\"  id=\"phone[]\" name=\"phone[]\"  value=\"";echo $row['phone']." \"></td>";
									echo "<td><select class=\"form-control\">";
									while( $row2 = mysqli_fetch_assoc($result2))
									echo "<option>".$row2['role_name']."</option>";
									
									echo "</select></td>";
									echo "</tr></div>";
                      				
									
									 
									 

						}}}?>
				                                   
                                                              
                                                      
                      
  					</div>
  				</div>
  			</div>
		


		  </div>
		</div>
    </div>
    	</form>
<br/>
<br/>
						
				
						</tbody>
					</table> 
					
				
	                                        <div class="col-md-12">
												&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
											
									<table >&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;	<td><form method="post" action="users.php">	<button class="btn btn-primary" type="submit">
													      Back
												</button></form></td>
												<td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;<button class="btn btn-default" type="reset">
													      Reset
												</button>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; </td> 
											<td><button class="btn btn-primary" type="submit" name="use_sub">
													<i class="fa fa-save"></i>
													Submit
												</button></td>&nbsp;</table>
											</div>
  				</div>
  			</div>



		  </div>
		</div>
    </div>

		  			</div>
		  		</div>
		  	</div>

		  </div>
		</div>
    </div>
	