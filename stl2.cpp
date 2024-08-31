#include<bits./stdc++.h>>

using namespace std;

void sortingAndThings(int a){
    //we can sort using sort() function

    sort(a, a + 5);
    cout << "sorted array";
    for(int i=0; i<5; i++){
        cout << a[i] << " ";
    }
}

int main () {
    int a[5];
    for(int i=0; i<5; i++){
        cin >> a[i];
    }
    for(int i=0; i<5; i++){
        cout << a[i] << " ";
    }
    
    return 0;
}