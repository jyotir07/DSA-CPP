#include<bits./stdc++.h>

using namespace std;

int main(){
    //declaring a vector and its datatype
    vector <int> jyotirsVec;

    //adding elements in the vector using a slower way
    jyotirsVec.push_back(10);
    //adding elements using a faster way
    jyotirsVec.emplace_back(69);
    jyotirsVec.emplace_back(70);
    jyotirsVec.emplace_back(75);
    jyotirsVec.emplace_back(96);

    vector<int> smthn(5, 12); //addes 5 elements in the vector with each element being '12'
    vector <int> smthn2(5); //created a vector of 5 spaces containing 0/garbage value

    cout << jyotirsVec[0] << " " << jyotirsVec[1];

    //printing using iterator
    vector<int>::iterator loml = jyotirsVec.begin();
    // loml++;
    cout << " " << *(loml) ;
    cout << endl;
    //now using a for loop to print the values
    for(vector<int>::iterator it = jyotirsVec.begin(); it != jyotirsVec.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;
    //simpler way to print the vector is using 'auto'
    for (auto it = jyotirsVec.begin(); it != jyotirsVec.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;
    //another simpler way to print the whole vector
    for(auto it : jyotirsVec){
        cout << it << " ";
    }
    return 0;
}