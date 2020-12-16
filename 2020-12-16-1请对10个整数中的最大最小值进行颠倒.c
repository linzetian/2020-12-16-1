//请对10个整数中的最大最小值进行颠倒。
//1、利用数组管理10个整数
//2、利用scanf为数组赋值
//3、编写范围最大或者最小函数
//4、请使用指针来标记最大最小位置。
//5、打印原数组和颠倒后的数组。
#include<stdio.h>
int* Max_fun(int arr[], int size)
{
	int max = arr[0];
	int i = 0;
	int index = 0;
	for (i = 0; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			index = i;
		}
	}
	return &arr[index];//The pointer of Max
}
int* Min_fun(int arr[], int size)
{
	int min = arr[0];
	int i = 0;
	int index = 0;
	for (i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
			index = i;//这里一定要用index来得到arr[i]值最大时的i值，并保存下来
		}
	}
	return &arr[index];//The pointer of Min
}
int main()
{
	int arr[10] = {0};
	int i = 0;
	int tem;//中间变量
	printf("Enter the ten integer numbers\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);//Enter ten numbers//这里不要加空格
	}
	int* max_prt = Max_fun(arr,10);//The Max function
	int* min_prt = Min_fun(arr,10);//The Min function
	tem = *max_prt;//值交换
	*max_prt = *min_prt;
	*min_prt = tem;

	//Put swap value
	for (i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}