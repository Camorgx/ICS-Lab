void add(short& R0, short& R1, short& R7) {
    short R2 = 1, R3 = 1 + R1;
    if (R3 > 0) R7 += R0;
    do {
        R0 <<= 1;
        if (R0 == 0) break;
        R2 <<= 1;
        R3 = R2 + R1;
        if (R3 == 0) continue;
        R7 += R0;
    } while (true);
}