#include<iostream>
using namespace std;

int main() {
    //If-else block
    /*
    int budget;
    cout << "Enter your budget : " ;
    cin >> budget;

    if(budget > 2000000) {
        cout << "You can buy scorpio!!" << endl;
    } else {
        cout << "Aukat ke bahar hai!!";
    }
    */

    //If - else if - else block
    /*
    int marks;
    marks = 55;
    if(marks > 90){
        cout << "A" << endl;
    }
    else if (marks > 90)
    {
        cout << "B"<< endl;
    }
    else if (marks > 70) {
        cout << "C"<< endl;
    }
    else if (marks > 60) {
        cout << "D"<< endl;
    }
    else {
        cout << "FAIL!!";
    }
    */

    //Nested Condition
    int height;
    cout << "Enter height : ";
    cin >> height;

    int weight;
    cout << "Enter weight : ";
    cin >> weight;

    if (height > 5) {
        if (weight > 70)
        {
            cout << "You got a good BMI!!";
        } else {
            cout << "Tujhe se naa ho payega!!";
        }
        
    } else {
        cout << "First go get a complain";
    }
    
    

    return 0;
}