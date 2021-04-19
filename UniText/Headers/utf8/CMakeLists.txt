set(
	SOURCE_FILES 
	"${CMAKE_CURRENT_SOURCE_DIR}/defines.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/utility.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/utf8.h"
)
set(RELATIVE_PATH "include/utf8")

if(SOURCE_FILES)
    target_sources("${PROJECT_NAME}" PRIVATE ${SOURCE_FILES})

    install(FILES ${SOURCE_FILES} DESTINATION ${RELATIVE_PATH})
endif()
