cmake_minimum_required(VERSION 3.16)

project(codeRush1 LANGUAGES C)

add_executable(codeRush1 main.c
    DataTypes.c
    DataTypes.md)

include(GNUInstallDirs)
install(TARGETS codeRush1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
