#include <bits/stdc++.h>
using namespace std;

int secondlargest1(int arr[], int size){
    int largest = 0;
    int secondlargest = -1;
    if(size<2) return -1;
    for(int i = 0 ; i<size; i++){
        if(arr[largest] < arr[i]){
            largest = i;
        }
    }
    for(int i = 0; i<size; i++){
        if(arr[i] != arr[largest]){
            if(secondlargest == -1){
                secondlargest = i;
            }
            else if(arr[secondlargest]<arr[i]){
                secondlargest = i;
            }
        }
    }
    
    return arr[secondlargest];
}

int secondsmallest1(int arr[], int size){
    int smallest = 0;
    int secondsmallest = -1;
    if(size<2) return -1;
    
    for(int i = 0; i<size; i++){
        if(arr[smallest]>arr[i]){
            smallest = i;
        }
    }
    
    for(int i = 0; i<size; i++){
        if(arr[i]!=arr[smallest])
            if(secondsmallest==-1)
                secondsmallest = i;
            else if(arr[secondsmallest]>arr[i]){
                secondsmallest = i;
            }
    }
    return arr[secondsmallest];
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    
    int secondlargest = secondlargest1(arr, n);
    int secondsmallest = secondsmallest1(arr, n);
    
    cout<<secondsmallest<<"  "<<secondlargest<<endl;
    
    
    
    return 0;
}
