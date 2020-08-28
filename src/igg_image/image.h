#pragma once

#include <vector>

namespace igg {

class Image {
 public:
  ///////////////////// Create the public interface here ///////////////////////
  Image(int rows, int cols, std::vector<int> data);

  //getter functions for image dims
  int rows() const;
  int cols() const;
  int& at(int row, int col); //nt no const as this function will update value in the data vector

 private:
  int rows_ = 0;
  int cols_ = 0;
  int max_val_ = 255;
  std::vector<int> data_;
  
};

void ImageHello();

}  // namespace igg
