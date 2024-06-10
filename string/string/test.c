#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strcpy(char* a1, const char* a2)
{
	assert(a2);
	assert(a1);
	char* des = a1;
	while (*a1++ = *a2++)
	{
		;
	}

	return des;
}
//int main()
//{
//	//char name[20] = { 0 };
//	////char* p = "abcdef";
//	////strcpy(*p, "zhangsan");//err
//	//strcpy(name, "zhangsan");
//	//printf("%s\n", name);
//
//	char arr1[] = "\0";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

char* my_strcat(char* a1, const char* a2)
{
	assert(a1 && a2);
	char* dest = a1;
	while (*a1)
	{
		a1++;
	}
	while (*a1++ = *a2++)
	{
		;
	}
	return dest;
}
//int main()
//{
//	char a[100] = "World ";
//	//strcat(a, " Peace");
//	my_strcat(a, " Peace");
//	printf("%s\n", a);
//	return 0;
//}

int my_strcmp(const char* a1, const char* a2)
{
	//assert(a1 && a2);
	//while (*a1 && *a2)
	//{
	//	if (*a1 > *a2)
	//		return 1;
	//	else if (*a1 < *a2)
	//		return -1;
	//	else
	//	{
	//		a1++;
	//		a2++;
	//	}
	//}
	//if (*a1 > *a2)
	//	return 1;
	//else if (*a1 < *a2)
	//	return -1;
	//else
	//	return 0;
	assert(a1 && a2);
	while (*a1 == *a2)
	{
		if (*a1 == '\0')
			return 0;
		a1++;
		a2++;
	}
	return (*a1 - *a2);
}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	//int ret = strcmp(arr1, arr2);
//	int ret = my_strcmp(arr1, arr2);
//	if (ret > 0)
//		printf(">\n");
//	else if (ret < 0)
//		printf("<\n");
//	else
//		printf("=\n");
//	return 0;
//}

//有字数限制的字符串函数
//strncmp
//strncpy
//strncat

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1)
	{
		int count = 0;
		while (*str1 != '\0' && *str1 == *str2)
		{
			str1++;
			str2++;
			count++;
			//找到字串
			if (*str2 == '\0')
			{
				return (str1 - count);
			}
		}
		//没找到字串
		str1 -= count;
		str2 -= count;
		str1++;
	}
	return NULL;
}
//int main()
//{
//	char email[] = "mkikaskkkkkkiss12345@gmail.com";
//	char substr[] = "kiss";
//	//char* ret = strstr(email, substr);
//	char* ret = my_strstr(email, substr);
//	if (ret == NULL)
//		printf("不包含字串\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//
//strtok:拆分字符串
//

int main()
{
	char email[] = "mkikaskkkkkkiss12345@gmail.com";
	char sp[] = "@.";
	char tmp[40] = { 0 };
	strcpy(tmp, email);
	char* ret;
	for (ret = strtok(tmp, sp); ret != NULL; ret = strtok(NULL, sp))
	{
		printf("%s\n", ret);
	}
	return 0;
}

