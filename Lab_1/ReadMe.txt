Name: Yushu Liu
Lab #: Lab 1

Testing Cases: 

1. 
H:\Rep\lab1-Androstane\Debug>Lab_1.exe
Wrong number of argument
usage:Lab_1.exe Name of your input file

- Input containing only 1 argument, printed usage message and return input_length error. Exit. 

2. 
H:\Rep\lab1-Androstane\Debug>Lab_1.exe nosuchfile.txt
Error opening file.

- Input file does not exist, print Error opening file and return fileopen_error. Exit. 

3. 
H:\Rep\lab1-Androstane\Debug>Lab_1.exe test.txt
abcd
abc
icd
123
123
123

H:\Rep\lab1-Androstane\Debug>cat test.txt
123 abcd
123 abc
icd 123

- Input length correct and file exist, first print all strings contains not only number, 
then print all string contain only number, spaces are ignored. 


4. 
H:\Rep\lab1-Androstane\Debug>Lab_1.exe test_1.txt
y6543
67iliuh
89u8236
hfa
uhf
ka
123
346

H:\Rep\lab1-Androstane\Debug>cat test_1.txt
y6543
67iliuh
89u8236

hfa
123
346
uhf ka

- Input length correct and file exist, first print all strings contains not only number, 
then print all string contain only number, spaces&empty lines are ignored.


5. 
H:\Rep\lab1-Androstane\Debug>Lab_1.exe test.txt test_1.txt
Wrong number of argument
usage:Lab_1.exe Name of your input file

- Although both of input file exist, the input length is not correct. 
so printed usage message and return input_length error. Exit.



- Error Encountered when biuld solution: 
None




Extra Credit: 

- Log in to Linux: 
(base) H:\>ssh yushu.liu@shell.cec.wustl.edu
yushu.liu@shell.cec.wustl.edu's password:
Last login: Tue Sep 18 13:05:28 2018 from rdsh03-fl18.seas.wustl.edu
##### ATTENTION #####

shell.cec is no longer suited for
computationally-heavy tasks.

Please use 'qlogin' to obtain a
terminal on one of the LinuxLab
hosts.

Thank you!

EIT

#####
[yushu.liu@shell ~]$ 


- Compiling:

[yushu.liu@shell lab1]$ make
g++ -o Lab_1 -DUNIX   -Wall -W -g -pedantic Lab_1.cpp -lnsl


-Error & Warning： None


- Test Cases; 
1. 
[yushu.liu@shell lab1]$ ./Lab_1
Wrong number of argument
usage:./Lab_1 Name of your input file


2. 
[yushu.liu@shell lab1]$ ./Lab_1 123 234
Wrong number of argument
usage:./Lab_1 Name of your input file

3.
[yushu.liu@shell lab1]$ ./Lab_1 nosuchfile.txt
Error opening file.

4. 
[yushu.liu@shell lab1]$ ./Lab_1 test.txt
ert
23r4
fr45
12dr
123
12
4564
[yushu.liu@shell lab1]$ cat test.txt

123

ert
23r4
12
fr45
4564
12dr

5. 
[yushu.liu@shell lab1]$ ./Lab_1 test.txt nosuchfile.txt
Wrong number of argument
usage:./Lab_1 Name of your input file
