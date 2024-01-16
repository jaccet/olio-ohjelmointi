#include "game.h"

Game::Game(int usermaxnum)
{
    srand(time(0));
    maxNumber = usermaxnum;
    cout<<"GAME CONSTRUCTOR: object initialized with "<<maxNumber<<" as a maximum value"<<endl;
}

void Game::play()
{
    randomNumber = rand() % maxNumber + 1;

    numOfGuesses=0;

    do {
        cout<<"Give your guess between 1-"<<maxNumber<<endl;
        cin>>playerGuess;

        numOfGuesses++;

        if (playerGuess < randomNumber) {
            cout<<"Your guess is too small"<<endl;
        } else if (playerGuess > randomNumber) {
            cout<<"Your guess is too big"<<endl;
        } else {
            cout<<"Your guess is right = "<<playerGuess<<endl;
            printGameResult();
        }

    } while (randomNumber != playerGuess);
}

void Game::printGameResult()
{
    cout<<"You guessed the right answer = "<<playerGuess<<" with "<<numOfGuesses<<" guesses"<<endl;
}

Game::~Game()
{
    cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;
}
