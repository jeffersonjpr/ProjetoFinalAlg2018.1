int mult (int a, int b)
{
  if(b == 1) return a;
  else if(b == 0) return 0;
  return a + vezes(a, b - 1)
}
