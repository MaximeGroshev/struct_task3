#include <stdio.h>
struct TicTac
{
    int hour;
    int min;
};

void back(struct TicTac*, struct TicTac);

int main()
{
    struct TicTac current_time = {11, 58};
    struct TicTac add = {0, 0};
    scanf("%d %d", &add.hour, &add.min);

    back(&current_time, add);
    printf("%02d:%02d", current_time.hour, current_time.min);
    return 0;
}

void back(struct TicTac *current_time, struct TicTac add)
{
    (*current_time).hour = (*current_time).hour - add.hour;
    (*current_time).min = (*current_time).min - add.min;
    while((*current_time).min < 0)
    {
        (*current_time).hour--;
        (*current_time).min = (*current_time).min + 60;
    }

    if((*current_time).hour < 0)
    {
        (*current_time).hour = (*current_time).hour + 12;
    }
}
