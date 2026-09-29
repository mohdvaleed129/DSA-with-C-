#include<iostream>
using namespace std;
int findUnique(int *arr, int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[] = {2, 3, 6, 2, 3, 6, 1};
    int size = 7;
    int unique = findUnique(arr, size);
    cout << "The unique element is: " << unique << endl;
}