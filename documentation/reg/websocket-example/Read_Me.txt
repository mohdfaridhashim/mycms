Running Server :

1. Change host address in index.php and server.php

2. Go to your shell command-line interface

3. type: 
	php -q c:\path\server.php

4. Using browser, navigate to index.php location to open chat page, have fun!



http://www.saaraan.com
http://www.sanwebe.com/2013/05/chat-using-websocket-php-socket/comment-page-1#comments

//cron

WebSocket Server by PHP has same specials.
Simple WSS:
* wss should control memory usage;
* it can be close via specail command
* wss can be run as deamon:
nohup php server.php > error_log &
* you should control, then wss is working, example: run cron job (1 per min…) with simple sh script:

PROGRAM=”server.php”
PID=`ps -aef | grep “$PROGRAM” | grep -v grep | awk ‘{print $2}’`

if [ -z $PID ]
then
echo “server.php does not run.”
nohup php server.php > error_log &
else
echo “PID: ”
echo $PID
fi