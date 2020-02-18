#Create a text file with 5 lines. Insert a line containing the string And the Oscar goes to...
#exactly at linenumber 3, and in doing so remove the previous line (seesed).

touch fiveLineFile

echo This is the first line >> fiveLineFile
echo This is the second line >> fiveLineFile
echo This is the third line >> fiveLineFile
echo This is the fourth line >> fiveLineFile
echo This is the fifth line >> fiveLineFile

sed '3 c\And the ocsar goes to' fiveLineFile

rm fiveLineFile
