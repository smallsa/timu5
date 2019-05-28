/*写一个函数能够从文件读入一组学生STU的信息，保存到一个结构数组中去*/
//#define _CRT_SECURE_NO_WARNINGS；
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
struct student
{
	char name[30];
	int num;
	float grade;
}stu[SIZE];
void save();
int main()
{
	save();
	return 0;
}
void save()
{
	FILE* fp;
	int i;
	fp = fopen("D:\\student\\grade.txt", "r");
	if (fp == NULL)
	{
		printf("can't open file\n");
		exit(0);
	}
	for (i = 0; i < SIZE; i++)
	{
		fscanf_s(fp, "%s", &stu[i].name, 30);
		fscanf_s(fp, "%d", &stu[i].num);
		fscanf_s(fp, "%f", &stu[i].grade);
		printf("%-5s %4d %10f\n", stu[i].name, stu[i].num, stu[i].grade);
	}
	fclose(fp);
}
