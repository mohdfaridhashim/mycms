<!DOCTYPE html>
<head>
<title>Twitter Bootstrap Tutorial - A responsive layout tutorial</title>
<link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
<link href="style/style.css" rel="stylesheet" type="text/css" />

</head>
<body>

    <!-- Static navbar -->
    <div class="navbar navbar-static-top navbar-inverse" role="navigation">
      <div class="container">
        <div class="navbar-header">
          <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target=".navbar-collapse">
            <span class="sr-only">Toggle navigation</span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
          </button>
          <a class="navbar-brand" href="#">Project name</a>
        </div>
        <div class="navbar-collapse collapse">
          <ul class="nav navbar-nav navbar-right">
            <li><a href="../navbar/">Default</a></li>
            <li class="active"><a href="./">Static top</a></li>
            <li><a href="../navbar-fixed-top/">Fixed top</a></li>
          </ul>
        </div><!--/.nav-collapse -->
      </div>
    </div>
	<div class="container-fluid">
		  <div class="row-fluid">
			  	<div class="col-sm-9 main">
			      	<!--Body content-->
			      	<!--Title and description-->
			          <div class="jumbotron">
			            <h1>CAROUSEL</h1>
			            <p>This is an example to show the potential of an offcanvas layout pattern in Bootstrap. Try some responsive-range viewport sizes to see it in action.</p>
			          </div>
			        <!--Body content-->
			        <!-- featured article -->
			    <div class="marketing">

					<div class="col-md-4">
						<div class="petak">
				          <h2>Heading</h2>
				          <p>Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Etiam porta sem malesuada magna mollis euismod. Donec sed odio dui. </p>
				          <p><a class="btn btn-default" href="#" role="button">View details &raquo;</a></p>
				        </div>
			        </div>

					<div class="col-md-4">
						<div class="petak">
				          <h2>Heading</h2>
				          <p>Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Etiam porta sem malesuada magna mollis euismod. Donec sed odio dui. </p>
				          <p><a class="btn btn-default" href="#" role="button">View details &raquo;</a></p>
			      		</div>
			        </div>

					<div class="col-md-4">
						<div class="petak">
				          <h2>Heading</h2>
				          <p>Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Etiam porta sem malesuada magna mollis euismod. Donec sed odio dui. </p>
				          <p><a class="btn btn-default" href="#" role="button">View details &raquo;</a></p>
				        </div>
			    	</div>

				</div>
				<!-- News -->
				<div>
					&nbsp;
					<h3>Latest News</h3>
					<hr>
				</div>
				<div class="marketing">

			        	<div>
				          <h2>Heading</h2>
				          <p>Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Etiam porta sem malesuada magna mollis euismod. Donec sed odio dui. </p>
				          <p><a class="btn btn-default" href="#" role="button">View details &raquo;</a></p>
				        </div>

			        	<div>
				          <h2>Heading</h2>
				          <p>Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Etiam porta sem malesuada magna mollis euismod. Donec sed odio dui. </p>
				          <p><a class="btn btn-default" href="#" role="button">View details &raquo;</a></p>
				        </div>
			    </div>
			    <!-- Gallery-->
			    <div>
				    <h3>Gallery</h3>
				    <hr>
				</div>

				<div>
						  <div class="col-xs-6 col-md-3">
						    <a href="#" class="thumbnail">
						      <img data-src="holder.js/100%x180" alt="...">
						    </a>
						  </div>

						  <div class="col-xs-6 col-md-3">
						    <a href="#" class="thumbnail">
						      <img data-src="holder.js/100%x180" alt="...">
						    </a>
						  </div>

						  <div class="col-xs-6 col-md-3">
						    <a href="#" class="thumbnail">
						      <img data-src="holder.js/100%x180" alt="...">
						    </a>
						  </div>

						  <div class="col-xs-6 col-md-3">
						    <a href="#" class="thumbnail">
						      <img data-src="holder.js/100%x180" alt="...">
						    </a>
						  </div>

						  <div class="col-xs-6 col-md-3">
						    <a href="#" class="thumbnail">
						      <img data-src="holder.js/100%x180" alt="...">
						    </a>
						  </div>

						  <div class="col-xs-6 col-md-3">
						    <a href="#" class="thumbnail">
						      <img data-src="holder.js/100%x180" alt="...">
						    </a>
						  </div>

						  <div class="col-xs-6 col-md-3">
						    <a href="#" class="thumbnail">
						      <img data-src="holder.js/100%x180" alt="...">
						    </a>
						  </div>

						  <div class="col-xs-6 col-md-3">
						    <a href="#" class="thumbnail">
						      <img data-src="holder.js/100%x180" alt="...">
						    </a>
						  </div>

				</div>
			        <!--Body content-->
			    </div>
			    <div class="col-sm-3 sidebar">
			      <!--Sidebar content-->
			            <div>
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
			  		<footer>
        			<p> © Company 2014</p>
      			</footer>
	     <!-- Bootstrap core JavaScript
    ================================================== -->
    <!-- Placed at the end of the document so the pages load faster -->
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
    <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>

</body>
</html>