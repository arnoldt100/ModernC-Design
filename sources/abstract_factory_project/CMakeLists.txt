# This CMakeLists.txt file creates the program "abstract_factory".
# and its unit tests. To add source files, simply append the appropiate variable
# abstract_factory_header_files or abstract_factory_implementation_files.
#
# The target for the iprogram is abstract_factory.
#
# The following properties are set for the target abstract_factory.
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
    set(my_project_name "abstract_factory")
    project(${my_project_name})

    #-----------------------------------------------------
    # Define the target name.                            -
    #                                                    -
    #-----------------------------------------------------
    set(target ${my_project_name})

    #-----------------------------------------------------
    #  Get the binary install directory.                 -
    #                                                    -
    #-----------------------------------------------------
    set( bin_install_dir $ENV{MODERNCPPDESIGN_INSTALL_BIN_DIRECTORY})

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
    set (abstract_factory_header_files
         header_files/main.h
         header_files/enemy.h
         header_files/Monster.h
         header_files/Soldier.h 
         header_files/SuperMonster.h 
         header_files/SillySoldier.h 
         header_files/BadSoldier.h
         header_files/SillyMonster.h
         header_files/BadMonster.h
         header_files/SillySuperMonster.h 
         header_files/BadSuperMonster.h
         header_files/TestAbstractFactoryUnit.hpp
         header_files/TestEventHandler.hpp )

    #-----------------------------------------------------
    # Here we define the variable                        -
    # command_line_arguments_implementation_files.       -
    # A list of implementation files is stored in this   -
    # variable.                                          -
    #                                                    -
    #-----------------------------------------------------
    set (abstract_factory_implementation_files
         implementation_files/main.cpp
         implementation_files/enemy.cpp
         implementation_files/Monster.cpp
         implementation_files/Soldier.cpp
         implementation_files/SuperMonster.cpp
         implementation_files/SillySoldier.cpp
         implementation_files/BadSoldier.cpp 
         implementation_files/SillyMonster.cpp 
         implementation_files/BadMonster.cpp
         implementation_files/SillySuperMonster.cpp 
         implementation_files/BadSuperMonster.cpp
         implementation_files/TestAbstractFactoryUnit.cpp 
         implementation_files/TestEventHandler.cpp )

#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#                                                                 @
# End of defining the sources and header files associated         @
# with the command_line_arguments targets.                        @
#                                                                 @
#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

#-----------------------------------------------------
# Add the library associated with target             -
# abstract_factory.                                  -
#                                                    -
#-----------------------------------------------------
add_executable( ${target}
                "" )

add_dependencies(${target} 
                 mpl)

#-----------------------------------------------------
#                                                    -
# We associate the source files with the target.     -
#                                                    -
#-----------------------------------------------------
target_sources(${target}
    PRIVATE ${abstract_factory_header_files} ${abstract_factory_implementation_files} )

#-----------------------------------------------------
# Add the directory header_files to search for       -
# header files.                                      -
#                                                    -
#-----------------------------------------------------
target_include_directories(${target} 
                           PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/header_files )


target_link_libraries(${target}
                      PRIVATE mpl 
                      ${Boost_LIBRARIES} )

#-----------------------------------------------------
# Enable compile warnings.                           -
#                                                    -
#-----------------------------------------------------
enable_compile_warnings(${target})

#-----------------------------------------------------
# Here we set the properties on target               -
#                                                    -
#-----------------------------------------------------
set_target_properties(${target} PROPERTIES
                      abstract_factory_include ${CMAKE_CURRENT_SOURCE_DIR}/header_files
                      PUBLIC_HEADER "${abstract_factory_header_files}" )

install( TARGETS ${target}
         RUNTIME DESTINATION ${bin_install_dir} )

#-----------------------------------------------------
# Add the subdirectory for creating the unit tests.  -
#                                                    -
#-----------------------------------------------------
