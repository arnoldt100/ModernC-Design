#  =====================================================================================
# 
#        Filename:  mpl_build_prerequisites.cmake
# 
#     Description:  
# 
#          Author:  Arnold N. Tharrington (), arnoldt@ornl.gov
#    Organization:  ORNL-National Center of Computational Sciences
# 
#  =====================================================================================

# ===  MACRO     ======================================================================
#         Name:  verify_key_mpl_environmental_vaeriables_set
#  Description:  Enables linking meta programming library.
# 
#  Arguments: 
# =====================================================================================

function ( verify_key_mpl_environmental_variables_set )
    #-----------------------------------------------------
    # Verify that the minimum mpl cmake version is set.  -
    #                                                    -
    #-----------------------------------------------------
    if(DEFINED ENV{MPL_MINIMUM_CMAKE_VERSION})
        message("MPL_MINIMUM_CMAKE_VERSION=$ENV{MPL_MINIMUM_CMAKE_VERSION}")
    else()
        message( FATAL_ERROR "The environmental variable MPL_MINIMUM_CMAKE_VERSION is not defined. This \
        variable defines the minumum cmake version.")
    endif()

    #-----------------------------------------------------
    # Verify the c++ standard is set for the MPL library -
    #                                                    -
    #-----------------------------------------------------
    if(DEFINED ENV{MPL_CXX_STANDARD})
        message("MPL_CXX_STANDARD=$ENV{MPL_CXX_STANDARD}")
    else()
        message( FATAL_ERROR "The environmental MPL_CXX_STANDARD is not defined. This \
        variable defines the minumum c++ version.")
    endif()

    #-----------------------------------------------------
    # Verify that the c compiler is set.                 -
    #                                                    -
    #-----------------------------------------------------
    if(DEFINED ENV{MPL_CMAKE_C_COMPILER})
        message("MPL_CMAKE_C_COMPILER=$ENV{MPL_CMAKE_C_COMPILER}")
    else()
        message( FATAL_ERROR "The environmental variable MPL_CMAKE_C_COMPILER is not defined. This \
        variable defines the c compiler.")
    endif()

    #-----------------------------------------------------
    # Verify that the c++ compiler is set.               -
    #                                                    -
    #-----------------------------------------------------
    if(DEFINED ENV{MPL_CMAKE_CXX_COMPILER})
        message("MPL_CMAKE_CXX_COMPILER=$ENV{MPL_CMAKE_CXX_COMPILER}")
    else()
        message( FATAL_ERROR "The environmental variable MPL_CMAKE_CXX_COMPILER is not defined. This \
        variable defines the c++ compiler.")
    endif()

    #-----------------------------------------------------
    # Verify that the mpl install prefix is set.         -
    #                                                    -
    #-----------------------------------------------------
    if(DEFINED ENV{MPL_INSTALL_PREFIX})
        message("MPL_INSTALL_PREFIX=$ENV{MPL_INSTALL_PREFIX}")
    else()
        message( FATAL_ERROR "The environmental variable MPL_INSTALL_PREFIX is not defined. This \
        variable defines the root installation directory of MPL.")
    endif()

    #-----------------------------------------------------
    # Verify that the mpl bin directory is set.          -
    #                                                    -
    #-----------------------------------------------------
    if(DEFINED ENV{MPL_INSTALL_BIN_DIRECTORY})
        message("MPL_INSTALL_BIN_DIRECTORY=$ENV{MPL_INSTALL_BIN_DIRECTORY}")
    else()
        message( FATAL_ERROR "The environmental variable MPL_INSTALL_BIN_DIRECTORY is not defined. This \
        variable defines the bin installation directory of MPL.")
    endif()

    #-----------------------------------------------------
    # Verify that the mpl install include directory is   -
    # set.                                               -
    #                                                    -
    #-----------------------------------------------------
    if(DEFINED ENV{MPL_INSTALL_INCLUDE_DIRECTORY})
        message("MPL_INSTALL_INCLUDE_DIRECTORY=$ENV{MPL_INSTALL_INCLUDE_DIRECTORY}")
    else()
        message( FATAL_ERROR "The environmental variable MPL_INSTALL_INCLUDE_DIRECTORY is not defined. This \
        variable defines the include installation directory of MPL.")
    endif()

    #-----------------------------------------------------
    # Verify that the mpl install lib directory is set.  -
    #                                                    -
    #-----------------------------------------------------
    if(DEFINED ENV{MPL_INSTALL_LIB_DIRECTORY})
        message("MPL_INSTALL_LIB_DIRECTORY=$ENV{MPL_INSTALL_LIB_DIRECTORY}")
    else()
        message( FATAL_ERROR "The environmental variable MPL_INSTALL_LIB_DIRECTORY is not defined. This \
        variable defines the root lib installation directory of MPL.")
    endif()

    #-----------------------------------------------------
    # Verify that the mpl log file is set.               -
    #                                                    -
    #-----------------------------------------------------
    if(DEFINED ENV{MPL_LOG_FILE})
        message("MPL_LOG_FILE=$ENV{MPL_LOG_FILE}")
    else()
        message( FATAL_ERROR "The environmental variable MPL_LOG_FILE is not defined. This \
        variable defines the name of the MPL log file.")
    endif()

    #-----------------------------------------------------
    # Verify that the boost top level is set.            -
    #                                                    -
    #-----------------------------------------------------
    if(DEFINED ENV{MPL_BOOST_TOP_LEVEL})
        message("MPL_BOOST_TOP_LEVEL=$ENV{MPL_BOOST_TOP_LEVEL}")
    else()
        message( FATAL_ERROR "The environmental variable MPL_BOOST_TOP_LEVEL is not defined. This \
        variable defines the path to the boost top level.")
    endif()

endfunction()
