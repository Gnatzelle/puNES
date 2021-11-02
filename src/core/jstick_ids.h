/*
 *  Copyright (C) 2010-2021 Fabio Cavallo (aka FHorse)
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef JSTICK_IDS_H_
#define JSTICK_IDS_H_

#define MAKE_CONTROLLER_ID(vid, pid) vid, pid
#define k_eControllerType_XBox360Controller JS_SC_MS_XBOX_360_GAMEPAD
#define k_eControllerType_XBoxOneController JS_SC_MS_XBOX_ONE_GAMEPAD

enum _js_gamepad_type {
	JS_SC_NONE,
	JS_SC_VALVE_STEAM_GAMEPAD,
	JS_SC_MS_XBOX_360_GAMEPAD,
	JS_SC_MS_XBOX_ONE_GAMEPAD,
	JS_SC_SONY_DUALSHOCK4_GAMEPAD,
};
enum _js_usb_vendor_id {
	JS_USB_VENDOR_ID_VALVE = 0x28DE
};
enum _js_usb_product_id {
	JS_USB_PID_STEAM_VIRTUAL_GAMEPAD = 0x11FF
};

typedef struct _js_gamepad {
	long int vendor_id;
	long int product_id;
	enum _js_gamepad_type type;
	const char *desc;
} _js_gamepad;

// Thx to SDL2.0 for this list
static const _js_gamepad js_gamepads_list[] =
{
	{ 0x28DE, 0x1102, JS_SC_VALVE_STEAM_GAMEPAD, NULL },

	{ MAKE_CONTROLLER_ID( 0x0079, 0x18d4 ), k_eControllerType_XBox360Controller, NULL },	// GPD Win 2 X-Box Controller
	{ MAKE_CONTROLLER_ID( 0x03eb, 0xff02 ), k_eControllerType_XBox360Controller, NULL },	// Wooting Two
	{ MAKE_CONTROLLER_ID( 0x044f, 0xb326 ), k_eControllerType_XBox360Controller, NULL },	// Thrustmaster Gamepad GP XID
	{ MAKE_CONTROLLER_ID( 0x045e, 0x028e ), k_eControllerType_XBox360Controller, "Xbox 360 Controller" },	// Microsoft X-Box 360 pad
	{ MAKE_CONTROLLER_ID( 0x045e, 0x028f ), k_eControllerType_XBox360Controller, "Xbox 360 Controller" },	// Microsoft X-Box 360 pad v2
	{ MAKE_CONTROLLER_ID( 0x045e, 0x0291 ), k_eControllerType_XBox360Controller, "Xbox 360 Wireless Controller" },	// Xbox 360 Wireless Receiver (XBOX)
	{ MAKE_CONTROLLER_ID( 0x045e, 0x02a0 ), k_eControllerType_XBox360Controller, NULL },	// Microsoft X-Box 360 Big Button IR
	{ MAKE_CONTROLLER_ID( 0x045e, 0x02a1 ), k_eControllerType_XBox360Controller, NULL },	// Microsoft X-Box 360 Wireless Controller with XUSB driver on Windows
	{ MAKE_CONTROLLER_ID( 0x045e, 0x02a9 ), k_eControllerType_XBox360Controller, "Xbox 360 Wireless Controller" },	// Xbox 360 Wireless Receiver (third party knockoff)
	{ MAKE_CONTROLLER_ID( 0x045e, 0x0719 ), k_eControllerType_XBox360Controller, "Xbox 360 Wireless Controller" },	// Xbox 360 Wireless Receiver
	{ MAKE_CONTROLLER_ID( 0x046d, 0xc21d ), k_eControllerType_XBox360Controller, NULL },	// Logitech Gamepad F310
	{ MAKE_CONTROLLER_ID( 0x046d, 0xc21e ), k_eControllerType_XBox360Controller, NULL },	// Logitech Gamepad F510
	{ MAKE_CONTROLLER_ID( 0x046d, 0xc21f ), k_eControllerType_XBox360Controller, NULL },	// Logitech Gamepad F710
	{ MAKE_CONTROLLER_ID( 0x046d, 0xc242 ), k_eControllerType_XBox360Controller, NULL },	// Logitech Chillstream Controller
	{ MAKE_CONTROLLER_ID( 0x056e, 0x2004 ), k_eControllerType_XBox360Controller, NULL },	// Elecom JC-U3613M
	{ MAKE_CONTROLLER_ID( 0x06a3, 0xf51a ), k_eControllerType_XBox360Controller, NULL },	// Saitek P3600
	{ MAKE_CONTROLLER_ID( 0x0738, 0x4716 ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz Wired Xbox 360 Controller
	{ MAKE_CONTROLLER_ID( 0x0738, 0x4718 ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz Street Fighter IV FightStick SE
	{ MAKE_CONTROLLER_ID( 0x0738, 0x4726 ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz Xbox 360 Controller
	{ MAKE_CONTROLLER_ID( 0x0738, 0x4728 ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz Street Fighter IV FightPad
	{ MAKE_CONTROLLER_ID( 0x0738, 0x4736 ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz MicroCon Gamepad
	{ MAKE_CONTROLLER_ID( 0x0738, 0x4738 ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz Wired Xbox 360 Controller (SFIV)
	{ MAKE_CONTROLLER_ID( 0x0738, 0x4740 ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz Beat Pad
	{ MAKE_CONTROLLER_ID( 0x0738, 0xb726 ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz Xbox controller - MW2
	{ MAKE_CONTROLLER_ID( 0x0738, 0xbeef ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz JOYTECH NEO SE Advanced GamePad
	{ MAKE_CONTROLLER_ID( 0x0738, 0xcb02 ), k_eControllerType_XBox360Controller, NULL },	// Saitek Cyborg Rumble Pad - PC/Xbox 360
	{ MAKE_CONTROLLER_ID( 0x0738, 0xcb03 ), k_eControllerType_XBox360Controller, NULL },	// Saitek P3200 Rumble Pad - PC/Xbox 360
	{ MAKE_CONTROLLER_ID( 0x0738, 0xf738 ), k_eControllerType_XBox360Controller, NULL },	// Super SFIV FightStick TE S
	{ MAKE_CONTROLLER_ID( 0x0955, 0x7210 ), k_eControllerType_XBox360Controller, NULL },	// Nvidia Shield local controller
	{ MAKE_CONTROLLER_ID( 0x0955, 0xb400 ), k_eControllerType_XBox360Controller, NULL },	// NVIDIA Shield streaming controller
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0105 ), k_eControllerType_XBox360Controller, NULL },	// HSM3 Xbox360 dancepad
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0113 ), k_eControllerType_XBox360Controller, "PDP Xbox 360 Afterglow" },	// PDP Afterglow Gamepad for Xbox 360
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x011f ), k_eControllerType_XBox360Controller, "PDP Xbox 360 Rock Candy" },	// PDP Rock Candy Gamepad for Xbox 360
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0125 ), k_eControllerType_XBox360Controller, "PDP INJUSTICE FightStick" },	// PDP INJUSTICE FightStick for Xbox 360
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0127 ), k_eControllerType_XBox360Controller, "PDP INJUSTICE FightPad" },	// PDP INJUSTICE FightPad for Xbox 360
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0131 ), k_eControllerType_XBox360Controller, "PDP EA Soccer Controller" },	// PDP EA Soccer Gamepad
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0133 ), k_eControllerType_XBox360Controller, "PDP Battlefield 4 Controller" },	// PDP Battlefield 4 Gamepad
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0143 ), k_eControllerType_XBox360Controller, "PDP MK X Fight Stick" },	// PDP MK X Fight Stick for Xbox 360
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0147 ), k_eControllerType_XBox360Controller, "PDP Xbox 360 Marvel Controller" },	// PDP Marvel Controller for Xbox 360
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0201 ), k_eControllerType_XBox360Controller, "PDP Xbox 360 Controller" },	// PDP Gamepad for Xbox 360
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0213 ), k_eControllerType_XBox360Controller, "PDP Xbox 360 Afterglow" },	// PDP Afterglow Gamepad for Xbox 360
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x021f ), k_eControllerType_XBox360Controller, "PDP Xbox 360 Rock Candy" },	// PDP Rock Candy Gamepad for Xbox 360
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0301 ), k_eControllerType_XBox360Controller, "PDP Xbox 360 Controller" },	// PDP Gamepad for Xbox 360
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0313 ), k_eControllerType_XBox360Controller, "PDP Xbox 360 Afterglow" },	// PDP Afterglow Gamepad for Xbox 360
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0314 ), k_eControllerType_XBox360Controller, "PDP Xbox 360 Afterglow" },	// PDP Afterglow Gamepad for Xbox 360
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0401 ), k_eControllerType_XBox360Controller, "PDP Xbox 360 Controller" },	// PDP Gamepad for Xbox 360
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0413 ), k_eControllerType_XBox360Controller, NULL },	// PDP Afterglow AX.1 (unlisted)
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0501 ), k_eControllerType_XBox360Controller, NULL },	// PDP Xbox 360 Controller (unlisted)
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0xf900 ), k_eControllerType_XBox360Controller, NULL },	// PDP Afterglow AX.1 (unlisted)
	{ MAKE_CONTROLLER_ID( 0x0f0d, 0x000a ), k_eControllerType_XBox360Controller, NULL },	// Hori Co. DOA4 FightStick
	{ MAKE_CONTROLLER_ID( 0x0f0d, 0x000c ), k_eControllerType_XBox360Controller, NULL },	// Hori PadEX Turbo
	{ MAKE_CONTROLLER_ID( 0x0f0d, 0x000d ), k_eControllerType_XBox360Controller, NULL },	// Hori Fighting Stick EX2
	{ MAKE_CONTROLLER_ID( 0x0f0d, 0x0016 ), k_eControllerType_XBox360Controller, NULL },	// Hori Real Arcade Pro.EX
	{ MAKE_CONTROLLER_ID( 0x0f0d, 0x001b ), k_eControllerType_XBox360Controller, NULL },	// Hori Real Arcade Pro VX
	{ MAKE_CONTROLLER_ID( 0x0f0d, 0x008c ), k_eControllerType_XBox360Controller, NULL },	// Hori Real Arcade Pro 4
	{ MAKE_CONTROLLER_ID( 0x0f0d, 0x00db ), k_eControllerType_XBox360Controller, "HORI Slime Controller" },	// Hori Dragon Quest Slime Controller
	{ MAKE_CONTROLLER_ID( 0x1038, 0x1430 ), k_eControllerType_XBox360Controller, "SteelSeries Stratus Duo" },	// SteelSeries Stratus Duo
	{ MAKE_CONTROLLER_ID( 0x1038, 0x1431 ), k_eControllerType_XBox360Controller, "SteelSeries Stratus Duo" },	// SteelSeries Stratus Duo
	{ MAKE_CONTROLLER_ID( 0x1038, 0xb360 ), k_eControllerType_XBox360Controller, NULL },	// SteelSeries Nimbus/Stratus XL
	{ MAKE_CONTROLLER_ID( 0x11c9, 0x55f0 ), k_eControllerType_XBox360Controller, NULL },	// Nacon GC-100XF
	{ MAKE_CONTROLLER_ID( 0x12ab, 0x0004 ), k_eControllerType_XBox360Controller, NULL },	// Honey Bee Xbox360 dancepad
	{ MAKE_CONTROLLER_ID( 0x12ab, 0x0301 ), k_eControllerType_XBox360Controller, NULL },	// PDP AFTERGLOW AX.1
	{ MAKE_CONTROLLER_ID( 0x12ab, 0x0303 ), k_eControllerType_XBox360Controller, NULL },	// Mortal Kombat Klassic FightStick
	{ MAKE_CONTROLLER_ID( 0x1430, 0x02a0 ), k_eControllerType_XBox360Controller, NULL },	// RedOctane Controller Adapter
	{ MAKE_CONTROLLER_ID( 0x1430, 0x4748 ), k_eControllerType_XBox360Controller, NULL },	// RedOctane Guitar Hero X-plorer
	{ MAKE_CONTROLLER_ID( 0x1430, 0xf801 ), k_eControllerType_XBox360Controller, NULL },	// RedOctane Controller
	{ MAKE_CONTROLLER_ID( 0x146b, 0x0601 ), k_eControllerType_XBox360Controller, NULL },	// BigBen Interactive XBOX 360 Controller
//	{ MAKE_CONTROLLER_ID( 0x1532, 0x0037 ), k_eControllerType_XBox360Controller, NULL },	// Razer Sabertooth
	{ MAKE_CONTROLLER_ID( 0x15e4, 0x3f00 ), k_eControllerType_XBox360Controller, NULL },	// Power A Mini Pro Elite
	{ MAKE_CONTROLLER_ID( 0x15e4, 0x3f0a ), k_eControllerType_XBox360Controller, NULL },	// Xbox Airflo wired controller
	{ MAKE_CONTROLLER_ID( 0x15e4, 0x3f10 ), k_eControllerType_XBox360Controller, NULL },	// Batarang Xbox 360 controller
	{ MAKE_CONTROLLER_ID( 0x162e, 0xbeef ), k_eControllerType_XBox360Controller, NULL },	// Joytech Neo-Se Take2
	{ MAKE_CONTROLLER_ID( 0x1689, 0xfd00 ), k_eControllerType_XBox360Controller, NULL },	// Razer Onza Tournament Edition
	{ MAKE_CONTROLLER_ID( 0x1689, 0xfd01 ), k_eControllerType_XBox360Controller, NULL },	// Razer Onza Classic Edition
	{ MAKE_CONTROLLER_ID( 0x1689, 0xfe00 ), k_eControllerType_XBox360Controller, NULL },	// Razer Sabertooth
	{ MAKE_CONTROLLER_ID( 0x1949, 0x041a ), k_eControllerType_XBox360Controller, "Amazon Luna Controller" },	// Amazon Luna Controller
	{ MAKE_CONTROLLER_ID( 0x1bad, 0x0002 ), k_eControllerType_XBox360Controller, NULL },	// Harmonix Rock Band Guitar
	{ MAKE_CONTROLLER_ID( 0x1bad, 0x0003 ), k_eControllerType_XBox360Controller, NULL },	// Harmonix Rock Band Drumkit
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf016 ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz Xbox 360 Controller
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf018 ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz Street Fighter IV SE Fighting Stick
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf019 ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz Brawlstick for Xbox 360
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf021 ), k_eControllerType_XBox360Controller, NULL },	// Mad Cats Ghost Recon FS GamePad
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf023 ), k_eControllerType_XBox360Controller, NULL },	// MLG Pro Circuit Controller (Xbox)
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf025 ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz Call Of Duty
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf027 ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz FPS Pro
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf028 ), k_eControllerType_XBox360Controller, NULL },	// Street Fighter IV FightPad
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf02e ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz Fightpad
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf036 ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz MicroCon GamePad Pro
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf038 ), k_eControllerType_XBox360Controller, NULL },	// Street Fighter IV FightStick TE
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf039 ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz MvC2 TE
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf03a ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz SFxT Fightstick Pro
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf03d ), k_eControllerType_XBox360Controller, NULL },	// Street Fighter IV Arcade Stick TE - Chun Li
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf03e ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz MLG FightStick TE
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf03f ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz FightStick SoulCaliber
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf042 ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz FightStick TES+
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf080 ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz FightStick TE2
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf501 ), k_eControllerType_XBox360Controller, NULL },	// HoriPad EX2 Turbo
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf502 ), k_eControllerType_XBox360Controller, NULL },	// Hori Real Arcade Pro.VX SA
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf503 ), k_eControllerType_XBox360Controller, NULL },	// Hori Fighting Stick VX
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf504 ), k_eControllerType_XBox360Controller, NULL },	// Hori Real Arcade Pro. EX
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf505 ), k_eControllerType_XBox360Controller, NULL },	// Hori Fighting Stick EX2B
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf506 ), k_eControllerType_XBox360Controller, NULL },	// Hori Real Arcade Pro.EX Premium VLX
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf900 ), k_eControllerType_XBox360Controller, NULL },	// Harmonix Xbox 360 Controller
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf901 ), k_eControllerType_XBox360Controller, NULL },	// Gamestop Xbox 360 Controller
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf902 ), k_eControllerType_XBox360Controller, NULL },	// Mad Catz Gamepad2
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf903 ), k_eControllerType_XBox360Controller, NULL },	// Tron Xbox 360 controller
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf904 ), k_eControllerType_XBox360Controller, NULL },	// PDP Versus Fighting Pad
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xf906 ), k_eControllerType_XBox360Controller, NULL },	// MortalKombat FightStick
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xfa01 ), k_eControllerType_XBox360Controller, NULL },	// MadCatz GamePad
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xfd00 ), k_eControllerType_XBox360Controller, NULL },	// Razer Onza TE
	{ MAKE_CONTROLLER_ID( 0x1bad, 0xfd01 ), k_eControllerType_XBox360Controller, NULL },	// Razer Onza
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x5000 ), k_eControllerType_XBox360Controller, NULL },	// Razer Atrox Arcade Stick
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x5300 ), k_eControllerType_XBox360Controller, NULL },	// PowerA MINI PROEX Controller
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x5303 ), k_eControllerType_XBox360Controller, NULL },	// Xbox Airflo wired controller
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x530a ), k_eControllerType_XBox360Controller, NULL },	// Xbox 360 Pro EX Controller
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x531a ), k_eControllerType_XBox360Controller, NULL },	// PowerA Pro Ex
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x5397 ), k_eControllerType_XBox360Controller, NULL },	// FUS1ON Tournament Controller
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x5500 ), k_eControllerType_XBox360Controller, NULL },	// Hori XBOX 360 EX 2 with Turbo
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x5501 ), k_eControllerType_XBox360Controller, NULL },	// Hori Real Arcade Pro VX-SA
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x5502 ), k_eControllerType_XBox360Controller, NULL },	// Hori Fighting Stick VX Alt
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x5503 ), k_eControllerType_XBox360Controller, NULL },	// Hori Fighting Edge
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x5506 ), k_eControllerType_XBox360Controller, NULL },	// Hori SOULCALIBUR V Stick
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x550d ), k_eControllerType_XBox360Controller, NULL },	// Hori GEM Xbox controller
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x550e ), k_eControllerType_XBox360Controller, NULL },	// Hori Real Arcade Pro V Kai 360
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x5508 ), k_eControllerType_XBox360Controller, NULL },	// Hori PAD A
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x5510 ), k_eControllerType_XBox360Controller, NULL },	// Hori Fighting Commander ONE
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x5b00 ), k_eControllerType_XBox360Controller, NULL },	// ThrustMaster Ferrari Italia 458 Racing Wheel
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x5b02 ), k_eControllerType_XBox360Controller, NULL },	// Thrustmaster, Inc. GPX Controller
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x5b03 ), k_eControllerType_XBox360Controller, NULL },	// Thrustmaster Ferrari 458 Racing Wheel
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x5d04 ), k_eControllerType_XBox360Controller, NULL },	// Razer Sabertooth
	{ MAKE_CONTROLLER_ID( 0x24c6, 0xfafa ), k_eControllerType_XBox360Controller, NULL },	// Aplay Controller
	{ MAKE_CONTROLLER_ID( 0x24c6, 0xfafb ), k_eControllerType_XBox360Controller, NULL },	// Aplay Controller
	{ MAKE_CONTROLLER_ID( 0x24c6, 0xfafc ), k_eControllerType_XBox360Controller, NULL },	// Afterglow Gamepad 1
	{ MAKE_CONTROLLER_ID( 0x24c6, 0xfafd ), k_eControllerType_XBox360Controller, NULL },	// Afterglow Gamepad 3
	{ MAKE_CONTROLLER_ID( 0x24c6, 0xfafe ), k_eControllerType_XBox360Controller, NULL },	// Rock Candy Gamepad for Xbox 360

	{ MAKE_CONTROLLER_ID( 0x045e, 0x02d1 ), k_eControllerType_XBoxOneController, "Xbox One Controller" },	// Microsoft X-Box One pad
	{ MAKE_CONTROLLER_ID( 0x045e, 0x02dd ), k_eControllerType_XBoxOneController, "Xbox One Controller" },	// Microsoft X-Box One pad (Firmware 2015)
	{ MAKE_CONTROLLER_ID( 0x045e, 0x02e0 ), k_eControllerType_XBoxOneController, "Xbox One S Controller" },	// Microsoft X-Box One S pad (Bluetooth)
	{ MAKE_CONTROLLER_ID( 0x045e, 0x02e3 ), k_eControllerType_XBoxOneController, "Xbox One Elite Controller" },	// Microsoft X-Box One Elite pad
	{ MAKE_CONTROLLER_ID( 0x045e, 0x02ea ), k_eControllerType_XBoxOneController, "Xbox One S Controller" },	// Microsoft X-Box One S pad
	{ MAKE_CONTROLLER_ID( 0x045e, 0x02fd ), k_eControllerType_XBoxOneController, "Xbox One S Controller" },	// Microsoft X-Box One S pad (Bluetooth)
	{ MAKE_CONTROLLER_ID( 0x045e, 0x02ff ), k_eControllerType_XBoxOneController, NULL },	// Microsoft X-Box One controller with XBOXGIP driver on Windows
	{ MAKE_CONTROLLER_ID( 0x045e, 0x0b00 ), k_eControllerType_XBoxOneController, "Xbox One Elite 2 Controller" },	// Microsoft X-Box One Elite Series 2 pad
	{ MAKE_CONTROLLER_ID( 0x045e, 0x0b05 ), k_eControllerType_XBoxOneController, "Xbox One Elite 2 Controller" },	// Microsoft X-Box One Elite Series 2 pad (Bluetooth)
	{ MAKE_CONTROLLER_ID( 0x045e, 0x0b12 ), k_eControllerType_XBoxOneController, "Xbox Series X Controller" },	// Microsoft X-Box Series X pad
	{ MAKE_CONTROLLER_ID( 0x045e, 0x0b13 ), k_eControllerType_XBoxOneController, "Xbox Series X Controller" },	// Microsoft X-Box Series X pad (Bluetooth)
	{ MAKE_CONTROLLER_ID( 0x0738, 0x4a01 ), k_eControllerType_XBoxOneController, NULL },	// Mad Catz FightStick TE 2
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0139 ), k_eControllerType_XBoxOneController, "PDP Xbox One Afterglow" },	// PDP Afterglow Wired Controller for Xbox One
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x013B ), k_eControllerType_XBoxOneController, "PDP Xbox One Face-Off Controller" },	// PDP Face-Off Gamepad for Xbox One
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x013a ), k_eControllerType_XBoxOneController, NULL },	// PDP Xbox One Controller (unlisted)
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0145 ), k_eControllerType_XBoxOneController, "PDP MK X Fight Pad" },	// PDP MK X Fight Pad for Xbox One
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0146 ), k_eControllerType_XBoxOneController, "PDP Xbox One Rock Candy" },	// PDP Rock Candy Wired Controller for Xbox One
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x015b ), k_eControllerType_XBoxOneController, "PDP Fallout 4 Vault Boy Controller" },	// PDP Fallout 4 Vault Boy Wired Controller for Xbox One
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x015c ), k_eControllerType_XBoxOneController, "PDP Xbox One @Play Controller" },	// PDP @Play Wired Controller for Xbox One
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x015d ), k_eControllerType_XBoxOneController, "PDP Mirror's Edge Controller" },	// PDP Mirror's Edge Wired Controller for Xbox One
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x015f ), k_eControllerType_XBoxOneController, "PDP Metallic Controller" },	// PDP Metallic Wired Controller for Xbox One
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0160 ), k_eControllerType_XBoxOneController, "PDP NFL Face-Off Controller" },	// PDP NFL Official Face-Off Wired Controller for Xbox One
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0161 ), k_eControllerType_XBoxOneController, "PDP Xbox One Camo" },	// PDP Camo Wired Controller for Xbox One
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0162 ), k_eControllerType_XBoxOneController, "PDP Xbox One Controller" },	// PDP Wired Controller for Xbox One
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0163 ), k_eControllerType_XBoxOneController, "PDP Deliverer of Truth" },	// PDP Legendary Collection: Deliverer of Truth
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0164 ), k_eControllerType_XBoxOneController, "PDP Battlefield 1 Controller" },	// PDP Battlefield 1 Official Wired Controller for Xbox One
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0165 ), k_eControllerType_XBoxOneController, "PDP Titanfall 2 Controller" },	// PDP Titanfall 2 Official Wired Controller for Xbox One
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0166 ), k_eControllerType_XBoxOneController, "PDP Mass Effect: Andromeda Controller" },	// PDP Mass Effect: Andromeda Official Wired Controller for Xbox One
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0167 ), k_eControllerType_XBoxOneController, "PDP Halo Wars 2 Face-Off Controller" },	// PDP Halo Wars 2 Official Face-Off Wired Controller for Xbox One
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0205 ), k_eControllerType_XBoxOneController, "PDP Victrix Pro Fight Stick" },	// PDP Victrix Pro Fight Stick
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0206 ), k_eControllerType_XBoxOneController, "PDP Mortal Kombat Controller" },	// PDP Mortal Kombat 25 Anniversary Edition Stick (Xbox One)
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0246 ), k_eControllerType_XBoxOneController, "PDP Xbox One Rock Candy" },	// PDP Rock Candy Wired Controller for Xbox One
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0261 ), k_eControllerType_XBoxOneController, "PDP Xbox One Camo" },	// PDP Camo Wired Controller
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0262 ), k_eControllerType_XBoxOneController, "PDP Xbox One Controller" },	// PDP Wired Controller
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02a0 ), k_eControllerType_XBoxOneController, "PDP Xbox One Midnight Blue" },	// PDP Wired Controller for Xbox One - Midnight Blue
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02a1 ), k_eControllerType_XBoxOneController, "PDP Xbox One Verdant Green" },	// PDP Wired Controller for Xbox One - Verdant Green
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02a2 ), k_eControllerType_XBoxOneController, "PDP Xbox One Crimson Red" },	// PDP Wired Controller for Xbox One - Crimson Red
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02a3 ), k_eControllerType_XBoxOneController, "PDP Xbox One Arctic White" },	// PDP Wired Controller for Xbox One - Arctic White
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02a4 ), k_eControllerType_XBoxOneController, "PDP Xbox One Phantom Black" },	// PDP Wired Controller for Xbox One - Stealth Series | Phantom Black
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02a5 ), k_eControllerType_XBoxOneController, "PDP Xbox One Ghost White" },	// PDP Wired Controller for Xbox One - Stealth Series | Ghost White
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02a6 ), k_eControllerType_XBoxOneController, "PDP Xbox One Revenant Blue" },	// PDP Wired Controller for Xbox One - Stealth Series | Revenant Blue
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02a7 ), k_eControllerType_XBoxOneController, "PDP Xbox One Raven Black" },	// PDP Wired Controller for Xbox One - Raven Black
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02a8 ), k_eControllerType_XBoxOneController, "PDP Xbox One Arctic White" },	// PDP Wired Controller for Xbox One - Arctic White
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02a9 ), k_eControllerType_XBoxOneController, "PDP Xbox One Midnight Blue" },	// PDP Wired Controller for Xbox One - Midnight Blue
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02aa ), k_eControllerType_XBoxOneController, "PDP Xbox One Verdant Green" },	// PDP Wired Controller for Xbox One - Verdant Green
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02ab ), k_eControllerType_XBoxOneController, "PDP Xbox One Crimson Red" },	// PDP Wired Controller for Xbox One - Crimson Red
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02ac ), k_eControllerType_XBoxOneController, "PDP Xbox One Ember Orange" },	// PDP Wired Controller for Xbox One - Ember Orange
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02ad ), k_eControllerType_XBoxOneController, "PDP Xbox One Phantom Black" },	// PDP Wired Controller for Xbox One - Stealth Series | Phantom Black
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02ae ), k_eControllerType_XBoxOneController, "PDP Xbox One Ghost White" },	// PDP Wired Controller for Xbox One - Stealth Series | Ghost White
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02af ), k_eControllerType_XBoxOneController, "PDP Xbox One Revenant Blue" },	// PDP Wired Controller for Xbox One - Stealth Series | Revenant Blue
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02b0 ), k_eControllerType_XBoxOneController, "PDP Xbox One Raven Black" },	// PDP Wired Controller for Xbox One - Raven Black
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02b1 ), k_eControllerType_XBoxOneController, "PDP Xbox One Arctic White" },	// PDP Wired Controller for Xbox One - Arctic White
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02b3 ), k_eControllerType_XBoxOneController, "PDP Xbox One Afterglow" },	// PDP Afterglow Prismatic Wired Controller
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02b5 ), k_eControllerType_XBoxOneController, "PDP Xbox One GAMEware Controller" },	// PDP GAMEware Wired Controller Xbox One
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02b6 ), k_eControllerType_XBoxOneController, NULL },	// PDP One-Handed Joystick Adaptive Controller
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02bd ), k_eControllerType_XBoxOneController, "PDP Xbox One Royal Purple" },	// PDP Wired Controller for Xbox One - Royal Purple
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02be ), k_eControllerType_XBoxOneController, "PDP Xbox One Raven Black" },	// PDP Deluxe Wired Controller for Xbox One - Raven Black
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02bf ), k_eControllerType_XBoxOneController, "PDP Xbox One Midnight Blue" },	// PDP Deluxe Wired Controller for Xbox One - Midnight Blue
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02c0 ), k_eControllerType_XBoxOneController, "PDP Xbox One Phantom Black" },	// PDP Deluxe Wired Controller for Xbox One - Stealth Series | Phantom Black
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02c1 ), k_eControllerType_XBoxOneController, "PDP Xbox One Ghost White" },	// PDP Deluxe Wired Controller for Xbox One - Stealth Series | Ghost White
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02c2 ), k_eControllerType_XBoxOneController, "PDP Xbox One Revenant Blue" },	// PDP Deluxe Wired Controller for Xbox One - Stealth Series | Revenant Blue
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02c3 ), k_eControllerType_XBoxOneController, "PDP Xbox One Verdant Green" },	// PDP Deluxe Wired Controller for Xbox One - Verdant Green
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02c4 ), k_eControllerType_XBoxOneController, "PDP Xbox One Ember Orange" },	// PDP Deluxe Wired Controller for Xbox One - Ember Orange
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02c5 ), k_eControllerType_XBoxOneController, "PDP Xbox One Royal Purple" },	// PDP Deluxe Wired Controller for Xbox One - Royal Purple
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02c6 ), k_eControllerType_XBoxOneController, "PDP Xbox One Crimson Red" },	// PDP Deluxe Wired Controller for Xbox One - Crimson Red
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02c7 ), k_eControllerType_XBoxOneController, "PDP Xbox One Arctic White" },	// PDP Deluxe Wired Controller for Xbox One - Arctic White
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02c8 ), k_eControllerType_XBoxOneController, "PDP Kingdom Hearts Controller" },	// PDP Kingdom Hearts Wired Controller
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02c9 ), k_eControllerType_XBoxOneController, "PDP Xbox One Phantasm Red" },	// PDP Deluxe Wired Controller for Xbox One - Stealth Series | Phantasm Red
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02ca ), k_eControllerType_XBoxOneController, "PDP Xbox One Specter Violet" },	// PDP Deluxe Wired Controller for Xbox One - Stealth Series | Specter Violet
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02cb ), k_eControllerType_XBoxOneController, "PDP Xbox One Specter Violet" },	// PDP Wired Controller for Xbox One - Stealth Series | Specter Violet
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02cd ), k_eControllerType_XBoxOneController, "PDP Xbox One Blu-merang" },	// PDP Rock Candy Wired Controller for Xbox One - Blu-merang
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02ce ), k_eControllerType_XBoxOneController, "PDP Xbox One Cranblast" },	// PDP Rock Candy Wired Controller for Xbox One - Cranblast
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02cf ), k_eControllerType_XBoxOneController, "PDP Xbox One Aqualime" },	// PDP Rock Candy Wired Controller for Xbox One - Aqualime
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02d5 ), k_eControllerType_XBoxOneController, "PDP Xbox One Red Camo" },	// PDP Wired Controller for Xbox One - Red Camo
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0346 ), k_eControllerType_XBoxOneController, "PDP Xbox One RC Gamepad" },	// PDP RC Gamepad for Xbox One
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0446 ), k_eControllerType_XBoxOneController, "PDP Xbox One RC Gamepad" },	// PDP RC Gamepad for Xbox One
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02da ), k_eControllerType_XBoxOneController, "PDP Xbox Series X Afterglow" },	// PDP Xbox Series X Afterglow
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02d6 ), k_eControllerType_XBoxOneController, "Victrix Gambit Tournament Controller" },	// Victrix Gambit Tournament Controller
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x02d9 ), k_eControllerType_XBoxOneController, "PDP Xbox Series X Midnight Blue" },	// PDP Xbox Series X Midnight Blue
	{ MAKE_CONTROLLER_ID( 0x0f0d, 0x0063 ), k_eControllerType_XBoxOneController, NULL },	// Hori Real Arcade Pro Hayabusa (USA) Xbox One
	{ MAKE_CONTROLLER_ID( 0x0f0d, 0x0067 ), k_eControllerType_XBoxOneController, NULL },	// HORIPAD ONE
	{ MAKE_CONTROLLER_ID( 0x0f0d, 0x0078 ), k_eControllerType_XBoxOneController, NULL },	// Hori Real Arcade Pro V Kai Xbox One
	{ MAKE_CONTROLLER_ID( 0x0f0d, 0x00c5 ), k_eControllerType_XBoxOneController, NULL },	// HORI Fighting Commander
	{ MAKE_CONTROLLER_ID( 0x1532, 0x0a00 ), k_eControllerType_XBoxOneController, NULL },	// Razer Atrox Arcade Stick
	{ MAKE_CONTROLLER_ID( 0x1532, 0x0a03 ), k_eControllerType_XBoxOneController, NULL },	// Razer Wildcat
	{ MAKE_CONTROLLER_ID( 0x1532, 0x0a14 ), k_eControllerType_XBoxOneController, NULL },	// Razer Wolverine Ultimate
	{ MAKE_CONTROLLER_ID( 0x1532, 0x0a15 ), k_eControllerType_XBoxOneController, NULL },	// Razer Wolverine Tournament Edition
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x2001 ), k_eControllerType_XBoxOneController, "PowerA Xbox Series X Controller" },       // PowerA Xbox Series X EnWired Controller - Black Inline
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x2002 ), k_eControllerType_XBoxOneController, "PowerA Xbox Series X Controller" },       // PowerA Xbox Series X EnWired Controller Gray/White Inline
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x2003 ), k_eControllerType_XBoxOneController, "PowerA Xbox Series X Controller" },       // PowerA Xbox Series X EnWired Controller Green Inline
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x2004 ), k_eControllerType_XBoxOneController, "PowerA Xbox Series X Controller" },       // PowerA Xbox Series X EnWired Controller Pink inline
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x2005 ), k_eControllerType_XBoxOneController, "PowerA Xbox Series X Controller" },       // PowerA Xbox Series X Wired Controller Core - Black
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x2006 ), k_eControllerType_XBoxOneController, "PowerA Xbox Series X Controller" },       // PowerA Xbox Series X Wired Controller Core - White
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x2009 ), k_eControllerType_XBoxOneController, "PowerA Xbox Series X Controller" },       // PowerA Xbox Series X EnWired Controller Red inline
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x200a ), k_eControllerType_XBoxOneController, "PowerA Xbox Series X Controller" },       // PowerA Xbox Series X EnWired Controller Blue inline
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x200b ), k_eControllerType_XBoxOneController, "PowerA Xbox Series X Controller" },       // PowerA Xbox Series X EnWired Controller Camo Metallic Red
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x200c ), k_eControllerType_XBoxOneController, "PowerA Xbox Series X Controller" },       // PowerA Xbox Series X EnWired Controller Camo Metallic Blue
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x200d ), k_eControllerType_XBoxOneController, "PowerA Xbox Series X Controller" },       // PowerA Xbox Series X EnWired Controller Seafoam Fade
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x200e ), k_eControllerType_XBoxOneController, "PowerA Xbox Series X Controller" },       // PowerA Xbox Series X EnWired Controller Midnight Blue
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x200f ), k_eControllerType_XBoxOneController, "PowerA Xbox Series X Controller" },       // PowerA Xbox Series X EnWired Soldier Green
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x2011 ), k_eControllerType_XBoxOneController, "PowerA Xbox Series X Controller" },       // PowerA Xbox Series X EnWired - Metallic Ice
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x2012 ), k_eControllerType_XBoxOneController, "PowerA Xbox Series X Controller" },       // PowerA Xbox Series X Cuphead EnWired Controller - Mugman
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x2015 ), k_eControllerType_XBoxOneController, "PowerA Xbox Series X Controller" },       // PowerA Xbox Series X EnWired Controller - Blue Hint
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x2016 ), k_eControllerType_XBoxOneController, "PowerA Xbox Series X Controller" },       // PowerA Xbox Series X EnWired Controller - Green Hint
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x2017 ), k_eControllerType_XBoxOneController, "PowerA Xbox Series X Controller" },       // PowerA Xbox Series X EnWired Cntroller - Arctic Camo
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x2018 ), k_eControllerType_XBoxOneController, "PowerA Xbox Series X Controller" },       // PowerA Xbox Series X EnWired Controller Arc Lightning
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x2019 ), k_eControllerType_XBoxOneController, "PowerA Xbox Series X Controller" },       // PowerA Xbox Series X EnWired Controller Royal Purple
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x201a ), k_eControllerType_XBoxOneController, "PowerA Xbox Series X Controller" },       // PowerA Xbox Series X EnWired Controller Nebula
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x4001 ), k_eControllerType_XBoxOneController, "PowerA Fusion Pro 2 Controller" },	// PowerA Fusion Pro 2 Wired Controller (Xbox Series X style)
	{ MAKE_CONTROLLER_ID( 0x20d6, 0x4002 ), k_eControllerType_XBoxOneController, "PowerA Spectra Infinity Controller" },	// PowerA Spectra Infinity Wired Controller (Xbox Series X style)
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x541a ), k_eControllerType_XBoxOneController, NULL },	// PowerA Xbox One Mini Wired Controller
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x542a ), k_eControllerType_XBoxOneController, NULL },	// Xbox ONE spectra
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x543a ), k_eControllerType_XBoxOneController, "PowerA Xbox One Controller" },	// PowerA Xbox ONE liquid metal controller
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x551a ), k_eControllerType_XBoxOneController, NULL },	// PowerA FUSION Pro Controller
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x561a ), k_eControllerType_XBoxOneController, NULL },	// PowerA FUSION Controller
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x581a ), k_eControllerType_XBoxOneController, NULL },	// BDA XB1 Classic Controller
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x591a ), k_eControllerType_XBoxOneController, NULL },	// PowerA FUSION Pro Controller
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x592a ), k_eControllerType_XBoxOneController, NULL },	// BDA XB1 Spectra Pro
	{ MAKE_CONTROLLER_ID( 0x24c6, 0x791a ), k_eControllerType_XBoxOneController, NULL },	// PowerA Fusion Fight Pad
	{ MAKE_CONTROLLER_ID( 0x2e24, 0x0652 ), k_eControllerType_XBoxOneController, NULL },	// Hyperkin Duke
	{ MAKE_CONTROLLER_ID( 0x2e24, 0x1618 ), k_eControllerType_XBoxOneController, NULL },	// Hyperkin Duke
	{ MAKE_CONTROLLER_ID( 0x2e24, 0x1688 ), k_eControllerType_XBoxOneController, NULL },	// Hyperkin X91
	{ MAKE_CONTROLLER_ID( 0x146b, 0x0611 ), k_eControllerType_XBoxOneController, NULL },	// Xbox Controller Mode for NACON Revolution 3

	// These have been added via Minidump for unrecognized Xinput controller assert
	{ MAKE_CONTROLLER_ID( 0x0000, 0x0000 ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x045e, 0x02a2 ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller - Microsoft VID
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x1414 ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x0e6f, 0x0159 ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x24c6, 0xfaff ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x0f0d, 0x006d ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x0f0d, 0x00a4 ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x0079, 0x1832 ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x0079, 0x187f ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x0079, 0x1883 ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x03eb, 0xff01 ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x2c22, 0x2303 ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x0c12, 0x0ef8 ), k_eControllerType_XBox360Controller, NULL },	// Homemade fightstick based on brook pcb (with XInput driver??)
	{ MAKE_CONTROLLER_ID( 0x046d, 0x1000 ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x1345, 0x6006 ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller

	{ MAKE_CONTROLLER_ID( 0x056e, 0x2012 ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x146b, 0x0602 ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x0f0d, 0x00ae ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x046d, 0x0401 ), k_eControllerType_XBox360Controller, NULL },	// logitech xinput
	{ MAKE_CONTROLLER_ID( 0x046d, 0x0301 ), k_eControllerType_XBox360Controller, NULL },	// logitech xinput
	{ MAKE_CONTROLLER_ID( 0x046d, 0xcaa3 ), k_eControllerType_XBox360Controller, NULL },	// logitech xinput
	{ MAKE_CONTROLLER_ID( 0x046d, 0xc261 ), k_eControllerType_XBox360Controller, NULL },	// logitech xinput
	{ MAKE_CONTROLLER_ID( 0x046d, 0x0291 ), k_eControllerType_XBox360Controller, NULL },	// logitech xinput
	{ MAKE_CONTROLLER_ID( 0x0079, 0x18d3 ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x0f0d, 0x00b1 ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x0001, 0x0001 ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x0079, 0x188e ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x0079, 0x187c ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x0079, 0x189c ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x0079, 0x1874 ), k_eControllerType_XBox360Controller, NULL },	// Unknown Controller

	{ MAKE_CONTROLLER_ID( 0x2f24, 0x0050 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x2f24, 0x2e ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x9886, 0x24 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x2f24, 0x91 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x1430, 0x719 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xf0d, 0xed ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xf0d, 0xc0 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xe6f, 0x152 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xe6f, 0x2a7 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x46d, 0x1007 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xe6f, 0x2b8 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xe6f, 0x2a8 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x2c22, 0x2503 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x79, 0x18a1 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller

	/* Added from Minidumps 10-9-19 */
	{ MAKE_CONTROLLER_ID( 0x0,		0x6686 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x11ff,	0x511 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x12ab,	0x304 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x1430,	0x291 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x1430,	0x2a9 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x1430,	0x70b ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x146b,	0x604 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x146b,	0x605 ), k_eControllerType_XBoxOneController, NULL },	// NACON PS4 controller in Xbox mode - might also be other bigben brand xbox controllers
	{ MAKE_CONTROLLER_ID( 0x146b,	0x606 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x146b,	0x609 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x1bad,	0x28e ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x1bad,	0x2a0 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x1bad,	0x5500 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x20ab,	0x55ef ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x24c6,	0x5509 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x2516,	0x69 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x25b1,	0x360 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x2c22,	0x2203 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x2f24,	0x11 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x2f24,	0x53 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x2f24,	0xb7 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x46d,	0x0 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x46d,	0x1004 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x46d,	0x1008 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x46d,	0xf301 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x738,	0x2a0 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x738,	0x7263 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x738,	0xb738 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x738,	0xcb29 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x738,	0xf401 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x79,		0x18c2 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x79,		0x18c8 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x79,		0x18cf ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xc12,	0xe17 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xc12,	0xe1c ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xc12,	0xe22 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xc12,	0xe30 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xd2d2,	0xd2d2 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xd62,	0x9a1a ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xd62,	0x9a1b ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xe00,	0xe00 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xe6f,	0x12a ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xe6f,	0x2a1 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xe6f,	0x2a2 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xe6f,	0x2a5 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xe6f,	0x2b2 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xe6f,	0x2bd ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xe6f,	0x2bf ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xe6f,	0x2c0 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xe6f,	0x2c6 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xf0d,	0x97 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xf0d,	0xba ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xf0d,	0xd8 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xfff,	0x2a1 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x45e,	0x867 ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	// Added 12-17-2020
	{ MAKE_CONTROLLER_ID( 0x16d0,	0xf3f ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0x2f24,	0x8f ), k_eControllerType_XBoxOneController, NULL },	// Unknown Controller
	{ MAKE_CONTROLLER_ID( 0xe6f,	0xf501 ), k_eControllerType_XBoxOneController, NULL }	// Unknown Controller
};

#endif /* JSTICK_IDS_H_ */