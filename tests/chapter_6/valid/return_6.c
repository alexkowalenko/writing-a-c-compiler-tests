int main(void) {
    int x = 5;
    int y = 10;
    int z = 15;

    if (x < y) 
      if (y < z)
        return 4; // This will exit the function

    // This line will not be executed if the return statement is reached
    x = y + z;
}
