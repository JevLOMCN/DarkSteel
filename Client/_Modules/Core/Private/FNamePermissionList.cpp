// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// AddAllowListItem @ 1418c5fa0

bool __thiscall
FNamePermissionList::AddAllowListItem(FNamePermissionList *this,FName param_1,FName param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  bool bVar4;
  FName local_res10;
  FName local_res18 [2];
  
  iVar1 = *(int *)&(this->AllowList).field_0x8;
  iVar2 = *(int *)&(this->AllowList).field_0x34;
  local_res10 = param_1;
  local_res18[0] = param_2;
  uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  this_00 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                        *)&this->AllowList,uVar3 + param_2.Number,local_res18);
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this_00,&local_res10);
  bVar4 = iVar1 - iVar2 !=
          *(int *)&(this->AllowList).field_0x8 - *(int *)&(this->AllowList).field_0x34;
  if ((bVar4) && (this->bSuppressOnFilterChanged == false)) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnFilterChangedDelegate);
  }
  return bVar4;
}

// AddDenyListAll @ 1418c6030

bool __thiscall FNamePermissionList::AddDenyListAll(FNamePermissionList *this,FName param_1)

{
  int iVar1;
  bool bVar2;
  FName local_res10;
  
  iVar1 = (this->DenyListAll).ArrayNum;
  local_res10 = param_1;
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
            (&this->DenyListAll,&local_res10);
  bVar2 = iVar1 != (this->DenyListAll).ArrayNum;
  if ((bVar2) && (this->bSuppressOnFilterChanged == false)) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnFilterChangedDelegate);
  }
  return bVar2;
}

// AddDenyListItem @ 1418c60a0

bool __thiscall
FNamePermissionList::AddDenyListItem(FNamePermissionList *this,FName param_1,FName param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  bool bVar4;
  FName local_res10;
  FName local_res18 [2];
  
  iVar1 = *(int *)&(this->DenyList).field_0x8;
  iVar2 = *(int *)&(this->DenyList).field_0x34;
  local_res10 = param_1;
  local_res18[0] = param_2;
  uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  this_00 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                        *)&this->DenyList,uVar3 + param_2.Number,local_res18);
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this_00,&local_res10);
  bVar4 = iVar1 - iVar2 !=
          *(int *)&(this->DenyList).field_0x8 - *(int *)&(this->DenyList).field_0x34;
  if ((bVar4) && (this->bSuppressOnFilterChanged == false)) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnFilterChangedDelegate);
  }
  return bVar4;
}

// Append @ 1418c7b10

bool __thiscall FNamePermissionList::Append(FNamePermissionList *this,FNamePermissionList *param_1)

{
  ulonglong uVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined1 *puVar11;
  uint uVar12;
  FName *pFVar13;
  int iVar14;
  uint *puVar15;
  FName *pFVar16;
  FNamePermissionList *pFVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  uint uVar19;
  FName FVar20;
  bool bVar21;
  FName local_res8;
  FNamePermissionList *local_res10;
  undefined1 local_res18 [8];
  bool local_res20;
  uint local_188;
  undefined1 local_184;
  undefined1 local_183;
  undefined1 local_182 [2];
  ulonglong local_180;
  TBitArray<FDefaultBitArrayAllocator> *local_178;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_170;
  int iStack_168;
  uint uStack_164;
  undefined1 *local_160;
  undefined4 uStack_158;
  int iStack_154;
  int local_150;
  int iStack_148;
  undefined4 uStack_144;
  int local_140;
  int local_13c;
  int local_138;
  FName local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_100;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  local_res20 = this->bSuppressOnFilterChanged;
  pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->DenyList).field_0x10;
  local_150 = 0;
  this->bSuppressOnFilterChanged = true;
  iVar2 = *(int *)&(param_1->DenyList).field_0x28;
  local_170 = &param_1->DenyList;
  bVar21 = false;
  local_180 = 1;
  iStack_168 = 0;
  uStack_164 = 1;
  iStack_154 = 0;
  if (iVar2 != 0) {
    puVar15 = *(uint **)&(param_1->DenyList).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)pTVar18;
    }
    uStack_164 = *puVar15;
    while (uStack_164 == 0) {
      lVar9 = (longlong)iStack_168;
      local_150 = local_150 + 0x20;
      iStack_168 = iStack_168 + 1;
      uStack_164 = 1;
      iStack_154 = iVar2;
      if ((int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 < iStack_168) goto LAB_1418c7bdf;
      uStack_164 = puVar15[lVar9 + 1];
    }
    uStack_164 = -uStack_164 & uStack_164;
    uVar1 = (ulonglong)uStack_164 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_140 = (int)lVar9;
    iStack_154 = local_150 + -1 + local_140;
    if (iVar2 < iStack_154) {
      iStack_154 = iVar2;
    }
  }
