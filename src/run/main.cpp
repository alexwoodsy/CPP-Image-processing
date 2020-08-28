#include <iostream>
#include <image.h>
#include <vector>


int main() {
    std::cout << "hello world" << std::endl;
    std::vector<int> img1_data(100,1);
    igg::Image im1(10 ,10, img1_data);

    int numcols;
    numcols = im1.cols();
    std::cout << numcols << std::endl;

    return 0;
}