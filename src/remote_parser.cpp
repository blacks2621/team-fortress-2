#include <iostream>
#include <vector>

class StreamFactory {
public:
    explicit StreamFactory(int seed) : state_(seed) {}

    int dispatch_engine(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 46) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    StreamFactory obj(46);
    std::cout << obj.dispatch_engine(46) << std::endl;
    return 0;
}
