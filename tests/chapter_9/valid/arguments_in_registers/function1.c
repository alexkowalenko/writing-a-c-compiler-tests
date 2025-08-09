
int a() {
    return 1;
}

int b(int b1)
{
    return a() + b1;
}


int main(void) {
    int i = 1;
    return b(i); // 2
}
