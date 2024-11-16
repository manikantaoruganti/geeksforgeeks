void swap(int &a, int &b) {
    // Create a temporary variable to hold the value of 'a'
    int temp = a;

    // Assign the value of 'b' to 'a'
    a = b;

    // Assign the value of the temporary variable (which was 'a') to 'b'
    b = temp;
}

