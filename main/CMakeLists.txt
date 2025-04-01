idf_component_register(SRCS "main.c"
                    INCLUDE_DIRS "."
                    REQUIRES driver)
                    
add_subdirectory(components/communicator)