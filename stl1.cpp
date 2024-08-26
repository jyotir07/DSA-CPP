#include<bits./stdc++.h>

using namespace std;

void vectors(){
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
}

void lists(){
    //initiallizing a list
    list<int> saddiList;

    //adding elements in the list
    saddiList.push_back(99);
    saddiList.emplace_back(88); //adds to the end (faster way)

    saddiList.emplace_front(100);

    //printing the list using the simplest way
    for(auto it : saddiList){
        cout << it << " ";
    }
}

int main(){
    vectors();
    lists();
    
    return 0;
}