LAB_1418c7bdf:
  iStack_148 = *(int *)&(param_1->DenyList).field_0x8 - *(int *)&(param_1->DenyList).field_0x34;
  local_188 = *(uint *)&(param_1->DenyList).field_0x28;
  uVar19 = local_188 & 0xffffffe0;
  uStack_158 = 0xffffffff;
  TStack_c8._padding_ = CONCAT44(uStack_164,iStack_168);
  TStack_c8.CurrentBitIndex = iStack_154;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)local_188 >> 5;
  TStack_c8._28_4_ = local_54;
  TStack_c8.BaseBitIndex = local_150;
  uStack_a8 = CONCAT44(uStack_144,iStack_148);
  local_res10 = param_1;
  local_178 = pTVar18;
  local_160 = (undefined1 *)pTVar18;
  local_d0 = local_170;
  TStack_c8.Array = pTVar18;
  if ((((int)local_188 < 0) || (iVar2 < (int)local_188)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  uVar8 = *(uint *)&(param_1->DenyList).field_0x28;
  if (local_188 != uVar8) {
    puVar11 = *(undefined1 **)&(param_1->DenyList).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = (undefined1 *)pTVar18;
    }
    uVar12 = -1 << ((byte)local_188 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar14;
      uVar19 = uVar19 + 0x20;
      iVar14 = iVar14 + 1;
      local_188 = uVar8;
      if ((int)(((int)(uVar8 - 1) >> 0x1f & 0x1fU) + (uVar8 - 1)) >> 5 < iVar14) goto LAB_1418c7d00;
      uVar12 = *(uint *)(puVar11 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_13c = (int)lVar9;
    local_188 = local_13c + -1 + uVar19;
    if ((int)uVar8 < (int)local_188) {
      local_188 = uVar8;
    }
  }
LAB_1418c7d00:
  while( true ) {
    pTVar5 = local_d0;
    if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0->field_0x34 != (int)uStack_a8) {
      local_res8 = (FName)((ulonglong)local_res8 & 0xffffffffffffff00);
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    pFVar17 = local_res10;
    if (((TStack_c8.CurrentBitIndex == local_188) && (TStack_c8.Array == pTVar18)) &&
       (pTVar5 == &local_res10->DenyList)) break;
    pFVar16 = (FName *)((longlong)TStack_c8.CurrentBitIndex * 0x20 + *(longlong *)pTVar5);
    FVar20 = pFVar16[1];
    uVar19 = pFVar16[2].ComparisonIndex.Value;
    local_120 = (FName)((longlong)FVar20 + (longlong)(int)uVar19 * 8);
    while( true ) {
      FVar3 = local_120;
      if (pFVar16[2].ComparisonIndex.Value != uVar19) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar20 == FVar3) break;
      FVar3 = *pFVar16;
      local_128 = *(FName *)FVar20;
      iVar2 = *(int *)&(this->DenyList).field_0x8;
      iVar14 = *(int *)&(this->DenyList).field_0x34;
      local_130 = FVar3;
      uVar8 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      pTVar10 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<FName_const_&>
                          ((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                            *)&this->DenyList,FVar3.Number + uVar8,&local_130);
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(pTVar10,&local_128);
      bVar6 = iVar2 - iVar14 !=
              *(int *)&(this->DenyList).field_0x8 - *(int *)&(this->DenyList).field_0x34;
      if ((bVar6) && (this->bSuppressOnFilterChanged == false)) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->OnFilterChangedDelegate);
      }
      bVar21 = (bool)(bVar21 | bVar6);
      FVar20 = (FName)((longlong)FVar20 + 8);
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
    pTVar18 = local_178;
  }
  iStack_f8 = 0;
  pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)&(local_res10->AllowList).field_0x10;
  iVar2 = *(int *)&(local_res10->AllowList).field_0x28;
  local_100 = &local_res10->AllowList;
  iStack_e4 = iStack_f8;
  local_e0 = iStack_f8;
  if (iVar2 != 0) {
    puVar15 = *(uint **)&(local_res10->AllowList).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)pTVar18;
    }
    uVar19 = *puVar15;
    while (uVar19 == 0) {
      lVar9 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar2;
      if ((int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 < iStack_f8) goto LAB_1418c7ea3;
      uVar19 = puVar15[lVar9 + 1];
    }
    local_180 = (ulonglong)(-uVar19 & uVar19);
    uVar1 = local_180 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_138 = (int)lVar9;
    iStack_e4 = local_e0 + -1 + local_138;
    if (iVar2 < iStack_e4) {
      iStack_e4 = iVar2;
    }
  }
