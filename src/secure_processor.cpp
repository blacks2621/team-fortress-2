#include <iostream>
#include <vector>

class LiteSession {
public:
    explicit LiteSession(int seed) : state_(seed) {}

    int build_controller(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 16) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    LiteSession obj(16);
    std::cout << obj.build_controller(16) << std::endl;
    return 0;
}
