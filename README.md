Install mongoDB driver first from below link:

https://www.mongodb.com/docs/languages/cpp/drivers/current/installation/macos/#std-label-cpp-installation-macos

Replace the cmake with below command to build for C++ 17

cmake ..                                            \
    -DCMAKE_BUILD_TYPE=Release                      \
    -DCMAKE_CXX_STANDARD=17                    \
    -DMONGOCXX_OVERRIDE_DEFAULT_INSTALL_PREFIX=OFF
