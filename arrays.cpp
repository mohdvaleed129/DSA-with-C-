#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout << "Printing array" << endl;
    for(int i = 0; i<size;i++){
        cout << arr[i] << " "<<endl;
    }
    cout << "Printing done " << endl;
}

int main(){

    int number[15];

    cout << "Value at 14 index : " << number[14] << endl;

    int second[3] = {2,5,7};
    cout << "value at 2 index : " << second[2] << endl; 

}