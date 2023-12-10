#include "Warlock.hpp"


Warlock::Warlock(std::string const &name, std::string const &title)
{
    this->name = name;
    this->title = title;
    std::cout << this->name << ": This looks like another boring day.\n";
}

Warlock::~Warlock(){
    std::cout << this->name << ": My job here is done!\n";
}

std::string const  & Warlock::getName() const {
    return this->name;
}

std::string const & Warlock::getTitle() const {
    return this->title;
}

void Warlock::setTitle(std::string const & title)
{
    this->title = title;
}

void Warlock::introduce() const {
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}

void Warlock::learnSpell(ASpell *aspell_ptr)  {
    if (aspell_ptr)
        this->spells[aspell_ptr->getName()] = aspell_ptr->clone();
}

void Warlock::forgetSpell( std::string name)  {
    std::map<std::string, ASpell *>::iterator it = spells.find(name);
    if (it != spells.end())
        delete it->second;
    spells.erase(name);
}

void Warlock::launchSpell(std::string spell_name, ATarget const &atartget_ref){
    std::map<std::string, ASpell *>::iterator it = spells.find(spell_name);
    if (it != spells.end())
        it->second->launch(atartget_ref);
}