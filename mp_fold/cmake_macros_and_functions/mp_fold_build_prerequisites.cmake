#-----------------------------------------------------
# This function verifies the key environmental       -
# variables are set.                                 -
#                                                    -
#                                                    -
#-----------------------------------------------------
function(verify_key_environmental_are_set)

    #-----------------------------------------------------
    # Verify environmental variable MP_FOLD_TOP_LEVEL is  -
    # defined.                                           -
    #-----------------------------------------------------
    if(DEFINED ENV{MP_FOLD_TOP_LEVEL})
        message("MP_FOLD_TOP_LEVEL=$ENV{MP_FOLD_TOP_LEVEL}")
    else()
        message( FATAL_ERROR "The environmental MP_FOLD_TOP_LEVEL is not defined. This \
        variable defines the top level directory of the mouseion package." )
    endif()

    #-----------------------------------------------------
    # Verify environmental variable                      -
    # MP_FOLD_CMAKE_CXX_COMPILER is defined.              -
    #-----------------------------------------------------
    if (DEFINED ENV{MP_FOLD_CMAKE_CXX_COMPILER})
        message("MP_FOLD_CMAKE_CXX_COMPILER=$ENV{MP_FOLD_CMAKE_CXX_COMPILER}")
    else()
        message( FATAL_ERROR "The environmental MP_FOLD_CMAKE_CXX_COMPILER is not defined. This \
        variable defines the C++ compiler for compiling mouseion." )
    endif()

    #-----------------------------------------------------
    # Verify environmental variable                      -
    # MP_FOLD_CMAKE_C_COMPILER is defined.                -
    #-----------------------------------------------------
    if (DEFINED ENV{MP_FOLD_CMAKE_C_COMPILER})
        message("MP_FOLD_CMAKE_C_COMPILER=$ENV{MP_FOLD_CMAKE_C_COMPILER}")
    else()
        message( FATAL_ERROR "The environmental MP_FOLD_CMAKE_C_COMPILER is not defined. This \
        variable defines the c compiler for compiling mouseion." )
    endif()

    #-----------------------------------------------------
    # Verify environmental variable                      -
    # MP_FOLD_INSTALL_PREFIX  is defined.               -
    #                                                    -
    #-----------------------------------------------------
    if (DEFINED ENV{MP_FOLD_INSTALL_PREFIX})
        message("MP_FOLD_INSTALL_PREFIX=$ENV{MP_FOLD_INSTALL_PREFIX}")
    else()
        message( FATAL_ERROR "The environmental MP_FOLD_INSTALL_PREFIX is not defined. This \
        variable defines the root location to install mouseion." )
    endif()

    #-----------------------------------------------------
    # Verify environmental variable                      -
    # MP_FOLD_INSTALL_BIN_DIRECTORY is defined.         -
    #-----------------------------------------------------
    if (DEFINED ENV{MP_FOLD_INSTALL_BIN_DIRECTORY})
        message("MP_FOLD_INSTALL_BIN_DIRECTORY=$ENV{MP_FOLD_INSTALL_BIN_DIRECTORY}")
    else()
        message( FATAL_ERROR "The environmental MP_FOLD_INSTALL_BIN_DIRECTORY is not defined. This \
        variable defines the location to install mouseion binaries." )
    endif()

    #-----------------------------------------------------
    # Verify environmental variable                      -
    # MP_FOLD_INSTALL_INCLUDE_DIRECTORY is defined.     -
    #-----------------------------------------------------
    if ( DEFINED ENV{MP_FOLD_INSTALL_INCLUDE_DIRECTORY} )
        message("MP_FOLD_INSTALL_INCLUDE_DIRECTORY=$ENV{MP_FOLD_INSTALL_INCLUDE_DIRECTORY}")
    else()
        message( FATAL_ERROR "The environmental MP_FOLD_INSTALL_INCLUDE_DIRECTORY is not defined. This \
        variable defines the location to install mouseion header files." )
    endif()

    #-----------------------------------------------------
    # Verify environmental variable                      -
    # MP_FOLD_INSTALL_LIB_DIRECTORY is defined.         -
    #-----------------------------------------------------
    if ( DEFINED ENV{MP_FOLD_INSTALL_LIB_DIRECTORY} )
        message("MP_FOLD_INSTALL_LIB_DIRECTORY=$ENV{MP_FOLD_INSTALL_LIB_DIRECTORY}")
    else()
        message( FATAL_ERROR "The environmental MP_FOLD_INSTALL_LIB_DIRECTORY is not defined. This \
        variable defines the location to install mouseion libraries." )
    endif()

    #-----------------------------------------------------
    # Verify environment variable                        -
    # MP_FOLD_BOOST_TOP_LEVEL is defined.               -
    #-----------------------------------------------------
    if( DEFINED ENV{MP_FOLD_BOOST_TOP_LEVEL})
        message("MP_FOLD_BOOST_TOP_LEVEL=$ENV{MP_FOLD_BOOST_TOP_LEVEL}")
    else()
        message( FATAL_ERROR "The environmental MP_FOLD_BOOST_TOP_LEVEL is not defined. This \
        variable defines the location to BOOST top level." )
    endif()

endfunction()
