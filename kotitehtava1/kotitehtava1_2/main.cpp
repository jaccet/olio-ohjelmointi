#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void game()
{
    srand(time(0));


    int randomNum = rand() % 21;
    int playerNum = 21;

    cout<<"Guess the random number between 0-20:"<<endl;

    do {
        cin>>playerNum;

        if (playerNum > 20) {
            cout<<"The given number was too high."<<endl;
        } else if (playerNum < randomNum) {
            cout<<"Higher"<<endl;
        } else if (playerNum > randomNum) {
            cout<<"Lower"<<endl;
        }
    } while (playerNum != randomNum);

    cout<<"Correct answer"<<endl;
}

int main()
{
    game();
    return 0;
}
