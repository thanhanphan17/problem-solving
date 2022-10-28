/*
    Author: @thanhanphan17
    Github: https://github.com/thanhanphan17
*/

#include <time.h>

#include <chrono>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

#define cout std::cout
#define cerr std::cerr
#define cin std::cin

const char* INP_PATH = "../../data/input.txt";
const char* OUT_PATH = "../../data/output.txt";

template <class T>
std::ostream& operator<<(std::ostream& out, const std::vector<T>& a);

template <typename T, size_t arrSize,
          typename = std::enable_if_t<!std::is_same<T, char>::value>>
std::ostream& operator<<(std::ostream& out, const T (&arr)[arrSize]);

void calcTime(void (*func)());
void fileIO();

void solve() {
    int test = 0;
    while (test--) {
        cout << "Answer";
    }
}

int main() {
    solve();
    return 0;
}

template <class T>
std::ostream& operator<<(std::ostream& out, const std::vector<T>& a) {
    for (auto x : a) {
        out << x << " ";
    }
    return out;
}

template <typename T, size_t arrSize,
          typename = std::enable_if_t<!std::is_same<T, char>::value>>
std::ostream& operator<<(std::ostream& out, const T (&arr)[arrSize]) {
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; ++i) {
        out << arr[i] << " ";
    }
    out << "\n";

    return out;
}

void fileIO() {
    freopen(INP_PATH, "r", stdin);
    freopen(OUT_PATH, "w+", stdout);
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void calcTime(void (*func)()) {
    auto start = std::chrono::high_resolution_clock::now();
    func();
    auto stop = std::chrono::high_resolution_clock::now();

    auto duration =
        std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);

    cerr << duration.count();
}
