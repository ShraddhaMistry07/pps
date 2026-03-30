#include <stdio.h>
int main()
{
  int a,b,c;
  
  printf("\nEnter the value of a and b and c:");
  scanf("%d,%d,%d",&a,&b,&c);
  
  if(a==b && b==c && a==c)
  { 
     printf("\n All are equal=%d",a);
  }
  
  else
  {
  
      if(a>b && a>c)
  { 
     printf("\na is greater than b and c=%d",a);
  }
  
     else if(b>a && b>c)
  {
  printf("\nb is greater than a and c=%d",b);
  }
     
      else if(a==b && c<a && c<b)
      {
      
        printf("\nc is less than a and b=%d",c);
      }
      
     else if (a==c && c>b)
   {
   printf("\na and c are equal and greater than b=%d",c);
   }
   
   }
   
   return 0;
}
