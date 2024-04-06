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
        currentLoadSum += currentLoad;
        if(currentLoad == 0) {
            if (currentLoadSum > maxLoad)
                maxLoad = currentLoadSum;
            currentLoadSum = 0;
        }
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
        currentLoadSum += currentLoad;
        if(currentLoad == 0) {
            if (currentLoadSum > maxLoad[0]) {
                int temp1 = maxLoad[0];
                int temp2 = maxLoad[1];
                maxLoad[0] = currentLoadSum;
                maxLoad[1] = temp1;
                maxLoad[2] = temp2;
            } else {
                if (currentLoadSum > maxLoad[1]) {
                    int temp2 = maxLoad[1];
                    maxLoad[1] = currentLoadSum;
                    maxLoad[2] = temp2;
                } else {
                    if (currentLoadSum > maxLoad[2]) {
                        maxLoad[2] = currentLoadSum;
                    }
                }

            }
            currentLoadSum = 0;
        }
    }
    int result = 0;
    for (int i=0; i<3; i++) {
        result += maxLoad[i];
        printf("%d\n", maxLoad[i]);
    }
    printf("%d\n",result);
}
int main() {
    part2();
}