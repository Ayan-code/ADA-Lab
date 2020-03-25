 
#include <bits/stdc++.h> 
using namespace std; 

void merge(int arr1[], int low, int mid1, 
		int mid2, int high, int arr2[]) 
{ 
	int i = low, j = mid1, k = mid2, l = low; 

	
	while ((i < mid1) && (j < mid2) && (k < high)) 
	{ 
		if(arr1[i] < arr1[j]) 
		{ 
			if(arr1[i] < arr1[k]) 
			{ 
				arr2[l++] = arr1[i++]; 
			} 
			else
			{ 
				arr2[l++] = arr1[k++]; 
			} 
		} 
		else
		{ 
			if(arr1[j] < arr1[k]) 
			{ 
				arr2[l++] = arr1[j++]; 
			} 
			else
			{ 
				arr2[l++] = arr1[k++]; 
			} 
		} 
	} 

	while ((i < mid1) && (j < mid2)) 
	{ 
		if(arr1[i] < arr1[j]) 
		{ 
			arr2[l++] = arr1[i++]; 
		} 
		else
		{ 
			arr2[l++] = arr1[j++]; 
		} 
	} 
 
	while ((j < mid2) && (k < high)) 
	{ 
		if(arr1[j] < arr1[k]) 
		{ 
			arr2[l++] = arr1[j++]; 
		} 
		else
		{ 
			arr2[l++] = arr1[k++]; 
		} 
	} 

	while ((i < mid1) && (k < high)) 
	{ 
		if(arr1[i] < arr1[k]) 
		{ 
			arr2[l++] = arr1[i++]; 
		} 
		else
		{ 
			arr2[l++] = arr1[k++]; 
		} 
	} 

	while (i < mid1) 
		arr2[l++] = arr1[i++]; 
 
	while (j < mid2) 
		arr2[l++] = arr1[j++]; 

	while (k < high) 
		arr2[l++] = arr1[k++]; 
} 


void mergeSort3WayRec(int arr1[], int low, 
					int high, int arr2[]) 
{ 

	if (high - low < 2) 
		return; 

 
	int mid1 = low + ((high - low) / 3); 
	int mid2 = low + 2 * ((high - low) / 3) + 1; 

 
	mergeSort3WayRec(arr2, low, mid1, arr1); 
	mergeSort3WayRec(arr2, mid1, mid2, arr1); 
	mergeSort3WayRec(arr2, mid2, high, arr1); 


	merge(arr2, low, mid1, mid2, high, arr1); 
} 

void mergeSort3Way(int arr1[], int n) 
{ 

	if (n == 0) 
		return; 
 
	int fArray[n]; 
 
	for (int i = 0; i < n; i++) 
		fArray[i] = arr1[i]; 


	mergeSort3WayRec(fArray, 0, n, arr1); 

 
	for (int i = 0; i < n; i++) 
		arr1[i] = fArray[i]; 
} 
 
int main() 
{ 
	int data[10]; 
	
	cout<<"Enter 10 array elements:";
	for(int i=0;i<10;i++)
	   cin>>data[i];
	mergeSort3Way(data,10); 
	cout << "After 3 way merge sort: "; 
	for (int i = 0; i < 10; i++) 
	{ 
		cout << data[i] << " "; 
	} 
	return 0; 
} 


Output:

Enter 10 array elements:43 32 56 7 26 40 16 22 84 27
After 3 way merge sort: 7 16 22 26 27 32 40 43 56 84
