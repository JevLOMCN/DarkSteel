// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SessionServices
// Functions: 25

// FSessionManager @ 148cec830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FSessionManager * __thiscall
FSessionManager::FSessionManager(FSessionManager *this,TSharedRef<IMessageBus,1> *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  wchar_t *pwVar13;
  FSessionManager *pFVar14;
  FTaskGraphInterface *pFVar15;
  TRawMessageHandler<FEngineServicePong,FSessionManager> *pTVar16;
  TRawMessageHandler<FEngineServicePong,FSessionManager> *pTVar17;
  FTSTicker *this_00;
  undefined8 *puVar18;
  ulong64 uVar19;
  TWeakPtr<FTSTicker::FElement,1> *pTVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  FName local_res18;
  TRawPtrProxy<TRawMessageHandler<FEngineServicePong,FSessionManager>_> local_res20;
  FString local_178;
  code *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [8];
  FDelegateAllocation local_150;
  undefined1 local_140 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_128;
  ForAnyElementType FStack_120;
  int local_118;
  ForAnyElementType local_110;
  undefined8 local_108;
  bool local_100;
  FName local_fc;
  Type local_f4;
  TSharedPtr<IMessageHandler,1> local_f0;
  TSharedPtr<IMessageHandler,1> local_e0;
  FString local_d0;
  TSharedPtr<FMessageEndpoint,1> local_c0;
  TWeakPtr<FTSTicker::FElement,1> local_b0;
  TRawPtrProxy<TRawMessageHandler<FSessionServicePong,FSessionManager>_> local_a0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSessionManager__6B_;
  (this->AutomationControllerAddress).A = 0;
  (this->AutomationControllerAddress).B = 0;
  (this->AutomationControllerAddress).C = 0;
  (this->AutomationControllerAddress).D = 0;
  (this->LastPingTime).Ticks = 0;
  (this->MessageBusPtr).Object = param_1->Object;
  pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  (this->MessageBusPtr).WeakReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->MessageEndpoint).Object = (FMessageEndpoint *)0x0;
  (this->MessageEndpoint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = &this->FilteredOwners;
  (this->SelectedInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedInstances).ArrayNum = 0;
  (this->SelectedInstances).ArrayMax = 0;
  (this->SelectedSession).Object = (ISessionInfo *)0x0;
  (this->SelectedSession).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->Sessions = 0;
  *(undefined8 *)&(this->Sessions).field_0x8 = 0;
  *(undefined8 *)&(this->Sessions).field_0x20 = 0;
  *(undefined4 *)&(this->Sessions).field_0x28 = 0;
  *(undefined4 *)&(this->Sessions).field_0x2c = 0x80;
  *(undefined4 *)&(this->Sessions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Sessions).field_0x34 = 0;
  *(undefined8 *)&(this->Sessions).field_0x40 = 0;
  *(undefined4 *)&(this->Sessions).field_0x48 = 0;
  *(undefined8 *)&this->CanSelectSessionDelegate = 0;
  *(undefined8 *)&(this->CanSelectSessionDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->CanSelectSessionDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->CanSelectSessionDelegate).field_0x18 = 2;
  *(undefined8 *)&this->InstanceSelectionChangedDelegate = 0;
  *(undefined8 *)&(this->InstanceSelectionChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InstanceSelectionChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->InstanceSelectionChangedDelegate).field_0x18 = 2;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->FilteredOwners).ArrayNum = 0;
  (this->FilteredOwners).ArrayMax = 0;
  *(undefined8 *)&this->LogReceivedEvent = 0;
  *(undefined8 *)&(this->LogReceivedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->LogReceivedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->LogReceivedEvent).field_0x18 = 2;
  *(undefined8 *)&this->SelectedSessionChangedEvent = 0;
  *(undefined8 *)&(this->SelectedSessionChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->SelectedSessionChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->SelectedSessionChangedEvent).field_0x18 = 2;
  *(undefined8 *)&this->SessionsUpdatedDelegate = 0;
  *(undefined8 *)&(this->SessionsUpdatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SessionsUpdatedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->SessionsUpdatedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->SessionInstanceUpdatedDelegate = 0;
  *(undefined8 *)&(this->SessionInstanceUpdatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SessionInstanceUpdatedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->SessionInstanceUpdatedDelegate).field_0x18 = 2;
  (this->TickDelegateHandle).Object = (FElement *)0x0;
  (this->TickDelegateHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  pwVar13 = FCommandLine::Get();
  bVar9 = FParse::Value(pwVar13,L"SessionFilter=",&local_178,true,(wchar_t **)0x0);
  if (bVar9) {
    iVar10 = ::FString::Find(&local_178,L"+",1,CaseSensitive,FromStart,-1);
    while (iVar10 != -1) {
      iVar11 = local_178.Data.ArrayNum + -1;
      if (local_178.Data.ArrayNum == 0) {
        iVar11 = 0;
      }
      if (iVar10 < iVar11) {
        iVar11 = iVar10;
      }
      iVar12 = 0;
      if (0 < iVar11) {
        iVar12 = iVar11;
      }
      pFVar21 = (FScriptContainerElement *)L"";
      if (local_178.Data.ArrayNum != 0) {
        pFVar21 = local_178.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_d0,(wchar_t *)pFVar21,iVar12);
      pFVar21 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar21 <= (FScriptContainerElement *)&local_d0) &&
          ((FScriptContainerElement *)&local_d0 <
           pFVar21 + (longlong)(this->FilteredOwners).ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FSessionManager *)(*pcVar6)();
        return pFVar14;
      }
      iVar11 = (this->FilteredOwners).ArrayNum;
      if (iVar11 == (this->FilteredOwners).ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar3->AllocatorInstance,&(this->FilteredOwners).ArrayMax);
      }
      FVar8.Data = local_d0.Data.AllocatorInstance.Data;
      pFVar21 = (pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      (this->FilteredOwners).ArrayNum = iVar11 + 1;
      *(undefined8 *)pFVar21 = 0;
      iVar11 = local_d0.Data.ArrayNum;
      *(int *)(pFVar21 + 8) = iVar11;
      if (iVar11 == 0) {
        *(int *)(pFVar21 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar11,0,(ForAnyElementType *)pFVar21,iVar11,(int *)(pFVar21 + 0xc));
        memcpy(*(void **)pFVar21,FVar8.Data,(longlong)iVar11 * 2);
      }
      iVar11 = local_178.Data.ArrayNum + -1;
      if (local_178.Data.ArrayNum == 0) {
        iVar11 = 0;
      }
      iVar12 = (iVar11 - iVar10) + -1;
      iVar10 = iVar11;
      if (iVar12 < iVar11) {
        iVar10 = iVar12;
      }
      iVar12 = 0;
      if (0 < iVar10) {
        iVar12 = iVar10;
      }
      ::FString::RemoveAt(&local_178,0,iVar11 - iVar12,No);
      iVar10 = ::FString::Find(&local_178,L"+",1,CaseSensitive,FromStart,-1);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
    pFVar21 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar21 <= (FScriptContainerElement *)&local_178) &&
        ((FScriptContainerElement *)&local_178 <
         pFVar21 + (longlong)(this->FilteredOwners).ArrayMax * 0x10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FSessionManager *)(*pcVar6)();
      return pFVar14;
    }
    iVar10 = (this->FilteredOwners).ArrayNum;
    if (iVar10 == (this->FilteredOwners).ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar3->AllocatorInstance,&(this->FilteredOwners).ArrayMax);
    }
    FVar8.Data = local_178.Data.AllocatorInstance.Data;
    (this->FilteredOwners).ArrayNum = iVar10 + 1;
    pFVar21 = (pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
    *(undefined8 *)pFVar21 = 0;
    lVar22 = (longlong)local_178.Data.ArrayNum;
    *(int *)(pFVar21 + 8) = local_178.Data.ArrayNum;
    if (local_178.Data.ArrayNum == 0) {
      *(int *)(pFVar21 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_178.Data.ArrayNum,0,(ForAnyElementType *)pFVar21,local_178.Data.ArrayNum,
                 (int *)(pFVar21 + 0xc));
      memcpy(*(void **)pFVar21,FVar8.Data,lVar22 * 2);
    }
  }
  pTVar17 = (TRawMessageHandler<FEngineServicePong,FSessionManager> *)0x0;
  ::FName::FName(&local_res18,"FSessionManager");
  local_140._0_8_ = param_1->Object;
  local_140._8_8_ = (param_1->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_140._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_140._8_8_)->WeakReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_140._8_8_)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_128.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_120.Data = (FScriptContainerElement *)0x0;
  local_fc = local_res18;
  local_140[0x10] = false;
  local_118 = 0;
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108._0_4_ = 0;
  local_108._4_4_ = 0;
  local_100 = false;
  pFVar15 = FTaskGraphInterface::Get();
  local_f4 = (**(code **)((longlong)*pFVar15 + 0x10))(pFVar15,0);
  uStack_160 = 0;
  local_168 = HandleEnginePongMessage;
  uStack_15c = local_b0.WeakReferenceCount.ReferenceController._4_4_;
  pTVar16 = ::operator_new(0x20);
  local_res20.Object = pTVar17;
  if (pTVar16 != (TRawMessageHandler<FEngineServicePong,FSessionManager> *)0x0) {
    pTVar16->_padding_ =
         (longlong)&___7__TRawMessageHandler_UFEngineServicePong__VFSessionManager____6B_;
    *(code **)&pTVar16->Func = local_168;
    *(ulonglong *)&(pTVar16->Func).field_0x8 = CONCAT44(uStack_15c,uStack_160);
    pTVar16->Handler = this;
    local_res20.Object = pTVar16;
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FEngineServicePong,FSessionManager>_>
            (&local_f0,&local_res20);
  if (((local_110.Data <= &local_f0) &&
      (&local_f0 <
       (TSharedPtr<IMessageHandler,1> *)(local_110.Data + (longlong)local_108._4_4_ * 0x10))) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FSessionManager *)(*pcVar6)();
    return pFVar14;
  }
  iVar10 = (int)local_108;
  if ((int)local_108 == local_108._4_4_) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_110,(int *)((longlong)&local_108 + 4));
  }
  *(IMessageHandler **)&local_110.Data[(longlong)iVar10 * 0x10].field_0x0 = local_f0.Object;
  *(TReferenceControllerBase<1> **)(local_110.Data + (longlong)iVar10 * 0x10 + 8) =
       local_f0.SharedReferenceCount.ReferenceController;
  local_f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_f0.Object = (IMessageHandler *)0x0;
  local_108._0_4_ = iVar10 + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  uStack_160 = 0;
  local_168 = HandleSessionPongMessage;
  uStack_15c = local_b0.WeakReferenceCount.ReferenceController._4_4_;
  pTVar16 = ::operator_new(0x20);
  if (pTVar16 != (TRawMessageHandler<FEngineServicePong,FSessionManager> *)0x0) {
    pTVar16->_padding_ =
         (longlong)&___7__TRawMessageHandler_UFSessionServicePong__VFSessionManager____6B_;
    *(code **)&pTVar16->Func = local_168;
    *(ulonglong *)&(pTVar16->Func).field_0x8 = CONCAT44(uStack_15c,uStack_160);
    pTVar16->Handler = this;
    pTVar17 = pTVar16;
  }
  local_a0.Object = (TRawMessageHandler<FSessionServicePong,FSessionManager> *)pTVar17;
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FSessionServicePong,FSessionManager>_>
            (&local_e0,&local_a0);
  if (((local_110.Data <= &local_e0) &&
      (&local_e0 <
       (TSharedPtr<IMessageHandler,1> *)(local_110.Data + (longlong)local_108._4_4_ * 0x10))) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FSessionManager *)(*pcVar6)();
    return pFVar14;
  }
  if ((int)local_108 == local_108._4_4_) {
    local_108._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_110,(int *)((longlong)&local_108 + 4));
  }
  lVar22 = (longlong)(int)local_108;
  local_108._0_4_ = (int)local_108 + 1;
  *(IMessageHandler **)&local_110.Data[lVar22 * 0x10].field_0x0 = local_e0.Object;
  *(TReferenceControllerBase<1> **)(local_110.Data + lVar22 * 0x10 + 8) =
       local_e0.SharedReferenceCount.ReferenceController;
  local_e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_e0.Object = (IMessageHandler *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FMessageEndpointBuilder::Build((FMessageEndpointBuilder *)local_140,&local_c0);
  if (&this->MessageEndpoint != &local_c0) {
    (this->MessageEndpoint).Object = local_c0.Object;
    local_c0.Object = (FMessageEndpoint *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MessageEndpoint).SharedReferenceCount,&local_c0.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<IMessageHandler,1>,int>
            ((TSharedPtr<IMessageHandler,1> *)local_110.Data,(int)local_108);
  if ((TSharedPtr<IMessageHandler,1> *)local_110.Data != (TSharedPtr<IMessageHandler,1> *)0x0) {
    FMemory::Free(local_110.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_128,(FWriteAccessScope *)&local_98);
  if ((local_118 != 0) && (FStack_120.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_120.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_120,0,0,0x10);
    local_118 = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (FStack_120.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_120.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_128.AccessDetector);
  if ((TReferenceControllerBase<1> *)local_140._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = (atomic<int> *)(local_140._8_8_ + 0xc);
    aVar4 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(*(longlong *)local_140._8_8_ + 8))(local_140._8_8_,1);
    }
  }
  this_00 = FTSTicker::GetCoreTicker();
  uStack_15c = local_b0.WeakReferenceCount.ReferenceController._4_4_;
  uStack_160 = 0;
  local_168 = HandleTicker;
  local_158 = (undefined1  [8])0x0;
  local_150.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_150.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
             (FWriteAccessScope *)&local_68);
  local_50 = &local_150;
  puVar18 = UE::Core::Private::DelegateAllocate(0x30,&local_150);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    puVar18[4] = local_168;
    puVar18[5] = CONCAT44(uStack_15c,uStack_160);
    *puVar18 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFSessionManager____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = this;
    if ((puVar18[4] == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FSessionManager *)(*pcVar6)();
      return pFVar14;
    }
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  pTVar20 = FTSTicker::AddTicker
                      (this_00,&local_b0,
                       (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_158,
                       __real_40a00000);
  if (&this->TickDelegateHandle != pTVar20) {
    (this->TickDelegateHandle).Object = pTVar20->Object;
    pTVar20->Object = (FElement *)0x0;
    pTVar5 = (this->TickDelegateHandle).WeakReferenceCount.ReferenceController;
    (this->TickDelegateHandle).WeakReferenceCount.ReferenceController =
         (pTVar20->WeakReferenceCount).ReferenceController;
    (pTVar20->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  plVar7 = (longlong *)
           CONCAT44(local_b0.WeakReferenceCount.ReferenceController._4_4_,
                    local_b0.WeakReferenceCount.ReferenceController._0_4_);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    iVar10 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
             (FWriteAccessScope *)&local_80);
  if ((local_150.DelegateSize != 0) &&
     (local_150.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_150.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_150,0,0,0x10);
    local_150.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_150.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_150.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_158);
  SendPing(this);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FSessionManager @ 148cee790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSessionManager::~FSessionManager(FSessionManager *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  void *pvVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  this->_padding_ = (longlong)&___7FSessionManager__6B_;
  local_18.Object = (this->TickDelegateHandle).Object;
  local_18.WeakReferenceCount.ReferenceController =
       (this->TickDelegateHandle).WeakReferenceCount.ReferenceController;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_18);
  FMessageEndpoint::SafeRelease(&this->MessageEndpoint);
  pTVar5 = (this->TickDelegateHandle).WeakReferenceCount.ReferenceController;
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
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->SessionInstanceUpdatedDelegate).field_0x8,
             *(int *)&(this->SessionInstanceUpdatedDelegate).field_0x10);
  pvVar6 = *(void **)&(this->SessionInstanceUpdatedDelegate).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SessionInstanceUpdatedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->SessionsUpdatedDelegate).field_0x8,
             *(int *)&(this->SessionsUpdatedDelegate).field_0x10);
  pvVar6 = *(void **)&(this->SessionsUpdatedDelegate).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SessionsUpdatedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->SelectedSessionChangedEvent).field_0x8,
             *(int *)&(this->SelectedSessionChangedEvent).field_0x10);
  pvVar6 = *(void **)&(this->SelectedSessionChangedEvent).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SelectedSessionChangedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->LogReceivedEvent).field_0x8,*(int *)&(this->LogReceivedEvent).field_0x10);
  pvVar6 = *(void **)&(this->LogReceivedEvent).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LogReceivedEvent);
  DestructItems<FString,int>
            ((FString *)(this->FilteredOwners).AllocatorInstance.Data,
             (this->FilteredOwners).ArrayNum);
  pFVar7 = (this->FilteredOwners).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InstanceSelectionChangedDelegate).field_0x8,
             *(int *)&(this->InstanceSelectionChangedDelegate).field_0x10);
  pvVar6 = *(void **)&(this->InstanceSelectionChangedDelegate).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InstanceSelectionChangedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->CanSelectSessionDelegate).field_0x8,
             *(int *)&(this->CanSelectSessionDelegate).field_0x10);
  pvVar6 = *(void **)&(this->CanSelectSessionDelegate).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CanSelectSessionDelegate);
  *(undefined4 *)&(this->Sessions).field_0x48 = 0;
  pvVar6 = *(void **)&(this->Sessions).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Sessions);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectedSession).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<ISessionInstanceInfo,1>,int>
            ((TSharedPtr<ISessionInstanceInfo,1> *)(this->SelectedInstances).AllocatorInstance.Data,
             (this->SelectedInstances).ArrayNum);
  pFVar7 = (this->SelectedInstances).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
  pTVar5 = (this->MessageBusPtr).WeakReferenceCount.ReferenceController;
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
  this->_padding_ = (longlong)&___7ISessionManager__6B_;
  plVar8 = (longlong *)this->_padding_;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  return;
}

