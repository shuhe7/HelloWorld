#include <iostream>

using namespace std;

void sort(int arr[], int left, int right)
{
}

//添加注释
void sort(int arr[], int size)
{
    sort(arr,0,size);
}

int main()
{
	//添加注释
    int arr[] = {12,4,5,6,7,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr,size);
    return 0;
}
