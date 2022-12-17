#define _CRT_SECURE_NO_WARNINGS // scanf error 방지를 위한 부분
#include<stdio.h>
#include<string.h>
struct personal_info
{
char name[9];
char residence[6];
int age;
};
struct student {
struct personal_info info;
char university[6];
char grade;
int level;
};
int main()
{
struct student students[3];
for (int i = 0; i < 3; i++)
{
scanf("%s %s %d %s %c %d", students[i].info.name, students[i].info.residence, &students[i].info.age,
students[i].university, &students[i].grade, &students[i].level);
}
printf("\nStudent List :\n");
for (int i = 0; i < 3; i++)
{
printf("student %d : \n", i+1);
printf("name : %s, residence : %s, age : %d, univ : %s, grade : %c, level : %d\n",
students[i].info.name, students[i].info.residence, students[i].info.age, students[i].university, students[i].grade,
students[i].level);
}
}