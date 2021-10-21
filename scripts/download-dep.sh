if [ ! -d "./vcpkg" ]; then
    git clone --depth 1 https://github.com/microsoft/vcpkg.git
    ./vcpkg/bootstrap-vcpkg.sh
    ./vcpkg/vcpkg install fmt catch2
fi