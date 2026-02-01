#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int targets[6] = {0, 20, 10, 10, 15, 15}; 
    string names[6] = {"", "Center", "Left", "Right", "Upper", "Lower"}; 

    int throws = 4;
    int rounds = 3;
    int totalToWin = 70;
    
cout << " ~~~ WELCOME TO THE THROWING GAME! ~~~  \n";

    string start;
    cout << "Type yes to start the game: ";
    cin >> start;


    string ruleChoice;
    cout << "\nSee How This Game Works? (yes) ";
    cin >> ruleChoice;
    if (ruleChoice == "yes") {
        cout << "\n ~~~~ GAME RULES ~~~~    \n";
        cout << "Choose targets 1 to 5 each throw.\n";
        cout << "Each target has different points.\n";
        cout << "Highest total score wins.\n";
        cout << "First to reach the winning points ends the game.\n";
    }

    int player1Score = 0, player2Score = 0;
    

    cout << "Targets: 1.Center = 20, 2.Left = 10, 3.Right = 10, 4.Upper = 15, 5.Lower = 15\n";
    cout << "First to reach " << totalToWin << " points wins!\n\n";

    for (int r = 1; r <= rounds; r++) {
        cout << "  Round -  " << r << "\n";

        int player1Round = 0, player2Round = 0;

// Player 1 throws: 
cout << "Player 1 throws:\n";
for (int i = 1; i <= throws; i++) {
    int choice;
    cout << "Throw " << i << "  choose target (1-5): ";
    cin >> choice;

    int points = targets[choice];          
    player1Round += points;                
    cout << names[choice] << " for " << points << " points\n";
}
cout << "Player 1 total this round: " << player1Round << "\n\n";

// Player 2 throws:
cout << "Player 2 throws:\n";
for (int i = 1; i <= throws; i++) {
    int choice;
    cout << "Throw " << i << " - choose target (1-5): ";
    cin >> choice;

    int points = targets[choice];
    player2Round += points;
    cout << names[choice] << " for " << points << " points\n";
}
cout << "Player 2 total this round: " << player2Round << "\n\n";


player1Score = player1Score + player1Round;
player2Score = player2Score + player2Round;
}


    cout << "Final scores:\n";
    cout << "Player 1: " << player1Score << "\n";
    cout << "Player 2: " << player2Score << "\n";

    if (player1Score > player2Score) {
        cout << "Player 1 wins!\n";
    } else if (player2Score > player1Score) {
        cout << "Player 2 wins!\n";
    } else {
        cout << "It's a tie!\n";
    }

    return 0; 
}
