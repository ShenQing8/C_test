#include<stdio.h>
//define 定义标识符常量
#define NUM 10


//define 定义宏
#define Add(x,y) ((x)+(y))
#define Mul(x,y) ((x)*(y))
int main()
{
	//int arr[NUM] = {0,1,2,3,4,5,6,7,8,9};
	//int i = 0;
	//while (i<10)
	//{
	//	printf("%d ", arr[i]);
	//	i++;
	//}

	int a = 10.0;
	int b = 20.0;
	float c = Add(a, b);
	printf("%.1f\n", c);
	float d = Mul(a, b);
	printf("%.2f\n", d);
	return 0;
}