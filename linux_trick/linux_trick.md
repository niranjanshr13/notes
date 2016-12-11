# Give user as power
```
sudo visudo <--- command
username	ALL=(ALL:ALL)	'command'	<--- command that user can use as root.
```
# Mount ssh as a folder
```
mount sshfs
sudo sshfs -o allow_other,defer_permissions root@xxx.xxx.xxx.xxx:/ /mnt/
```
# Cron Helper
```
https://www.pantz.org/software/cron/croninfo.html
```
# pid
```
echo $0 <--- display the script name
echo $$ <--- show pid number of the script
```
# essid
```
iwgetid -r
```
# Show apps that use internet connection at the moment.
```
lsof -P -i -n
```
