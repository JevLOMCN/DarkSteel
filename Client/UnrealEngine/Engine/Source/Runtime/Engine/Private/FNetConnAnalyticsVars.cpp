// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FNetConnAnalyticsVars @ 1473d6ed0

FNetConnAnalyticsVars * __thiscall
FNetConnAnalyticsVars::FNetConnAnalyticsVars(FNetConnAnalyticsVars *this)

{
  this->OutAckOnlyCount = 0;
  this->OutKeepAliveCount = 0;
  this->OutOfOrderPacketsLostCount = 0;
  this->OutOfOrderPacketsRecoveredCount = 0;
  this->OutOfOrderPacketsDuplicateCount = 0;
  (this->CloseReason).Ptr = (FNetResult *)0x0;
  (this->ClientCloseReasons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClientCloseReasons).ArrayNum = 0;
  (this->ClientCloseReasons).ArrayMax = 0;
  *(undefined8 *)&this->RecoveredFaults = 0;
  *(undefined8 *)&(this->RecoveredFaults).field_0x8 = 0;
  *(undefined8 *)&(this->RecoveredFaults).field_0x20 = 0;
  *(undefined4 *)&(this->RecoveredFaults).field_0x28 = 0;
  *(undefined4 *)&(this->RecoveredFaults).field_0x2c = 0x80;
  *(undefined4 *)&(this->RecoveredFaults).field_0x34 = 0;
  *(undefined4 *)&(this->RecoveredFaults).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RecoveredFaults).field_0x40 = 0;
  *(undefined4 *)&(this->RecoveredFaults).field_0x48 = 0;
  (this->FailedPingAddressesICMP).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FailedPingAddressesICMP).ArrayNum = 0;
  (this->FailedPingAddressesICMP).ArrayMax = 0;
  (this->FailedPingAddressesUDP).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FailedPingAddressesUDP).ArrayNum = 0;
  (this->FailedPingAddressesUDP).ArrayMax = 0;
  (this->PerConnectionData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerConnectionData).ArrayNum = 0;
  (this->PerConnectionData).ArrayMax = 0;
  return this;
}

// operator== @ 1473dbf80

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FNetConnAnalyticsVars::operator==(FNetConnAnalyticsVars *this,FNetConnAnalyticsVars *param_1)

{
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int *piVar6;
  longlong lVar7;
  uint *puVar8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  if (((((this->OutAckOnlyCount == param_1->OutAckOnlyCount) &&
        (this->OutKeepAliveCount == param_1->OutKeepAliveCount)) &&
       (this->OutOfOrderPacketsLostCount == param_1->OutOfOrderPacketsLostCount)) &&
      (((this->OutOfOrderPacketsRecoveredCount == param_1->OutOfOrderPacketsRecoveredCount &&
        (this->OutOfOrderPacketsDuplicateCount == param_1->OutOfOrderPacketsDuplicateCount)) &&
       (((this->CloseReason).Ptr == (FNetResult *)0x0 &&
        (((param_1->CloseReason).Ptr == (FNetResult *)0x0 &&
         (iVar3 = (this->ClientCloseReasons).ArrayNum,
         iVar3 == (param_1->ClientCloseReasons).ArrayNum)))))))) &&
     ((bVar5 = CompareItems<FString,int>
                         ((FString *)(this->ClientCloseReasons).AllocatorInstance.Data,
                          (FString *)(param_1->ClientCloseReasons).AllocatorInstance.Data,iVar3),
      bVar5 && (pTVar1 = &this->RecoveredFaults,
               *(int *)&(this->RecoveredFaults).field_0x8 -
               *(int *)&(this->RecoveredFaults).field_0x34 ==
               *(int *)&(param_1->RecoveredFaults).field_0x8 -
               *(int *)&(param_1->RecoveredFaults).field_0x34)))) {
    iVar3 = *(int *)&(this->RecoveredFaults).field_0x28;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->RecoveredFaults).field_0x10;
    iStack_48 = 0;
    uStack_44 = 1;
    local_30 = 0;
    iStack_34 = 0;
    if (iVar3 != 0) {
      puVar8 = *(uint **)&(this->RecoveredFaults).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)TStack_70.Array;
      }
      uVar4 = *puVar8;
      while (uVar4 == 0) {
        lVar7 = (longlong)iStack_48;
        local_30 = local_30 + 0x20;
        iStack_48 = iStack_48 + 1;
        iStack_34 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_48) goto LAB_1473dc0bb;
        uVar4 = puVar8[lVar7 + 1];
      }
      uStack_44 = -uVar4 & uVar4;
      uVar2 = (ulonglong)uStack_44 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_34 = local_30 + -1 + (int)lVar7;
      if (iVar3 < iStack_34) {
        iStack_34 = iVar3;
      }
    }
