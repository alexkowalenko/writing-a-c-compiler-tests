

int f(int f1, int f2, int f3, int f4, int f5) {
    return f1+f2+f3+f4+ f5;
}

int main(void) {
    int i = 1;
    return f(i++, i++, i++, i++, i);
}
