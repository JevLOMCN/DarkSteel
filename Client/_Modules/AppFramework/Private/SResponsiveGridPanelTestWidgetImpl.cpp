// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 2

// Construct @ 14308ca40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SResponsiveGridPanelTestWidgetImpl::Construct
          (SResponsiveGridPanelTestWidgetImpl *this,FArguments *param_1)

{
  FName *pFVar1;
  FMargin *pFVar2;
  T1RequiredArgs<int_&&> TVar3;
  TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> *pTVar4;
  TSharedRef<SResponsiveGridPanel,1> *pTVar5;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar6;
  TSharedRef<SBorder,1> *pTVar7;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *pTVar8;
  TSharedRef<SBox,1> *pTVar9;
  FSlotArguments *pFVar10;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SScrollBox,1> *pTVar11;
  FArguments *pFVar12;
  undefined1 auStackY_69c8 [32];
  T0RequiredArgs local_6998;
  T0RequiredArgs local_6997;
  T0RequiredArgs local_6996;
  T0RequiredArgs local_6995;
  T0RequiredArgs local_6994;
  T0RequiredArgs local_6993;
  T0RequiredArgs local_6992;
  T0RequiredArgs local_6991;
  T0RequiredArgs local_6990;
  T0RequiredArgs local_698f;
  T0RequiredArgs local_698e;
  T0RequiredArgs local_698d;
  T0RequiredArgs local_698c;
  T0RequiredArgs local_698b [3];
  int local_6988;
  int local_6984;
  int local_6980;
  undefined4 local_697c;
  undefined4 local_6978;
  undefined4 local_6974;
  undefined4 local_6970;
  undefined4 local_696c;
  int local_6968 [2];
  TSharedPtr<SResponsiveGridPanel,1> local_6960;
  ISlateStyle *local_6950;
  ISlateStyle *local_6948;
  ISlateStyle *local_6940;
  ISlateStyle *local_6938;
  ISlateStyle *local_6930;
  ISlateStyle *local_6928;
  ISlateStyle *local_6920;
  FName local_6918;
  code *local_6910;
  FSlateBrush *local_6908;
  TAttribute<FSlateBrush_const_*> *local_6900;
  TAttribute<FSlateBrush_const_*> *local_68f8;
  FArguments *local_68f0;
  TAttribute<FSlateColor> *local_68e8;
  TAttribute<FSlateColor> *local_68e0;
  FArguments *local_68d8;
  TAttribute<FMargin> *local_68d0;
  TAttribute<FMargin> *local_68c8;
  FArguments *local_68c0;
  FName *local_68b8;
  FName local_68b0;
  code *local_68a8;
  FSlateBrush *local_68a0;
  TAttribute<FSlateBrush_const_*> *local_6898;
  TAttribute<FSlateBrush_const_*> *local_6890;
  FArguments *local_6888;
  FArguments *local_6880;
  FArguments *local_6878;
  FArguments *local_6870;
  TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> *local_6868;
  FArguments *local_6860;
  FArguments *local_6858;
  FArguments *local_6850;
  FArguments *local_6848;
  FArguments *local_6840;
  FSlotArguments *local_6838;
  FSlotArguments *local_6830;
  FArguments *local_6828;
  undefined1 *local_6820;
  TAttribute<FMargin> *local_6818;
  TAttribute<FMargin> *local_6810;
  FArguments *local_6808;
  FName *local_6800;
  FName local_67f8;
  code *local_67f0;
  FSlateBrush *local_67e8;
  TAttribute<FSlateBrush_const_*> *local_67e0;
  TAttribute<FSlateBrush_const_*> *local_67d8;
  FArguments *local_67d0;
  FArguments *local_67c8;
  FArguments *local_67c0;
  FArguments *local_67b8;
  FSlotArguments *local_67b0;
  FSlotArguments *local_67a8;
  TSharedRef<SWidget,1> *local_67a0;
  FSlotArguments *local_6798;
  FSlotArguments *local_6790;
  FArguments *local_6788;
  FSlotArguments *local_6780;
  FSlotArguments *local_6778;
  TSharedRef<SWidget,1> *local_6770;
  FSlotArguments *local_6768;
  FSlotArguments *local_6760;
  FArguments *local_6758;
  FSlotArguments *local_6750;
  FSlotArguments *local_6748;
  TSharedRef<SWidget,1> *local_6740;
  FSlotArguments *local_6738;
  FSlotArguments *local_6730;
  FArguments *local_6728;
  FSlotArguments *local_6720;
  FSlotArguments *local_6718;
  TSharedRef<SWidget,1> *local_6710;
  FSlotArguments *local_6708;
  FSlotArguments *local_6700;
  FArguments *local_66f8;
  FSlotArguments *local_66f0;
  FSlotArguments *local_66e8;
  TSharedRef<SWidget,1> *local_66e0;
  FSlotArguments *local_66d8;
  FSlotArguments *local_66d0;
  FArguments *local_66c8;
  FSlotArguments *local_66c0;
  TSharedRef<SWidget,1> *local_66b8;
  FSlotArguments *local_66b0;
  FSlotArguments *local_66a8;
  FArguments *local_66a0;
  FSlotArguments *local_6698;
  TSharedRef<SWidget,1> *local_6690;
  FSlotArguments *local_6688;
  FSlotArguments *local_6680;
  FArguments *local_6678;
  FArguments *local_6670;
  FArguments *local_6668;
  FArguments *local_6660;
  FArguments *local_6658;
  FArguments *local_6650;
  FSlotArguments *local_6648;
  FSlotArguments *local_6640;
  FArguments *local_6638;
  undefined1 *local_6630;
  TAttribute<FMargin> *local_6628;
  TAttribute<FMargin> *local_6620;
  FArguments *local_6618;
  FName *local_6610;
  FName local_6608;
  code *local_6600;
  FSlateBrush *local_65f8;
  TAttribute<FSlateBrush_const_*> *local_65f0;
  TAttribute<FSlateBrush_const_*> *local_65e8;
  FArguments *local_65e0;
  FArguments *local_65d8;
  FArguments *local_65d0;
  FArguments *local_65c8;
  FSlotArguments *local_65c0;
  FSlotArguments *local_65b8;
  FSlotArguments *local_65b0;
  TSharedRef<SWidget,1> *local_65a8;
  FSlotArguments *local_65a0;
  FSlotArguments *local_6598;
  FArguments *local_6590;
  FSlotArguments *local_6588;
  FSlotArguments *local_6580;
  TSharedRef<SWidget,1> *local_6578;
  FSlotArguments *local_6570;
  FSlotArguments *local_6568;
  FArguments *local_6560;
  FSlotArguments *local_6558;
  FSlotArguments *local_6550;
  TSharedRef<SWidget,1> *local_6548;
  FSlotArguments *local_6540;
  FSlotArguments *local_6538;
  FArguments *local_6530;
  FSlotArguments *local_6528;
  FSlotArguments *local_6520;
  TSharedRef<SWidget,1> *local_6518;
  FSlotArguments *local_6510;
  FSlotArguments *local_6508;
  FArguments *local_6500;
  FSlotArguments *local_64f8;
  FSlotArguments *local_64f0;
  TSharedRef<SWidget,1> *local_64e8;
  FSlotArguments *local_64e0;
  FSlotArguments *local_64d8;
  FArguments *local_64d0;
  FArguments *local_64c8;
  FArguments *local_64c0;
  FArguments *local_64b8;
  FArguments *local_64b0;
  FArguments *local_64a8;
  FSlotArguments *local_64a0;
  FSlotArguments *local_6498;
  FArguments *local_6490;
  undefined1 *local_6488;
  TAttribute<FMargin> *local_6480;
  TAttribute<FMargin> *local_6478;
  FArguments *local_6470;
  FName *local_6468;
  FName local_6460;
  code *local_6458;
  FSlateBrush *local_6450;
  TAttribute<FSlateBrush_const_*> *local_6448;
  TAttribute<FSlateBrush_const_*> *local_6440;
  FArguments *local_6438;
  FArguments *local_6430;
  FArguments *local_6428;
  FArguments *local_6420;
  FSlotArguments *local_6418;
  TSharedRef<SWidget,1> *local_6410;
  FSlotArguments *local_6408;
  FSlotArguments *local_6400;
  FArguments *local_63f8;
  FSlotArguments *local_63f0;
  TSharedRef<SWidget,1> *local_63e8;
  FSlotArguments *local_63e0;
  FSlotArguments *local_63d8;
  FArguments *local_63d0;
  FSlotArguments *local_63c8;
  TSharedRef<SWidget,1> *local_63c0;
  FSlotArguments *local_63b8;
  FSlotArguments *local_63b0;
  FArguments *local_63a8;
  FArguments *local_63a0;
  FArguments *local_6398;
  FArguments *local_6390;
  FArguments *local_6388;
  FArguments *local_6380;
  FSlotArguments *local_6378;
  FSlotArguments *local_6370;
  FArguments *local_6368;
  undefined1 *local_6360;
  TAttribute<FMargin> *local_6358;
  TAttribute<FMargin> *local_6350;
  FArguments *local_6348;
  FName *local_6340;
  FName local_6338;
  code *local_6330;
  FSlateBrush *local_6328;
  TAttribute<FSlateBrush_const_*> *local_6320;
  TAttribute<FSlateBrush_const_*> *local_6318;
  FArguments *local_6310;
  FArguments *local_6308;
  FArguments *local_6300;
  FArguments *local_62f8;
  FSlotArguments *local_62f0;
  TSharedRef<SWidget,1> *local_62e8;
  FSlotArguments *local_62e0;
  FSlotArguments *local_62d8;
  FArguments *local_62d0;
  FSlotArguments *local_62c8;
  TSharedRef<SWidget,1> *local_62c0;
  FSlotArguments *local_62b8;
  FSlotArguments *local_62b0;
  FArguments *local_62a8;
  FSlotArguments *local_62a0;
  TSharedRef<SWidget,1> *local_6298;
  FSlotArguments *local_6290;
  FSlotArguments *local_6288;
  FArguments *local_6280;
  FSlotArguments *local_6278;
  TSharedRef<SWidget,1> *local_6270;
  FSlotArguments *local_6268;
  FSlotArguments *local_6260;
  FArguments *local_6258;
  FSlotArguments *local_6250;
  TSharedRef<SWidget,1> *local_6248;
  FSlotArguments *local_6240;
  FSlotArguments *local_6238;
  FArguments *local_6230;
  FArguments *local_6228;
  FArguments *local_6220;
  FArguments *local_6218;
  FArguments *local_6210;
  FArguments *local_6208;
  FSlotArguments *local_6200;
  FSlotArguments *local_61f8;
  FArguments *local_61f0;
  undefined1 *local_61e8;
  TAttribute<FMargin> *local_61e0;
  TAttribute<FMargin> *local_61d8;
  FArguments *local_61d0;
  TAttribute<FOptionalSize> *local_61c8;
  TAttribute<FOptionalSize> *local_61c0;
  FArguments *local_61b8;
  FName *local_61b0;
  FName local_61a8;
  code *local_61a0;
  FSlateBrush *local_6198;
  TAttribute<FSlateBrush_const_*> *local_6190;
  TAttribute<FSlateBrush_const_*> *local_6188;
  FArguments *local_6180;
  FArguments *local_6178;
  FArguments *local_6170;
  FArguments *local_6168;
  FArguments *local_6160;
  FSlotArguments *local_6158;
  TSharedRef<SWidget,1> *local_6150;
  FSlotArguments *local_6148;
  FSlotArguments *local_6140;
  FArguments *local_6138;
  FSlotArguments *local_6130;
  TSharedRef<SWidget,1> *local_6128;
  FSlotArguments *local_6120;
  FSlotArguments *local_6118;
  FArguments *local_6110;
  FSlotArguments *local_6108;
  TSharedRef<SWidget,1> *local_6100;
  FSlotArguments *local_60f8;
  FSlotArguments *local_60f0;
  FArguments *local_60e8;
  FSlotArguments *local_60e0;
  FSlotArguments *local_60d8;
  TSharedRef<SWidget,1> *local_60d0;
  FSlotArguments *local_60c8;
  FSlotArguments *local_60c0;
  FArguments *local_60b8;
  FSlotArguments *local_60b0;
  TSharedRef<SWidget,1> *local_60a8;
  FSlotArguments *local_60a0;
  FSlotArguments *local_6098;
  FArguments *local_6090;
  FSlotArguments *local_6088;
  TSharedRef<SWidget,1> *local_6080;
  FSlotArguments *local_6078;
  FSlotArguments *local_6070;
  FArguments *local_6068;
  FArguments *local_6060;
  FArguments *local_6058;
  FArguments *local_6050;
  FArguments *local_6048;
  FArguments *local_6040;
  FSlotArguments *local_6038;
  FSlotArguments *local_6030;
  FArguments *local_6028;
  FArguments *local_6020;
  FArguments *local_6018;
  FArguments *local_6010;
  FArguments *local_6008;
  SResponsiveGridPanel *local_6000;
  FScopedWidgetSlotArguments *local_5ff8;
  TSharedRef<SWidget,1> *local_5ff0;
  FSlotArguments *local_5fe8;
  SResponsiveGridPanel *local_5fe0;
  FScopedWidgetSlotArguments *local_5fd8;
  TSharedRef<SWidget,1> *local_5fd0;
  FSlotArguments *local_5fc8;
  SResponsiveGridPanel *local_5fc0;
  FScopedWidgetSlotArguments *local_5fb8;
  TSharedRef<SWidget,1> *local_5fb0;
  FSlotArguments *local_5fa8;
  SResponsiveGridPanel *local_5fa0;
  FScopedWidgetSlotArguments *local_5f98;
  TSharedRef<SWidget,1> *local_5f90;
  FSlotArguments *local_5f88;
  SResponsiveGridPanel *local_5f80;
  FScopedWidgetSlotArguments *local_5f78;
  TSharedRef<SWidget,1> *local_5f70;
  FSlotArguments *local_5f68;
  FName *local_5f60;
  TSharedRef<SWidget,1> local_5f58;
  FString local_5f48;
  FString local_5f38;
  FString local_5f28;
  FString local_5f18;
  FString local_5f08;
  TSharedRef<SWidget,1> local_5ef8;
  TSharedRef<SWidget,1> local_5ee8;
  TSharedRef<SWidget,1> local_5ed8;
  FString local_5ec8;
  FString local_5eb8;
  FString local_5ea8;
  FString local_5e98;
  TSharedRef<SWidget,1> local_5e88;
  TSharedRef<SWidget,1> local_5e78;
  TSharedRef<SWidget,1> local_5e68;
  TSharedRef<SWidget,1> local_5e58;
  TSharedRef<SWidget,1> local_5e48;
  FString local_5e38;
  FString local_5e28;
  FString local_5e18;
  FString local_5e08;
  FString local_5df8;
  FString local_5de8;
  TSharedRef<SWidget,1> local_5dd8;
  TSharedRef<SWidget,1> local_5dc8;
  FString local_5db8;
  FString local_5da8;
  FString local_5d98;
  FString local_5d88;
  FString local_5d78;
  FString local_5d68;
  TSharedRef<SWidget,1> local_5d58;
  TSharedRef<SWidget,1> local_5d48;
  TSharedRef<SWidget,1> local_5d38;
  FString local_5d28;
  FString local_5d18;
  FString local_5d08;
  TSharedRef<SWidget,1> local_5cf8;
  TSharedRef<SWidget,1> local_5ce8;
  TSharedRef<SWidget,1> local_5cd8;
  FString local_5cc8;
  FString local_5cb8;
  FString local_5ca8;
  FString local_5c98;
  FString local_5c88;
  TSharedRef<SWidget,1> local_5c78;
  TSharedRef<SWidget,1> local_5c68;
  TSharedRef<SWidget,1> local_5c58;
  FString local_5c48;
  FString local_5c38;
  int local_5c28 [2];
  FName local_5c20;
  int local_5c18 [2];
  FName local_5c10;
  int local_5c08 [2];
  FName local_5c00;
  int local_5bf8 [2];
  FName local_5bf0;
  int local_5be8 [2];
  FName local_5be0;
  int local_5bd8 [2];
  FName local_5bd0;
  FName local_5bc8;
  TSharedRef<SBorder,1> local_5bc0;
  TSharedRef<SScrollBox,1> local_5bb0;
  TSharedRef<SBox,1> local_5ba0;
  TSharedRef<SBorder,1> local_5b90;
  TSharedRef<SResponsiveGridPanel,1> local_5b80;
  TSharedRef<SWidget,1> local_5b70;
  TSharedRef<SWidget,1> local_5b60;
  TSharedRef<SWidget,1> local_5b50;
  TSharedRef<SWidget,1> local_5b40;
  TSharedRef<SWidget,1> local_5b30;
  TSharedRef<SWidget,1> local_5b20;
  TSharedRef<SBox,1> local_5b10;
  TSharedRef<SBorder,1> local_5b00;
  TSharedRef<SResponsiveGridPanel,1> local_5af0;
  TSharedRef<SWidget,1> local_5ae0;
  TSharedRef<SWidget,1> local_5ad0;
  TSharedRef<SWidget,1> local_5ac0;
  TSharedRef<SWidget,1> local_5ab0;
  TSharedRef<SWidget,1> local_5aa0;
  TSharedRef<SBox,1> local_5a90;
  TSharedRef<SBorder,1> local_5a80;
  TSharedRef<SResponsiveGridPanel,1> local_5a70;
  TSharedRef<SWidget,1> local_5a60;
  TSharedRef<SWidget,1> local_5a50;
  TSharedRef<SWidget,1> local_5a40;
  TSharedRef<SBox,1> local_5a30;
  TSharedRef<SBorder,1> local_5a20;
  TSharedRef<SResponsiveGridPanel,1> local_5a10;
  TSharedRef<SWidget,1> local_5a00;
  TSharedRef<SWidget,1> local_59f0;
  TSharedRef<SWidget,1> local_59e0;
  TSharedRef<SWidget,1> local_59d0;
  TSharedRef<SWidget,1> local_59c0;
  TSharedRef<SBox,1> local_59b0;
  TSharedRef<SBorder,1> local_59a0;
  TSharedRef<SResponsiveGridPanel,1> local_5990;
  TSharedRef<SWidget,1> local_5980;
  TSharedRef<SWidget,1> local_5970;
  TSharedRef<SWidget,1> local_5960;
  TSharedRef<SWidget,1> local_5950;
  TSharedRef<SWidget,1> local_5940;
  TSharedRef<SWidget,1> local_5930;
  TSharedRef<SWidget,1> local_5920;
  TSharedRef<SBox,1> local_5910;
  TSharedRef<SBorder,1> local_5900;
  TSharedRef<SResponsiveGridPanel,1> local_58f0;
  TSharedRef<SWidget,1> local_58e0;
  TSharedRef<SWidget,1> local_58d0;
  TSharedRef<SWidget,1> local_58c0;
  TSharedRef<SWidget,1> local_58b0;
  TSharedRef<SWidget,1> local_58a0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_5890;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_5878;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_5860;
  TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> local_5848;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_5830;
  TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> local_5818;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_5800;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> local_57e8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_57d0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_57b8;
  TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> local_57a0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_5788;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_5770;
  TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> local_5758;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_5740;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_5728;
  TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> local_5710;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_56f8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_56e0;
  TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> local_56c8;
  FMargin local_56b0;
  FMargin local_56a0;
  FMargin local_5690;
  FMargin local_5680;
  FMargin local_5670;
  FMargin local_5660;
  TAttribute<FOptionalSize> local_5650;
  TAttribute<FSlateBrush_const_*> local_5630;
  TAttribute<FSlateBrush_const_*> local_5608;
  TAttribute<FSlateBrush_const_*> local_55e0;
  TAttribute<FSlateBrush_const_*> local_55b8;
  TAttribute<FSlateBrush_const_*> local_5590;
  TAttribute<FSlateBrush_const_*> local_5568;
  TAttribute<FSlateBrush_const_*> local_5540;
  TAttribute<FSlateColor> local_5518;
  TAttribute<FMargin> local_54e8;
  TAttribute<FMargin> local_54b8;
  TAttribute<FMargin> local_5488;
  TAttribute<FMargin> local_5458;
  TAttribute<FMargin> local_5428;
  TAttribute<FMargin> local_53f8;
  FSlotArguments local_53c8;
  FSlotArguments local_5360;
  FSlotArguments local_52f8;
  FSlotArguments local_5290;
  FSlotArguments local_5228;
  FSlotArguments local_51c0;
  FSlotArguments local_5158;
  FSlotArguments local_50f0;
  FSlotArguments local_5088;
  FSlotArguments local_5020;
  FSlotArguments local_4fb8;
  FSlotArguments local_4f50;
  FSlotArguments local_4ee8;
  FSlotArguments local_4e80;
  FSlotArguments local_4e18;
  FSlotArguments local_4db0;
  FSlotArguments local_4d48;
  FSlotArguments local_4ce0;
  FSlotArguments local_4c78;
  FSlotArguments local_4c10;
  FSlotArguments local_4ba8;
  FSlotArguments local_4b40;
  FSlotArguments local_4ad8;
  FSlotArguments local_4a70;
  FSlotArguments local_4a08;
  FSlotArguments local_49a0;
  FSlotArguments local_4938;
  FSlotArguments local_4850;
  FSlotArguments local_4768;
  FSlotArguments local_4680;
  FSlotArguments local_4598;
  FSlotArguments local_44b0;
  FArguments local_43c8;
  FArguments local_41b8;
  FArguments local_3f98;
  FArguments local_3d78;
  FArguments local_3b58;
  FArguments local_3938;
  FArguments local_3718;
  FArguments local_34f8;
  FArguments local_3230;
  FArguments local_2ef0;
  FArguments local_2bb0;
  FArguments local_2870;
  FArguments local_2530;
  FArguments local_21f0;
  FArguments local_1eb0;
  FArguments local_1ad0;
  FArguments local_16f0;
  FArguments local_1310;
  FArguments local_f30;
  FArguments local_b50;
  FArguments local_770;
  FScopedWidgetSlotArguments local_388;
  FScopedWidgetSlotArguments local_2d8;
  FScopedWidgetSlotArguments local_228;
  FScopedWidgetSlotArguments local_178;
  FScopedWidgetSlotArguments local_c8;
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14308ca54;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_69c8;
  TSharedPtr<SResponsiveGridPanel,1>::TSharedPtr<SResponsiveGridPanel,1>
            (&local_6960,(FNullTag *)0x0);
  local_6008 = SUserWidget::FArguments::FArguments(&local_43c8);
  local_68f0 = SBorder::FArguments::FArguments(&local_770);
  local_6900 = &local_5630;
  local_6950 = FTestStyle::Get();
  local_6910 = *(code **)((longlong)*local_6950 + 0x50);
  local_5f60 = &local_5bd0;
  pFVar1 = ::FName::FName(local_5f60,"RichText.Background");
  local_6918 = *pFVar1;
  local_6908 = (FSlateBrush *)(*local_6910)(local_6950,local_6918,0,0);
  local_68f8 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_6900,&local_6908);
  local_68d8 = SBorder::FArguments::BorderImage(local_68f0,local_68f8);
  local_68e8 = &local_5518;
  local_68e0 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FLinearColor>
                         (local_68e8,&FLinearColor::Black);
  local_6018 = SBorder::FArguments::ForegroundColor(local_68d8,local_68e0);
  local_6828 = SScrollBox::FArguments::FArguments(&local_34f8);
  local_6838 = SScrollBox::Slot(&local_44b0);
  local_68c0 = SBox::FArguments::FArguments(&local_21f0);
  local_68d0 = &local_54e8;
  pFVar2 = FMargin::FMargin(&local_5660,__real_42480000,__real_41200000);
  local_68c8 = TAttribute<FMargin>::TAttribute<FMargin>(local_68d0,pFVar2);
  local_6848 = SBox::FArguments::Padding(local_68c0,local_68c8);
  local_6888 = SBorder::FArguments::FArguments(&local_b50);
  local_6898 = &local_5608;
  local_6948 = FTestStyle::Get();
  local_68a8 = *(code **)((longlong)*local_6948 + 0x50);
  local_68b8 = &local_5bc8;
  pFVar1 = ::FName::FName(local_68b8,"RichText.Tagline.DarkBackground");
  local_68b0 = *pFVar1;
  local_68a0 = (FSlateBrush *)(*local_68a8)(local_6948,local_68b0,0,0);
  local_6890 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_6898,&local_68a0);
  local_6880 = SBorder::FArguments::BorderImage(local_6888,local_6890);
  local_6858 = SBorder::FArguments::Padding(local_6880,__real_41200000);
  local_6878 = SResponsiveGridPanel::FArguments::FArguments(&local_3718);
  local_6870 = SResponsiveGridPanel::FArguments::ColumnGutter(local_6878,__real_40a00000);
  local_6860 = SResponsiveGridPanel::FArguments::RowGutter(local_6870,__real_40a00000);
  local_697c = 0xc;
  TVar3 = RequiredArgs::MakeRequiredArgs<int>(local_5c28);
  local_6868 = MakeTDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>
                         (&local_5818,"SResponsiveGridPanel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                          ,0x1529,(T1RequiredArgs<int_&&> *)TVar3.Arg0);
  pTVar4 = TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>::
           Expose<SResponsiveGridPanel>(local_6868,&local_6960);
  pTVar5 = TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>::operator<<=
                     (pTVar4,&local_58f0,local_6860);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SResponsiveGridPanel>(&local_5ed8,pTVar5);
  local_6850 = SBorder::FArguments::operator[](local_6858,&local_5ed8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6998);
  pTVar6 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                     (&local_5770,"SBorder",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1525,&local_6998);
  pTVar7 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar6,&local_5900,local_6850);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_5ee8,pTVar7);
  local_6840 = SBox::FArguments::operator[](local_6848,&local_5ee8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6997);
  pTVar8 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                     (&local_5830,"SBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1522,&local_6997);
  pTVar9 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar8,&local_5910,local_6840)
  ;
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_5ef8,pTVar9);
  local_6830 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6838,&local_5ef8);
  local_6638 = SScrollBox::FArguments::operator+(local_6828,local_6830);
  pFVar10 = SScrollBox::Slot(&local_4598);
  local_6820 = &pFVar10->field_0x18;
  local_6648 = TPaddingWidgetSlotMixin<SScrollBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_6820,0.0,__real_41a00000,0.0,0.0);
  local_6808 = SBox::FArguments::FArguments(&local_2530);
  local_6818 = &local_54b8;
  pFVar2 = FMargin::FMargin(&local_56b0,__real_42480000,__real_41200000);
  local_6810 = TAttribute<FMargin>::TAttribute<FMargin>(local_6818,pFVar2);
  local_6658 = SBox::FArguments::Padding(local_6808,local_6810);
  local_67d0 = SBorder::FArguments::FArguments(&local_f30);
  local_67e0 = &local_55e0;
  local_6940 = FTestStyle::Get();
  local_67f0 = *(code **)((longlong)*local_6940 + 0x50);
  local_6800 = &local_5c20;
  pFVar1 = ::FName::FName(local_6800,"RichText.Tagline.DarkBackground");
  local_67f8 = *pFVar1;
  local_67e8 = (FSlateBrush *)(*local_67f0)(local_6940,local_67f8,0);
  local_67d8 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_67e0,&local_67e8);
  local_67c8 = SBorder::FArguments::BorderImage(local_67d0,local_67d8);
  local_6668 = SBorder::FArguments::Padding(local_67c8,__real_41200000);
  local_67c0 = SResponsiveGridPanel::FArguments::FArguments(&local_3938);
  local_67b8 = SResponsiveGridPanel::FArguments::ColumnGutter(local_67c0,__real_40a00000);
  local_6788 = SResponsiveGridPanel::FArguments::RowGutter(local_67b8,__real_40a00000);
  local_67b0 = SResponsiveGridPanel::Slot(&local_49a0,0);
  local_67a8 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_67b0,__real_44780000,8,0);
  local_6798 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan(local_67a8,0.0,0xc,0);
  ::FString::FString(&local_5f08,L".mobile-col-12 .desktop-col-8");
  local_67a0 = ConstructBox(this,&local_5920,&local_5f08);
  local_6790 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6798,local_67a0);
  local_6758 = SResponsiveGridPanel::FArguments::operator+(local_6788,local_6790);
  local_6780 = SResponsiveGridPanel::Slot(&local_4a08,0);
  local_6778 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_6780,__real_44780000,4,0);
  local_6768 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan(local_6778,0.0,6,0);
  ::FString::FString(&local_5f18,L".mobile-col-6 .desktop-col-4");
  local_6770 = ConstructBox(this,&local_5930,&local_5f18);
  local_6760 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6768,local_6770);
  local_6728 = SResponsiveGridPanel::FArguments::operator+(local_6758,local_6760);
  local_6750 = SResponsiveGridPanel::Slot(&local_4a70,1);
  local_6748 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_6750,__real_44780000,4,0);
  local_6738 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan(local_6748,0.0,6,0);
  ::FString::FString(&local_5f28,L".mobile-col-6 .desktop-col-4");
  local_6740 = ConstructBox(this,&local_5940,&local_5f28);
  local_6730 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6738,local_6740);
  local_66f8 = SResponsiveGridPanel::FArguments::operator+(local_6728,local_6730);
  local_6720 = SResponsiveGridPanel::Slot(&local_4ad8,1);
  local_6718 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_6720,__real_44780000,4,0);
  local_6708 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan(local_6718,0.0,6,0);
  ::FString::FString(&local_5db8,L".mobile-col-6 .desktop-col-4");
  local_6710 = ConstructBox(this,&local_5950,&local_5db8);
  local_6700 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6708,local_6710);
  local_66c8 = SResponsiveGridPanel::FArguments::operator+(local_66f8,local_6700);
  local_66f0 = SResponsiveGridPanel::Slot(&local_4b40,1);
  local_66e8 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_66f0,__real_44780000,4,0);
  local_66d8 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan(local_66e8,0.0,6,0);
  ::FString::FString(&local_5f48,L".mobile-col-6 .desktop-col-4");
  local_66e0 = ConstructBox(this,&local_5960,&local_5f48);
  local_66d0 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_66d8,local_66e0);
  local_66a0 = SResponsiveGridPanel::FArguments::operator+(local_66c8,local_66d0);
  local_66c0 = SResponsiveGridPanel::Slot(&local_4ba8,2);
  local_66b0 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan(local_66c0,0.0,6,0);
  ::FString::FString(&local_5c38,L".mobile-col-6");
  local_66b8 = ConstructBox(this,&local_5970,&local_5c38);
  local_66a8 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_66b0,local_66b8);
  local_6678 = SResponsiveGridPanel::FArguments::operator+(local_66a0,local_66a8);
  local_6698 = SResponsiveGridPanel::Slot(&local_4c10,2);
  local_6688 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan(local_6698,0.0,6,0);
  ::FString::FString(&local_5c48,L".mobile-col-6");
  local_6690 = ConstructBox(this,&local_5980,&local_5c48);
  local_6680 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6688,local_6690);
  local_6670 = SResponsiveGridPanel::FArguments::operator+(local_6678,local_6680);
  local_6978 = 0xc;
  TVar3 = RequiredArgs::MakeRequiredArgs<int>(local_5c18);
  pTVar4 = MakeTDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>
                     (&local_5848,"SResponsiveGridPanel",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x153a,(T1RequiredArgs<int_&&> *)TVar3.Arg0);
  pTVar5 = TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>::operator<<=
                     (pTVar4,&local_5990,local_6670);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SResponsiveGridPanel>(&local_5c58,pTVar5);
  local_6660 = SBorder::FArguments::operator[](local_6668,&local_5c58);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6996);
  pTVar6 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                     (&local_5860,"SBorder",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1536,&local_6996);
  pTVar7 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar6,&local_59a0,local_6660);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_5c68,pTVar7);
  local_6650 = SBox::FArguments::operator[](local_6658,&local_5c68);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6995);
  pTVar8 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                     (&local_5878,"SBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1533,&local_6995);
  pTVar9 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar8,&local_59b0,local_6650)
  ;
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_5c78,pTVar9);
  local_6640 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6648,&local_5c78);
  local_6490 = SScrollBox::FArguments::operator+(local_6638,local_6640);
  pFVar10 = SScrollBox::Slot(&local_4680);
  local_6630 = &pFVar10->field_0x18;
  local_64a0 = TPaddingWidgetSlotMixin<SScrollBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_6630,0.0,__real_41a00000,0.0,0.0);
  local_6618 = SBox::FArguments::FArguments(&local_2870);
  local_6628 = &local_5488;
  pFVar2 = FMargin::FMargin(&local_56a0,__real_42480000,__real_41200000);
  local_6620 = TAttribute<FMargin>::TAttribute<FMargin>(local_6628,pFVar2);
  local_64b0 = SBox::FArguments::Padding(local_6618,local_6620);
  local_65e0 = SBorder::FArguments::FArguments(&local_1310);
  local_65f0 = &local_55b8;
  local_6938 = FTestStyle::Get();
  local_6600 = *(code **)((longlong)*local_6938 + 0x50);
  local_6610 = &local_5c10;
  pFVar1 = ::FName::FName(local_6610,"RichText.Tagline.DarkBackground");
  local_6608 = *pFVar1;
  local_65f8 = (FSlateBrush *)(*local_6600)(local_6938,local_6608,0);
  local_65e8 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_65f0,&local_65f8);
  local_65d8 = SBorder::FArguments::BorderImage(local_65e0,local_65e8);
  local_64c0 = SBorder::FArguments::Padding(local_65d8,__real_41200000);
  local_65d0 = SResponsiveGridPanel::FArguments::FArguments(&local_3b58);
  local_65c8 = SResponsiveGridPanel::FArguments::ColumnGutter(local_65d0,__real_40a00000);
  local_6590 = SResponsiveGridPanel::FArguments::RowGutter(local_65c8,__real_40a00000);
  local_65c0 = SResponsiveGridPanel::Slot(&local_4c78,0);
  local_65b8 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_65c0,__real_44780000,8,0);
  local_65b0 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_65b8,__real_44400000,6,0);
  local_65a0 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan(local_65b0,0.0,0xc,0);
  ::FString::FString(&local_5c88,L".mobile-col-12 .tablet-col-6 .desktop-col-8");
  local_65a8 = ConstructBox(this,&local_59c0,&local_5c88);
  local_6598 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_65a0,local_65a8);
  local_6560 = SResponsiveGridPanel::FArguments::operator+(local_6590,local_6598);
  local_6588 = SResponsiveGridPanel::Slot(&local_4ce0,0);
  local_6580 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_6588,__real_44780000,4,0);
  local_6570 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan(local_6580,0.0,6,0);
  ::FString::FString(&local_5c98,L".mobile-col-6 .desktop-col-4");
  local_6578 = ConstructBox(this,&local_59d0,&local_5c98);
  local_6568 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6570,local_6578);
  local_6530 = SResponsiveGridPanel::FArguments::operator+(local_6560,local_6568);
  local_6558 = SResponsiveGridPanel::Slot(&local_4d48,1);
  local_6550 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_6558,__real_44400000,4,0);
  local_6540 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan(local_6550,0.0,6,0);
  ::FString::FString(&local_5ca8,L".mobile-col-6 .tablet-col-4");
  local_6548 = ConstructBox(this,&local_59e0,&local_5ca8);
  local_6538 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6540,local_6548);
  local_6500 = SResponsiveGridPanel::FArguments::operator+(local_6530,local_6538);
  local_6528 = SResponsiveGridPanel::Slot(&local_4db0,1);
  local_6520 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_6528,__real_44400000,4,0);
  local_6510 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan(local_6520,0.0,6,0);
  ::FString::FString(&local_5cb8,L".mobile-col-6 .tablet-col-4");
  local_6518 = ConstructBox(this,&local_59f0,&local_5cb8);
  local_6508 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6510,local_6518);
  local_64d0 = SResponsiveGridPanel::FArguments::operator+(local_6500,local_6508);
  local_64f8 = SResponsiveGridPanel::Slot(&local_4e18,1);
  local_64f0 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_64f8,__real_44400000,4,0);
  local_64e0 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan(local_64f0,0.0,6,0);
  ::FString::FString(&local_5cc8,L".mobile-col-6 .tablet-col-4");
  local_64e8 = ConstructBox(this,&local_5a00,&local_5cc8);
  local_64d8 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_64e0,local_64e8);
  local_64c8 = SResponsiveGridPanel::FArguments::operator+(local_64d0,local_64d8);
  local_6974 = 0xc;
  TVar3 = RequiredArgs::MakeRequiredArgs<int>(local_5c08);
  pTVar4 = MakeTDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>
                     (&local_56c8,"SResponsiveGridPanel",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1573,(T1RequiredArgs<int_&&> *)TVar3.Arg0);
  pTVar5 = TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>::operator<<=
                     (pTVar4,&local_5a10,local_64c8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SResponsiveGridPanel>(&local_5cd8,pTVar5);
  local_64b8 = SBorder::FArguments::operator[](local_64c0,&local_5cd8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6994);
  pTVar6 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                     (&local_56e0,"SBorder",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x156f,&local_6994);
  pTVar7 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar6,&local_5a20,local_64b8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_5ce8,pTVar7);
  local_64a8 = SBox::FArguments::operator[](local_64b0,&local_5ce8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6993);
  pTVar8 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                     (&local_56f8,"SBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x156c,&local_6993);
  pTVar9 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar8,&local_5a30,local_64a8)
  ;
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_5cf8,pTVar9);
  local_6498 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_64a0,&local_5cf8);
  local_6368 = SScrollBox::FArguments::operator+(local_6490,local_6498);
  pFVar10 = SScrollBox::Slot(&local_4768);
  local_6488 = &pFVar10->field_0x18;
  local_6378 = TPaddingWidgetSlotMixin<SScrollBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_6488,0.0,__real_41a00000,0.0,0.0);
  local_6470 = SBox::FArguments::FArguments(&local_2bb0);
  local_6480 = &local_5458;
  pFVar2 = FMargin::FMargin(&local_5690,__real_42480000,__real_41200000);
  local_6478 = TAttribute<FMargin>::TAttribute<FMargin>(local_6480,pFVar2);
  local_6388 = SBox::FArguments::Padding(local_6470,local_6478);
  local_6438 = SBorder::FArguments::FArguments(&local_16f0);
  local_6448 = &local_5590;
  local_6930 = FTestStyle::Get();
  local_6458 = *(code **)((longlong)*local_6930 + 0x50);
  local_6468 = &local_5c00;
  pFVar1 = ::FName::FName(local_6468,"RichText.Tagline.DarkBackground");
  local_6460 = *pFVar1;
  local_6450 = (FSlateBrush *)(*local_6458)(local_6930,local_6460,0);
  local_6440 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_6448,&local_6450);
  local_6430 = SBorder::FArguments::BorderImage(local_6438,local_6440);
  local_6398 = SBorder::FArguments::Padding(local_6430,__real_41200000);
  local_6428 = SResponsiveGridPanel::FArguments::FArguments(&local_3d78);
  local_6420 = SResponsiveGridPanel::FArguments::ColumnGutter(local_6428,__real_40a00000);
  local_63f8 = SResponsiveGridPanel::FArguments::RowGutter(local_6420,__real_40a00000);
  local_6418 = SResponsiveGridPanel::Slot(&local_4e80,0);
  local_6408 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan(local_6418,0.0,9,0);
  ::FString::FString(&local_5d08,L".mobile-col-9");
  local_6410 = ConstructBox(this,&local_5a40,&local_5d08);
  local_6400 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6408,local_6410);
  local_63d0 = SResponsiveGridPanel::FArguments::operator+(local_63f8,local_6400);
  local_63f0 = SResponsiveGridPanel::Slot(&local_4ee8,0);
  local_63e0 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan(local_63f0,0.0,4,0);
  ::FString::FString(&local_5d18,
                     L".mobile-col-4 \nSince 9 + 4 = 13 > 12, this 4 column wide slot\ngets wrapped onto a new line as one contiguous unit."
                    );
  local_63e8 = ConstructBox(this,&local_5a50,&local_5d18);
  local_63d8 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_63e0,local_63e8);
  local_63a8 = SResponsiveGridPanel::FArguments::operator+(local_63d0,local_63d8);
  local_63c8 = SResponsiveGridPanel::Slot(&local_4f50,0);
  local_63b8 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan(local_63c8,0.0,6,0);
  ::FString::FString(&local_5d28,L".mobile-col-6 \nSubsequent columns continue along the new line.")
  ;
  local_63c0 = ConstructBox(this,&local_5a60,&local_5d28);
  local_63b0 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_63b8,local_63c0);
  local_63a0 = SResponsiveGridPanel::FArguments::operator+(local_63a8,local_63b0);
  local_6970 = 0xc;
  TVar3 = RequiredArgs::MakeRequiredArgs<int>(local_5bf8);
  pTVar4 = MakeTDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>
                     (&local_5710,"SResponsiveGridPanel",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x15a3,(T1RequiredArgs<int_&&> *)TVar3.Arg0);
  pTVar5 = TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>::operator<<=
                     (pTVar4,&local_5a70,local_63a0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SResponsiveGridPanel>(&local_5d38,pTVar5);
  local_6390 = SBorder::FArguments::operator[](local_6398,&local_5d38);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6992);
  pTVar6 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                     (&local_5728,"SBorder",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x159f,&local_6992);
  pTVar7 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar6,&local_5a80,local_6390);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_5d48,pTVar7);
  local_6380 = SBox::FArguments::operator[](local_6388,&local_5d48);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6991);
  pTVar8 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                     (&local_5740,"SBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x159c,&local_6991);
  pTVar9 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar8,&local_5a90,local_6380)
  ;
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_5d58,pTVar9);
  local_6370 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6378,&local_5d58);
  local_61f0 = SScrollBox::FArguments::operator+(local_6368,local_6370);
  pFVar10 = SScrollBox::Slot(&local_4850);
  local_6360 = &pFVar10->field_0x18;
  local_6200 = TPaddingWidgetSlotMixin<SScrollBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_6360,0.0,__real_41a00000,0.0,0.0);
  local_6348 = SBox::FArguments::FArguments(&local_2ef0);
  local_6358 = &local_5428;
  pFVar2 = FMargin::FMargin(&local_5680,__real_42480000,__real_41200000);
  local_6350 = TAttribute<FMargin>::TAttribute<FMargin>(local_6358,pFVar2);
  local_6210 = SBox::FArguments::Padding(local_6348,local_6350);
  local_6310 = SBorder::FArguments::FArguments(&local_1ad0);
  local_6320 = &local_5568;
  local_6928 = FTestStyle::Get();
  local_6330 = *(code **)((longlong)*local_6928 + 0x50);
  local_6340 = &local_5bf0;
  pFVar1 = ::FName::FName(local_6340,"RichText.Tagline.DarkBackground");
  local_6338 = *pFVar1;
  local_6328 = (FSlateBrush *)(*local_6330)(local_6928,local_6338,0);
  local_6318 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_6320,&local_6328);
  local_6308 = SBorder::FArguments::BorderImage(local_6310,local_6318);
  local_6220 = SBorder::FArguments::Padding(local_6308,__real_41200000);
  local_6300 = SResponsiveGridPanel::FArguments::FArguments(&local_3f98);
  local_62f8 = SResponsiveGridPanel::FArguments::ColumnGutter(local_6300,__real_40a00000);
  local_62d0 = SResponsiveGridPanel::FArguments::RowGutter(local_62f8,__real_40a00000);
  local_62f0 = SResponsiveGridPanel::Slot(&local_4fb8,0);
  local_62e0 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_62f0,__real_44780000,4,0);
  ::FString::FString(&local_5d68,L".desktop-col-4");
  local_62e8 = ConstructBox(this,&local_5aa0,&local_5d68);
  local_62d8 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_62e0,local_62e8);
  local_62a8 = SResponsiveGridPanel::FArguments::operator+(local_62d0,local_62d8);
  local_62c8 = SResponsiveGridPanel::Slot(&local_5020,0);
  local_62b8 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_62c8,__real_44780000,4,4);
  ::FString::FString(&local_5d78,L".desktop-col-4-offset-4");
  local_62c0 = ConstructBox(this,&local_5ab0,&local_5d78);
  local_62b0 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_62b8,local_62c0);
  local_6280 = SResponsiveGridPanel::FArguments::operator+(local_62a8,local_62b0);
  local_62a0 = SResponsiveGridPanel::Slot(&local_5088,1);
  local_6290 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_62a0,__real_44780000,3,3);
  ::FString::FString(&local_5d88,L".desktop-col-3-offset-3");
  local_6298 = ConstructBox(this,&local_5ac0,&local_5d88);
  local_6288 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6290,local_6298);
  local_6258 = SResponsiveGridPanel::FArguments::operator+(local_6280,local_6288);
  local_6278 = SResponsiveGridPanel::Slot(&local_50f0,1);
  local_6268 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_6278,__real_44780000,3,3);
  ::FString::FString(&local_5d98,L".desktop-col-3-offset-3");
  local_6270 = ConstructBox(this,&local_5ad0,&local_5d98);
  local_6260 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6268,local_6270);
  local_6230 = SResponsiveGridPanel::FArguments::operator+(local_6258,local_6260);
  local_6250 = SResponsiveGridPanel::Slot(&local_5158,2);
  local_6240 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_6250,__real_44780000,6,3);
  ::FString::FString(&local_5da8,L".desktop-col-6-offset-3");
  local_6248 = ConstructBox(this,&local_5ae0,&local_5da8);
  local_6238 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6240,local_6248);
  local_6228 = SResponsiveGridPanel::FArguments::operator+(local_6230,local_6238);
  local_696c = 0xc;
  TVar3 = RequiredArgs::MakeRequiredArgs<int>(local_5be8);
  pTVar4 = MakeTDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>
                     (&local_5758,"SResponsiveGridPanel",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x15c3,(T1RequiredArgs<int_&&> *)TVar3.Arg0);
  pTVar5 = TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>::operator<<=
                     (pTVar4,&local_5af0,local_6228);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SResponsiveGridPanel>(&local_5f58,pTVar5);
  local_6218 = SBorder::FArguments::operator[](local_6220,&local_5f58);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6990);
  pTVar6 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                     (&local_5890,"SBorder",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x15bf,&local_6990);
  pTVar7 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar6,&local_5b00,local_6218);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_5dc8,pTVar7);
  local_6208 = SBox::FArguments::operator[](local_6210,&local_5dc8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_698f);
  pTVar8 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                     (&local_5788,"SBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x15bc,&local_698f);
  pTVar9 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar8,&local_5b10,local_6208)
  ;
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_5dd8,pTVar9);
  local_61f8 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6200,&local_5dd8);
  local_6028 = SScrollBox::FArguments::operator+(local_61f0,local_61f8);
  pFVar10 = SScrollBox::Slot(&local_4938);
  local_61e8 = &pFVar10->field_0x18;
  local_6038 = TPaddingWidgetSlotMixin<SScrollBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_61e8,0.0,__real_41a00000,0.0,0.0);
  local_61d0 = SBox::FArguments::FArguments(&local_3230);
  local_61e0 = &local_53f8;
  pFVar2 = FMargin::FMargin(&local_5670,__real_42480000,__real_41200000);
  local_61d8 = TAttribute<FMargin>::TAttribute<FMargin>(local_61e0,pFVar2);
  local_61b8 = SBox::FArguments::Padding(local_61d0,local_61d8);
  local_61c8 = &local_5650;
  local_6968[0] = 800;
  local_61c0 = TAttribute<FOptionalSize>::TAttribute<FOptionalSize><int>(local_61c8,local_6968);
  local_6048 = SBox::FArguments::HeightOverride(local_61b8,local_61c0);
  local_6180 = SBorder::FArguments::FArguments(&local_1eb0);
  local_6190 = &local_5540;
  local_6920 = FTestStyle::Get();
  local_61a0 = *(code **)((longlong)*local_6920 + 0x50);
  local_61b0 = &local_5be0;
  pFVar1 = ::FName::FName(local_61b0,"RichText.Tagline.DarkBackground");
  local_61a8 = *pFVar1;
  local_6198 = (FSlateBrush *)(*local_61a0)(local_6920,local_61a8,0);
  local_6188 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_6190,&local_6198);
  local_6178 = SBorder::FArguments::BorderImage(local_6180,local_6188);
  local_6058 = SBorder::FArguments::Padding(local_6178,__real_41200000);
  local_6170 = SResponsiveGridPanel::FArguments::FArguments(&local_41b8);
  local_6168 = SResponsiveGridPanel::FArguments::ColumnGutter(local_6170,__real_40a00000);
  local_6160 = SResponsiveGridPanel::FArguments::RowGutter(local_6168,__real_40a00000);
  local_6138 = SResponsiveGridPanel::FArguments::FillRow(local_6160,1,__real_3f800000);
  local_6158 = SResponsiveGridPanel::Slot(&local_51c0,0);
  local_6148 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_6158,__real_44780000,4,0);
  ::FString::FString(&local_5de8,L".desktop-col-4");
  local_6150 = ConstructBox(this,&local_5b20,&local_5de8);
  local_6140 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6148,local_6150);
  local_6110 = SResponsiveGridPanel::FArguments::operator+(local_6138,local_6140);
  local_6130 = SResponsiveGridPanel::Slot(&local_5228,0);
  local_6120 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_6130,__real_44780000,4,0);
  ::FString::FString(&local_5df8,L".desktop-col-4");
  local_6128 = ConstructBox(this,&local_5b30,&local_5df8);
  local_6118 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6120,local_6128);
  local_60e8 = SResponsiveGridPanel::FArguments::operator+(local_6110,local_6118);
  local_6108 = SResponsiveGridPanel::Slot(&local_5290,0);
  local_60f8 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_6108,__real_44780000,4,0);
  ::FString::FString(&local_5e08,L".desktop-col-4");
  local_6100 = ConstructBox(this,&local_5b40,&local_5e08);
  local_60f0 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_60f8,local_6100);
  local_60b8 = SResponsiveGridPanel::FArguments::operator+(local_60e8,local_60f0);
  local_60e0 = SResponsiveGridPanel::Slot(&local_52f8,1);
  local_60d8 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_60e0,__real_44780000,3,0);
  local_60c8 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan(local_60d8,0.0,0,0);
  ::FString::FString(&local_5e18,L".desktop-col-3");
  local_60d0 = ConstructBox(this,&local_5b50,&local_5e18);
  local_60c0 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_60c8,local_60d0);
  local_6090 = SResponsiveGridPanel::FArguments::operator+(local_60b8,local_60c0);
  local_60b0 = SResponsiveGridPanel::Slot(&local_5360,1);
  local_60a0 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_60b0,__real_44780000,9,0);
  ::FString::FString(&local_5e28,L".desktop-col-9");
  local_60a8 = ConstructBox(this,&local_5b60,&local_5e28);
  local_6098 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_60a0,local_60a8);
  local_6068 = SResponsiveGridPanel::FArguments::operator+(local_6090,local_6098);
  local_6088 = SResponsiveGridPanel::Slot(&local_53c8,2);
  local_6078 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         (local_6088,__real_44780000,6,3);
  ::FString::FString(&local_5e38,L".desktop-col-6-offset-3");
  local_6080 = ConstructBox(this,&local_5b70,&local_5e38);
  local_6070 = TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6078,local_6080);
  local_6060 = SResponsiveGridPanel::FArguments::operator+(local_6068,local_6070);
  local_6968[1] = 0xc;
  TVar3 = RequiredArgs::MakeRequiredArgs<int>(local_5bd8);
  pTVar4 = MakeTDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>
                     (&local_57a0,"SResponsiveGridPanel",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x15ee,(T1RequiredArgs<int_&&> *)TVar3.Arg0);
  pTVar5 = TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>::operator<<=
                     (pTVar4,&local_5b80,local_6060);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SResponsiveGridPanel>(&local_5e48,pTVar5);
  local_6050 = SBorder::FArguments::operator[](local_6058,&local_5e48);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_698e);
  pTVar6 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                     (&local_57b8,"SBorder",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x15ea,&local_698e);
  pTVar7 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar6,&local_5b90,local_6050);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_5e58,pTVar7);
  local_6040 = SBox::FArguments::operator[](local_6048,&local_5e58);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_698d);
  pTVar8 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                     (&local_57d0,"SBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x15e6,&local_698d);
  pTVar9 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar8,&local_5ba0,local_6040)
  ;
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_5e68,pTVar9);
  local_6030 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6038,&local_5e68);
  local_6020 = SScrollBox::FArguments::operator+(local_6028,local_6030);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_698c);
  this_00 = MakeTDecl<SScrollBox,RequiredArgs::T0RequiredArgs>
                      (&local_57e8,"SScrollBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x151f,&local_698c);
  pTVar11 = TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_00,&local_5bb0,local_6020);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SScrollBox>(&local_5e78,pTVar11);
  local_6010 = SBorder::FArguments::operator[](local_6018,&local_5e78);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_698b);
  pTVar6 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                     (&local_5800,"SBorder",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x151b,local_698b);
  pTVar7 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar6,&local_5bc0,local_6010);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_5e88,pTVar7);
  pFVar12 = SUserWidget::FArguments::operator[](local_6008,&local_5e88);
  SUserWidget::Construct((SUserWidget *)this,pFVar12);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5e88);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_5bc0);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_5800);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5e78);
  TSharedRef<SScrollBox,1>::~TSharedRef<SScrollBox,1>(&local_5bb0);
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>(&local_57e8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5e68);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_5ba0);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_57d0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5e58);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_5b90);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_57b8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5e48);
  TSharedRef<SResponsiveGridPanel,1>::~TSharedRef<SResponsiveGridPanel,1>(&local_5b80);
  TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>::
  ~TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>(&local_57a0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5b70);
  ::FString::~FString(&local_5e38);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_53c8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5b60);
  ::FString::~FString(&local_5e28);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_5360);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5b50);
  ::FString::~FString(&local_5e18);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_52f8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5b40);
  ::FString::~FString(&local_5e08);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_5290);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5b30);
  ::FString::~FString(&local_5df8);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_5228);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5b20);
  ::FString::~FString(&local_5de8);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_51c0);
  SResponsiveGridPanel::FArguments::~FArguments(&local_41b8);
  SBorder::FArguments::~FArguments(&local_1eb0);
  SBox::FArguments::~FArguments(&local_3230);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_4938);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5dd8);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_5b10);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_5788);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5dc8);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_5b00);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_5890);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5f58);
  TSharedRef<SResponsiveGridPanel,1>::~TSharedRef<SResponsiveGridPanel,1>(&local_5af0);
  TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>::
  ~TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>(&local_5758);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5ae0);
  ::FString::~FString(&local_5da8);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_5158);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5ad0);
  ::FString::~FString(&local_5d98);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_50f0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5ac0);
  ::FString::~FString(&local_5d88);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_5088);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5ab0);
  ::FString::~FString(&local_5d78);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_5020);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5aa0);
  ::FString::~FString(&local_5d68);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_4fb8);
  SResponsiveGridPanel::FArguments::~FArguments(&local_3f98);
  SBorder::FArguments::~FArguments(&local_1ad0);
  SBox::FArguments::~FArguments(&local_2ef0);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_4850);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5d58);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_5a90);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_5740);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5d48);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_5a80);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_5728);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5d38);
  TSharedRef<SResponsiveGridPanel,1>::~TSharedRef<SResponsiveGridPanel,1>(&local_5a70);
  TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>::
  ~TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>(&local_5710);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5a60);
  ::FString::~FString(&local_5d28);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_4f50);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5a50);
  ::FString::~FString(&local_5d18);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_4ee8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5a40);
  ::FString::~FString(&local_5d08);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_4e80);
  SResponsiveGridPanel::FArguments::~FArguments(&local_3d78);
  SBorder::FArguments::~FArguments(&local_16f0);
  SBox::FArguments::~FArguments(&local_2bb0);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_4768);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5cf8);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_5a30);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_56f8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5ce8);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_5a20);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_56e0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5cd8);
  TSharedRef<SResponsiveGridPanel,1>::~TSharedRef<SResponsiveGridPanel,1>(&local_5a10);
  TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>::
  ~TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>(&local_56c8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5a00);
  ::FString::~FString(&local_5cc8);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_4e18);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_59f0);
  ::FString::~FString(&local_5cb8);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_4db0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_59e0);
  ::FString::~FString(&local_5ca8);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_4d48);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_59d0);
  ::FString::~FString(&local_5c98);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_4ce0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_59c0);
  ::FString::~FString(&local_5c88);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_4c78);
  SResponsiveGridPanel::FArguments::~FArguments(&local_3b58);
  SBorder::FArguments::~FArguments(&local_1310);
  SBox::FArguments::~FArguments(&local_2870);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_4680);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5c78);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_59b0);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_5878);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5c68);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_59a0);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_5860);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5c58);
  TSharedRef<SResponsiveGridPanel,1>::~TSharedRef<SResponsiveGridPanel,1>(&local_5990);
  TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>::
  ~TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>(&local_5848);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5980);
  ::FString::~FString(&local_5c48);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_4c10);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5970);
  ::FString::~FString(&local_5c38);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_4ba8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5960);
  ::FString::~FString(&local_5f48);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_4b40);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5950);
  ::FString::~FString(&local_5db8);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_4ad8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5940);
  ::FString::~FString(&local_5f28);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_4a70);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5930);
  ::FString::~FString(&local_5f18);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_4a08);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5920);
  ::FString::~FString(&local_5f08);
  SResponsiveGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_49a0);
  SResponsiveGridPanel::FArguments::~FArguments(&local_3938);
  SBorder::FArguments::~FArguments(&local_f30);
  SBox::FArguments::~FArguments(&local_2530);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_4598);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5ef8);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_5910);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_5830);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5ee8);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_5900);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_5770);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5ed8);
  TSharedRef<SResponsiveGridPanel,1>::~TSharedRef<SResponsiveGridPanel,1>(&local_58f0);
  TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>::
  ~TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>(&local_5818);
  SResponsiveGridPanel::FArguments::~FArguments(&local_3718);
  SBorder::FArguments::~FArguments(&local_b50);
  SBox::FArguments::~FArguments(&local_21f0);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_44b0);
  SScrollBox::FArguments::~FArguments(&local_34f8);
  SBorder::FArguments::~FArguments(&local_770);
  SUserWidget::FArguments::~FArguments(&local_43c8);
  for (local_6988 = 0; local_6988 < 0xc; local_6988 = local_6988 + 1) {
    local_6000 = TSharedPtr<SResponsiveGridPanel,1>::operator->(&local_6960);
    local_5ff8 = SResponsiveGridPanel::AddSlot(local_6000,&local_388,0);
    local_5fe8 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                           ((FSlotArguments *)local_5ff8,__real_44780000,1,0);
    ::FString::FString(&local_5ec8,L".desktop-col-1");
    local_5ff0 = ConstructBox(this,&local_58e0,&local_5ec8);
    TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)local_5fe8,local_5ff0);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_58e0);
    ::FString::~FString(&local_5ec8);
    TPanelChildren<SResponsiveGridPanel::FSlot>::FScopedWidgetSlotArguments::
    ~FScopedWidgetSlotArguments(&local_388);
  }
  local_5fe0 = TSharedPtr<SResponsiveGridPanel,1>::operator->(&local_6960);
  local_5fd8 = SResponsiveGridPanel::AddSlot(local_5fe0,&local_2d8,1);
  local_5fc8 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         ((FSlotArguments *)local_5fd8,__real_44780000,8,0);
  ::FString::FString(&local_5eb8,L".desktop-col-8");
  local_5fd0 = ConstructBox(this,&local_58d0,&local_5eb8);
  TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
            ((FSlotArguments *)local_5fc8,local_5fd0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_58d0);
  ::FString::~FString(&local_5eb8);
  TPanelChildren<SResponsiveGridPanel::FSlot>::FScopedWidgetSlotArguments::
  ~FScopedWidgetSlotArguments(&local_2d8);
  local_5fc0 = TSharedPtr<SResponsiveGridPanel,1>::operator->(&local_6960);
  local_5fb8 = SResponsiveGridPanel::AddSlot(local_5fc0,&local_228,1);
  local_5fa8 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                         ((FSlotArguments *)local_5fb8,__real_44780000,4,0);
  ::FString::FString(&local_5ea8,L".desktop-col-4");
  local_5fb0 = ConstructBox(this,&local_58c0,&local_5ea8);
  TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
            ((FSlotArguments *)local_5fa8,local_5fb0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_58c0);
  ::FString::~FString(&local_5ea8);
  TPanelChildren<SResponsiveGridPanel::FSlot>::FScopedWidgetSlotArguments::
  ~FScopedWidgetSlotArguments(&local_228);
  for (local_6984 = 0; local_6984 < 3; local_6984 = local_6984 + 1) {
    local_5fa0 = TSharedPtr<SResponsiveGridPanel,1>::operator->(&local_6960);
    local_5f98 = SResponsiveGridPanel::AddSlot(local_5fa0,&local_178,2);
    local_5f88 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                           ((FSlotArguments *)local_5f98,__real_44780000,4,0);
    ::FString::FString(&local_5e98,L".desktop-col-4");
    local_5f90 = ConstructBox(this,&local_58b0,&local_5e98);
    TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)local_5f88,local_5f90);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_58b0);
    ::FString::~FString(&local_5e98);
    TPanelChildren<SResponsiveGridPanel::FSlot>::FScopedWidgetSlotArguments::
    ~FScopedWidgetSlotArguments(&local_178);
  }
  for (local_6980 = 0; local_6980 < 2; local_6980 = local_6980 + 1) {
    local_5f80 = TSharedPtr<SResponsiveGridPanel,1>::operator->(&local_6960);
    local_5f78 = SResponsiveGridPanel::AddSlot(local_5f80,&local_c8,3);
    local_5f68 = SResponsiveGridPanel::FSlot::FSlotArguments::ColumnSpan
                           ((FSlotArguments *)local_5f78,__real_44780000,6,0);
    ::FString::FString(&local_5f38,L".desktop-col-6");
    local_5f70 = ConstructBox(this,&local_58a0,&local_5f38);
    TSlotBase<SResponsiveGridPanel::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)local_5f68,local_5f70);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_58a0);
    ::FString::~FString(&local_5f38);
    TPanelChildren<SResponsiveGridPanel::FSlot>::FScopedWidgetSlotArguments::
    ~FScopedWidgetSlotArguments(&local_c8);
  }
  TSharedPtr<SResponsiveGridPanel,1>::~TSharedPtr<SResponsiveGridPanel,1>(&local_6960);
  return;
}

