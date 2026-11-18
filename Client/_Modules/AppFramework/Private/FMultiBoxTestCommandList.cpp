// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 3

// FMultiBoxTestCommandList @ 14305c310

/* WARNING: Removing unreachable block (ram,0x00014305c379) */

FMultiBoxTestCommandList * __thiscall
FMultiBoxTestCommandList::FMultiBoxTestCommandList(FMultiBoxTestCommandList *this)

{
  uint uVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FNameEntryId local_e0 [2];
  FName local_d8;
  FName local_d0;
  FNameEntryId *local_c8;
  FNameEntryId *local_c0;
  FName local_b8;
  FName local_b0;
  FName *local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FText *local_80;
  FName local_78;
  TSharedPtr<FUICommandInfo,1> *local_70;
  TSharedPtr<FUICommandInfo,1> *local_68;
  TSharedPtr<FUICommandInfo,1> *local_60;
  TSharedPtr<FUICommandInfo,1> *local_58;
  TSharedPtr<FUICommandInfo,1> *local_50;
  TSharedPtr<FUICommandInfo,1> *local_48;
  TSharedPtr<FUICommandInfo,1> *local_40;
  TSharedPtr<FUICommandInfo,1> *local_38;
  FNameEntryId local_30;
  undefined4 uStack_2c;
  FName local_28;
  FText local_20 [2];
  
  pIVar2 = FTestStyle::Get();
  pFVar3 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  local_d8 = *pFVar3;
  local_d0 = local_d8;
  local_90 = local_d8;
  local_c8 = FNameEntryId::FNameEntryId(local_e0);
  uVar1 = local_c8->Value;
  FNameEntryId::FNameEntryId(&local_30);
  uStack_2c = 0;
  local_b8.Number = 0;
  local_b8.ComparisonIndex.Value = uVar1;
  local_c0 = &local_30;
  local_b0 = local_b8;
  local_88 = local_b8;
  local_30.Value = uVar1;
  local_80 = FText::AsLocalizable_Advanced_LocText
                       (local_20,L"STestSuite",L"MultiboxTest",L"Multibox Test");
  local_a8 = &local_28;
  pFVar3 = ::FName::FName(local_a8,"MultiBoxTest");
  local_a0 = *pFVar3;
  local_98 = local_a0;
  local_78 = local_a0;
  TCommands<FMultiBoxTestCommandList>::TCommands<FMultiBoxTestCommandList>
            ((TCommands<FMultiBoxTestCommandList> *)this,local_a0,local_80,local_88,local_90);
  FText::~FText(local_20);
  this->_padding_ = (longlong)&___7FMultiBoxTestCommandList__6B_;
  local_70 = &this->FirstCommandInfo;
  TSharedPtr<FUICommandInfo,1>::TSharedPtr<FUICommandInfo,1>(local_70,(FNullTag *)0x0);
  local_68 = &this->SecondCommandInfo;
  TSharedPtr<FUICommandInfo,1>::TSharedPtr<FUICommandInfo,1>(local_68,(FNullTag *)0x0);
  local_60 = &this->ThirdCommandInfo;
  TSharedPtr<FUICommandInfo,1>::TSharedPtr<FUICommandInfo,1>(local_60,(FNullTag *)0x0);
  local_58 = &this->FourthCommandInfo;
  TSharedPtr<FUICommandInfo,1>::TSharedPtr<FUICommandInfo,1>(local_58,(FNullTag *)0x0);
  local_50 = &this->FifthCommandInfo;
  TSharedPtr<FUICommandInfo,1>::TSharedPtr<FUICommandInfo,1>(local_50,(FNullTag *)0x0);
  local_48 = &this->SixthCommandInfo;
  TSharedPtr<FUICommandInfo,1>::TSharedPtr<FUICommandInfo,1>(local_48,(FNullTag *)0x0);
  local_40 = &this->SeventhCommandInfo;
  TSharedPtr<FUICommandInfo,1>::TSharedPtr<FUICommandInfo,1>(local_40,(FNullTag *)0x0);
  local_38 = &this->EighthCommandInfo;
  TSharedPtr<FUICommandInfo,1>::TSharedPtr<FUICommandInfo,1>(local_38,(FNullTag *)0x0);
  return this;
}

// ~FMultiBoxTestCommandList @ 143061a60

void __thiscall FMultiBoxTestCommandList::~FMultiBoxTestCommandList(FMultiBoxTestCommandList *this)

