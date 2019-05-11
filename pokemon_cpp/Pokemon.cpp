#include "Pokemon.h"

using namespace std;

Pokemon::Pokemon():hitPoints(100)
{

}

vector<int> Pokemon::getSkillPoints()
{
    return skillPoints;
}

void Pokemon::setSkillPoints(int value)
{
    skillPoints.push_back(value);
}

vector<string> Pokemon::getSkillNames()
{
    return skillNames;
}

void Pokemon::setSkillNames(string value)
{
    skillNames.push_back(value);
}


string Pokemon::getName()
{
    return name;
}
void Pokemon::setName(string namePokemon)
{
   name = namePokemon;
}
void Pokemon::setSkills(string skillsPokemon,int points)
{

    setSkillNames(skillsPokemon);
    setSkillPoints(points);

}
int Pokemon::getHitPoints()
{
    return hitPoints;
}
void Pokemon::isAttackedByAnotherPokemonSkillPoints(int skillPoint)
{
    hitPoints = hitPoints - skillPoint;

		if (hitPoints < 0) {
			hitPoints = 0;
		}
}

