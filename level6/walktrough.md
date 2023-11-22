![](./resources/ltrace_level6.png)

```
in the main function we can see an allocation for 64 bit then 4 bit then argv[1] is copied to the allocated memory on the heap using strcpy which is unsafe .

the program has a function n that was never called that we will try to trigger using our payload

we will use our input to override the memory area on the heap until the instruction pointer

after figuring out that size of the padding we need to get to the instruction pointer we can inject our payload 

python -c 'print "A" * 72 + "\x54\x84\x04\x08"'
```