file(GLOB MODEST_SRC
    ./source/mycore/*.c
    ./source/mycore/utils/*.c
    ./source/mycss/*.c
    ./source/mycss/*/*.c
    ./source/myencoding/*.c
    ./source/myfont/*.c
    ./source/myhtml/*.c
    ./source/myunicode/*.c
    ./source/myurl/*.c
    ./source/myport/posix/mycore/*.c
    ./source/myport/posix/mycore/utils/*.c
    ./source/modest/*.c
    ./source/modest/*/*.c
)

include_directories(./include)
add_library(modest ${MODEST_SRC})
