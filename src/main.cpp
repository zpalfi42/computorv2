#include <computor.hpp>

int main(int argc, char **argv)
{
    if (argc != 1)
    {
        std::cerr << "Invalid argument: " << argv[1] << std::endl;
        std::cerr << "Usage: ./computorv2" << std::endl;
        exit(1);
    }

    Computor    computor;
    computor.initComputor();

    std::cout << "Hello world!" << std::endl;
}