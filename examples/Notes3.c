void	usa_menu(void)
{
	u32 index;
	
	index = new_unselectable_entry("ACNL Cheats 2.3");//USA
	set_note("Open menu at title screen or indoors.", index);
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
		index = new_entry("Destroy All Weeds", weeder_usa);//R+A Cheats
		set_note("Enable one R+A cheat at a time.\n\nExecute one.\n\nThen go in and out of a house.", index);
        index = new_entry("Water All Flowers", quench_usa);
		set_note("Enable one R+A cheat at a time.\n\nExecute one.\n\nThen go in and out of a house.", index);
        index = new_entry("Grass", grass_usa);
		set_note("Enable one R+A cheat at a time.\n\nExecute one.\n\nThen go in and out of a house.", index);
        index = new_entry("Desert", desert_usa);
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
