set(
	SOURCE_FILES 
	"${CMAKE_CURRENT_SOURCE_DIR}/UniText.h"
)
set(SUBDIRECTORIES "")
set(RELATIVE_PATH "include/UniText")

foreach(VAR ${SUBDIRECTORIES})
	add_subdirectory(${VAR})
endforeach()

if(SOURCE_FILES)
	target_sources("${PROJECT_NAME}" PRIVATE ${SOURCE_FILES})

	install(FILES ${SOURCE_FILES} DESTINATION ${RELATIVE_PATH})
endif()