#include "../../include/common.h"
/*
INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80018808);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80018D00);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80018D28);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", GsGetWorkBase);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", main);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80019084);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80019140);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80019350);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001946C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800194E0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001982C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80019A50);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_80019E10);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80019F5C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001A014);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001A108);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001A1FC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001A358);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", GsGetWorkBase_0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001A4A4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001A5CC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001A614);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001A744);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001ABD4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001ADBC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001AE68);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001AF20);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001AF60);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001B00C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001B050);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001B3A0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001B8F8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001B92C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001B978);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001BBB8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001BC1C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001BD20);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001BF48);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001BFD8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001C058);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8001C094);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001C110);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001C23C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001C2DC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001C394);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001C764);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001C9EC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001CB8C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001CF68);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001CFC4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001D120);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001D180);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001D208);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001D398);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001D6B8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001D73C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001D9A4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001DAD8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001DB68);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001DC08);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001E030);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001E148);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001E230);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001E430);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001E5A4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8001E7B0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8001E8F8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8001EA84);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8001EBE0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8001F484);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8001F684);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001F9E8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001FAFC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001FE2C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001FE44);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001FE78);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8001FED0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80020028);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002018C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800201B0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800201F0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80020294);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800203A8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800203F8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_80020A70);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_80020E78);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_80021004);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8002143C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_80021A24);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80022208);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80022234);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002238C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800224C0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80022558);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80022604);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80022688);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800228A4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002296C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80022998);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800229CC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", InitCARD);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80022A64);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", StartCARD);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", StopCARD);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80022B5C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80022C84);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80022FF0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80023340);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80023364);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800233D8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800234A4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800235C8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800235DC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80023620);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80023644);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80023658);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80023698);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800236C0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80023730);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80023744);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80023834);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80023CA4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80023E74);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800241E8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800245C8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80024668);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80024734);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80024740);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80024790);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800247EC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80024938);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800249AC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80024A64);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80024B74);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80024DA0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80024E38);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80024E74);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80024EAC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80024FB4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800250C4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80025238);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800252D4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002530C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80025324);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80025348);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80025490);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800255BC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800255C8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800257DC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800258D8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80025ACC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80025BCC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80025D08);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80025E24);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80026178);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80026504);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80026570);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80026624);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80026694);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800267CC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80026924);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80026A10);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80026A80);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80026AB8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80026B98);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80026DC0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80026E9C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80026F70);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002703C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80027098);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800270B0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80027140);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80027518);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800275DC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800276A0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002787C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800278B4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80027990);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80027A78);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80027AAC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80027B40);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80027C24);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80027CF8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80027D38);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80027DE0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80027E94);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80027F50);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80027FA0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80027FCC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80027FFC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002812C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002818C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800281AC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800281C0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002839C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800283A8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800283B4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80028400);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80028430);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80028804);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002889C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800288C4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80028930);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", nullsub_6);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", setusershell);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", setusershell_0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80029490);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800297F0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002987C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", nullsub_7);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80029E88);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80029FF4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002A66C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002A770);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002A970);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002A9A0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002A9FC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002AA44);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002AA60);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002AA90);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002AB28);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002AD04);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002AD84);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002AEC0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002AF90);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002B084);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002B114);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002B3A4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002B430);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002BE0C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002BE40);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002BEE8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002C014);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002C0C8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002C128);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002C190);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002C1EC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002C218);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002C358);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002C3CC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002C560);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002C614);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002C764);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002C7FC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002C8C0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002C96C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002C994);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002CA40);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002CAD8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002CBDC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002CDDC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002CE44);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002CF08);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002D034);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002D154);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002D470);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002D7D8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002D810);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002DA08);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002DB50);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002E644);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002E69C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002ECB4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002EE1C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8002FA2C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80030304);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800307BC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80030B30);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80030C30);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80030D38);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80030DB8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80030E60);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80031038);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800312A4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800312E8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003134C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_800319F0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80033870);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800338F8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80033950);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80033B44);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80033B74);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80033C24);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80033C9C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80033E34);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80033F68);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80033FDC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800342FC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80034364);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003442C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80034650);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80034D14);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80034F14);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800354D8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80035800);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_80035980);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80035CA0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80035CC4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80035CE8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80035CF4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80035D68);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80035DDC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80035E4C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80036010);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80036020);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003602C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80036068);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80036324);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800363B4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80036544);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80036670);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800366FC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80036C4C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80036D18);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80037048);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800370D8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80037154);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80037390);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003746C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800374BC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800377CC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80037844);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800378A8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80037AB0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80037B04);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80037B54);

void nullsub_4(void) {
}

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80037B9C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80037D90);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80037F38);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800380F8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80038370);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003838C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800383F4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800384E8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800385AC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800386CC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80038990);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80038A00);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80038AB8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80038B78);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80038D08);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80039524);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003957C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80039610);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80039654);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80039AF8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80039BB0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80039BEC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80039C28);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80039C64);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80039D1C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003A1F4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003A270);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003A2B8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003A300);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003A348);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8003B36C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003BCD4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003BDB4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003BDE8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003BE24);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003BE60);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003BE78);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003BF68);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003C23C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003C36C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8003C46C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003C824);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003CA3C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003CA7C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003CB28);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003CD14);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003CEE0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003CF50);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003D14C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003D248);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003D2F4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003D6F8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003D73C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003D754);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003D840);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003DBFC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003DFC4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003E118);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003E1F0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003E274);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003E2DC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8003E350);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003E3AC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003E3D4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003E404);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003E43C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003E46C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003E4B4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8003E51C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003EBFC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003F130);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003F1EC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003F3B8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003F578);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003F5A8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003F5D8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003F608);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003F668);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003F6E4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003F720);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003F840);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003F86C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003F9F8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003FAF0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003FB14);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003FB98);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003FBBC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8003FC4C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8003FFDC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004000C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004007C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800400D8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800401A8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80040210);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80040780);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004088C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8004097C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80040E94);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800412C4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80041D44);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_80041DAC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80041EA0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004209C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80042268);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800422CC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80042340);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004240C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80042464);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80042494);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80042B5C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80042E6C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80042EF4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80042F34);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80042FB4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800431E0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800432BC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800432E4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800435F8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004363C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004367C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80043700);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80043730);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80043798);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800437C0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004381C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80043C44);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_80043C88);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_80044130);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_80044774);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80045BC0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80045C00);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80045C3C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80045C60);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80045D44);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80045D54);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80045DAC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", GsGetWorkBase_1);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80045E10);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80045EB4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80045F80);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800463A8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004654C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80046678);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80046894);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004696C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80046A2C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80046A94);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80046B1C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80046B44);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80046BA4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80046FAC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80047104);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80047174);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800471C0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800471F8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80047258);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80047288);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800472E0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800473A8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800473E0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80047410);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80047440);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800474A4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80047584);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80047660);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80047690);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8004B0A8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004B61C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004BA94);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004BE04);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004BEB4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004BFCC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004C00C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004C24C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004C2CC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004C34C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004C3CC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004C498);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", nullsub_2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004D23C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004D5DC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8004D718);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004E5D8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004EAA0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004ED6C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", nullsub_5);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8004F2F8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8004F678);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8004F6A8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8004FC80);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80050418);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80050440);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80050B00);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80051610);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_800519AC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800527E8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80052840);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_80052C00);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80052CAC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80052D68);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80052E7C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_80052F30);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80052FB0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80053924);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80053FF0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80054194);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", PadInitGun);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80054608);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800546D8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", PadEnableGun);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", PadRemoveGun);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800547F4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800548C4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_80054928);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80054CF4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80054D00);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80054D90);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80054E34);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_800550A4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_800552E4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_80055BA8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80057840);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_80057894);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80058FE0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005902C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80059070);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80059150);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80059194);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80059268);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005935C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80059398);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005946C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80059560);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80059688);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005986C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80059940);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005AFC4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005B108);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005B478);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005B544);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005B5C0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005B648);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005B7DC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005B980);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005BAA0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005BB40);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8005BC64);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005C4B8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8005CA38);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8005CB30);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005CD48);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005CF20);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005D7BC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005D964);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005E2C8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005E6DC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005F960);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005F9EC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005FC00);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005FD30);


INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005FE24);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005FE9C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005FF14);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005FF44);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8005FF74);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800601FC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8006027C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8006031C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8006056C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800613C8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80061400);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80061484);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800614BC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800614F4);

void __main(void) {
}

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", start);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", stup1);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", stup0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", InitHeap);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", Exec);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", EnterCriticalSection);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", Krom2RawAdd);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", memcpy);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", memset);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", rand);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", srand);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", sprintf);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_800619EC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", memchr);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", memmove);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", strlen);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", DecDCTReset);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", DecDCTGetEnv);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", DecDCTPutEnv);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", DecDCTBufSize);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", DecDCTin);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80062298);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", DecDCTinSync);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", DecDCToutSync);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", DecDCTinCallback);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", DecDCToutCallback);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", LIBPRESS_OBJ_2C0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", LIBPRESS_OBJ_3B0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800624F4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", LIBPRESS_OBJ_4CC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80062614);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800626A8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", LIBPRESS_OBJ_60C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", printf);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", prnt);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_80062828);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _putchar);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _putchar_flash);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", putchar);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", write);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SetDumpFnt);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", FntLoad);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", FntOpen);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", FntFlush);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", FntPrint);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_800638F0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", ResetGraph);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SetGraphDebug);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SetDispMask);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", DrawSync);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SYS_OBJ_3E4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", ClearImage);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", LoadImage);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", StoreImage);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", MoveImage);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", ClearOTag);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", DrawOTag);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SetDrawEnv);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SYS_OBJ_13C0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SYS_OBJ_1630);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SYS_OBJ_1650);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SYS_OBJ_16E8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SYS_OBJ_1780);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SYS_OBJ_179C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", nullsub_8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SYS_OBJ_205C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SYS_OBJ_20A4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SYS_OBJ_20F8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SYS_OBJ_23A8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SYS_OBJ_2608);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SYS_OBJ_2880);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SYS_OBJ_28B4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SYS_OBJ_29F8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", LoadImage2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", MoveImage2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SYS_OBJ_2ED8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", GPU_cw);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", LoadTPage);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", LoadClut);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", LoadClut2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80066B84);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SetDefDrawEnv);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SetDefDrawEnv);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SetDefDispEnv);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SetDefDispEnv);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", GetTPage);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", GetClut);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", AddPrim);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", AddPrims);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", TermPrim);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SetSemiTrans);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SetShadeTex);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SetPolyFT4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SetPolyG4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SetSprt8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SetTile);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SetDrawTPage);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SetDrawMode);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", InitGeom);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _patch_gte);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", FlushCache);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", ExitCriticalSection);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CdInit);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", EVENT_OBJ_90);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", DeliverEvent);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CdPosToInt);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CdSearchFile);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", ISO9660_OBJ_2D8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", ISO9660_OBJ_2F8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", ISO9660_OBJ_5BC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", ISO9660_OBJ_660);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", ISO9660_OBJ_8FC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", strcmp);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", strncmp);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", BIOS_1_OBJ_0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_80067FD0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CD_sync);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CD_sync);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CD_ready);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CD_ready);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CD_cw);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CD_cw);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CD_vol);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CD_flush);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CD_flush);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CD_initvol);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CD_initvol);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CD_initintr);

void CD_init(void) {
}

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CD_init);

void CD_datasync(void) {
}

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CD_datasync);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CD_getsector);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", puts);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CD_getsector2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CdIntToPos);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CD_set_test_parmnum);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80069484);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CdControl);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CdControlF);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CdControlB);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CDR_1_OBJ_378);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CdRead);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CdReadSync);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8006A204);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8006A214);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8006A224);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", PadChkVsync);

//INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", PadStartCom);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", PadStopCom);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", PadChkMtap);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CdGetSector);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CD_getsector);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", PadGetState);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", PadInfoMode);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8006A3D4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CD_getsector2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8006A49C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8006A4E4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8006A514);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CdDiskReady);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", PadInfoComb);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", PadSetActAlign);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", PadSetMainMode);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CdReadFile);

//INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", PadSetAct);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", strcat);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", strcpy);

//INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", VSync);

//INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", VSYNC_OBJ_178);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", ChangeClearPAD);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", ChangeClearRCnt);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", ResetCallback);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", InterruptCallback);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", DMACallback);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", VSyncCallback);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", VSyncCallbacks);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", StopCallback);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", RestartCallback);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CheckCallback);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", GetIntrMask);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SetIntrMask);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", INTR_OBJ_26C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", INTR_OBJ_69C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8006B1EC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", ReturnFromException);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", ResetEntryInt);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", HookEntryInt);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", setjmp);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", longjmp);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", startIntrVSync);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", INTR_VB_OBJ_F0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", startIntrDMA);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", INTR_DMA_OBJ_278);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SetVideoMode);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", GetVideoMode);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SSCLOSE_OBJ_0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsSeqClose);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsSepClose);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSndSetCres);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsSeqSetCrescendo);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsSepSetCrescendo);

//INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsEnd);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsInit);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsInit);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsInitHot);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsGetCurrentPoint);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsContBankChange);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsContDataEntry);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsContMainVol);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsContPanpot);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsContExpression);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsContDamper);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsContExternal);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsContNrpn1);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsContNrpn2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsContRpn1);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsContRpn2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsContResetAll);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSetNrpnVabAttr0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSetNrpnVabAttr1);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSetNrpnVabAttr2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSetNrpnVabAttr3);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSetNrpnVabAttr4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsUtResolveADSR);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsUtBuildADSR);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSetNrpnVabAttr5);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSetNrpnVabAttr6);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSetNrpnVabAttr7);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSetNrpnVabAttr8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSetNrpnVabAttr9);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSetNrpnVabAttr10);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSetNrpnVabAttr11);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSetNrpnVabAttr12);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSetNrpnVabAttr13);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSetNrpnVabAttr14);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSetNrpnVabAttr15);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSetNrpnVabAttr16);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", unknown_libname_2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", unknown_libname_3);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSetPitchBend);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSetControlChange);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsGetMetaEvent);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsNoteOn);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSetProgramChange);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsReadDeltaValue);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsInitSoundSeq);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsSeqPlay);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8006E0D4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", Snd_SetPlayMode);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsSetSerialAttr);

//INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsSetMVol);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SSSTART_OBJ_0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsStart);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsStart2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SetRCnt);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", GetRCnt);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", StartRCnt);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", StopRCnt);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", ResetRCnt);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsSeqCalledTbyT);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSndCrescendo);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSndPause);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSndPlay);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSeqPlay);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSeqGetEof);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsGetSeqData);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSndNextSep);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSndReplay);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSndStop);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsSeqStop);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsSepStop);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsSetSerialVol);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsSetTableSize);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsSetTickMode);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_8006FAD0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSndSetVol);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsSeqSetVol);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsSepSetVol);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8006FD34);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSndTempo);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsSndSetVolData);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsUtGetProgAtr);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsUtGetVagAtr);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsUtSetReverbDelay);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsUtSetReverbDepth);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsUtSetReverbType);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsUtSetReverbFeedback);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80070504);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80070524);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsUtSetVagAtr);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmDamperOff);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmDamperOn);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmFlush);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmInit);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmKeyOn);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmKeyOff);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmKeyOff);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmSeKeyOn);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmAlloc);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmSeKeyOff);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", KeyOnCheck);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmDoAllocate);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", note2pitch);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", note2pitch2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsPitchFromNote);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", vmNoiseOn);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", vmNoiseOff);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmKeyOffNow);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmKeyOnNow);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmPBVoice);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmPitchBend);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmSetProgVol);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmSetSeqVol);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmGetSeqVol);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmSeqKeyOff);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmSelectToneAndVag);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmSetVol);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVmVSetUp);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsSetMono);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsSetStereo);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsVabOpenHeadSticky);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsVabFakeHead);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SsVabOpenHeadWithMode);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsVabTransBodyPartly);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsVabTransCompleted);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuInit);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SpuInit);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuStart);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", OpenEvent);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", EnableEvent);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _spu_init);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SPU_OBJ_280);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _spu_FiDMA);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _spu_Fr_);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _spu_t);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _spu_Fw);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _spu_Fr);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _spu_FsetRXX);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _spu_FsetRXXa);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _spu_FgetRXXa);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _spu_FsetPCR);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SPU_OBJ_A88);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SPU_OBJ_AB0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _spu_Fw1ts);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SpuDataCallback);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuInitHot);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuQuit);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", CloseEvent);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", DisableEvent);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuInitMalloc);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuFree);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _spu_gcSPU);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuSetNoiseVoice);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SpuSetAnyVoice);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuGetNoiseVoice);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SpuGetAnyVoice);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuSetNoiseClock);

//INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuSetReverb);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SpuIsInAllocateArea);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _SpuIsInAllocateArea_);

//INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuSetReverbModeParam);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _spu_setReverbAttr);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuSetReverbDepth);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuSetReverbVoice);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuGetReverbVoice);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuClearReverbWorkArea);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", WaitEvent);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuSetKey);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuSetTransferStartAddr);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuSetTransferMode);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuWritePartly);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuIsTransferCompleted);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", TestEvent);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _spu_setInTransfer);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _spu_getInTransfer);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuSetVoiceAttr);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_800768D8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_800769B8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _spu_note2pitch);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _spu_pitch2note);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuGetVoiceEnvelope);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SpuSetCommonAttr);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_80077014);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_800770D4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", __fixdfsi);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _dbl_shift);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", __floatsidf);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _dbl_shift_us);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", __muldf3);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _mul_mant_d);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _add_mant_d);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _err_math);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", hypot);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", __adddf3);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", __addsf3);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", __divdf3);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _comp_mant);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", __divsf3);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", __eqdf2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", __extendsfdf2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", __ltdf2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _mainasu);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", __mulsf3);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", __negdf2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", __truncdfsf2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SsInitHot_0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80078D94);

//INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _bu_init);

//INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", InitCARD);

//INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", StartCARD);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", StopCARD);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SetInitPadFlag);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", ReadInitPadFlag);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", PAD_init);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", InitPAD);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", StartPAD);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", StopPAD);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80079154);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80079164);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_80079174);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SysEnqIntRP);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", SysDeqIntRP);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_800791A4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _patch_pad);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _remove_ChgclrPAD);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", InitCARD2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", StartCARD2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", StopCARD2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _patch_card_info);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _patch_card);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _patch_card2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _copy_memcard_patch);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _ExitCard_0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", MemCardStart);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", MemCardStop);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", MemCardExist);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", MemCardAccept);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", def_80079AB4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", MemCardClose);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", MemCardReadFile);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", MemCardWriteFile);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", MemCardGetDirentry);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", MemCardCallback);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", MemCardSync);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", MemCardCreateFile);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", MemCardFormat);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", LIBMCRD_OBJ_1774);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", LIBMCRD_OBJ_1874);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", open);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", lseek);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", read);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", close);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", nextfile);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", firstfile);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", firstfile2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _card_info);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _card_load);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _card_clear);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _card_write);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _new_card);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", UserFuncInit);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", UserFuncOpen);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", UserFuncExecute);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", UserFuncComplete);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", funcEvSpIOE);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", funcEvSpError);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", funcEvSpTimeout);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", funcEvSpNewcard);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", funcEvSpIOEx);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", funcEvSpErrorx);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", funcEvSpTimeoutx);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", funcEvSpNewcardx);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _card_open);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _card_start);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _card_close);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _card_stop);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _clr_card_event);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _get_card_event);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _get_card_event_x);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _chk_card_event);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _chk_card_event_x);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _card_format2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _card_create2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", bzero);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", strncpy);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _card_read);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _padInitDirPort);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", PDDIRRES_OBJ_24C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _dirFailAuto);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _padInitSioMode);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", func_8007DAE0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _padSioRW);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _padSioRW2);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _padClrIntSio0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _padWaitRXready);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _padSetCmd);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _padSendAtLoadInfo);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _padRecvAtLoadInfo);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _padGetActSize);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _padLoadActInfo);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _padCmdParaMode);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", PDRESRES_OBJ_1444);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", PDRESRES_OBJ_1458);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", PDRESRES_OBJ_1478);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", PDRESRES_OBJ_1498);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", PDRESRES_OBJ_14B8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _padSetRC2wait);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", _padChkRC2wait);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", unknown_libname_1);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", aD_0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", a048D);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", aZcapezrtMit);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", aVgs);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", aB);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", aM);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", aQqq);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", aUuu);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", a0123489I);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", aBaslus01071lun);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", aTimTrzepacz);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", aBvFz);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", aQqqjkkpppooonm);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", aLibraryProgram);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", aVXa1);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9008", aWXa1);*/



