#include<stdio.h> 
#include<stdlib.h>

struct stu
{
	char name[20];//结构体数组必须初始化？
	int age;
};
int cmp(const void* e1, const void* e2)
{
	return (((struct stu*)e1)->age - ((struct stu*)e2)->age);
}
int main()
{
	struct stu s[3] = { {"zhangsan",12},{"lisi",19},{"wangwu",11} };
	int sz = sizeof(s) / sizeof(s[1]);
	qsort(s, sz, sizeof(s[1]), cmp);
}
