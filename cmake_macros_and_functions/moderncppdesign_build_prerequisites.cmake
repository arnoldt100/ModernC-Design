#-----------------------------------------------------
# This function verifies the key environmental       -
# variables are set.                                 -
#                                                    -
#                                                    -
#-----------------------------------------------------
function(verify_key_environmental_are_set)

    #-----------------------------------------------------
    # Verify environmental variable is                   -
    # MODERNCPPDESIGN_TOP_LEVEL defined.                 -
    #                                                    -
    #-----------------------------------------------------
    if(DEFINED ENV{MODERNCPPDESIGN_TOP_LEVEL})
        message("MODERNCPPDESIGN_TOP_LEVEL=$ENV{MODERNCPPDESIGN_TOP_LEVEL}")
    else()
        message( FATAL_ERROR "The environmental MODERNCPPDESIGN_TOP_LEVEL is not defined. This \
        variable defines the top level directory of the moderncppdesign package." )
    endif()

    #-----------------------------------------------------
    # Verify environmental variable                      -
    # MODERNCPPDESIGN_CMAKE_CXX_COMPILER is defined.     -
    #                                                    -
    #-----------------------------------------------------
    if (DEFINED ENV{MODERNCPPDESIGN_CMAKE_CXX_COMPILER})
        message("MODERNCPPDESIGN_CMAKE_CXX_COMPILER=$ENV{MODERNCPPDESIGN_CMAKE_CXX_COMPILER}")
    else()
        message( FATAL_ERROR "The environmental MODERNCPPDESIGN_CMAKE_CXX_COMPILER is not defined. This \
        variable defines the C++ compiler for compiling moderncppdesign." )
    endif()

    #-----------------------------------------------------
    # Verify environmental variable                      -
    # MODERNCPPDESIGN_CMAKE_C_COMPILER is defined.       -
    #                                                    -
    #-----------------------------------------------------
    if (DEFINED ENV{MODERNCPPDESIGN_CMAKE_C_COMPILER})
        message("MODERNCPPDESIGN_CMAKE_C_COMPILER=$ENV{MODERNCPPDESIGN_CMAKE_C_COMPILER}")
    else()
        message( FATAL_ERROR "The environmental MODERNCPPDESIGN_CMAKE_C_COMPILER is not defined. This \
        variable defines the c compiler for compiling moderncppdesign." )
    endif()

    #-----------------------------------------------------
    # Verify environmental variable                      -
    # MODERNCPPDESIGN_INSTALL_PREFIX is defined.         -
    #                                                    -
    #-----------------------------------------------------
    if (DEFINED ENV{MODERNCPPDESIGN_INSTALL_PREFIX})
        message("MODERNCPPDESIGN_INSTALL_PREFIX=$ENV{MODERNCPPDESIGN_INSTALL_PREFIX}")
    else()
        message( FATAL_ERROR "The environmental MODERNCPPDESIGN_INSTALL_PREFIX is not defined. This \
        variable defines the root location to install moderncppdesign." )
    endif()

    #-----------------------------------------------------
    # Verify environmental variable                      -
    # MODERNCPPDESIGN_INSTALL_BIN_DIRECTORY is defined.  -
    #                                                    -
    #-----------------------------------------------------
    if (DEFINED ENV{MODERNCPPDESIGN_INSTALL_BIN_DIRECTORY})
        message("MODERNCPPDESIGN_INSTALL_BIN_DIRECTORY=$ENV{MODERNCPPDESIGN_INSTALL_BIN_DIRECTORY}")
    else()
        message( FATAL_ERROR "The environmental MODERNCPPDESIGN_INSTALL_BIN_DIRECTORY is not defined. This \
        variable defines the location to install moderncppdesign binaries." )
    endif()

    #-----------------------------------------------------
    # Verify environmental variable                      -
    # MODERNCPPDESIGN_INSTALL_INCLUDE_DIRECTORY          -
    # is defined.                                        -
    #                                                    -
    #-----------------------------------------------------
    if ( DEFINED ENV{MODERNCPPDESIGN_INSTALL_INCLUDE_DIRECTORY} )
        message("MODERNCPPDESIGN_INSTALL_INCLUDE_DIRECTORY=$ENV{MODERNCPPDESIGN_INSTALL_INCLUDE_DIRECTORY}")
    else()
        message( FATAL_ERROR "The environmental MODERNCPPDESIGN_INSTALL_INCLUDE_DIRECTORY is not defined. This \
        variable defines the location to install moderncppdesign header files." )
    endif()

    #-----------------------------------------------------
    # Verify environmental variable                      -
    # MODERNCPPDESIGN_INSTALL_LIB_DIRECTORY is defined.  -
    #                                                    -
    #-----------------------------------------------------
    if ( DEFINED ENV{MODERNCPPDESIGN_INSTALL_LIB_DIRECTORY} )
        message("MODERNCPPDESIGN_INSTALL_LIB_DIRECTORY=$ENV{MODERNCPPDESIGN_INSTALL_LIB_DIRECTORY}")
    else()
        message( FATAL_ERROR "The environmental MODERNCPPDESIGN_INSTALL_LIB_DIRECTORY is not defined. This \
        variable defines the location to install moderncppdesign libraries." )
    endif()

    #-----------------------------------------------------
    # Verify environment variable                        -
    # MODERNCPPDESIGN_BOOST_TOP_LEVEL is defined.        -
    #                                                    -
    #-----------------------------------------------------
    if( DEFINED ENV{MODERNCPPDESIGN_BOOST_TOP_LEVEL})
        message("MODERNCPPDESIGN_BOOST_TOP_LEVEL=$ENV{MODERNCPPDESIGN_BOOST_TOP_LEVEL}")
    else()
        message( FATAL_ERROR "The environmental MODERNCPPDESIGN_BOOST_TOP_LEVEL is not defined. This \
        variable defines the location to BOOST top level." )
    endif()

endfunction()
