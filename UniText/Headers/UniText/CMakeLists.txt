set(
	SOURCE_FILES 
	"${CMAKE_CURRENT_SOURCE_DIR}/unitext.h"
)
set(RELATIVE_PATH "include/unitext")

if(SOURCE_FILES)
	target_sources("${PROJECT_NAME}" PRIVATE ${SOURCE_FILES})

	install(FILES ${SOURCE_FILES} DESTINATION ${RELATIVE_PATH})
endif()
