#  =====================================================================================
# 
#        Filename:  moderncppdesign_mpl.cmake
# 
#     Description:  
# 
#          Author:  Arnold N. Tharrington (), arnoldt@ornl.gov
#    Organization:  ORNL-National Center of Computational Sciences
# 
#  =====================================================================================



 
# ===  MACRO     ======================================================================
#         Name:  enable_mpl
#  Description:  Enables linking meta programming library.
# 
#  Arguments: 
# =====================================================================================

macro(enable_mpl
      minimum_cmake_version
      cxx_standard
      cmake_c_compiler 
      cmake_cxx_compiler
      install_prefix
      install_bin_directory
      install_include_directory
      install_lib_directory
      boost_top_level )

    set(ENV{MPL_MINIMUM_CMAKE_VERSION} ${minimum_cmake_version}) 
    set(ENV{MPL_CXX_STANDARD} ${cxx_standard})
    set(ENV{MPL_CMAKE_C_COMPILER} ${cmake_c_compiler})
    set(ENV{MPL_CMAKE_CXX_COMPILER} ${cmake_cxx_compiler})
    set(ENV{MPL_INSTALL_PREFIX} ${install_prefix})
    set(ENV{MPL_INSTALL_BIN_DIRECTORY} ${install_bin_directory}) 
    set(ENV{MPL_INSTALL_INCLUDE_DIRECTORY} ${install_include_directory})
    set(ENV{MPL_INSTALL_LIB_DIRECTORY} ${install_lib_directory})
    set(ENV{MPL_LOG_FILE} "mpl_log.txt")
    set(ENV{MPL_BOOST_TOP_LEVEL} ${boost_top_level})
endmacro()
