#include<stdio.h>
#include<string.h>
struct Student
{
char name[30];
char department[20];
int yearOfStudy;
float cgpa;
};
   int main()
{
   int n,j,i;
  struct Student s[20],temp;
   printf("Enter the number of students");
   scanf("\n%d",&n);
for(i=0;i<n;i++)
{
  printf("\nEnter the details of student %d",i+1);
  printf("\nEnter name");
  scanf("\n%s",s[i].name);
  printf("\nEnter department");
  scanf("\n%s",s[i].department);
  printf("\nEnter year of study");
  scanf("\n%d",&s[i].yearOfStudy);
  printf("\nEnter cgpa");
  scanf("\n%f",&s[i].cgpa);
}
   printf("\nDetails of students");
   for(i=1;i<n;i++)
   {
     for(j=0;j<n-i;j++)
   {
     if(strcmp(s[j].name,s[j+1].name)>0)
     {
       temp=s[j];
       s[j]=s[j+1];
       s[j+1]=temp;
     }
   }
  }
   for(i=0;i<n;i++)
   {
     printf("\nStudent %d",i+1);
     printf("\nName : %s",s[i].name);
     printf("\nDepartment : %s",s[i].department);
     printf("\nYear of study : %d",s[i].yearOfStudy);
     printf("\nCGPA : %.2f",s[i].cgpa);
   }
   return 0;
}