// AddOwner @ 148ceff50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSessionManager::AddOwner(FSessionManager *this,FString *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar2 = &this->FilteredOwners;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->FilteredOwners).ArrayMax * 0x10))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->FilteredOwners).ArrayNum;
  piVar1 = &(this->FilteredOwners).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->FilteredOwners).ArrayNum = iVar6 + 1;
  ::FString::FString((FString *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10),param_1)
  ;
  return;
}

// FindExpiredSessions @ 148cf1e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSessionManager::FindExpiredSessions(FSessionManager *this,FDateTime *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  bVar3 = false;
  TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
              *)&this->Sessions);
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar7 = local_88._24_8_ >> 0x20;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = __real_4197d78402000000;
    auVar9 = roundpd(auVar9,auVar9,1);
    local_28 = (TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
                *)&this->Sessions;
    do {
      lVar1 = *local_58;
      if (*(longlong *)(lVar1 + 0x10 + (longlong)(int)uVar7 * 0x28) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      plVar6 = (longlong *)
               (**(code **)(**(longlong **)(lVar1 + 0x10 + (longlong)(int)uVar7 * 0x28) + 8))();
      if (*plVar6 + (longlong)auVar9._0_8_ < param_1->Ticks) {
        TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_30,uStack_3c);
        local_20 = '\x01';
        bVar3 = true;
      }
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar7 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
    if (bVar3) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->SessionsUpdatedDelegate);
    }
  }
  return;
}

