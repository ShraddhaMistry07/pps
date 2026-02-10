#include <stdio.h>
int main()

{
 int a,b,c;

 printf("\nEnter the values of a,b and c:");
 scanf("%d %d %d",&a,&b,&c);

 if(a==b && b==c)
 {
   printf("\nAll the numbers are equal:%d", a);

 }

  else if(a>=b && a>=c)
  {
   printf("Biggest number is:%d",a);
  }

 else if(b>=a  && b>=c)
 {
   printf("\nBiggest number is:%d",b);
 }

 else if(c>=a && c>=b)
 {
   printf("\nBiggest number is:%d",c);
 }

 return 0;
}
