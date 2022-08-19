// Write a C program to create an user defined datatype STUDENT (rollno,
// name. gender, cgpa, placed) of size five. Use a pointer to the STUDENT
// datatype to read the data from students.txt file and print them on the monitor.

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
    struct student *ptr;
    ptr=&s;

    FILE *fp;
    fp=fopen("students.txt","r");

    printf("\nDetails of Student are: \n");
    for(int i=0;i<5;i++){
    fscanf(fp,"%d\n",&ptr->rollno);
    fscanf(fp,"%s\n",ptr->name);
    fscanf(fp,"%s\n",ptr->gender);
    fscanf(fp,"%f\n",&ptr->cgpa);
    fscanf(fp,"%d\n",&ptr->placed);

    printf("\nRollno: %d\n",ptr->rollno);
    printf("Name: %s\n",ptr->name);
    printf("Gender: %s\n",ptr->gender);
    printf("CGPA: %f\n",ptr->cgpa);
    printf("Placed: %d\n",ptr->placed);

    }

    fclose(fp);
}
