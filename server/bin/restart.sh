#!/bin/bash
SESSION="worldserver_434"
DAEMON="screen -d -m -S $SESSION /home/wowx/trinity/4.3.4/server/bin/restart_check.sh"
screen -r $SESSION -ls -q 2>&1 >/dev/null
echo -e ""
echo "4.3.4 Worldserver has been launched into the background."
echo -e ""
if [ $? -le 10 ]; then
      echo "Restarting $DAEMON"
      $DAEMON
fi
wait