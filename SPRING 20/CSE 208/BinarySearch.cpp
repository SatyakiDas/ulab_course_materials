#include <iostream>

using namespace std;

int arr[] = { 15, 17, 18, 20, 25, 37, 43, 48 };
int n;
int recursionCount;

int binary_search(int search_key, int left, int right)
{
	if (left > right)
	{
		return -1;
	}
	int mid = left + (right - left) / 2;

	if (search_key == arr[mid])
	{
		return mid;
	}
	else if (search_key < arr[mid])
	{
		recursionCount++;
		return binary_search(search_key, left, mid - 1);
	}

	recursionCount++;
	return binary_search(search_key, mid + 1, right);
}

int main(int argc, char* argv[])
{
	n = sizeof(arr) / sizeof(arr[0]);
	recursionCount = 0;

	int search_key;

	cin >> search_key;

	int result = binary_search(search_key, 0, n-1);


	cout << endl;

	return 0;
}
