// strivers logic was 
// for(int i = n-1 ; i >= 1 ; i--)
// {
//     for(int j = 0 ; j < i-1 ; j++) 
//     {
//         swap()
//     }
// }




#include<iostream>
#include<vector>
using namespace std;

int swap(int *a, int *b){
    int temp = 0;
    temp = *a;
    *a = * b;
    *b = temp;
}

void bubble_sort(vector<int>& arr)
{
    int n = arr.size();
    cout<< n << endl;

    for(int i = 0 ; i <=n-1; i++)
    {
        for(int  j=0 ; j <=n-i-1 ; j++)
        {
            if(arr[j] > arr[j+1]){
              
                swap(&arr[j], &arr[j+1]);
            }

        }
        
    }
    for(int i = 0; i < n ; i++){
        cout<<"The sorted array is "<<arr[i]<<endl;
    }

}

int main()
{
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
    bubble_sort(arr);
    
}



    