// GetInstance @ 148cf2150

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<ISessionInstanceInfo,1> * __thiscall
FSessionManager::GetInstance
          (FSessionManager *this,TSharedPtr<ISessionInstanceInfo,1> *__return_storage_ptr__,
          FGuid *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  TMap<FGuid,TSharedPtr<FSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>_>
  *pTVar9;
  bool bVar10;
  TSharedPtr<ISessionInstanceInfo,1> *pTVar11;
  uint *puVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  TSharedPtr<ISessionInstanceInfo,1> *pTVar17;
  undefined1 *puVar18;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  TSharedPtr<ISessionInstanceInfo,1> *local_b8;
  undefined8 local_b0;
  TMap<FGuid,TSharedPtr<FSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  TMap<FGuid,TSharedPtr<FSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>_>
  *local_70;
  TMap<FGuid,TSharedPtr<FSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->Sessions).field_0x10;
  iVar3 = *(int *)&(this->Sessions).field_0x28;
  local_a8 = &this->Sessions;
  local_88 = 0;
  iStack_a0 = 0;
  uStack_9c = 1;
  iStack_8c = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Sessions).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar16 = *puVar12;
    while (uVar16 == 0) {
      lVar13 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_148cf21fe;
      uVar16 = puVar12[lVar13 + 1];
    }
    uStack_9c = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_9c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_78 = (int)lVar13;
    iStack_8c = local_88 + -1 + local_78;
    if (iVar3 < iStack_8c) {
      iStack_8c = iVar3;
    }
  }
