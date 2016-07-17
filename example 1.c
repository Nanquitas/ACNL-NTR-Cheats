//Examples

//Fixed Coordinate Modifier

		if (is_pressed(BUTTON_A + BUTTON_DD))
			add_to_address((void *)xxxxxxxxxx, 0x00002800);
		if (is_pressed(BUTTON_A + BUTTON_DU))
			sub_to_address((void *)xxxxxxxxxx, 0x00002800);
		if (is_pressed(BUTTON_A + BUTTON_DL))
			sub_to_address((void *)xxxxxxxxxx, 0x00002000);
		if (is_pressed(BUTTON_A + BUTTON_DR))
			add_to_address((void *)xxxxxxxxxx, 0x00002000);
			
			
			
			
			
			
//Fixed Moon Jump

{
	static int	loc = 0;
	
	if (is_pressed(BUTTON_L) && !(is_pressed(R)))
	
	
	
	
	
	
//Fixed Teleport
    int                loc;

    if (is_pressed(BUTTON_B + BUTTON_DU))
    {
        loc = READU32(xxxxxxxxxx);
        if (loc == -1)
        {
            if (is_pressed(BUTTON_L)) //If L is pressed then save in slot3
		
//USA Teleport (0x17321644)		
	int                loc;

    if (is_pressed(BUTTON_B + BUTTON_DU))
    {
        loc = READU32(0x17321644);
        if (loc == -1)
        {
            if (is_pressed(BUTTON_L)) //If L is pressed then save in slot3
			
//EUR Teleport (0x17321C44)
	int                loc;

    if (is_pressed(BUTTON_B + BUTTON_DU))
    {
        loc = READU32(0x17321C44);
        if (loc == -1)
        {
            if (is_pressed(BUTTON_L)) //If L is pressed then save in slot3
			
//JAP Teleport (0x173B8CC4)
	int                loc;

    if (is_pressed(BUTTON_B + BUTTON_DU))
    {
        loc = READU32(0x173B8CC4);
        if (loc == -1)
        {
            if (is_pressed(BUTTON_L)) //If L is pressed then save in slot3
			
			
			
			
			
			
//Fixed Duplication

    if (!(any_is_pressed(L + B)) && is_pressed(BUTTON_R))
	
	
	
	
	
	
//USA Menu

void	usa_menu(void)
{
	u32 index;
	
	new_unselectable_entry("ACNL Cheats 2.2");//USA
	set_note("Open menu at title screen or indoors.", index);
	new_spoiler("Inventory Codes");
		new_entry("Text to Item", text2item_usa);
		new_entry("Duplication", duplicate_usa);
	exit_spoiler();
	new_spoiler("Movement Codes");
		new_entry("Moon Jump", moonjump_usa);
		new_entry("Teleport", teleport_usa);
		new_entry("Coordinates Modifier", coord_usa);
		new_entry("Speed Hack", speed_usa);
		set_note("Do not execute during big transistions!", index);
	exit_spoiler();
		new_spoiler("Enviroment Codes");
		new_entry("Seeder", seed_usa);
		new_entry("Search and Replace", search_usa);
		new_entry("Instant Tree", tree_usa);
		set_note("Enable one R+A cheat at a time.\n\nExecute one,\n\nthen go in and out of a house.", index);
		new_entry("Destroy All Weeds", weeder_usa);
		new_entry("Water All Flowers", quench_usa);
		new_entry("Grass", grass_usa);
		new_entry("Desert", desert_usa);
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