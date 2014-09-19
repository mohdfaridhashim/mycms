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
			            <div class="thumbnail">
				            <h4>About</h4>
				            <p>Etiam porta <em>sem malesuada magna</em> mollis euismod. Cras mattis consectetur purus sit amet fermentum. Aenean lacinia bibendum nulla sed consectetur.</p>
				        </div>
				        <div role="navigation">
			              <ul class="list-group">
				            <li class="list-group-item active">Coffee</li>            
				            <a href="http://getbootstrap.com/examples/offcanvas/#" class="list-group-item">Link</a>
				            <a href="http://getbootstrap.com/examples/offcanvas/#" class="list-group-item">Link</a>
				            <a href="http://getbootstrap.com/examples/offcanvas/#" class="list-group-item">Link</a>
				          </ul>
			        	</div><!--/span-->
			    </div>

		  </div>

	</div>
<?php include_once 'footer.php' ?>