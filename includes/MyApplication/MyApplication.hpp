/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#ifndef CPPENTITYFRAMEWORK_MYAPPLICATION_MYAPPLICATION_HPP
#define CPPENTITYFRAMEWORK_MYAPPLICATION_MYAPPLICATION_HPP

namespace MyGame
{
	// A custom application.
	class MyApplication : public CppEntityComponent::Application
	{
	protected:
		virtual void onInitialize();
	};
}

#endif
