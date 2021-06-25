#include <iostream>
#include <bits/stdc++.h>
#define size 5
using namespace std;


void print_results(int matA[],int size_n){
    int x;
    for (x=0;x<size_n;x++){
        cout<< matA[x] << ",";
    }
    cout<<endl;
}

//creating the bubble sort function;
void sort_fnx(int matA[], int size_n){

    int x,y;
    int temp;

    for (x=0;x<=size_n-1;x++){

        for(y=0;y<size_n-x-1;y++){
            if (matA[y] > matA[y+1]){
                temp=matA[y];
                matA[y]=matA[y+1];
                matA[y+1] = temp;
            }
        }

    }
    print_results(matA, size_n);

}


int main(){

    int matrixA[size];
    for(int k=0;k<size;k++){
        cout<<"Enter the values of your matrix: " << endl;
        cin>>matrixA[k];
    };
    cout<< "=======================" <<endl;
    print_results(matrixA,size);

    cout<< "=======================" <<endl;

    cout<<"Array is sorted :" <<endl;

    sort_fnx(matrixA,size);

    cout<< "=======================" <<endl;
    return 0;
}
//silverware;
