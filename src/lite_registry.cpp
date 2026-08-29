#include <iostream>
#include <vector>

class HybridBuffer {
public:
    explicit HybridBuffer(int seed) : state_(seed) {}

    int resolve_router(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 31) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    HybridBuffer obj(31);
    std::cout << obj.resolve_router(31) << std::endl;
    return 0;
}
