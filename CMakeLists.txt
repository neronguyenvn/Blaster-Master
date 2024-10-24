cmake_minimum_required(VERSION 3.29)

project(Blaster_Master)

set(CMAKE_CXX_STANDARD 23)

file(GLOB_RECURSE SOURCES "05-SceneManager/*.cpp")
add_executable(Blaster_Master ${SOURCES})

target_include_directories(Blaster_Master PUBLIC 05-SceneManager)

find_package(dxsdk-d3dx CONFIG REQUIRED)
target_link_libraries(Blaster_Master PRIVATE
        Microsoft::D3DX10
        D3D10
        DINPUT8
        DXGUID)
