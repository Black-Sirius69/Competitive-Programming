// time-limit: 40000
// problem-url: https://codingcompetitions.withgoogle.com/kickstart/round/00000000008f4332/0000000000942404
#include <bits/stdc++.h>

int main() {
    int test_cases;
    std::cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        int n, m;
        std::cin >> n >> m;
        int total = 0;
        for (int j = 0; j < n; j++) {
            int temp;
            std::cin >> temp;
            total += temp;
        }

        std::cout << "Case #" << i+1 << ": " << total % m << std::endl;

    }
    return 0;
}
