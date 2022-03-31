#-----------------------------------------------------
# Define the project.                                -
#                                                    -
#-----------------------------------------------------

# This CMakeLists.txt file creates the library libmetaprogramminglibrary.a
# and its unit tests. To add source files, simply append the appropiate variable
# mouseion_header_files or mouseion_implementation_files.
#
# The target for the library is mouseion.
#
# The following properties are set for the target mouseion.
#
#   Property                            Value                                               Description
#----------------------------------------------------------------------------------------------------------------------------
#


#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#                                                                 @
# CMake preamble section.                                         @
#                                                                 @
#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    #-----------------------------------------------------
    # Define the project.                                -
    #                                                    -
    #-----------------------------------------------------
    set(my_project_name "MPL")
    project(${my_project_name})

    #-----------------------------------------------------
    # Define the target name.                            -
    #                                                    -
    #-----------------------------------------------------
    set(target ${my_project_name})

#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#                                                                 @
# End of CMake preamble section.                                  @
#                                                                 @
#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

#-----------------------------------------------------
# Make available the project cmake modules.          -
#                                                    -
#-----------------------------------------------------
include( ${CMAKE_CURRENT_SOURCE_DIR}/cmake_macros_and_functions/moderncppdesign_mpl.cmake )
include( ${CMAKE_CURRENT_SOURCE_DIR}/cmake_macros_and_functions/mpl_build_prerequisites.cmake )

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

#-----------------------------------------------------
# Verify that key environmental variables are set.   -
#                                                    -
#-----------------------------------------------------
verify_key_mpl_environmental_variables_set() 

#-----------------------------------------------------
# Add the subdirectories for the various             -
# libraries.                                         -
#                                                    -
#-----------------------------------------------------
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/meta_programming_library)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/abstract_factory_project)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/generalized_functors)
