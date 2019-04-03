int getDigit()
{
  char ch[2];
  getnstr(ch,1); 

  int foo = (int)(ch[0]);
  if (foo > 48 && foo < 58)
  {
    return (foo - 48);
  }
  else
  {
    return 0;
  }
}