// ConstructBox @ 1430a4ca0

TSharedRef<SWidget,1> * __thiscall
SResponsiveGridPanelTestWidgetImpl::ConstructBox
          (SResponsiveGridPanelTestWidgetImpl *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          FString *param_1)

{
  FName *pFVar1;
  FText *pFVar2;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<STextBlock,1> *pTVar3;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar4;
  TSharedRef<SBorder,1> *pTVar5;
  T0RequiredArgs local_f48;
  T0RequiredArgs local_f47;
  T0RequiredArgs local_f46 [6];
  ISlateStyle *local_f40;
  ISlateStyle *local_f38;
  FArguments *local_f30;
  FName *local_f28;
  FName local_f20;
  code *local_f18;
  FSlateBrush *local_f10;
  TAttribute<FSlateBrush_const_*> *local_f08;
  TAttribute<FSlateBrush_const_*> *local_f00;
  FArguments *local_ef8;
  FArguments *local_ef0;
  FArguments *local_ee8;
  FArguments *local_ee0;
  FName *local_ed8;
  FName local_ed0;
  code *local_ec8;
  FSlateBrush *local_ec0;
  TAttribute<FSlateBrush_const_*> *local_eb8;
  TAttribute<FSlateBrush_const_*> *local_eb0;
  FArguments *local_ea8;
  TAttribute<FText> *local_ea0;
  TAttribute<FText> *local_e98;
  FArguments *local_e90;
  FArguments *local_e88;
  FArguments *local_e80;
  FArguments *local_e78;
  FArguments *local_e70;
  FArguments *local_e68;
  TSharedRef<SWidget,1> local_e60;
  TSharedRef<SWidget,1> local_e50;
  FName local_e40;
  FName local_e38;
  TSharedRef<SBorder,1> local_e30;
  TSharedRef<SBorder,1> local_e20;
  TSharedRef<STextBlock,1> local_e10;
  FText local_e00;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_df0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_dd8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_dc0;
  TAttribute<FSlateBrush_const_*> local_da8;
  TAttribute<FSlateBrush_const_*> local_d80;
  TAttribute<FText> local_d58;
  FArguments local_d28;
  FArguments local_948;
  FArguments local_568;
  
  local_f30 = SBorder::FArguments::FArguments(&local_948);
  local_ef8 = SBorder::FArguments::Padding(local_f30,__real_3f800000);
  local_f08 = &local_da8;
  local_f40 = FTestStyle::Get();
  local_f18 = *(code **)((longlong)*local_f40 + 0x50);
  local_f28 = &local_e40;
  pFVar1 = ::FName::FName(local_f28,"Gray");
  local_f20 = *pFVar1;
  local_f10 = (FSlateBrush *)(*local_f18)(local_f40,local_f20,0,0);
  local_f00 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>(local_f08,&local_f10)
  ;
  local_e70 = SBorder::FArguments::BorderImage(local_ef8,local_f00);
  local_ef0 = SBorder::FArguments::FArguments(&local_d28);
  local_ee8 = SBorder::FArguments::HAlign(local_ef0,HAlign_Center);
  local_ee0 = SBorder::FArguments::VAlign(local_ee8,VAlign_Center);
  local_ea8 = SBorder::FArguments::Padding(local_ee0,__real_41200000);
  local_eb8 = &local_d80;
  local_f38 = FTestStyle::Get();
  local_ec8 = *(code **)((longlong)*local_f38 + 0x50);
  local_ed8 = &local_e38;
  pFVar1 = ::FName::FName(local_ed8,"RichText.Tagline.Background");
  local_ed0 = *pFVar1;
  local_ec0 = (FSlateBrush *)(*local_ec8)(local_f38,local_ed0,0,0);
  local_eb0 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>(local_eb8,&local_ec0)
  ;
  local_e80 = SBorder::FArguments::BorderImage(local_ea8,local_eb0);
  local_e90 = STextBlock::FArguments::FArguments(&local_568);
  local_ea0 = &local_d58;
  pFVar2 = FText::FromString(&local_e00,param_1);
  local_e98 = TAttribute<FText>::TAttribute<FText>(local_ea0,pFVar2);
  local_e88 = STextBlock::FArguments::Text(local_e90,local_e98);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_f48);
  this_00 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_dc0,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1510,&local_f48);
  pTVar3 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_e10,local_e88);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_e50,pTVar3);
  local_e78 = SBorder::FArguments::operator[](local_e80,&local_e50);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_f47);
  pTVar4 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                     (&local_dd8,"SBorder",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x150a,&local_f47);
  pTVar5 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_e20,local_e78);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_e60,pTVar5);
  local_e68 = SBorder::FArguments::operator[](local_e70,&local_e60);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_f46);
  pTVar4 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                     (&local_df0,"SBorder",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1506,local_f46);
  pTVar5 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_e30,local_e68);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(__return_storage_ptr__,pTVar5);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_e30.SharedReferenceCount);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_df0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_e60);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_e20.SharedReferenceCount);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_dd8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_e50);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_e10);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_dc0);
  FText::~FText(&local_e00);
  STextBlock::FArguments::~FArguments(&local_568);
  SBorder::FArguments::~FArguments(&local_d28);
  SBorder::FArguments::~FArguments(&local_948);
  return __return_storage_ptr__;
}

