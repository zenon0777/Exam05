#include "ASpell.hpp"

ASpell::ASpell(const std::string &name, const std::string &effects){
    this->name=name;
    this->effects = effects;
}

ASpell::ASpell(const ASpell & orig){
    *this = orig;
}

ASpell &ASpell::operator=(const ASpell &other){
    this->name = other.name;
    this->effects = other.effects;
    return((*this));
}

ASpell::ASpell(){

}

ASpell::~ASpell(){
    
}

const std::string &ASpell::getName() const{
    return (this->name);
}

const std::string &ASpell::getEffects() const{
    return (this->effects);
}

void ASpell::launch(const ATarget &atarget_ref) const
{
    atarget_ref.getHitBySpell((*this));
}
