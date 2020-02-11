if [ $# -gt 1 ]
then
	echo This script has $# arguments.
	echo They are $*
else
	if [ $# -eq 1 ]
	then
		echo This script has $# argument.
		echo It is $*
	else
		echo This script has $# arguments.
	fi
fi
