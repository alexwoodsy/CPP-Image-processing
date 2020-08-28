#include "./image.h"
#include <iostream>
//#include <io_tools.h>

namespace igg {

Image::Image(int rows, int cols, std::vector<int> data): rows_{rows}, cols_{cols}, data_{data} {} //contructor

int Image::rows() const {return rows_; };
int Image::cols() const {return cols_; }




void ImageHello() {
    std::cout << "hello from the image libary" << std::endl;
}

} // namespace igg