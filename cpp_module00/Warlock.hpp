#include <iostream>

class Warlock {
    private:
        std::string name;
        std::string title;
        Warlock();
        Warlock(Warlock const &orig);
        Warlock &operator= (Warlock const &orig); 
    public:
        Warlock(std::string const & name, std::string const & title);
        void setTitle(std::string const &title);
        const std::string & getTitle() const;
        const std::string & getName() const;
        void introduce() const;
        ~Warlock();
};