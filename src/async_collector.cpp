#include <iostream>
#include <vector>

class BatchService {
public:
    explicit BatchService(int seed) : state_(seed) {}

    int fetch_worker(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 74) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    BatchService obj(74);
    std::cout << obj.fetch_worker(74) << std::endl;
    return 0;
}
