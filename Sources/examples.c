Examples






Coordinate Modifier

void    coord_usa(void)
{
	static int	loc = 0;

	if (is_pressed(BUTTON_A))
	{
		loc = READU32(0x17321644);
	}
	if (loc == -1) //FFFFFFFF=outdoors
	{
		if (is_pressed(BUTTON_A + BUTTON_DD))
			add_to_address((void *)0x17321518, 0x00002800);
		if (is_pressed(BUTTON_A + BUTTON_DU))
			sub_to_address((void *)0x17321518, 0x00002800);
		if (is_pressed(BUTTON_A + BUTTON_DL))
			sub_to_address((void *)0x17321510, 0x00002000);
		if (is_pressed(BUTTON_A + BUTTON_DR))
			add_to_address((void *)0x17321510, 0x00002000);
	}
	else //if it's anything but FFFFFFFF then you're indoors
	{
		if (is_pressed(BUTTON_A + BUTTON_DD))
			add_to_address((void *)0x17321644, 0x00008000);
		if (is_pressed(BUTTON_A + BUTTON_DU))
			sub_to_address((void *)0x17321644, 0x00008000);
		if (is_pressed(BUTTON_A + BUTTON_DL))
			sub_to_address((void *)0x1732163c, 0x00008000);
		if (is_pressed(BUTTON_A + BUTTON_DR))
			add_to_address((void *)0x1732163c, 0x00008000);
	}
}






Pictures with Moon Jump

void    moonjump_usa(void)
{
	static int	loc = 0;
	
	if (is_pressed(BUTTON_L) && !(is_pressed(R)))

Menu

new_unselectable_entry("ACNL Cheats 2.2 B5");//USA
	spoiler = new_spoiler("Inventory Codes");
		new_spoiled_entry(spoiler, "Text to Item", text2item_usa);
		new_spoiled_entry(spoiler, "Duplication", duplicate_usa);
	spoiler = new_spoiler("Movement Codes");
		new_spoiled_entry(spoiler, "Moon Jump", moonjump_usa);
		new_spoiled_entry(spoiler, "Teleport", teleport_usa);
		new_spoiled_entry(spoiler, "Coordinates Modifier", coord_usa);
		new_spoiled_entry(spoiler, "Speed Hack", speed_usa);
	spoiler = new_spoiler("Environment Codes");
		new_spoiled_entry(spoiler, "Seeder", seed_usa);
		new_spoiled_entry(spoiler, "Search and Replace", search_usa);
		new_spoiled_entry(spoiler, "Instant Tree", tree_usa);
		new_spoiled_entry(spoiler, "Remove All Weeds", weeder_usa);
		new_spoiled_entry(spoiler, "Water All Flowers", quench_usa);
		new_spoiled_entry(spoiler, "Grass", grass_usa);
		new_spoiled_entry(spoiler, "Desert", desert_usa);
	spoiler = new_spoiler("Nookling Upgrades");
		new_spoiled_entry(spoiler, "T&T Mart", nook1_usa);
		new_spoiled_entry(spoiler, "Super T&T", nook2_usa);
		new_spoiled_entry(spoiler, "T.I.Y", nook3_usa);
		new_spoiled_entry(spoiler, "T&T Emporium", nook4_usa);//index 23
	spoiler = new_spoiler("Appearance Codes");
		new_spoiled_entry(spoiler, "Player 1 Max Tan", tan_usa);
		





Fixed Teleport
void    teleport_usa(void)
{
    static u32        indoor_X[3] = { 0 };
    static u32        indoor_Y[3] = { 0 };
    static u32        outdoor_X[3] = { 0 };
    static u32        outdoor_Y[3] = { 0 };
    int                loc;

    if (is_pressed(BUTTON_B + BUTTON_DU))
    {
        loc = READU32(0x17321644);
        if (loc == -1)
        {
            if (is_pressed(BUTTON_L)) //If L is pressed then save in slot3
            {
                outdoor_X[2] = READU32(0x17321510);
                outdoor_Y[2] = READU32(0x17321518);
            }
            else if (is_pressed(BUTTON_R)) //If R is pressed then save in slot2
            {
                outdoor_X[1] = READU32(0x17321510);
                outdoor_Y[1] = READU32(0x17321518);
            }
            else //If noting is pressed then save in slot0
            {
                outdoor_X[0] = READU32(0x17321510);
                outdoor_Y[0] = READU32(0x17321518);
            }
        }
        else
        {
            if (is_pressed(BUTTON_L)) //If L is pressed then save in slot3
            {
                indoor_X[2] = READU32(0x1732163c);
                indoor_Y[2] = READU32(0x17321644);
            }
            else if (is_pressed(BUTTON_R)) //If R is pressed then save in slot2
            {
                indoor_X[1] = READU32(0x1732163c);
                indoor_Y[1] = READU32(0x17321644);
            }
            else //If noting is pressed then save in slot0
            {
                indoor_X[0] = READU32(0x1732163c);
                indoor_Y[0] = READU32(0x17321644);
            }
        }
    }
    else if (is_pressed(BUTTON_B + BUTTON_DD))
    {
        loc = READU32(0x17321644);
        if (loc == -1)
        {
            if (is_pressed(BUTTON_L)) //If L is pressed then restore slot3
            {
                WRITEU32(0x17321510, outdoor_X[2]);
                WRITEU32(0x17321518, outdoor_Y[2]);
            }
            else if (is_pressed(BUTTON_R)) //If R is pressed then restore slot2
            {
                WRITEU32(0x17321510, outdoor_X[1]);
                WRITEU32(0x17321518, outdoor_Y[1]);
            }
            else //If noting is pressed then restore slot0
            {
                WRITEU32(0x17321510, outdoor_X[0]);
                WRITEU32(0x17321518, outdoor_Y[0]);
            }
        }
        else
        {
            if (is_pressed(BUTTON_L)) //If L is pressed then restore slot3
            {
                WRITEU32(0x1732163c, indoor_X[2]);
                WRITEU32(0x17321644, indoor_Y[2]);
            }
            else if (is_pressed(BUTTON_R)) //If R is pressed then restore slot2
            {
                WRITEU32(0x1732163c, indoor_X[1]);
                WRITEU32(0x17321644, indoor_Y[1]);
            }
            else //If noting is pressed then restore slot0
            {
                WRITEU32(0x1732163c, indoor_X[0]);
                WRITEU32(0x17321644, indoor_Y[0]);
            }
        }
    }
}

void    moonjump_usa(void)
{
    int    loc;
    if (!(any_is_pressed(R + B)) && is_pressed(BUTTON_L)) //it's better to test the negation first
    {
        loc = READU32(0x17321644);
        if (loc == -1)
        {
            WRITEU32(0x17321514, 0x43E00000);
        }
        else
        {
            WRITEU32(0x17321640, 0x44000000);
        }
    }
}





Fixed Duplication
void    duplicate_usa(void)
{
    u32        dupe = 0;
    u32        dupe0 = 0;
    u32        dupe1 = 0;
    u32        dupe2 = 0;
  
    if (!(any_is_pressed(L + B)) && is_pressed(BUTTON_R))
    {
        dupe = READU32(0x15FBEAD0);
        dupe0 = READU32(0xAF8C28); //online pointer0
        dupe1 = READU32(0xB02B38); //online pointer1
        dupe2 = READU32(0xB0CA48); //online pointer2
        WRITEU32(0x15FBEAD4, dupe);
        WRITEU32(0xAF8C2C, dupe0);
        WRITEU32(0xB02B3C, dupe1);
        WRITEU32(0xB0CA4C, dupe2);      
    }
}