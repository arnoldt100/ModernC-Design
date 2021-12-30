#! /usr/bin/env bash


#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#                                                                 @
# ModernC++Design environmental variables.                        @
#                                                                 @
# Please do not modfiy the below environmental variables.         @
#                                                                 @
# These environmental variables store the location of             @
# various top level CMakeLists.txt files, directories, etc.       @
#                                                                 @
#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


if [ -z ${MODERNCPPDESIGN_TOP_LEVEL+x} ]
then
    echo "Warning!"
    echo "The environmental variable MODERNCPPDESIGN_TOP_LEVEL is not set."
    echo "This variable must be set the the top level directory of moderncppdesign."
    echo "ModernC++Design will not build correctly till this variable is set."
else
    #-----------------------------------------------------
    # Define the moderncppdesign bin directory.                   -
    #                                                    -
    #-----------------------------------------------------
    export MODERNCPPDESIGN_BIN_DIRECTORY=${MODERNCPPDESIGN_TOP_LEVEL}/bin

    #-----------------------------------------------------
    # The minimum cmake version required to build        -
    # this project.                                      -
    #                                                    -
    # This variable is mandatory.                        -
    #-----------------------------------------------------
    export MODERNCPPDESIGN_MINIMUM_CMAKE_VERSION="3.16"

    #-----------------------------------------------------
    # Define the path to ModernC++Design cmake modules.           -
    #                                                    -
    # This variable is mandatory.                        -
    #-----------------------------------------------------
    export MODERNCPPDESIGN_CMAKE_MODULE_PATH=${MODERNCPPDESIGN_TOP_LEVEL}/cmake_macros_and_functions

    #-----------------------------------------------------
    #                                                    -
    #                                                    -
    #-----------------------------------------------------
    export PATH="${MODERNCPPDESIGN_TOP_LEVEL}/moderncppdesign/bin":"$PATH"
fi
