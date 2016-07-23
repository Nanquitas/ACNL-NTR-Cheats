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

#define INVENTORY_NOTE        notes[0]
#define TEXT_ITEM_NOTE        notes[1]
#define DUPLICATION_NOTE    notes[2]
#define MOVEMENTS_NOTE        notes[3]
#define MOON_JUMP_NOTE        notes[4]
#define TELEPORT_NOTE        notes[5]
#define COORD_MOD_NOTE        notes[6]
#define SPEED_HACK_NOTE        notes[7]
#define ENVIRONMENT_NOTE    notes[8]
#define SEEDER_NOTE        notes[9]
#define SEARCHER_NOTE        notes[10]
#define INSTANT_TREE_NOTE    notes[11]

void menu()
{
    u32 index;

    new_unselectable_entry("ACNL Cheats 2.2");//USA
    new_spoiler("Inventory Codes");
            index = new_entry("Text to Item", text2item_usa);
        set_note(TEXT_ITEM_NOTE, index);
        new_entry("Duplication", duplicate_usa);
    exit_spoiler();
    new_spoiler("Movement Codes");
        index = new_entry("Moon Jump", moonjump_usa);
        set_note(MOON_JUMP_NOTE, index);
        new_entry("Teleport", teleport_usa);
        new_entry("Coordinates Modifier", coord_usa);
        index = new_entry("Speed Hack", speed_usa);
        set_note(SPEED_HACK_NOTE, index);
    exit_spoiler();
    new_spoiler("Enviroment Codes");
        new_entry("Seeder", seed_usa);
        new_entry("Search and Replace", search_usa);
        index = new_entry("Instant Tree", tree_usa);
        set_note(INSTANT_TREE_NOTE, index);
    exit_spoiler();
}