LAB_1418c7ea3:
  uStack_f4 = (undefined4)local_180;
  iStack_dc = iStack_154;
  TStack_98._padding_ = CONCAT44(uStack_f4,iStack_f8);
  uStack_e8 = 0xffffffff;
  local_188 = *(uint *)&(local_res10->AllowList).field_0x28;
  iStack_d8 = *(int *)&(local_res10->AllowList).field_0x8 -
              *(int *)&(local_res10->AllowList).field_0x34;
  uVar19 = -1 << ((byte)local_188 & 0x1f);
  uVar8 = local_188 & 0xffffffe0;
  TStack_98.CurrentBitIndex = iStack_e4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)local_188 >> 5;
  local_180 = CONCAT44(local_180._4_4_,uVar19);
  TStack_98._28_4_ = iStack_154;
  TStack_98.BaseBitIndex = local_e0;
  uStack_78 = CONCAT44(uStack_d4,iStack_d8);
  local_178 = pTVar18;
  local_f0 = (undefined1 *)pTVar18;
  local_a0 = local_100;
  TStack_98.Array = pTVar18;
  if (((int)local_188 < 0) || (iVar2 < (int)local_188)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    uVar19 = (uint)local_180;
  }
  uVar12 = *(uint *)&(pFVar17->AllowList).field_0x28;
  if (local_188 != uVar12) {
    puVar11 = *(undefined1 **)&(pFVar17->AllowList).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = (undefined1 *)pTVar18;
    }
    uVar19 = uVar19 & *(uint *)(puVar11 + (longlong)iVar14 * 4);
    while (uVar19 == 0) {
      lVar9 = (longlong)iVar14;
      uVar8 = uVar8 + 0x20;
      iVar14 = iVar14 + 1;
      local_188 = uVar12;
      if ((int)(((int)(uVar12 - 1) >> 0x1f & 0x1fU) + (uVar12 - 1)) >> 5 < iVar14)
      goto LAB_1418c7fd0;
      uVar19 = *(uint *)(puVar11 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_188 = (int)lVar9 + -1 + uVar8;
    if ((int)uVar12 < (int)local_188) {
      local_188 = uVar12;
    }
  }
LAB_1418c7fd0:
  while( true ) {
    pTVar5 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_184);
    }
    if (((TStack_98.CurrentBitIndex == local_188) && (TStack_98.Array == pTVar18)) &&
       (pTVar5 == &pFVar17->AllowList)) break;
    pFVar16 = (FName *)((longlong)TStack_98.CurrentBitIndex * 0x20 + *(longlong *)pTVar5);
    FVar20 = pFVar16[1];
    uVar19 = pFVar16[2].ComparisonIndex.Value;
    local_res8 = (FName)((longlong)FVar20 + (longlong)(int)uVar19 * 8);
    while( true ) {
      FVar3 = local_res8;
      if (pFVar16[2].ComparisonIndex.Value != uVar19) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_183);
      }
      if (FVar20 == FVar3) break;
      FVar3 = *pFVar16;
      local_110 = *(FName *)FVar20;
      iVar2 = *(int *)&(this->AllowList).field_0x8;
      iVar14 = *(int *)&(this->AllowList).field_0x34;
      local_118 = FVar3;
      uVar8 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      pTVar10 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<FName_const_&>
                          ((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                            *)&this->AllowList,FVar3.Number + uVar8,&local_118);
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(pTVar10,&local_110);
      bVar6 = iVar2 - iVar14 !=
              *(int *)&(this->AllowList).field_0x8 - *(int *)&(this->AllowList).field_0x34;
      if ((bVar6) && (this->bSuppressOnFilterChanged == false)) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->OnFilterChangedDelegate);
      }
      bVar21 = (bool)(bVar21 | bVar6);
      FVar20 = (FName)((longlong)FVar20 + 8);
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    pFVar17 = local_res10;
    pTVar18 = local_178;
  }
  pFVar13 = (FName *)(pFVar17->DenyListAll).AllocatorInstance.Data;
  iVar2 = (pFVar17->DenyListAll).ArrayNum;
  pFVar16 = pFVar13 + iVar2;
  while( true ) {
    if ((local_res10->DenyListAll).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_182);
    }
    if (pFVar13 == pFVar16) break;
    local_108 = *pFVar13;
    iVar14 = (this->DenyListAll).ArrayNum;
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
              (&this->DenyListAll,&local_108);
    bVar6 = iVar14 != (this->DenyListAll).ArrayNum;
    if ((bVar6) && (this->bSuppressOnFilterChanged == false)) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnFilterChangedDelegate);
    }
    bVar21 = (bool)(bVar21 | bVar6);
    pFVar13 = pFVar13 + 1;
  }
  this->bSuppressOnFilterChanged = local_res20;
  if ((bVar21 != false) && (local_res20 == false)) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnFilterChangedDelegate);
  }
  return bVar21;
}

