# set(
#     GTEST_LIBRARY 
#     "D:/Repository/vcpkg/packages/gtest_x64-windows/debug/lib/gtestd.lib"
# )
# set(
#     GTEST_MAIN_LIBRARY 
#     "D:/Repository/vcpkg/packages/gtest_x64-windows/debug/lib/manual-link/gtest_maind.lib"
# )
# set(GTEST_INCLUDE_DIR "D:/Repository/vcpkg/packages/gtest_x64-windows/include")

# find_package(GTest REQUIRED)

# add_executable("${PROJECT_NAME}Test" "Test.c")

# target_link_libraries(
# 	"${PROJECT_NAME}Test" PRIVATE 
# 	UniText::unitext GTest::gtest GTest::gtest_main
# )