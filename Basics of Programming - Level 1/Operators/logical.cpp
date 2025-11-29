#include<iostream>
using namespace std;

int main(){
    // && || !

    bool cond1 = true;
    bool cond2 = true;
    bool cond3 = false;

    // AND
    if(cond1 && cond2 && cond3){
        cout << "all conditions are true" << endl;
    } else {
        cout << "all conditions are not true." << endl;
    }

    // OR
    if(cond1 || cond2 || cond3){
        cout << "atleat one condition is true" << endl;
    } else {
        cout << "all conditions are false." << endl;
    }

    // NOT 
    bool condition = false;
    cout << !condition << endl;
}