
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

int main(void) {
    int i = 1;
    return d(i, i, i);
}
