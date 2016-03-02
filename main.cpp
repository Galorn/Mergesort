#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <time.h>

using namespace std;



int main()
{
    // INITIALISATION DES VARIABLES
    int nbScores(0), iBegin(0), iEnd(0);
    vector<int> scores, scorestosort;

    // INITIALISATION DU DEPART DU RANDOM
    srand(time(NULL));
    // INTRODUCTION
    cout << "Hello please enter the number of scores you want to sort with a merge sort" << endl;
    cin >> nbScores;
    cout << "You chose to enter " << nbScores << " scores." << endl ;
    // CAS OU SCORES TROP GRAND
    if (nbScores > 10000)
    {
        cout << "Deuh t'es trop con ! Ce nombre est un peu grand a mon gout..." << endl;
        return 0;
    }
    // BOUCLE DE STOCKAGE DANS LE TABLEAU scores
    for(int noCase = 0; noCase < nbScores; noCase++)
    {
        scores.push_back(rand());
        // TRACE
        cout << "coucou case " << noCase << " il y a " << scores[noCase] << endl;
    }

    return 0;
}

