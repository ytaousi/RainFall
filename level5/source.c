void o(void)
{
  system("/bin/sh");
  _exit(1);
}

void n(void)
{
  char array[520];

  fgets(array,0x200,0);
  printf(array);
  exit(1);
}

void main(void)
{
    n();
    return(0);
}