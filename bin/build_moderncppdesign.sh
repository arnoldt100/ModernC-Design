#! /usr/bin/env bash

#-----------------------------------------------------
# Define the Anansi buld directory.                  -
#                                                    -
#-----------------------------------------------------
moderncppdesign_cmake_build_dir="moderncppdesign_cmake_build_dir"

#-----------------------------------------------------
# Define a log file                                  -
#                                                    -
#-----------------------------------------------------
log_file="${MODERNCPPDESIGN_TOP_LEVEL}/moderncppdesign_log.txt"

#-----------------------------------------------------
# No edits should be needed below this line.         -
#                                                    -
#-----------------------------------------------------

if [ -f ${log_file} ]
then
    rm -f ${log_file}
fi

if [ -d ${moderncppdesign_cmake_build_dir} ]
then
    rm -rf ${moderncppdesign_cmake_build_dir}
fi
mkdir ${moderncppdesign_cmake_build_dir}

cd ${moderncppdesign_cmake_build_dir}

cmake ${MODERNCPPDESIGN_TOP_LEVEL} \
      -DCMAKE_CXX_COMPILER=${MODERNCPPDESIGN_CMAKE_CXX_COMPILER} \
      -DCMAKE_C_COMPILER=${MODERNCPPDESIGN_CMAKE_C_COMPILER} \
      -DCMAKE_INSTALL_PREFIX=${MODERNCPPDESIGN_INSTALL_PREFIX} \
      -DCMAKE_BUILD_TYPE=Debug

make

make install
