#GTK

These are just some programs I made to learn to build GUIs with GTK+-3.0

###Compiling
To compile run 

```gcc -Wall -g helloworld.c -o helloworld `pkg-config --cflags gtk+-2.0` \
`pkg-config --libs gtk+-2.0``` 

Which would compile the file ```helloworld.c``` into the exectuable ```helloworld```.
