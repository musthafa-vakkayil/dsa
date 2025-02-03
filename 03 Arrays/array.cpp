/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    std::cout<<"Hello World";
    
    int arr[5] = { 10, 20, 30, 25, 12};
    
    int val = 25;
    
    // search for element in an array
    for(int i =0; i<5; i++){
        if (arr[i] == val){
            std::cout<<i;
            break;
        }
    }
    
    // insert element into an array
    int pos = 2;
    
    for(int i=pos; i<5; i++){
        if (i >= 5){
            std::cout<<"Cannot insert element";
        }
        
        arr[i+1] = arr[i];
    }
    
    arr[pos]= val;
    
    for(int j=0; j<5; j++){
        std::cout<<arr[j];
        
        std::cout<<"\n";
    }
    
    // delete element from an array
    
    int del = 20;
    
    int arrNew[5] = { 10, 20, 30, 25, 12};
    
    for (int i=0; i<5; i++){
        if(arrNew[i]== del){
            for(int j = i; j<5; j++){
                arrNew[j] = arrNew[j+1];
            }
            break;
        }
    }
    
    for(int j=0; j<4; j++){
        std::cout<<arrNew[j];
        
        std::cout<<"\n";
    }

    return 0;
}

int deleteElement(int arr[], int n, int d){
    int i;
    for(i=0; i<n; i++){
        if(arr[i]==d){
            break;
        }
    }
    
    if(i==n){
        return n;
    }
    
    for(int j = i; j<n-1; j++){
        arr[j] = arr[j+1];
    }
    
    return n-1;
}