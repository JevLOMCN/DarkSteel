// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 19

// <lambda_invoker_cdecl> @ 146af5b20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
`FSourceControlFileStatusMonitor::FSourceControlFileStatusMonitor'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(void)

{
  double dVar1;
  bool bVar2;
  FSlateApplication *pFVar3;
  undefined1 in_XMM2 [16];
  undefined1 auVar4 [16];
  LARGE_INTEGER local_res8 [4];
  
  bVar2 = FApp::IsUnattended();
  if ((!bVar2) && (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0)) {
    QueryPerformanceCounter(local_res8);
    dVar1 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    pFVar3 = FSlateApplication::Get();
    auVar4._8_8_ = 0;
    auVar4._0_8_ = __real_41e65a0bc0100000;
    auVar4 = roundpd(in_XMM2,auVar4,1);
    return (double)(longlong)auVar4._0_8_ * __real_3e7ad7f29abcaf48 <
           dVar1 - pFVar3->LastUserInteractionTime;
  }
  return true;
}

// FSourceControlFileStatusMonitor @ 146affe00

FSourceControlFileStatusMonitor * __thiscall
FSourceControlFileStatusMonitor::FSourceControlFileStatusMonitor
          (FSourceControlFileStatusMonitor *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  TWeakPtr<FTSTicker::FElement,1> *pTVar3;
  atomic<int> aVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  FTSTicker *this_00;
  undefined8 *puVar11;
  ulong64 uVar12;
  FSourceControlFileStatusMonitor *pFVar13;
  TWeakPtr<FTSTicker::FElement,1> *pTVar14;
  longlong *plVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  code *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  bool local_98;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  TWeakPtr<FTSTicker::FElement,1> local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  auVar16._8_8_ = 0;
  auVar16._0_8_ = __real_416312d010000000;
  pTVar3 = &this->TickerHandle;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->MonitoredFiles = 0;
  *(undefined8 *)&(this->MonitoredFiles).field_0x8 = 0;
  *(undefined8 *)&(this->MonitoredFiles).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FSourceControlFileStatusMonitor__6B_;
  *(undefined4 *)&(this->MonitoredFiles).field_0x28 = 0;
  *(undefined4 *)&(this->MonitoredFiles).field_0x2c = 0x80;
  *(undefined4 *)&(this->MonitoredFiles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MonitoredFiles).field_0x34 = 0;
  *(undefined8 *)&(this->MonitoredFiles).field_0x40 = 0;
  *(undefined4 *)&(this->MonitoredFiles).field_0x48 = 0;
  (this->RequestedStatusFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestedStatusFiles).ArrayNum = 0;
  (this->RequestedStatusFiles).ArrayMax = 0;
  auVar16 = roundpd(auVar16,auVar16,1);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = __real_41e65a0bc0100000;
  (this->ProbationPeriodPolicy).Ticks = (longlong)auVar16._0_8_;
  auVar16 = roundpd(auVar17,auVar17,1);
  (this->RefreshPeriodPolicy).Ticks = (longlong)auVar16._0_8_;
  *(undefined8 *)&this->SuspendMonitoringPolicy = 0;
  *(undefined8 *)&(this->SuspendMonitoringPolicy).field_0x28 = 0;
  this->MaxFileNumPerRequestPolicy = 100;
  this->LastSourceControlCheckSecs = 0.0;
  this->LastAddedFileTimeSecs = 0.0;
  this->OldestFileStatusTimeSecs = 0.0;
  this->NewAddedFileCount = 0;
  pTVar3->Object = (FElement *)0x0;
  (this->TickerHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->SourceControlProviderChangedDelegateHandle).ID = 0;
  this_00 = FTSTicker::GetCoreTicker();
  uStack_a0 = 0;
  local_c8 = (undefined1  [8])0x0;
  local_a8 = Tick;
  uStack_9c = local_58.WeakReferenceCount.ReferenceController._4_4_;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_c0;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_c0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    puVar11[4] = local_a8;
    puVar11[5] = CONCAT44(uStack_9c,uStack_a0);
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFSourceControlFileStatusMonitor____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = this;
    if (puVar11[4] == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InUserObject != nullptr && MethodPtr != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                          ,0x1d8,L"");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FSourceControlFileStatusMonitor *)(*pcVar7)();
        return pFVar13;
      }
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  pTVar14 = FTSTicker::AddTicker
                      (this_00,&local_58,
                       (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_c8,0.0);
  if (pTVar3 != pTVar14) {
    pTVar3->Object = pTVar14->Object;
    pTVar14->Object = (FElement *)0x0;
    pTVar6 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
    (this->TickerHandle).WeakReferenceCount.ReferenceController =
         (pTVar14->WeakReferenceCount).ReferenceController;
    (pTVar14->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
  }
  plVar15 = (longlong *)
            CONCAT44(local_58.WeakReferenceCount.ReferenceController._4_4_,
                     local_58.WeakReferenceCount.ReferenceController._0_4_);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar15 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plVar15 + 8))(plVar15,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_a8);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_98 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_9c,uStack_a0),
               (FDestructionSentinel *)&local_a8);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  local_88 = *(longlong *)&this->SuspendMonitoringPolicy;
  uVar9 = *(undefined8 *)&(this->SuspendMonitoringPolicy).field_0x8;
  local_78 = *(longlong *)&(this->SuspendMonitoringPolicy).field_0x10;
  uStack_70 = *(undefined8 *)&(this->SuspendMonitoringPolicy).field_0x18;
  uVar8 = *(undefined8 *)&(this->SuspendMonitoringPolicy).field_0x20;
  plStack_60 = *(longlong **)&(this->SuspendMonitoringPolicy).field_0x28;
  *(code **)&this->SuspendMonitoringPolicy =
       UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  *(undefined8 *)&(this->SuspendMonitoringPolicy).field_0x8 = uStack_80;
  *(undefined4 *)&(this->SuspendMonitoringPolicy).field_0x10 = 0x50a032c0;
  *(undefined4 *)&(this->SuspendMonitoringPolicy).field_0x14 = 1;
  *(undefined4 *)&(this->SuspendMonitoringPolicy).field_0x18 = 0x46af5b20;
  *(undefined4 *)&(this->SuspendMonitoringPolicy).field_0x1c = 1;
  *(undefined8 *)&(this->SuspendMonitoringPolicy).field_0x20 = local_68;
  *(undefined8 *)&(this->SuspendMonitoringPolicy).field_0x28 = 0;
  local_68 = uVar8;
  if (local_88 != 0) {
    plVar15 = &local_78;
    if (plStack_60 != (longlong *)0x0) {
      plVar15 = plStack_60;
    }
    uStack_80 = uVar9;
    (**(code **)(*plVar15 + 0x10))();
  }
  return this;
}

// ~FSourceControlFileStatusMonitor @ 146b00f80

void __thiscall
FSourceControlFileStatusMonitor::~FSourceControlFileStatusMonitor
          (FSourceControlFileStatusMonitor *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  void *pvVar8;
  longlong *plVar9;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  this->_padding_ = (longlong)&___7FSourceControlFileStatusMonitor__6B_;
  local_18.Object = (this->TickerHandle).Object;
  local_18.WeakReferenceCount.ReferenceController =
       (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_18);
  pTVar5 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  if (*(longlong *)&this->SuspendMonitoringPolicy != 0) {
    plVar6 = *(longlong **)&(this->SuspendMonitoringPolicy).field_0x28;
    plVar9 = (longlong *)&(this->SuspendMonitoringPolicy).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar9 = plVar6;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  DestructItems<FString,int>
            ((FString *)(this->RequestedStatusFiles).AllocatorInstance.Data,
             (this->RequestedStatusFiles).ArrayNum);
  pFVar7 = (this->RequestedStatusFiles).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  *(undefined4 *)&(this->MonitoredFiles).field_0x48 = 0;
  pvVar8 = *(void **)&(this->MonitoredFiles).field_0x40;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MonitoredFiles);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  return;
}

// operator() @ 146b018d0

void __thiscall
`FSourceControlFileStatusMonitor::OnSourceControlStatusUpdate'::__l2::<lambda_1>::operator()
          (void *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar7 = *(longlong *)this;
  if (*(int *)(lVar7 + 0x7c) < 0) {
    DestructItems<FString,int>(*(FString **)(lVar7 + 0x70),*(int *)(lVar7 + 0x78));
    *(undefined4 *)(lVar7 + 0x78) = 0;
    if (*(int *)(lVar7 + 0x7c) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)(lVar7 + 0x70),0,(int *)(lVar7 + 0x7c));
    }
  }
  else {
    DestructItems<FString,int>(*(FString **)(lVar7 + 0x70),*(int *)(lVar7 + 0x78));
    *(undefined4 *)(lVar7 + 0x78) = 0;
  }
  iVar14 = 0;
  uVar11 = 1;
  iVar16 = 0;
  *(undefined8 *)(*(longlong *)this + 0xd8) = **(undefined8 **)((longlong)this + 8);
  lVar7 = *(longlong *)this;
  iVar5 = *(int *)(lVar7 + 0x48);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar7 + 0x30);
  iVar12 = 0;
  if (iVar5 != 0) {
    pTVar17 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar7 + 0x40);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar7 + 0x40) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = pTVar1;
    }
    uVar15 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
    iVar16 = 0;
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar12 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_146b019ce;
      uVar15 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar11 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res10 = (int)lVar13;
    iVar12 = local_res10 + -1 + iVar16;
    if (iVar5 < iVar12) {
      iVar12 = iVar5;
    }
  }
LAB_146b019ce:
  uVar15 = *(uint *)(lVar7 + 0x48);
  TStack_60._padding_ = CONCAT44(uVar11,iVar14);
  uVar11 = uVar15 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar12;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iVar12;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,*(int *)(lVar7 + 0x28) - *(int *)(lVar7 + 0x54));
  TStack_60.Array = pTVar1;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)(lVar7 + 0x48);
  if (uVar15 != uVar6) {
    pTVar17 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar7 + 0x40);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar7 + 0x40) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = pTVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) &
             *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar14;
      uVar11 = uVar11 + 0x20;
      iVar14 = iVar14 + 1;
      uVar15 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_146b01ad0;
      uVar15 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res18 = (int)lVar13;
    uVar15 = local_res18 + -1 + uVar11;
    if ((int)uVar6 < (int)uVar15) {
      uVar15 = uVar6;
    }
  }