LAB_148cf21fe:
  iStack_80 = *(int *)&(this->Sessions).field_0x8 - *(int *)&(this->Sessions).field_0x34;
  uVar16 = *(uint *)&(this->Sessions).field_0x28;
  uStack_90 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_9c,iStack_a0);
  uVar15 = uVar16 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iStack_8c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_60._28_4_ = iStack_8c;
  TStack_60.BaseBitIndex = local_88;
  uStack_40 = CONCAT44(uStack_7c,iStack_80);
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_70 = local_a8;
  local_68 = local_a8;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pTVar11 = (TSharedPtr<ISessionInstanceInfo,1> *)(*pcVar8)();
    return pTVar11;
  }
  uVar4 = *(uint *)&(this->Sessions).field_0x28;
  if (uVar16 != uVar4) {
    puVar18 = *(undefined1 **)&(this->Sessions).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148cf2300;
      uVar16 = *(uint *)(puVar18 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_74 = (int)lVar13;
    uVar16 = local_74 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_148cf2300:
  do {
    pTVar9 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar13 = (longlong)TStack_60.CurrentBitIndex;
    if (((TStack_60.CurrentBitIndex == uVar16) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == local_70)
       ) {
      __return_storage_ptr__->Object = (ISessionInstanceInfo *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    local_b8 = (TSharedPtr<ISessionInstanceInfo,1> *)0x0;
    local_b0 = 0;
    lVar5 = *(longlong *)pTVar9;
    if ((*(longlong *)(lVar5 + 0x10 + lVar13 * 0x28) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TSharedPtr<ISessionInstanceInfo,1> *)(*pcVar8)();
      return pTVar11;
    }
    puVar6 = *(undefined8 **)(lVar5 + lVar13 * 0x28 + 0x10);
    (**(code **)*puVar6)(puVar6,&local_b8);
    iVar3 = (int)local_b0;
    pTVar17 = local_b8 + (int)local_b0;
    pTVar11 = local_b8;
    while( true ) {
      if ((int)local_b0 != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<ISessionInstanceInfo,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pTVar11 == pTVar17) break;
      if ((pTVar11->Object == (ISessionInstanceInfo *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        pTVar11 = (TSharedPtr<ISessionInstanceInfo,1> *)(*pcVar8)();
        return pTVar11;
      }
      puVar12 = (uint *)(**(code **)((longlong)*pTVar11->Object + 0x28))();
      if (((puVar12[3] == param_1->D && puVar12[2] == param_1->C) && puVar12[1] == param_1->B) &&
          *puVar12 == param_1->A) {
        __return_storage_ptr__->Object = pTVar11->Object;
        pTVar7 = (pTVar11->SharedReferenceCount).ReferenceController;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        DestructItems<TSharedPtr<ISessionInstanceInfo,1>,int>(local_b8,(int)local_b0);
        if (local_b8 == (TSharedPtr<ISessionInstanceInfo,1> *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_b8);
        return __return_storage_ptr__;
      }
      pTVar11 = pTVar11 + 1;
    }
    DestructItems<TSharedPtr<ISessionInstanceInfo,1>,int>(local_b8,(int)local_b0);
    if (local_b8 != (TSharedPtr<ISessionInstanceInfo,1> *)0x0) {
      FMemory::Free(local_b8);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// GetSelectedInstances @ 148cf28d0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedPtr<ISessionInstanceInfo,1>,TSizedDefaultAllocator<32>_> * __thiscall
FSessionManager::GetSelectedInstances(FSessionManager *this)

{
  return &this->SelectedInstances;
}

// GetSelectedSession @ 148cf28e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<ISessionInfo,1> * __thiscall FSessionManager::GetSelectedSession(FSessionManager *this)

{
  return &this->SelectedSession;
}

// GetSessions @ 148cf2920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSessionManager::GetSessions
          (FSessionManager *this,
          TArray<TSharedPtr<ISessionInfo,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 local_98;
  longlong local_90;
  TMap<FGuid,TSharedPtr<FSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>_>
  *local_88;
  int iStack_80;
  uint uStack_7c;
  undefined1 *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  TMap<FGuid,TSharedPtr<FSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  uVar8 = *(int *)&(this->Sessions).field_0x8 - *(int *)&(this->Sessions).field_0x34;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  DestructItems<TSharedPtr<ISessionInfo,1>,int>
            ((TSharedPtr<ISessionInfo,1> *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  piVar1 = &param_1->ArrayMax;
  iStack_80 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar8,&param_1->AllocatorInstance,0,piVar1);
  }
  local_88 = &this->Sessions;
  iVar5 = *(int *)&(this->Sessions).field_0x28;
  local_78 = &(this->Sessions).field_0x10;
  uStack_7c = 1;
  local_68 = 0;
  iStack_6c = 0;
  if (iVar5 != 0) {
    puVar9 = *(uint **)&(this->Sessions).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)local_78;
    }
    uVar8 = *puVar9;
    local_68 = 0;
    iStack_80 = 0;
    while (uVar8 == 0) {
      lVar6 = (longlong)iStack_80;
      local_68 = local_68 + 0x20;
      iStack_80 = iStack_80 + 1;
      iStack_6c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_80) goto LAB_148cf2a20;
      uVar8 = puVar9[lVar6 + 1];
    }
    uStack_7c = -uVar8 & uVar8;
    uVar2 = (ulonglong)uStack_7c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_6c = local_68 + -1 + (int)lVar6;
    if (iVar5 < iStack_6c) {
      iStack_6c = iVar5;
    }
  }
LAB_148cf2a20:
  uStack_70 = 0xffffffff;
  TStack_50._padding_ = CONCAT44(uStack_7c,iStack_80);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = iStack_6c;
  TStack_50.BaseBitIndex = local_68;
  iStack_64 = iStack_6c;
  local_58 = local_88;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_78;
  TStack_50.CurrentBitIndex = iStack_6c;
  if (iStack_6c < iVar5) {
    do {
      local_98 = *(undefined8 *)
                  (*(longlong *)local_58 + 0x10 + (longlong)TStack_50.CurrentBitIndex * 0x28);
      local_90 = *(longlong *)
                  (*(longlong *)local_58 + 0x18 + (longlong)TStack_50.CurrentBitIndex * 0x28);
      if (local_90 != 0) {
        LOCK();
        *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
        UNLOCK();
      }
      pFVar7 = (param_1->AllocatorInstance).Data;
      if (((pFVar7 <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 < pFVar7 + (longlong)*piVar1 * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = param_1->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar5 + 1;
      pFVar7 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar7 = local_98;
      *(longlong *)(pFVar7 + 8) = local_90;
      local_90 = 0;
      local_98 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return;
}

// HandleEnginePongMessage @ 148cf2c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSessionManager::HandleEnginePongMessage
          (FSessionManager *this,FEngineServicePong *param_1,TSharedRef<IMessageContext,1> *param_2)

{
  longlong lVar1;
  FSessionInfo *this_00;
  int iVar2;
  ulong64 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  if ((((param_1->SessionId).D != 0 || (param_1->SessionId).C != 0) || (param_1->SessionId).B != 0)
      || (param_1->SessionId).A != 0) {
    uVar3 = CityHash64((char *)&param_1->SessionId,0x10);
    iVar2 = TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
                        *)&this->Sessions,(uint)uVar3,&param_1->SessionId);
    if ((iVar2 == -1) || (lVar1 = *(longlong *)&this->Sessions + (longlong)iVar2 * 0x28, lVar1 == 0)
       ) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      this_00 = *(FSessionInfo **)(lVar1 + 0x10);
      pTVar4 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_00 != (FSessionInfo *)0x0) {
        FSessionInfo::UpdateFromMessage(this_00,param_1,param_2);
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->SessionInstanceUpdatedDelegate);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// HandleLogReceived @ 148cf2d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSessionManager::HandleLogReceived
          (FSessionManager *this,TSharedRef<ISessionInfo,1> *param_1,
          TSharedRef<ISessionInstanceInfo,1> *param_2,TSharedRef<FSessionLogMessage,1> *param_3)

{
  ISessionInfo *pIVar1;
  
  pIVar1 = (this->SelectedSession).Object;
  if ((pIVar1 != (ISessionInfo *)0x0) && (pIVar1 == param_1->Object)) {
    TMulticastDelegate<void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast((TMulticastDelegate<void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
                 *)&this->LogReceivedEvent,param_1,param_2,param_3);
    return;
  }
  return;
}

// HandleSessionPongMessage @ 148cf3d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSessionManager::HandleSessionPongMessage
          (FSessionManager *this,FSessionServicePong *param_1,TSharedRef<IMessageContext,1> *param_2
          )

{
  int iVar1;
  IMessageBus *pIVar2;
  code *pcVar3;
  atomic<int> aVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  atomic<int> aVar9;
  int iVar10;
  ulong64 uVar11;
  TSharedPtr<FSessionInfo,1> *this_00;
  undefined8 *puVar12;
  FSessionInfo *pFVar13;
  TMulticastDelegateRegistration<void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
  *this_01;
  FSessionInfo *pFVar14;
  TRawPtrProxy<FSessionInfo> TVar15;
  bool bVar16;
  TRawPtrProxy<FSessionInfo> local_res10;
  TSharedRef<IMessageContext,1> *local_res18;
  
  bVar16 = false;
  local_res10.Object = local_res10.Object & 0xffffffff00000000;
  if ((((param_1->SessionId).D == 0 && (param_1->SessionId).C == 0) && (param_1->SessionId).B == 0)
      && (param_1->SessionId).A == 0) {
    return;
  }
  local_res18 = param_2;
  if ((param_1->Standalone == false) && (bVar8 = IsValidOwner(this,&param_1->SessionOwner), !bVar8))
  {
    return;
  }
  pFVar14 = (FSessionInfo *)(this->MessageBusPtr).WeakReferenceCount.ReferenceController;
  if (pFVar14 == (FSessionInfo *)0x0) goto LAB_148cf3d74;
  aVar4 = *(atomic<int> *)&pFVar14->_padding_;
  do {
    if (aVar4 == (atomic<int>)0x0) {
      pFVar14 = (FSessionInfo *)0x0;
      goto LAB_148cf3d74;
    }
    LOCK();
    aVar9 = *(atomic<int> *)&pFVar14->_padding_;
    bVar8 = aVar4 == aVar9;
    if (bVar8) {
      *(atomic<int> *)&pFVar14->_padding_ = (atomic<int>)((int)aVar4 + 1);
      aVar9 = aVar4;
    }
    UNLOCK();
    aVar4 = aVar9;
  } while (!bVar8);
  pIVar2 = (this->MessageBusPtr).Object;
  if (pIVar2 == (IMessageBus *)0x0) goto LAB_148cf3d74;
  uVar11 = CityHash64((char *)&param_1->SessionId,0x10);
  this_00 = TMapBase<FGuid,TSharedPtr<FSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>_>
            ::FindOrAddImpl<FGuid_const_&>
                      ((TMapBase<FGuid,TSharedPtr<FSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>_>
                        *)&this->Sessions,(uint)uVar11,&param_1->SessionId);
  if (this_00->Object == (FSessionInfo *)0x0) {
    pFVar13 = ::operator_new(0xf8);
    if (pFVar13 == (FSessionInfo *)0x0) {
      pFVar13 = (FSessionInfo *)0x0;
      TVar15.Object = local_res10.Object;
    }
    else {
      LOCK();
      *(atomic<int> *)&pFVar14->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar14->_padding_ + 1);
      UNLOCK();
      *(undefined8 *)&pFVar13->_padding_ = 0;
      pFVar13->_padding_ = 0;
      pFVar13->_padding_ = (longlong)&___7FSessionInfo__6B_;
      *(undefined8 *)&pFVar13->Instances = 0;
      *(undefined8 *)&(pFVar13->Instances).field_0x8 = 0;
      *(undefined8 *)&(pFVar13->Instances).field_0x20 = 0;
      *(undefined4 *)&(pFVar13->Instances).field_0x28 = 0;
      *(undefined4 *)&(pFVar13->Instances).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar13->Instances).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar13->Instances).field_0x34 = 0;
      *(undefined8 *)&(pFVar13->Instances).field_0x40 = 0;
      *(undefined4 *)&(pFVar13->Instances).field_0x48 = 0;
      (pFVar13->LastUpdateTime).Ticks = 0;
      (pFVar13->MessageBusPtr).Object = pIVar2;
      (pFVar13->MessageBusPtr).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)pFVar14;
      LOCK();
      ((atomic<int> *)&pFVar14->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pFVar14->_padding_)[1] + 1);
      UNLOCK();
      uVar5 = (param_1->SessionId).B;
      uVar6 = (param_1->SessionId).C;
      uVar7 = (param_1->SessionId).D;
      bVar16 = true;
      (pFVar13->SessionId).A = (param_1->SessionId).A;
      (pFVar13->SessionId).B = uVar5;
      (pFVar13->SessionId).C = uVar6;
      (pFVar13->SessionId).D = uVar7;
      (pFVar13->SessionName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar13->SessionName).Data.ArrayNum = 0;
      (pFVar13->SessionName).Data.ArrayMax = 0;
      (pFVar13->SessionOwner).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar13->SessionOwner).Data.ArrayNum = 0;
      (pFVar13->SessionOwner).Data.ArrayMax = 0;
      *(undefined8 *)&pFVar13->InstanceDiscoveredEvent = 0;
      *(undefined8 *)&(pFVar13->InstanceDiscoveredEvent).field_0x8 = 0;
      *(undefined8 *)&(pFVar13->InstanceDiscoveredEvent).field_0x10 = 0;
      *(undefined8 *)&(pFVar13->InstanceDiscoveredEvent).field_0x18 = 2;
      *(undefined8 *)&pFVar13->LogReceivedEvent = 0;
      *(undefined8 *)&(pFVar13->LogReceivedEvent).field_0x8 = 0;
      *(undefined8 *)&(pFVar13->LogReceivedEvent).field_0x10 = 0;
      *(undefined8 *)&(pFVar13->LogReceivedEvent).field_0x18 = 2;
      TVar15.Object = pFVar14;
      if ((((*(longlong *)&pFVar13->_padding_ != 0) && (pFVar13->_padding_ != 0)) &&
          (0 < *(int *)(pFVar13->_padding_ + 8))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object"), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_res10.Object = pFVar13;
    TSharedPtr<FSessionInfo,1>::operator=<FSessionInfo>(this_00,&local_res10);
    if (bVar16) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)TVar15.Object);
    }
    pFVar13 = TSharedPtr<FSessionInfo,1>::operator->(this_00);
    this_01 = (TMulticastDelegateRegistration<void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
               *)(**(code **)(pFVar13->_padding_ + 0x48))(pFVar13);
    TMulticastDelegateRegistration<void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
    ::AddSP<FSessionManager>(this_01,(FSessionManager *)&stack0x00000020,(pmf_f08df4f3 *)this);
    pFVar13 = TSharedPtr<FSessionInfo,1>::operator->(this_00);
    param_2 = local_res18;
LAB_148cf3e08:
    FSessionInfo::UpdateFromMessage(pFVar13,param_1,param_2);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->SessionsUpdatedDelegate);
  }
  else {
    puVar12 = (undefined8 *)(**(code **)(this_00->Object->_padding_ + 0x28))();
    iVar10 = (param_1->SessionOwner).Data.ArrayNum;
    iVar1 = *(int *)(puVar12 + 1);
    if (iVar1 == iVar10) {
      if (1 < iVar1) {
        iVar10 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)*puVar12,
                            (wchar_t *)(param_1->SessionOwner).Data.AllocatorInstance.Data);
        bVar16 = iVar10 == 0;
        goto LAB_148cf3df6;
      }
    }
    else {
      bVar16 = iVar10 + iVar1 == 1;
LAB_148cf3df6:
      if (!bVar16) {
        pFVar13 = TSharedPtr<FSessionInfo,1>::operator->(this_00);
        goto LAB_148cf3e08;
      }
    }
    pFVar13 = TSharedPtr<FSessionInfo,1>::operator->(this_00);
    FSessionInfo::UpdateFromMessage(pFVar13,param_1,param_2);
  }
LAB_148cf3d74:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar14);
  return;
}

