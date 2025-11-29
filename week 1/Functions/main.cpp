#include<iostream>
using namespace std;

void printCouting(){
    for(int i = 1; i <= 5; i++){
        cout << i << " ";
    }
    cout << endl;
}

int sum(int a, int b) {
    int totalSum = a + b;
    return totalSum;
}

void printName(); // function declaration (signature)

int getMultiplication(int x, int y, int z){
    int result = x * y * z;
    return result;
}

void printNameTenTimes(){
    for(int i = 1; i <= 10; i++){
        cout << "vdk.codes" << " " << endl;
    }
}

void printMultiple(int num){
    for(int i = 1; i <= 10; i++){
        cout << (num * i) << " ";
    }
    cout << endl;
}

int convertIntoCelcius(int far){
    int celcius = (far-32)*5/9;
    return celcius;
}

char convertIntoUpperCase(char ch){
    char answer = ch - 'a' + 'A';
    return answer;
}



int main() {
    /*
    printCouting();
    printCouting();
    */

    /*
    int ans = sum(5, 10);
    cout << ans << endl;
    */
    
    // printMyName();
    int multiplication = getMultiplication(2, 2, 2);
    cout << multiplication << endl;

    printNameTenTimes();

    printMultiple(2);

    int celcius = convertIntoCelcius(106);
    cout << celcius << endl;

    char ch = convertIntoUpperCase('b');
    cout << ch << endl;


    return 0;
}

void printMyName() {
    cout << "vdk.codes" << endl;
}