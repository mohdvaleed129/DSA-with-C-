#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
}
void swapAlternate(int arr[], int size){
    for(int i=0;i<size;i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);                  // swap alternate method
        }                                           // temp =  arr[1]
    }                                               // arr[1] = arr[0]
}                                                   // arr[0] = temp
int main(){
    int arr[6] = {3, 2, 5, 7, 8, 1};
    int brr[5] = {4, 6, 8, 2, 1};
    swapAlternate(arr, 6);
    printArray(arr ,6);
    swapAlternate(brr, 5);
    printArray(brr ,5);
    return 0;
}
