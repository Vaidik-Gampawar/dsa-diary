#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v){
    int size = v.size();
    cout << "Printing vector : ";
    for (int i = 0; i < size; i++){
        // cout << v[i] << " ";
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main(){
    /*
    
    */
    //vector intialization 
    vector<int> v; // default vector with 0 values
    vector<int> arr(5, -1);
    // print(arr);

    vector<int> arr2 = {1, 2, 3, 4, 5};
    //arr2.pop_back();
    //print(arr2);

    // how to copy vector
    vector<int> arr3 = {1, 2, 3, 4, 5};
    vector<int> arr4(arr3);
    print(arr4);



    // To get capacity and size of vector
    /*
    while(1){
        int data;
        cin >> data;
        v.push_back(data);

        cout << "Capacity : " << v.capacity()<< " Size : " << v.size() << endl;
    }
    */
    

    //Push and Pop
    /*
    //insert
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    print(v);

    // pop -> delete -> end
    //1 - 2 - 3
    v.pop_back();
    print(v); // 1 - 2

    v.pop_back();
    print(v); // 1

    v.pop_back();
    print(v); //

    v.pop_back();
    print(v);
    */
    
    //Taking input
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int d;
        cin >> d;
        v.push_back(d);
    }

    print(v);

    /*
    for(int i = 0; i < 10; i++){
        v.push_back(60);
    }
    */

    // To clear vector
    v.clear();
    print(v);
    
}