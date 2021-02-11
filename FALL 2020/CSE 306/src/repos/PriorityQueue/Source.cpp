#include <iostream>
#include <queue>

using namespace std;

struct CharFreqStruct
{
	char ch;
	int freq;
};

struct FrequencyComparator
{
	bool operator()(CharFreqStruct const& a, CharFreqStruct const& b)
	{
		return a.freq > b.freq;
	}
};

int main(int argc, char* argv[])
{
	priority_queue<CharFreqStruct, vector<CharFreqStruct>, FrequencyComparator> pq;

	CharFreqStruct cfs1;
	cfs1.ch = 'A';
	cfs1.freq = 45;
	pq.push(cfs1);

	CharFreqStruct cfs2;
	cfs2.ch = 'B';
	cfs2.freq = 13;
	pq.push(cfs2);

	CharFreqStruct cfs3;
	cfs3.ch = 'C';
	cfs3.freq = 12;
	pq.push(cfs3);

	CharFreqStruct cfs4;
	cfs4.ch = 'D';
	cfs4.freq = 16;
	pq.push(cfs4);

	CharFreqStruct cfs5;
	cfs5.ch = 'E';
	cfs5.freq = 9;
	pq.push(cfs5);

	CharFreqStruct cfs6;
	cfs6.ch = 'F';
	cfs6.freq = 5;
	pq.push(cfs6);

	pq.pop();
	pq.pop();
	pq.pop();
	pq.pop();
	pq.pop();
	
	
	return 0;
}