LAB_1473dc0bb:
    uStack_38 = 0xffffffff;
    iStack_2c = TStack_70.CurrentBitIndex;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    TStack_70._28_4_ = TStack_70.CurrentBitIndex;
    TStack_70.BaseBitIndex = local_30;
    local_50 = pTVar1;
    local_40 = (undefined1 *)TStack_70.Array;
    TStack_70._padding_._0_4_ = iStack_48;
    TStack_70._padding_._4_4_ = uStack_44;
    TStack_70.CurrentBitIndex = iStack_34;
    if (iStack_34 < iVar3) {
      do {
        iVar3 = TStack_70.CurrentBitIndex;
        piVar6 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                 ::Find((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                         *)&param_1->RecoveredFaults,
                        (FString *)
                        ((longlong)TStack_70.CurrentBitIndex * 0x20 + *(longlong *)pTVar1));
        if (piVar6 == (int *)0x0) {
          return false;
        }
        if (*piVar6 != *(int *)((longlong)iVar3 * 0x20 + 0x10 + *(longlong *)pTVar1)) {
          return false;
        }
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
      } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
    }
    iVar3 = (this->FailedPingAddressesICMP).ArrayNum;
    if ((((iVar3 == (param_1->FailedPingAddressesICMP).ArrayNum) &&
         (bVar5 = CompareItems<FString,int>
                            ((FString *)(this->FailedPingAddressesICMP).AllocatorInstance.Data,
                             (FString *)(param_1->FailedPingAddressesICMP).AllocatorInstance.Data,
                             iVar3), bVar5)) &&
        (iVar3 = (this->FailedPingAddressesUDP).ArrayNum,
        iVar3 == (param_1->FailedPingAddressesUDP).ArrayNum)) &&
       (bVar5 = CompareItems<FString,int>
                          ((FString *)(this->FailedPingAddressesUDP).AllocatorInstance.Data,
                           (FString *)(param_1->FailedPingAddressesUDP).AllocatorInstance.Data,iVar3
                          ), bVar5)) {
      return true;
    }
  }
  return false;
}

// CommitAnalytics @ 1473f1e60

void __thiscall
FNetConnAnalyticsVars::CommitAnalytics(FNetConnAnalyticsVars *this,FNetConnAnalyticsVars *param_1)

{
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *pTVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  FNetResult *pFVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  FString *pFVar12;
  FScriptContainerElement *pFVar13;
  uint *puVar14;
  int iVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  pTVar1 = &this->RecoveredFaults;
  param_1->OutAckOnlyCount = param_1->OutAckOnlyCount + this->OutAckOnlyCount;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->RecoveredFaults).field_0x10;
  iVar15 = 0;
  param_1->OutKeepAliveCount = param_1->OutKeepAliveCount + this->OutKeepAliveCount;
  param_1->OutOfOrderPacketsLostCount =
       param_1->OutOfOrderPacketsLostCount + this->OutOfOrderPacketsLostCount;
  iStack_48 = 0;
  uStack_44 = 1;
  param_1->OutOfOrderPacketsRecoveredCount =
       param_1->OutOfOrderPacketsRecoveredCount + this->OutOfOrderPacketsRecoveredCount;
  param_1->OutOfOrderPacketsDuplicateCount =
       param_1->OutOfOrderPacketsDuplicateCount + this->OutOfOrderPacketsDuplicateCount;
  iVar8 = *(int *)&(this->RecoveredFaults).field_0x28;
  local_30 = iStack_48;
  iStack_34 = 0;
  if (iVar8 != 0) {
    puVar14 = *(uint **)&(this->RecoveredFaults).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_70.Array;
    }
    uVar7 = *puVar14;
    local_30 = iVar15;
    iStack_48 = iVar15;
    while (uVar7 == 0) {
      lVar10 = (longlong)iStack_48;
      local_30 = local_30 + 0x20;
      iStack_48 = iStack_48 + 1;
      iStack_34 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_48) goto LAB_1473f1f29;
      uVar7 = puVar14[lVar10 + 1];
    }
    uStack_44 = -uVar7 & uVar7;
    uVar4 = (ulonglong)uStack_44 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_34 = (int)lVar10 + -1 + local_30;
    if (iVar8 < iStack_34) {
      iStack_34 = iVar8;
    }
  }
