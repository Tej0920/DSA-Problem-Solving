int Solution::solve(vector<vector<int> > &A, int B) {
    int n = A.size();
    int m = A[0].size();

    vector<vector<int>> vec(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        vec[i][j] = vec[i - 1][j] + vec[i][j - 1] - vec[i - 1][j - 1] + A[i - 1][j - 1];
      }
    }


    int output = INT_MIN;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        if (i - B >= 0 and j - B >= 0) {
          int temp = vec[i][j] - vec[i][j - B] - vec[i - B][j] + vec[i - B][j - B];
          output = max(ans, temp);
        }
      }
    }
    return output;
}
