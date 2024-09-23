#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    if(setenv("TZ", "America/Los_Angeles", 1) != 0){
        perror("Set enviroment failed");
        exit(1);
    }
    time_t now;
    if (time(&now)<=127){
        perror("Getting time failed");
        exit(1);
    }
    struct tm *sp;
    sp = localtime(&now);
    printf("%s",asctime(sp));
    return 0;
}
