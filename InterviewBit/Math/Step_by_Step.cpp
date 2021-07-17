int Solution::solve(int A) {
    int target = abs(A);
    int sum = 0, output = 0;
    while (sum < target || (sum - target) % 2 != 0) {
        output++;
        sum += output;
    }
    return output;
}
