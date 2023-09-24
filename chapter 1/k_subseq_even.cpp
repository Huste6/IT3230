#include <iostream>
#include <vector>

int main() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> sequence(n);
    for (int i = 0; i < n; i++) {
        std::cin >> sequence[i];
    }

    int q = 0;
    int sum = 0;
    std::vector<int> prefixSum(n+1, 0);
    //   2 3 4  5  6  8 
    // 0 2 5 9 14 20 28
    
    for (int i = 0; i < n; i++) {
        sum += sequence[i];
        prefixSum[i+1] = sum;
    }
    
    for (int i = 0; i < n-k+1; i++) {
        if ((prefixSum[i+k] - prefixSum[i]) % 2 == 0) {
            q++;
        }
    }

    std::cout << q << std::endl;

    return 0;
}
