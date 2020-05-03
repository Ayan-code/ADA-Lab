#include <iostream> 
#include<ctime>
#include<cstdlib>
  
using namespace std; 
 
void heap(int arr[], int n, int i) 
{ 
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < n && arr[l] > arr[largest]) 
        largest = l;  
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]);  
        heap(arr, n, largest); 
    } 
}  
void heapSort(int arr[], int n) 
{  
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
    for (int i=n-1; i>0; i--) 
    { 
        swap(arr[0], arr[i]); 
  
        heap(arr, i, 0); 
    } 
} 

void printArray(int arr[], int n) 
{ 
    for (int i=0; i<n; ++i) 
        cout << arr[i] << " "; 
    cout << "\n"; 
} 
   
int main() 
{ 
    int *arr,n; 
    clock_t time;
    cout<<"Enter the size:";
    cin>>n;
    arr=new int[n];
	for(int i=0;i<n;i++)
    {
      arr[i]=rand()/100;
    }  
    time=clock();
    heapSort(arr, n); 
    cout<<"time taken:"<< (float)time/CLOCKS_PER_SEC<<" sec"<<endl; 
    cout << "Sorted array is \n"; 
    printArray(arr, n);
	return 0; 
} 

/*
OUTPUT:

Enter the size:10
time taken:2.549 sec
Sorted array is
1 63 114 157 184 191 244 265 269 293

Enter the size:100
time taken:2.773 sec
Sorted array is
0 1 2 2 4 7 18 18 20 29 30 35 39 46 48 49 54 54 55 57 63 67 68 73 77 87 89 90 97 98 99 113 114
115 118 119 123 123 126 128 139 146 147 150 151 153 157 158 161 165 168 169 170 174 176 184 187 
187 191 192 196 197 198 199 199 200 215 217 221 226 229 232 238 238 240 243 243 244 246 255 256
262 263 265 269 274 275 276 281 282 287 293 301 303 311 313 323 324 326 327
*/