// HandleTicker @ 148cf3fe0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSessionManager::HandleTicker(FSessionManager *this,float param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_bool___cdecl_FSessionManager::HandleTicker(float)_::_2_::FStat_STAT_FSessionmanager_HandleTicker>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  undefined1 auVar10 [16];
  LARGE_INTEGER local_res8 [2];
  longlong local_res18;
  FName local_res20;
  FStatMessage local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FSessionmanager_HandleTicker ==
          (FThreadSafeStaticStat<_private:_bool___cdecl_FSessionManager::HandleTicker(float)_::_2_::FStat_STAT_FSessionmanager_HandleTicker>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res8[0].s,"STAT_FSessionmanager_HandleTicker");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FSessionmanager_HandleTicker,*pFVar5,
                   L"STAT_FSessionmanager_HandleTicker","STATGROUP_Quick","STATCAT_Advanced",
                   L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_FSessionmanager_HandleTicker;
  if (StatPtr_STAT_FSessionmanager_HandleTicker ==
      (FThreadSafeStaticStat<_private:_bool___cdecl_FSessionManager::HandleTicker(float)_::_2_::FStat_STAT_FSessionmanager_HandleTicker>
       )0x0) {
    pFVar5 = ::FName::FName(&local_res20,"STAT_FSessionmanager_HandleTicker");
    FVar6 = (FThreadSafeStaticStat<_private:_bool___cdecl_FSessionManager::HandleTicker(float)_::_2_::FStat_STAT_FSessionmanager_HandleTicker>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FSessionmanager_HandleTicker,
                         *pFVar5,L"STAT_FSessionmanager_HandleTicker","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0].s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8[0]._0_4_ = FVar8.Value;
        local_res8[0]._4_4_ = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8[0].s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SessionServices\\Private\\SessionManager.cpp"
                   ,0x14e);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8[0]._0_4_ = FVar8.Value;
      local_res8[0]._4_4_ = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      goto LAB_148cf4159;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_148cf4159:
  FDateTime::UtcNow();
  auVar10._8_8_ = 0;
  auVar10._0_8_ = __real_4187d78404000000;
  auVar10 = roundpd(auVar10,auVar10,1);
  if ((longlong)auVar10._0_8_ + (this->LastPingTime).Ticks <= local_res18) {
    SendPing(this);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar9.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8[0]._0_1_;
      local_38.StatData.Pad[1] = local_res8[0]._1_1_;
      local_38.StatData.Pad[2] = local_res8[0]._2_1_;
      local_38.StatData.Pad[3] = local_res8[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return true;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return true;
}

// IsInstanceSelected @ 148cf4680

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSessionManager::IsInstanceSelected
          (FSessionManager *this,TSharedRef<ISessionInstanceInfo,1> *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  plVar1 = (longlong *)(**(code **)((longlong)*param_1->Object + 0x50))(param_1->Object,local_18);
  if ((ISessionInfo *)*plVar1 == (this->SelectedSession).Object) {
    pFVar2 = (this->SelectedInstances).AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)(this->SelectedInstances).ArrayNum * 0x10;
    for (; pFVar2 != pFVar3; pFVar2 = pFVar2 + 0x10) {
      if ((*(ISessionInstanceInfo **)pFVar2 != (ISessionInstanceInfo *)0x0) &&
         (*(ISessionInstanceInfo **)pFVar2 == param_1->Object)) {
        bVar4 = true;
        goto LAB_148cf46d8;
      }
    }
  }
  bVar4 = false;
LAB_148cf46d8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return bVar4;
}

// IsValidOwner @ 148cf47a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSessionManager::IsValidOwner(FSessionManager *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 local_res10 [8];
  
  pwVar4 = FWindowsPlatformProcess::UserName(false);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar5,pwVar4);
  if (iVar2 == 0) {
    return true;
  }
  iVar2 = (this->FilteredOwners).ArrayNum;
  pFVar6 = (this->FilteredOwners).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->FilteredOwners).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar7) {
      return false;
    }
    iVar3 = *(int *)(pFVar6 + 8);
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar3 == iVar1) {
      if (iVar3 < 2) {
        return true;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)pFVar6,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar8 = iVar3 == 0;
    }
    else {
      bVar8 = iVar3 + iVar1 == 1;
    }
    if (bVar8) break;
    pFVar6 = pFVar6 + 0x10;
  }
  return true;
}

