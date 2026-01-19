#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned long max_length_high(const char *signal, const unsigned long num_samples) {

    int counter = 0;
    int counterfin = 0;

    for(int i = 0; i < num_samples; i++)
    {   
        if(signal[i] == 0 && counter > counterfin)
        {
            counterfin = counter;
            counter = 0;
        }
        else if(signal[i] == 1)
        {
            counter++;
        }
        else
        {
            counter = 0;
        }
    }
    if(counter > counterfin)
    {
        counterfin = counter;
    }
    return counterfin;
}

unsigned long max_length_low(const char *signal, const unsigned long num_samples) {

    int counter = 0;
    int counterfin = 0;

    for(int i = 0; i < num_samples; i++)
    {   
        if(signal[i] == 1 && counter > counterfin)
        {
            counterfin = counter;
            counter = 0;
        }
        else if(signal[i] == 0)
        {
            counter++;
        }
        else
        {
            counter = 0;
        }
    }
    if(counter > counterfin)
    {
        counterfin = counter;
    }
    return counterfin;
}

unsigned long count_rising_edge(const char *signal, const unsigned long num_samples) {

    int counter = 0;

    for(int i = 0; i < num_samples; i++)
    {   
        if(i == 0 && signal[i] == 1)
        {
            counter++;
        }
        else if(signal[i] == 1 && signal[i-1] == 0)
        {
            counter++;
        }
    }
    return counter;
}

void rle(const char *signal, const unsigned long num_samples) {

    printf("rle: %d",signal[0]);
    int counter1 = 1;
    int counter2 = 1;

    for(int i = 1; i < num_samples; i++)
    {
        if(signal[i] == signal[i-1])
        {
            counter1++;
        }
        else
        {
            printf(",%d",counter1);
            counter2++;
            counter1 = 1;
            
        }
    }
    printf(",%d\n",counter1);
    counter2++;
    
    printf("num symbols in rle: %d\n",counter2);
    printf("compression rate: x%.1lf\n",(double)num_samples/counter2);
}
