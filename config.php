<?php

/* run the library */

$dir = "inc";

// Below is another solution you can use, but you must have all your files inside a folder of your application, 
// you can then search a folder for all PHP files and include all these files in your application. 
// This uses the PHP function glob() which will search for a pattern of file names and return them as an array. 
// You can use this array to loop through the values and include the file, like the following code.
foreach (glob($dir."/*.inc") as $filename)
{
    include_once $filename;
}

?>