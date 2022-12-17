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
struct student get_student();
void print_student(struct student students);
int main()
{
struct student students[3];
for (int i = 0; i < 3; i++)
{
students[i] = get_student();
}
printf("\nStudent List :\n");
for (int i = 0; i < 3; i++)
{
printf("student %d : \n", i + 1);
print_student(students[i]);
}
}
struct student get_student()
{
struct student tmp;
scanf("%s %s %d %s %c %d", tmp.info.name, tmp.info.residence, &tmp.info.age, tmp.university, &tmp.grade,
&tmp.level);
return tmp;
}
void print_student(struct student students)
{
printf("name : %s, residence : %s, age : %d, univ : %s, grade : %c, level : %d\n", students.info.name,
students.info.residence, students.info.age, students.university, students.grade, students.level);
}