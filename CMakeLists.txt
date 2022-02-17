#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#                                                                 @
# CMake preamble section.                                         @
#                                                                 @
#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    #-----------------------------------------------------
    # Check that the cmake minimum version is            -
    # satisfied.                                         -
    #                                                    -
    #-----------------------------------------------------
    cmake_minimum_required(VERSION $ENV{MODERNCPPDESIGN_CMAKE_VERSION})

    #-----------------------------------------------------
    # Define the project.                                -
    #                                                    -
    #-----------------------------------------------------
    project("ModernCPPDesign")

    #-----------------------------------------------------
    # Make available the project cmake modules.          -
    #                                                    -
    #-----------------------------------------------------
    include( $ENV{MODERNCPPDESIGN_CMAKE_MODULE_PATH}/moderncppdesign_build_prerequisites.cmake )
    include( $ENV{MODERNCPPDESIGN_CMAKE_MODULE_PATH}/enable_compile_warnings.cmake )
    include( $ENV{MODERNCPPDESIGN_CMAKE_MODULE_PATH}/moderncppdesign_boost.cmake )
    include( $ENV{MODERNCPPDESIGN_CMAKE_MODULE_PATH}/moderncppdesign_mpl.cmake )


#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#                                                                 @
# End of CMake preamble section.                                  @
#                                                                 @
#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#                                                                 @
# Start of C++ build and release section                          @
#                                                                 @
#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    #-----------------------------------------------------
    # Turn on verbose debugging.                         -
    #                                                    -
    #-----------------------------------------------------
    set(CMAKE_VERBOSE_MAKEFILE ON)

    #-----------------------------------------------------
    # Check that key environmental variables are set.    -
    #                                                    -
    #-----------------------------------------------------
    verify_key_environmental_are_set()

#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#                                                                 @
# End of C++ build and release section                            @
#                                                                 @
#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

#-----------------------------------------------------
# Here we define some variables.                     -
# that are critical for building and deploying.      -
#-----------------------------------------------------
set(moderncppdesign_top_level $ENV{MODERNCPPDESIGN_TOP_LEVEL}) 
set(moderncppdesign_cxx_standard 17)
set(moderncppdesign_cmake_cxx_compiler $ENV{MODERNCPPDESIGN_CMAKE_CXX_COMPILER})
set(moderncppdesign_cmake_c_compiler $ENV{MODERNCPPDESIGN_CMAKE_C_COMPILER})
set(moderncppdesign_install_prefix $ENV{MODERNCPPDESIGN_INSTALL_PREFIX})
set(moderncppdesign_install_bin_directory $ENV{MODERNCPPDESIGN_INSTALL_BIN_DIRECTORY})
set(moderncppdesign_install_include_directory $ENV{MODERNCPPDESIGN_INSTALL_INCLUDE_DIRECTORY})
set(moderncppdesign_install_lib_directory $ENV{MODERNCPPDESIGN_INSTALL_LIB_DIRECTORY})
set(moderncppdesign_minimum_cmake_version $ENV{MODERNCPPDESIGN_MINIMUM_CMAKE_VERSION})


# -----------------------------------------------------
# This section permits use to find the header files  -
# and link against the BOOST library.                -
#                                                    -
#-----------------------------------------------------
enable_boost($ENV{MODERNCPPDESIGN_BOOST_TOP_LEVEL}) # The enable_boost macro 
                                                    # sets up the boost library for
                                                    # linking against.


#-----------------------------------------------------
# This section enables building the                  -
# meta_programming_library.                          -
#                                                    -
#-----------------------------------------------------
enable_mpl( ${moderncppdesign_minimum_cmake_version}
            ${moderncppdesign_cxx_standard}
            ${moderncppdesign_cmake_c_compiler}
            ${moderncppdesign_cmake_cxx_compiler}
            ${moderncppdesign_install_prefix}
            ${moderncppdesign_install_bin_directory}
            ${moderncppdesign_install_include_directory}
            ${moderncppdesign_install_lib_directory}
            $ENV{MODERNCPPDESIGN_BOOST_TOP_LEVEL})


add_subdirectory(sources/meta_programming_library)
