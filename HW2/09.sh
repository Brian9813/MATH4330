numArgs=2


if ! [[ $# =~ $numArgs ]] ; then 
	echo incorrect number of arguments 
	exit 1
fi


if [ -e $1 ]
then
	if [ -e $2 ]
	then 
	        rm $2
		touch $2
		cat $1 > $2	
	else
		cp  $1 $2
	fi


else
	echo first file does not exist	
fi

