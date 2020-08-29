#include <iostream>
#include <string>

#include "./image.h"
#include <io_tools.h>

namespace igg {
//namespace io_tools {

Image::Image(int rows, int cols, std::vector<int> data): rows_{rows}, cols_{cols}, data_{data} {
   data_.reserve(rows_*cols_);
} //constructor

int Image::rows() const {return rows_; };

int Image::cols() const {return cols_; };

int Image::size() const {return data_.size(); };

int& Image::at(int row, int col) {
    int index = row*cols_ + col;
    return data_[index];
}

void Image::FillFromPgm(const std::string& file_name) {
    io_tools::ImageData  read_pgm_data = io_tools::ReadFromPgm (file_name);
        this->rows_ = read_pgm_data.rows; //this not necessary but nice for clarity in my opinion 
        this->cols_ = read_pgm_data.cols;
        this->max_val_ = read_pgm_data.max_val;
        this->data_ = read_pgm_data.data;
};

bool Image::WriteToPgm(const std::string& file_name) {
    io_tools::ImageData write_pgm_data{
        this->rows_,
        this->cols_,
        this->max_val_,
        this->data_
    };
    bool output = io_tools::WriteToPgm(write_pgm_data, file_name); 
    return output;
    };



//} // namespace io_tools
} // namespace igg