void FUN_80030a2c(int param_1) {
    dword_8009b4b4 = param_1 / 100;
    dword_8009b4b8 = param_1 % 100;
    dword_8009b4bc = VSync(-1);
}


void FUN_80016aa4(int param_1, int param_2) {
    dword_8009b1c0 = param_1;
    dword_8009b1e0 = param_2;

}

void FUN_80016ab4(){
    PadInitDirect(&byte_800aa4d0,&byte_800aa4f2);
    PadSetAct(0,&byte_800aa4c0,2);
    PadSetAct(0,&byte_800aa4c6,2);
    PadStartCom();
    FUN_80016aa4(25,14);
    byte_8009a700 = 1;
    byte_8009a701 = 1;
}

void InitMemoryCard_80078D64(int a1)
{
    InitCARD(a1);
    StartCARD();
    _bu_init();
}

void TerminateSPU_800172AC(){

    SpuReverbAttr spuReverbAttr;

    dword_8009B204 = 0;
    SsSetMVol(0,0);
    SsEnd();
    spuReverbAttr.mask = 1;
    spuReverbAttr.mode = 0;
    SpuSetReverbModeParam(&spuReverbAttr);
    SpuSetReverb(0);
    SsQuit();
}

void TerminateSPUCall_80018FE8(){
    TerminateSPU_800172AC();
}

