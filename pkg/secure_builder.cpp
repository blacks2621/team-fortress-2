#include <iostream>
#include <vector>

class LiteBuilder {
public:
    explicit LiteBuilder(int seed) : state_(seed) {}

    int run_loader(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 75) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    LiteBuilder obj(75);
    std::cout << obj.run_loader(75) << std::endl;
    return 0;
}
