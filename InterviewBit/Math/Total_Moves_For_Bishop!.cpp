int Solution::solve(int i, int j) {
    return min(abs(8-i),abs(8-j))+min(abs(8-i),abs(1-j))+min(abs(1-i),abs(1-j))+min(abs(1-i),abs(8-j));
}
