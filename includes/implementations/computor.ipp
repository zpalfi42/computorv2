#ifndef COMPUTOR_IPP
# define COMPUTOR_IPP

#include <computor.hpp>

Computor::Computor(void) {

}

Computor::~Computor(void) {

}

void    Computor::initComputor(void) {
    std::string input;

    while (true)
    {
        std::cout << "> ";
        std::getline(std::cin, input);

        if (input == "exit")
            exit(1);

        this->preprocess(input);
    }    
}

std::string ltrim(const std::string& s)
{
    size_t  start = s.find_first_not_of(" \t\n\r");
    return (start == std::string::npos) ? "" : s.substr(start);
}

std::string rtrim(const std::string& s)
{
    size_t  end = s.find_last_not_of(" \t\n\r");
    return (end == std::string::npos) ? "" : s.substr(0, end+1);
}

std::string trim(const std::string& s)
{
    return ltrim(rtrim(s));
}

std::vector<std::string>    tokenizer(const std::string& s)
{
    std::vector<std::string>    tokens;
    std::string                 token;

    for (size_t i = 0; i < s.size(); i++)
    {
        
        if (s[i] == '-' || s[i] == '+')
        {
            if (!token.empty())
                tokens.push_back(token);
            token.clear();
        }

        if (s[i] != ' ')
            token += s[i];
    }
    tokens.push_back(token);

    return tokens;
}

bool    tokenValidator(std::string token, bool first)
{
    if (!first && token.find('-') == std::string::npos && token.find('+') == std::string::npos)
        return false;
    return true;
}

void    Computor::preprocess(std::string input) {
    std::string s = trim(input);

    // MIN SIZE 3 (A=0)
    if (s.size() < 3)
        return ;

    // CHECK IF THERES EXACTLY ONE EQUAL SIGN
    if (s.find('=') == std::string::npos || s.find_first_of('=') != s.find_last_of('='))
        return ;
    
    
    std::vector<std::string> lhs = tokenizer(s.substr(0, s.find('=')));
    std::vector<std::string> rhs = tokenizer(s.substr(s.find('=')+1));
    
    for (size_t i = 0; i < lhs.size(); i++)
        std::cout << lhs[i] << std::endl;
    for (size_t i = 0; i < rhs.size(); i++)
        std::cout << rhs[i] << std::endl;
    
}

#endif

