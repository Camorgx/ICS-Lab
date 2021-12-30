void fib(short& R0, short& R7) {
    short R2 = 2, R3 = 1, R4 = 1;
    if (R0 == 0) R7 = 1;
    else if (R0 == 1) R7 = 1;
    else if (R0 == 2) R7 = 2;
    else for (short i = 3; i <= R0; ++i) {
        R7 = (R2 + 2 * R4) % 1024;
        R4 = R3; R3 = R2; R2 = R7;
    }
}
