#include <iostream>
#include <vector>

class BatchRouter {
public:
    explicit BatchRouter(int seed) : state_(seed) {}

    int handle_adapter(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 10) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    BatchRouter obj(10);
    std::cout << obj.handle_adapter(10) << std::endl;
    return 0;
}
