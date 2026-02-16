#include<stdio.h>
int main()
{
  int PPS,Maths2,EG,English,BEE;
  
    printf("\nEnter the marks for PPS:");
    scanf("%d",&PPS);
    
     printf("\nEnter the marks for Maths2:");
    scanf("%d",&Maths2);
    
     printf("\nEnter the marks for EG:");
    scanf("%d",&EG);
    
     printf("\nEnter the marks for English:");
    scanf("%d",&English);

   printf("\nEnter the marks for BEE:");
    scanf("%d",&BEE);
    
    int Total=PPS+Maths2+EG+English+BEE;
     float per;
     per = Total*100/500;
    
    printf("\nTotal Marks=%d",Total);
    printf("\nPercentage = %f",per);
    if(per>=90)
    {
      printf("\nGrade = A");
      }
   else if(per>=75)
   {
      printf("\nGrade = B");
   }
     else if(per>=60)
    {
        printf("\nGrade = C");
    }
    else if(per>=40)
    {
        printf("\nGrade = D");
    }
    else if(per<40)
    {
      printf("\nFail");
    }

return 0;
}
