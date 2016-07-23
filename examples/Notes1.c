static const char * const notes[] =
{
    "Inventory",
    "Text to item",
    "Duplication",
    "Movement codes",
    "Moon jump",
    "Teleport",
    "Coordinates Mod.",
    "Speed Hack",
    "Environment",
    "Seeder",
    "Searcher",
    "Instant tree"

};

void menu()
{
    u32 start_index;
    u32 end_index;
   
    new_unselectable_entry("ACNL Cheats 2.2");//USA
    start_index =  new_spoiler("Inventory Codes");
            new_entry("Text to Item", text2item_usa);
        new_entry("Duplication", duplicate_usa);
    exit_spoiler();
    new_spoiler("Movement Codes");
        new_entry("Moon Jump", moonjump_usa);
        new_entry("Teleport", teleport_usa);
        new_entry("Coordinates Modifier", coord_usa);
        new_entry("Speed Hack", speed_usa);
    exit_spoiler();
    new_spoiler("Enviroment Codes");
        new_entry("Seeder", seed_usa);
        new_entry("Search and Replace", search_usa);
        end_index = new_entry("Instant Tree", tree_usa);
    exit_spoiler();
    for (; start_index <= end_index; start_index++)
        set_note(notes[start_index], start_index);
}