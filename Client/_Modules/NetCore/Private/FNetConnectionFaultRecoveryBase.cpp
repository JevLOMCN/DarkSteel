// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 5

// AddNewCounter @ 1441d5c20

int __thiscall
UE::Net::FNetConnectionFaultRecoveryBase::AddNewCounter
          (FNetConnectionFaultRecoveryBase *this,int param_1)

{
  TArray<UE::Net::FEscalationCounter,TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
  *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FEscalationCounter *pFVar5;
  TArray<UE::Net::FEscalationCounter,TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  undefined4 uStack_2c;
  TArrayView<UE::Net::FEscalationCounter,int> local_28;
  
  this_00 = (this->NetFaultEscalationManager).Ptr;
  if (this_00 ==
      (TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
       *)0x0) {
    iVar4 = this->LastCounterIndex;
    this->LastCounterIndex = iVar4 + param_1;
    return iVar4;
  }
  TArray<UE::Net::FEscalationCounter,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>::
  AddDefaulted(&this_00->FrameCountersAlloc,param_1);
  TArray<UE::Net::FEscalationCounter,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>::
  AddDefaulted(&this_00->SecondCountersAlloc,param_1);
  pTVar1 = &this_00->CountersPerPeriodAlloc;
  iVar4 = Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FEscalationCounter>_>
                    (0x10,8,param_1 << 4,&pTVar1->AllocatorInstance,
                     &(this_00->CountersPerPeriodAlloc).ArrayNum,
                     &(this_00->CountersPerPeriodAlloc).ArrayMax);
  pTVar6 = *(TArray<UE::Net::FEscalationCounter,TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>_>
             **)&(this_00->CountersPerPeriodAlloc).AllocatorInstance.SecondaryData.field_0x0;
  if (pTVar6 == (TArray<UE::Net::FEscalationCounter,TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    pTVar6 = pTVar1;
  }
  DefaultConstructItems<UE::Net::FEscalationCounter,int>
            ((pTVar6->AllocatorInstance).InlineData + (longlong)iVar4 * 0x10,param_1 << 4);
  pFVar5 = *(FEscalationCounter **)
            &(this_00->FrameCountersAlloc).AllocatorInstance.SecondaryData.field_0x0;
  iVar4 = (this_00->FrameCountersAlloc).ArrayNum;
  if (pFVar5 == (FEscalationCounter *)0x0) {
    pFVar5 = (FEscalationCounter *)&this_00->FrameCountersAlloc;
  }
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  ((TArrayView<UE::Net::FEscalationCounter,int> *)&this_00->field_0x90)->DataPtr = pFVar5;
  *(ulonglong *)&this_00->field_0x98 = CONCAT44(uStack_2c,iVar4);
  pFVar5 = *(FEscalationCounter **)
            &(this_00->SecondCountersAlloc).AllocatorInstance.SecondaryData.field_0x0;
  iVar4 = (this_00->SecondCountersAlloc).ArrayNum;
  if (pFVar5 == (FEscalationCounter *)0x0) {
    pFVar5 = (FEscalationCounter *)&this_00->SecondCountersAlloc;
  }
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  ((TArrayView<UE::Net::FEscalationCounter,int> *)&this_00->field_0xa0)->DataPtr = pFVar5;
  *(ulonglong *)&this_00->field_0xa8 = CONCAT44(uStack_2c,iVar4);
  local_28.DataPtr =
       *(FEscalationCounter **)
        &(this_00->CountersPerPeriodAlloc).AllocatorInstance.SecondaryData.field_0x0;
  iVar4 = (this_00->CountersPerPeriodAlloc).ArrayNum;
  if (local_28.DataPtr == (FEscalationCounter *)0x0) {
    local_28.DataPtr = (FEscalationCounter *)pTVar1;
  }
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  local_28.ArrayNum = iVar4;
  iVar4 = FEscalationManager::AddNewCounter_Internal
                    ((FEscalationManager *)this_00,param_1,&local_28);
  return iVar4;
}

// GetFrameCounter @ 1441dc690

FEscalationCounter * __thiscall
UE::Net::FNetConnectionFaultRecoveryBase::GetFrameCounter
          (FNetConnectionFaultRecoveryBase *this,int param_1)

{
  TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  FEscalationCounter *pFVar4;
  
  if ((this->NetFaultEscalationManager).Ptr ==
      (TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
       *)0x0) {
    (**(code **)(this->_padding_ + 8))();
  }
  pTVar1 = (this->NetFaultEscalationManager).Ptr;
  if (*(int *)&pTVar1->field_0x50 <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CounterIndex < NumCounters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Connection\\EscalationStates.h"
                       ,499,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FEscalationCounter *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar4 = TArrayView<UE::Net::FEscalationCounter,int>::operator[]
                     ((TArrayView<UE::Net::FEscalationCounter,int> *)&pTVar1->field_0x90,param_1);
  return pFVar4;
}

// HandleNetResult @ 1441dd2a0

EHandleNetResult __thiscall
UE::Net::FNetConnectionFaultRecoveryBase::HandleNetResult
          (FNetConnectionFaultRecoveryBase *this,TNetResult<ENetCloseResult> *param_1)

{
  ForElementType<UE::Net::FNetResultHandler_*> FVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  longlong *plVar5;
  EHandleNetResult EVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ForElementType<UE::Net::FNetResultHandler_*> FVar9;
  undefined1 local_res8 [8];
  
  FVar9 = (this->FaultManager).ResultHandlers.AllocatorInstance.SecondaryData;
  iVar2 = (this->FaultManager).ResultHandlers.ArrayNum;
  if (FVar9 == (ForElementType<UE::Net::FNetResultHandler_*>)0x0) {
    FVar9 = (ForElementType<UE::Net::FNetResultHandler_*>)&this->FaultManager;
  }
  FVar1 = (ForElementType<UE::Net::FNetResultHandler_*>)((longlong)FVar9 + (longlong)iVar2 * 8);
  while( true ) {
    if ((this->FaultManager).ResultHandlers.ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Net::FNetResultHandler_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar9 == FVar1) break;
    EVar6 = (**(code **)(**(longlong **)FVar9 + 0x10))(*(longlong **)FVar9,param_1);
    if (EVar6 != NotHandled) {
      return EVar6;
    }
    FVar9 = (ForElementType<UE::Net::FNetResultHandler_*>)((longlong)FVar9 + 8);
  }
  pvVar3 = *(void **)&(this->FaultManager).UnhandledResultCallback;
  if (pvVar3 == (void *)0x0) {
    EVar6 = NotHandled;
  }
  else {
    Core::Private::Function::CheckCallable(pvVar3);
    pcVar4 = *(code **)&(this->FaultManager).UnhandledResultCallback;
    plVar5 = *(longlong **)&(this->FaultManager).UnhandledResultCallback.field_0x28;
    plVar8 = (longlong *)&(this->FaultManager).UnhandledResultCallback.field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar8 = plVar5;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    EVar6 = (*pcVar4)(uVar7,param_1);
  }
  return EVar6;
}

// NotifyHandledFault @ 1441e25c0

EHandleNetResult __thiscall
UE::Net::FNetConnectionFaultRecoveryBase::NotifyHandledFault
          (FNetConnectionFaultRecoveryBase *this,FNetResult *param_1)

{
  int *piVar1;
  TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TPimplPtr<UE::Net::FNetResult,1> *pTVar3;
  TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
  *pTVar4;
  TPimplPtr<UE::Net::FNetResult,1> TVar5;
  void *pvVar6;
  longlong *plVar7;
  bool bVar8;
  EHandleNetResult EVar9;
  char cVar10;
  int iVar11;
  ForElementType<unsigned_int> FVar12;
  undefined8 *puVar13;
  code *pcVar14;
  ForElementType<unsigned_int> FVar15;
  FString *pFVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint uVar21;
  uint local_b8 [2];
  TArrayView<TArrayView<int,int>,int> *local_b0;
  TArrayView<UE::Net::FEscalationCounter,int> *pTStack_a8;
  FEscalationCounter **local_a0;
  FEscalationCounter **ppFStack_98;
  undefined1 local_90;
  uint7 uStack_8f;
  longlong local_88;
  FEscalationCounter *local_80;
  undefined8 uStack_78;
  FEscalationCounter *local_70;
  undefined8 uStack_68;
  TArrayView<TArrayView<int,int>,int> *local_58;
  TArrayView<UE::Net::FEscalationCounter,int> *pTStack_50;
  FEscalationCounter **local_48;
  FEscalationCounter **ppFStack_40;
  longlong local_38;
  FString local_28;
  
  puVar19 = (undefined8 *)0x0;
  pTVar4 = (this->NetFaultEscalationManager).Ptr;
  if ((((pTVar4 != (TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
                    *)0x0) &&
       (bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pTVar4->field_0x60), bVar8)) &&
      (*(longlong *)&pTVar4->field_0x68 != 0)) &&
     (*(char *)(*(longlong *)&pTVar4->field_0x68 + 0x19) != '\0')) {
    TVar5 = this->TrackedFaults;
    if (TVar5 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      this->TrackedFaults = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
      (**(code **)((longlong)TVar5 + -0x10))();
    }
    piVar1 = &(this->TrackedFaultEnumHashes).ArrayMax;
    (this->TrackedFaultEnumHashes).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,0,&(this->TrackedFaultEnumHashes).AllocatorInstance,0,piVar1);
    }
  }
  pTVar2 = &this->TrackedFaultEnumHashes;
  uVar17 = ((uint)((ulonglong)param_1->RawResultEnumObj >> 0x14) & 0xffff ^
           (uint)((ulonglong)param_1->RawResultEnumObj >> 4)) * -0x7a143595;
  uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
  uVar17 = uVar17 >> 0x10 ^ uVar17;
  uVar20 = ((int)(param_1->Result >> 0x20) * 0x17 - uVar17) + (int)param_1->Result ^ uVar17 >> 0xd;
  uVar18 = (-0x61c88647 - uVar20) - uVar17 ^ uVar20 << 8;
  uVar21 = (uVar17 - uVar18) - uVar20 ^ uVar18 >> 0xd;
  uVar20 = (uVar20 - uVar21) - uVar18 ^ uVar21 >> 0xc;
  uVar17 = (uVar18 - uVar20) - uVar21 ^ uVar20 << 0x10;
  uVar21 = (uVar21 - uVar17) - uVar20 ^ uVar17 >> 5;
  uVar18 = (uVar20 - uVar21) - uVar17 ^ uVar21 >> 3;
  uVar17 = (uVar17 - uVar18) - uVar21 ^ uVar18 << 10;
  FVar12 = (this->TrackedFaultEnumHashes).AllocatorInstance.SecondaryData;
  local_b8[0] = (uVar21 - uVar17) - uVar18 ^ uVar17 >> 0xf;
  if (FVar12 == (ForElementType<unsigned_int>)0x0) {
    FVar12 = (ForElementType<unsigned_int>)pTVar2;
  }
  FVar15 = (ForElementType<unsigned_int>)
           ((longlong)FVar12 + (longlong)(this->TrackedFaultEnumHashes).ArrayNum * 4);
  for (; FVar12 != FVar15; FVar12 = (ForElementType<unsigned_int>)((longlong)FVar12 + 4)) {
    if (*(uint *)FVar12 == local_b8[0]) goto LAB_1441e28b9;
  }
  pTVar3 = &this->TrackedFaults;
  if (this->TrackedFaults == (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
    puVar13 = ::operator_new(0x40);
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = Core::Private::PimplPtr::DeleterFunc<UE::Net::FNetResult>;
      puVar13[1] = Core::Private::PimplPtr::CopyFunc<UE::Net::FNetResult>;
      puVar13[2] = param_1->Result;
      *(FWeakObjectPtr *)(puVar13 + 3) = (param_1->ResultEnumObj).WeakPtr;
      pvVar6 = param_1->RawResultEnumObj;
      puVar13[5] = 0;
      puVar13[4] = pvVar6;
      puVar13[5] = (param_1->ErrorContext).Data.AllocatorInstance.Data;
      (param_1->ErrorContext).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar13 + 6) = (param_1->ErrorContext).Data.ArrayNum;
      *(int *)((longlong)puVar13 + 0x34) = (param_1->ErrorContext).Data.ArrayMax;
      (param_1->ErrorContext).Data.ArrayNum = 0;
      (param_1->ErrorContext).Data.ArrayMax = 0;
      *(TPimplPtr<UE::Net::FNetResult,1> *)(puVar13 + 7) = param_1->NextResult;
      param_1->NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
      puVar19 = puVar13;
    }
    if ((TPimplPtr<UE::Net::FNetResult,1> *)&local_88 == pTVar3) {
      if ((TPimplPtr<UE::Net::FNetResult,1>)(puVar19 + 2) == (TPimplPtr<UE::Net::FNetResult,1>)0x0)
      goto LAB_1441e27f6;
      pcVar14 = (code *)*puVar19;
    }
    else {
      TVar5 = *pTVar3;
      *pTVar3 = (TPimplPtr<UE::Net::FNetResult,1>)(puVar19 + 2);
      if (TVar5 == (TPimplPtr<UE::Net::FNetResult,1>)0x0) goto LAB_1441e27f6;
      pcVar14 = *(code **)((longlong)TVar5 + -0x10);
      puVar19 = (undefined8 *)((longlong)TVar5 + -0x10);
    }
    (*pcVar14)(puVar19);
  }
  else {
    FNetResult::AddChainResult((FNetResult *)this->TrackedFaults,param_1);
  }
