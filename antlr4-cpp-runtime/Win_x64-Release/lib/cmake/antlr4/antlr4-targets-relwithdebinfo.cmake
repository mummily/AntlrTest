#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "antlr4_shared" for configuration "RelWithDebInfo"
set_property(TARGET antlr4_shared APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(antlr4_shared PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/antlr4-runtime.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/antlr4-runtime.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS antlr4_shared )
list(APPEND _IMPORT_CHECK_FILES_FOR_antlr4_shared "${_IMPORT_PREFIX}/lib/antlr4-runtime.lib" "${_IMPORT_PREFIX}/lib/antlr4-runtime.dll" )

# Import target "antlr4_static" for configuration "RelWithDebInfo"
set_property(TARGET antlr4_static APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(antlr4_static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELWITHDEBINFO "CXX"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/antlr4-runtime-static.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS antlr4_static )
list(APPEND _IMPORT_CHECK_FILES_FOR_antlr4_static "${_IMPORT_PREFIX}/lib/antlr4-runtime-static.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
