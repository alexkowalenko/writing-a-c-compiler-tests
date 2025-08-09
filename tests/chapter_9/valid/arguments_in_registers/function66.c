
int g(int g1, int g2, int g3, int g4, int g5, int g6) {
    return g1+g2+g3+g4+g5+g6;
}

int main(void) {
    int i = 1;
    return g(i++, i++, i++, i++, i++, i);
}
