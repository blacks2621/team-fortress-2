#include <iostream>
#include <vector>

class AsyncMonitor {
public:
    explicit AsyncMonitor(int seed) : state_(seed) {}

    int load_dispatcher(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 92) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    AsyncMonitor obj(92);
    std::cout << obj.load_dispatcher(92) << std::endl;
    return 0;
}