LAB_1441e27f6:
  FVar12 = (this->TrackedFaultEnumHashes).AllocatorInstance.SecondaryData;
  FVar15 = FVar12;
  if (FVar12 == (ForElementType<unsigned_int>)0x0) {
    FVar15 = (ForElementType<unsigned_int>)pTVar2;
  }
  if ((ulonglong)FVar15 <= local_b8) {
    if (FVar12 == (ForElementType<unsigned_int>)0x0) {
      FVar12 = (ForElementType<unsigned_int>)pTVar2;
    }
    if ((local_b8 <
         (uint *)((longlong)FVar12 + (longlong)(this->TrackedFaultEnumHashes).ArrayMax * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar14 = (code *)swi(3);
      EVar9 = (*pcVar14)();
      return EVar9;
    }
  }
  iVar11 = (this->TrackedFaultEnumHashes).ArrayNum;
  piVar1 = &(this->TrackedFaultEnumHashes).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                       (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TrackedFaultEnumHashes).ArrayNum = iVar11 + 1;
  FVar12 = (this->TrackedFaultEnumHashes).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<unsigned_int>)0x0) {
    FVar12 = (ForElementType<unsigned_int>)pTVar2;
  }
  *(uint *)((longlong)FVar12 + (longlong)iVar11 * 4) = local_b8[0];
