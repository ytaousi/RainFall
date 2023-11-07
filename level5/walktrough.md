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
the function n makes a call to printf whitout a format string so we can strat printing elements from the stack using 
```