// GetOwnerNames @ 1418e0320

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FNamePermissionList::GetOwnerNames
          (FNamePermissionList *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  bool bVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  int iVar11;
  FName *pFVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar17;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_158;
  undefined1 local_157 [7];
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_150;
  ulonglong local_148;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_140;
  int iStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  int local_108;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  puVar1 = &(this->DenyList).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_150 = &this->DenyList;
  iVar4 = *(int *)&(this->DenyList).field_0x28;
  local_148 = 1;
  iStack_138 = 0;
  local_120 = 0;
  uStack_134 = 1;
  iStack_124 = iStack_138;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->DenyList).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uStack_134 = *puVar15;
    local_120 = 0;
    iStack_138 = 0;
    while (uStack_134 == 0) {
      lVar10 = (longlong)iStack_138;
      local_120 = local_120 + 0x20;
      iStack_138 = iStack_138 + 1;
      uStack_134 = 1;
      iStack_124 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138) goto LAB_1418e03de;
      uStack_134 = puVar15[lVar10 + 1];
    }
    uStack_134 = -uStack_134 & uStack_134;
    uVar3 = (ulonglong)uStack_134 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_110 = (int)lVar10;
    iStack_124 = local_120 + -1 + local_110;
    if (iVar4 < iStack_124) {
      iStack_124 = iVar4;
    }
  }
