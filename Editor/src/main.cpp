#include "Ember.h"

class Editor : public Ember::Application {

public:
    Editor() {
    }

    ~Editor() {
    }

};

Ember::Application *Ember::CreateApplication() {
    return new Editor();
}
