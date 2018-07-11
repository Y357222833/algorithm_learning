// binary_search.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int binary_search(int *arr, int count, int item)
{
	int low = 0;
	int high = count - 1;
	while (low < high)
	{
		int mid = (low + high) / 2;
		int temp = arr[mid];
		if (item == temp)
			return mid;
		if (temp > item)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}


int main()
{
	int my_list[] = {1,3,5,7,9,11,13,15,17,19};
	int result = binary_search(my_list, sizeof(my_list) / sizeof(int), -1);
	if (result != -1)
		cout << result << endl;
	else
		cout << "None" << endl;

    return 0;
}