LAB_1418e03de:
  iStack_118 = *(int *)&(this->DenyList).field_0x8 - *(int *)&(this->DenyList).field_0x34;
  uVar13 = *(uint *)&(this->DenyList).field_0x28;
  uStack_128 = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_134,iStack_138);
  uVar16 = uVar13 & 0xffffffe0;
  TStack_c0.CurrentBitIndex = iStack_124;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_c0._28_4_ = local_4c;
  TStack_c0.BaseBitIndex = local_120;
  uStack_a0 = CONCAT44(uStack_114,iStack_118);
  local_140 = local_150;
  local_130 = puVar1;
  local_c8 = local_150;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar9;
  }
  uVar5 = *(uint *)&(this->DenyList).field_0x28;
  if (uVar13 != uVar5) {
    puVar14 = *(undefined1 **)&(this->DenyList).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar16 = uVar16 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1418e0500;
      uVar13 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_10c = (int)lVar10;
    uVar13 = local_10c + -1 + uVar16;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_1418e0500:
  while( true ) {
    pTVar17 = local_c8;
    if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_c0.CurrentBitIndex == uVar13) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar17 == local_150)) break;
    lVar10 = (longlong)TStack_c0.CurrentBitIndex * 0x20 + *(longlong *)pTVar17;
    pFVar12 = *(FName **)(lVar10 + 8);
    iVar4 = *(int *)(lVar10 + 0x10);
    pFVar2 = pFVar12 + iVar4;
    while( true ) {
      if (*(int *)(lVar10 + 0x10) != iVar4) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar12 == pFVar2) break;
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                (__return_storage_ptr__,pFVar12);
      pFVar12 = pFVar12 + 1;
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  iStack_f0 = 0;
  local_d8 = 0;
  puVar1 = &(this->AllowList).field_0x10;
  iVar4 = *(int *)&(this->AllowList).field_0x28;
  pTVar17 = &this->AllowList;
  iStack_dc = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->AllowList).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_f0;
      local_d8 = local_d8 + 0x20;
      iStack_f0 = iStack_f0 + 1;
      iStack_dc = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0) goto LAB_1418e0623;
      uVar13 = puVar15[lVar10 + 1];
    }
    local_148 = (ulonglong)(-uVar13 & uVar13);
    uVar3 = local_148 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_108 = (int)lVar10;
    iStack_dc = local_d8 + -1 + local_108;
    if (iVar4 < iStack_dc) {
      iStack_dc = iVar4;
    }
  }
LAB_1418e0623:
  uStack_ec = (undefined4)local_148;
  iStack_d4 = iStack_124;
  iStack_d0 = *(int *)&(this->AllowList).field_0x8 - *(int *)&(this->AllowList).field_0x34;
  uVar13 = *(uint *)&(this->AllowList).field_0x28;
  uStack_e0 = 0xffffffff;
  TStack_90._padding_ = CONCAT44(uStack_ec,iStack_f0);
  uVar16 = uVar13 & 0xffffffe0;
  TStack_90.CurrentBitIndex = iStack_dc;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_90._28_4_ = iStack_124;
  TStack_90.BaseBitIndex = local_d8;
  uStack_70 = CONCAT44(uStack_cc,iStack_d0);
  local_150 = pTVar17;
  local_f8 = pTVar17;
  local_e8 = puVar1;
  local_98 = pTVar17;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar9;
  }
  uVar5 = *(uint *)&(this->AllowList).field_0x28;
  if (uVar13 != uVar5) {
    puVar14 = *(undefined1 **)&(this->AllowList).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar16 = uVar16 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1418e0730;
      uVar13 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_1418e0730:
  while( true ) {
    pTVar7 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_90.CurrentBitIndex == uVar13) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar17))
    break;
    lVar10 = (longlong)TStack_90.CurrentBitIndex * 0x20 + *(longlong *)pTVar7;
    pFVar12 = *(FName **)(lVar10 + 8);
    iVar4 = *(int *)(lVar10 + 0x10);
    pFVar2 = pFVar12 + iVar4;
    while( true ) {
      if (*(int *)(lVar10 + 0x10) != iVar4) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_158);
      }
      if (pFVar12 == pFVar2) break;
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                (__return_storage_ptr__,pFVar12);
      pFVar12 = pFVar12 + 1;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    pTVar17 = local_150;
  }
  pFVar12 = (FName *)(this->DenyListAll).AllocatorInstance.Data;
  iVar4 = (this->DenyListAll).ArrayNum;
  pFVar2 = pFVar12 + iVar4;
  while( true ) {
    if ((this->DenyListAll).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_157);
    }
    if (pFVar12 == pFVar2) break;
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
              (__return_storage_ptr__,pFVar12);
    pFVar12 = pFVar12 + 1;
  }
  return __return_storage_ptr__;
}

// HasFiltering @ 1418e2250

bool __thiscall FNamePermissionList::HasFiltering(FNamePermissionList *this)

{
  if (((*(int *)&(this->DenyList).field_0x8 - *(int *)&(this->DenyList).field_0x34 < 1) &&
      (*(int *)&(this->AllowList).field_0x8 - *(int *)&(this->AllowList).field_0x34 < 1)) &&
     ((this->DenyListAll).ArrayNum < 1)) {
    return false;
  }
  return true;
}

