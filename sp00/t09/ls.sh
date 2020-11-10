# The path to the interpreter with which this script will be launched
#!/bin/bash
ls -hAl "$1" | awk '{print $9, $5}'
