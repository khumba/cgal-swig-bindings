MACRO(EXTRACT_CPP_AND_LIB_FILES)
  #recover cpp files to be compiled
  SET(object_files)
  SET(libstolinkwith)
  FOREACH(it ${ARGN})
    IF(${it} MATCHES ".*\\.cpp$")
      SET(object_files ${object_files} "${it}")
    ELSE(${it} MATCHES ".*\\.cpp$")
      SET(libstolinkwith ${libstolinkwith} "${it}")
    ENDIF(${it} MATCHES ".*\\.cpp$")
  ENDFOREACH(it)
ENDMACRO(EXTRACT_CPP_AND_LIB_FILES)


MACRO(ADD_SWIG_CGAL_LIBRARY libname)
  include_directories(${CMAKE_CURRENT_SOURCE_DIR})
  include_directories(BEFORE ${CMAKE_CURRENT_SOURCE_DIR}/../include)
  set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${COMMON_LIBRARIES_PATH}")
  set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${COMMON_LIBRARIES_PATH}")
  EXTRACT_CPP_AND_LIB_FILES(${ARGN}) 
  add_library(${libname} SHARED ${object_files})
  target_link_libraries(${libname} ${libstolinkwith})
ENDMACRO()

MACRO(ADD_SWIG_CGAL_JAVA_MODULE packagename)
  
  if (BUILD_JAVA AND JAVA_INCLUDE_PATH)
    SET (MODULENAME "CGAL_${packagename}")
    SET (INTERFACE_FILES  "CGAL_${packagename}.i")
    SET (JAVAPACKAGENAME "CGAL.${packagename}")
    SET (JAVABUILDPATH "${JAVA_OUTDIR_PREFIX}/CGAL/${packagename}")
    
    INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})
    INCLUDE_DIRECTORIES(BEFORE ${CMAKE_CURRENT_SOURCE_DIR}/../include)

    #recover cpp files to be compiled
    EXTRACT_CPP_AND_LIB_FILES(${ARGN})

    SET_SOURCE_FILES_PROPERTIES(${INTERFACE_FILES} PROPERTIES CPLUSPLUS ON)
    
    #Build bindings for java
    INCLUDE_DIRECTORIES(BEFORE ${JAVA_INCLUDE_PATH} ${JAVA_INCLUDE_PATH2})
    LINK_DIRECTORIES(${JAVALIBPATH})
    SET (CMAKE_SWIG_OUTDIR ${JAVABUILDPATH})
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/../User_packages/${packagename}/extensions.i")
      SET(CMAKE_SWIG_FLAGS -package ${JAVAPACKAGENAME} -DSWIG_CGAL_${packagename}_MODULE -DSWIG_CGAL_HAS_${packagename}_USER_PACKAGE)
    else()
      SET(CMAKE_SWIG_FLAGS -package ${JAVAPACKAGENAME} -DSWIG_CGAL_${packagename}_MODULE)
    endif()
    SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${JAVALIBPATH})
    SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${JAVALIBPATH})
    SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${JAVALIBPATH})
    SWIG_ADD_MODULE(${MODULENAME} java ${INTERFACE_FILES} ${object_files})
    #link all modules with CGAL_Java_cpp as many if not all need it for the iterators for example
    SWIG_LINK_LIBRARIES(${MODULENAME} ${libstolinkwith} CGAL_Java_cpp)
  endif()
ENDMACRO(ADD_SWIG_CGAL_JAVA_MODULE)

MACRO(ADD_SWIG_CGAL_PYTHON_MODULE packagename)
  SET (MODULENAME "CGAL_${packagename}")
  SET (INTERFACE_FILES  "CGAL_${packagename}.i")
  
  INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})
  INCLUDE_DIRECTORIES(BEFORE ${CMAKE_CURRENT_SOURCE_DIR}/../include)

  #recover cpp files to be compiled
  EXTRACT_CPP_AND_LIB_FILES(${ARGN})

  SET_SOURCE_FILES_PROPERTIES(${INTERFACE_FILES} PROPERTIES CPLUSPLUS ON)

  #Build bindings for python
  if(PYTHONLIBS_FOUND)
    INCLUDE_DIRECTORIES(${PYTHON_INCLUDE_DIRS})
    SET (CMAKE_SWIG_OUTDIR "${PYTHON_OUTDIR_PREFIX}/CGAL")
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/../User_packages/${packagename}/extensions.i")
      SET(CMAKE_SWIG_FLAGS  -DSWIG_CGAL_${packagename}_MODULE -DSWIG_CGAL_HAS_${packagename}_USER_PACKAGE)
    else()
      SET(CMAKE_SWIG_FLAGS  -DSWIG_CGAL_${packagename}_MODULE)
    endif()
    SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PYTHON_OUTDIR_PREFIX}/CGAL")
    SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PYTHON_OUTDIR_PREFIX}/CGAL")
    SET(CMAKE_MODULE_OUTPUT_DIRECTORY "${PYTHON_OUTDIR_PREFIX}/CGAL")
    SWIG_ADD_MODULE(${MODULENAME} python ${INTERFACE_FILES} ${object_files})
    SWIG_LINK_LIBRARIES(${MODULENAME} ${libstolinkwith})
    if ( LINK_PYTHON_LIBRARY )
      swig_link_libraries ( ${MODULENAME} ${PYTHON_LIBRARIES} )
    endif ()
  endif()
