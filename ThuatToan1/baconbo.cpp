#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int minDistanceToMove(int x, int y, int z) {
    int positions[3] = {x, y, z};
    sort(positions, positions + 3); // Sắp xếp tọa độ các con bò theo thứ tự tăng dần

    int minDistance = INT_MAX; // Gán giá trị khoảng cách tối thiểu là vô cùng lớn ban đầu

    // Duyệt qua các vị trí có thể đặt 3 con bò
    for (int i = 0; i <= 2; ++i) {
        int distance = positions[i + 2] - positions[i]; // Tính khoảng cách tối thiểu mà mỗi con bò phải di chuyển
        if (distance < minDistance) {
            minDistance = distance;
        }
    }

    return minDistance;
}

int main() {
    // Thử nghiệm với các tọa độ bò x, y, z
    int x, y, z;
    cin >> x >> y >> z;

    cout << minDistanceToMove(x, y, z) << endl;

    return 0;
}
