#include <stdio.h>

typedef union {
    float temperature;
    char door;
    long pulses;
} Value;

typedef struct {
    int sensor_id;
    char kind;
    Value value;
} Reading;

// Structure with all fields active at once
typedef struct {
    float temperature;
    char door;
    long pulses;
} FullValue;

int main() {
    int n;

    scanf("%d", &n);

    if (n <= 0 || n > 1000) {
        printf("INVALID COUNT");
        return 0;
    }

    Reading r[1000];

    for (int i = 0; i < n; i++) {
        scanf("%d %c", &r[i].sensor_id, &r[i].kind);

        switch (r[i].kind) {
            case 'T':
                scanf("%f", &r[i].value.temperature);
                break;

            case 'D':
                scanf(" %c", &r[i].value.door);
                break;

            case 'P':
                scanf("%ld", &r[i].value.pulses);
                break;

            default:
                printf("INVALID KIND");
                return 0;
        }
    }

    printf("SENSOR READING REPORT\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", r[i].sensor_id);

        switch (r[i].kind) {
            case 'T':
                printf("%.2f C\n", r[i].value.temperature);
                break;

            case 'D':
                if (r[i].value.door == 'O')
                    printf("OPEN\n");
                else
                    printf("CLOSED\n");
                break;

            case 'P':
                printf("%ld\n", r[i].value.pulses);
                break;
        }
    }

    printf("Size of union Value: %zu\n", sizeof(Value));
    printf("Size of Reading: %zu\n", sizeof(Reading));
    printf("Size with all fields active: %zu\n", sizeof(FullValue));

    printf("Memory saved: %zu\n",
           sizeof(FullValue) - sizeof(Value));

    return 0;
}