#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
 
int main() {     char userChoice;     char computerChoice; 
    int result;     int wins = 0;     int losses = 0;     int ties = 0;     char playAgain = 'y'; 
 
    srand(time(NULL)); 
 
    while (playAgain == 'y') { 
        printf("Enter your choice (r = rock, p = paper, s = scissors): ");         scanf(" %c", &userChoice); 
 
        // Generate a random number between 1 and 3 to simulate the computer's choice 
        int computerNum = rand() % 3 + 1; 
 
        if (computerNum == 1) {             computerChoice = 'r';         } else if (computerNum == 2) {             computerChoice = 'p'; 
        } else { 
            computerChoice = 's'; 
        } 
 
        if (userChoice == computerChoice) {             result = 0;             ties++; 
        } else if (userChoice == 'r' && computerChoice == 's') {             result = 1;             wins++; 
        } else if (userChoice == 'p' && computerChoice == 'r') {             result = 1;             wins++; 
        } else if (userChoice == 's' && computerChoice == 'p') {             result = 1;             wins++; 
        } else {             result = -1;             losses++; 
        } 
 
        if (result == 0) {             printf("Tie!\n");         } else if (result == 1) {             printf("You win!\n"); 
        } else {             printf("You lose!\n"); 
        } 
 
        printf("Wins: %d\n", wins);         printf("Losses: %d\n", losses);         printf("Ties: %d\n", ties); 
 
        printf("Do you want to play again? (y/n): ");         scanf(" %c", &playAgain); 
    } 
 
    return 0; 
}