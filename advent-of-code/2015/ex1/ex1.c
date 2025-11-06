// First exercise of the advent code of 2015
// https://adventofcode.com/2015/day/1

#include <stdio.h>
#include <stdlib.h>

int main() {
    int floor = 0;
    char c;

    // Part one
    int partOne(){
         FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    while((c = fgetc(file)) != EOF) {
        if(c == '(') {
            floor++;
        } else if(c == ')') {
            floor--;
        }
    }
  
    printf("Final floor: %d\n", floor);
    fclose(file);
    }

    int partTwo(){
        FILE *file = fopen("input.txt", "r");
        int position_that_enters_basement = 0;
        if (file == NULL) {
            perror("Error opening file");
            return 1;
        }

        for (int i = 0; (c = fgetc(file)) != EOF; i++) {
            if(c == '(') {
                floor++;
            } else if(c == ')') {
                floor--;
                if (floor == -1 && position_that_enters_basement == 0) {
                    position_that_enters_basement = i + 1;
                }
            }
        }
        fclose(file);
        printf("Position that enters basement: %d\n", position_that_enters_basement);
        printf("Final floor: %d\n", floor);
    }
    partTwo();            
    return 0;
}