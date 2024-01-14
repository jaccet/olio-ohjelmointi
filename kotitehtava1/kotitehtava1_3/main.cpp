#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int game(int maxnum)
{
    srand(time(0));

    int randomNum = rand() % maxnum + 1;
    int playerNum = 21;
    int nbrOfGuesses = 0;

    cout<<"Guess the random number between 0 and "<<maxnum<<':'<<endl;

    do {
        cin>>playerNum;
        nbrOfGuesses++;

        if (playerNum > maxnum) {
            cout<<"The given number was too high."<<endl;
        } else if (playerNum < randomNum) {
            cout<<"Higher"<<endl;
        } else if (playerNum > randomNum) {
            cout<<"Lower"<<endl;
        }
    } while (playerNum != randomNum);

    cout<<"Correct answer"<<endl;

    return nbrOfGuesses;
}

int main()
{
    int maxnum;
    cout<<"Give the maximum reference number:"<<endl;
    cin>>maxnum;
    int nbrOfGuesses = game(maxnum);
    cout<<"You guessed "<<nbrOfGuesses<<" times."<<endl;
    return 0;
}
