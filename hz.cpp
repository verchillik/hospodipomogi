// for_each - функция из библиотеки
#include <iostream>
#include <forward_list>
using namespace std;

template<typename T>
T myFor_each(forward_list<int> &con, T f){
    for(auto &el : con){
        f(el);
    }
    return f;
}

int main(){
    forward_list<int> fwl{2, 5,4, 6, 8};
    int sum = 0; 
    int mult = 7;
    int summ = 0;
    // auto summator = [&sum](int x){sum += x;};
    auto sumChanger = [&summ](int& x){x += summ; summ = x;};
    // auto sumChanger = [&mult](int& x){x = x+(*x2);};
    // myFor_each(fwl, summator);
    myFor_each(fwl, sumChanger);

    for(auto &el : fwl){
        cout << el << " ";
    }
    cout << endl;
    
    return 0;
}