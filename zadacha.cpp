#include <iostream>
#include <forward_list>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    system("chcp 65001");
    int multic = 1;
    vector<int> v{2, -13, 0, 5, -2, 0, 3, 89};

    for_each(v.cbegin(), v.cend(), [&multic](const auto& elem){if (elem!=0){multic*=elem;};
        });
    cout << multic;
}