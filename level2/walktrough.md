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
if we override the value adress of the ret the program will exit and thats because of the canary value that is checked , logically we need to look at the heap now and try to jump to that address and use it
```