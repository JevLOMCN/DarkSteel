// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// StaticStruct @ 14269b670

UScriptStruct * __cdecl FCustomizedToolMenu::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCustomizedToolMenu.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UScriptStruct_FCustomizedToolMenu.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCustomizedToolMenu,(UObject *)pUVar1,
                         L"CustomizedToolMenu");
  }
  return Z_Registration_Info_UScriptStruct_FCustomizedToolMenu.OuterSingleton;
}

// FCustomizedToolMenu @ 1426a7bc0

FCustomizedToolMenu * __thiscall FCustomizedToolMenu::FCustomizedToolMenu(FCustomizedToolMenu *this)

{
  FToolMenuProfile::FToolMenuProfile((FToolMenuProfile *)this);
  *(undefined8 *)&this->EntryOrder = 0;
  *(undefined8 *)&(this->EntryOrder).field_0x8 = 0;
  *(undefined8 *)&(this->EntryOrder).field_0x20 = 0;
  *(undefined4 *)&(this->EntryOrder).field_0x28 = 0;
  *(undefined4 *)&(this->EntryOrder).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntryOrder).field_0x34 = 0;
  *(undefined4 *)&(this->EntryOrder).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EntryOrder).field_0x40 = 0;
  *(undefined4 *)&(this->EntryOrder).field_0x48 = 0;
  (this->SectionOrder).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SectionOrder).ArrayNum = 0;
  (this->SectionOrder).ArrayMax = 0;
  return this;
}

// GetEntrySectionName @ 14280fa90

FName __thiscall FCustomizedToolMenu::GetEntrySectionName(FCustomizedToolMenu *this,FName param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FName FVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  longlong in_R8;
  undefined1 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  puVar1 = &(this->EntryOrder).field_0x10;
  iVar4 = *(int *)&(this->EntryOrder).field_0x28;
  iVar15 = 0;
  iVar18 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar19 = *(uint **)&(this->EntryOrder).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar14 = *puVar19;
    while (uVar14 == 0) {
      lVar13 = (longlong)iVar15;
      iVar18 = iVar18 + 0x20;
      iVar15 = iVar15 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14280fb3e;
      uVar14 = puVar19[lVar13 + 1];
    }
    uVar8 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar9 = (int)lVar13 + -1 + iVar18;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14280fb3e:
  uVar14 = *(uint *)&(this->EntryOrder).field_0x28;
  TStack_68._padding_ = CONCAT44(uVar8,iVar15);
  uVar8 = uVar14 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iVar9;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iVar9;
  TStack_68.BaseBitIndex = iVar18;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->EntryOrder).field_0x8 -
                       *(int *)&(this->EntryOrder).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    FVar10 = (FName)(*pcVar6)();
    return FVar10;
  }
  uVar5 = *(uint *)&(this->EntryOrder).field_0x28;
  if (uVar14 != uVar5) {
    puVar16 = *(undefined1 **)&(this->EntryOrder).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar13 = (longlong)iVar15;
      uVar8 = uVar8 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14280fc40;
      uVar14 = *(uint *)(puVar16 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar14 = (int)lVar13 + -1 + uVar8;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_14280fc40:
  while( true ) {
    if (*(int *)&(this->EntryOrder).field_0x8 - *(int *)&(this->EntryOrder).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuNameArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar14) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar17 = (undefined8 *)
              ((longlong)TStack_68.CurrentBitIndex * 0x20 + *(longlong *)&this->EntryOrder);
    plVar11 = (longlong *)puVar17[1];
    plVar2 = plVar11 + *(int *)(puVar17 + 2);
    for (; plVar11 != plVar2; plVar11 = plVar11 + 1) {
      if (*plVar11 == in_R8) {
        uVar12 = *puVar17;
        goto LAB_14280fcaf;
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  uVar12 = 0;
LAB_14280fcaf:
  *(undefined8 *)param_1 = uVar12;
  return param_1;
}

