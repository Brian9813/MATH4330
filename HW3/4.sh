echo to be or not to be | tr " " _


touch tempFile

echo to be or not to be > tempFile

sed 's/ /_/g' tempFile

rm tempFile
