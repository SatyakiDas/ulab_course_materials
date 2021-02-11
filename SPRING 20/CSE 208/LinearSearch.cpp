#include <iostream>

#define MAX_SIZE 8

using namespace std;

int arr[MAX_SIZE] = { 15, 17, 18, 20, 25, 37, 43, 48 };

int recursion_count = 0;

int search(int search_key, int index)
{
	if (index == MAX_SIZE)
	{
		return -1;
	}
	
	if (arr[index] == search_key)
	{
		return index;
	}

	recursion_count++;
	return search(search_key, index + 1);
}

int main(int argc, char* argv[])
{
	int search_key;
	cin >> search_key;

	int index = search(search_key, 0);

	cout << endl;

	return 0;
}
