#include "mapcollection.h"

using namespace std;

void mapCollection(){
    map<string, list<string>> pokedex;

    list<string> pikachuAttacks {"thunder shock", "tail whip", "quick attack"};
    list<string> charmanderAttacks {"frame thrower", "scary face"};
    list<string> chikoritaAttacks {"razor leaf", "poison powder"};

    pokedex.insert(pair<string, list<string>>("Pikachu", pikachuAttacks));
    pokedex.insert(pair<string, list<string>>("Charmander", charmanderAttacks));
    pokedex.insert(pair<string, list<string>>("Chikorita", chikoritaAttacks));

    for(auto pair: pokedex){
        cout << pair.first << " - ";
        for(auto attack : pair.second){
            cout << attack << ", ";
        }
        cout << endl;
    }

    system("pause>0");
}