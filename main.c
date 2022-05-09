#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
struct Address {
  char country[20] ;
  char city[20];
};
struct Birthdate
{
    int day;
    int month;
    int year;
};
struct Student
{
    int id;
    char name[50];
    double gpa;
    char gender[7];
    struct Address address;
    struct Birthdate birthdate ;
};
struct Statics
{
    double max;
    double min;
    double avg;
    int males;
    int females;
};
struct Student s1[10];
int student_count;
void search (int,int *);
void add ();
void del ();
struct Statics statics (struct Statics a1);
void printstudent(int);
void printallstudents ();
void range();
void sorting ();
void setTimeout(int);  // Function to make a timer

int main()
{
   system("COLOR A");  // To change the color
    /*Function addStudent */
   printf("Enter the number of students :\n");
   add();
   /*Function searchStudentById */
   char search_student[5];
   printf("Do you want to search for a student ? (yes or no) \n");
   scanf("%s",&search_student);
   if(strcmp(search_student,"yes")==0||strcmp(search_student,"Yes")==0||strcmp(search_student,"YES")==0)
   {
   int key;
   printf("Enter student's id U want to search  : \n");
   scanf("%d",&key);
   int index=-1;
   printf("Searching ");
   int delay=3;
    do {
        printf(".");
          /*making timer*/
        setTimeout(1000);
        delay--;
    } while (delay >=1);
   search(key,&index);
   if(index==-1)
   {
       printf("\nNot found \n");
   }
   else
   {
       printf("\nThat is the student number : %d \n",index+1);
   }
   }
   /*Function deleteStudent */
   char del_student[5];
   printf("Do you want to delete a student ? (yes or no) \n");
   scanf("%s",&del_student);
   if(strcmp(del_student,"yes")==0||strcmp(del_student,"Yes")==0||strcmp(del_student,"YES")==0)
   {
   printf("Enter the id of the student you wish to delete :\n");
   del();
   }
   /*Function calculateStatistics */
   char calc[5];
   printf("Do you want to calculate statics about students student ? (yes or no) \n");
   scanf("%s",&calc);
   if(strcmp(calc,"yes")==0||strcmp(calc,"Yes")==0||strcmp(calc,"YES")==0)
   {
   struct Statics a1,a2;
   a1.max=s1[0].gpa;
   a1.min=s1[0].gpa;
   a1.avg=0.0;
   a1.males=0;
   a1.females=0;
    printf("Calcualting statics ");
   int delay=3;
    do {
        printf(".");
          /*making timer*/
        setTimeout(1000);
        delay--;
    } while (delay >=1);
   a2=statics(a1);
   printf("\nThe statics of students are :\n");
   printf("The max gpa = %.2lf\n",a2.max);
   printf("The min gpa =%.2lf\n",a2.min);
   printf("The average =%.2lf\n",a2.avg);
   printf("Number of males = %d\n",a2.males);
   printf("Number of females = %d\n",a2.females);
   }
   /*Function printStudent */
   char print_student[5];
   printf("Do you want to print a student ? (yes or no) \n");
   scanf("%s",&print_student);
   if(strcmp(print_student,"yes")==0||strcmp(print_student,"Yes")==0||strcmp(print_student,"YES")==0)
   {
   printf("Enter the id you want to print :\n");
   printstudent(-1);
   }
   /*Function printAllStudents */
   char print_allstudent[5];
   printf("Do you want to print all students ? (yes or no) \n");
   scanf("%s",&print_allstudent);
   if(strcmp(print_allstudent,"yes")==0||strcmp(print_allstudent,"Yes")==0||strcmp(print_allstudent,"YES")==0)
   {
   printf("All student's data: \n");
   printallstudents();
   }
   /*Function printStudentsInRange */
   char print_students_inrange[5];
   printf("Do you want to print all students in a certain range ? (yes or no) \n");
   scanf("%s",&print_students_inrange);
   if(strcmp(print_students_inrange,"yes")==0||strcmp(print_students_inrange,"Yes")==0||strcmp(print_students_inrange,"YES")==0)
   {
   printf("Enter the maximum and the minimum gpa you want to print between them : \n");
   range();
   }
   /*Function sortStudents */
   char arranging_students[5];
   printf("Do you want to arrange all students according to their gpa ? (yes or no) \n");
   scanf("%s",&arranging_students);
   if(strcmp(arranging_students,"yes")==0||strcmp(arranging_students,"Yes")==0||strcmp(arranging_students,"YES")==0)
   {
    printf("Arranging students ");
    int delay=3;
    do {
        printf(".");
          /*making timer*/
        setTimeout(1000);
        delay--;
    } while (delay >=1);
   sorting();
   }
    return 0;

}
  /*Function addStudent */
