int m = 0;

void v(void)
{
  char array[520];
  
  fgets(array,0x200,0);
  printf(array);
  if (m == 0x40) // this is the value for 64
  {
    fwrite("Wait what?!\n",1,0xc,1);
    system("/bin/sh");
  }
  return;
}

void main(void)
{
  v();
  return;
}