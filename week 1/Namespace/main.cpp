#include<iostream>
using namespace std;

int letsParty(int a, int b){
    cout << "Let's Party" << endl;
    int sum = a + b;
    return sum;
}

void driving(){
    cout << "Driving!!" << endl;
}

namespace vaidik {
    int letsParty(int a, int b){
    cout << "Vaidik's Party" << endl;
    int sum = a + b;
    return sum;
    }

    void driving(){
        cout << "Im Driving!!" << endl;
    }
}

int main(){
    int sum = letsParty(5, 6);
    cout << "Sum = " << sum << endl;
    // driving();

    int sum2 = vaidik::letsParty(4, 5);
    cout << "Sum2 = " << sum2 << endl;
    // vaidik::driving();
    return 0;
}