set(SUBDIRECTORIES "unitext" "ucs2" "ucs4" "utf8" "utf16" "utf32" "common")

foreach(VAR ${SUBDIRECTORIES})
	add_subdirectory(${VAR})
endforeach()
