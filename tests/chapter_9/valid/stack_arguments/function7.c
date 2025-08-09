
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

int f(int f1, int f2, int f3, int f4, int f5) {
    return e(f1,f2,f3,f4) - b(f5);
}

int g(int g1, int g2, int g3, int g4, int g5, int g6) {
    return f(g1,g2,g3,g4,g5) - b(g6);
}

int h(int h1, int h2, int h3, int h4, int h5, int h6, int h7) {
    return g(h1,h2,h3,h4,h5,h6) - b(h7);
}

int main(void) {
    int i = 1;
    return h(i, i, i, i, i, i, i);
}
