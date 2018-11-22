#include <iostream>
#include <algorithm>
#include<string>
#include<vector>
#include "Pokemon.h"

using namespace std;

 int maxInts(int ints[],int n)
 {

		int max = 0;
        max = ints[0];

        for (int i = 0; i < n; i++) {
            if (ints[i] > max) {
                max = ints[i];
                    }
        }


		return max;

	}

void showPokemon(Pokemon p) {

		cout << "" << endl << ""<< endl;

cout << " name : "<< p.getName() << endl;

	cout << "Skills and Points " <<  endl ;

std::vector<int> tabPoints = p.getSkillPoints();
std::vector<std::string> tabSkills = p.getSkillNames();




		for (int i = 0; i < tabPoints.size(); i++) {

                cout << tabSkills[i] << "  ---->  " << tabPoints[i]<< endl ;





		}

cout <<""<< endl ;

cout <<" hit points : " << p.getHitPoints()<< endl ;

	}

	int  pokedex() {

		Pokemon pokemon1 ;

		pokemon1.setName("Charmander");

		pokemon1.setSkills("tackle", 30);

		pokemon1.setSkills("burst", 20);

		pokemon1.setSkills("flamethrower", 30);

		Pokemon pokemon2 ;

		pokemon2.setName("Pikachu");

		pokemon2.setSkills("thunderbolt", 30);

		pokemon2.setSkills("thunderclap", 20);

		pokemon2.setSkills("tackle", 30);

		Pokemon pokemon3 ;

		pokemon3.setName("Bulbasaur");

		pokemon3.setSkills("tackle", 30);

		pokemon3.setSkills("vinewhip", 20);

		pokemon3.setSkills("razorleaf", 30);

		Pokemon pokemon4 ;

		pokemon4.setName("Squirtle");

		pokemon4.setSkills("waterball", 30);

		pokemon4.setSkills("watercanon", 20);

		pokemon4.setSkills("tackle", 30);

		std::vector<Pokemon> pokemons ;

		pokemons.push_back(pokemon1);

		pokemons.push_back(pokemon2);

		pokemons.push_back(pokemon3);

		pokemons.push_back(pokemon4);

		while (!(pokemons[0].getHitPoints() == 0 || pokemons[1].getHitPoints() == 0
				|| pokemons[2].getHitPoints() == 0 || pokemons[3].getHitPoints() == 0)) {


			cout << "" << endl ;
			cout << " **** POKEMON GAME **** " << endl<<""<<endl ;

			cout << "You have the choice between several pokemons : 1 ; 2 ; 3 and 4" << endl<<""<<endl ;


cout << " Please, make your choice by entering 1; 2; 3 or 4" << endl ;



			int choix ;

			cin >> choix;

			switch (choix) {
			case 1:

			    {
			         cout <<" This is your pokemon :) "<< endl ;


				showPokemon(pokemons[0]);
				std::vector<int> tab  = pokemons[0].getSkillPoints();
				cout <<" "<< endl <<"Which skill do you want to use to attack ?"<<endl<<"Please, make your choice by entering 1; 2 or 3"<<endl;

				int choix1 ;

				cin >> choix1;

				switch (choix1) {

				case 1:

					// Attacking other pokemons

					for (int x = 0; x < pokemons.size(); x++) {
						if (x != 0) {
							pokemons[x].isAttackedByAnotherPokemonSkillPoints(tab[0]);

							int z = x+1;

							cout<<"Pokemon 1 attacked Pokemon " << z << " !"<<endl;


						}
					}

					break;
				case 2:

					// Attacking other pokemons

					for (int x = 0; x < pokemons.size(); x++) {
						if (x != 0) {
							pokemons[x].isAttackedByAnotherPokemonSkillPoints(tab[1]);

                                int z = x+1;
							cout<<"Pokemon 1 attacked Pokemon " << z << " !"<<endl;
						}
					}

					break;
				case 3:
					// Attacking other pokemons

					for (int x = 0; x < pokemons.size(); x++) {
						if (x != 0) {
							pokemons[x].isAttackedByAnotherPokemonSkillPoints(tab[2]);

                                    int z = x+1;
							cout<<"Pokemon 1 attacked Pokemon " << z << " !"<<endl;
						}
					}
					break;
				default:

					cout<<"Bad entry"<<endl;



				}

			    }


				break;

			case 2:

				{
				    cout <<" This is your pokemon :) "<< endl ;

				showPokemon(pokemons[1]);
				std::vector<int> t  = pokemons[1].getSkillPoints();
				cout <<" "<< endl <<"Which skill do you want to use to attack ?"<<endl<<"Please, make your choice by entering 1; 2 or 3"<<endl;

				int choix2 ;

				cin >> choix2;

				switch (choix2) {
				case 1:

					// Attacking other pokemons

					for (int x = 0; x < pokemons.size(); x++) {
						if (x != 1) {
							pokemons[x].isAttackedByAnotherPokemonSkillPoints(t[0]);
							int z = x+1;


							cout<<"Pokemon 2 attacked Pokemon " << z << " !"<<endl;
						}
					}

					break;
				case 2:
					// Attacking other pokemons

					for (int x = 0; x < pokemons.size(); x++) {
						if (x != 1) {
							pokemons[x].isAttackedByAnotherPokemonSkillPoints(t[1]);
							int z = x+1;
							cout<<"Pokemon 2 attacked Pokemon " << z << " !"<<endl;
						}
					}
					break;
				case 3:

					// Attacking other pokemons

					for (int x = 0; x < pokemons.size(); x++) {
						if (x != 1) {
							pokemons[x].isAttackedByAnotherPokemonSkillPoints(t[2]);
							int z = x+1;
							cout<<"Pokemon 2 attacked Pokemon " << z << " !"<<endl;
						}
					}

					break;
				default:

					cout<<"Bad entry"<<endl;
				}
				}

				break;
			case 3:

                {
                    cout <<" This is your pokemon :) "<< endl ;

				showPokemon(pokemons[2]);
				std::vector<int> table  = pokemons[2].getSkillPoints();

				cout <<" "<< endl <<"Which skill do you want to use to attack ?"<<endl<<"Please, make your choice by entering 1; 2 or 3"<<endl;

				int choix3 ;

				cin >> choix3;

				switch (choix3) {

				case 1:

					// Attacking other pokemons

					for (int x = 0; x < pokemons.size(); x++) {
						if (x != 2) {
							pokemons[x].isAttackedByAnotherPokemonSkillPoints(table[0]);
							int z = x+1;


							cout<<"Pokemon 3 attacked Pokemon " << z << " !"<<endl;
						}
					}

					break;
				case 2:

					// Attacking other pokemons

					for (int x = 0; x < pokemons.size(); x++) {
						if (x != 2) {
							pokemons[x].isAttackedByAnotherPokemonSkillPoints(table[1]);
							int z = x+1;
							cout<<"Pokemon 3 attacked Pokemon " << z << " !"<<endl;
						}
					}

					break;
				case 3:

					// Attacking other pokemons

					for (int x = 0; x < pokemons.size(); x++) {
						if (x != 2) {
							pokemons[x].isAttackedByAnotherPokemonSkillPoints(table[2]);
							int z = x+1;
							cout<<"Pokemon 3 attacked Pokemon " << z << " !"<<endl;
						}
					}

					break;
				default:

					cout<<"Bad entry"<<endl;

				}

                }

				break;
			case 4:

				{
				    cout <<" This is your pokemon :) "<< endl ;

				showPokemon(pokemons[3]);
				std::vector<int> tabl  = pokemons[3].getSkillPoints();
				cout <<" "<< endl <<"Which skill do you want to use to attack ?"<<endl<<"Please, make your choice by entering 1; 2 or 3"<<endl;

				int choix4 ;

				cin >> choix4;

				switch (choix4) {

				case 1:

					// Attacking other pokemons

					for (int x = 0; x < pokemons.size(); x++) {
						if (x != 3) {
							pokemons[x].isAttackedByAnotherPokemonSkillPoints(tabl[0]);
							int z = x+1;

							cout<<"Pokemon 4 attacked Pokemon " << z << " !"<<endl;
						}
					}

					break;
				case 2:
					// Attacking other pokemons

					for (int x = 0; x < pokemons.size(); x++) {
						if (x != 3) {
							pokemons[x].isAttackedByAnotherPokemonSkillPoints(tabl[1]);
							int z = x+1;
							cout<<"Pokemon 4 attacked Pokemon " << z << " !"<<endl;
						}
					}
					break;
				case 3:
					// Attacking other pokemons

					for (int x = 0; x < pokemons.size(); x++) {
						if (x != 3) {
							pokemons[x].isAttackedByAnotherPokemonSkillPoints(tabl[2]);
							int z = x+1;
							cout<<"Pokemon 4 attacked Pokemon " << z << " !"<<endl;
						}
					}
					break;
				default:
					cout<<"Bad entry"<<endl;

				}
				}

				break;
			default:

				cout<<"Bad entry"<<endl;
			}
		}

		// ICI



		cout<<""<<endl<<"Final hit points of pokemons "<<endl;


		int pokemonsHitPoints[4] ;

		for (int y = 0; y < pokemons.size(); y++) {

                int z = y+1;

			cout<<"Pokemon " << z << " ----> " << pokemons[y].getHitPoints()<<endl;

			pokemonsHitPoints[y] = pokemons[y].getHitPoints();
		}

		int max = maxInts(pokemonsHitPoints,4);

		std::vector<Pokemon> winningPokemons ;

		for (int y = 0; y < pokemons.size(); y++) {

			if (pokemons[y].getHitPoints() == max) {

				winningPokemons.push_back(pokemons[y]);

			}

		}

		cout<<""<<endl;


		if (winningPokemons.size() == 1) {


			cout<<"THE WINNER IS :"<<endl;

		} else {

cout<<"THE " << winningPokemons.size() << " WINNERS ARE :"<<endl;



		}

		for (int y = 0; y < pokemons.size(); y++) {

			if (pokemons[y].getHitPoints() == max) {

                int z = y+1;

				cout<<"Pokemon " << z<<endl;

				showPokemon(pokemons[y]);

			}

		}


		cout<<" **** POKEMON GAME ENDS **** "<<endl;

		return 0;

	}



int main()
{
    pokedex();
    return 0;
}
