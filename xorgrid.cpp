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

