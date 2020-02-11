cd workingDirScript10

echo at begining
ls -l

for i in $(seq 41 90)
do
	touch file-$i.txt
done 


echo 
echo
echo with dash
ls -l


for i in $(seq 41 90)
do
	mv file-$i.txt file_$i.txt
done

echo
echo
echo with underscore
ls -l



rm *.txt
