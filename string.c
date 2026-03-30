#include<stdio.h>
int main()
{
char str[100];
int choice,i;
int length;

do
 {  
   printf("\n Main Menu");
   printf("\n 1. Reverse Number");
   printf("\n 2. Upper to Lower Case");
   printf("\n 3. Lower to Upper Case");
   printf("\n 4. Length of String");
   printf("\n 5. Exit");
    
    printf("\n");
    
   printf("\n Enter your choice(1-5): ");
   scanf("%d",&choice);
   
   if(choice>=1 && choice<=4)
   {
     printf("\nEnter String: ");
     scanf("%s",str);
     
     length=0;
     
     while(str[length]!='\0')
     {
       length++;
     }
   }
   
   switch(choice)
   {
     case 1:
     printf("\n Original String: %s",str);
     printf("\n Reverse: \t");
     for(i=length-1 ;i>=0;i--)
     {
  
      printf("%c",str[i]);
     }
     printf("\n");
     break;
     
     case 2:
     
     printf("\n Original String:%s",str);
     printf("\n Lower Case \t");
     
     for(i=0;i<length;i++)
     {
       if(str[i]>='A' && str[i]<='Z')
       {
         printf("%c",str[i]+32);
        }
        else
        {
          printf("%c",str[i]);
        }
     }
     break;
     
     case 3:
     printf("\nOriginal String:%s",str);
     printf("\n Upper Case:\t");
     
     for(i=0;i<length;i++)
     {
      if(str[i]>='a' && str[i]<='z')
      {
        printf("%c",str[i]-32);
      }
      else
      {
       printf("%c",str[i]);
       }
     }
       break;
       
       case 4:
       
       printf("\n Original String:%s",str);
       printf("\n Length is:%d",length);
       
       break;
       
       case 5:
       
       printf("\n Exiting the Program");
       
       break;
       
       default:
       
       printf("\n Please enter valid case(1-5)");
       
   }
   }while(choice!=5);
   
   return 0;
 }