int FUN_80069464(int a1){

    dword_80088558 = a1;
    return 0;
}

void FUN_80016A84(){
    word_8009B166 = 0;
    word_8009B168 = 0;
}
void FUN_80016A94()
{
    byte_8009B163 = 1;
}
uint ReadFileFromDisk_80015FC0(char * file, u_long * address, uint numberOfByte){
    int numberOfReadBytes = CdReadFile(file,address,numberOfByte);

    if (numberOfReadBytes != 0){
        return numberOfByte;
    }
    return 0;
}

int FUN_80015FF4(void (*a1)(void)){
    u_int fileFromDisk;
    int sync;
    CdlFILE *v4;
    int result;
    CdlFILE cdlFile;

    FUN_80016A84();

    while (1){
        fileFromDisk = ReadFileFromDisk_80015FC0(DATA_IDX,&dword_800BA000,0x3800u);

        if (fileFromDisk){
            do {
                VSync(0);
                sync = CdReadSync(1,&dword_8008B188);
            }while (sync >0);
        }
        if (sync>=0){
            break;
        }

        if (++word_8009B168 >=5u){
            LABEL_16:
            FUN_80016A94();
            return 0;
        }
    }

    memcpy(&byte_801F0F00,&dword_800BA000,fileFromDisk);
    u_short word_8009B15C = fileFromDisk;

    dword_8009B158 = (int) &byte_801F0F00;
    word_8009B15E = word_8009B15C / 5;

    FUN_80016A84();
    while (!CdSearchFile(&cdlFile,DATA_PAK)){
        if (++word_8009B168 >=5u)
            goto LABEL_16;
    }
    dword_8009B180 = CdPosToInt(&cdlFile.pos);
    v4 = CdSearchFile(&cdlFile,V_XA);
    result = 1;
    if (v4!=0){
        stru_8008B18D = cdlFile.pos;
    }

    return result;
}

int FUN_800161F4(){
    u_char v2[8];

    byte_8009B160 = 0;
    CdInit();
    FUN_80069464(0);
    v2[0] = 0x80;
    CdControlB('\x0e',v2,&dword_8008B188);
    VSync(3);

    int v0 = FUN_80015FF4(0);

    if (v0 == 0){
        return 0;
    }
    byte_8009B160 = 1;
    byte_8009B162 = 1;
    byte_8009B161 = 1;
    byte_8009B164 = 0;
    dword_8009B17C = (int) FUN_80016aa4;

    return 1;


}

void FUN_80014B2C(int a1){
    dword_8009A6DC = a1;
}


void FUN_8004CD04(int a1){
    dword_8009B870 = a1;
    FUN_80014B2C(a1);
}


int main(){
    return 1;
}