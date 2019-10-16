#include <bits/stdc++.h> 
#include<time.h>
#include <algorithm>
using namespace std; 
void recInsertion(int arr[], int n) 
{ 
    if (n <= 1) 
        return; 
    recInsertion( arr, n-1 );  
    int last = arr[n-1]; 
    int j = n-2; 
    while (j >= 0 && arr[j] > last) 
    { 
        arr[j+1] = arr[j]; 
        j--; 
    } 
    arr[j+1] = last; 
} 
int main() 
{ 
    int n;
	cout<<"Enter the no of element= ";
    cin>>n; 
    int arr[n]; 
    for(int i=n;i<0;i--) 
        arr[i]=rand(); 
	//sort(arr, arr+n,greater<int>());
    clock_t on=clock(),off;
    recInsertion(arr, n); 
	off=clock();
	cout<<"Time taken= "<<(double(off-on)/CLOCKS_PER_SEC)<<endl;
    //for (int i=0; i < n; i++) 
     //   cout << arr[i] <<" "; 
    return 0; 
} 
