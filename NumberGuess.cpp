#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main(){
    cout << "\n\t\t\tWelcome to Guess The Number game!"
         << endl;
    cout << "You have to guess a number between 1 and 100. "
            "You'll have limited choices. Good Luck!"
         << endl;
    while (true) {
        // generating the secret number
        srand(time(0));
        int secretNumber = 1 + (rand() % 100);
        int playerChoice;
        int choicesLeft = 10;
        for (int i = 1; i <= 10; i++) {
        cout << "\n\nEnter the number: ";
        cin >> playerChoice;
        if (playerChoice == secretNumber) {
            cout << "Well played! You won, "
                         << playerChoice
                         << " is the secret number" << endl;
            cout << "\t\t\t Thanks for playing....";
            cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
            break;
        }
        else {
            cout << "Nope, " << playerChoice
                         << " is not the right number\n";
            if (playerChoice > secretNumber) {
                cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
            }
            else {
                cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
            }
            choicesLeft--;
            cout << choicesLeft << " choices left. "
                         << endl;
            if (choicesLeft == 0) {
                cout << "You couldn't find the "
                                "secret number, it was "
                             << secretNumber
                             << ", You lose!!\n\n";
                cout << "Play the game again to "
                                "win!!!\n\n";
                }
            }
        }
        int exit;
        cout<<"Enter 1 to exit & 0 to continue"<<endl<<endl;
        cin>>exit;

        if(exit == 1) break;
    }
}