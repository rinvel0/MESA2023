#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "MbedTLS::mbedcrypto" for configuration "RelWithDebInfo"
set_property(TARGET MbedTLS::mbedcrypto APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(MbedTLS::mbedcrypto PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/hiawatha/libmbedcrypto.so.3.1.0"
  IMPORTED_SONAME_RELWITHDEBINFO "libmbedcrypto.so.11"
  )

list(APPEND _IMPORT_CHECK_TARGETS MbedTLS::mbedcrypto )
list(APPEND _IMPORT_CHECK_FILES_FOR_MbedTLS::mbedcrypto "${_IMPORT_PREFIX}/lib/hiawatha/libmbedcrypto.so.3.1.0" )

# Import target "MbedTLS::mbedx509" for configuration "RelWithDebInfo"
set_property(TARGET MbedTLS::mbedx509 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(MbedTLS::mbedx509 PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/hiawatha/libmbedx509.so.3.1.0"
  IMPORTED_SONAME_RELWITHDEBINFO "libmbedx509.so.4"
  )

list(APPEND _IMPORT_CHECK_TARGETS MbedTLS::mbedx509 )
list(APPEND _IMPORT_CHECK_FILES_FOR_MbedTLS::mbedx509 "${_IMPORT_PREFIX}/lib/hiawatha/libmbedx509.so.3.1.0" )

# Import target "MbedTLS::mbedtls" for configuration "RelWithDebInfo"
set_property(TARGET MbedTLS::mbedtls APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(MbedTLS::mbedtls PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/hiawatha/libmbedtls.so.3.1.0"
  IMPORTED_SONAME_RELWITHDEBINFO "libmbedtls.so.17"
  )

list(APPEND _IMPORT_CHECK_TARGETS MbedTLS::mbedtls )
list(APPEND _IMPORT_CHECK_FILES_FOR_MbedTLS::mbedtls "${_IMPORT_PREFIX}/lib/hiawatha/libmbedtls.so.3.1.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
