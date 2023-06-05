#include<iostream>
#include<vector>
using namespace std;

int swap(int *a, int *b){
    int temp = 0;
    temp = *a;
    *a = * b;
    *b = temp;
}

void selection_sort(vector<int>& arr)
{
    int n = arr.size();
    cout<< n << endl;

    for(int i = 0; i <=n-2; i++)
    {
        int min = i;
        for(int  j=i ; j <=n-1 ; j++)
        {
            if(arr[j] < arr[min]){
                min = j;
            }

        }
        swap(&arr[i], &arr[min]);
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
    selection_sort(arr);
    
}



    
