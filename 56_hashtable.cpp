#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_map<std::string, int> hashMap;
    hashMap["one"] = 1;
    hashMap["two"] = 2;
    hashMap["three"] = 3;
    for (const auto &pair : hashMap)
    {
        std::cout << pair.first << " => " << pair.second << std::endl;
    }
    return 0;
}
