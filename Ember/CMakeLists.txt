add_library(Ember STATIC src/Ember.h src/Ember/Log/Log.cpp
        src/Ember/Log/Log.h
        src/Ember/Entry.h
        src/Ember/Application/Application.h
        src/Ember/Application/Application.cpp)
target_link_libraries(Ember PUBLIC spdlog::spdlog)
target_include_directories(Ember PUBLIC src)