// OnCanSelectSession @ 148cf4870

/* WARNING: Enum "Type": Some values do not have unique names */

FCanSelectSessionEvent * __thiscall FSessionManager::OnCanSelectSession(FSessionManager *this)

{
  return &this->CanSelectSessionDelegate;
}

// OnInstanceSelectionChanged @ 148cf5650

/* WARNING: Enum "Type": Some values do not have unique names */

FInstanceSelectionChangedEvent * __thiscall
FSessionManager::OnInstanceSelectionChanged(FSessionManager *this)

{
  return &this->InstanceSelectionChangedDelegate;
}

// OnLogReceived @ 148cf5680

/* WARNING: Enum "Type": Some values do not have unique names */

FLogReceivedEvent * __thiscall FSessionManager::OnLogReceived(FSessionManager *this)

{
  return &this->LogReceivedEvent;
}

// OnSelectedSessionChanged @ 148cf5790

/* WARNING: Enum "Type": Some values do not have unique names */

FSelectedSessionChangedEvent * __thiscall
FSessionManager::OnSelectedSessionChanged(FSessionManager *this)

{
  return &this->SelectedSessionChangedEvent;
}

// OnSessionInstanceUpdated @ 148cf57a0

/* WARNING: Enum "Type": Some values do not have unique names */

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FSessionManager::OnSessionInstanceUpdated(FSessionManager *this)

{
  return &this->SessionInstanceUpdatedDelegate;
}

// OnSessionsUpdated @ 148cf57b0

/* WARNING: Enum "Type": Some values do not have unique names */

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FSessionManager::OnSessionsUpdated(FSessionManager *this)

{
  return &this->SessionsUpdatedDelegate;
}

// RefreshSessions @ 148cf5d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSessionManager::RefreshSessions(FSessionManager *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  bVar3 = false;
  TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
              *)&this->Sessions);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar7 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
              *)&this->Sessions;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar1 = *local_48;
      if (*(longlong *)(lVar1 + 0x10 + (longlong)(int)uVar7 * 0x28) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar6 = (FString *)
               (**(code **)(**(longlong **)(lVar1 + (longlong)(int)uVar7 * 0x28 + 0x10) + 0x28))();
      bVar4 = IsValidOwner(this,pFVar6);
      if (!bVar4) {
        TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uStack_2c);
        local_10 = '\x01';
        bVar3 = true;
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar7 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar8 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_18->HashSize < iVar5)) || (iVar5 < local_18->HashSize)) {
        local_18->HashSize = iVar5;
        TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
    if (bVar3) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->SessionsUpdatedDelegate);
    }
  }
  return;
}

