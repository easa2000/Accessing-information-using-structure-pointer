//accessing information using structure pointer
#include<stdio.h>
#include<string.h>
struct student
{
    int r_no;
    char name[20];
    char courses[20];
    int fees;
};

int main()
{
    struct student stud1, stud2, *ptr_stud1, *ptr_stud2;
    ptr_stud1 = &stud1;
    ptr_stud2 = &stud2;

    ptr_stud1->r_no = 01;
    strcpy(ptr_stud1->name,"Mahudoom");
    strcpy(ptr_stud1->courses,"B.Tech IT");
    ptr_stud1->fees = 55000;

    printf("\n Enter the details of second student: ");
    printf("\n Enter the roll number: ");
    scanf("%d",&ptr_stud2->r_no);
    printf("\n Enter the name: ");
    getchar();
    gets(ptr_stud2->name);
    printf("\n Enter the course: ");
    gets(ptr_stud2->courses);
    printf("\n Enter the fees: ");
    scanf("%d",&ptr_stud2->fees);

    printf("\n DETAILS OF FIRST STUDENT");
    printf("\n ROLL NUMBER = %d",ptr_stud1->r_no);
    printf("\n NAME = %s",ptr_stud1->name);
    printf("\n COURSE = %s",ptr_stud1->courses);
    printf("\n FEES = %d",ptr_stud1->fees);
    printf("\n\n\n\n DETAILS OF SECOND STUDENT");
    printf("\n ROLL NUMBER = %d",ptr_stud2->r_no);
    printf("\n NAME = %s",ptr_stud2->name);
    printf("\n COURSE = %s",ptr_stud2->courses);
    printf("\n FEES = %d",ptr_stud2->fees);

    return 0;

}
