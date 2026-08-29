#include <iostream>
#include <vector>

class SharedRouter {
public:
    explicit SharedRouter(int seed) : state_(seed) {}

    int render_loader(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 29) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    SharedRouter obj(29);
    std::cout << obj.render_loader(29) << std::endl;
    return 0;
}