// RemoveOwner @ 148cf6b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSessionManager::RemoveOwner(FSessionManager *this,FString *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  TArray<FString,TSizedDefaultAllocator<32>_>::Remove(&this->FilteredOwners,param_1);
  bVar3 = false;
  TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
              *)&this->Sessions);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar7 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
              *)&this->Sessions;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar1 = *local_48;
      if ((*(longlong *)(lVar1 + 0x10 + (longlong)(int)uVar7 * 0x28) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = (FString *)
               (**(code **)(**(longlong **)(lVar1 + (longlong)(int)uVar7 * 0x28 + 0x10) + 0x28))();
      bVar4 = IsValidOwner(this,pFVar6);
      if (!bVar4) {
        TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uStack_2c);
        local_10 = '\x01';
        bVar3 = true;
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar7 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar8 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_18->HashSize < iVar5)) || (iVar5 < local_18->HashSize)) {
        local_18->HashSize = iVar5;
        TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
    if (bVar3) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->SessionsUpdatedDelegate);
    }
  }
  return;
}

// SelectSession @ 148cf7140

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSessionManager::SelectSession(FSessionManager *this,TSharedPtr<ISessionInfo,1> *param_1)

{
  undefined1 *puVar1;
  ISessionInfo *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  FGuid *pFVar13;
  ulong64 uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  undefined1 local_res10 [8];
  TSharedPtr<ISessionInstanceInfo,1> local_78;
  ISessionInfo *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FDestructionSentinel local_58;
  FDestructionSentinel local_40;
  
  pIVar2 = param_1->Object;
  if (pIVar2 != (this->SelectedSession).Object) {
    if (pIVar2 != (ISessionInfo *)0x0) {
      pFVar13 = (FGuid *)(**(code **)((longlong)*pIVar2 + 0x18))();
      uVar14 = CityHash64((char *)pFVar13,0x10);
      iVar11 = TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FGuid>
                         ((TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
                           *)&this->Sessions,(uint)uVar14,pFVar13);
      if (iVar11 == -1) {
        return false;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->CanSelectSessionDelegate,(FWriteAccessScope *)&local_58);
    puVar1 = &(this->CanSelectSessionDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar7 = false;
    uVar15 = *(int *)&(this->CanSelectSessionDelegate).field_0x10 - 1;
    if (-1 < (int)uVar15) {
      lVar18 = (longlong)(int)uVar15 << 4;
      bVar7 = false;
      do {
        uVar12 = 0;
        if ((int)uVar15 < *(int *)&(this->CanSelectSessionDelegate).field_0x10) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        lVar3 = *(longlong *)&(this->CanSelectSessionDelegate).field_0x8;
        if (((*(int *)(lVar18 + 8 + lVar3) == 0) ||
            (plVar4 = *(longlong **)(lVar18 + lVar3), plVar4 == (longlong *)0x0)) ||
           (cVar10 = (**(code **)(*plVar4 + 0x68))(), cVar10 == '\0')) {
          bVar7 = true;
        }
        lVar18 = lVar18 + -0x10;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
    }
    puVar1 = &(this->CanSelectSessionDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar7) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->CanSelectSessionDelegate,false);
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    iVar11 = (this->SelectedInstances).ArrayNum;
    pFVar16 = (this->SelectedInstances).AllocatorInstance.Data;
    pFVar17 = pFVar16 + (longlong)iVar11 * 0x10;
    while( true ) {
      if ((this->SelectedInstances).ArrayNum != iVar11) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<ISessionInstanceInfo,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar16 == pFVar17) break;
      local_78.Object = *(ISessionInstanceInfo **)pFVar16;
      local_78.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar16 + 8);
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TMulticastDelegate<void___cdecl(TSharedPtr<ISessionInstanceInfo,1>_const_&,bool),FDefaultDelegateUserPolicy>
      ::Broadcast((TMulticastDelegate<void___cdecl(TSharedPtr<ISessionInstanceInfo,1>_const_&,bool),FDefaultDelegateUserPolicy>
                   *)&this->InstanceSelectionChangedDelegate,&local_78,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      pFVar16 = pFVar16 + 0x10;
    }
    DestructItems<TSharedPtr<ISessionInstanceInfo,1>,int>
              ((TSharedPtr<ISessionInstanceInfo,1> *)
               (this->SelectedInstances).AllocatorInstance.Data,(this->SelectedInstances).ArrayNum);
    (this->SelectedInstances).ArrayNum = 0;
    if ((this->SelectedInstances).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->SelectedInstances).AllocatorInstance,0,
                 &(this->SelectedInstances).ArrayMax);
    }
    pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
    pIVar2 = param_1->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68 = (this->SelectedSession).Object;
    pTStack_60 = (this->SelectedSession).SharedReferenceCount.ReferenceController;
    (this->SelectedSession).Object = pIVar2;
    (this->SelectedSession).SharedReferenceCount.ReferenceController = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->SelectedSessionChangedEvent,(FWriteAccessScope *)&local_40);
    puVar1 = &(this->SelectedSessionChangedEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar7 = false;
    uVar15 = *(int *)&(this->SelectedSessionChangedEvent).field_0x10 - 1;
    if (-1 < (int)uVar15) {
      lVar18 = (longlong)(int)uVar15 << 4;
      bVar7 = false;
      do {
        uVar12 = 0;
        if ((int)uVar15 < *(int *)&(this->SelectedSessionChangedEvent).field_0x10) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        lVar3 = *(longlong *)&(this->SelectedSessionChangedEvent).field_0x8;
        if (((*(int *)(lVar3 + 8 + lVar18) == 0) ||
            (plVar4 = *(longlong **)(lVar3 + lVar18), plVar4 == (longlong *)0x0)) ||
           (cVar10 = (**(code **)(*plVar4 + 0x68))(), cVar10 == '\0')) {
          bVar7 = true;
        }
        lVar18 = lVar18 + -0x10;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
    }
    puVar1 = &(this->SelectedSessionChangedEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar7) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->SelectedSessionChangedEvent,false);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
  }
  return true;
}

// SendPing @ 148cf8000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSessionManager::SendPing(FSessionManager *this)