LAB_1441e28b9:
  pTVar4 = (this->NetFaultEscalationManager).Ptr;
  if (pTVar4 == (TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
                 *)0x0) {
    bVar8 = true;
  }
  else {
    bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pTVar4->field_0x60);
    if ((bVar8) && (plVar7 = *(longlong **)&pTVar4->field_0x68, plVar7 != (longlong *)0x0)) {
      local_80 = ((TArrayView<UE::Net::FEscalationCounter,int> *)&pTVar4->field_0xa0)->DataPtr;
      uStack_78 = *(undefined8 *)&pTVar4->field_0xa8;
      local_90 = 0;
      local_b0 = (TArrayView<TArrayView<int,int>,int> *)&pTVar4->field_0x1e0;
      pTStack_a8 = (TArrayView<UE::Net::FEscalationCounter,int> *)&pTVar4->field_0xe0;
      local_a0 = &local_80;
      local_70 = ((TArrayView<UE::Net::FEscalationCounter,int> *)&pTVar4->field_0x90)->DataPtr;
      uStack_68 = *(undefined8 *)&pTVar4->field_0x98;
      ppFStack_98 = &local_70;
      local_38 = (ulonglong)uStack_8f << 8;
      local_58 = local_b0;
      pTStack_50 = pTStack_a8;
      local_48 = local_a0;
      ppFStack_40 = ppFStack_98;
      cVar10 = (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
      if (cVar10 != '\0') {
        pFVar16 = ::FString::FString(&local_28,L"");
        FEscalationManager::UpdateSeverity((FEscalationManager *)pTVar4,Escalate,QuotaLimit,pFVar16)
        ;
      }
    }
    bVar8 = this->bDisconnected == false;
  }
  return bVar8;
}

