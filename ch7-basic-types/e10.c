/**
 * In the SCRABBLE Crossword Game, players form words using small tiles,
 * each containing a letter and a face value. The face value varies from
 * one letter to another, based on the letter's rarity. Here are the face
 * values:
 * 1: AEILNORSTU
 * 2: DG
 * 3: BCMP
 * 4: FHVWY
 * 5: K
 * 8: JX
 * 10: QZ
 * Write a program that computes the value of a word by summing the values
 * */

#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    int score = 0;

    printf("Enter a word: ");

    while((c = toupper(getchar())) != '\n') {
        switch (c) {
            case 'A': case 'E': case 'I': case 'L':
            case 'N': case 'O': case 'R': case 'S':
            case 'T': case 'U':
                score += 1;
                break;
            case 'D': case 'G':
                score += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                score += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                score += 4;
                break;
            case 'K':
                score += 5;
                break;
            case 'J': case 'X':
                score += 8;
                break;
            case 'Q': case 'Z':
                score += 10;
                break;
        }
    }

    printf("Scrabble value: %d\n", score);

    return 0;
}
