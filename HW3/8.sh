# write a script that takes a string as command line argument corresponding to a filename, 
# sorts the lines of the inputfile in reverse alphabetical order, and stores the result to a file whose 
# name has in addition the suffixsorted(usesort).Test your script on the filenamescreated before


sort -r $1 > sorted.txt

cat sorted.txt
