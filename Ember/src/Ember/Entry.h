#ifndef EMBER_ENTRY_H
#define EMBER_ENTRY_H

extern Ember::Application* Ember::CreateApplication();

int main(int argc, char** argv) {
    Ember::Log::Init();
    EMBER_CORE_INFO("Initialised logging subsystem");

    auto app = Ember::CreateApplication();
    app->Run();
    delete app;
}

#endif //EMBER_ENTRY_H