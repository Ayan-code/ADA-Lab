#include<iostream> 
#include<cstring>

using namespace std; 
 
int max (int x, int y)
{
    return (x > y)? x : y; 
} 
 
int subseq(char *seq, int i, int j) 
{ 
if (i == j) 
	return 1; 
 
if (seq[i] == seq[j] && i + 1 == j) 
	return 2; 

if (seq[i] == seq[j]) 
	return subseq (seq, i+1, j-1) + 2; 
 
return max(subseq(seq, i, j-1), subseq(seq, i+1, j) ); 
} 

int main() 
{ 
	char seq[100];
	cout<<"Enter the sequence:";
	cin.get(seq,100);
	int n=strlen(seq); 
	cout << "The length of the subsequence is "
		<< subseq(seq, 0, n-1); 
	return 0; 
} 


