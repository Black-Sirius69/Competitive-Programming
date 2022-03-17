// time-limit: 50000
// problem-url: https://codingcompetitions.withgoogle.com/kickstart/round/00000000008f4332/0000000000941e56

#include <bits/stdc++.h>

int main() {
    int test_cases;
    std::cin >> test_cases;

    for (int i = 0; i < test_cases; i++) {
        int n;
        std::cin >> n;
        std::vector<int> papers(n);
        for (int j = 0; j < n; j++) {
            int temp;
            std::cin >> temp;
            papers.push_back(temp);
        }
        std::cout << papers.size() << std::endl;
        for (int k = 0; k < papers.size(); k++){
            std::cout << papers[k] << std::endl;
        }

    }

    return 0;
}
