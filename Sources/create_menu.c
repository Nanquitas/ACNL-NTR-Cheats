#include "cheats.h"

char	*builder_name = "itsRyan";

void	usa_menu(void)
{
	u32 index;
	
	new_unselectable_entry("ACNL Cheats 2.3");//USA
	new_unselectable_entry("Open menu at title screen or indoors only.");
	new_spoiler("Inventory Codes");
        	new_entry("Text to Item", text2item_usa);
        	new_entry("Duplication", duplicate_usa);
        exit_spoiler();
        index = new_spoiler("Movement Codes");
	set_note("Do not execute during big transistions!", index);
        	new_entry("Moon Jump", moonjump_usa);
        	new_entry("Teleport", teleport_usa);
        	new_entry("Coordinates Modifier", coord_usa);
        	new_entry("Speed Hack", speed_usa);
        	new_entry("Warping", warping_usa);
    	exit_spoiler();
        new_spoiler("Environment Codes");
        	new_entry("Seeder", seed_usa);
        	new_entry("Search and Replace", search_usa);
        	new_entry("Instant Tree", tree_usa);
        	index = new_radio_entry("Destroy All Weeds", weeder_usa);//R+A Cheats
        	set_note("Enable one R+A cheat at a time.\n\nExecute one.\n\nThen go in and out of a house.", index);
        	index = new_radio_entry("Water All Flowers", quench_usa);
        	set_note("Enable one R+A cheat at a time.\n\nExecute one.\n\nThen go in and out of a house.", index);
        	index = new_radio_entry("Grass", grass_usa);
        	set_note("Enable one R+A cheat at a time.\n\nExecute one.\n\nThen go in and out of a house.", index);
        	index = new_radioentry("Desert", desert_usa);
        	set_note("Enable one R+A cheat at a time.\n\nExecute one.\n\nThen go in and out of a house.", index);
    exit_spoiler();
    new_spoiler("Nookling Upgrades");
        new_radio_entry("T&T Mart", nook1_usa);
        new_radio_entry("Super T&T", nook2_usa);
        new_radio_entry("T.I.Y", nook3_usa);
        new_radio_entry("T&T Emporium", nook4_usa);//index 23
    exit_spoiler();
    new_spoiler("Appearance Codes");
        new_entry("Player 1 Max Tan", tan_usa);
    exit_spoiler();
}

void	eur_menu(void)
{
	u32 index;

	index = new_unselectable_entry("ACNL Cheats 2.3");//EUR
	set_note("Open menu at title screen or indoors.", index);
	new_spoiler("Inventory Codes");
		new_entry("Text to Item", text2item_eur);
		new_entry("Duplication", duplicate_eur);
	exit_spoiler();
	index = new_spoiler("Movement Codes");
	set_note("Do not execute during big transistions!", index);
		new_entry("Moon Jump", moonjump_eur);
		new_entry("Teleport", teleport_eur);
		new_entry("Coordinates Modifier", coord_eur);
		new_entry("Speed Hack", speed_eur);
		new_entry("Warping", warping_eur);
	exit_spoiler();
	index = new_spoiler("Environment Codes");
		new_entry("Seeder", seed_eur);
		new_entry("Search and Replace", search_eur);
		new_entry("Instant Tree", tree_eur);
		index = new_entry("Destroy All Weeds", weeder_eur);//R+A Cheats
		set_note("Enable one R+A cheat at a time.\n\nExecute one.\n\nThen go in and out of a house.", index);
        index = new_entry("Water All Flowers", quench_eur);
		set_note("Enable one R+A cheat at a time.\n\nExecute one.\n\nThen go in and out of a house.", index);
        index = new_entry("Grass", grass_eur);
		set_note("Enable one R+A cheat at a time.\n\nExecute one.\n\nThen go in and out of a house.", index);
        index = new_entry("Desert", desert_eur);
		set_note("Enable one R+A cheat at a time.\n\nExecute one.\n\nThen go in and out of a house.", index);
	exit_spoiler();
	new_spoiler("Nookling Upgrades");
		new_radio_entry("T&T Mart", nook1_eur);
		new_radio_entry("Super T&T", nook2_eur);
		new_radio_entry("T.I.Y", nook3_eur);
		new_radio_entry("T&T Emporium", nook4_eur);//index 23
	exit_spoiler();
	new_spoiler("Appearance Codes");
		new_entry("Player 1 Max Tan", tan_eur);
	exit_spoiler();
}

void	jap_menu(void)
{
	u32 index;
	
	index = new_unselectable_entry("ACNL Cheats 2.3");//JAP
	set_note("Open menu at title screen or indoors.", index);
	new_spoiler("Inventory Codes");
		new_entry("Text to Item", text2item_jap);
		new_entry("Duplication", duplicate_jap);
	exit_spoiler();
	index = new_spoiler("Movement Codes");
	set_note("Do not execute during big transistions!", index);
		new_entry("Moon Jump", moonjump_jap);
		new_entry("Teleport", teleport_jap);
		new_entry("Coordinates Modifier", coord_jap);
		new_entry("Speed Hack", speed_jap);
		new_entry("Warping", warping_jap);
	exit_spoiler();
	new_spoiler("Environment Codes");
		new_entry("Seeder", seed_jap);
		new_entry("Search and Replace", search_jap);
		new_entry("Instant Tree", tree_jap);
		index = new_entry("Destroy All Weeds", weeder_jap);//R+A Cheats
		set_note("Enable one R+A cheat at a time.\n\nExecute one.\n\nThen go in and out of a house.", index);
        index = new_entry("Water All Flowers", quench_jap);
		set_note("Enable one R+A cheat at a time.\n\nExecute one.\n\nThen go in and out of a house.", index);
        index = new_entry("Grass", grass_jap);
		set_note("Enable one R+A cheat at a time.\n\nExecute one.\n\nThen go in and out of a house.", index);
        index = new_entry("Desert", desert_jap);
		set_note("Enable one R+A cheat at a time.\n\nExecute one.\n\nThen go in and out of a house.", index);
	exit_spoiler();
	new_spoiler("Nookling Upgrades");
		new_radio_entry("T&T Mart", nook1_jap);
		new_radio_entry("Super T&T", nook2_jap);
		new_radio_entry("T.I.Y", nook3_jap);
		new_radio_entry("T&T Emporium", nook4_jap);//index 23
	exit_spoiler();
	new_spoiler("Appearance Codes");
		new_entry("Player 1 Max Tan", tan_jap);
	exit_spoiler();
}

/*
** USA: 00040000 00086300
** EUR: 00040000 00086400
** JAP: 00040000 00086200
*/
void	my_menus(void)
{
	u32	tid;
	
	set_hid_address(0x10002000); //This is in order to unlock the advanced HID capabilities such as Touchscreen and the stick (No N3DS hid for the moment)
	tid = get_tid_low();
	if (tid == 0x86300)
		usa_menu();
	else if (tid == 0x86400)
		eur_menu();
	else if (tid == 0x86200)
		jap_menu();
	else
	{
		new_unselectable_entry("Unsupported ID");
		new_unselectable_entry("!!! Title id unrecognized !!!");
		new_unselectable_entry("!!! You need either       !!!");
		new_unselectable_entry("!!! 00040000 00086200     !!!");
		new_unselectable_entry("!!! or                    !!!");
		new_unselectable_entry("!!! 00040000 00086300     !!!");
		new_unselectable_entry("!!! or                    !!!");
		new_unselectable_entry("!!! 00040000 00086400     !!!");
	}

}
