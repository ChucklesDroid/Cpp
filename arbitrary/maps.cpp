#include <iostream>
#include <map>
#include <string>
#include <utility>

class Person
{
public:
    Person(std::string name, int age): name(name), age(age) {};
    std::string name;
    int age;
    /*friend bool operator<(const Person& lhs, const Person& rhs) { lhs.age<rhs.age; };*/
    bool operator<(const Person& rhs) const { return age<rhs.age; };
};

int main() {
    /*<Person, Class>*/
    std::map<Person, int> dictionary = {{{std::string("Jerry"), 16}, 10}, {{std::string("Mota"), 15}, 9}, {{std::string("Tinghan"), 13}, 7}, {{std::string("Tommy"), 14}, 8} };

    dictionary.insert(std::make_pair<Person, int>({std::string("Puchachi"), 12}, 6));

    for (const auto& pair: dictionary) {
        std::cout << "Name: " << pair.first.name << " Age: " << pair.first.age << " Class: " << pair.second << std::endl;
    }

    return 0;
}

/*int main() {*/
/*    std::map<std::string, int, std::less<>> dictionary = {{std::string("Jerry"), 16}, {std::string("Mota"), 15}, {std::string("Tinghan"), 13}, {std::string("Tommy"), 14} };*/
/*    dictionary.insert(std::make_pair(std::string("Puchachi"), 12));*/
/**/
/*    for (const auto& pair : dictionary)*/
/*        std::cout << "Name: " << pair.first << " Age: " << pair.second << std::endl;*/
/**/
/*    return 0;*/
/*}*/
