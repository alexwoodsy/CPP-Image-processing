#include <iostream>
#include <string>
#include <image.h>
#include <vector>


int main() {
    //make some test data to add to file
    std::vector<int> img1_data(100,1);
    igg::Image im1(10 ,10, img1_data);

    std::cout << "rstatus of output: "<< im1.WriteToPgm("./test_output.ascii.pgm") << std::endl;

    std::cout << "rows before: " << im1.rows() << std::endl;
    std::cout << "size after: " << im1.size() << std::endl;

    std::string filepath = "../data/lena.ascii.pgm";
    im1.FillFromPgm(filepath);

    std::cout << "rows after: " << im1.rows() << std::endl;
    std::cout << "size after: " << im1.size() << std::endl;
    
    
    

    

    return 0;
}