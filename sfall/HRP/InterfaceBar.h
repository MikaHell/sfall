/*
 *    sfall
 *    Copyright (C) 2008-2021  The sfall team
 *
 */

#pragma once

namespace sfall
{

class IFaceBar {
public:
	static void init();

	static long IFACE_BAR_MODE;
	static long IFACE_BAR_SIDE_ART;
	static long IFACE_BAR_WIDTH;
	static bool IFACE_BAR_SIDES_ORI;
	static long ALTERNATE_AMMO_METRE;

	static long display_width;
	static char* display_string_buf;

	static bool UseExpandAPBar;

	static void Hide();
	static void Show();
};

}