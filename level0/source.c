#include <unistd.h>
#include <stdlib.h>
int main(int param_1,int param_2)

{
  int userInputVar;
  char *array;
  unsigned int userIdVar;
  unsigned int groupIdVar;
  
  userInputVar = atoi(*(char **)(param_2 + 4));
  if (userInputVar == 0x1a7) // this is value 423 in hex
  {
    array = strdup("/bin/sh");
    groupIdVar = getegid();
    userIdVar = geteuid();
    setresgid(groupIdVar,groupIdVar,groupIdVar);
    setresuid(userIdVar,userIdVar,userIdVar);
    execv("/bin/sh",&array);
  }
  else {
    fwrite("No !\n",1,5,(FILE *)stderr);
  }
  return 0;
}

