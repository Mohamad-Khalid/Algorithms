#include <iostream>

using namespace std;

void insertionSort(int arr[], int n){
    // mark first element as sorted
    for(int i=1 ;i<n;i++){
        // for every unsorted element pick it
        //move it to the right place
        // right place  a <= b <= c
        int k = arr[i], j = i-1; 
        while(j>=0 && arr[j]>k){
            // shift elements to right by 1
            arr[j+1] = arr[j];
            j--;
        }
        // this is the right place for k
        arr[j+1] =k;
    }
}


int main(){

    const int maxSize = 100;
    int arr[maxSize]={0};

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    insertionSort(arr,n);

    for(int i =0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}