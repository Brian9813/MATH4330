This repository has my MATH 4330 HW2



1. Print the number of words of a sentence of your choice (seeecho, the pipeline operator andwcwith an appropriateflag)

2. Delete the standard output of a process of your choice

3. Delete the standard error of a process of your choice

4. The environment variablePATHcontains a colon-separated list (see it for yourself). 
Print this list to terminal asseparate rows (seetr: replace the colons with newline characters)

5. Store the standard output of the programpwdin a shell variable

6. Write a script that reads in two natural numbers from the keyboard and prints their sum to terminal (seereadandlet).

7. The pipeline operator|turns the standard output (aka. stdout) of a command into the standard input (aka. stdin)of the next one. 
How can I turn the standarderror(aka. stderr), and only that, into the standard input? 
Do so byfirst redirecting stderr to stdout, then redirecting stdout to/dev/null, then using the pipeline. 
Do an examplewith a first command that yields an error (e.g.,cdto a non-existing directory), andtrof some character to anotheras 
the second command.

8. Consider the script#!/bin/bashecho This script has $# arguments.echo They are $*Here,$#yields the number of command line 
arguments given to the script, and$*yields their list.Change the script so that•if no argument is provided, “They are” isn’t 
printed;
  •if exactly 1 argument is provided, “... 1 argument” rather than “... 1 arguments” is printed.(seeif)
  
  9. In many versions of the shell there is a-iargument forcpso that you will be prompted for confirmation if you are about to 
  overwrite a file. Write a script called cpi which will prompt if necessary without using the-iargument.(seetest)
  
  10. Create a set of files whose name is of the typefile-#.txt, where#goes from 41 to 90. Rename each of them
  (with another loop) by replacing the dash with an underscore
