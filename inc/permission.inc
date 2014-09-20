<?php
/* user permission*/


function user_permission($userid)
{
	$sql = "select userid,write,read,approved from permission where userid = '".$userid;
	$row = sql_query_single($sql);
	if($row)
	{
			$total = $row['write'] + $row['read'] + $row['approved'];

			if($total == 110)
			{
				//read and write
				return 110;
			}
			else if($total == 1110)
			{
				//read and write and approved (admin)
				return 1110;
			}

	}
	else
	{
			//read only -->guest
			return 0;
	}

}



?>