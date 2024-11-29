# # Confidential - Copyright PA.COTTE: All rights reserved
# zephyr_library_named(foolib)
# zephyr_library_include_directories(${CMAKE_CURRENT_SOURCE_DIR}/foolib)
# zephyr_library_sources(foolib/Bar.cpp)

zephyr_include_directories(foolib)
target_include_directories(app PRIVATE foolib)
add_subdirectory(foolib)
