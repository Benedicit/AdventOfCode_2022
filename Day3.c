#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int getStringLength(const char *s, int maxLength) {
    int length = 0;
    for (int i = 0; i < maxLength; ++i) {
        if (*(s + i) == '\0')
            break;
        length++;
    }
    return length;
}
void part1() {
    char line[64];
    int result = 0;
    while (scanf("%s",line) == 1) {

        int halfLength = getStringLength(line,64) / 2;
        char *rightHalf = &line[halfLength];
        char currentChar;
        for (int i = 0; i < halfLength; ++i) {
            currentChar = line[i];
            short found = 0;
            for (int j = 0; j < halfLength; ++j) {
               char test = *(rightHalf + j);
               if(currentChar == test) {
                   found = 1;
                   break;
               }
            }
            if (found)
                break;
        }
        int priority = (int) currentChar;
        if(priority > 95) {
            priority -= 96;
        } else {
            priority -= 38;
        }
        result += priority;
    }
    printf("%i\n",result);

}

void part2() {


}

int main() {
    struct timespec begin, end;
    clock_gettime(CLOCK_REALTIME, &begin);


    part1();

    clock_gettime(CLOCK_REALTIME, &end);
    long seconds = end.tv_sec - begin.tv_sec;
    long nanoseconds = end.tv_nsec - begin.tv_nsec;
    double time = (double) seconds + (double) nanoseconds*1e-9;
    printf("%.5f\n",time);
}