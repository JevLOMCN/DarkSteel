// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 8

// Emplace<FName_const_&,FCommonInputTypeInfo> @ 14a798150

FCommonInputTypeInfo * __thiscall
TMapBase<FName,FCommonInputTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonInputTypeInfo,0>_>
::Emplace<FName_const_&,FCommonInputTypeInfo>
          (TMapBase<FName,FCommonInputTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonInputTypeInfo,0>_>
           *this,FName *param_1,FCommonInputTypeInfo *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x100,0x10,1,(ForAnyElementType *)this,
                       (int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x100 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x100 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<256,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<256,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FCommonInputTypeInfo>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_1;
    *(FName *)((longlong)local_18.Pointer + 0x10) = (param_2->Key).KeyName;
    *(FKeyDetails **)((longlong)local_18.Pointer + 0x18) = (param_2->Key).KeyDetails.Object;
    *(TReferenceControllerBase<1> **)((longlong)local_18.Pointer + 0x20) =
         (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_2->Key).KeyDetails.Object = (FKeyDetails *)0x0;
    *(EInputActionState *)((longlong)local_18.Pointer + 0x28) = param_2->OverrrideState;
    *(bool *)((longlong)local_18.Pointer + 0x29) = param_2->bActionRequiresHold;
    *(float *)((longlong)local_18.Pointer + 0x2c) = param_2->HoldTime;
    *(float *)((longlong)local_18.Pointer + 0x30) = param_2->HoldRollbackTime;
    FSlateBrush::FSlateBrush
              ((FSlateBrush *)((longlong)local_18.Pointer + 0x40),&param_2->OverrideBrush);
    *(undefined4 *)((longlong)local_18.Pointer + 0xf0) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_18.Pointer;
  local_res8[0] = local_18.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,FCommonInputTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FCommonInputTypeInfo,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,FCommonInputTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FCommonInputTypeInfo,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_18.Pointer,local_res8[0]);
  }
  return (FCommonInputTypeInfo *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar7 * 0x100);
}

// FindOrAddImpl<UCommonActivatableWidget_*_const_&> @ 14a799570

TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<UCommonActivatableWidget_*_const_&>
          (TMapBase<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,UCommonActivatableWidget **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  UCommonActivatableWidget **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UCommonActivatableWidget *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UCommonActivatableWidget_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UCommonActivatableWidget_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<TObjectPtr<UCommonInputActionDomain>_> @ 14a799620

FActionDomainSortedRootList * __thiscall
TMapBase<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
::FindOrAddImpl<TObjectPtr<UCommonInputActionDomain>_>
          (TMapBase<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
           *this,uint param_1,TObjectPtr<UCommonInputActionDomain> *param_2)

{
  int iVar1;
  UCommonInputActionDomain *pUVar2;
  UCommonInputActionDomain *pUVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  int local_res8 [2];
  TObjectPtr<UCommonInputActionDomain> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UCommonInputActionDomain *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      lVar4 = (longlong)iVar1 * 0x20;
      pUVar3 = *(UCommonInputActionDomain **)(lVar4 + *(longlong *)&(this->Pairs).Elements);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UCommonInputActionDomain *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (pUVar3 == pUVar2) {
        if ((iVar1 != -1) && (lVar4 = *(longlong *)&(this->Pairs).Elements + lVar4, lVar4 != 0)) {
          return (FActionDomainSortedRootList *)(lVar4 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar4 + 0x18 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList>,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TObjectPtr<UCommonInputActionDomain>_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TObjectPtr<UCommonInputActionDomain>_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FActionDomainSortedRootList *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14a79a280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int iVar17;
  ForElementType<unsigned_int> FVar18;
  uint *puVar19;
  longlong lVar20;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar9 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar12 == 0) goto LAB_14a79a536;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar12);
  uVar13 = 1;
  if (3 < uVar12) {
    uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_120 = (undefined4)lVar10;
    uVar13 = 1 << ((byte)lVar10 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar13 <= (int)local_50)) goto LAB_14a79a536;
  local_50 = uVar13;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar13 != 0) {
    uVar12 = uVar13;
    if (uVar13 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_14a79a395;
      }
    }
    else {
LAB_14a79a395:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar12,4);
    }
    if (0 < (int)uVar13) {
      uVar16 = (ulonglong)uVar13;
      uVar11 = uVar9;
      do {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = uVar11 & (longlong)(int)uVar13 - 1U;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    if (local_70 != 0) {
      FVar18 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_78;
      }
      uVar12 = *(uint *)FVar18;
      uVar11 = uVar9;
      while (uVar12 == 0) {
        uStack_150 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_150;
        iVar17 = (int)uVar9;
        local_168 = iVar17 + 1;
        uVar9 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_14a79a492;
        uVar12 = ((uint *)((longlong)FVar18 + 4))[iVar17];
      }
      uStack_164 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_164 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_11c = (int)lVar10;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar9 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_14a79a492:
        uVar9 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar9 < (int)local_70) {
      do {
        puVar15 = (undefined8 *)((longlong)(int)uVar9 * 0x10 + *(longlong *)local_114._4_8_);
        uVar3 = *puVar15;
        uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar12 = local_50 - 1 & uVar12 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar15 + 0xc) = uVar12;
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar11 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(FVar8.Data + uVar11 * 4);
        *(int *)(FVar8.Data + uVar11 * 4) = (int)uVar9;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar9 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_14a79a536:
  iVar17 = 0;
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (*piVar1 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar12,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
  local_c8 = iVar17;
  iStack_cc = 0;
  uStack_dc = 1;
  if (iVar2 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_140.Array;
    }
    uVar12 = *puVar19;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar17;
      local_c8 = local_c8 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_cc = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14a79a5de;
      uVar12 = puVar19[lVar10 + 1];
    }
    uStack_dc = -uVar12 & uVar12;
    uVar9 = (ulonglong)uStack_dc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_118 = (int)lVar10;
    iStack_cc = local_c8 + -1 + local_118;
    if (iVar2 < iStack_cc) {
      iStack_cc = iVar2;
    }
  }
LAB_14a79a5de:
  uStack_d0 = 0xffffffff;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,iVar17);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  iStack_e0 = iVar17;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = iStack_cc;
  if (iStack_cc < iVar2) {
    do {
      lVar20 = (longlong)TStack_140.CurrentBitIndex;
      lVar10 = *(longlong *)
                (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_140.CurrentBitIndex * 0x30)
      ;
      uVar12 = ::GetTypeHash((FNameEntryId)(uint)lVar10);
      if (local_98._8_4_ != local_64) {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        for (iVar17 = *(int *)(FVar8.Data +
                              (ulonglong)(local_50 - 1 & (int)((ulonglong)lVar10 >> 0x20) + uVar12)
                              * 4); iVar17 != -1;
            iVar17 = *(int *)(local_98._0_8_ + (longlong)iVar17 * 0x10 + 8)) {
          if (*(longlong *)(local_98._0_8_ + (longlong)iVar17 * 0x10) == lVar10) goto LAB_14a79a75e;
        }
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      pFVar14 = (FScriptContainerElement *)(lVar20 * 0x30 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar4 <= pFVar14) && (pFVar14 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar17 = (*pcVar5)();
        return iVar17;
      }
      iVar17 = param_1->ArrayNum;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar17 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar17 * 8) =
           *(undefined8 *)pFVar14;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
                 (FName *)local_114,
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0x30 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_14a79a75e:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar17 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar17;
}

// Find @ 14a7db830

FActionDomainSortedRootList * __thiscall
TMapBase<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
::Find(TMapBase<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
       *this,TObjectPtr<UCommonInputActionDomain_const_> param_1)

{
  TObjectPtr<UCommonInputActionDomain_const_>_u_0 TVar1;
  int iVar2;
  FActionDomainSortedRootList *pFVar3;
  uint uVar4;
  longlong lVar5;
  TObjectPtr<UCommonInputActionDomain_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  TVar1.DebugPtr = *param_1.field0_0x0;
  local_res8 = TVar1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar1.DebugPtr != (UCommonInputActionDomain *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UCommonInputActionDomain *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
  }
  uVar4 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = TSet<TTuple<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList>,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UCommonInputActionDomain_const_>_>
                    (&this->Pairs,uVar4 >> 0x10 ^ uVar4,
                     (TObjectPtr<UCommonInputActionDomain_const_> *)&local_res8.ObjectPtr);
  if (iVar2 != -1) {
    lVar5 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pFVar3 = (FActionDomainSortedRootList *)0x0;
    if (lVar5 != 0) {
      pFVar3 = (FActionDomainSortedRootList *)(lVar5 + 8);
    }
    return pFVar3;
  }
  return (FActionDomainSortedRootList *)0x0;
}

// Find @ 14a7db8e0

TObjectPtr<UCommonInputMetadata_const_> * __thiscall
TMapBase<TObjectPtr<UInputAction>,TObjectPtr<UCommonInputMetadata_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction>,TObjectPtr<UCommonInputMetadata_const_>,0>_>
::Find(TMapBase<TObjectPtr<UInputAction>,TObjectPtr<UCommonInputMetadata_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction>,TObjectPtr<UCommonInputMetadata_const_>,0>_>
       *this,TObjectPtr<UInputAction_const_> param_1)

{
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  uint uVar4;
  longlong lVar5;
  ForElementType<FSetElementId> FVar6;
  
  pUVar2 = *(UObject **)param_1.field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar2 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  uVar4 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    while (iVar1 != -1) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      lVar5 = (longlong)iVar1 * 0x18;
      pUVar3 = *(UObject **)(lVar5 + *(longlong *)&(this->Pairs).Elements);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      if (pUVar3 == pUVar2) {
        if (iVar1 == -1) {
          return (TObjectPtr<UCommonInputMetadata_const_> *)0x0;
        }
        lVar5 = *(longlong *)&(this->Pairs).Elements + lVar5;
        if (lVar5 != 0) {
          return (TObjectPtr<UCommonInputMetadata_const_> *)(lVar5 + 8);
        }
        return (TObjectPtr<UCommonInputMetadata_const_> *)0x0;
      }
      iVar1 = *(int *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar5);
    }
  }
  return (TObjectPtr<UCommonInputMetadata_const_> *)0x0;
}

// Find @ 14a7dba20

FCommonInputTypeInfo * __thiscall
TMapBase<FName,FCommonInputTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonInputTypeInfo,0>_>
::Find(TMapBase<FName,FCommonInputTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonInputTypeInfo,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FCommonInputTypeInfo *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x100 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FCommonInputTypeInfo *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = (FCommonInputTypeInfo *)(pFVar2 + 2);
          }
          return pFVar4;
        }
        uVar1 = pFVar2[0x1e].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FCommonInputTypeInfo *)0x0;
}

// Find @ 14a7dbac0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FCommonRegisteredTabInfo * __thiscall
TMapBase<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
::Find(TMapBase<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FCommonRegisteredTabInfo *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FCommonRegisteredTabInfo *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FCommonRegisteredTabInfo *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[5].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FCommonRegisteredTabInfo *)0x0;
}

