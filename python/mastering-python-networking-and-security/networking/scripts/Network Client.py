# pass the argument to work
# and listen port 9999 from netcat. <-- nc -l 9999
import sys
import socket
host = 'localhost'
mysock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
addr = (host,9999)
message = sys.argv[1]
ma = str(message) +' \n'
mysock.connect(addr)

try:
        msg = ma
        mysock.sendall(msg)
except socket.errno as e:
        print("sucks", e)
finally:
        mysock.close()
