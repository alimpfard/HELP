/**
 * @file main.cpp
 * Provides the entry point main().
 * @author AnotherTest
 */
#include "Preprocessor.h"
#include "Preprocessor.cpp"

int main(int argc, char** argv)
{
    if (argc==1)
    {
        std::cout<<"Handy Esoteric Language Preprocessor v1.2"<<std::endl<<"\t"<<"Invoke with "<<argv[0]<<" file_name directive_char"<<std::endl<<"\t "<<argv[0]<<" main.cpp @"<<std::endl;
        exit(0);
    }
    try {
        if(argc < 2)
            throw std::runtime_error("invalid usage (input file required)");
        char mc='#';
        if(argc>2) mc=*(argv[2]);
        std::string meh = std::string(argv[1]);
        Preprocessor p;
        p.setFName(meh);
        p.setMagicChar(mc);
        p.process();
    } catch(std::exception& e) {
        std::cerr << "error: " << e.what() << std::endl;
    }
}
