#include <stdio.h>
int main () {
    int total_sound, k;
    int timelist[1000000];

    scanf("%d %d", &total_sound, &k);
    for(int i = 0; i < total_sound; i++) {
        scanf("%d", &timelist[i]);
    }

    int totalsum = 0;
    int previousclap = 0;

    for(int i=0; i<total_sound; i++) {
        if(i==0) {
            totalsum++;
            previousclap = timelist[i] + k;
        } else {
            if(previousclap>=timelist[i] && previousclap<=timelist[i]+k) {
                continue;
            } else {
                totalsum++;
                previousclap = timelist[i] + k;
            }
        }
    }

    printf("%d", totalsum);

    return 0;
}