// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// StaticStruct @ 142524de0

UScriptStruct * __cdecl FStyleColorList::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStyleColorList.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FStyleColorList.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStyleColorList,(UObject *)pUVar1,
                         L"StyleColorList");
  }
  return Z_Registration_Info_UScriptStruct_FStyleColorList.OuterSingleton;
}

// FStyleColorList @ 142547bc0

FStyleColorList * __thiscall FStyleColorList::FStyleColorList(FStyleColorList *this)

{
  longlong lVar1;
  FText *this_00;
  
  this->StyleColors[0].field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Transparent.field0_0x0;
  memset(this->StyleColors + 1,0,0x3c0);
  this_00 = this->DisplayNames;
  lVar1 = 0x3d;
  do {
    FText::FText(this_00);
    this_00 = this_00 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return this;
}

// operator= @ 14254e1f0

FStyleColorList * __thiscall
FStyleColorList::operator=(FStyleColorList *this,FStyleColorList *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[1].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[1].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[1].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[1].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[2].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[2].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[2].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[2].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[3].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[3].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[3].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[3].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[4].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[4].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[4].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[4].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[5].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[5].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[5].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[5].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[6].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[6].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[6].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[6].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[7].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[7].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[7].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[7].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[8].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[8].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[8].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[8].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[9].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[9].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[9].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[9].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[10].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[10].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[10].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[10].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0xb].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0xb].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0xb].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0xb].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0xc].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0xc].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0xc].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0xc].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0xd].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0xd].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0xd].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0xd].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0xe].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0xe].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0xe].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0xe].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0xf].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0xf].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0xf].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0xf].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x10].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x10].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x10].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x10].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x11].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x11].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x11].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x11].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x12].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x12].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x12].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x12].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x13].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x13].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x13].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x13].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x14].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x14].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x14].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x14].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x15].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x15].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x15].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x15].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x16].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x16].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x16].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x16].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x17].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x17].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x17].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x17].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x18].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x18].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x18].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x18].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x19].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x19].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x19].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x19].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x1a].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x1a].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x1a].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x1a].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x1b].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x1b].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x1b].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x1b].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x1c].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x1c].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x1c].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x1c].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x1d].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x1d].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x1d].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x1d].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x1e].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x1e].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x1e].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x1e].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x1f].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x1f].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x1f].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x1f].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x20].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x20].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x20].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x20].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x21].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x21].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x21].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x21].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x22].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x22].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x22].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x22].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x23].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x23].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x23].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x23].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x24].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x24].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x24].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x24].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x25].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x25].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x25].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x25].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x26].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x26].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x26].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x26].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x27].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x27].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x27].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x27].field0_0x0 + 8) = uVar6;
  puVar7 = &this->DisplayNames[0].Flags;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x28].field0_0x0 + 8);
  lVar8 = 0x3d;
  *(undefined8 *)&this->StyleColors[0x28].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x28].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x28].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x29].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x29].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x29].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x29].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x2a].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x2a].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x2a].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x2a].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x2b].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x2b].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x2b].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x2b].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x2c].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x2c].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x2c].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x2c].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x2d].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x2d].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x2d].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x2d].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x2e].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x2e].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x2e].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x2e].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x2f].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x2f].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x2f].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x2f].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x30].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x30].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x30].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x30].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x31].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x31].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x31].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x31].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x32].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x32].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x32].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x32].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x33].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x33].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x33].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x33].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x34].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x34].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x34].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x34].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x35].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x35].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x35].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x35].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x36].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x36].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x36].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x36].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x37].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x37].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x37].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x37].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x38].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x38].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x38].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x38].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x39].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x39].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x39].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x39].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x3a].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x3a].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x3a].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x3a].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->StyleColors[0x3b].field0_0x0 + 8);
  *(undefined8 *)&this->StyleColors[0x3b].field0_0x0 =
       *(undefined8 *)&param_1->StyleColors[0x3b].field0_0x0;
  *(undefined8 *)((longlong)&this->StyleColors[0x3b].field0_0x0 + 8) = uVar6;
  fVar3 = param_1->StyleColors[0x3c].field0_0x0._s_0.G;
  fVar4 = param_1->StyleColors[0x3c].field0_0x0._s_0.B;
  fVar5 = param_1->StyleColors[0x3c].field0_0x0._s_0.A;
  this->StyleColors[0x3c].field0_0x0._s_0.R = param_1->StyleColors[0x3c].field0_0x0._s_0.R;
  this->StyleColors[0x3c].field0_0x0._s_0.G = fVar3;
  this->StyleColors[0x3c].field0_0x0._s_0.B = fVar4;
  this->StyleColors[0x3c].field0_0x0._s_0.A = fVar5;
  do {
    pIVar1 = *(ITextData **)(((longlong)param_1 - (longlong)this) + -8 + (longlong)puVar7);
    pIVar2 = (((FText *)(puVar7 + -2))->TextData).Reference;
    if (pIVar2 != pIVar1) {
      (((FText *)(puVar7 + -2))->TextData).Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    *puVar7 = *(uint *)(((longlong)param_1 - (longlong)this) + (longlong)puVar7);
    puVar7 = puVar7 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return this;
}

