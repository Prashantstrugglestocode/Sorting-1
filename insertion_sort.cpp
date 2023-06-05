#include<iostream>
#include<vector>
using namespace std;

void swap(int *a, int *b){
    int temp = 0;
    temp = *a;
    *a = * b;
    *b = temp;
}

void insertion_sort (vector<int>& arr)
{ 
    int n = arr.size();
    cout<< n << endl;

    for(int i = 0 ; i <= n-1; i++)
    {
        int j = i;
        while( j > 0 && arr[j-1] > arr[j]){
            swap(&arr[j-1],&arr[j]);
            j--;
        }

        
    }
    for(int i = 0; i < n ; i++){
        cout<<"The sorted array is "<<arr[i]<<endl;
    }
    
}


int main(){
    vector<int> arr;
    int n;
    int a;
    cout<<"Enter the size of the array"<<endl;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    insertion_sort(arr);
    
}