// PassesFilter @ 1418f0320

bool __thiscall FNamePermissionList::PassesFilter(FNamePermissionList *this,FName param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if ((this->DenyListAll).ArrayNum < 1) {
    if (*(int *)&(this->AllowList).field_0x8 - *(int *)&(this->AllowList).field_0x34 < 1) {
LAB_1418f03c0:
      uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
      if (*(int *)&(this->DenyList).field_0x8 != *(int *)&(this->DenyList).field_0x34) {
        puVar2 = *(undefined1 **)&(this->DenyList).field_0x40;
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = &(this->DenyList).field_0x38;
        }
        iVar3 = *(int *)(puVar2 + (ulonglong)
                                  (*(int *)&(this->DenyList).field_0x48 - 1U &
                                  param_1.Number + uVar1) * 4);
        if (iVar3 != -1) {
          do {
            if (*(FName *)((longlong)iVar3 * 0x20 + *(longlong *)&this->DenyList) == param_1) {
              return false;
            }
            iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->DenyList);
          } while (iVar3 != -1);
        }
      }
      return true;
    }
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    if (*(int *)&(this->AllowList).field_0x8 != *(int *)&(this->AllowList).field_0x34) {
      puVar2 = *(undefined1 **)&(this->AllowList).field_0x40;
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = &(this->AllowList).field_0x38;
      }
      iVar3 = *(int *)(puVar2 + (ulonglong)
                                (*(int *)&(this->AllowList).field_0x48 - 1U & param_1.Number + uVar1
                                ) * 4);
      if (iVar3 != -1) {
        do {
          if (*(FName *)((longlong)iVar3 * 0x20 + *(longlong *)&this->AllowList) == param_1) {
            if (iVar3 == -1) {
              return false;
            }
            goto LAB_1418f03c0;
          }
          iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->AllowList);
        } while (iVar3 != -1);
      }
    }
  }
  return false;
}

// RemoveAllowListItem @ 1418f28f0

bool __thiscall
FNamePermissionList::RemoveAllowListItem(FNamePermissionList *this,FName param_1,FName param_2)

{
  int iVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  FName local_res10;
  
  local_res10 = param_1;
  this_00 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
            ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                    *)&this->AllowList,param_2);
  if ((this_00 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) &&
     (iVar1 = TArray<FName,TSizedDefaultAllocator<32>_>::Remove(this_00,&local_res10), iVar1 == 1))
  {
    if (this_00->ArrayNum == 0) {
      TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
      ::Remove((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                *)&this->AllowList,param_2);
    }
    if (this->bSuppressOnFilterChanged == false) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnFilterChangedDelegate);
    }
    return true;
  }
  return false;
}

// RemoveDenyListItem @ 1418f2aa0

bool __thiscall
FNamePermissionList::RemoveDenyListItem(FNamePermissionList *this,FName param_1,FName param_2)

{
  int iVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  FName local_res10;
  
  local_res10 = param_1;
  this_00 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
            ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                    *)&this->DenyList,param_2);
  if ((this_00 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) &&
     (iVar1 = TArray<FName,TSizedDefaultAllocator<32>_>::Remove(this_00,&local_res10), iVar1 == 1))
  {
    if (this_00->ArrayNum == 0) {
      TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
      ::Remove((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                *)&this->DenyList,param_2);
    }
    if (this->bSuppressOnFilterChanged == false) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnFilterChangedDelegate);
    }
    return true;
  }
  return false;
}

// UnregisterOwner @ 1418fdf60

