#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 10> arr = {43, 32, 11, 21, 89, 33, 1, 38};

    /*Case 1: default operator<*/
    std::sort(arr.begin(), arr.end());
    for(const auto& value: arr) {
        std::cout << value << " ";
    }
    std::cout << " : sorted with the default operator<" << std::endl;

    /*Case2: standard library compare function object*/
    std::sort(arr.begin(), arr.end(), std::greater<>());
    for(const auto& value: arr) {
        std::cout << value << " ";
    }
    std::cout << " : sorted with the standard library compare functor" << std::endl;

    /*Case 3: custom function object*/
    class compare {
    public:
        bool operator()(const int& lhs, const int& rhs) const { return lhs<rhs; };
    };
    std::sort(arr.begin(), arr.end(), compare());
    for(const auto& value: arr) {
        std::cout << value << " ";
    }
    std::cout << " : sorted with the custom functor" << std::endl;

    /*Case 4: lambda function*/
    std::sort(arr.begin(), arr.end(), [](const int& lhs, const int& rhs){
        return lhs>rhs;
    });
    for(const auto& value: arr) {
        std::cout << value << " ";
    }
    std::cout << " : sorted with the lambda function" << std::endl;


    return 0;
}
