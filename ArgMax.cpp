#include <vector>
#include <utility>
#include <iostream>




std::pair<std::size_t, std::size_t> MatrixArgMax(const std::vector<std::vector<int>>& matrix) {
    int m = matrix[0][0];
    std::pair <std::size_t,  std::size_t> para;
    for (int a = 0; a < matrix.size(); a++) {
        for (int b = 0; b < matrix[0].size(); b++) {
            if (matrix[a][b] > m) {
                m = matrix[a][b];
                para.first = a;
                para.second = b;
            }
        }
    }
    return para;
}

int main() {
    size_t n, m;
    std::cin >> n >> m;
    int x;
    std::vector<std::vector<int>> matrix;
    std::vector<int> mat;
    for (int a = 0; a < n; a++) {
        for (int b = 0; b < m; b++) {
            std::cin >> x;
            mat.push_back(x);
        }
        matrix.push_back(mat);
        mat.clear();
    }
    std::pair<std::size_t, std::size_t> para2;
    para2 = MatrixArgMax(matrix);
    std::cout << para2.first << " " << para2.second;
}