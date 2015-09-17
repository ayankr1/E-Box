#include<stdio.h>
#include<string.h>
int n;
void display(int);
struct Student
{
char name[30];
char department[20];
int yearOfStudy;
float cgpa;
};
   struct Student obj[20];
   void disp1()
{
   int y,i,j,k=0;
   char temp[n][30],demp[30];
   printf("\nEnter the year");
   scanf("\n%d",&y);
   printf("\nStudents from Year %d",y);
   for(i=0;i<n;i++)
   {
     if(obj[i].yearOfStudy==y)
     {
       strcpy(temp[k],obj[i].name);
       k++;
     }
   }
   if(k==0)
     printf("\nStudent by year %d not found",y);
   else
   {
     for(i=0;i<k-1;i++)
     {
       for(j=i+1;j<k;j++) {
         if((strcmp(temp[i],temp[j]))>0)
         {
           strcpy(demp,temp[i]);
           strcpy(temp[i],temp[j]);
           strcpy(temp[j],demp);
         }
     }
   }
   for(i=0;i<k;i++)
     printf("\n%s",temp[i]);
}
}

void disp2()
{
  char temp[n][20],demp[30];
  char dept[30];
  int i,k=0;
  printf("\nEnter the department");
  scanf("\n%s",dept);
  printf("\nStudents from Department %s",dept);
  for(i=0;i<n;i++)
  {
    if(strcmp(obj[i].department,dept)==0)
    {
      strcpy(temp[k],obj[i].name);      k++;}}

  if(k==0)
    printf("\nStudent from Department %s not found",dept);
  else
  {
    for(i=0;i<k-1;i++)
    {
      if((strcmp(temp[i],temp[i+1]))>0)
      {
        strcpy(demp,temp[i]);
        strcpy(temp[i],temp[i+1]);
               strcpy(temp[i+1],demp);
               }
               }
    for(i=0;i<k;i++)
      printf("\n%s",temp[i]);
  }
}
void disp3()
{
  printf("\nOverall Topper Details");
  float max=0.0f;
  int i,j;
  for(i=0;i<n;i++)
  {
    if(obj[i].cgpa>max)
    {
      max=obj[i].cgpa;
      j=i;
    }
  }
display(j);
}
void disp4()
{
    char dept[10];
    int i,c=0;
    float max=0.0f;
    printf("\nEnter the department");
    scanf("\n%s",dept);
    printf("\n%s Department Topper Details",dept);
    for(i=0;i<n;i++)
    {
      if(((strcmp(obj[i].department,dept))==0) && obj[i].cgpa>max)
        c=i;
    }
    display(c);
    }
    void disp5()
    {
      char nm[10];
      printf("\nEnter the name");
      scanf("\n%s",nm);
      int i;
      for(i=0;i<n;i++)
      {
        if(strcmp(obj[i].name,nm)==0)
          break;
      }
      if(i==n)
        printf("\nStudent by name %s not found",nm);
      else
         display(i);
    }
    void disp6()
    {
      int i,j;
      char nm[n][20];
      char temp[20];
      for(i=0;i<n;i++)
      {
        strcpy(nm[i],obj[i].name);
      }
      for(i=0;i<n-1;i++)
      {
        for(j=i+1;j<n;j++)
        {
          if((strcmp(nm[i],nm[j]))>0)
          {
            strcpy(temp,nm[i]);
            strcpy(nm[i],nm[j]);
            strcpy(nm[j],temp);
          }
        }
      }
      for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
        {
          if((strcmp(nm[i],obj[j].name))==0)
          {
          display(j);
          }
        }
      }
    }
    void disp7()
    {
      char nm[20];
      printf("\nEnter the name");
      scanf("\n%s",nm);
      int i;
      for(i=0;i<n;i++)
      {
        if(strcmp(obj[i].name,nm)==0)
        {
          obj[i].cgpa=obj[i].cgpa+0.50;
      }
    }
//    display(c);
    }
    void display(int c)
    {
      printf("\nName : %s\nDepartment : %s\nYear of study : %d\nCGPA : %.2f",obj[c].name,obj[c].department,obj[c].yearOfStudy,obj[c].cgpa);
    }
   int main()
{
   int ch,i,x=1;
  printf("Enter the number of students");
   scanf("\n%d",&n);
for(i=0;i<n;i++)
{
  printf("\nEnter the details of student %d",i+1);
  printf("\nEnter name");
  scanf("\n%s",obj[i].name);
  printf("\nEnter department");
  scanf("\n%s",obj[i].department);
  printf("\nEnter year of study");
  scanf("\n%d",&obj[i].yearOfStudy);
  printf("\nEnter cgpa");
  scanf("\n%f",&obj[i].cgpa);
}
   do
   {
   printf("\nMenu");
   printf("\n1)Display names of students from a particular year");
   printf("\n2)Display names of students from a particular department");
   printf("\n3)Display all details of the student having the highest CGPA");
   printf("\n4)Display all details of the student from a particular department having the highest CGPA");
   printf("\n5)Display all details of a particular student (Search by name)");
   printf("\n6)Display all details of all students");
   printf("\n7)Update CGPA of a particular student");
   printf("\n8)Exit");
   printf("\nEnter your choice");
   scanf("\n%d",&ch);
   switch(ch)
   {
  case 1:
     disp1();
     break;
     case 2:
     disp2();
     break;
     case 3:
     disp3();
     break;
   case 4:
     disp4();
     break;
     case 5:
     disp5();
     break;
     case 6:
     disp6();
     break;
     case 7:
     disp7();
     break;
     case 8:
     x=-1;
     break;
   }
}while(x!=-1);
   return 0;
}