{
  TSharedPtr<FUICommandInfo,1>::~TSharedPtr<FUICommandInfo,1>(&this->EighthCommandInfo);
  TSharedPtr<FUICommandInfo,1>::~TSharedPtr<FUICommandInfo,1>(&this->SeventhCommandInfo);
  TSharedPtr<FUICommandInfo,1>::~TSharedPtr<FUICommandInfo,1>(&this->SixthCommandInfo);
  TSharedPtr<FUICommandInfo,1>::~TSharedPtr<FUICommandInfo,1>(&this->FifthCommandInfo);
  TSharedPtr<FUICommandInfo,1>::~TSharedPtr<FUICommandInfo,1>(&this->FourthCommandInfo);
  TSharedPtr<FUICommandInfo,1>::~TSharedPtr<FUICommandInfo,1>(&this->ThirdCommandInfo);
  TSharedPtr<FUICommandInfo,1>::~TSharedPtr<FUICommandInfo,1>(&this->SecondCommandInfo);
  TSharedPtr<FUICommandInfo,1>::~TSharedPtr<FUICommandInfo,1>(&this->FirstCommandInfo);
  TCommands<FMultiBoxTestCommandList>::~TCommands<FMultiBoxTestCommandList>
            ((TCommands<FMultiBoxTestCommandList> *)this);
  return;
}

// RegisterCommands @ 1430e8f50

void __thiscall FMultiBoxTestCommandList::RegisterCommands(FMultiBoxTestCommandList *this)

