#pragma once

#include <vector>
#include <string>

namespace igg {
// namespace io_tools {

class Image {
 public:
  Image(int rows, int cols, std::vector<int> data);
  

  //getter functions for image dims
  int rows() const;
  int cols() const;
  int size() const;
  int& at(int row, int col); //nt no const as this function will update value in the data vector
  void FillFromPgm(const std::string& file_name);
  bool WriteToPgm(const std::string& file_name);

 private:
  int rows_ = 0;
  int cols_ = 0;
  int max_val_ = 255;
  std::vector<int> data_;
  
};



// } // namespace io_tools
} // namespace igg
