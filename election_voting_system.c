#include<stdio.h>

int main()
{
    int votes[5];
    int total_votes = 0;
    int max_votes = 0;
    int winner_index = 0;
    float winning_percentage = 0.0;

    // Accept votes for 5 candidates
    for (int i = 0; i < 5; i++) {
        printf("Enter votes for candidate %d: ", i + 1);
        scanf("%d", &votes[i]);
    }
    // Calculate total votes and find the candidate winning candidate 
    max_votes = votes[0];
    winner_index = 0;

    for (int i =0; i < 5; i++) {
        total_votes += votes[i];

        if (votes[i] > max_votes) {
            max_votes = votes[i];
            winner_index = i;
        }
    }
    // Calculate winning percentage (handling division by zero check)
    if (total_votes > 0) {
        winning_percentage = ((float)max_votes / total_votes) * 100.0;
    }
    // Display Election Result Output matching the smaple formate
    printf("\n-----------ELECTION RESULT-----------\n");
    printf("Total Votes Cast: %d\n\n", total_votes);
    printf("Winner: Cancadidate %d\n\n", winner_index + 1);
    printf("votes Recived: %d\n\n", max_votes);
    printf("Winning Percentage: %2f%%\n\n", winning_percentage);
    printf("-------------------------------------\n");

    return 0;
 }