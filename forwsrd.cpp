#include <iostream>
#include <forward_list>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    string str = "mi rabotali s githabom ya ustala pomogite";
    system("chcp 65001");
    forward_list<int> lst{2, -13, 0, 5, -2, 0, 3, 89};
    
    for_each(lst.begin(), lst.end(), [](const int& elem){if(elem<0){cout << "отриц." << endl;} 
                                                       else if(elem == 0){cout << "ноль" << endl;} 
                                                       else{cout << "полож." << endl;}});

    for(auto &el : lst){
        cout << el << " ";
    }
    cout << "2" << endl;
    cout << endl;
    return 0;
}