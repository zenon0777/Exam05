#pragma once

#include "ATarget.hpp"
#include <map>

class TargetGenerator{
    private :
        TargetGenerator(const TargetGenerator& orig);
        TargetGenerator &operator=(const TargetGenerator& orig);
        std::map<std::string, ATarget *> arr_target;
    public:
        TargetGenerator();
        void learnTargetType(ATarget*);
        void forgetTargetType(std::string const &);
        ATarget* createTarget(std::string const &);
        ~TargetGenerator();
};