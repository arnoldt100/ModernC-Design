# This CMakeLists.txt file creates the binary mp_fold
# To add source files, simply append the appropiate variable
# mp_fold_header_files or mp_fold_implementation_files.
#
# The target for the library is mp_fold.
#
# The following properties are set for the target mp_fold.
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
    set(my_project_name "mp_fold")
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



#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#                                                                 @
# Here we define the sources and header files associated          @
# with the various targets.                                       @
#                                                                 @
#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    
    #-----------------------------------------------------
    # Here we define the variable                        -
    # command_line_arguments_header_files.               -
    # A list of header files is stored in                -
    # this variable.                                     -
    #                                                    -
    #-----------------------------------------------------
    set (mp_fold_header_files
         header_files/MPLAliases.hpp
         header_files/mp_fold.hpp
         header_files/Person1.h
         header_files/Person2.h
         header_files/Person3.h
         header_files/Jane.hpp
         header_files/MyName.hpp
         header_files/AbstractPersonFactory.hpp
         header_files/GenerateScatteredHierarchy.hpp)

    #-----------------------------------------------------
    # Here we define the variable                        -
    # command_line_arguments_implementation_files.       -
    # A list of implementation files is stored in this   -
    # variable.                                          -
    #                                                    -
    #-----------------------------------------------------
    set (mp_fold_implementation_files
         implementation_files/mp_fold.cpp
         implementation_files/Person1.cpp
         implementation_files/Person2.cpp 
         implementation_files/Person3.cpp
         implementation_files/Jane.cpp
         implementation_files/AbstractPersonFactory.cpp
         implementation_files/GenerateScatteredHierarchy.cpp)

#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#                                                                 @
# End of defining the sources and header files associated         @
# with the command_line_arguments targets.                        @
#                                                                 @
#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

#-----------------------------------------------------
# Make available the project cmake modules.          -
#                                                    -
#-----------------------------------------------------
include( ${CMAKE_CURRENT_LIST_DIR}/cmake_macros_and_functions/mp_fold_build_prerequisites.cmake )
include( ${CMAKE_CURRENT_LIST_DIR}/cmake_macros_and_functions/enable_compile_warnings.cmake )

#-----------------------------------------------------
# Verify that key environmental variables are set.   -
#                                                    -
#-----------------------------------------------------
verify_key_environmental_are_set()

#-----------------------------------------------------
# Here we define some variables.                     -
# that are critical for building and deploying.      -
#-----------------------------------------------------
set(mp_fold_cmake_cxx_compiler $ENV{MP_FOLD_CMAKE_CXX_COMPILER})
set(mp_fold_cxx_standard $ENV{MP_FOLD_CXX_STANDARD})
set(mp_fold_cmake_c_compiler $ENV{MP_FOLD_CMAKE_C_COMPILER})
set(mp_fold_install_prefix $ENV{MP_FOLD_INSTALL_PREFIX})
set(mp_fold_install_bin_directory $ENV{MP_FOLD_INSTALL_BIN_DIRECTORY})
set(mp_fold_install_include_directory $ENV{MP_FOLD_INSTALL_INCLUDE_DIRECTORY})
set(mp_fold_install_lib_directory $ENV{MP_FOLD_INSTALL_LIB_DIRECTORY})

#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#                                                                 @
# Start of section that adds the mp_fold binary target.           @
#                                                                 @
#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

add_executable( ${target}
                "" )

#-----------------------------------------------------
#                                                    -
# We associate the source files with the target.     -
#                                                    -
#-----------------------------------------------------
target_sources(${target}
               PRIVATE ${mp_fold_header_files} ${mp_fold_implementation_files} )

set_target_properties(${target} PROPERTIES
                      CXX_STANDARD ${mp_fold_cxx_standard} )

target_include_directories(${target} 
                           PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/header_files
                           PRIVATE ${Boost_INCLUDE_DIR}  )

enable_compile_warnings(${target})


target_link_libraries(${target}
                      PRIVATE ${Boost_LIBRARIES} )

                  
install( TARGETS ${target} 
         RUNTIME DESTINATION ${mp_fold_install_bin_directory} )
