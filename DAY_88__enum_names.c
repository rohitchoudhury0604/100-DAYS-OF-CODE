//Print all enum names and integer values using a loop.
#include <stdio.h>
typedef enum {
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN,
    NUM_DAYS 
} Day;

const char *dayNames[] = {
    "MON",
    "TUE",
    "WED",
    "THU",
    "FRI",
    "SAT",
    "SUN"
};

int main() {
    printf("Enum Names and Integer Values:\n");

    for (Day d = MON; d < NUM_DAYS; d++) {
        printf("%s = %d\n", dayNames[d], d);
    }

    return 0;
}
