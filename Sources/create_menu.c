#include "cheats.h"

char	*builder_name = "itsRyan";

extern u32 tid_low;
extern u32 tid_high;

void	usa_menu(void)
{
	t_spoil spoiler;

	new_unselectable_entry("ACNL Cheats 2.2 B5");//USA
	spoiler = new_spoiler("Inventory Codes");
		new_spoiled_entry(spoiler, "Text to Item", text2item_usa);
		new_spoiled_entry(spoiler, "Duplication", duplicate_usa);
	spoiler = new_spoiler("Movement Codes");
		new_spoiled_entry(spoiler, "Moon Jump", moonjump_usa);
		new_spoiled_entry(spoiler, "Teleport", teleport_usa);
		new_spoiled_entry(spoiler, "Coordinates Modifier", coord_usa);
		new_spoiled_entry(spoiler, "Speed Hack", speed_usa);
	spoiler = new_spoiler("Enviroment Codes");
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
}

void	eur_menu(void)
{
	t_spoil spoiler;

	new_unselectable_entry("ACNL Cheats 2.1.1");//EUR
	spoiler = new_spoiler("Inventory Codes");
		new_spoiled_entry(spoiler, "Text to Item", text2item_eur);
		new_spoiled_entry(spoiler, "Duplication", duplicate_eur);
	spoiler = new_spoiler("Movement Codes");
		new_spoiled_entry(spoiler, "Moon Jump", moonjump_eur);
		new_spoiled_entry(spoiler, "Teleport", teleport_eur);
		new_spoiled_entry(spoiler, "Coordinates Modifier", coord_eur);
		new_spoiled_entry(spoiler, "Speed Hack", speed_eur);
	spoiler = new_spoiler("Enviroment Codes");
		new_spoiled_entry(spoiler, "Seeder", seed_eur);
		new_spoiled_entry(spoiler, "Search and Replace", search_eur);
		new_spoiled_entry(spoiler, "Instant Tree", tree_eur);
		new_spoiled_entry(spoiler, "Remove All Weeds", weeder_eur);
		new_spoiled_entry(spoiler, "Water All Flowers", quench_eur);
		new_spoiled_entry(spoiler, "Grass", grass_eur);
		new_spoiled_entry(spoiler, "Desert", desert_eur);
	spoiler = new_spoiler("Nookling Upgrades");
		new_spoiled_entry(spoiler, "T&T Mart", nook1_eur);
		new_spoiled_entry(spoiler, "Super T&T", nook2_eur);
		new_spoiled_entry(spoiler, "T.I.Y", nook3_eur);
		new_spoiled_entry(spoiler, "T&T Emporium", nook4_eur);//index 23
	spoiler = new_spoiler("Appearance Codes");
		new_spoiled_entry(spoiler, "Player 1 Max Tan", tan_eur);
}

void	jap_menu(void)
{
	t_spoil spoiler;

	new_unselectable_entry("ACNL Cheats 2.2 B5");//JAP
	spoiler = new_spoiler("Inventory Codes");
		new_spoiled_entry(spoiler, "Text to Item", text2item_jap);
		new_spoiled_entry(spoiler, "Duplication", duplicate_jap);
	spoiler = new_spoiler("Movement Codes");
		new_spoiled_entry(spoiler, "Moon Jump", moonjump_jap);
		new_spoiled_entry(spoiler, "Teleport", teleport_jap);
		new_spoiled_entry(spoiler, "Coordinates Modifier", coord_jap);
		new_spoiled_entry(spoiler, "Speed Hack", speed_jap);
	spoiler = new_spoiler("Enviroment Codes");
		new_spoiled_entry(spoiler, "Seeder", seed_jap);
		new_spoiled_entry(spoiler, "Search and Replace", search_jap);
		new_spoiled_entry(spoiler, "Instant Tree", tree_jap);
		new_spoiled_entry(spoiler, "Remove All Weeds", weeder_jap);
		new_spoiled_entry(spoiler, "Water All Flowers", quench_jap);
		new_spoiled_entry(spoiler, "Grass", grass_jap);
		new_spoiled_entry(spoiler, "Desert", desert_jap);
	spoiler = new_spoiler("Nookling Upgrades");
		new_spoiled_entry(spoiler, "T&T Mart", nook1_jap);
		new_spoiled_entry(spoiler, "Super T&T", nook2_jap);
		new_spoiled_entry(spoiler, "T.I.Y", nook3_jap);
		new_spoiled_entry(spoiler, "T&T Emporium", nook4_jap);//index 23
	spoiler = new_spoiler("Appearance Codes");
		new_spoiled_entry(spoiler, "Player 1 Max Tan", tan_jap);
}

/*
** USA: 00040000 00086300
** EUR: 00040000 00086400
** JAP: 00040000 00086200
*/
void	my_menus(void)
{
	if (tid_low == 0x86300)
		usa_menu();
	else if (tid_low == 0x86400)
		eur_menu();
	else if (tid_low == 0x86200)
		jap_menu();
	else
	{
		new_unselectable_entry("Unsupported ID");
		new_unselectable_entry("!!! Title id unrecognized !!!");
		new_unselectable_entry("!!! You need either       !!!");
		new_unselectable_entry("!!! 00040000 00086300     !!!");
		new_unselectable_entry("!!! or                    !!!");
		new_unselectable_entry("!!! 00040000 00086400     !!!");
	}

}