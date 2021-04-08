set(SOURCE_FILES "")
set(SUBDIRECTORIES "UniText")
set(RELATIVE_PATH "src")

foreach(VAR ${SUBDIRECTORIES})
	add_subdirectory(${VAR})
endforeach()

if(SOURCE_FILES)
	target_sources("${PROJECT_NAME}" PRIVATE ${SOURCE_FILES})

	install(FILES ${SOURCE_FILES} DESTINATION ${RELATIVE_PATH})
endif()