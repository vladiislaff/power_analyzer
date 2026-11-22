idf_component_register(
    SRCS "main.cpp"
    PRIV_REQUIRES spi_flash
    REQUIRES mongoose
    INCLUDE_DIRS "."
    )
