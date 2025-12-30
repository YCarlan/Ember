#ifndef EMBER_APPLICATION_H
#define EMBER_APPLICATION_H

namespace Ember {

    class Application {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    Application* CreateApplication();

}

#endif //EMBER_APPLICATION_H