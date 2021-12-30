short divide(short& R1) {
    short R2 = 1, R3 = 8, R4 = 0;
    do {
        if ((R3 & R1) != 0) R4 += R2;
        R2 <<= 1;
        R3 <<= 1;
    } while (R3 != 0);
    return R4;
}

void mod(short& R1) {
    short R0, R2, R4;
    do {
        R4 = divide(R1);
        R2 = R1 & 7;
        R1 = R2 + R4;
    } while (R1 - 7 > 0);
    if (R1 - 7 >= 0) R1 -= 7;
}