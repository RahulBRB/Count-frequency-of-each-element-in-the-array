#include<bits/stdc++.h>
using namespace std;

void frequency(int arr[], int size){
    unordered_map<int,int>map;
    for(int i=0;i<size;i++){
        map[arr[i]]++;
    }
    for( auto x : map){
        cout << x.first << " " << x.second << endl;
    }
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int size;
    size = sizeof(arr)/sizeof(arr[0]);

    frequency(arr,size);

    return 0;
}
