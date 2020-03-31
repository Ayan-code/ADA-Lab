#include <bits/stdc++.h>
 
using namespace std; 
 
void xorgrid(int n) 
{ 
	int arr[n][n];  
	int a = 0; 
	for (int i = 0; i < n / 4; i++) { 
		for (int j = 0; j < n / 4; j++) { 
			for (int k = 0; k < 4; k++) { 
				for (int l = 0; l < 4; l++) { 
					arr[i * 4 + k][j * 4 + l] = a; 
					a++; 
				} 
			} 
		} 
	} 
 
	for (int i = 0; i < n; i++) { 
		for (int j = 0; j < n; j++) { 
			cout << arr[i][j] << " "; 
		} 
		cout << "\n"; 
	} 
} 

int main() 
{ 
	int n;
	cout<<"Enter the value of n(multiple of 4):";
	cin>>n;
	xorgrid(n); 
	return 0; 
} 

/*
Enter the value of n(multiple of 4):8
0 1 2 3 16 17 18 19
4 5 6 7 20 21 22 23
8 9 10 11 24 25 26 27
12 13 14 15 28 29 30 31
32 33 34 35 48 49 50 51
36 37 38 39 52 53 54 55
40 41 42 43 56 57 58 59
44 45 46 47 60 61 62 63
*/
