set(
    SOURCE_FILES 
    "${CMAKE_CURRENT_SOURCE_DIR}/export.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/standard_includes.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/defines.h"
)
set(RELATIVE_PATH "include/common")

if(SOURCE_FILES)
    target_sources("${PROJECT_NAME}" PRIVATE ${SOURCE_FILES})

    install(FILES ${SOURCE_FILES} DESTINATION ${RELATIVE_PATH})
endif()
