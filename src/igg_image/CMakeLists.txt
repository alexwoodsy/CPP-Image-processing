#################### Import the 'io_tools' library here ########################
# find_library(TOOLS 
# NAMES tools 
# PATHS ${LIBRARY_OUTPUT_PATH})

#################### Create a library 'image' below this line ##################
add_library(image image.cpp)

target_include_directories(image PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")