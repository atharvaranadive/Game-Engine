#pragma once

#include <iostream>
#include <memory>
#include <utility>
#include <algorithm>
#include <functional>

#include <sstream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

#include "GameEngine/Log.h"

#ifdef EN_PLATFORM_WINDOWS
	#ifndef NOMINMAX
			// See github.com/skypjack/entt/wiki/Frequently-Asked-Questions#warning-c4003-the-min-the-max-and-the-macro
		#define NOMINMAX
	#endif
#endif

#ifdef EN_PLATFORM_WINDOWS
	#include <Windows.h>
#endif


