#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
    int hour, minute, second;
    // Taking the current time from the user:
    printf("Enter Current Hour:");
    scanf("%d", &hour);
    printf("Enter Current minute:");
    scanf("%d", &minute);
    printf("Enter Current second:");
    scanf("%d", &second);
    while (1) {
        system("cls"); // Clearing the output screen
        printf("%02d : %02d : %02d", hour, minute, second);
        fflush(stdout); // Clearing the output buffer
        second++;
        if (second == 60) {
            minute++;
            second = 0;
        }
        if (minute == 60) {
            hour++;
            minute = 0;
        }
        if (hour == 24) {
            hour = 0;
            minute = 0;
            second = 0;
        }
        sleep(1); // wait til 1 second
    }
    return 0;
}