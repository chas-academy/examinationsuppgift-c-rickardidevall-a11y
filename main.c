//Write your code in this file
#include <stdio.h>
#include <ctype.h>

int main (){

    char names[5][11];
    int scores[5][13];
    double averages[5];

    for(int i = 0; i < 5; i++) {
        scanf("%10s", names[i]);
        for(int j = 0; j < 13; j++) {
            scanf("%d", &scores[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 13; j++) {
            sum += scores [i][j];
        }
        averages [i] = sum / 13.0;
    }

    int best_average = 0;
    for(int i = 1; i < 5; i++) {
        if (averages [i] > averages[best_average]) {
            best_average = i;
        }
    }

    double group_sum = 0;
    for(int i = 0; i < 5; i++) {
        group_sum += averages[i];
    }

    double group_average = group_sum / 5.0;

    for (int i = 0; i < 5; i++) {
        names[i][0] = toupper(names[i][0]);   
    }

    printf("%s\n", names[best_average]);

    for(int i = 0; i < 5; i++) {
        if (averages[i] < group_average) {
            printf("%s\n", names[i]);

        }
    }

    return 0;

}