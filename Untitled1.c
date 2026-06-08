#include <stdio.h>

int main() {
    float m1, m2, m3;
    float total, average;
    char grade;

    printf("Enter marks of Mathematics: ");
    scanf("%f",&m1);

    printf("Enter marks of Science:");
    scanf("%f",&m2);

    printf("Enter marks of English:");
    scanf("%f",&m3);

    total = m1 + m2 + m3;
    average = total / 3.0;

    // Grade calculation based on average
    if (average >= 80 && average <= 100)
        grade = 'A';
    else if (average >= 70)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else if (average >= 50)
        grade = 'D';
    else
        grade = 'F';

    // Pass/Fail rule (IMPORTANT: any subject < 40 = FAIL)
    int result = 1; // assume PASS

    if (m1 < 40 || m2 < 40 || m3 < 40)
        result = 0;

    // Output
    printf("\nTotal: %.2f", total);
    printf("\nAverage: %.2f", average);
    printf("\nGrade: %c", grade);

    if (result == 1)
        printf("\nResult: PASS");
    else
        printf("\nResult: FAIL");

    return 0;
}
