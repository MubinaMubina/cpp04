#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
    public:
        Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        virtual ~Brain();

        // PSEUDOCODE: std::string ideas[100];   (public per the subject)
        // Helpers you will want for the deep-copy tests (optional):
        //   void        setIdea(int i, const std::string& s)   bounds check 0..99
        //   std::string getIdea(int i) const
};

#endif