LAB_146b01ad0:
  while( true ) {
    if (*(int *)(lVar7 + 0x28) - *(int *)(lVar7 + 0x54) != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar13 = (longlong)TStack_60.CurrentBitIndex;
    if ((TStack_60.CurrentBitIndex == uVar15) && (TStack_60.Array == pTVar1)) break;
    lVar8 = *(longlong *)(lVar7 + 0x20);
    if ((*(longlong *)(lVar8 + 0x10 + lVar13 * 0x28) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    dVar3 = *(double *)(*(longlong *)(lVar8 + 0x10 + lVar13 * 0x28) + 0x10);
    uVar18 = SUB84(dVar3,0);
    uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
    dVar4 = *(double *)(*(longlong *)this + 0xd8);
    if (dVar4 <= dVar3) {
      uVar18 = SUB84(dVar4,0);
      uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    *(ulonglong *)(*(longlong *)this + 0xd8) = CONCAT44(uVar19,uVar18);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// operator() @ 146b01fa0

bool __thiscall
`FSourceControlFileStatusMonitor::Tick'::__l28::<lambda_1>::operator()
          (void *this,
          TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>
          *param_1,TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>
                   *param_2)

{
  double *pdVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  if (*(longlong *)&param_1->field_0x10 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  dVar2 = *(double *)(*(longlong *)&param_1->field_0x10 + 0x10);
  if (*(longlong *)&param_2->field_0x10 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pdVar1 = (double *)(*(longlong *)&param_2->field_0x10 + 0x10);
  return *pdVar1 <= dVar2 && dVar2 != *pdVar1;
}

// FindFileStatus @ 146b15c80

TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1> * __thiscall
FSourceControlFileStatusMonitor::FindFileStatus
          (FSourceControlFileStatusMonitor *this,
          TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>
          *__return_storage_ptr__,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1> *pTVar2;
  
  pTVar2 = TMapBase<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
           ::Find((TMapBase<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
                   *)&this->MonitoredFiles,param_1);
  if (pTVar2 == (TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1> *)0x0) {
    __return_storage_ptr__->Object = (FSourceControlFileStatus *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = pTVar2->Object;
    pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetMonitoredFiles @ 146b18490

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
FSourceControlFileStatusMonitor::GetMonitoredFiles
          (FSourceControlFileStatusMonitor *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *__return_storage_ptr__,
          ulong64 param_1)

{
  undefined1 *puVar1;
  bool *pbVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  TMap<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  int local_res10;
  undefined1 local_a8 [16];
  TMap<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->MonitoredFiles).field_0x10;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  local_a8._8_8_ = &this->MonitoredFiles;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  iStack_90 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  uStack_8c = 1;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  local_78 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  iVar9 = *(int *)&(this->MonitoredFiles).field_0x28;
  iStack_7c = iStack_90;
  if (iVar9 != 0) {
    puVar16 = *(uint **)&(this->MonitoredFiles).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    local_78 = 0;
    iStack_90 = 0;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_146b1856d;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iStack_7c = local_res10 + -1 + local_78;
    if (iVar9 < iStack_7c) {
      iStack_7c = iVar9;
    }
  }
LAB_146b1856d:
  iStack_70 = *(int *)&(this->MonitoredFiles).field_0x8 - *(int *)&(this->MonitoredFiles).field_0x34
  ;
  uVar14 = *(uint *)&(this->MonitoredFiles).field_0x28;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  uStack_80 = 0xffffffff;
  uVar17 = uVar14 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = (TMap<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
              *)local_a8._8_8_;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = (TMap<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
              *)local_a8._8_8_;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar9 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(*pcVar5)();
    return pTVar10;
  }
  uVar6 = local_a8._8_8_;
  uVar4 = *(uint *)&(this->MonitoredFiles).field_0x28;
  if (uVar14 != uVar4) {
    puVar15 = *(undefined1 **)&(this->MonitoredFiles).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_146b18680;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar17;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_146b18680:
  do {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar7 == (TMap<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
                   *)uVar6)) {
      return __return_storage_ptr__;
    }
    lVar11 = *(longlong *)pTVar7;
    pbVar2 = (bool *)(lVar11 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    if ((*(longlong *)(lVar11 + 0x10 + (longlong)TStack_60.CurrentBitIndex * 0x28) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(*pcVar5)();
      return pTVar10;
    }
    lVar11 = *(longlong *)(pbVar2 + 0x10);
    if (*(int *)(lVar11 + 0x20) != *(int *)(lVar11 + 0x4c)) {
      lVar12 = lVar11 + 0x50;
      if (*(longlong *)(lVar11 + 0x58) != 0) {
        lVar12 = *(longlong *)(lVar11 + 0x58);
      }
      iVar9 = *(int *)(lVar12 + (ulonglong)
                                (*(int *)(lVar11 + 0x60) - 1U &
                                (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
      if (iVar9 != -1) {
        do {
          if (*(ulong64 *)(*(longlong *)(lVar11 + 0x18) + (longlong)iVar9 * 0x28) == param_1)
          goto LAB_146b18758;
          iVar9 = *(int *)(*(longlong *)(lVar11 + 0x18) + 0x20 + (longlong)iVar9 * 0x28);
        } while (iVar9 != -1);
      }
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (__return_storage_ptr__,(FString *)local_a8,pbVar2);
LAB_146b18758:
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// GetStatusAge @ 146b1aca0

TOptional<FTimespan> * __thiscall
FSourceControlFileStatusMonitor::GetStatusAge
          (FSourceControlFileStatusMonitor *this,TOptional<FTimespan> *__return_storage_ptr__,
          FString *param_1)

{
  FSourceControlFileStatus *pFVar1;
  undefined1 auVar2 [16];
  double dVar3;
  TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 extraout_XMM0_Qa;
  undefined1 extraout_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar6 [16];
  LARGE_INTEGER local_res8;
  
  __return_storage_ptr__->bIsSet = false;
  pTVar4 = TMapBase<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
           ::Find((TMapBase<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
                   *)&this->MonitoredFiles,param_1);
  if (pTVar4 == (TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5 = (pTVar4->SharedReferenceCount).ReferenceController;
    pFVar1 = pTVar4->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 != (FSourceControlFileStatus *)0x0) {
      if ((pFVar1->FileState).Object == (ISourceControlState *)0x0) {
        dVar3 = 0.0;
        auVar6 = extraout_XMM0;
      }
      else {
        QueryPerformanceCounter(&local_res8);
        auVar6._8_8_ = extraout_XMM0_Qb;
        auVar6._0_8_ = extraout_XMM0_Qa;
        dVar3 = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                __real_4170000000000000) - pFVar1->LastStatusCheckTimestampSecs;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = dVar3 * __real_416312d000000000 + __real_3fe0000000000000;
      auVar6 = roundpd(auVar6,auVar2,1);
      (__return_storage_ptr__->TypedValue).Ticks = (longlong)auVar6._0_8_;
      __return_storage_ptr__->bIsSet = true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// OnSourceControlProviderChanged @ 146b206c0

void __thiscall
FSourceControlFileStatusMonitor::OnSourceControlProviderChanged
          (FSourceControlFileStatusMonitor *this,ISourceControlProvider *param_1,
          ISourceControlProvider *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  code *pcVar8;
  double dVar9;
  TMap<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
  *pTVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  uint *puVar20;
  TMap<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
  *pTVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  undefined1 local_res20 [8];
  undefined1 local_168 [4];
  uint local_164;
  TMap<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
  *local_160;
  int iStack_158;
  uint uStack_154;
  TBitArray<FDefaultBitArrayAllocator> *local_150;
  undefined4 uStack_148;
  int iStack_144;
  int local_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  TMap<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
  *local_118;
  LARGE_INTEGER local_110;
  undefined8 local_108;
  FSharedReferencer<1> FStack_100;
  TMap<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  TMap<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FReadAccessScope local_98 [2];
  undefined4 local_64;
  undefined4 local_44;
  
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6519841543094796342>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlFileStatusMonitor.cpp"
                          ,0x36,"IsInGameThread()"), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  piVar1 = &(this->RequestedStatusFiles).ArrayMax;
  pFVar5 = (this->RequestedStatusFiles).AllocatorInstance.Data;
  iVar3 = (this->RequestedStatusFiles).ArrayNum;
  if ((this->RequestedStatusFiles).ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar5,iVar3);
    (this->RequestedStatusFiles).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->RequestedStatusFiles).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar5,iVar3);
    (this->RequestedStatusFiles).ArrayNum = 0;
  }
  iVar3 = *(int *)&(this->MonitoredFiles).field_0x28;
  pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->MonitoredFiles).field_0x10;
  pTVar21 = &this->MonitoredFiles;
  iStack_158 = 0;
  uStack_154 = 1;
  iStack_144 = iStack_158;
  local_140 = iStack_158;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(this->MonitoredFiles).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)pTVar22;
    }
    uVar17 = *puVar20;
    local_140 = 0;
    iStack_158 = 0;
    while (uVar17 == 0) {
      lVar12 = (longlong)iStack_158;
      local_140 = local_140 + 0x20;
      iStack_158 = iStack_158 + 1;
      iStack_144 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158) goto LAB_146b207fe;
      uVar17 = puVar20[lVar12 + 1];
    }
    uStack_154 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_154 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_130 = (int)lVar12;
    iStack_144 = local_140 + -1 + local_130;
    if (iVar3 < iStack_144) {
      iStack_144 = iVar3;
    }
  }
LAB_146b207fe:
  uStack_13c = local_64;
  iStack_138 = *(int *)&(this->MonitoredFiles).field_0x8 -
               *(int *)&(this->MonitoredFiles).field_0x34;
  uVar17 = *(uint *)&(this->MonitoredFiles).field_0x28;
  uVar16 = uVar17 & 0xffffffe0;
  TStack_c0._padding_ = CONCAT44(uStack_154,iStack_158);
  uStack_148 = 0xffffffff;
  TStack_c0.CurrentBitIndex = iStack_144;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar17 >> 5;
  TStack_c0._28_4_ = local_64;
  TStack_c0.BaseBitIndex = local_140;
  uStack_a0 = CONCAT44(uStack_134,iStack_138);
  local_164 = uVar17;
  local_160 = pTVar21;
  local_150 = pTVar22;
  local_120 = pTVar22;
  local_118 = pTVar21;
  local_c8 = pTVar21;
  TStack_c0.Array = pTVar22;
  if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar4 = *(uint *)&(this->MonitoredFiles).field_0x28;
  if (uVar17 != uVar4) {
    puVar18 = *(undefined1 **)&(this->MonitoredFiles).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = (undefined1 *)pTVar22;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar4;
      local_164 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_146b20920;
      uVar17 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_12c = (int)lVar12;
    uVar17 = local_12c + -1 + uVar16;
    local_164 = uVar17;
    if ((int)uVar4 < (int)uVar17) {
      uVar17 = uVar4;
      local_164 = uVar4;
    }
  }
LAB_146b20920:
  do {
    pTVar10 = local_c8;
    if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_c0.CurrentBitIndex == uVar17) && (TStack_c0.Array == pTVar22)) &&
       (pTVar10 == pTVar21)) {
      this->NewAddedFileCount =
           *(int *)&(this->MonitoredFiles).field_0x8 - *(int *)&(this->MonitoredFiles).field_0x34;
      QueryPerformanceCounter(&local_110);
      dVar9 = (double)local_110.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      this->OldestFileStatusTimeSecs = 0.0;
      this->LastAddedFileTimeSecs = dVar9 + __real_4170000000000000;
      return;
    }
    lVar14 = *(longlong *)pTVar10;
    lVar12 = lVar14 + (longlong)TStack_c0.CurrentBitIndex * 0x28;
    if ((*(longlong *)(lVar14 + 0x10 + (longlong)TStack_c0.CurrentBitIndex * 0x28) == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (**(longlong **)(lVar12 + 0x10) != 0) {
      if ((*(longlong **)(lVar12 + 0x10) == (longlong *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar14 = *(longlong *)(lVar12 + 0x10);
      iVar3 = *(int *)(lVar14 + 0x40);
      pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0x28);
      local_140 = 0;
      uStack_154 = 1;
      pTVar21 = (TMap<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
                 *)(lVar14 + 0x18);
      iStack_144 = 0;
      iStack_158 = 0;
      if (iVar3 != 0) {
        pTVar19 = pTVar22;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x38) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x38);
        }
        uVar17 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
        while (uVar17 == 0) {
          lVar13 = (longlong)iStack_158;
          local_140 = local_140 + 0x20;
          iStack_158 = iStack_158 + 1;
          iStack_144 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158)
          goto LAB_146b20a5e;
          uVar17 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uStack_154 = -uVar17 & uVar17;
        uVar2 = (ulonglong)uStack_154 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_128 = (int)lVar13;
        iStack_144 = local_140 + -1 + local_128;
        if (iVar3 < iStack_144) {
          iStack_144 = iVar3;
        }
      }
LAB_146b20a5e:
      uStack_13c = local_44;
      iStack_138 = *(int *)(lVar14 + 0x20) - *(int *)(lVar14 + 0x4c);
      uVar17 = *(uint *)(lVar14 + 0x40);
      uVar16 = uVar17 & 0xffffffe0;
      TStack_f0._padding_ = CONCAT44(uStack_154,iStack_158);
      uStack_148 = 0xffffffff;
      TStack_f0.CurrentBitIndex = iStack_144;
      TStack_f0.UnvisitedBitMask = 0xffffffff;
      iVar15 = (int)uVar17 >> 5;
      TStack_f0._28_4_ = local_44;
      TStack_f0.BaseBitIndex = local_140;
      uStack_d0 = CONCAT44(uStack_134,iStack_138);
      local_160 = pTVar21;
      local_150 = pTVar22;
      local_f8 = pTVar21;
      TStack_f0.Array = pTVar22;
      if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar4 = *(uint *)(lVar14 + 0x40);
      if (uVar17 != uVar4) {
        pTVar19 = pTVar22;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x38) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x38);
        }
        uVar17 = -1 << ((byte)uVar17 & 0x1f) &
                 *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
        while (uVar17 == 0) {
          lVar14 = (longlong)iVar15;
          uVar16 = uVar16 + 0x20;
          iVar15 = iVar15 + 1;
          uVar17 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_146b20b70;
          uVar17 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar14 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_124 = (int)lVar14;
        uVar17 = local_124 + -1 + uVar16;
        if ((int)uVar4 < (int)uVar17) {
          uVar17 = uVar4;
        }
      }
LAB_146b20b70:
      while( true ) {
        pTVar10 = local_f8;
        if (*(int *)&local_f8->field_0x8 - *(int *)&local_f8->field_0x34 != (int)uStack_d0) {
          local_168[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
        }
        if (((TStack_f0.CurrentBitIndex == uVar17) && (TStack_f0.Array == pTVar22)) &&
           (pTVar10 == pTVar21)) break;
        lVar14 = *(longlong *)pTVar10 + (longlong)TStack_f0.CurrentBitIndex * 0x28;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar14 + 8),local_98);
        if ((*(int *)(lVar14 + 0x18) != 0) &&
           (plVar6 = *(longlong **)(lVar14 + 0x10), plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x68))(plVar6,lVar12,0);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (local_98);
        TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
      }
      if ((*(longlong *)(lVar12 + 0x10) == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined8 *)(*(longlong *)(lVar12 + 0x10) + 0x10) = 0;
      if ((*(longlong *)(lVar12 + 0x10) == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      puVar7 = *(undefined8 **)(lVar12 + 0x10);
      local_108 = 0;
      FStack_100.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (puVar7 != &local_108) {
        *puVar7 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(puVar7 + 1),&FStack_100);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_100.ReferenceController);
      pTVar21 = local_118;
      pTVar22 = local_120;
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    uVar17 = local_164;
  } while( true );
}

// OnSourceControlStatusUpdate @ 146b20de0

void __thiscall
FSourceControlFileStatusMonitor::OnSourceControlStatusUpdate
          (FSourceControlFileStatusMonitor *this,TSharedRef<ISourceControlOperation,1> *param_1,
          Type param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  FSourceControlFileStatus *pFVar4;
  uint *puVar5;
  undefined1 *puVar6;
  ISourceControlState *pIVar7;
  code *pcVar8;
  FName FVar9;
  FSourceControlFileStatus *pFVar10;
  TMap<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,FSourceControlFileStatusMonitor::FUintptrHash>
  *pTVar11;
  FScriptContainerElement *pFVar12;
  TMap<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,FSourceControlFileStatusMonitor::FUintptrHash>
  *pTVar13;
  bool bVar14;
  ulonglong uVar15;
  TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1> *pTVar16;
  FModuleManager *this_00;
  IModuleInterface *pIVar17;
  longlong *plVar18;
  longlong lVar19;
  int iVar20;
  TReferenceControllerBase<1> *pTVar21;
  uint uVar22;
  undefined1 *puVar23;
  uint *puVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  bool bVar27;
  undefined1 local_res20 [8];
  undefined1 local_138 [8];
  FSourceControlFileStatus *local_130;
  uint local_128;
  TReferenceControllerBase<1> *local_120;
  double local_118;
  undefined1 local_110 [24];
  LARGE_INTEGER local_f8;
  TMap<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,FSourceControlFileStatusMonitor::FUintptrHash>
  *local_f0;
  FScriptContainerElement *local_e8;
  TMap<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,FSourceControlFileStatusMonitor::FUintptrHash>
  *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  TMap<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,FSourceControlFileStatusMonitor::FUintptrHash>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FSourceControlFileStatusMonitor *local_80;
  double *local_78;
  FReadAccessScope local_70 [2];
  undefined4 local_3c;
  
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId337,
               "FSourceControlFileStatusMonitor::OnSourceControlStatusUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlFileStatusMonitor.cpp"
               ,0x151);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId337);
  }
  bVar14 = IsInGameThread();
  if ((!bVar14) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6519841543094796627>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlFileStatusMonitor.cpp"
                          ,0x153,"IsInGameThread()"), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  QueryPerformanceCounter(&local_f8);
  local_78 = &local_118;
  local_118 = (double)local_f8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000;
  local_80 = this;
  if (param_2 == Succeeded) {
    local_128 = (this->RequestedStatusFiles).ArrayNum;
    uVar15 = (ulonglong)(int)local_128;
    pFVar25 = (this->RequestedStatusFiles).AllocatorInstance.Data;
    local_e8 = pFVar25 + uVar15 * 0x10;
    while( true ) {
      pFVar12 = local_e8;
      if ((this->RequestedStatusFiles).ArrayNum != (int)uVar15) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar25 == pFVar12) break;
      pTVar16 = TMapBase<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
                ::Find((TMapBase<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
                        *)&this->MonitoredFiles,(FString *)pFVar25);
      if (pTVar16 == (TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1> *)0x0)
      {
        pTVar21 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar21 = (pTVar16->SharedReferenceCount).ReferenceController;
        pFVar4 = pTVar16->Object;
        if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pFVar4 != (FSourceControlFileStatus *)0x0) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_static_class_ISourceControlModule&___ptr64___cdecl_ISourceControlModule::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_static_class_ISourceControlModule&___ptr64___cdecl_ISourceControlModule::Get(void)'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_static_class_ISourceControlModule&___ptr64___cdecl_ISourceControlModule::Get(void)'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            ::FName::FName(&`public:_static_class_ISourceControlModule&___ptr64___cdecl_ISourceControlModule::Get(void)'
                            ::__l2::SourceControlModule,"SourceControl");
            _Init_thread_footer(&`public:_static_class_ISourceControlModule&___ptr64___cdecl_ISourceControlModule::Get(void)'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          FVar9 = `public:_static_class_ISourceControlModule&___ptr64___cdecl_ISourceControlModule::Get(void)'
                  ::__l2::SourceControlModule;
          this_00 = FModuleManager::Get();
          pIVar17 = FModuleManager::LoadModuleChecked(this_00,FVar9);
          plVar18 = (longlong *)(**(code **)((longlong)*pIVar17 + 0x78))(pIVar17);
          (**(code **)(*plVar18 + 0x90))(plVar18,local_110);
          if ((ISourceControlState *)local_110._0_8_ != (ISourceControlState *)0x0) {
            if (pFVar4 != (FSourceControlFileStatus *)local_110) {
              (pFVar4->FileState).Object = (ISourceControlState *)local_110._0_8_;
              local_110._0_8_ = (ISourceControlState *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&(pFVar4->FileState).SharedReferenceCount,
                         (FSharedReferencer<1> *)(local_110 + 8));
            }
            puVar1 = &(pFVar4->OwnerDelegateMap).field_0x10;
            pFVar4->LastStatusCheckTimestampSecs = local_118;
            local_f0 = &pFVar4->OwnerDelegateMap;
            iVar2 = *(int *)&(pFVar4->OwnerDelegateMap).field_0x28;
            iStack_d8 = 0;
            local_c0 = 0;
            uStack_d4 = 1;
            iStack_c4 = 0;
            if (iVar2 != 0) {
              puVar5 = *(uint **)&(pFVar4->OwnerDelegateMap).field_0x20;
              puVar24 = (uint *)puVar1;
              if (puVar5 != (uint *)0x0) {
                puVar24 = puVar5;
              }
              uVar22 = *puVar24;
              while (uVar22 == 0) {
                lVar19 = (longlong)iStack_d8;
                local_c0 = local_c0 + 0x20;
                iStack_d8 = iStack_d8 + 1;
                iStack_c4 = iVar2;
                if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8)
                goto LAB_146b210c8;
                uVar22 = puVar24[lVar19 + 1];
              }
              uStack_d4 = -uVar22 & uVar22;
              uVar15 = (ulonglong)uStack_d4 * 2 + 1;
              lVar19 = 0x3f;
              if (uVar15 != 0) {
                for (; uVar15 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              local_110._16_4_ = (undefined4)lVar19;
              iStack_c4 = local_110._16_4_ + -1 + local_c0;
              if (iVar2 < iStack_c4) {
                iStack_c4 = iVar2;
              }
            }
LAB_146b210c8:
            local_e0 = &pFVar4->OwnerDelegateMap;
            uStack_bc = local_3c;
            iStack_b8 = *(int *)&(pFVar4->OwnerDelegateMap).field_0x8 -
                        *(int *)&(pFVar4->OwnerDelegateMap).field_0x34;
            uVar22 = *(uint *)&(pFVar4->OwnerDelegateMap).field_0x28;
            TStack_a8._padding_ = CONCAT44(uStack_d4,iStack_d8);
            uVar26 = uVar22 & 0xffffffe0;
            uStack_c8 = 0xffffffff;
            TStack_a8.CurrentBitIndex = iStack_c4;
            TStack_a8.UnvisitedBitMask = 0xffffffff;
            iVar20 = (int)uVar22 >> 5;
            TStack_a8._28_4_ = local_3c;
            TStack_a8.BaseBitIndex = local_c0;
            uStack_88 = CONCAT44(uStack_b4,iStack_b8);
            local_130 = pFVar4;
            local_120 = pTVar21;
            local_d0 = puVar1;
            local_b0 = local_e0;
            TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
            if ((((int)uVar22 < 0) || (iVar2 < (int)uVar22)) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pTVar11 = local_f0;
            pFVar10 = local_130;
            uVar3 = *(uint *)&(pFVar4->OwnerDelegateMap).field_0x28;
            if (uVar22 != uVar3) {
              puVar6 = *(undefined1 **)&(pFVar4->OwnerDelegateMap).field_0x20;
              puVar23 = puVar1;
              if (puVar6 != (undefined1 *)0x0) {
                puVar23 = puVar6;
              }
              uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar20 * 4);
              while (uVar22 == 0) {
                lVar19 = (longlong)iVar20;
                uVar26 = uVar26 + 0x20;
                iVar20 = iVar20 + 1;
                uVar22 = uVar3;
                if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
                goto LAB_146b211e0;
                uVar22 = *(uint *)(puVar23 + lVar19 * 4 + 4);
              }
              uVar15 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
              lVar19 = 0x3f;
              if (uVar15 != 0) {
                for (; uVar15 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              local_110._20_4_ = (undefined4)lVar19;
              uVar22 = local_110._20_4_ + -1 + uVar26;
              if ((int)uVar3 < (int)uVar22) {
                uVar22 = uVar3;
              }
            }
LAB_146b211e0:
            while( true ) {
              pTVar13 = local_b0;
              if (*(int *)&local_b0->field_0x8 - *(int *)&local_b0->field_0x34 != (int)uStack_88) {
                local_138[0] = 0;
                `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_138);
              }
              if (((TStack_a8.CurrentBitIndex == uVar22) &&
                  (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
                 (pTVar21 = local_120, pTVar13 == pTVar11)) break;
              pIVar7 = (pFVar10->FileState).Object;
              lVar19 = *(longlong *)pTVar13 + (longlong)TStack_a8.CurrentBitIndex * 0x28;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar19 + 8),
                         local_70);
              if ((*(int *)(lVar19 + 0x18) != 0) &&
                 (plVar18 = *(longlong **)(lVar19 + 0x10), plVar18 != (longlong *)0x0)) {
                (**(code **)(*plVar18 + 0x68))(plVar18,pFVar25,pIVar7);
              }
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(local_70);
              TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_110._8_8_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
      uVar15 = (ulonglong)local_128;
      pFVar25 = pFVar25 + 0x10;
    }
  }
  `FSourceControlFileStatusMonitor::OnSourceControlStatusUpdate'::__l2::<lambda_1>::operator()
            (&local_80);
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SetMonitoringFiles @ 146b25130

void __thiscall
FSourceControlFileStatusMonitor::SetMonitoringFiles
          (FSourceControlFileStatusMonitor *this,ulong64 param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2,
          TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
          *param_3)

{
  TMap<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
  *pTVar1;
  FString *pFVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
  *pTVar14;
  ulonglong uVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  wchar_t *pwVar18;
  uint uVar19;
  TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
  *this_00;
  uint uVar20;
  undefined1 *puVar22;
  uint *puVar23;
  ulong64 local_res10;
  undefined1 local_res18 [8];
  undefined1 auStack_160 [16];
  uint uStack_150;
  uint uStack_14c;
  longlong local_148;
  TSet<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>,FDefaultSetAllocator>
  *pTStack_140;
  TSet<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>,FDefaultSetAllocator>
  *local_138;
  char local_130;
  char cStack_12f;
  undefined4 local_128;
  int local_124;
  ulong64 local_120;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_118;
  uint uStack_110;
  uint uStack_10c;
  undefined1 *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
  local_b8;
  FReadAccessScope local_a0;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>,FDefaultSetAllocator>
  *pTStack_60;
  undefined4 local_3c;
  TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
  *pTVar21;
  
  pTVar1 = &this->MonitoredFiles;
  local_res10 = param_1;
  TSet<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>,FDefaultSetAllocator>
              *)pTVar1);
  pTVar21 = (TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
             *)0x0;
  local_130 = '\0';
  cStack_12f = '\0';
  uVar13 = 1;
  stack0xfffffffffffffea8 = local_88._16_16_;
  auStack_160._0_8_ = local_88._8_8_;
  local_148 = local_68;
  pTStack_140 = pTStack_60;
  uVar15 = local_88._24_8_ >> 0x20;
  uVar20 = 0;
  local_138 = (TSet<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>,FDefaultSetAllocator>
               *)pTVar1;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      pFVar2 = (FString *)(*(longlong *)local_88._0_8_ + (longlong)(int)uVar15 * 0x28);
      if ((*(longlong *)(*(longlong *)local_88._0_8_ + 0x10 + (longlong)(int)uVar15 * 0x28) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar4 = pFVar2[1].Data.AllocatorInstance.Data;
      pTVar14 = pTVar21;
      if (*(int *)(pFVar4 + 0x20) != *(int *)(pFVar4 + 0x4c)) {
        pFVar17 = pFVar4 + 0x50;
        if (*(FScriptContainerElement **)(pFVar4 + 0x58) != (FScriptContainerElement *)0x0) {
          pFVar17 = *(FScriptContainerElement **)(pFVar4 + 0x58);
        }
        iVar12 = *(int *)(pFVar17 +
                         ((ulonglong)(*(int *)(pFVar4 + 0x60) - 1) &
                         (local_res10 >> 0x20) * 0x17 + local_res10) * 4);
        if (iVar12 != -1) {
          do {
            pTVar14 = (TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
                       *)(*(longlong *)(pFVar4 + 0x18) + (longlong)iVar12 * 0x28);
            if (*(ulonglong *)(*(longlong *)(pFVar4 + 0x18) + (longlong)iVar12 * 0x28) ==
                local_res10) break;
            iVar12 = *(int *)&pTVar14[1].field_0x8;
            pTVar14 = pTVar21;
          } while (iVar12 != -1);
        }
      }
      iVar12 = (pFVar2->Data).ArrayNum;
      this_00 = (TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
                 *)&pTVar14->field_0x8;
      if (pTVar14 ==
          (TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
           *)0x0) {
        this_00 = pTVar21;
      }
      if (iVar12 == 0) {
        pwVar18 = L"";
        uVar11 = uVar20;
      }
      else {
        pwVar18 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
        uVar11 = iVar12 - 1;
      }
      uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar11,pwVar18);
      iVar12 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
               FindIndexByHash<FString>(param_2,uVar11,pFVar2);
      if (iVar12 == -1) {
        if (this_00 !=
            (TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
             *)0x0) {
          if ((pFVar2[1].Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar4 = pFVar2[1].Data.AllocatorInstance.Data;
          if (*(int *)(pFVar4 + 0x20) - *(int *)(pFVar4 + 0x4c) < 2) {
            TSet<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_140,uStack_14c);
            local_130 = '\x01';
          }
          else {
            if ((pFVar4 == (FScriptContainerElement *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar4 = pFVar2[1].Data.AllocatorInstance.Data;
            local_120 = local_res10;
            if (*(int *)(pFVar4 + 0x20) != *(int *)(pFVar4 + 0x4c)) {
              TSet<TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>,FSourceControlFileStatusMonitor::FUintptrHash,FDefaultSetAllocator>
              ::RemoveImpl<unsigned___int64>
                        ((TSet<TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>,FSourceControlFileStatusMonitor::FUintptrHash,FDefaultSetAllocator>
                          *)(pFVar4 + 0x18),(int)(local_res10 >> 0x20) * 0x17 + (int)local_res10,
                         &local_120);
            }
          }
        }
      }
      else {
        if (this_00 ==
            (TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
             *)0x0) {
          if ((pFVar2[1].Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          TMapBase<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,FSourceControlFileStatusMonitor::FUintptrHash>
          ::
          Emplace<unsigned___int64_const_&,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_const_&>
                    ((TMapBase<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,FSourceControlFileStatusMonitor::FUintptrHash>
                      *)(pFVar2[1].Data.AllocatorInstance.Data + 0x18),&local_res10,param_3);
          if ((pFVar2[1].Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar4 = pFVar2[1].Data.AllocatorInstance.Data;
          if (*(longlong *)pFVar4 != 0) {
            if ((pFVar4 == (FScriptContainerElement *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar5 = *(undefined8 *)pFVar2[1].Data.AllocatorInstance.Data;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_a0);
            if ((*(int *)&param_3->field_0x10 != 0) &&
               (plVar6 = *(longlong **)&param_3->field_0x8, plVar6 != (longlong *)0x0)) {
              (**(code **)(*plVar6 + 0x68))(plVar6,pFVar2,uVar5);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_a0);
          }
        }
        else {
          TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
          ::CopyFrom<FDefaultDelegateUserPolicy>(this_00,param_3);
        }
        if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
          iVar12 = (pFVar2->Data).ArrayNum;
          if (iVar12 == 0) {
            pwVar18 = L"";
            uVar11 = uVar20;
          }
          else {
            pwVar18 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
            uVar11 = iVar12 - 1;
          }
          uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar11,pwVar18);
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
                    (param_2,uVar11,pFVar2);
        }
      }
      uStack_150 = uStack_150 & ~auStack_160._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_160);
      uVar15 = (ulonglong)uStack_14c;
    } while ((int)uStack_14c < *(int *)(auStack_160._8_8_ + 0x18));
    if ((local_130 != '\0') && (cStack_12f != '\0')) {
      uVar11 = *(int *)&(local_138->Elements).field_0x8 - *(int *)&(local_138->Elements).field_0x34;
      if (uVar11 < 4) {
        iVar12 = 1;
      }
      else {
        uVar15 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_128 = (undefined4)lVar16;
        iVar12 = 1 << ((byte)lVar16 & 0x1f);
      }
      if (((0 < (int)uVar11) && (local_138->HashSize < iVar12)) || (iVar12 < local_138->HashSize)) {
        local_138->HashSize = iVar12;
        TSet<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_138);
      }
    }
  }
  uVar11 = *(uint *)&(param_2->Elements).field_0x28;
  puVar3 = &(param_2->Elements).field_0x10;
  local_f8 = 0;
  uStack_fc = local_f8;
  if (uVar11 != 0) {
    puVar23 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar3;
    }
    uVar19 = *puVar23;
    pTVar14 = pTVar21;
    local_f8 = 0;
    uVar20 = 0;
    while (uVar19 == 0) {
      iVar12 = (int)pTVar21;
      local_f8 = (int)pTVar14 + 0x20;
      pTVar14 = (TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
                 *)(ulonglong)local_f8;
      uVar20 = iVar12 + 1;
      pTVar21 = (TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
                 *)(ulonglong)uVar20;
      uStack_fc = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20)
      goto LAB_146b2558e;
      uVar19 = puVar23[(longlong)iVar12 + 1];
    }
    uVar13 = -uVar19 & uVar19;
    uVar15 = (ulonglong)uVar13 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_124 = (int)lVar16;
    uStack_fc = (local_f8 - 1) + local_124;
    if ((int)uVar11 < (int)uStack_fc) {
      uStack_fc = uVar11;
    }
  }
LAB_146b2558e:
  uVar11 = *(uint *)&(param_2->Elements).field_0x28;
  uStack_f4 = local_3c;
  iStack_f0 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  uVar19 = uVar11 & 0xffffffe0;
  uStack_100 = 0xffffffff;
  TStack_e0._padding_ = CONCAT44(uVar13,uVar20);
  TStack_e0.CurrentBitIndex = uStack_fc;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_e0._28_4_ = local_3c;
  TStack_e0.BaseBitIndex = local_f8;
  uStack_c0 = CONCAT44(uStack_ec,iStack_f0);
  local_118 = param_2;
  uStack_110 = uVar20;
  uStack_10c = uVar13;
  local_108 = puVar3;
  local_e8 = param_2;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if (((int)uVar11 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar20 = *(uint *)&(param_2->Elements).field_0x28;
  if (uVar11 != uVar20) {
    puVar22 = *(undefined1 **)&(param_2->Elements).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar3;
    }
    uVar13 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar12 * 4);
    while (uVar13 == 0) {
      lVar16 = (longlong)iVar12;
      uVar19 = uVar19 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar20;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_146b25690;
      uVar13 = *(uint *)(puVar22 + lVar16 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar11 = (int)lVar16 + -1 + uVar19;
    if ((int)uVar20 < (int)uVar11) {
      uVar11 = uVar20;
    }
  }
LAB_146b25690:
  while( true ) {
    pTVar9 = local_e8;
    if (*(int *)&(local_e8->Elements).field_0x8 - *(int *)&(local_e8->Elements).field_0x34 !=
        (int)uStack_c0) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    lVar16 = (longlong)TStack_e0.CurrentBitIndex;
    if (((TStack_e0.CurrentBitIndex == uVar11) &&
        (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar9 == param_2))
    break;
    lVar7 = *(longlong *)&pTVar9->Elements;
    local_b8._0_8_ = 0;
    local_b8._8_8_ = 0;
    local_b8._16_4_ = 0;
    TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
    ::CopyFrom<FDefaultDelegateUserPolicy>(&local_b8,param_3);
    StartMonitoringFile(this,local_res10,(FString *)(lVar7 + lVar16 * 0x18),&local_b8);
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  return;
}

// StartMonitoringFile @ 146b26850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSourceControlFileStatusMonitor::StartMonitoringFile
          (FSourceControlFileStatusMonitor *this,ulong64 param_1,FString *param_2,
          TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
          *param_3)

{
  longlong lVar1;
  FSourceControlFileStatus *pFVar2;
  ISourceControlState *pIVar3;
  FSourceControlFileStatusMonitor *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1> *pTVar11;
  TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
  *this_00;
  ISourceControlModule *pIVar12;
  undefined8 *puVar13;
  TSharedRef<FSourceControlFileStatusMonitor,1> *pTVar14;
  ulong64 uVar15;
  ulong64 *puVar16;
  undefined1 *puVar17;
  TReferenceControllerBase<1> *pTVar18;
  uint uVar19;
  double dVar20;
  TPairInitializer<FString_const_&,TSharedRef<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_&&>
  local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  FDelegateAllocation local_e0;
  TReferenceControllerBase<1> *local_d0;
  TReferenceControllerBase<1> *pTStack_c8;
  LARGE_INTEGER local_c0;
  FString *local_b8;
  TReferenceControllerBase<1> **local_b0;
  TSharedRef<FSourceControlFileStatusMonitor,1> local_a8;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  undefined1 local_60 [8];
  TDelegateBase<FNotThreadSafeDelegateMode> local_58;
  
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  local_res8.Key._0_4_ = 0;
  local_res8.Value =
       (TSharedRef<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1> *)param_1;
  bVar9 = IsInGameThread();
  if ((!bVar9) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6519841543094796365>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlFileStatusMonitor.cpp"
                         ,0x4d,"IsInGameThread()"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar11 = TMapBase<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
            ::Find((TMapBase<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
                    *)&this->MonitoredFiles,param_2);
  if (pTVar11 == (TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1> *)0x0) {
    pTVar18 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar18 = (pTVar11->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar11->Object;
    if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar2 != (FSourceControlFileStatus *)0x0) {
      uVar19 = (int)((ulonglong)local_res8.Value >> 0x20) * 0x17 + (int)local_res8.Value;
      if (*(int *)&(pFVar2->OwnerDelegateMap).field_0x8 !=
          *(int *)&(pFVar2->OwnerDelegateMap).field_0x34) {
        puVar17 = *(undefined1 **)&(pFVar2->OwnerDelegateMap).field_0x40;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = &(pFVar2->OwnerDelegateMap).field_0x38;
        }
        iVar10 = *(int *)(puVar17 +
                         (ulonglong)(*(int *)&(pFVar2->OwnerDelegateMap).field_0x48 - 1U & uVar19) *
                         4);
        if (iVar10 != -1) {
          do {
            lVar1 = *(longlong *)&pFVar2->OwnerDelegateMap + (longlong)iVar10 * 0x28;
            if (*(TSharedRef<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1> **)
                 (*(longlong *)&pFVar2->OwnerDelegateMap + (longlong)iVar10 * 0x28) ==
                local_res8.Value) {
              if (lVar1 != 0) {
                this_00 = (TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
                           *)(lVar1 + 8);
                goto LAB_146b2695b;
              }
              break;
            }
            iVar10 = *(int *)(lVar1 + 0x20);
          } while (iVar10 != -1);
        }
      }
      this_00 = TMapBase<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,FSourceControlFileStatusMonitor::FUintptrHash>
                ::EmplaceByHash<unsigned___int64_const_&>
                          ((TMapBase<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,FSourceControlFileStatusMonitor::FUintptrHash>
                            *)&pFVar2->OwnerDelegateMap,uVar19,(ulong64 *)&local_res8.Value);
LAB_146b2695b:
      TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
      ::CopyFrom<FDefaultDelegateUserPolicy>(this_00,param_3);
      pIVar3 = (pFVar2->FileState).Object;
      if (pIVar3 != (ISourceControlState *)0x0) {
        TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
        ::ExecuteIfBound(this_00,param_2,pIVar3);
      }
      goto LAB_146b26a7f;
    }
  }
  pTStack_c8 = ::operator_new(0x78);
  if (pTStack_c8 == (TReferenceControllerBase<1> *)0x0) {
    local_d0 = ___xmm_00000000000000000000000000000010;
    pTStack_c8 = _UNK_150651568;
  }
  else {
    pTStack_c8->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_c8->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_c8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFSourceControlFileStatus_FSourceControlFileStatusMonitor___00_SharedPointerInternals__6B_
    ;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_58,(TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
    FSourceControlFileStatus::FSourceControlFileStatus
              ((FSourceControlFileStatus *)(pTStack_c8 + 1),(ulong64)local_res8.Value,
               (TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
                *)&local_58);
    local_d0 = pTStack_c8 + 1;
    if ((local_d0 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_b0 = &local_d0;
  local_b8 = param_2;
  TSet<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TSharedRef<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_&&>_>
            ((TSet<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>,FDefaultSetAllocator>
              *)&this->MonitoredFiles,&local_res8,(bool *)&local_b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c8);
  QueryPerformanceCounter(&local_c0);
  dVar20 = (double)local_c0.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->NewAddedFileCount = this->NewAddedFileCount + 1;
  this->LastAddedFileTimeSecs = dVar20 + __real_4170000000000000;
LAB_146b26a7f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  if ((this->SourceControlProviderChangedDelegateHandle).ID == 0) {
    pIVar12 = ISourceControlModule::Get();
    local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e0.DelegateSize = 0;
    pcVar5 = *(code **)((longlong)*pIVar12 + 0xb8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_e8,(FWriteAccessScope *)&local_80);
    local_68 = &local_e0;
    puVar13 = UE::Core::Private::DelegateAllocate(0x38,&local_e0);
    if (puVar13 == (undefined8 *)0x0) {
      pTVar18 = (TReferenceControllerBase<1> *)CONCAT44(local_res8.Key._4_4_,local_res8.Key._0_4_);
    }
    else {
      local_d0 = (TReferenceControllerBase<1> *)OnSourceControlProviderChanged;
      pTStack_c8 = (TReferenceControllerBase<1> *)
                   ((ulonglong)local_a8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar14 = TSharedFromThis<FSourceControlFileStatusMonitor,1>::AsShared
                          ((TSharedFromThis<FSourceControlFileStatusMonitor,1> *)&this->_padding_,
                           &local_a8);
      pTVar18 = (pTVar14->SharedReferenceCount).ReferenceController;
      pFVar4 = pTVar14->Object;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar13 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEAVISourceControlProvider__0_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar13[2] = uVar15;
      *puVar13 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VFSourceControlFileStatusMonitor___00__A6AXAEAVISourceControlProvider__0_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar13[3] = pFVar4;
      puVar13[4] = pTVar18;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->WeakReferenceCount = (atomic<int>)((int)pTVar18->WeakReferenceCount + 1);
        UNLOCK();
      }
      bVar8 = true;
      bVar7 = true;
      bVar6 = true;
      puVar13[5] = local_d0;
      puVar13[6] = pTStack_c8;
    }
    if (bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    }
    if (bVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    }
    if (bVar8) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_a8.SharedReferenceCount.ReferenceController._4_4_,
                          local_a8.SharedReferenceCount.ReferenceController._0_4_));
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    puVar16 = (ulong64 *)(*pcVar5)(pIVar12,local_60);
    (this->SourceControlProviderChangedDelegateHandle).ID = *puVar16;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_e8,(FWriteAccessScope *)&local_98);
    if ((local_e0.DelegateSize != 0) &&
       (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_e0,0,0,0x10);
      local_e0.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_e0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  return;
}

// StartMonitoringFiles @ 146b26c60

void __thiscall
FSourceControlFileStatusMonitor::StartMonitoringFiles
          (FSourceControlFileStatusMonitor *this,ulong64 param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
          *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res18 [8];
  TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
  local_48;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar2 == pFVar3) break;
    local_48._0_8_ = 0;
    local_48._8_8_ = 0;
    local_48._16_4_ = 0;
    TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
    ::CopyFrom<FDefaultDelegateUserPolicy>(&local_48,param_3);
    StartMonitoringFile(this,param_1,(FString *)pFVar2,&local_48);
    pFVar2 = pFVar2 + 0x10;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  return;
}

// StartMonitoringFiles @ 146b26d20

void __thiscall
FSourceControlFileStatusMonitor::StartMonitoringFiles
          (FSourceControlFileStatusMonitor *this,ulong64 param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2,
          TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
          *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  undefined1 local_res18 [8];
  undefined4 uStack_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
  local_50;
  
  iVar3 = *(int *)&(param_2->Elements).field_0x28;
  puVar1 = &(param_2->Elements).field_0x10;
  iVar15 = 0;
  iVar14 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar11 = *puVar12;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar15;
      iVar14 = iVar14 + 0x20;
      iVar15 = iVar15 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_146b26dcd;
      uVar11 = puVar12[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_146b26dcd:
  uVar11 = *(uint *)&(param_2->Elements).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uVar7,iVar15);
  TStack_78.CurrentBitIndex = iVar8;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar11 >> 5;
  TStack_78._28_4_ = iVar8;
  TStack_78.BaseBitIndex = iVar14;
  uStack_58 = CONCAT44(uStack_8c,
                       *(int *)&(param_2->Elements).field_0x8 -
                       *(int *)&(param_2->Elements).field_0x34);
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(param_2->Elements).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(param_2->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar15 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar15;
      uVar10 = uVar10 + 0x20;
      iVar15 = iVar15 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_146b26ed0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_146b26ed0:
  while( true ) {
    if (*(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34 !=
        (int)uStack_58) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    lVar9 = (longlong)TStack_78.CurrentBitIndex;
    if ((TStack_78.CurrentBitIndex == uVar11) &&
       (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar4 = *(longlong *)&param_2->Elements;
    local_50._0_8_ = 0;
    local_50._8_8_ = 0;
    local_50._16_4_ = 0;
    TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
    ::CopyFrom<FDefaultDelegateUserPolicy>(&local_50,param_3);
    StartMonitoringFile(this,param_1,(FString *)(lVar4 + lVar9 * 0x18),&local_50);
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  return;
}

// StopMonitoringFile @ 146b27470

void __thiscall
FSourceControlFileStatusMonitor::StopMonitoringFile
          (FSourceControlFileStatusMonitor *this,ulong64 param_1,FString *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  FSourceControlFileStatus *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1> *pTVar9;
  wchar_t *pwVar10;
  undefined1 *puVar11;
  TReferenceControllerBase<1> *pTVar12;
  ulong64 local_res8;
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6519841543094796412>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlFileStatusMonitor.cpp"
                         ,0x7c,"IsInGameThread()"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar9 = TMapBase<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
           ::Find((TMapBase<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
                   *)&this->MonitoredFiles,param_2);
  if (pTVar9 == (TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1> *)0x0) {
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar12 = (pTVar9->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar9->Object;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((((pFVar3 != (FSourceControlFileStatus *)0x0) &&
         (local_res8 = param_1,
         *(int *)&(pFVar3->OwnerDelegateMap).field_0x8 !=
         *(int *)&(pFVar3->OwnerDelegateMap).field_0x34)) &&
        (iVar6 = TSet<TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>,FSourceControlFileStatusMonitor::FUintptrHash,FDefaultSetAllocator>
                 ::RemoveImpl<unsigned___int64>
                           ((TSet<TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>,FSourceControlFileStatusMonitor::FUintptrHash,FDefaultSetAllocator>
                             *)&pFVar3->OwnerDelegateMap,
                            (int)(param_1 >> 0x20) * 0x17 + (int)param_1,&local_res8), 0 < iVar6))
       && ((*(int *)&(pFVar3->OwnerDelegateMap).field_0x8 ==
            *(int *)&(pFVar3->OwnerDelegateMap).field_0x34 &&
           (*(int *)&(this->MonitoredFiles).field_0x8 != *(int *)&(this->MonitoredFiles).field_0x34)
           ))) {
      iVar8 = (param_2->Data).ArrayNum;
      iVar6 = iVar8 + -1;
      if (iVar8 == 0) {
        pwVar10 = L"";
        iVar6 = 0;
      }
      else {
        pwVar10 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar10);
      puVar11 = *(undefined1 **)&(this->MonitoredFiles).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->MonitoredFiles).field_0x38;
      }
      iVar6 = *(int *)(puVar11 +
                      ((longlong)*(int *)&(this->MonitoredFiles).field_0x48 - 1U &
                      (longlong)(int)uVar7) * 4);
      while (iVar6 != -1) {
        puVar1 = (undefined8 *)(*(longlong *)&this->MonitoredFiles + (longlong)iVar6 * 0x28);
        iVar8 = (param_2->Data).ArrayNum;
        iVar2 = *(int *)(puVar1 + 1);
        if (iVar2 == iVar8) {
          if (1 < iVar2) {
            iVar8 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)*puVar1,(wchar_t *)(param_2->Data).AllocatorInstance.Data)
            ;
            bVar5 = iVar8 == 0;
            goto LAB_146b275c2;
          }
LAB_146b275d3:
          TSet<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>,FDefaultSetAllocator>
                           *)&this->MonitoredFiles,iVar6);
          break;
        }
        bVar5 = iVar2 + iVar8 == 1;
LAB_146b275c2:
        if (bVar5) goto LAB_146b275d3;
        iVar6 = *(int *)(puVar1 + 4);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// StopMonitoringFiles @ 146b27610

void __thiscall
FSourceControlFileStatusMonitor::StopMonitoringFiles
          (FSourceControlFileStatusMonitor *this,ulong64 param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulong64 local_res8;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6519841543094796441>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlFileStatusMonitor.cpp"
                         ,0x99,"IsInGameThread()"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TSet<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>,FDefaultSetAllocator>
              *)&this->MonitoredFiles);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar6 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>,FDefaultSetAllocator>
              *)&this->MonitoredFiles;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      plVar3 = local_48;
      lVar1 = *local_48;
      if ((*(longlong *)(lVar1 + 0x10 + (longlong)(int)uVar6 * 0x28) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)(lVar1 + (longlong)(int)uVar6 * 0x28 + 0x10);
      local_res8 = param_1;
      if ((*(int *)(lVar1 + 0x20) != *(int *)(lVar1 + 0x4c)) &&
         (iVar5 = TSet<TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>,FSourceControlFileStatusMonitor::FUintptrHash,FDefaultSetAllocator>
                  ::RemoveImpl<unsigned___int64>
                            ((TSet<TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>,FSourceControlFileStatusMonitor::FUintptrHash,FDefaultSetAllocator>
                              *)(lVar1 + 0x18),(int)(param_1 >> 0x20) * 0x17 + (int)param_1,
                             &local_res8), 0 < iVar5)) {
        lVar7 = (longlong)(int)uStack_2c;
        lVar1 = *plVar3;
        if ((*(longlong *)(lVar1 + 0x10 + lVar7 * 0x28) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10 + lVar7 * 0x28);
        if (*(int *)(lVar1 + 0x20) == *(int *)(lVar1 + 0x4c)) {
          TSet<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uStack_2c);
          local_10 = '\x01';
        }
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar6 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar8 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_18->HashSize < iVar5)) || (iVar5 < local_18->HashSize)) {
        local_18->HashSize = iVar5;
        TSet<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// StopMonitoringFiles @ 146b27830

void __thiscall
FSourceControlFileStatusMonitor::StopMonitoringFiles
          (FSourceControlFileStatusMonitor *this,ulong64 param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res18 [8];
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar2 == pFVar3) break;
    StopMonitoringFile(this,param_1,(FString *)pFVar2);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// StopMonitoringFiles @ 146b278b0

void __thiscall
FSourceControlFileStatusMonitor::StopMonitoringFiles
          (FSourceControlFileStatusMonitor *this,ulong64 param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(param_2->Elements).field_0x28;
  puVar1 = &(param_2->Elements).field_0x10;
  iVar13 = 0;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar11 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)puVar1;
    }
    uVar10 = *puVar11;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_146b2795d;
      uVar10 = puVar11[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    iVar7 = local_res20 + -1 + iVar14;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_146b2795d:
  uVar10 = *(uint *)&(param_2->Elements).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar13);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_2->Elements).field_0x8 -
                       *(int *)&(param_2->Elements).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(param_2->Elements).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(param_2->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar13;
      uVar9 = uVar9 + 0x20;
      iVar13 = iVar13 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_146b27a60;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_146b27a60:
  while( true ) {
    if (*(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    StopMonitoringFile(this,param_1,
                       (FString *)
                       (*(longlong *)&param_2->Elements + (longlong)TStack_60.CurrentBitIndex * 0x18
                       ));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Tick @ 146b28610

bool __thiscall
FSourceControlFileStatusMonitor::Tick(FSourceControlFileStatusMonitor *this,float param_1)

{
  TMap<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
  *pTVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  FString *pFVar8;
  FSourceControlFileStatusMonitor *pFVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  double dVar13;
  TMap<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
  *pTVar14;
  bool bVar15;
  undefined1 uVar16;
  char cVar17;
  uint uVar18;
  int iVar19;
  ISourceControlModule *pIVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  TSharedRef<FSourceControlFileStatusMonitor,1> *pTVar23;
  ulong64 uVar24;
  longlong lVar25;
  int iVar26;
  int iVar27;
  undefined1 *puVar28;
  uint *puVar29;
  uint uVar30;
  TReferenceControllerBase<1> *pTVar31;
  undefined1 *puVar32;
  double dVar33;
  FIdentityFunctor local_res18;
  undefined7 uStackX_19;
  undefined1 local_res20 [8];
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  ForAnyElementType local_198;
  int local_190;
  int iStack_18c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_188;
  FDelegateAllocation local_180;
  longlong local_170;
  longlong local_168;
  undefined4 local_160;
  code *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  bool local_148;
  int local_140;
  int local_13c;
  TMap<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
  *local_138;
  int iStack_130;
  uint uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  TMap<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  FUpdateStatus *local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  TSharedRef<FUpdateStatus,1> local_c8;
  FDestructionSentinel local_b8;
  FDelegateAllocation *local_a0;
  TSharedRef<FSourceControlFileStatusMonitor,1> local_98 [2];
  undefined4 local_6c;
  
  iVar26 = 0;
  iVar27 = 0;
  local_160 = 0;
  bVar15 = IsInGameThread();
  if ((!bVar15) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6519841543094796530>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlFileStatusMonitor.cpp"
                          ,0xf2,"IsInGameThread()"), bVar15)) {
    pcVar10 = (code *)swi(3);
    uVar16 = (*pcVar10)();
    return (bool)uVar16;
  }
  pIVar20 = ISourceControlModule::Get();
  cVar17 = (**(code **)((longlong)*pIVar20 + 0x70))(pIVar20);
  if (cVar17 != '\0') {
    pIVar20 = ISourceControlModule::Get();
    plVar21 = (longlong *)(**(code **)((longlong)*pIVar20 + 0x78))(pIVar20);
    cVar17 = (**(code **)(*plVar21 + 0x40))(plVar21);
    if ((((cVar17 != '\0') &&
         (*(int *)&(this->MonitoredFiles).field_0x8 != *(int *)&(this->MonitoredFiles).field_0x34))
        && ((this->RequestedStatusFiles).ArrayNum < 1)) &&
       ((*(longlong *)&(this->SuspendMonitoringPolicy).field_0x0 == 0 ||
        (bVar15 = UE::Core::Private::Function::
                  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                  ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                                *)&this->SuspendMonitoringPolicy), !bVar15)))) {
      dVar33 = FWindowsPlatformTime::Seconds();
      dVar13 = __real_3e7ad7f29abcaf48;
      uVar18 = this->NewAddedFileCount;
      if (((uVar18 != 0) ||
          ((double)(this->RefreshPeriodPolicy).Ticks * __real_3e7ad7f29abcaf48 <=
           dVar33 - this->OldestFileStatusTimeSecs)) &&
         (((double)(this->ProbationPeriodPolicy).Ticks * __real_3e7ad7f29abcaf48 <=
           dVar33 - this->LastAddedFileTimeSecs || (this->MaxFileNumPerRequestPolicy <= (int)uVar18)
          ))) {
        local_1a8.Data = (FScriptContainerElement *)0x0;
        local_1a0 = 0;
        if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
        }
        local_1a0._0_4_ = iVar26;
        if (0 < (int)uVar18) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar18,&local_1a8,0,(int *)((longlong)&local_1a0 + 4));
        }
        uVar18 = *(int *)&(this->MonitoredFiles).field_0x8 -
                 *(int *)&(this->MonitoredFiles).field_0x34;
        local_198.Data = (FScriptContainerElement *)0x0;
        local_190 = 0;
        iStack_18c = 0;
        if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
        }
        iVar19 = (int)local_1a0;
        if (0 < (int)uVar18) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar18,&local_198,0,&iStack_18c);
          iVar19 = (int)local_1a0;
        }
        local_128 = &(this->MonitoredFiles).field_0x10;
        local_118 = 0;
        pTVar1 = &this->MonitoredFiles;
        uStack_12c = 1;
        iVar4 = *(int *)&(this->MonitoredFiles).field_0x28;
        iStack_11c = local_118;
        if (iVar4 != 0) {
          puVar29 = *(uint **)&(this->MonitoredFiles).field_0x20;
          if (puVar29 == (uint *)0x0) {
            puVar29 = (uint *)local_128;
          }
          uVar18 = *puVar29;
          local_118 = iVar26;
          iVar27 = iVar26;
          while (uVar18 == 0) {
            lVar25 = (longlong)iVar27;
            local_118 = local_118 + 0x20;
            iVar27 = iVar27 + 1;
            if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar27) goto LAB_146b28873;
            uVar18 = puVar29[lVar25 + 1];
          }
          uStack_12c = -uVar18 & uVar18;
          uVar3 = (ulonglong)uStack_12c * 2 + 1;
          lVar25 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          local_140 = (int)lVar25;
          iStack_11c = local_118 + -1 + local_140;
          if (iVar4 < iStack_11c) {
LAB_146b28873:
            iStack_11c = iVar4;
          }
        }
        puVar32 = &(this->MonitoredFiles).field_0x10;
        uVar18 = *(uint *)&(this->MonitoredFiles).field_0x28;
        uStack_114 = local_6c;
        iStack_110 = *(int *)&(this->MonitoredFiles).field_0x8 -
                     *(int *)&(this->MonitoredFiles).field_0x34;
        uVar30 = uVar18 & 0xffffffe0;
        uStack_120 = 0xffffffff;
        TStack_100.CurrentBitIndex = iStack_11c;
        TStack_100.UnvisitedBitMask = 0xffffffff;
        TStack_100._padding_ = CONCAT44(uStack_12c,iVar27);
        iVar26 = (int)uVar18 >> 5;
        TStack_100._28_4_ = local_6c;
        TStack_100.BaseBitIndex = local_118;
        uStack_e0 = CONCAT44(uStack_10c,iStack_110);
        local_138 = pTVar1;
        iStack_130 = iVar27;
        local_108 = pTVar1;
        TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_128;
        if ((int)uVar18 < 0) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L"");
          if (bVar15) {
            pcVar10 = (code *)swi(3);
            uVar16 = (*pcVar10)();
            return (bool)uVar16;
          }
          iVar19 = (int)local_1a0;
        }
        uVar5 = *(uint *)&(this->MonitoredFiles).field_0x28;
        if (uVar18 != uVar5) {
          puVar6 = *(undefined1 **)&(this->MonitoredFiles).field_0x20;
          puVar28 = puVar32;
          if (puVar6 != (undefined1 *)0x0) {
            puVar28 = puVar6;
          }
          uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar26 * 4);
          while (uVar18 == 0) {
            lVar25 = (longlong)iVar26;
            uVar30 = uVar30 + 0x20;
            iVar26 = iVar26 + 1;
            uVar18 = uVar5;
            if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
            goto LAB_146b28990;
            uVar18 = *(uint *)(puVar28 + lVar25 * 4 + 4);
          }
          uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
          lVar25 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          local_13c = (int)lVar25;
          uVar18 = (uVar30 - 1) + local_13c;
          if ((int)uVar5 < (int)uVar18) {
            uVar18 = uVar5;
          }
        }
LAB_146b28990:
        while( true ) {
          pTVar14 = local_108;
          if (*(int *)&local_108->field_0x8 - *(int *)&local_108->field_0x34 != (int)uStack_e0) {
            local_res18 = (FIdentityFunctor)0x0;
            `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res18);
            iVar19 = (int)local_1a0;
          }
          if (((TStack_100.CurrentBitIndex == uVar18) &&
              (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar32)) &&
             (pTVar14 == pTVar1)) break;
          lVar7 = *(longlong *)pTVar14;
          lVar25 = lVar7 + (longlong)TStack_100.CurrentBitIndex * 0x28;
          if (*(longlong *)(lVar7 + 0x10 + (longlong)TStack_100.CurrentBitIndex * 0x28) == 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L"");
            if (bVar15) {
              pcVar10 = (code *)swi(3);
              uVar16 = (*pcVar10)();
              return (bool)uVar16;
            }
            iVar19 = (int)local_1a0;
          }
          if (**(longlong **)(lVar25 + 0x10) == 0) {
            local_170 = lVar25;
            if ((local_1a8.Data <= (FScriptContainerElement *)&local_170) &&
               ((FScriptContainerElement *)&local_170 <
                local_1a8.Data + (longlong)local_1a0._4_4_ * 8)) {
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar15) {
                pcVar10 = (code *)swi(3);
                uVar16 = (*pcVar10)();
                return (bool)uVar16;
              }
              iVar19 = (int)local_1a0;
            }
            if (iVar19 == local_1a0._4_4_) {
              iVar19 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_1a8,(int *)((longlong)&local_1a0 + 4));
            }
            local_1a0 = CONCAT44(local_1a0._4_4_,iVar19 + 1);
            *(longlong *)(local_1a8.Data + (longlong)iVar19 * 8) = local_170;
          }
          else {
            lVar7 = (this->RefreshPeriodPolicy).Ticks;
            if ((*(longlong **)(lVar25 + 0x10) == (longlong *)0x0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
              pcVar10 = (code *)swi(3);
              uVar16 = (*pcVar10)();
              return (bool)uVar16;
            }
            if ((double)lVar7 * dVar13 <= dVar33 - *(double *)(*(longlong *)(lVar25 + 0x10) + 0x10))
            {
              local_168 = lVar25;
              if (((local_198.Data <= (FScriptContainerElement *)&local_168) &&
                  ((FScriptContainerElement *)&local_168 < local_198.Data + (longlong)iStack_18c * 8
                  )) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar15)) {
                pcVar10 = (code *)swi(3);
                uVar16 = (*pcVar10)();
                return (bool)uVar16;
              }
              if (local_190 == iStack_18c) {
                local_190 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x808,&local_198,&iStack_18c);
              }
              lVar25 = (longlong)local_190;
              local_190 = local_190 + 1;
              *(longlong *)(local_198.Data + lVar25 * 8) = local_168;
            }
          }
          TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
          iVar19 = (int)local_1a0;
        }
        if ((iVar19 < this->MaxFileNumPerRequestPolicy) &&
           (this->MaxFileNumPerRequestPolicy < iVar19 + local_190)) {
          AlgoImpl::
          IntroSortInternal<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>_const_*,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>_const_*,_FSourceControlFileStatusMonitor::Tick_::__l28::<lambda_1>_>_>
                    ((TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>
                      **)local_198.Data,local_190,local_res18,(<lambda_1> *)local_res20);
          iVar19 = (int)local_1a0;
        }
        iVar27 = (this->RequestedStatusFiles).ArrayNum;
        uVar18 = local_190 + iVar19 + iVar27;
        if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
        }
        piVar2 = &(this->RequestedStatusFiles).ArrayMax;
        if (*piVar2 < (int)uVar18) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,uVar18,&(this->RequestedStatusFiles).AllocatorInstance,iVar27,piVar2);
          iVar19 = (int)local_1a0;
        }
        iVar27 = (this->RequestedStatusFiles).ArrayNum;
        if (iVar27 < this->MaxFileNumPerRequestPolicy) {
          do {
            if (iVar19 < 1) {
              if (local_190 == 0) break;
              uVar18 = 0;
              if ((int)(local_190 - 1U) < local_190) {
                uVar18 = ~(local_190 - 1U) >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar10 = (code *)swi(3);
                uVar16 = (*pcVar10)();
                return (bool)uVar16;
              }
              pFVar8 = *(FString **)(local_198.Data + (longlong)(local_190 + -1) * 8);
              iVar27 = (this->RequestedStatusFiles).ArrayNum;
              if (iVar27 == *piVar2) {
                iVar27 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&(this->RequestedStatusFiles).AllocatorInstance,piVar2);
              }
              (this->RequestedStatusFiles).ArrayNum = iVar27 + 1;
              ::FString::FString((FString *)
                                 ((this->RequestedStatusFiles).AllocatorInstance.Data +
                                 (longlong)iVar27 * 0x10),pFVar8);
              if ((local_190 < 1) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar10 = (code *)swi(3);
                uVar16 = (*pcVar10)();
                return (bool)uVar16;
              }
              iVar27 = (local_190 - (local_190 + -1)) + -1;
              if (iVar27 != 0) {
                memmove(local_198.Data + (longlong)(local_190 + -1) * 8,
                        local_198.Data + (longlong)(local_190 + -1) * 8 + 8,(longlong)iVar27 << 3);
              }
              local_190 = local_190 + -1;
              iVar19 = (int)local_1a0;
            }
            else {
              uVar18 = 0;
              if ((int)(iVar19 - 1U) < iVar19) {
                uVar18 = ~(iVar19 - 1U) >> 0x1f;
              }
              if (uVar18 == 0) {
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar15) {
                  pcVar10 = (code *)swi(3);
                  uVar16 = (*pcVar10)();
                  return (bool)uVar16;
                }
                iVar19 = (int)local_1a0;
              }
              pFVar8 = *(FString **)(local_1a8.Data + (longlong)(iVar19 + -1) * 8);
              iVar27 = (this->RequestedStatusFiles).ArrayNum;
              if (iVar27 == *piVar2) {
                iVar27 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&(this->RequestedStatusFiles).AllocatorInstance,piVar2);
              }
              (this->RequestedStatusFiles).ArrayNum = iVar27 + 1;
              ::FString::FString((FString *)
                                 ((this->RequestedStatusFiles).AllocatorInstance.Data +
                                 (longlong)iVar27 * 0x10),pFVar8);
              if ((int)local_1a0 < 1) {
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar15) {
                  pcVar10 = (code *)swi(3);
                  uVar16 = (*pcVar10)();
                  return (bool)uVar16;
                }
              }
              iVar26 = ((int)local_1a0 - ((int)local_1a0 + -1)) + -1;
              iVar27 = (int)local_1a0;
              if (iVar26 != 0) {
                memmove(local_1a8.Data + (longlong)((int)local_1a0 + -1) * 8,
                        local_1a8.Data + (longlong)((int)local_1a0 + -1) * 8 + 8,
                        (longlong)iVar26 << 3);
                iVar27 = (int)local_1a0;
              }
              local_1a0 = CONCAT44(local_1a0._4_4_,iVar27 + -1);
              iVar19 = iVar27 + -1;
            }
            iVar27 = (this->RequestedStatusFiles).ArrayNum;
          } while (iVar27 < this->MaxFileNumPerRequestPolicy);
        }
        this->NewAddedFileCount = iVar19;
        if (iVar27 != 0) {
          this->LastSourceControlCheckSecs = dVar33;
          ISourceControlOperation::Create<FUpdateStatus>(&local_c8);
          pIVar20 = ISourceControlModule::Get();
          plVar21 = (longlong *)(**(code **)((longlong)*pIVar20 + 0x78))(pIVar20);
          bVar12 = false;
          bVar11 = false;
          bVar15 = false;
          local_188.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_180.DelegateSize = 0;
          pcVar10 = *(code **)(*plVar21 + 0xe8);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_188,(FWriteAccessScope *)&local_b8);
          local_a0 = &local_180;
          puVar22 = UE::Core::Private::DelegateAllocate(0x38,&local_180);
          if (puVar22 == (undefined8 *)0x0) {
            pTVar31 = (TReferenceControllerBase<1> *)CONCAT71(uStackX_19,local_res18);
          }
          else {
            uStack_14c = local_c8.SharedReferenceCount.ReferenceController._4_4_;
            local_158 = OnSourceControlStatusUpdate;
            uStack_150 = 0;
            pTVar23 = TSharedFromThis<FSourceControlFileStatusMonitor,1>::AsShared
                                ((TSharedFromThis<FSourceControlFileStatusMonitor,1> *)
                                 &this->_padding_,local_98);
            pTVar31 = (pTVar23->SharedReferenceCount).ReferenceController;
            pFVar9 = pTVar23->Object;
            if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
              UNLOCK();
            }
            *puVar22 = &
                       ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VISourceControlOperation___00__W4Type_ECommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar24 = FDelegateHandle::GenerateNewID();
            puVar22[2] = uVar24;
            *puVar22 = &
                       ___7__TBaseSPMethodDelegateInstance__0A_VFSourceControlFileStatusMonitor___00__A6AXAEBV__TSharedRef_VISourceControlOperation___00__W4Type_ECommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            puVar22[3] = pFVar9;
            puVar22[4] = pTVar31;
            if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar31->WeakReferenceCount = (atomic<int>)((int)pTVar31->WeakReferenceCount + 1);
              UNLOCK();
            }
            bVar12 = true;
            bVar11 = true;
            bVar15 = true;
            puVar22[5] = local_158;
            puVar22[6] = CONCAT44(uStack_14c,uStack_150);
          }
          if (bVar15) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar31);
          }
          if (bVar11) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar31);
          }
          if (bVar12) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_98[0].SharedReferenceCount.ReferenceController);
          }
          if (local_b8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
          }
          pTVar31 = (TReferenceControllerBase<1> *)
                    CONCAT44(local_c8.SharedReferenceCount.ReferenceController._4_4_,
                             local_c8.SharedReferenceCount.ReferenceController._0_4_);
          local_d8 = local_c8.Object;
          if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
            UNLOCK();
          }
          pTStack_d0 = pTVar31;
          (*pcVar10)(plVar21,&local_d8,&this->RequestedStatusFiles,1,&local_188);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_d0);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_188,(FWriteAccessScope *)&local_158);
          if ((local_180.DelegateSize != 0) &&
             (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_180.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_180,0,0,0x10);
            local_180.DelegateSize = 0;
          }
          if (local_148 == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_14c,uStack_150),
                       (FDestructionSentinel *)&local_158);
          }
          if (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_180.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_188.AccessDetector);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar31);
        }
        if (local_198.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data);
        }
        if (local_1a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data);
        }
      }
    }
  }
  return true;
}

