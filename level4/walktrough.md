https://axcheron.github.io/exploit-101-format-strings/

objdump -t ./level4 | grep "m"   <-> address of the variable m in the bss section

0x8049810  -> address of variable m
0x1025544 -> 16930116 in decimal

0x0102 -> 258 in decimal -> at 0x1980408 + 2 = 0x198040A
0x5544 -> 21828 -> at 0x1980408

lets break it :

- i want to write the value 0x1025544(16930116 in decimal) in the variable m (0x8049810)
- 0x0102 (258 in decimal) at address 0x8049812 (0x8049810 + 2) 
- 0x5544 (21828 in decimal) at address 0x8049810