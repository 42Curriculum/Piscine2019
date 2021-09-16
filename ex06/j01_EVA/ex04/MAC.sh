ifconfig | grep ether --word-regexp | sed 's/\ether //' | tr -d "[:blank:]"
