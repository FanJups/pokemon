#ifndef POKEMON_H_INCLUDED
#define POKEMON_H_INCLUDED

#include <string>
#include <vector>

class Pokemon
{

    private :

    std::string name;
    int hitPoints ;
    std::vector <int> skillPoints  ;
    std::vector <std::string> skillNames ;
    void setSkillPoints(int value);
    void setSkillNames(std::string value);

    public :

    Pokemon();

    std::vector <int> getSkillPoints();
    std::vector <std::string> getSkillNames();
    std::string getName();
    void setName(std::string namePokemon);
    void setSkills(std::string skillsPokemon,int points);
    int getHitPoints();
    void isAttackedByAnotherPokemonSkillPoints(int skillPoint);


};



#endif // POKEMON_H_INCLUDED
