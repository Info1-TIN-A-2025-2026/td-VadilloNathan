#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned long max_length(const char *signal, const unsigned long num_samples, const unsigned char state);
unsigned long count_rising_edge(const char *signal, const unsigned long num_samples);
unsigned long max_length_high(const char *signal, const unsigned long num_samples);
unsigned long max_length_low(const char *signal, const unsigned long num_samples);
void rle(const char *signal, const unsigned long num_samples);


int main(int argc, char *argv[]) {
    int test_case=atoi(argv[1]);
    char *signal=NULL;
    char test_signal_101[]="0000000";
    char test_signal_102[]="1111111";
    char test_signal_103[]="0001111";
    char test_signal_104[]="1111000";
    char test_signal_105[]="0011100";
    char test_signal_106[]="1100011";
    char test_signal_107[]="001110000001100";
    char test_signal_108[]="11111111000000";
    char test_signal_109[]="0101010101010101";
    unsigned long num_samples=0;
    switch(test_case) {
        case 101:
            signal=test_signal_101;
            break;
        case 102:
            signal=test_signal_102;
            break;
        case 103:
            signal=test_signal_103;
            break;
        case 104:
            signal=test_signal_104;
            break;
        case 105:
            signal=test_signal_105;
            break;
        case 106:
            signal=test_signal_106;
            break;
        case 107:
            signal=test_signal_107;
            break;
        case 108:
            signal=test_signal_108;
            break;
        case 109:
            signal=test_signal_109;
            break;
        default:
            srand(test_case);
            num_samples=rand()%100;
            char *random_signal = (char *)malloc(1+num_samples*sizeof(char));
            unsigned long k=0;
            for(k=0;k<num_samples;k++) {
                random_signal[k]='0'+((rand()%500)>250);
            }
            random_signal[k]=0;
            signal=random_signal;
            break;
    }

    num_samples=strlen(signal);
    for(unsigned long k=0;k<num_samples;k++) {
        signal[k] -= '0';
    }
    printf("Signal: ");
    for(unsigned long k=0;k<num_samples;k++) {
        putchar(signal[k]+'0');
    }
    puts("");
    printf("num_samples: %lu\n", num_samples);

    printf("high: %lu\n", max_length_high(signal, num_samples));
    printf("low: %lu\n", max_length_low(signal, num_samples));
    printf("edges: %lu\n", count_rising_edge(signal, num_samples));
    rle(signal, num_samples);
}