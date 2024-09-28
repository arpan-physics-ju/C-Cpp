#include<stdio.h>
#include<string.h>
struct student {
    char name[100];
    int roll;
    float cgpa;
};


int main (){
    struct student s1;
    s1.roll = 045;
    s1.cgpa = 9.2;
    //s1.name = "shradha"
    strcpy(s1.name, "Arpan");


    printf("Name: %s\t",s1.name);
    printf("Roll: %d\t",s1.roll);
    printf("Cgpa: %f\t",s1.cgpa);

    struct student s2;
    s2.roll = 045;
    s2.cgpa = 9.2;
    //s1.name = "shradha"
    strcpy(s2.name, "Arpan");


    printf("Name: %s\t",s2.name);
    printf("Roll: %d\t",s2.roll);
    printf("Cgpa: %f\t",s2.cgpa);

    struct student s3;
    s3.roll = 045;
    s3.cgpa = 9.2;
    //s1.name = "shradha"
    strcpy(s3.name, "Arpan");


    printf("Name: %s\t",s3.name);
    printf("Roll: %d\t",s3.roll);
    printf("Cgpa: %f\t",s3.cgpa);


    return 0;
}
