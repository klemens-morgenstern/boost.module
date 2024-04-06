file(GLOB SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_library(boost_module_test ${SRC_FILES})
target_link_libraries(boost_module_test PRIVATE Boost::module)
