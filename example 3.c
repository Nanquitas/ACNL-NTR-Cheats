//Examples

//Fixed Coordinate Modifier

0x00002800
0x00002000
0x00008000
0x00008000





//Fixed Moon Jump

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






//Fixed Duplication
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













































































//Fixed Teleport (Not Needed?)

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
