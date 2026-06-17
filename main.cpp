#include <iostream>

using namespace std;

//添加注释
void sort(int arr[], int size)
{
    int tmp = 0;
    for(int i = 0;i < size - 1; i++)
    {
        for(int j = 0; j < size - 1 -i;j++)
	{
		//小张修改排序算法
	    tmp = arr[j];
	    arr[j] = arr[j + 1];
	    arr[j+1] = tmp;
	}
    }
}

int main()
{
	//添加注释
    int arr[] = {12,4,5,6,7,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr,size);
    return 0;
}
