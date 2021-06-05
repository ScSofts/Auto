#include "auto"
#include <iostream>
#include <map>
int main(void){
    using Auto::String;
    using Auto::Vector;
    String str{"s|h"};
    str.split(R"(\|)"_re).every([](const String & s){
        std::cout << s << std::endl;
    });

    Auto::Map<Auto::Int,String> map{
        {1,"Joke"},
        {2,"Janson"},
        {3,"Mike"}
    };
    map.every([](String & value,Auto::Int key){
        std::cout << key << " => " << value << std::endl;
    });
    return 0;
}