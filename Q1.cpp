// Name - Sam Khera
// RollNo - 2010991706
// Set - 04
// Q1

#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int n) 
{
    int min = -1;
    set<int> s;
    for (int i=n-1;i>=0;i--) 
    {
        if (s.find(arr[i])!=s.end()) 
            min=i; 
  
        else
            s.insert(arr[i]); 
    }
    if (min!=-1) 
        cout <<"The minimum index of the repeating element is "<<min;
    else
        cout << "Invalid input"; 
}
int main() 
{ 
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    } 
    int n=sizeof(arr)/sizeof(arr[0]); 
    print(arr, n); 
} 