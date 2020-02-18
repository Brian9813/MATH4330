# Suppose you want to write the same letter to many people except that you want each letter addressed to
# the senderspersonally. This can be created using a shell script.Put the names of the recipients (one per line)
# in a file called names. Create a textfile called templatewhich has thestring NAME wherever you want the person’s name to appear (e.g.,Dear NAME, ...). Finally, write a script thatproduces one file per name (call each file using the person’s name with suffix.txt), containing the personalizedletter obtained from the template 
#file (usesed

#make names file
touch names.txt
echo Brian >> names.txt
echo Kelsie >> names.txt
echo Max >> names.txt
echo Mario >> names.txt
echo Comet >> names.txt
echo Blitz >> names.txt
echo Luna >> names.txt
echo Asher >> names.txt


#make template file

touch template.txt


printf "Dear NAME, \nThis is a completely unique letter that I am writing to you, NAME because I care so much about what you, NAME think of me.  \nI would never use an easy linux script to write one letter for everyone because I care about you, NAME so very much. Again NAME \nthis is a unique letter just for you." > template.txt
#used printf for the newline charcters in the letter 




while read i; 
do
    touch $i.Letter.txt
    cat template.txt > $i.Letter.txt
    sed -i "s/NAME/$i/g" $i.Letter.txt
    cat $i.Letter.txt
    printf "\n\n"
done < names.txt









rm template.txt *.Letter.txt
