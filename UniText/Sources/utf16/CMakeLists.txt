set(
    SOURCE_FILES 
    ""
)
set(RELATIVE_PATH "src/utf16")

if(SOURCE_FILES)
    target_sources("${PROJECT_NAME}" PRIVATE ${SOURCE_FILES})

    install(FILES ${SOURCE_FILES} DESTINATION ${RELATIVE_PATH})
endif()
