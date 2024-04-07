#ifndef TEMP_API_H
#define TEMP_API_H

typedef struct {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int temperature;
} TemperatureData;

void printMonthlyStats(const TemperatureData* data, int size, int year, int month);
void printYearlyStats(const TemperatureData* data, int size, int year);

#endif