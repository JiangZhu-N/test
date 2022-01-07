#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
// 10.1
#define MONTHS 12
#define YEARS 5
void f1(void)
{
    const float rain[YEARS][MONTHS] =
        {
            {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
            {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
            {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
            {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
            {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}};
    int year, month;
    float subtot, total;
    for (year = 0, total = 0; year < YEARS; year++)
    {
        for (month = 0, subtot = 0; month < MONTHS; month++)
            subtot += *(*(rain + year) + month);
        printf("%5d %15.1f\n", 2010 + year, subtot);
        total += subtot;
    }
    for (month = 0; month < MONTHS; month++)
    {
        for (year = 0, subtot = 0; year < YEARS; year++)
            subtot += *(*(rain + year) + month);
        printf("%4.1f", subtot / YEARS);
    }

    printf("\n");

    return;
}
//10.2
void copy1(double target[], double source[], int num)
{
    for (size_t i = 0; i < num; i++)
    {
        target[i] = source[i];
    }

    return;
}
void copy2(double *target, double *source, int num)
{
    for (size_t i = 0; i < num; i++)
    {
        *(target + i) = *(source + i);
    }
    return;
}
void copy3(double *target, double *source_begin, double *source_end)
{
    for (double *i = source_begin; i < source_end; i++)
    {
        *target++ = *i;
    }
    return;
}
// 10.3
int max(int arr[], int num)
{
    int tmp = arr[0];
    for (size_t i = 0; i < num; i++)
    {
        if (tmp < arr[i])
        {
            tmp = arr[i];
        }
    }

    return tmp;
}
void f2(void)
{
    int arr[10] = {10, 23, 55, 2, 12, 5, 23, 333, 5, 100};
    int result = max_element(arr, 10);

    printf(" %d.\n", result);

    return;
}

// 10.4
int max2(double arr[], int num)
{
    double tmp = arr[0];
    int subscript = 0;
    for (size_t i = 0; i < num; i++)
    {
        if (tmp < arr[i])
        {
            tmp = arr[i];
            subscript = i;
        }
    }

    return subscript;
}
void f3(void)
{
    double arr[10] = {1.23, 202.22, 39.03, 292.11, 3939.22, 30.2, 333.33, 938.2, 391.1, 2.2};
    int result = 0;

    result = max_element_subscript(arr, 10);

    printf(" %d\n", result);

    return;
}

// 10.5
double f4(double arr[], int num)
{
    double max = arr[0];
    double min = arr[0];

    for (size_t i = 0; i < num; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }

        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    return (max - min);
}
void f5(void)
{
    double arr[10] = {1.23, 202.22, 39.03, 292.11, 3939.22, 30.2, 333.33, 938.2, 391.1, 2.2};
    double result = 0.0;

    printf(" %.2lf\n", diff_max_min(arr, 10));

    return;
}

// 10.10
void f6(int target[], int source1[], int source2[], int length)
{
    for (size_t i = 0; i < length; i++)
    {
        target[i] = source1[i] + source2[i];
    }

    return;
}
void f7(void)
{
    int source1[4] = {2, 4, 5, 8};
    int source2[4] = {1, 0, 4, 6};
    int target[4];

    arr_add(target, source1, source2, 4);

    for (size_t i = 0; i < 4; i++)
    {
        printf("%d ", source1[i]);
    }
    printf("\n");

    for (size_t i = 0; i < 4; i++)
    {
        printf("%d ", source2[i]);
    }
    printf("\n");

    for (size_t i = 0; i < 4; i++)
    {
        printf("%d ", target[i]);
    }
    printf("\n");
}

// 10.11
void f8(int arr[][5], int rows)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            arr[i][j] = arr[i][j] * 2;
        }
    }

    return;
}
void f9(int arr[][5], int rows)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return;
}