LAB_1473f1f29:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = pTVar1;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70._padding_._0_4_ = iStack_48;
  TStack_70._padding_._4_4_ = uStack_44;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar8) {
    do {
      lVar10 = (longlong)TStack_70.CurrentBitIndex;
      pFVar12 = (FString *)((longlong)TStack_70.CurrentBitIndex * 0x20 + *(longlong *)pTVar1);
      iVar8 = (pFVar12->Data).ArrayNum;
      if (iVar8 == 0) {
        pwVar11 = L"";
        iVar8 = iVar15;
      }
      else {
        pwVar11 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        iVar8 = iVar8 + -1;
      }
      uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar11);
      piVar9 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
               ::FindOrAddImpl<FString_const_&>
                         ((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                           *)&param_1->RecoveredFaults,uVar7,pFVar12);
      *piVar9 = *piVar9 + *(int *)(lVar10 * 0x20 + 0x10 + *(longlong *)pTVar1);
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  iVar8 = (param_1->PerConnectionData).ArrayNum;
  piVar9 = &(param_1->PerConnectionData).ArrayMax;
  if (iVar8 == *piVar9) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(param_1->PerConnectionData).AllocatorInstance,piVar9);
  }
  (param_1->PerConnectionData).ArrayNum = iVar8 + 1;
  pFVar3 = (param_1->PerConnectionData).AllocatorInstance.Data + (longlong)iVar8 * 0x18;
  DefaultConstructItems<FNetConnAnalyticsVars::FPerNetConnData,int>(pFVar3,1);
  pFVar5 = (this->CloseReason).Ptr;
  if (pFVar5 != (FNetResult *)0x0) {
    if (pFVar3 != (FScriptContainerElement *)&this->CloseReason) {
      pvVar6 = *(void **)pFVar3;
      *(FNetResult **)pFVar3 = pFVar5;
      (this->CloseReason).Ptr = (FNetResult *)0x0;
      if (pvVar6 != (void *)0x0) {
        lVar10 = *(longlong *)((longlong)pvVar6 + 0x28);
        if (lVar10 != 0) {
          (**(code **)(lVar10 + -0x10))(lVar10 + -0x10);
        }
        if (*(void **)((longlong)pvVar6 + 0x18) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar6 + 0x18));
        }
        ::operator_delete(pvVar6,0x30);
      }
    }
    pTVar2 = &this->ClientCloseReasons;
    pFVar13 = pFVar3 + 8;
    if ((TArray<FString,TSizedDefaultAllocator<32>_> *)pFVar13 != pTVar2) {
      DestructItems<FString,int>(*(FString **)pFVar13,*(int *)(pFVar3 + 0x10));
      if (*(void **)pFVar13 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar13);
      }
      *(FScriptContainerElement **)pFVar13 = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar3 + 0x10) = (this->ClientCloseReasons).ArrayNum;
      *(int *)(pFVar3 + 0x14) = (this->ClientCloseReasons).ArrayMax;
      (this->ClientCloseReasons).ArrayNum = 0;
      (this->ClientCloseReasons).ArrayMax = 0;
    }
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
            (&param_1->FailedPingAddressesICMP,&this->FailedPingAddressesICMP);
  TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
            (&param_1->FailedPingAddressesUDP,&this->FailedPingAddressesUDP);
  return;
}

// ~FNetConnAnalyticsVars @ 147fa8ea0

void __thiscall FNetConnAnalyticsVars::~FNetConnAnalyticsVars(FNetConnAnalyticsVars *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FNetResult *pFVar3;
  TPimplPtr<UE::Net::FNetResult,1> TVar4;
  
  DestructItems<FNetConnAnalyticsVars::FPerNetConnData,int>
            ((FPerNetConnData *)(this->PerConnectionData).AllocatorInstance.Data,
             (this->PerConnectionData).ArrayNum);
  pFVar1 = (this->PerConnectionData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->FailedPingAddressesUDP).AllocatorInstance.Data,
             (this->FailedPingAddressesUDP).ArrayNum);
  pFVar1 = (this->FailedPingAddressesUDP).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->FailedPingAddressesICMP).AllocatorInstance.Data,
             (this->FailedPingAddressesICMP).ArrayNum);
  pFVar1 = (this->FailedPingAddressesICMP).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->RecoveredFaults).field_0x48 = 0;
  pvVar2 = *(void **)&(this->RecoveredFaults).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RecoveredFaults);
  DestructItems<FString,int>
            ((FString *)(this->ClientCloseReasons).AllocatorInstance.Data,
             (this->ClientCloseReasons).ArrayNum);
  pFVar1 = (this->ClientCloseReasons).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar3 = (this->CloseReason).Ptr;
  if (pFVar3 != (FNetResult *)0x0) {
    TVar4 = pFVar3->NextResult;
    if (TVar4 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)TVar4 + -0x10))((longlong)TVar4 + -0x10);
    }
    pFVar1 = (pFVar3->ErrorContext).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pFVar3,0x30);
  }
  return;
}

