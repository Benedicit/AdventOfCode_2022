#include <stdio.h>
#include <stdlib.h>


void part1() {

    int currentLoad;
    int maxLoad = 0;
    int bufferLength = 255;
    char buffer[bufferLength];
    int currentLoadSum = 0;

    while(fgets(buffer, bufferLength, stdin)) {
        currentLoad = strtol(buffer,NULL,10);
        if(currentLoad == 0) {
            if (currentLoadSum > maxLoad)
                maxLoad = currentLoadSum;
            currentLoadSum = 0;
        }
        currentLoadSum += currentLoad;
    }
    printf("%i \n",maxLoad);

}

void part2() {
    int currentLoad;
    int maxLoad[] = {0,0,0};
    int bufferLength = 255;
    char buffer[bufferLength];
    int currentLoadSum = 0;

    while(fgets(buffer, bufferLength, stdin)) {
        currentLoad = strtol(buffer,NULL,10);
        if(currentLoad == 0) {
            if (currentLoadSum > maxLoad[0]) {
                int temp = maxLoad[0];
                int temp2 = maxLoad[1];
                maxLoad[0] = currentLoadSum;
                maxLoad[1] = temp;
                maxLoad[2] = temp2;
            }
            currentLoadSum = 0;

        }
        currentLoadSum += currentLoad;
    }
    int result = 0;
    for (int i=0; i<3; i++)
        result += maxLoad[i];
    printf("%i \n",maxLoad[0]);
}
int main() {
    part1();
    part2();
}