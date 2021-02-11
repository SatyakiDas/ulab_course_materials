#include <iostream>
#include <string>

#define SIZE 16

#define max(x, y) x > y ? x : y

using namespace std;

string X = "ABCBDA";
string Y = "BDCABA";

int LCS_LENGTH_REC(int i, int j)
{
	if (i == -1 || j == -1)
	{
		return 0;
	}
	if (X[i] == Y[j])
	{
		return LCS_LENGTH_REC(i - 1, j - 1) + 1;
	}

	int leftLCSLength = LCS_LENGTH_REC(i, j - 1);
	int upLCSLength = LCS_LENGTH_REC(i - 1, j);

	return max(leftLCSLength, upLCSLength);
}

int LCS_LENGTH()
{
	int m = X.length();
	int n = Y.length();

	return LCS_LENGTH_REC(m - 1, n - 1);
}

int main(int argc, char* argv[])
{

	cout << LCS_LENGTH() << endl;

	return 0;
}
