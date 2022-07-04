#pragma once

namespace Walnut {

	// Forward declaring Application here, because I want to be 
	// able to interact with the application from within a layer
	class Application;

	class Layer
	{
	public:
		virtual ~Layer() = default;

		virtual void OnAttach() {}
		virtual void OnDetach() {}

		virtual void OnUIRender(Application* app=nullptr) {}
	};

}