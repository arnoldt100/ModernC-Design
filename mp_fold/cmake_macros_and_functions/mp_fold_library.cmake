# =====================================================================================
# 
#        Filename:  mp_fold_library.cmake
# 
#     Description:  
# 
#          Author:  Arnold N. Tharrington (), arnoldt@ornl.gov
#    Organization:  ORNL-National Center of Computational Sciences
# 
#  =====================================================================================


# ===  MACRO     ======================================================================
#         Name:  enable_mp_fold
#  Description:  Defines key environmental variables enabalng the
#                building of the mp_fold library.
# 
#  Arguments: top_level - The top level of the main CmakeLists.txt file.
#             minimum_cmake_version - The minumum cmake version for building mp_fold
#             cmake_c_compiler - The C compiler for building c sources
#             cmake_cxx_compiler - The C++ compiler for building C++ sources
#             install_prefix - The root location to install the library.
#             install_bin_directory - The location to install binaraies
#             install_include_directory - The location to install header files
#             install_lib_directory - The location to install the actual library
#             mp_fold_top_level - The top level of the mp_fold package
#             boost_top_level - The top level of the boost package
# =====================================================================================
macro (enable_building_mp_fold top_level
       minimum_cmake_version
       cxx_standard
       cmake_c_compiler 
       cmake_cxx_compiler
       install_prefix
       install_bin_directory
       install_include_directory
       install_lib_directory
       mp_fold_top_level
       boost_top_level)

    set(ENV{MP_FOLD_MINIMUM_CMAKE_VERSION} ${minimum_cmake_version}) 
    set(ENV{MP_FOLD_CXX_STANDARD} ${cxx_standard})
    set(ENV{MP_FOLD_CMAKE_C_COMPILER} ${cmake_c_compiler})
    set(ENV{MP_FOLD_CMAKE_CXX_COMPILER} ${cmake_cxx_compiler})
    set(ENV{MP_FOLD_INSTALL_PREFIX} ${install_prefix})
    set(ENV{MP_FOLD_INSTALL_BIN_DIRECTORY} ${install_bin_directory}) 
    set(ENV{MP_FOLD_INSTALL_INCLUDE_DIRECTORY} ${install_include_directory})
    set(ENV{MP_FOLD_INSTALL_LIB_DIRECTORY} ${install_lib_directory})
    set(ENV{MP_FOLD_LOG_FILE} "mp_fold_log.txt")
    set(ENV{MP_FOLD_TOP_LEVEL} ${mp_fold_top_level})
    set(ENV{MP_FOLD_BOOST_TOP_LEVEL} $ENV{MODERNCPPDESIGN_BOOST_TOP_LEVEL})
endmacro()