ENDMACRO(ADD_SWIG_CGAL_PYTHON_MODULE)

MACRO(ADD_SWIG_CGAL_RUBY_MODULE packagename)
  SET (MODULENAME "CGAL_${packagename}")
  SET (INTERFACE_FILES  "CGAL_${packagename}.i")
  
  INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})
  INCLUDE_DIRECTORIES(BEFORE ${CMAKE_CURRENT_SOURCE_DIR}/../include)

  #recover cpp files to be compiled
  EXTRACT_CPP_AND_LIB_FILES(${ARGN})

  SET_SOURCE_FILES_PROPERTIES(${INTERFACE_FILES} PROPERTIES CPLUSPLUS ON)

  #Build bindings for ruby
  if(RUBY_FOUND)
    INCLUDE_DIRECTORIES(${RUBY_INCLUDE_PATH})
    SET (CMAKE_SWIG_OUTDIR "${RUBY_OUTDIR_PREFIX}/CGAL")
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/../User_packages/${packagename}/extensions.i")
      SET(CMAKE_SWIG_FLAGS  -DSWIG_CGAL_${packagename}_MODULE -DSWIG_CGAL_HAS_${packagename}_USER_PACKAGE)
    else()
      SET(CMAKE_SWIG_FLAGS  -DSWIG_CGAL_${packagename}_MODULE)
    endif()
    SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${RUBY_OUTDIR_PREFIX}/CGAL")
    SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${RUBY_OUTDIR_PREFIX}/CGAL")
    SET(CMAKE_MODULE_OUTPUT_DIRECTORY "${RUBY_OUTDIR_PREFIX}/CGAL")
    SWIG_ADD_MODULE(${MODULENAME} ruby ${INTERFACE_FILES} ${object_files})
    SET_TARGET_PROPERTIES(${SWIG_MODULE_${MODULENAME}_REAL_NAME} PROPERTIES PREFIX "")

    SWIG_LINK_LIBRARIES(${MODULENAME} ${libstolinkwith} ${RUBY_LIBRARY})
  endif()
ENDMACRO(ADD_SWIG_CGAL_RUBY_MODULE)

MACRO(ADD_SWIG_CGAL_SCILAB_MODULE packagename)
  SET (MODULENAME "CGAL_${packagename}_Scilab")
  SET (INTERFACE_FILES  "CGAL_${packagename}.i")

  INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})
  INCLUDE_DIRECTORIES(BEFORE ${CMAKE_CURRENT_SOURCE_DIR}/../include)

  #recover cpp files to be compiled
  EXTRACT_CPP_AND_LIB_FILES(${ARGN})

  SET_SOURCE_FILES_PROPERTIES(${INTERFACE_FILES} PROPERTIES CPLUSPLUS ON)

  #Build bindings for scilab
  IF (BUILD_SCILAB)
    #Generate files needed for Scilab function renaming.
    ADD_CUSTOM_COMMAND(
      OUTPUT scilab-renames.i sciloader.sce
      MAIN_DEPENDENCY "${CMAKE_CURRENT_SOURCE_DIR}/scilab-renames.ren"
      COMMAND "${CMAKE_SOURCE_DIR}/tools/scilab-rename-gen.bash"
      --module-name ${packagename}
      --input "${CMAKE_CURRENT_SOURCE_DIR}/scilab-renames.ren"
      --out-swig scilab-renames.i
      --out-scilab sciloader.sce
      VERBATIM
      COMMENT "Generating Scilab renames for package ${packagename}"
      )

    #Create a SWIG module for Scilab.
    INCLUDE_DIRECTORIES("/usr/include/scilab")  # TODO Don't hardcode this path.
    #We don't use a custom SCILAB_OUTDIR_PREFIX like other languages do.  The
    #loader.sce for each package gets created in the current binary directory
    #("CGAL_SWIG/${packagename}/") seemingly regardless of CMAKE_SWIG_OUTDIR,
    #and it requires that the shared library containing the bindings be in the
    #same directory.
    SET (CMAKE_SWIG_OUTDIR "${CMAKE_CURRENT_BINARY_DIR}")
    SET (CMAKE_SWIG_FLAGS -module CGAL_${packagename}_Scilab -DSWIG_CGAL_${packagename}_MODULE)
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/../User_packages/${packagename}/extensions.i")
      SET(CMAKE_SWIG_FLAGS ${CMAKE_SWIG_FLAGS} -DSWIG_CGAL_HAS_${packagename}_USER_PACKAGE)
    endif()
    SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")
    SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")
    SET(CMAKE_MODULE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")
    SET(SWIG_MODULE_${MODULENAME}_EXTRA_DEPS scilab-renames.i)
    SWIG_ADD_MODULE(${MODULENAME} scilab ${INTERFACE_FILES} ${object_files})
    SWIG_LINK_LIBRARIES(${MODULENAME} ${libstolinkwith})
  ENDIF()
ENDMACRO(ADD_SWIG_CGAL_SCILAB_MODULE)
