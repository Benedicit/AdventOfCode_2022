#include <stdio.h>
#include <stdlib.h>


void part1() {
    char you;
    char opponent;
    int result = 0;
    int bufferLength = 255;
    char line[bufferLength];
    //printf("%i\n", scanf("%s",line));

    while (fgets(line, bufferLength, stdin)) {

        you = line[2];
        opponent = line[0];
       // printf("%c,%c\n",opponent,you);
        switch (you) {
            case 'X':
                result += 1;
                switch (opponent) {
                    case 'A':
                        result += 3;
                        break;
                    case 'B':
                        break;
                    case 'C': result += 6;
                        break;
                }
                break;
            case 'Y':
                result += 2;
                switch (opponent) {
                    case 'A':
                        result += 6;
                        break;
                    case 'B':
                        result += 3;
                        break;
                    case 'C':
                        break;
                }
                break;
            case 'Z':
                result += 3;
                switch (opponent) {
                    case 'A':
                        break;
                    case 'B':
                        result += 6;
                        break;
                    case 'C': result += 3;
                        break;
                }
                break;
            default:
                result += 10000;
        }

    }
    printf("%i\n",result);
}

void part2() {

    char you;
    char opponent;
    int result = 0;
    int bufferLength = 255;
    char line[bufferLength];
    //printf("%i\n", scanf("%s",line));

    while (fgets(line, bufferLength, stdin)) {

        you = line[2];
        opponent = line[0];
        // printf("%c,%c\n",opponent,you);
        switch (opponent) {
            case 'A':
                switch (you) {
                    case 'X':
                        result += 3;
                        break;
                    case 'Y':
                        result += 4;
                        break;
                    case 'Z': result += 8;
                        break;
                }
                break;
            case 'B':
                switch (you) {
                    case 'X':
                        result += 1;
                        break;
                    case 'Y':
                        result += 5;
                        break;
                    case 'Z':
                        result += 9;
                        break;
                }
                break;
            case 'C':
                switch (you) {
                    case 'X':
                        result += 2;
                        break;
                    case 'Y':
                        result += 6;
                        break;
                    case 'Z':
                        result += 7;
                        break;
                }
                break;
            default:
                result += 10000;
        }

    }
    printf("%i\n",result);
}

int main() {
    part2();
}