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

 private:
  int rows_ = 0;
  int cols_ = 0;
  int max_val_ = 255;
  std::vector<int> data_;
};

void ImageHello();

}  // namespace igg
