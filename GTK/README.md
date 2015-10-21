#GTK

These are just some programs I made to learn to build GUIs with [GTK+-3.0](https://developer.gnome.org/gtk3/3.0/)

###Dependencies
To compile you will need 
1. gcc
2. gtk+-3.0

gcc should be installed in most linux distros.

To install on debian based linux distros use

```sudo apt-get install gcc gtk+-3.0```
###Compiling
To compile run 

```gcc -Wall -g helloworld.c -o helloworld `pkg-config --cflags gtk+-2.0` \
`pkg-config --libs gtk+-2.0``` 

Which would compile the file ```helloworld.c``` into the exectuable ```helloworld```.
