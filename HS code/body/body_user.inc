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
				</div>
  				<div class="panel-body">
  					<div class="table-responsive">
  					 <form method="post" action="user_select.php">
					<table cellpadding="0" cellspacing="0" border="0" class="table table-striped table-bordered" id="example">
						<thead>
							<tr>
							    <th></th>
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
							  
								$result =  $mysqli->query("SELECT * FROM user");
								$result1 =  $mysqli->query("SELECT * FROM user_has_role");
								
						        $count = $result->num_rows;
						        $count1 = $result1->num_rows;
							  
						        
								
						       while ( $row1 = mysqli_fetch_assoc($result1) )
                                { 
								     $row = mysqli_fetch_assoc($result);
									 $va=$row['id'];
                                     echo "<tr> ";
								echo "	<td class=\"style1\">
										<label>
										<input type=\"radio\" name=user[] value=$va >
										</label></td> ";
						           echo "<td>".$row['id']."</td>"."<td>".$row['first_name']." ".$row['middle_name']." ".$row['last_name']."</td>";
								  echo "<td>".$row['city']."</td>";
									echo "<td>".$row['state']."</td>";
									echo "<td>".$row['residential_area']."</td>";
									echo "<td>".$row['phone']."</td>";
									
								  echo "<td>".$row1['role_role_id']."</td>";
								    echo "</tr>";
								  
								}
						
						          
	                    
                               ?>
							
							
							 
											
				
						</tbody>
					</table> 
					
					<input name="user_submit" id="user_submit" type="submit" value="Edit" class="btn btn-primary"/> 
		</form>
					
		
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
