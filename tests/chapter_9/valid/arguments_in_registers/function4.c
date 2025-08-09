
int a() {
    return 0;
}

int b(int b1)
{
    return a() + b1;
}

int c(int c1, int c2)
{
    return b(c1) + b(c2);
}

int d(int d1, int d2, int d3) {
    return c(d1, d2) + b(d3);
}

int e(int e1, int e2, int e3, int e4) {
    return d(e1, e2, e3) + b(e4);
}

int main(void) {
    int i = 1;
    return e(i, i, i, i);
}