{
  FInputChord *pFVar1;
  FInputChord *pFVar2;
  FKey *pFVar3;
  FBindingContext *local_328;
  FBindingContext *local_320;
  FBindingContext *local_318;
  FBindingContext *local_310;
  FBindingContext *local_308;
  FBindingContext *local_300;
  FBindingContext *local_2f8;
  FBindingContext *local_2f0;
  FInputChord local_220;
  FInputChord local_200;
  FInputChord local_1e0;
  FInputChord local_1c0;
  FInputChord local_1a0;
  FInputChord local_180;
  FInputChord local_160;
  FInputChord local_140;
  FInputChord local_120;
  FInputChord local_100;
  FInputChord local_e0;
  FInputChord local_c0;
  FInputChord local_a0;
  FInputChord local_80;
  FInputChord local_60;
  FInputChord local_40;
  FKey local_20;
  
  pFVar1 = FInputChord::FInputChord(&local_200);
  pFVar2 = FInputChord::FInputChord(&local_220);
  if (this == (FMultiBoxTestCommandList *)0x0) {
    local_328 = (FBindingContext *)0x0;
  }
  else {
    local_328 = (FBindingContext *)&this->_padding_;
  }
  MakeUICommand_InternalUseOnly
            (local_328,&this->FirstCommandInfo,L"STestSuite",L"FirstCommandInfo",
             L"FirstCommandInfo_ToolTip",".FirstCommandInfo",L"First Test",
             L"This is the first test menu item",ToggleButton,pFVar2,pFVar1);
  FInputChord::~FInputChord(&local_220);
  FInputChord::~FInputChord(&local_200);
  pFVar1 = FInputChord::FInputChord(&local_1c0);
  pFVar3 = FKey::FKey(&local_20,&EKeys::A);
  pFVar2 = FInputChord::FInputChord(&local_1e0,'\x04',pFVar3);
  if (this == (FMultiBoxTestCommandList *)0x0) {
    local_320 = (FBindingContext *)0x0;
  }
  else {
    local_320 = (FBindingContext *)&this->_padding_;
  }
  MakeUICommand_InternalUseOnly
            (local_320,&this->SecondCommandInfo,L"STestSuite",L"SecondCommandInfo",
             L"SecondCommandInfo_ToolTip",".SecondCommandInfo",L"Second Test",
             L"This is the second test menu item. Shows a keybinding",ToggleButton,pFVar2,pFVar1);
  FInputChord::~FInputChord(&local_1e0);
  FInputChord::~FInputChord(&local_1c0);
  pFVar1 = FInputChord::FInputChord(&local_180);
  pFVar2 = FInputChord::FInputChord(&local_1a0);
  if (this == (FMultiBoxTestCommandList *)0x0) {
    local_318 = (FBindingContext *)0x0;
  }
  else {
    local_318 = (FBindingContext *)&this->_padding_;
  }
  MakeUICommand_InternalUseOnly
            (local_318,&this->ThirdCommandInfo,L"STestSuite",L"ThirdCommandInfo",
             L"ThirdCommandInfo_ToolTip",".ThirdCommandInfo",L"Third Test",
             L"This is the thrid test menu item",ToggleButton,pFVar2,pFVar1);
  FInputChord::~FInputChord(&local_1a0);
  FInputChord::~FInputChord(&local_180);
  pFVar1 = FInputChord::FInputChord(&local_140);
  pFVar2 = FInputChord::FInputChord(&local_160);
  if (this == (FMultiBoxTestCommandList *)0x0) {
    local_310 = (FBindingContext *)0x0;
  }
  else {
    local_310 = (FBindingContext *)&this->_padding_;
  }
  MakeUICommand_InternalUseOnly
            (local_310,&this->FourthCommandInfo,L"STestSuite",L"FourthCommandInfo",
             L"FourthCommandInfo_ToolTip",".FourthCommandInfo",L"Fourth Test",
             L"This is the fourth test menu item",ToggleButton,pFVar2,pFVar1);
  FInputChord::~FInputChord(&local_160);
  FInputChord::~FInputChord(&local_140);
  pFVar1 = FInputChord::FInputChord(&local_100);
  pFVar2 = FInputChord::FInputChord(&local_120);
  if (this == (FMultiBoxTestCommandList *)0x0) {
    local_308 = (FBindingContext *)0x0;
  }
  else {
    local_308 = (FBindingContext *)&this->_padding_;
  }
  MakeUICommand_InternalUseOnly
            (local_308,&this->FifthCommandInfo,L"STestSuite",L"FifthCommandInfo",
             L"FifthCommandInfo_ToolTip",".FifthCommandInfo",L"Fifth Test",
             L"This is the fifth test menu item",ToggleButton,pFVar2,pFVar1);
  FInputChord::~FInputChord(&local_120);
  FInputChord::~FInputChord(&local_100);
  pFVar1 = FInputChord::FInputChord(&local_c0);
  pFVar2 = FInputChord::FInputChord(&local_e0);
  if (this == (FMultiBoxTestCommandList *)0x0) {
    local_300 = (FBindingContext *)0x0;
  }
  else {
    local_300 = (FBindingContext *)&this->_padding_;
  }
  MakeUICommand_InternalUseOnly
            (local_300,&this->SixthCommandInfo,L"STestSuite",L"SixthCommandInfo",
             L"SixthCommandInfo_ToolTip",".SixthCommandInfo",L"Sixth Test",
             L"This is the sixth test menu item. Shows a keybinding",ToggleButton,pFVar2,pFVar1);
  FInputChord::~FInputChord(&local_e0);
  FInputChord::~FInputChord(&local_c0);
  pFVar1 = FInputChord::FInputChord(&local_80);
  pFVar2 = FInputChord::FInputChord(&local_a0);
  if (this == (FMultiBoxTestCommandList *)0x0) {
    local_2f8 = (FBindingContext *)0x0;
  }
  else {
    local_2f8 = (FBindingContext *)&this->_padding_;
  }
  MakeUICommand_InternalUseOnly
            (local_2f8,&this->SeventhCommandInfo,L"STestSuite",L"SeventhCommandInfo",
             L"SeventhCommandInfo_ToolTip",".SeventhCommandInfo",L"Seventh Test",
             L"This is the seventh test menu item",ToggleButton,pFVar2,pFVar1);
  FInputChord::~FInputChord(&local_a0);
  FInputChord::~FInputChord(&local_80);
  pFVar1 = FInputChord::FInputChord(&local_40);
  pFVar2 = FInputChord::FInputChord(&local_60);
  if (this == (FMultiBoxTestCommandList *)0x0) {
    local_2f0 = (FBindingContext *)0x0;
  }
  else {
    local_2f0 = (FBindingContext *)&this->_padding_;
  }
  MakeUICommand_InternalUseOnly
            (local_2f0,&this->EighthCommandInfo,L"STestSuite",L"EighthCommandInfo",
             L"EighthCommandInfo_ToolTip",".EighthCommandInfo",L"Eighth Test",
             L"This is the eighth test menu item",ToggleButton,pFVar2,pFVar1);
  FInputChord::~FInputChord(&local_60);
  FInputChord::~FInputChord(&local_40);
  return;
}

