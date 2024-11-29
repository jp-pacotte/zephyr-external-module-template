cmake_minimum_required(VERSION 3.20.0)

set(EXTRA_CONF_FILE ../../foolib/foolib.conf ../tests.conf)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(test_foolib_bar)

# tests suite
target_sources(foolib PRIVATE UnitTests.cpp ../../foolib/Bar.cpp)

target_compile_definitions(foolib PRIVATE CONFIG_FOOLIB_CONFIG_LOG_LEVEL=4)

get_cmake_property(_variableNames VARIABLES)
foreach(_variableName ${_variableNames})
    message(STATUS "${_variableName}=${${_variableName}}")
endforeach()
