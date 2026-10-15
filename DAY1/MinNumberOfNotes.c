#include <stdio.h>

int main() {
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int bill, paid, change, count, total = 0;

    printf("Enter bill amount: ");
    scanf("%d", &bill);

    printf("Enter amount paid: ");
    scanf("%d", &paid);

    if (bill < 0 || paid < 0) {
        printf("Invalid amount!\n");
        return 0;
    }

    if (paid < bill) {
        printf("Insufficient amount paid!\n");
        return 0;
    }

    change = paid - bill;

    printf("Change to return = %d\n", change);
    printf("Notes required:\n");

    for (int i = 0; i < 9; i++) {
        count = change / notes[i];
        change = change % notes[i];

        if (count > 0) {
            printf("%d note(s) of %d\n", count, notes[i]);
            total += count;
        }
    }

    printf("Minimum number of notes = %d\n", total);

    return 0;
}