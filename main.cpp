#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctime>

using namespace std;

int main()
{
    // INITIALISATION DES VARIABLES
    int rand(), donnees(0), initialisation(0), condition(0), cases(0);
    vector<int> scores;

    // INITIALISATION DU DEPART DU RANDOM
    srand(time(NULL));
    // INTRODUCTION
    cout << "Hello please enter the number of scores you want to sort with a merge sort" << endl;
    cin >> initialisation;
    cout << "You chose to enter " << initialisation << " scores." << endl ;
    // BOUCLE DE STOCKAGE DANS LE TABLEAU scores
    for(condition = initialisation; condition >0; condition--)
    {
        donnees = rand();
        scores.push_back(donnees);
        cases++ ;
        // TRACE
        cout << "coucou case " << cases << " il y a " << scores[condition] << endl;

    }



    return 0;
}
