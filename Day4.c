#include <stdio.h>
#include <time.h>

void part1() {
    int left[2];
    int right[2];
    int result = 0;
    while (scanf("%i-%i,%i-%i",left,left+1,right,right + 1) == 4) {

        if (left[0] <= right[0] && left[1] >= right[1]) {
            result++;
        } else if (right[0] <= left[0] && right[1] >= left[1]) {
            result++;
        }

    }
    printf("%i\n",result);
}


void part2() {
    int left[2];
    int right[2];
    int result = 0;
    while (scanf("%i-%i,%i-%i",left,left+1,right,right + 1) == 4) {

        if (left[0] <= right[0] && left[1] >= right[0]) {
            result++;
        } else if (right[0] <= left[0] && right[1] >= left[0]) {
            result++;
        }

    }
    printf("%i\n",result);

}

int main() {
    struct timespec begin, end;
    clock_gettime(CLOCK_REALTIME, &begin);


    part2();

    clock_gettime(CLOCK_REALTIME, &end);
    long seconds = end.tv_sec - begin.tv_sec;
    long nanoseconds = end.tv_nsec - begin.tv_nsec;
    double time = (double) seconds + (double) nanoseconds*1e-9;
    printf("%.5f\n",time);
}