bool __thiscall FNamePermissionList::UnregisterOwner(FNamePermissionList *this,FName param_1)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FName FVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  FName local_res10;
  byte local_res18;
  undefined4 local_res20;
  undefined1 auStack_120 [16];
  uint uStack_110;
  uint uStack_10c;
  longlong local_108;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_100;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_f8;
  char local_f0;
  char cStack_ef;
  longlong *local_e8;
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  uint uStack_cc;
  longlong local_c8;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_c0;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_b8;
  char local_b0;
  char cStack_af;
  undefined1 local_a8 [32];
  longlong local_88;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_80;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_50;
  
  pTVar10 = &this->DenyList;
  bVar11 = 0;
  local_res18 = 0;
  local_res10 = param_1;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_a8,
             (TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)pTVar10);
  local_f0 = '\0';
  cStack_ef = '\0';
  stack0xfffffffffffffee8 = local_a8._16_16_;
  auStack_120._0_8_ = local_a8._8_8_;
  local_108 = local_88;
  pTStack_100 = pTStack_80;
  uVar7 = local_a8._24_8_ >> 0x20;
  local_f8 = (TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)pTVar10;
  if (local_a8._28_4_ < *(int *)(local_a8._16_8_ + 0x18)) {
    do {
      puVar8 = (ulonglong *)(*(longlong *)local_a8._0_8_ + 8 + (longlong)(int)uVar7 * 0x20);
      if ((((FName *)*puVar8 <= &local_res10) &&
          (&local_res10 < (FName *)*puVar8 + *(int *)((longlong)puVar8 + 0xc))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar5 = (int)puVar8[1];
      if (iVar5 != 0) {
        pFVar1 = (FName *)*puVar8;
        iVar15 = 0;
        lVar9 = 0;
        bVar3 = *pFVar1 != local_res10;
        FVar6 = local_res10;
        iVar12 = 0;
        do {
          iVar13 = iVar12;
          do {
            lVar9 = lVar9 + 1;
            iVar13 = iVar13 + 1;
            if (iVar5 <= lVar9) break;
          } while (bVar3 == (pFVar1[lVar9] != FVar6));
          if (bVar3 != false) {
            if (iVar15 != iVar12) {
              memmove(pFVar1 + iVar15,pFVar1 + iVar12,(longlong)(iVar13 - iVar12) << 3);
              FVar6 = local_res10;
            }
            iVar15 = iVar15 + (iVar13 - iVar12);
          }
          bVar3 = (bool)(bVar3 ^ 1);
          iVar12 = iVar13;
        } while (lVar9 < iVar5);
        *(int *)(puVar8 + 1) = iVar15;
        bVar11 = local_res18;
      }
      if (*(int *)((longlong)(int)uStack_10c * 0x20 + 0x10 + *(longlong *)local_a8._0_8_) == 0) {
        TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_100,uStack_10c);
        bVar11 = 1;
        local_f0 = '\x01';
        local_res18 = 1;
      }
      uStack_110 = uStack_110 & ~auStack_120._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_120);
      uVar7 = (ulonglong)uStack_10c;
    } while ((int)uStack_10c < *(int *)(auStack_120._8_8_ + 0x18));
    if ((local_f0 != '\0') && (cStack_ef != '\0')) {
      uVar14 = *(int *)&(local_f8->Elements).field_0x8 - *(int *)&(local_f8->Elements).field_0x34;
      if (uVar14 < 4) {
        iVar5 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_res20 = (undefined4)lVar9;
        iVar5 = 1 << ((byte)lVar9 & 0x1f);
      }
      if (((0 < (int)uVar14) && (local_f8->HashSize < iVar5)) || (iVar5 < local_f8->HashSize)) {
        local_f8->HashSize = iVar5;
        TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_f8);
      }
    }
  }
  pTVar10 = &this->AllowList;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)pTVar10);
  local_b0 = '\0';
  cStack_af = '\0';
  stack0xffffffffffffff28 = local_78._16_16_;
  local_e8 = (longlong *)local_78._0_8_;
  auStack_e0._0_8_ = local_78._8_8_;
  local_c8 = local_58;
  pTStack_c0 = pTStack_50;
  uVar7 = local_78._24_8_ >> 0x20;
  local_b8 = (TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)pTVar10;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      puVar8 = (ulonglong *)(*local_e8 + 8 + (longlong)(int)uVar7 * 0x20);
      if ((((FName *)*puVar8 <= &local_res10) &&
          (&local_res10 < (FName *)*puVar8 + *(int *)((longlong)puVar8 + 0xc))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar5 = (int)puVar8[1];
      if (iVar5 != 0) {
        pFVar1 = (FName *)*puVar8;
        iVar15 = 0;
        lVar9 = 0;
        bVar3 = *pFVar1 != local_res10;
        FVar6 = local_res10;
        iVar12 = 0;
        do {
          iVar13 = iVar12;
          do {
            lVar9 = lVar9 + 1;
            iVar13 = iVar13 + 1;
            if (iVar5 <= lVar9) break;
          } while (bVar3 == (pFVar1[lVar9] != FVar6));
          if (bVar3 != false) {
            if (iVar15 != iVar12) {
              memmove(pFVar1 + iVar15,pFVar1 + iVar12,(longlong)(iVar13 - iVar12) << 3);
              FVar6 = local_res10;
            }
            iVar15 = iVar15 + (iVar13 - iVar12);
          }
          bVar3 = (bool)(bVar3 ^ 1);
          iVar12 = iVar13;
        } while (lVar9 < iVar5);
        *(int *)(puVar8 + 1) = iVar15;
      }
      if (*(int *)((longlong)(int)uStack_cc * 0x20 + 0x10 + *local_e8) == 0) {
        TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_c0,uStack_cc);
        local_b0 = '\x01';
        local_res18 = 1;
      }
      bVar11 = local_res18;
      uStack_d0 = uStack_d0 & ~auStack_e0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_e0);
      uVar7 = (ulonglong)uStack_cc;
    } while ((int)uStack_cc < *(int *)(auStack_e0._8_8_ + 0x18));
    if ((local_b0 != '\0') && (cStack_af != '\0')) {
      uVar14 = *(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34;
      if (uVar14 < 4) {
        iVar5 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar9 & 0x1f);
      }
      if (((0 < (int)uVar14) && (local_b8->HashSize < iVar5)) || (iVar5 < local_b8->HashSize)) {
        local_b8->HashSize = iVar5;
        TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_b8);
      }
    }
  }
  iVar5 = TArray<FName,TSizedDefaultAllocator<32>_>::Remove(&this->DenyListAll,&local_res10);
  bVar11 = bVar11 | 0 < iVar5;
  if ((bVar11 != 0) && (this->bSuppressOnFilterChanged == false)) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnFilterChangedDelegate);
  }
  return (bool)bVar11;
}

