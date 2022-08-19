//WAP to create a user defined structure datatype STUDENT(roll no , name , gender ,cgpa,placed)of size 5 Use a pointer to the STUDENT datatype to read the data from the user and write the data to the file STUDENT.txt.



#include<stdio.h>

struct student{
    int rollno;
    char name[20];
    char gender[10];
    float cgpa;
    int placed;
};
int main(){
    struct student s;
    struct student *p;
    p=&s;

    FILE *fp;
    fp=fopen("students.txt","w");

    for(int i=0;i<5;i++){

    printf("Enter the rollno: ");
    scanf("%d",&p->rollno);
    printf("Enter the name: ");
    scanf("%s",p->name);
    printf("Enter the gender");
    scanf("%s",p->gender);
    printf("Enter the cgpa: ");
    scanf("%f",&p->cgpa);
    printf("Placement status: Type 0 or 1 ");
    scanf("%d",&p->placed);



    fprintf(fp, "%d\n", p->rollno);
    fprintf(fp, "%s\n", p->name);
    fprintf(fp, "%s\n", p->gender);
    fprintf(fp, "%f\n", p->cgpa);
    fprintf(fp, "%d\n", p->placed);

    }

    fclose(fp);
    return 0;
}
