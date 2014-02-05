/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#ifndef CPPENTITYFRAMEWORK_APPLICATION_HPP
#define CPPENTITYFRAMEWORK_APPLICATION_HPP

namespace CppEntityComponent
{
	class ISubsystem;
	class Entity;

	class Application
	{
		typedef std::vector<ISubsystem*> SubsystemCollection;

	public:
		Application();
		~Application();

		void registerSubsystem(ISubsystem* subsystem);
		void unregisterSubsystem(ISubsystem* subsystem);

		int run();

		void addEntity(Entity* entity);

	protected:
		virtual void onInitialize();
		virtual void onTerminate();

	private:
		void addComponent(IComponent* component);

		void addAudioSubsystem();
		void addGameplaySubsystem();
		void addGraphicsSubsystem();
		void addNetworkSubsystem();

		SubsystemCollection subsystems;
	};
}

#endif
