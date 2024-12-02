cmake_minimum_required(VERSION 3.20.0)

set(EXTRA_CONF_FILE ../../src/foolib.conf ../tests.conf)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(test_foolib_bar)

# tests suite
target_sources(app PRIVATE UnitTests.cpp)

target_compile_definitions(app PRIVATE CONFIG_FOOLIB_CONFIG_LOG_LEVEL=4)
