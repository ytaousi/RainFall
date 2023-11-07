![all function](./resources/functions.png "functions")

```
as we can see the main is simple it calls a function p().
```
![main function](./resources/main_function.png "main function")

```
....
```
![p function](./resources/p_function.png "p function")
```
as the source.c shows the function p() is doing a check on the return address then it allocates to our input into the heap using a call to the strdup() function internally strdup calls malloc() and using ltrace we can notice that whenver we run the program it returns the same addresse where it allocated our input so we can start writing from that address
```