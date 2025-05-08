#ifndef COMPUTOR_HPP
# define    COMPUTOR_HPP

# include <iostream>
# include <string>
# include <vector>
# include <utility>

/*
    How it works:

    The program waits for an input. There are a few cases, if the input is not in this cases, the input is ignored.

    TO DO:

    - VARIABLES ASSIGNEMENT (VARIABLE i NOT ALLOWED)
    - BASIC OPERATIONS
    - FUNCTIONS ASSIGNEMENT
    - MATRIX ASSIGNEMENT

*/

class   Computor {
private:
public:
    Computor();
    ~Computor();

    void    initComputor();

    void    preprocess(std::string input);
};

# include <computor.ipp>

#endif