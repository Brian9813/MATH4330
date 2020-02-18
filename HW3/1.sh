#echo This command does not work because the first argument 
# echo can be multiple things, but the second is where all of those 
# echo things go, and they cannot go to multiple places.  So the 
# echo second argument needs to be a static location, while the first
# echo can be multiple things put into that location 



for i in *
do 
    if [[ $i == *".C"* ]]
    then
        
        name=$(echo "$i" | cut -f 1 -d '.').c
        touch $name
        cat $i > $name
        rm $i
    fi
done
