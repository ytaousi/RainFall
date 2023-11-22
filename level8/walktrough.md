```
after analyzing the program we can notice that it makes a serie of conditions before running system("/bin/sh")

first it reads our input and wait for one of those commands:

auth
service
login
reset

when auth is called  it allocate to a pointer then return the adress of the allocated pointer
when service is called it allocates also to a pointer and return its address, we can notice that it is just after the pointer created but auth function so the pointer are created one after another and thats because of malloc() then it will call system("/bin/sh") if auth[32] is different to 0

so we need to keep allocating until the value of auth[32] become different to 0
```