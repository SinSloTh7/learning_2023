int findGreatest(int num1, int num2, int num3) {
    int greatest = num1;

    if (num2 > greatest)
        greatest = num2;

    if (num3 > greatest)
        greatest = num3;

    return greatest;
}
int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int greatest = findGreatest(num1, num2, num3);

    printf("The greatest number is: %d\n", greatest);

    return 0;
}
