#include "./image.h"
#include <iostream>
//#include <io_tools.h>

namespace igg {

Image::Image(int rows, int cols, std::vector<int> data): rows_{rows}, cols_{cols}, data_{data} {
   data_.reserve(rows_*cols_);
} //constructor

int Image::rows() const {return rows_; };
int Image::cols() const {return cols_; };
int& Image::at(int row, int col) {
    int index = row*cols_ + col;
    return data_[index];
}




void ImageHello() {
    std::cout << "hello from the image libary" << std::endl;
}

} // namespace igg