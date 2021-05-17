#include <stdio.h>
int main()
{
  int mark;
  printf("Enter your mark:\n");
  scanf("%d",&mark);
  if (mark>=90)
  {
    printf("\ngrade is A+");
  }
  if (mark>=80 && mark<=89)
  {
    printf("\ngrade is A");
  }
  if(mark>=70 && mark<=79)
  {
    printf("\ngrade is B+");
  }
  if(mark>=60 && mark<=69)
  {
    printf("\ngrade is B");
  }
  if(mark>=50 && mark<=59)
  {
    printf("\ngrade is C+");
  }
  if(mark>=40 && mark<=49)
  {
    printf("\ngrade is C");
  }
  if(mark<40)
  {
    printf("\ngrade is D. next time you should improve your marks.");
  }
  return 0;
}
