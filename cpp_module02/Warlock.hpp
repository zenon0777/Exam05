#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>
#include "SpellBook.hpp"

class Warlock {
    private:
        std::string name;
        std::string title;
        Warlock();
        Warlock(Warlock const &orig);
        Warlock &operator= (Warlock const &orig);
        SpellBook book;
    public:
        Warlock(std::string const & name, std::string const & title);
        void setTitle(std::string const &title);
        const std::string & getTitle() const;
        const std::string & getName() const;
        void introduce() const;
        void learnSpell(ASpell *aspel_ptr);
        void forgetSpell( std::string name);
        void launchSpell(std::string name, ATarget const &atartget_ref);
        ~Warlock();
};