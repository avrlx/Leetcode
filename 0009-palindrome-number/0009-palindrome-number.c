bool isPalindrome(int x) {
    if (0 > x) {
        return false;
    }
    int r = 0;
    long sum = 0;
    int temp = x;
    while (temp != 0) {
        r = temp % 10;
        sum = (sum * 10) + r;
        temp = temp / 10;
    }

    if (sum == x) {
        return true;
    }
    return false;
}