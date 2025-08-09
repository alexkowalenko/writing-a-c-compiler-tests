
int a() {
    return 1;
}

int b(int b1)
{
    return a() + b1;
}

int c(int c1, int c2)
{
    return b(c1) + b(c2);
}

int main(void) {
    int i = 1;
    return c(i, i);
}
