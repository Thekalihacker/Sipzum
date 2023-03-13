#include <Sipzum.h>

class Sandbox : public Sipzum::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Sipzum::Application* Sipzum::CreateApplication() {
	return new Sandbox();
}