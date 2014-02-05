/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#ifndef CPPENTITYFRAMEWORK_ENTITY_ENTITY_HPP
#define CPPENTITYFRAMEWORK_ENTITY_ENTITY_HPP

namespace CppEntityComponent
{
	class IComponent;

	class Entity
	{
	public:
		typedef std::vector<IComponent*> ComponentCollection;

		Entity();
		~Entity();
		
		bool isActive() const;
		void setActive(bool active);

		void update();

		void addComponent(IComponent* component);
		bool hasComponent(IComponent* component) const;
		void removeComponent(IComponent* component);
		ComponentCollection getComponents() const;

		template <class T>
		T* getComponent() const
		{
			for (ComponentCollection::const_iterator it = m_components.begin(); it != m_components.end(); ++it)
			{
				T* casted = (T*)(*it);
				if (casted != nullptr)
				{
					return casted;
				}
			}
			return nullptr;
		}

	private:
		ComponentCollection m_components;

		bool m_active;
	};
}

#endif
