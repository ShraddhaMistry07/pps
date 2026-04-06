#include<stdio.h>
#include<string.h>
#define MAX 100
struct Student
{
 int RollNo;
 char Name[100];
 float Marks;
 char Grade;
};

int main()
{
  int n,i;
  printf("\nEnter the Number Of Students: ");
  scanf("%d",&n);
  
  struct Student s[n];
  
  printf("\n=== STUDENT DETAILS ===\n");
  
  for(i=0; i<n; i++)
  {
   printf("\nEnter the details of Student %d\n",i+1);
   printf("\nEnter Name: ");
   scanf(" %[^\n]",s[i].Name);
   
   printf("\nEnter Roll Number:");
   scanf("%d",&s[i].RollNo);
   
   printf("\nEnter Marks:");
   scanf("%f",&s[i].Marks);
   
   printf("\nEnter Grades: ");
   scanf(" %c",&s[i].Grade);
  }
  for(i=0;i<n;i++)
  {
   printf("Student %d",i+1);
   printf("Name = %s",s[i].Name);
   printf("Roll Number = %d",s[i].RollNo);
  printf("Marks = %.2f",s[i].Marks);
  printf("Grade = %c",s[i].Grade);
  }
  
  return 0;
}
