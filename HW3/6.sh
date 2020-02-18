#Create a text file with 5 lines. Insert a line containing the stringAnd the Oscar goes to...exactly 
#at linenumber 3, without replacing the previous line (seesed)

touch fiveLineFile

echo This is the first line >> fiveLineFile
echo This is the second line >> fiveLineFile
echo This is the third line >> fiveLineFile
echo This is the fourth line >> fiveLineFile
echo This is the fifth line >> fiveLineFile

sed '3 i\And the ocsar goes to' fiveLineFile

rm fiveLineFile