// UnregisterOwners @ 1418fe490

bool __thiscall
FNamePermissionList::UnregisterOwners
          (FNamePermissionList *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  FName *pFVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  bVar2 = this->bSuppressOnFilterChanged;
  this->bSuppressOnFilterChanged = true;
  pFVar5 = (FName *)(param_1->AllocatorInstance).Data;
  bVar6 = false;
  iVar3 = param_1->ArrayNum;
  pFVar1 = pFVar5 + iVar3;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar1) break;
    bVar4 = UnregisterOwner(this,*pFVar5);
    bVar6 = (bool)(bVar6 | bVar4);
    pFVar5 = pFVar5 + 1;
  }
  this->bSuppressOnFilterChanged = bVar2;
  if ((bVar6 != false) && (bVar2 == false)) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnFilterChangedDelegate);
  }
  return bVar6;
}

// UnregisterOwnersAndAppend @ 1418fe540

bool __thiscall
FNamePermissionList::UnregisterOwnersAndAppend
          (FNamePermissionList *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          FNamePermissionList *param_2)

{
  FName *pFVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  FName *pFVar5;
  byte bVar6;
  undefined1 local_res8 [8];
  
  bVar2 = this->bSuppressOnFilterChanged;
  this->bSuppressOnFilterChanged = true;
  pFVar5 = (FName *)(param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  bVar6 = 0;
  pFVar1 = pFVar5 + iVar3;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar1) break;
    bVar4 = UnregisterOwner(this,*pFVar5);
    bVar6 = bVar6 | bVar4;
    pFVar5 = pFVar5 + 1;
  }
  this->bSuppressOnFilterChanged = true;
  bVar4 = Append(this,param_2);
  this->bSuppressOnFilterChanged = bVar2;
  if (((bool)(bVar4 | bVar6) != false) && (bVar2 == false)) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnFilterChangedDelegate);
  }
  return (bool)(bVar4 | bVar6);
}