void add ()
{
   scanf("%d",&student_count);
   int i;
    if(student_count<=10)
    {
   for(i=0;i<student_count;i++)
   {
       printf("Enter student No. %d id :\n",i+1);
       scanf("%d",&s1[i].id);
       printf("Enter student NO. %d name :\n",i+1);
       gets(s1[i].name);
       gets(s1[i].name);
       printf("Enter student NO. %d gpa : \n",i+1);
       scanf("%lf",&s1[i].gpa);
       printf("Enter student NO. %d gender : \n",i+1);
       gets(s1[i].gender);
       gets(s1[i].gender);
       printf("Enter student NO. %d country :\n",i+1);
       gets(s1[i].address.country);
       printf("Enter student NO. %d city : \n",i+1);
       gets(s1[i].address.city);
       printf("Enter student NO. %d birth date :\n",i+1);
       scanf("%d",&s1[i].birthdate.day);
       scanf("%d",&s1[i].birthdate.month);
       scanf("%d",&s1[i].birthdate.year);
   }
    }
    else
    {
        printf("There is not enough space, Please add a maximum of 10 students : \n");
        add();
    }
}

   /*Function searchStudentById */
void search(int key,int *index)
{
    for(int i=0;i<student_count;i++)
    {
        if(s1[i].id == key)
        {
           *index= i;
           break;

        }
        else if(i==student_count-1)
        {
            *index= -1;
        }
    }
}

   /*Function deleteStudent */

void del ()
{

    int index=-1;
  int x;
  scanf("%d",&x);
  for(int i=0;i<student_count;i++)
  {
      if(s1[i].id==x)
      {
  search(x,&index);
   for (int i= index; i<student_count;i++){
         s1[i]= s1[i+1];
}
student_count--;
printf("The student with id %d is deleted \n",x);
return ;
      }
}
 printf("The id not found . Enter the id again : \n");
 del();
}
   /*Function calculateStatistics */
struct Statics statics (struct Statics a1)
{
    double sum=0.0;
    for(int i=0;i<student_count;i++)
    {
        if(s1[i].gpa > a1.max)
        {
            a1.max=s1[i].gpa;
        }
        else if (s1[i].gpa < a1.min)
        {
            a1.min=s1[i].gpa;
        }
        sum=sum+s1[i].gpa;
    }
    a1.avg=sum/student_count;
    for(int i=0;i<student_count;i++)
    {
        if (strcmp(s1[i].gender,"male")==0||strcmp(s1[i].gender,"Male")==0||strcmp(s1[i].gender,"MALE")==0)
        {
            a1.males++;
        }
        else if (strcmp(s1[i].gender,"female")==0||strcmp(s1[i].gender,"Female")==0||strcmp(s1[i].gender,"FEMALE")==0)
        {
            a1.females++;
        }
    }
    struct Statics a2=a1;
    return a2;
}
   /*Function printStudent */
void printstudent(int i)
{
    if(i==-1)
    {
    int index=-1;
    int id;
    scanf("%d",&id);
    for(int i=0;i<student_count;i++)
      {
      if(s1[i].id==id)
      {
    search(id,&index);
    printf("regnum: %d Name: %s gpa: %.2lf gender : %s address :(%s,%s) birth date %d/%d/%d\n",s1[index].id,s1[index].name,s1[index].gpa,s1[index].gender,s1[index].address.country,s1[index].address.city,s1[index].birthdate.day,s1[index].birthdate.month,s1[index].birthdate.year);
    return ;
      }
      }
 printf("The id not found . Enter the id again : \n");
 printstudent(-1);
    }
    else
        {
        printf("regnum: %d Name: %s gpa: %.2lf gender : %s address :(%s,%s) birth date %d/%d/%d\n",s1[i].id,s1[i].name,s1[i].gpa,s1[i].gender,s1[i].address.country,s1[i].address.city,s1[i].birthdate.day,s1[i].birthdate.month,s1[i].birthdate.year);

        }
}
   /*Function printallStudents */

void printallstudents ()
{
    int i;
    for(i=0;i<student_count;i++)
    {
    printstudent(i);
    }
}
   /*Function printStudentsInRange */

void range(){
    double max,min;
    printf("Max :\n");
    scanf("%lf",&max);
    printf("Min :\n");
    scanf("%lf",&min);

    if(min>max){
        printf("Max should be greater than Min !! . Enter the range again : \n");
        range();
    }

    else if(max<=4.0&&max>=0.0&&min>=0.0&&min<=4.0){
        int i;
        printf("The Students in this range are :\n");
        for(i=0;i<student_count;i++){
            if(s1[i].gpa<=max&&s1[i].gpa>=min){
                printstudent(i);
            }
        }
        return;
    }
    else if(max>4.0||max<0.0||min<0.0||min>4.0){
        printf("The range should be between 4.0 and 0.0 !! . Enter the range again : \n");
        range();
    }
}
   /*Function sortStudents */

void sorting ()
{
    int i,j;
    for(i=0;i<student_count-1;i++)
    {
        for(j=0;j<student_count-i-1;j++)
        {
            if(s1[j].gpa>s1[j+1].gpa)
            {
                struct Student temp;
                temp=s1[j];
                s1[j]=s1[j+1];
                s1[j+1]=temp;
            }
        }
    }
    printf("\nStudents after arranging them according to their gpa : \n");
    printallstudents();
}
  /*making timer*/
void setTimeout(int milliseconds)
{
    int milliseconds_since = clock() * 1000 / CLOCKS_PER_SEC;
    int end = milliseconds_since + milliseconds;
    do {
        milliseconds_since = clock() * 1000 / CLOCKS_PER_SEC;
    } while (milliseconds_since <= end);
}
