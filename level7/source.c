void m(void *param_1,int param_2,char *param_3,int param_4,int param_5)
{
  time_t tVar1;

  tVar1 = time((time_t *)0);
  printf("%s - %d\n",c,tVar1);
  return;
}

int main(int ac,int param_2)
{
  undefined4    *array1; // array of 8 byte// this will hold argv[1] after strcpy() call
  void          *array2; 
  undefined4    *array3; // array of 8 byte // this will hold argv[2] after strcpy() call
  FILE          *__stream;

  array1 = (undefined4 *)malloc(8);
  *array1 = 1;
  
  array2 = malloc(8);
  
  array1[1] = array2;
  
  array3 = (undefined4 *)malloc(8);
  *array3 = 2;
  
  array2 = malloc(8);
  
  array3[1] = array2;
  
  strcpy((char *)array1[1],*(char **)(param_2 + 4)); // with our input copied we can overflow array1
  strcpy((char *)array3[1],*(char **)(param_2 + 8)); // with our input copied we can overflow array3
  
  __stream = fopen("/home/user/level8/.pass","r");
  
  fgets(c,0x44,__stream);
  
  puts("~~"); //override got table puts function address with the address of m function 0x80484f4 "\xf4\x84\x04\x08"
  return 0;
}
