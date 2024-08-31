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

void stacks(){
    //initiallizing a stack ds
    stack<char> charStack; //initializations are similar to each other
    charStack.push('a');
    charStack.push('b');
    charStack.push('c');
    charStack.push('d');
    charStack.push('e');
    charStack.emplace('f');

    //printing the top of the stack
    cout << charStack.top() << endl;
    charStack.pop(); // pops(deletes) the top most element from the stack

    int size = charStack.size();
    cout << size << endl;

    if(charStack.empty() == 1){  // .empty function returns a boolean value (0,1)
        cout << "true" << endl;
    }
    else{
        cout << "false";
    }
    
}

void someSet(){
    set<int> st;
    st.insert(2);
    st.insert(5);
    st.insert(3);
    st.emplace(69);

    //sets store sorted and only unique values

    auto it = st.find(69);
    cout << endl << *(it);
}

void maps(){
    map <int, char> mapp;
    map <int, pair<int, int>> mapp;
    mapp[1] = 'f';
    for(auto it : mapp){
        cout << endl << it.first <<" " << it.second << endl;
    }
}

int main(){
    vectors();

    //lists are stored as doubly linkedlist hence
    //lists gives the functionality to add and delete from the front
    lists();

    //stack data structure follows LIFO 
    //LIFO: Last In First Out
    stacks();

    //sets
    someSet();

    //maps are based on key-value pairs these can be anything and take up only linear time compleity 
    maps();
    //multimaps are maps where we can map multiple values to a single key
    
    return 0;
}