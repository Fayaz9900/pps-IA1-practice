gcc -g p9final.c
 gdb a.out
GNU gdb (Ubuntu 8.1.1-0ubuntu1) 8.1.1
Copyright (C) 2018 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from a.out...done.
(gdb) b main
Breakpoint 1 at 0x8a2: file p9final.c, line 36.
(gdb) r
Starting program: /home/runner/pps-test1-Fayaz9900-2/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p9final.c:36
36  {
(gdb) n
39    input(str1,str2);
(gdb) n
enter the first string:
hello
 
 gcc -g p10final.c
 gdb a.out
GNU gdb (Ubuntu 8.1.1-0ubuntu1) 8.1.1
Copyright (C) 2018 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
---Type <return> to continue, or q <return> to quit---b main
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from a.out...done.
(gdb) r
Starting program: /home/runner/pps-test1-Fayaz9900-2/a.out 
warning: Error disabling address space randomization: Operation not permitted
enter the real part:
4
enter the imaginary part:3
enter the real part:
4
enter the imaginary part:
3
the sum is 8.00000+6.00000i [Inferior 1 (process 126) exited normally]
(gdb) 