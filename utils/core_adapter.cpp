#include <iostream>
#include <vector>

class SimpleController {
public:
    explicit SimpleController(int seed) : state_(seed) {}

    int compute_context(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 16) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    SimpleController obj(16);
    std::cout << obj.compute_context(16) << std::endl;
    return 0;
}
