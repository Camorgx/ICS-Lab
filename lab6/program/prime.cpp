short square(short i) {
    short R5 = 0;
    for (short j = 0; j < i; ++j) R5 += i;
    return R5;
}

short mod(short R0, short i) {
    short R3 = 0;
    i = ~i +1;
    while (R0 + i > 0) R0 += i;
    if (R0 + i == 0) return 0;
    else return R0;
}

short judge(short R0) {
    short i = 2, R1 = 1, R4 = ~R0 + 1;
    while (square(i) + R4 <= 0) {
        if (mod(R0, i) == 0) return 0;
        ++i;
    }
    return 1;
}