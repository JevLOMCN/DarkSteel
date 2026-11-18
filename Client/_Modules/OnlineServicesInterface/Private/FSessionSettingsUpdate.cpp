// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 1

// operator+= @ 14ec24e90

FSessionSettingsUpdate * __thiscall
UE::Online::FSessionSettingsUpdate::operator+=
          (FSessionSettingsUpdate *this,FSessionSettingsUpdate *param_1)

{
  FName *pFVar1;
  ulonglong uVar2;
  TMap<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
  *pTVar3;
  undefined1 *puVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FName FVar7;
  code *pcVar8;
  TMap<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
  *pTVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FSessionSettingsUpdate *pFVar13;
  longlong lVar14;
  longlong lVar15;
  FName *pFVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined1 *puVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  uint *puVar23;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_d8;
  undefined4 uStack_9c;
  FName local_80;
  TMap<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  if ((param_1->SchemaName).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    TOptional<FName>::operator=(&this->SchemaName,&param_1->SchemaName);
  }
  if ((param_1->NumMaxConnections).bIsSet != false) {
    if (&param_1->NumMaxConnections != &this->NumMaxConnections) {
      (this->NumMaxConnections).TypedValue = (param_1->NumMaxConnections).TypedValue;
      (this->NumMaxConnections).bIsSet = true;
    }
  }
  if ((param_1->JoinPolicy).bIsSet != false) {
    if (&param_1->JoinPolicy != &this->JoinPolicy) {
      (this->JoinPolicy).TypedValue = (param_1->JoinPolicy).TypedValue;
      (this->JoinPolicy).bIsSet = true;
    }
  }
  if ((param_1->bAllowNewMembers).bIsSet != false) {
    if (&param_1->bAllowNewMembers != &this->bAllowNewMembers) {
      (this->bAllowNewMembers).TypedValue = (param_1->bAllowNewMembers).TypedValue;
      (this->bAllowNewMembers).bIsSet = true;
    }
  }
  pTVar3 = &param_1->UpdatedCustomSettings;
  iVar19 = 0;
  iVar18 = *(int *)&(param_1->UpdatedCustomSettings).field_0x28;
  TStack_70.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->UpdatedCustomSettings).field_0x10;
  iVar22 = 0;
  uVar11 = 1;
  iVar12 = 0;
  if (iVar18 != 0) {
    puVar23 = *(uint **)&(param_1->UpdatedCustomSettings).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)TStack_70.Array;
    }
    uVar17 = *puVar23;
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar19;
      iVar22 = iVar22 + 0x20;
      iVar19 = iVar19 + 1;
      iVar12 = iVar18;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14ec24faf;
      uVar17 = puVar23[lVar14 + 1];
    }
    uVar11 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar12 = iVar22 + -1 + (int)lVar14;
    if (iVar18 < iVar12) {
      iVar12 = iVar18;
    }
  }
LAB_14ec24faf:
  uVar17 = *(uint *)&(param_1->UpdatedCustomSettings).field_0x28;
  puVar4 = &(param_1->UpdatedCustomSettings).field_0x10;
  TStack_70.CurrentBitIndex = iVar12;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uVar11,iVar19);
  uVar11 = uVar17 & 0xffffffe0;
  iVar19 = (int)uVar17 >> 5;
  TStack_70._28_4_ = iVar12;
  TStack_70.BaseBitIndex = iVar22;
  uStack_50 = CONCAT44(uStack_9c,
                       *(int *)&(param_1->UpdatedCustomSettings).field_0x8 -
                       *(int *)&(param_1->UpdatedCustomSettings).field_0x34);
  local_78 = pTVar3;
  if ((((int)uVar17 < 0) || (iVar18 < (int)uVar17)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar13 = (FSessionSettingsUpdate *)(*pcVar8)();
    return pFVar13;
  }
  uVar5 = *(uint *)&(param_1->UpdatedCustomSettings).field_0x28;
  local_d8 = uVar17;
  if (uVar17 != uVar5) {
    puVar20 = *(undefined1 **)&(param_1->UpdatedCustomSettings).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar4;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar19;
      uVar11 = uVar11 + 0x20;
      iVar19 = iVar19 + 1;
      uVar17 = uVar5;
      local_d8 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14ec250c0;
      uVar17 = *(uint *)(puVar20 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar17 = (int)lVar14 + -1 + uVar11;
    local_d8 = uVar17;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
      local_d8 = uVar5;
    }
  }
LAB_14ec250c0:
  do {
    pTVar9 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_70.CurrentBitIndex == uVar17) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pTVar9 == pTVar3))
    {
      TMap<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
      ::Append<FDefaultSetAllocator>(&this->UpdatedCustomSettings,pTVar3);
      pFVar16 = (FName *)(param_1->RemovedCustomSettings).AllocatorInstance.Data;
      iVar18 = (param_1->RemovedCustomSettings).ArrayNum;
      pFVar1 = pFVar16 + iVar18;
      while( true ) {
        if ((param_1->RemovedCustomSettings).ArrayNum != iVar18) {
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (pFVar16 == pFVar1) break;
        FVar7 = *pFVar16;
        local_80 = FVar7;
        if (*(int *)&(this->UpdatedCustomSettings).field_0x8 !=
            *(int *)&(this->UpdatedCustomSettings).field_0x34) {
          uVar11 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
          TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
          ::RemoveImpl<FName>((TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
                               *)&this->UpdatedCustomSettings,FVar7.Number + uVar11,&local_80);
        }
        TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>
                  (&this->RemovedCustomSettings,pFVar16);
        pFVar16 = pFVar16 + 1;
      }
      return this;
    }
    pFVar6 = (this->RemovedCustomSettings).AllocatorInstance.Data;
    pFVar21 = (FScriptContainerElement *)
              ((longlong)TStack_70.CurrentBitIndex * 0x38 + *(longlong *)pTVar9);
    if (((pFVar6 <= pFVar21) &&
        (pFVar21 < pFVar6 + (longlong)(this->RemovedCustomSettings).ArrayMax * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FSessionSettingsUpdate *)(*pcVar8)();
      return pFVar13;
    }
    iVar18 = (this->RemovedCustomSettings).ArrayNum;
    lVar14 = (longlong)iVar18;
    if (iVar18 != 0) {
      pFVar6 = (this->RemovedCustomSettings).AllocatorInstance.Data;
      iVar19 = 0;
      lVar15 = 0;
      bVar10 = *(longlong *)pFVar6 != *(longlong *)pFVar21;
      iVar18 = 0;
      do {
        lVar15 = lVar15 + 1;
        iVar22 = iVar18 + 1;
        if (lVar15 < lVar14) {
          do {
            if (bVar10 != (*(longlong *)(pFVar6 + lVar15 * 8) != *(longlong *)pFVar21)) break;
            iVar22 = iVar22 + 1;
            lVar15 = lVar15 + 1;
          } while (lVar15 < lVar14);
        }
        if (bVar10 != false) {
          if (iVar19 != iVar18) {
            memmove(pFVar6 + (longlong)iVar19 * 8,pFVar6 + (longlong)iVar18 * 8,
                    (longlong)(iVar22 - iVar18) << 3);
          }
          iVar19 = iVar19 + (iVar22 - iVar18);
        }
        bVar10 = (bool)(bVar10 ^ 1);
        iVar18 = iVar22;
      } while (lVar15 < lVar14);
      (this->RemovedCustomSettings).ArrayNum = iVar19;
      uVar17 = local_d8;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

