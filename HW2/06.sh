prompt='Enter A Number'


echo $prompt
read mario



re='^[0-9]+$'
if ! [[ $mario =~ $re ]] ; then
   echo "error: Not a number" >&2
   exit 1
fi

echo $prompt
read max

if ! [[ $max =~ $re ]] ; then
   echo "error: Not a number" >&2
   exit 1
fi


let out=$mario*$max


echo $mario X $max = $out
