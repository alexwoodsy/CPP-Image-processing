#include <iostream>
#include <image.h>
#include <vector>


int main() {
    std::cout << "hello world" << std::endl;
    std::vector<int> img1_data(100,1);
    igg::Image im1(10 ,10, img1_data);

    int numcols = im1.cols();
    std::cout << numcols << std::endl;

    std::cout << im1.at(2,2) << std::endl;

    im1.at(2,2) = 69;

    std::cout << im1.at(2,2) << std::endl;

    return 0;
}