#include<stdbool.h>
#include<stdio.h>
bool oppositeSigns(int x ,int y)
{
  return (x ^ y) & 1 <<31;
}

int main()
{
   int x = +800, y = -20000;
   if (oppositeSigns(x, y) == true)
      printf ("Signs are opposite");
   else
     printf ("Signs are not opposite");
   return 0;
}
