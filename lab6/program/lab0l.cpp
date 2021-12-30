void add(unsigned short& R0, unsigned short& R1, unsigned short& R7) {
    do {
        R7 += R0;
        --R1;
    } while (R1 != 0);
}