/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#include "PrecompiledHeader.hpp"
#include "Components/IComponent.hpp"
#include "Components/AbstractComponent.hpp"
#include "Application.hpp"
#include "MyApplication/MyApplication.hpp"

int _tmain(int argc, _TCHAR* argv[])
{
	MyGame::MyApplication application;

	return application.run();
}

