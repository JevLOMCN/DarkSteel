// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 3

// Append @ 146e84450

void __thiscall FNodeClassCounter::Append(FNodeClassCounter *this,FNodeClassCounter *param_1)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  FNodeClassCounter *pFVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20;
  ulonglong *local_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  FNodeClassCounter *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  FNodeClassCounter *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar8 = *(int *)&(param_1->NodeClassUsage).field_0x28;
  puVar1 = &(param_1->NodeClassUsage).field_0x10;
  iStack_98 = 0;
  local_80 = 0;
  uStack_94 = 1;
  iStack_84 = 0;
  if (iVar8 != 0) {
    puVar14 = *(uint **)&(param_1->NodeClassUsage).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_146e844ed;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_94 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_84 = local_res20 + -1 + local_80;
    if (iVar8 < iStack_84) {
      iStack_84 = iVar8;
    }
  }
LAB_146e844ed:
  uVar12 = *(uint *)&(param_1->NodeClassUsage).field_0x28;
  uVar15 = uVar12 & 0xffffffe0;
  iStack_78 = *(int *)&(param_1->NodeClassUsage).field_0x8 -
              *(int *)&(param_1->NodeClassUsage).field_0x34;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar12 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = param_1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar8 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->NodeClassUsage).field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->NodeClassUsage).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_146e845f0;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_146e845f0:
  do {
    pFVar6 = local_70;
    if (*(int *)&(local_70->NodeClassUsage).field_0x8 -
        *(int *)&(local_70->NodeClassUsage).field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<UClass_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_68.CurrentBitIndex == uVar12) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar6 == param_1))
    {
      return;
    }
    puVar2 = (ulonglong *)
             (*(longlong *)&pFVar6->NodeClassUsage + (longlong)TStack_68.CurrentBitIndex * 0x18);
    local_b0 = *puVar2;
    uStack_a8 = puVar2[1];
    uVar15 = ((uint)((local_b0 >> 4) >> 0x10) & 0xffff ^ (uint)(local_b0 >> 4)) * -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if (*(int *)&(this->NodeClassUsage).field_0x8 != *(int *)&(this->NodeClassUsage).field_0x34) {
      puVar13 = *(undefined1 **)&(this->NodeClassUsage).field_0x40;
      puVar10 = &(this->NodeClassUsage).field_0x38;
      if (puVar13 != (undefined1 *)0x0) {
        puVar10 = puVar13;
      }
      iVar8 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&(this->NodeClassUsage).field_0x48 - 1U & uVar15) * 4);
      if (iVar8 != -1) {
        do {
          lVar9 = *(longlong *)&this->NodeClassUsage + (longlong)iVar8 * 0x18;
          if (*(ulonglong *)(*(longlong *)&this->NodeClassUsage + (longlong)iVar8 * 0x18) ==
              local_b0) {
            if (lVar9 != 0) goto LAB_146e846de;
            break;
          }
          iVar8 = *(int *)(lVar9 + 0x10);
        } while (iVar8 != -1);
      }
    }
    local_b8 = &local_b0;
    TSet<TTuple<UClass_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UClass_*,unsigned_int,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<UClass_*_const_&>_>
              ((TSet<TTuple<UClass_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UClass_*,unsigned_int,0>,FDefaultSetAllocator>
                *)this,(uint)local_res18,(TKeyInitializer<UClass_*_const_&> *)(ulonglong)uVar15,
               (bool *)&local_b8);
    lVar9 = *(longlong *)&this->NodeClassUsage + (longlong)local_res18[0] * 0x18;
LAB_146e846de:
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + (int)uStack_a8;
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// CountNode @ 146e86e30

void __thiscall FNodeClassCounter::CountNode(FNodeClassCounter *this,UBTNode *param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  int local_res8 [2];
  ulonglong local_res10;
  ulonglong *local_res18 [2];
  
  local_res10 = param_1->_padding_;
  uVar4 = ((uint)(local_res10 >> 0x14) & 0xffff ^ (uint)(local_res10 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  if (*(int *)&(this->NodeClassUsage).field_0x8 != *(int *)&(this->NodeClassUsage).field_0x34) {
    puVar5 = *(undefined1 **)&(this->NodeClassUsage).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->NodeClassUsage).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->NodeClassUsage).field_0x48 - 1U & uVar4) *
                              4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&this->NodeClassUsage + (longlong)iVar3 * 0x18;
        if (*(ulonglong *)(*(longlong *)&this->NodeClassUsage + (longlong)iVar3 * 0x18) ==
            local_res10) {
          if (lVar1 != 0) {
            *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
            return;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_res18[0] = &local_res10;
  TSet<TTuple<UClass_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UClass_*,unsigned_int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UClass_*_&&>_>
            ((TSet<TTuple<UClass_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UClass_*,unsigned_int,0>,FDefaultSetAllocator>
              *)this,(uint)local_res8,(TKeyInitializer<UClass_*_&&> *)(ulonglong)uVar4,
             (bool *)local_res18);
  piVar2 = (int *)(*(longlong *)&this->NodeClassUsage + 8 + (longlong)local_res8[0] * 0x18);
  *piVar2 = *piVar2 + 1;
  return;
}

// Print @ 146e97a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNodeClassCounter::Print(FNodeClassCounter *this,wchar_t *param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  FNodeClassCounter *pFVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  FName local_res20;
  FString local_a8;
  FNodeClassCounter *local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  FNodeClassCounter *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&(this->NodeClassUsage).field_0x28;
  puVar1 = &(this->NodeClassUsage).field_0x10;
  iVar12 = 0;
  uVar8 = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->NodeClassUsage).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      local_78 = local_78 + 0x20;
      iVar12 = iVar12 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_146e97b0d;
      uVar11 = puVar14[lVar9 + 1];
    }
    uVar8 = -uVar11 & uVar11;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar9;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_146e97b0d:
  uVar11 = *(uint *)&(this->NodeClassUsage).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_70 = *(int *)&(this->NodeClassUsage).field_0x8 - *(int *)&(this->NodeClassUsage).field_0x34
  ;
  uStack_80 = 0xffffffff;
  uStack_90 = CONCAT44(uVar8,iVar12);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = uStack_90;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = this;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = this;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar4 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&(this->NodeClassUsage).field_0x28;
  if (uVar11 != uVar8) {
    puVar13 = *(undefined1 **)&(this->NodeClassUsage).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_146e97c10;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar8 < (int)uVar11) {
      uVar11 = uVar8;
    }
  }
LAB_146e97c10:
  while( true ) {
    pFVar6 = local_68;
    if (*(int *)&(local_68->NodeClassUsage).field_0x8 -
        *(int *)&(local_68->NodeClassUsage).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UClass_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar6 == this))
    break;
    plVar2 = (longlong *)
             (*(longlong *)&pFVar6->NodeClassUsage + (longlong)TStack_60.CurrentBitIndex * 0x18);
    local_98 = (FNodeClassCounter *)*plVar2;
    uStack_90 = plVar2[1];
    if (3 < (byte)LogBehaviorTree._0_1_) {
      local_res20.ComparisonIndex.Value = *(uint *)&(local_98->NodeClassUsage).field_0x18;
      local_res20.Number = *(uint *)&(local_98->NodeClassUsage).field_0x1c;
      ::FName::ToString(&local_res20,&local_a8);
      UE::Logging::Private::BasicLog<4>
                (&`public:_void___cdecl_FNodeClassCounter::Print(wchar_t_const*___ptr64)___ptr64'::
                  __l7::LOG_Static,(FLogCategoryBase *)&LogBehaviorTree);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

