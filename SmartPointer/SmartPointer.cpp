#include <iostream>
#include <memory>
#include <string>

class Istanbul
{
public:
    Istanbul()
    {
        std::cout << "Istanbul Created" << std::endl;
    }
    ~Istanbul()
    {
        std::cout << "Istanbul Destroyed" << std::endl;
    }
};

class Ankara
{
public:
    Ankara()
    {
        std::cout << "Ankara Created" << std::endl;
    }

    ~Ankara()
    {
        std::cout << "Ankara Destroyed" << std::endl;
    }
};

int main()
{
    {
        std::unique_ptr<Istanbul> entity(new Istanbul());
    }
    {
        Ankara *p = new Ankara();
        delete p;
    }

    std::cin.get();
}