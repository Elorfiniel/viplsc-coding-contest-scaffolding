file(GLOB SOLUTIONS *.cpp)

foreach(SOLUTION ${SOLUTIONS})
  get_filename_component(SOLUTION_WE "${SOLUTION}" NAME_WE)
  add_executable(${SOLUTION_WE} ${SOLUTION})
  target_link_libraries(${SOLUTION_WE} PRIVATE project_compiler_flags)
endforeach()