// RegisterCounterCategory @ 1441e4a80

void __thiscall
UE::Net::FNetConnectionFaultRecoveryBase::RegisterCounterCategory
          (FNetConnectionFaultRecoveryBase *this,ENetFaultCounterCategory param_1,int param_2)

{
  int iVar1;
  TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<int> FVar5;
  TArrayView<int,int> *pTVar6;
  ulonglong uVar7;
  FPendingCategoryRegister local_res8;
  int local_res10 [2];
  undefined4 uStack_1c;
  
  pTVar2 = (this->NetFaultEscalationManager).Ptr;
  uVar7 = (ulonglong)param_1;
  local_res8.CategoryIndex = (int)param_1;
  if (pTVar2 == (TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
                 *)0x0) {
    local_res8.CounterIndex = param_2;
    TArray<UE::Net::FNetConnectionFaultRecoveryBase::FPendingCategoryRegister,TSizedDefaultAllocator<32>_>
    ::AddUniqueImpl<UE::Net::FNetConnectionFaultRecoveryBase::FPendingCategoryRegister>
              (&this->PendingCategories,&local_res8);
    return;
  }
  local_res10[0] = param_2;
  if (uVar7 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CategoryIndex < (sizeof(UEArrayCountHelper(RegisteredCountersAlloc)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Connection\\EscalationStates.h"
                       ,0x2d4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (local_res10[0] < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CounterIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Connection\\EscalationStates.h"
                       ,0x2d5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TArray<int,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>::AddUniqueImpl<int_const_&>
            (pTVar2->RegisteredCountersAlloc + uVar7,local_res10);
  FVar5 = pTVar2->RegisteredCountersAlloc[uVar7].AllocatorInstance.SecondaryData;
  iVar1 = pTVar2->RegisteredCountersAlloc[uVar7].ArrayNum;
  if (FVar5 == (ForElementType<int>)0x0) {
    FVar5 = (ForElementType<int>)(pTVar2->RegisteredCountersAlloc + uVar7);
  }
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar6 = TArrayView<TArrayView<int,int>,int>::operator[]
                     ((TArrayView<TArrayView<int,int>,int> *)&pTVar2->field_0x1e0,(uint)param_1);
  pTVar6->DataPtr = (int *)FVar5;
  *(ulonglong *)&pTVar6->ArrayNum = CONCAT44(uStack_1c,iVar1);
  return;
}

