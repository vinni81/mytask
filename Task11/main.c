#include "temp_api.h"
#include <stdio.h>

int main()
{
    TemperatureData data[] =
    {
        {2021, 03, 01, 12, 30, 10},
        {2021, 03, 02, 02, 15, 15},
        {2021, 03, 03, 02, 45, 12},
        {2022, 04, 01, 12, 20, 20},
        {2022, 04, 02, 12, 40, 18},
        {2022, 04, 03, 12, 50, 22}
    };

    int numElements = sizeof(data) / sizeof(data[0]);

    printMonthlyStats(data, numElements, 2021, 3);
    printMonthlyStats(data, numElements, 2022, 4);
    printYearlyStats(data, numElements, 2022);

    return 0;
}
