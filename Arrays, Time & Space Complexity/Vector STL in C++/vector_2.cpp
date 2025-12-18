#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v){
    for(auto it:v){
        cout << it << " ";
    }
}

int main(){
    vector<char> ch;
    ch.push_back('a');
    ch.push_back('b');
    ch.push_back('c');

    // to print first and last element;
    cout << "First Element : " << ch[0] << endl;
    cout << "Last Element : " << ch[ch.size() - 1] << endl;
    cout << "First Element : " << ch.front() << endl;
    cout << "Last Element : " << ch.back() << endl;

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    print(v);
    return 0;
}

