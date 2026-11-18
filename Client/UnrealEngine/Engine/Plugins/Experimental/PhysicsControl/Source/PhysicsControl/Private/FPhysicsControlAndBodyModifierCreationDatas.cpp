// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 3

// StaticStruct @ 14d9b2b90

UScriptStruct * __cdecl FPhysicsControlAndBodyModifierCreationDatas::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlAndBodyModifierCreationDatas.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UScriptStruct_FPhysicsControlAndBodyModifierCreationDatas.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsControlAndBodyModifierCreationDatas,
                         (UObject *)pUVar1,L"PhysicsControlAndBodyModifierCreationDatas");
  }
  return Z_Registration_Info_UScriptStruct_FPhysicsControlAndBodyModifierCreationDatas.
         OuterSingleton;
}

// operator== @ 14d9c38a0

bool __thiscall
FPhysicsControlAndBodyModifierCreationDatas::operator==
          (FPhysicsControlAndBodyModifierCreationDatas *this,
          FPhysicsControlAndBodyModifierCreationDatas *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  FPhysicsControlCreationData *this_00;
  longlong lVar5;
  uint *puVar6;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  FPhysicsControlAndBodyModifierCreationDatas *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  if (*(int *)&(this->Controls).field_0x8 - *(int *)&(this->Controls).field_0x34 ==
      *(int *)&(param_1->Controls).field_0x8 - *(int *)&(param_1->Controls).field_0x34) {
    iVar2 = *(int *)&(this->Controls).field_0x28;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Controls).field_0x10;
    iStack_38 = 0;
    uStack_34 = 1;
    local_20 = 0;
    iStack_24 = 0;
    if (iVar2 != 0) {
      puVar6 = *(uint **)&(this->Controls).field_0x20;
      if (puVar6 == (uint *)0x0) {
        puVar6 = (uint *)TStack_60.Array;
      }
      uVar3 = *puVar6;
      while (uVar3 == 0) {
        lVar5 = (longlong)iStack_38;
        local_20 = local_20 + 0x20;
        iStack_38 = iStack_38 + 1;
        iStack_24 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_14d9c395b;
        uVar3 = puVar6[lVar5 + 1];
      }
      uStack_34 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_34 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_24 = local_20 + -1 + (int)lVar5;
      if (iVar2 < iStack_24) {
        iStack_24 = iVar2;
      }
    }
LAB_14d9c395b:
    uStack_28 = 0xffffffff;
    iStack_1c = TStack_60.CurrentBitIndex;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._28_4_ = TStack_60.CurrentBitIndex;
    TStack_60.BaseBitIndex = local_20;
    local_40 = this;
    local_30 = (undefined1 *)TStack_60.Array;
    TStack_60._padding_._0_4_ = iStack_38;
    TStack_60._padding_._4_4_ = uStack_34;
    TStack_60.CurrentBitIndex = iStack_24;
    if (iStack_24 < iVar2) {
      do {
        lVar5 = (longlong)TStack_60.CurrentBitIndex;
        this_00 = TMapBase<FName,FPhysicsControlCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>_>
                  ::Find((TMapBase<FName,FPhysicsControlCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>_>
                          *)param_1,*(FName *)(lVar5 * 0xf0 + *(longlong *)&this->Controls));
        if ((this_00 == (FPhysicsControlCreationData *)0x0) ||
           (bVar4 = FPhysicsControlCreationData::operator==
                              (this_00,(FPhysicsControlCreationData *)
                                       (*(longlong *)&this->Controls + 8 + lVar5 * 0xf0)), !bVar4))
        goto LAB_14d9c3a31;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
    bVar4 = TMapBase<FName,FPhysicsBodyModifierCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>_>
            ::OrderIndependentCompareEqual
                      ((TMapBase<FName,FPhysicsBodyModifierCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>_>
                        *)&this->Modifiers,
                       (TMapBase<FName,FPhysicsBodyModifierCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>_>
                        *)&param_1->Modifiers);
  }
  else {
LAB_14d9c3a31:
    bVar4 = false;
  }
  return bVar4;
}

// operator+= @ 14d9c4e90

FPhysicsControlAndBodyModifierCreationDatas * __thiscall
FPhysicsControlAndBodyModifierCreationDatas::operator+=
          (FPhysicsControlAndBodyModifierCreationDatas *this,
          FPhysicsControlAndBodyModifierCreationDatas *param_1)

{
  TMap<FName,FPhysicsControlCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>_>
  ::Append<FDefaultSetAllocator>(&this->Controls,&param_1->Controls);
  TMap<FName,FPhysicsBodyModifierCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>_>
  ::Append<FDefaultSetAllocator>(&this->Modifiers,&param_1->Modifiers);
  return this;
}

