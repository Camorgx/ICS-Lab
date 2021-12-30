void func(short& R0, short& R1) {
    ++R0; --R1;
    if(R1) func(R0, R1);
}
void rec(short& R0, short& R1, short R2, short& R7) {
    R2 = 0x300f;
    R1 = 5; R7 = 0x3003;
    func(R0, R1); return;
}