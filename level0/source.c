#include <unistd.h>
int main(int param_1,int param_2)

{
  int userInputVar;
  char *array;
  unsigned int userIdVar;
  unsigned int groupIdVar;
  
  userInputVar = atoi(*(char **)(param_2 + 4));
  if (userInputVar == 0x1a7)
  {
    array = strdup("/bin/sh");
    groupIdVar = getegid();
    userIdVar = geteuid();
    setresgid(groupIdVar,groupIdVar,groupIdVar);
    setresuid(userIdVar,userIdVar,userIdVar);
    execv("/bin/sh",&array);
  }
  else {
    fwrite("No !\n",1,5,(FILE *)stderr); // check (FILE *)stderr
  }
  return 0;
}

