#include <stdio.h>
struct TicTac
{
    int hour;
    int min;
};

int is_equal(struct TicTac, struct TicTac);

int main()
{
    struct TicTac current_time = {11, 58};
    struct TicTac add = {0, 0};
    scanf("%d %d", &add.hour, &add.min);

    int res = is_equal(current_time, add);
    printf("%d", res);
    return 0;
}

int is_equal(struct TicTac current_time, struct TicTac add)
{
    if(current_time.hour == add.hour && current_time.min == add.min)
    {
        return 1;
    }

    return 0;
}
