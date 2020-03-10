This has my hw3 for math 4330 in it


HW 3 - due Tuesday, February 18, in classWrite each answer as an executable script file called#.sh, where#=1,2,...
You’ll upload these files (along with auxiliary input files that may be needed for some questions) in class in our fileserver, 
inside a folderhw3that you will create in your personal directory.

1. Suppose you wanted to change the suffix of all your.Cfiles to.c.
Doing mv*.C*.cwon’t work (why? think about what exactly the line expands to).
Write a script for that purpose.

2. Write a one-line script that finds files whose names have at least one whitespace 

3. Write a script that does the same as the previous one, and then renames the files by replacing the whitespace with an 
underscore.

4. Substitute the whitespaces in the sentence “To be or not to be” with underscores. 
Use echo and the pipeline togenerate the sentence and pass it to standard input. 
Show how to perform the substitution both with sed and with tr. 
Since whitespace is a metacharacter in the shell, show how to handle it with all three quoting mechanisms
(escape character, single quotes, double quotes).


5. Create a text file with 5 lines. Insert a line containing the stringAnd the Oscar goes to...exactly at linenumber 3, 
and in doing so remove the previous line (seesed).

6. Create a text file with 5 lines. Insert a line containing the stringAnd the Oscar goes to...exactly at linenumber 3, 
without replacing the previous line (seesed).7. Suppose you want to write the same letter to many people except that you want 
each letter addressed to the senderspersonally. This can be created using a shell script.Put the names of the recipients 
(one per line) in a file callednames. Create a textfile calledtemplatewhich has thestringNAMEwherever you want the person’s 
name to appear (e.g.,Dear NAME, ...). Finally, write a script that produces one file per name 
(call each file using the person’s name with suffix.txt), containing the personalizedletter obtained from the template file 
(usesed).

8. Write a script that takes a string as command line argument corresponding to a filename, sorts the lines of the inputfile 
in reverse alphabetical order, and stores the result to a file whose name has in addition the suffixsorted(usesort).
Test your script on the file names created before.
