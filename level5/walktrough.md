```
exit() address : 08049838

o() address : 0x80484a4
```

![](./resources/Screen%20Shot%202023-11-04%20at%2012.10.05%20AM.png)

```
lets check the binary using gdb 
```
![](./resources/Screen%20Shot%202023-11-04%20at%2012.52.48%20AM.png)
```
we can clearly see the bundled function's and the addresse's lets disassemble our main
```
![](./resources/Screen%20Shot%202023-11-04%20at%2012.52.29%20AM.png)
```
main makes a simple call to the function n() lets disassemble it
```
![](./resources/Screen%20Shot%202023-11-04%20at%2012.52.10%20AM.png)

```
the function n makes a call to printf whitout a format string so we can strat printing elements from the stack.

we can see that the program cal exit() at the end of our function unstead of returning to the caller function ,  so we cant override the return address this time and we will be overriding the the address of exit function in the global offset table with the adress of the function o.

after difining the offset of where our input is being stored we inject the address of exit function then modify its content using the n modifier



python -c 'print "\x38\x98\x04\x08" + "%134513824d" + "%4$n"'
```