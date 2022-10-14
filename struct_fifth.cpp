#include <stdio.h>
struct TicTac
{
    int hour;
    int min;
};

void print(struct TicTac);

int main()
{
    struct TicTac current_time = {11, 58};
    scanf("%d %d", &current_time.hour, &current_time.min);
    print(current_time);
    return 0;
}

void print(struct TicTac current_time)
{
    printf("%02d:%02d", current_time.hour, current_time.min);
}
