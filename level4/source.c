int m = 0;

void p(char *param_1)
{
  printf(param_1);
  return;
}

void n(void)
{
  char array[520];

  fgets(array,0x200,0);
  p(array);
  if (m == 0x1025544) // 16930116 in decimal
  {
    system("/bin/cat /home/user/level5/.pass");
  }
  return;
}


void main(void)
{
  n();
  return;
}