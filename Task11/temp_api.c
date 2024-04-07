#include "temp_api.h"
#include <stdio.h>

void printMonthlyStats(const TemperatureData* data, int size, int year, int month) {
    int count = 0;
    int sum = 0;
    int minTemp = 99;
    int maxTemp = -99;

    for (int i = 0; i < size; i++) {
        if (data[i].year == year && data[i].month == month) {
            count++;
            sum += data[i].temperature;

            if (data[i].temperature < minTemp) {
                minTemp = data[i].temperature;
            }

            if (data[i].temperature > maxTemp) {
                maxTemp = data[i].temperature;
            }
        }
    }

    if (count > 0) {
        float avgTemp = (float)sum / count;

        printf("Monthly statistics for month %02d/%d:\n", month, year);
        printf("Average temperature: %.2f\n", avgTemp);
        printf("Minimum temperature: %d\n", minTemp);
        printf("Maximum temperature: %d\n", maxTemp);
    } else {
        printf("No data available for month %02d/%d\n", month, year);
    }
}

void printYearlyStats(const TemperatureData* data, int size, int year) {
    int count = 0;
    int sum = 0;
    int minTemp = 99;
    int maxTemp = -99;

    for (int i = 0; i < size; i++) {
        if (data[i].year == year) {
            count++;
            sum += data[i].temperature;

            if (data[i].temperature < minTemp) {
                minTemp = data[i].temperature;
            }

            if (data[i].temperature > maxTemp) {
                maxTemp = data[i].temperature;
            }
        }
    }

    if (count > 0) {
        float avgTemp = (float)sum / count;

        printf("Yearly statistics for year %d:\n", year);
        printf("Average temperature: %.2f\n", avgTemp);
        printf("Minimum temperature: %d\n", minTemp);
        printf("Maximum temperature: %d\n", maxTemp);
    } else {
        printf("No data available for year %d\n", year);
    }
}