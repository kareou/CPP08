#include "easyfind.hpp"

int main(int argc, char const *argv[])
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    std::cout << easyfind(v, 2) << std::endl;
    return 0;
}
