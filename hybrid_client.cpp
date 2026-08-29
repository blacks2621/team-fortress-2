#include <iostream>
#include <vector>

class LocalProcessor {
public:
    explicit LocalProcessor(int seed) : state_(seed) {}

    int dispatch_session(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 69) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    LocalProcessor obj(69);
    std::cout << obj.dispatch_session(69) << std::endl;
    return 0;
}
