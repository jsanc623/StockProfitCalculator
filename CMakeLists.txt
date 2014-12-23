cmake_minimum_required(VERSION 2.8.4)
project(StockProfitCalculator)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_AUTOMOC ON)
set(SOURCE_FILES main.cpp lib/calculator.cpp lib/quandl.cpp lib/json.cpp)

add_executable(StockProfitCalculator ${SOURCE_FILES})