{
  int *piVar1;
  FMessageEndpoint *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ForAnyElementType _Src;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_protected:_void___cdecl_FSessionManager::SendPing(void)_::_2_::FStat_STAT_FSessionmanager_SendPing>
  FVar9;
  void *pvVar10;
  UScriptStruct *pUVar11;
  wchar_t *pwVar12;
  ForAnyElementType *pFVar13;
  FDateTime FVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  FName local_res18;
  FTimespan local_res20;
  FDateTime local_98;
  FTimespan local_90;
  LARGE_INTEGER local_88;
  FString local_80;
  FStatMessage local_70;
  FName local_60;
  FName local_58 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FSessionmanager_SendPing ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FSessionManager::SendPing(void)_::_2_::FStat_STAT_FSessionmanager_SendPing>
           )0x0) {
        pFVar8 = ::FName::FName(&local_60,"STAT_FSessionmanager_SendPing");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FSessionmanager_SendPing,*pFVar8,
                   L"STAT_FSessionmanager_SendPing","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar9 = StatPtr_STAT_FSessionmanager_SendPing;
  if (StatPtr_STAT_FSessionmanager_SendPing ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FSessionManager::SendPing(void)_::_2_::FStat_STAT_FSessionmanager_SendPing>
       )0x0) {
    pFVar8 = ::FName::FName(local_58,"STAT_FSessionmanager_SendPing");
    FVar9 = (FThreadSafeStaticStat<_protected:_void___cdecl_FSessionManager::SendPing(void)_::_2_::FStat_STAT_FSessionmanager_SendPing>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FSessionmanager_SendPing,*pFVar8
                         ,L"STAT_FSessionmanager_SendPing","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.ComparisonIndex.Value.Value;
        local_res10.Number = FVar15.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SessionServices\\Private\\SessionManager.cpp"
                   ,0xf5);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar5 = true;
      goto LAB_148cf8166;
    }
  }
  bVar5 = false;
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
LAB_148cf8166:
  pFVar2 = (this->MessageEndpoint).Object;
  if (pFVar2 != (FMessageEndpoint *)0x0) {
    pvVar10 = FMemory::Malloc(1,0);
    local_res20.Ticks = 0;
    local_res18.ComparisonIndex.Value = 0xf4373fff;
    local_res18.Number = 0x2bca2875;
    pUVar11 = FEngineServicePing::StaticStruct();
    FMessageEndpoint::Publish(pFVar2,pvVar10,pUVar11,Network,&local_res20,(FDateTime *)&local_res18)
    ;
    if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->MessageEndpoint).Object;
    pwVar12 = FWindowsPlatformProcess::UserName(false);
    pFVar13 = FMemory::Malloc(0x10,0);
    ::FString::FString(&local_80,pwVar12);
    _Src.Data = local_80.Data.AllocatorInstance.Data;
    piVar1 = (int *)((longlong)&pFVar13[1].Data + 4);
    pFVar13->Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar13[1].Data = local_80.Data.ArrayNum;
    if (local_80.Data.ArrayNum == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_80.Data.ArrayNum,0,pFVar13,local_80.Data.ArrayNum,piVar1);
      memcpy(pFVar13->Data,_Src.Data,(longlong)local_80.Data.ArrayNum * 2);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    local_90.Ticks = 0;
    local_98.Ticks = 0x2bca2875f4373fff;
    pUVar11 = FSessionServicePing::StaticStruct();
    FMessageEndpoint::Publish(pFVar2,pFVar13,pUVar11,Network,&local_90,&local_98);
  }
  FVar14 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
  (this->LastPingTime).Ticks = *FVar14.Ticks;
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_70.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_70);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// SetInstanceSelected @ 148cf92a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSessionManager::SetInstanceSelected
          (FSessionManager *this,TSharedRef<ISessionInstanceInfo,1> *param_1,bool param_2)

{
  int *piVar1;
  ISessionInfo *pIVar2;
  ISessionInfo *pIVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  FSharedReferencer<1> FVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ISessionInstanceInfo *local_88;
  TReferenceControllerBase<1> *local_80;
  ISessionInstanceInfo *local_78;
  TReferenceControllerBase<1> *local_70;
  TSharedPtr<ISessionInstanceInfo,1> local_68;
  TSharedPtr<ISessionInstanceInfo,1> local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  plVar8 = (longlong *)(**(code **)((longlong)*param_1->Object + 0x50))(param_1->Object,local_48);
  pIVar2 = (this->SelectedSession).Object;
  pIVar3 = (ISessionInfo *)*plVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  if (pIVar3 != pIVar2) {
    return false;
  }
  if (param_2) {
    pFVar11 = (this->SelectedInstances).AllocatorInstance.Data;
    pFVar12 = pFVar11 + (longlong)(this->SelectedInstances).ArrayNum * 0x10;
    for (; pFVar11 != pFVar12; pFVar11 = pFVar11 + 0x10) {
      if ((*(ISessionInstanceInfo **)pFVar11 != (ISessionInstanceInfo *)0x0) &&
         (*(ISessionInstanceInfo **)pFVar11 == param_1->Object)) {
        return true;
      }
    }
    local_88 = param_1->Object;
    local_80 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar11 = (this->SelectedInstances).AllocatorInstance.Data;
    if (((pFVar11 <= (FScriptContainerElement *)&local_88) &&
        ((FScriptContainerElement *)&local_88 <
         pFVar11 + (longlong)(this->SelectedInstances).ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar7 = (this->SelectedInstances).ArrayNum;
    piVar1 = &(this->SelectedInstances).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->SelectedInstances).AllocatorInstance,piVar1);
    }
    (this->SelectedInstances).ArrayNum = iVar7 + 1;
    pFVar11 = (this->SelectedInstances).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    *(ISessionInstanceInfo **)pFVar11 = local_88;
    *(TReferenceControllerBase<1> **)(pFVar11 + 8) = local_80;
    local_80 = (TReferenceControllerBase<1> *)0x0;
    local_88 = (ISessionInstanceInfo *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_68.Object = param_1->Object;
    local_68.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TMulticastDelegate<void___cdecl(TSharedPtr<ISessionInstanceInfo,1>_const_&,bool),FDefaultDelegateUserPolicy>
    ::Broadcast((TMulticastDelegate<void___cdecl(TSharedPtr<ISessionInstanceInfo,1>_const_&,bool),FDefaultDelegateUserPolicy>
                 *)&this->InstanceSelectionChangedDelegate,&local_68,true);
    FVar10.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
  }
  else {
    local_78 = param_1->Object;
    local_70 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_70 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar11 = (this->SelectedInstances).AllocatorInstance.Data;
    if (((pFVar11 <= (FScriptContainerElement *)&local_78) &&
        ((FScriptContainerElement *)&local_78 <
         pFVar11 + (longlong)(this->SelectedInstances).ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar7 = (this->SelectedInstances).ArrayNum;
    lVar9 = (longlong)iVar7;
    FVar10.ReferenceController = local_70;
    if (iVar7 != 0) {
      pFVar11 = (this->SelectedInstances).AllocatorInstance.Data;
      iVar17 = 0;
      bVar5 = *(ISessionInstanceInfo **)pFVar11 != local_78;
      lVar13 = 0;
      iVar15 = 0;
      do {
        lVar13 = lVar13 + 1;
        iVar16 = iVar15 + 1;
        if (lVar13 < lVar9) {
          pFVar12 = pFVar11 + lVar13 * 0x10;
          do {
            if (bVar5 != (*(ISessionInstanceInfo **)pFVar12 != local_78)) break;
            iVar16 = iVar16 + 1;
            lVar13 = lVar13 + 1;
            pFVar12 = pFVar12 + 0x10;
          } while (lVar13 < lVar9);
        }
        iVar14 = iVar16 - iVar15;
        if (bVar5 == false) {
          DestructItems<TSharedPtr<ISessionInstanceInfo,1>,int>
                    ((TSharedPtr<ISessionInstanceInfo,1> *)(pFVar11 + (longlong)iVar15 * 0x10),
                     iVar14);
        }
        else {
          if (iVar17 != iVar15) {
            memmove(pFVar11 + (longlong)iVar17 * 0x10,pFVar11 + (longlong)iVar15 * 0x10,
                    (longlong)iVar14 << 4);
          }
          iVar17 = iVar17 + iVar14;
        }
        bVar5 = (bool)(bVar5 ^ 1);
        iVar15 = iVar16;
      } while (lVar13 < lVar9);
      (this->SelectedInstances).ArrayNum = iVar17;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
      if (iVar7 - iVar17 < 1) {
        return true;
      }
      local_58.Object = param_1->Object;
      local_58.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TMulticastDelegate<void___cdecl(TSharedPtr<ISessionInstanceInfo,1>_const_&,bool),FDefaultDelegateUserPolicy>
      ::Broadcast((TMulticastDelegate<void___cdecl(TSharedPtr<ISessionInstanceInfo,1>_const_&,bool),FDefaultDelegateUserPolicy>
                   *)&this->InstanceSelectionChangedDelegate,&local_58,false);
      FVar10.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  return true;
}

