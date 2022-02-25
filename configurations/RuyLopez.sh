#! /usr/bin/env bash

#-----------------------------------------------------
# Define the top level directory of moderncppdesign  -
#                                                    -
#-----------------------------------------------------
if [ -z ${MODERNCPPDESIGN_TOP_LEVEL+x} ]
then
    export MODERNCPPDESIGN_TOP_LEVEL=${HOME}/moderncppdesign
fi

#-----------------------------------------------------
# Declare the minimum cmake version needed.          -
#                                                    -
#-----------------------------------------------------
export MODERNCPPDESIGN_CMAKE_VERSION='3.16'

#-----------------------------------------------------
# Define the c++ compiler.                           -
#                                                    -
#-----------------------------------------------------
export MODERNCPPDESIGN_CMAKE_CXX_COMPILER=mpiCC

#-----------------------------------------------------
# Define the c compiler.                             -
#                                                    -
#-----------------------------------------------------
export MODERNCPPDESIGN_CMAKE_C_COMPILER=mpicc

#-----------------------------------------------------
# Define the install prefix.                         -
#                                                    -
#-----------------------------------------------------
export MODERNCPPDESIGN_INSTALL_PREFIX=${HOME}/sw/ModernCPPDesign

#-----------------------------------------------------
# Define the moderncppdesign bin directory.          -
#                                                    -
#-----------------------------------------------------
export MODERNCPPDESIGN_INSTALL_BIN_DIRECTORY=${MODERNCPPDESIGN_INSTALL_PREFIX}/bin

#-----------------------------------------------------
# Define the moderncppdesign include directory.      -
#                                                    -
#-----------------------------------------------------
export MODERNCPPDESIGN_INSTALL_INCLUDE_DIRECTORY=${MODERNCPPDESIGN_INSTALL_PREFIX}/include

#-----------------------------------------------------
# Define the moderncppdesign include directory.      -
#                                                    -
#-----------------------------------------------------
export MODERNCPPDESIGN_INSTALL_LIB_DIRECTORY=${MODERNCPPDESIGN_INSTALL_PREFIX}/lib

#-----------------------------------------------------
# Define the moderncppdesign boost root path.        -
#                                                    -
#-----------------------------------------------------
export MODERNCPPDESIGN_BOOST_TOP_LEVEL=${BOOST_TOP_LEVEL}

#-----------------------------------------------------
# This moderncppdesign core configuration must be    -
# sourced.                                           -
#-----------------------------------------------------
source ${MODERNCPPDESIGN_TOP_LEVEL}/configurations/moderncppdesign_core_configurations.sh
