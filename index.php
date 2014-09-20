<?php include_once 'header.php'; ?>
<body>

    <!-- Static navbar -->
    <?php include_once 'nav.php' ?>
	<div class="container-fluid">
		  <div class="row-fluid">
			  	<div class="col-sm-9 main">
			      <?php
			      url_routing(define_module()); 
			      ?>

				</div>
			        <!--Body content-->
			    </div>
			    <div class="col-sm-3 sidebar">
			      <!--Sidebar content-->
			         <?php
			      		url_routing(define_module_sidebar()); 
			      	 ?>
			    </div>

		  </div>

	</div>
<?php include_once 'footer.php' ?>