#include <iostream>
#include <forward_list>
#include <algorithm>
#include <vector>
using namespace std;

template<typename T>
struct printer
{
    void operator () (const T& elem) const {
        cout << elem << ' ';
    }
};

int main(){
    system("chcp 65001");
    vector<string> words{"привет", "мир"};
    for_each(words.cbegin(), words.cend(), printer<string>());
    cout << endl;

    vector<int> v{4, 5, 6};
    for_each(v.cbegin(), v.cend(), printer<int>());

    for_each(words.cbegin(), words.cend(), [](const string& elem) {cout << elem << ' ';});

    


}
