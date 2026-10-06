#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

bool canFit(const vector<long long>& L, int N, long long M, long long W) {
    long long lines = 1;
    long long current_width = 0;

    for (int i = 0; i < N; i++) {
        if (current_width == 0) {
            current_width = L[i];
        } else if (current_width + 1 + L[i] <= W) {
            current_width += 1 + L[i];
        } else {
            lines++;
            current_width = L[i];
        }
    }

    return lines <= M;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    long long M;
    if (!(cin >> N >> M)) return 0;

    vector<long long> L(N);
    long long max_len = 0;
    long long total_len = 0;

    for (int i = 0; i < N; i++) {
        cin >> L[i];
        max_len = max(max_len, L[i]);
        total_len += L[i];
    }

    long long low = max_len;
    long long high = total_len + (N - 1);
    long long ans = high;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (canFit(L, N, M, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << "\n";

    return 0;
}