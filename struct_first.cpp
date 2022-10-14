#include <stdio.h>
struct TicTac
{
    int hour;
    int min;
};
struct TicTac after(struct TicTac, int min);

int main()
{
    int min = 0;
    struct TicTac current_time = {11, 58};
    scanf("%d", &min);
    struct TicTac time_after = after(current_time, min);
    printf("%02d:%02d", time_after.hour, time_after.min);
    return 0;
}

struct TicTac after(struct TicTac current_time, int min)
{
    struct TicTac res = {current_time.hour, current_time.min};
    res.min = res.min + min;
    while(res.min >= 60)
    {
        res.hour++;
        res.min = res.min - 60;
    }

    if(res.hour >= 12)
    {
        res.hour = res.hour - 12;
    }

    return res;
}
