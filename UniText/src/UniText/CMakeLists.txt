set(SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/UniText.c")
set(SUBDIRECTORIES "")
set(RELATIVE_PATH "src/UniText")

foreach(VAR ${SUBDIRECTORIES})
	add_subdirectory(${VAR})
endforeach()

if(SOURCE_FILES)
	target_sources("${PROJECT_NAME}" PRIVATE ${SOURCE_FILES})

	install(FILES ${SOURCE_FILES} DESTINATION ${RELATIVE_PATH})
endif()