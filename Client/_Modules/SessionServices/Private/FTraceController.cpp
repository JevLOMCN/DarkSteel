// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SessionServices
// Functions: 17

// FTraceController @ 148ced2d0

/* WARNING: Enum "Type": Some values do not have unique names */

FTraceController * __thiscall
FTraceController::FTraceController(FTraceController *this,TSharedRef<IMessageBus,1> *param_1)

{
  TSharedPtr<FMessageEndpoint,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FTaskGraphInterface *pFVar8;
  TRawMessageHandler<FTraceControlDiscovery,FTraceController> *pTVar9;
  FTraceController *pFVar10;
  TRawMessageHandler<FTraceControlDiscovery,FTraceController> *pTVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  longlong lVar14;
  FName local_res8;
  TRawPtrProxy<TRawMessageHandler<FTraceControlDiscovery,FTraceController>_> local_res10;
  TRawPtrProxy<TRawMessageHandler<FTraceControlStatus,FTraceController>_> local_res18;
  TRawPtrProxy<TRawMessageHandler<FTraceControlSettings,FTraceController>_> local_res20;
  undefined1 local_168 [24];
  undefined1 local_150 [8];
  ForAnyElementType FStack_148;
  int local_140;
  ForAnyElementType local_138;
  undefined8 local_130;
  bool local_128;
  FName local_124;
  Type local_11c;
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  TSharedPtr<IMessageHandler,1> local_100;
  TSharedPtr<IMessageHandler,1> local_f0;
  TSharedPtr<IMessageHandler,1> local_e0;
  TSharedPtr<IMessageHandler,1> local_d0;
  TSharedPtr<IMessageHandler,1> local_c0;
  TSharedPtr<FMessageEndpoint,1> local_b0;
  TRawPtrProxy<TRawMessageHandler<FTraceControlChannelsDesc,FTraceController>_> local_a0;
  TRawPtrProxy<TRawMessageHandler<FTraceControlChannelsStatus,FTraceController>_> local_98;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  this->_padding_ = (longlong)&___7FTraceController__6B_;
  (this->MessageBus).Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  (this->MessageBus).WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = (TRawMessageHandler<FTraceControlDiscovery,FTraceController> *)0x0;
  *(undefined8 *)&(this->StatusReceivedEvent).field_0x18 = 2;
  (this->TraceControlAddress).UniqueId.A = 0;
  (this->TraceControlAddress).UniqueId.B = 0;
  pTVar1 = &this->MessageEndpoint;
  (this->TraceControlAddress).UniqueId.C = 0;
  (this->TraceControlAddress).UniqueId.D = 0;
  *(undefined8 *)&this->StatusReceivedEvent = 0;
  *(undefined8 *)&(this->StatusReceivedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->StatusReceivedEvent).field_0x10 = 0;
  pTVar1->Object = (FMessageEndpoint *)0x0;
  (this->MessageEndpoint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->InstancesLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->Instances = 0;
  *(undefined8 *)&(this->Instances).field_0x8 = 0;
  *(undefined8 *)&(this->Instances).field_0x20 = 0;
  *(undefined4 *)&(this->Instances).field_0x28 = 0;
  *(undefined4 *)&(this->Instances).field_0x2c = 0x80;
  *(undefined4 *)&(this->Instances).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Instances).field_0x34 = 0;
  *(undefined8 *)&(this->Instances).field_0x40 = 0;
  *(undefined4 *)&(this->Instances).field_0x48 = 0;
  *(undefined8 *)&this->InstanceToAddress = 0;
  *(undefined8 *)&(this->InstanceToAddress).field_0x8 = 0;
  *(undefined8 *)&(this->InstanceToAddress).field_0x20 = 0;
  *(undefined4 *)&(this->InstanceToAddress).field_0x28 = 0;
  *(undefined4 *)&(this->InstanceToAddress).field_0x2c = 0x80;
  *(undefined4 *)&(this->InstanceToAddress).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InstanceToAddress).field_0x34 = 0;
  *(undefined8 *)&(this->InstanceToAddress).field_0x40 = 0;
  *(undefined4 *)&(this->InstanceToAddress).field_0x48 = 0;
  ::FName::FName(&local_res8,"FTraceController");
  local_168._0_8_ = param_1->Object;
  local_168._8_8_ = (param_1->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_168._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_168._8_8_)->WeakReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_168._8_8_)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_150 = (undefined1  [8])0x0;
  FStack_148.Data = (FScriptContainerElement *)0x0;
  local_124 = local_res8;
  local_168[0x10] = false;
  local_140 = 0;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130._0_4_ = 0;
  local_130._4_4_ = 0;
  local_128 = false;
  pFVar8 = FTaskGraphInterface::Get();
  local_11c = (**(code **)((longlong)*pFVar8 + 0x10))(pFVar8,0);
  pTVar9 = ::operator_new(0x18);
  local_res10.Object = pTVar11;
  if (pTVar9 != (TRawMessageHandler<FTraceControlDiscovery,FTraceController> *)0x0) {
    pTVar9->Handler = this;
    pTVar9->_padding_ =
         (longlong)&___7__TRawMessageHandler_UFTraceControlDiscovery__VFTraceController____6B_;
    pTVar9->Func = (pmf_19264a38)OnDiscoveryResponse;
    local_res10.Object = pTVar9;
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlDiscovery,FTraceController>_>
            (&local_100,&local_res10);
  if (((local_138.Data <= &local_100) &&
      (&local_100 <
       (TSharedPtr<IMessageHandler,1> *)(local_138.Data + (longlong)local_130._4_4_ * 0x10))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FTraceController *)(*pcVar5)();
    return pFVar10;
  }
  iVar7 = (int)local_130;
  if ((int)local_130 == local_130._4_4_) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_138,(int *)((longlong)&local_130 + 4));
  }
  *(IMessageHandler **)&local_138.Data[(longlong)iVar7 * 0x10].field_0x0 = local_100.Object;
  *(TReferenceControllerBase<1> **)(local_138.Data + (longlong)iVar7 * 0x10 + 8) =
       local_100.SharedReferenceCount.ReferenceController;
  local_100.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_100.Object = (IMessageHandler *)0x0;
  local_130._0_4_ = iVar7 + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar9 = ::operator_new(0x18);
  local_res18.Object = (TRawMessageHandler<FTraceControlStatus,FTraceController> *)pTVar11;
  if (pTVar9 != (TRawMessageHandler<FTraceControlDiscovery,FTraceController> *)0x0) {
    pTVar9->Handler = this;
    pTVar9->_padding_ =
         (longlong)&___7__TRawMessageHandler_UFTraceControlStatus__VFTraceController____6B_;
    pTVar9->Func = (pmf_19264a38)OnStatus;
    local_res18.Object = (TRawMessageHandler<FTraceControlStatus,FTraceController> *)pTVar9;
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlStatus,FTraceController>_>
            (&local_f0,&local_res18);
  if (((local_138.Data <= &local_f0) &&
      (&local_f0 <
       (TSharedPtr<IMessageHandler,1> *)(local_138.Data + (longlong)local_130._4_4_ * 0x10))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FTraceController *)(*pcVar5)();
    return pFVar10;
  }
  if ((int)local_130 == local_130._4_4_) {
    local_130._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_138,(int *)((longlong)&local_130 + 4));
  }
  *(IMessageHandler **)&local_138.Data[(longlong)(int)local_130 * 0x10].field_0x0 = local_f0.Object;
  *(TReferenceControllerBase<1> **)(local_138.Data + (longlong)(int)local_130 * 0x10 + 8) =
       local_f0.SharedReferenceCount.ReferenceController;
  local_f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_f0.Object = (IMessageHandler *)0x0;
  local_130._0_4_ = (int)local_130 + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar9 = ::operator_new(0x18);
  local_res20.Object = (TRawMessageHandler<FTraceControlSettings,FTraceController> *)pTVar11;
  if (pTVar9 != (TRawMessageHandler<FTraceControlDiscovery,FTraceController> *)0x0) {
    pTVar9->Handler = this;
    pTVar9->_padding_ =
         (longlong)&___7__TRawMessageHandler_UFTraceControlSettings__VFTraceController____6B_;
    pTVar9->Func = (pmf_19264a38)OnSettings;
    local_res20.Object = (TRawMessageHandler<FTraceControlSettings,FTraceController> *)pTVar9;
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlSettings,FTraceController>_>
            (&local_e0,&local_res20);
  if (((local_138.Data <= &local_e0) &&
      (&local_e0 <
       (TSharedPtr<IMessageHandler,1> *)(local_138.Data + (longlong)local_130._4_4_ * 0x10))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FTraceController *)(*pcVar5)();
    return pFVar10;
  }
  if ((int)local_130 == local_130._4_4_) {
    local_130._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_138,(int *)((longlong)&local_130 + 4));
  }
  *(IMessageHandler **)&local_138.Data[(longlong)(int)local_130 * 0x10].field_0x0 = local_e0.Object;
  *(TReferenceControllerBase<1> **)(local_138.Data + (longlong)(int)local_130 * 0x10 + 8) =
       local_e0.SharedReferenceCount.ReferenceController;
  local_e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_e0.Object = (IMessageHandler *)0x0;
  local_130._0_4_ = (int)local_130 + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar9 = ::operator_new(0x18);
  local_a0.Object = (TRawMessageHandler<FTraceControlChannelsDesc,FTraceController> *)pTVar11;
  if (pTVar9 != (TRawMessageHandler<FTraceControlDiscovery,FTraceController> *)0x0) {
    pTVar9->Handler = this;
    pTVar9->_padding_ =
         (longlong)&___7__TRawMessageHandler_UFTraceControlChannelsDesc__VFTraceController____6B_;
    pTVar9->Func = (pmf_19264a38)OnChannelsDesc;
    local_a0.Object = (TRawMessageHandler<FTraceControlChannelsDesc,FTraceController> *)pTVar9;
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlChannelsDesc,FTraceController>_>
            (&local_d0,&local_a0);
  if (((local_138.Data <= &local_d0) &&
      (&local_d0 <
       (TSharedPtr<IMessageHandler,1> *)(local_138.Data + (longlong)local_130._4_4_ * 0x10))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FTraceController *)(*pcVar5)();
    return pFVar10;
  }
  if ((int)local_130 == local_130._4_4_) {
    local_130._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_138,(int *)((longlong)&local_130 + 4));
  }
  lVar14 = (longlong)(int)local_130;
  local_130._0_4_ = (int)local_130 + 1;
  *(IMessageHandler **)&local_138.Data[lVar14 * 0x10].field_0x0 = local_d0.Object;
  *(TReferenceControllerBase<1> **)(local_138.Data + lVar14 * 0x10 + 8) =
       local_d0.SharedReferenceCount.ReferenceController;
  local_d0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_d0.Object = (IMessageHandler *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar9 = ::operator_new(0x18);
  if (pTVar9 != (TRawMessageHandler<FTraceControlDiscovery,FTraceController> *)0x0) {
    pTVar9->Handler = this;
    pTVar9->_padding_ =
         (longlong)&___7__TRawMessageHandler_UFTraceControlChannelsStatus__VFTraceController____6B_;
    pTVar9->Func = (pmf_19264a38)OnChannelsStatus;
    pTVar11 = pTVar9;
  }
  local_98.Object = (TRawMessageHandler<FTraceControlChannelsStatus,FTraceController> *)pTVar11;
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlChannelsStatus,FTraceController>_>
            (&local_c0,&local_98);
  if (((local_138.Data <= &local_c0) &&
      (&local_c0 <
       (TSharedPtr<IMessageHandler,1> *)(local_138.Data + (longlong)local_130._4_4_ * 0x10))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FTraceController *)(*pcVar5)();
    return pFVar10;
  }
  if ((int)local_130 == local_130._4_4_) {
    local_130._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_138,(int *)((longlong)&local_130 + 4));
  }
  lVar14 = (longlong)(int)local_130;
  local_130._0_4_ = (int)local_130 + 1;
  *(IMessageHandler **)&local_138.Data[lVar14 * 0x10].field_0x0 = local_c0.Object;
  *(TReferenceControllerBase<1> **)(local_138.Data + lVar14 * 0x10 + 8) =
       local_c0.SharedReferenceCount.ReferenceController;
  local_c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_c0.Object = (IMessageHandler *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_118 = (undefined1  [8])0x0;
  local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_110.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_60);
  local_48 = &local_110;
  puVar12 = UE::Core::Private::DelegateAllocate(0x28,&local_110);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFMessageBusNotification___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTraceController____A6AXAEBUFMessageBusNotification___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar12[4] = OnNotification;
    puVar12[3] = this;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegate<void___cdecl(FMessageBusNotification_const_&),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(FMessageBusNotification_const_&),FDefaultDelegateUserPolicy> *)
             local_150,
             (TDelegate<void___cdecl(FMessageBusNotification_const_&),FDefaultDelegateUserPolicy> *)
             local_118);
  FMessageEndpointBuilder::Build((FMessageEndpointBuilder *)local_168,&local_b0);
  if (pTVar1 != &local_b0) {
    pTVar1->Object = local_b0.Object;
    local_b0.Object = (FMessageEndpoint *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MessageEndpoint).SharedReferenceCount,&local_b0.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_90);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_110,0,0,0x10);
    local_110.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_110.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
  DestructItems<TSharedPtr<IMessageHandler,1>,int>
            ((TSharedPtr<IMessageHandler,1> *)local_138.Data,(int)local_130);
  if ((TSharedPtr<IMessageHandler,1> *)local_138.Data != (TSharedPtr<IMessageHandler,1> *)0x0) {
    FMemory::Free(local_138.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_150,
             (FWriteAccessScope *)&local_78);
  if ((local_140 != 0) && (FStack_148.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_148.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_148,0,0,0x10);
    local_140 = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_148.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_150);
  if ((TReferenceControllerBase<1> *)local_168._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = (atomic<int> *)(local_168._8_8_ + 0xc);
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(*(longlong *)local_168._8_8_ + 8))(local_168._8_8_,1);
    }
  }
  return this;
}

// ~FTraceController @ 148ceead0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTraceController::~FTraceController(FTraceController *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  BOOLEAN BVar6;
  bool bVar7;
  
  this->_padding_ = (longlong)&___7FTraceController__6B_;
  *(undefined4 *)&(this->InstanceToAddress).field_0x48 = 0;
  pvVar3 = *(void **)&(this->InstanceToAddress).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FMessageAddress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMessageAddress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FMessageAddress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InstanceToAddress);
  *(undefined4 *)&(this->Instances).field_0x48 = 0;
  pvVar3 = *(void **)&(this->Instances).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FMessageAddress,FTraceController::FTracingInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMessageAddress,FTraceController::FTracingInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMessageAddress,FTraceController::FTracingInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Instances);
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->InstancesLock);
  if (BVar6 == '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->InstancesLock);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->StatusReceivedEvent).field_0x8,*(int *)&(this->StatusReceivedEvent).field_0x10
            );
  pvVar3 = *(void **)&(this->StatusReceivedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->StatusReceivedEvent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
  pTVar4 = (this->MessageBus).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

// HasAvailableInstance @ 148cf4320

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTraceController::HasAvailableInstance(FTraceController *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,FMessageAddress>,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FMessageAddress>,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>,FDefaultSetAllocator>
                      *)&this->InstanceToAddress,(uint)uVar2,param_1);
  return iVar1 != -1;
}

// OnChannelsDesc @ 148cf4880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceController::OnChannelsDesc
          (FTraceController *this,FTraceControlChannelsDesc *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  FScriptContainerElement FVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  FMessageAddress *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FPlatformRWLock *SRWLock;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  TSet<TTuple<unsigned_int,FTraceStatus::FChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,FTraceStatus::FChannel,0>,FDefaultSetAllocator>
  *this_00;
  FScriptContainerElement *pFVar20;
  uint local_res18 [2];
  TKeyInitializer<unsigned_int_const_&> local_res20;
  longlong local_88;
  longlong local_80;
  uint *local_70;
  longlong local_68;
  FPlatformRWLock *local_60;
  FDestructionSentinel local_58;
  
  SRWLock = &this->InstancesLock;
  local_60 = SRWLock;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pFVar13 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
  uVar11 = FCrc::MemCrc_DEPRECATED(pFVar13,0x10,0);
  iVar12 = TSet<TTuple<FMessageAddress,FTraceController::FTracingInstance>,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FMessageAddress>
                     ((TSet<TTuple<FMessageAddress,FTraceController::FTracingInstance>,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>,FDefaultSetAllocator>
                       *)&this->Instances,uVar11,pFVar13);
  if (iVar12 != -1) {
    lVar18 = (longlong)iVar12 * 0x188 + *(longlong *)&this->Instances;
    lVar19 = lVar18 + 0x10;
    if (lVar18 == 0) {
      lVar19 = 0;
    }
    if (lVar19 != 0) {
      iVar12 = (param_1->Channels).ArrayNum;
      if (((iVar12 != (param_1->Ids).ArrayNum) || (iVar12 != (param_1->Descriptions).ArrayNum)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Message.Channels.Num() == Message.Ids.Num() && Message.Channels.Num() == Message.Descriptions.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SessionServices\\Private\\TraceController.cpp"
                             ,0x87,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar11 = 0;
      local_68 = (longlong)(param_1->Channels).ArrayNum;
      if (0 < local_68) {
        local_88 = 0;
        local_80 = 0;
        do {
          this_00 = (TSet<TTuple<unsigned_int,FTraceStatus::FChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,FTraceStatus::FChannel,0>,FDefaultSetAllocator>
                     *)(lVar19 + 0x70);
          uVar16 = ~uVar11 >> 0x1f;
          uVar17 = 0;
          if ((int)uVar11 < (param_1->Ids).ArrayNum) {
            uVar17 = uVar16;
          }
          if ((uVar17 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_res18[0] = *(uint *)((param_1->Ids).AllocatorInstance.Data + local_88 * 4);
          if (*(int *)(lVar19 + 0x78) != *(int *)(lVar19 + 0xa4)) {
            lVar18 = lVar19 + 0xa8;
            if (*(longlong *)(lVar19 + 0xb0) != 0) {
              lVar18 = *(longlong *)(lVar19 + 0xb0);
            }
            iVar12 = *(int *)(lVar18 + (ulonglong)(*(int *)(lVar19 + 0xb8) - 1U & local_res18[0]) *
                                       4);
            if (iVar12 != -1) {
              do {
                if (*(uint *)((longlong)iVar12 * 0x38 + *(longlong *)&this_00->Elements) ==
                    local_res18[0]) goto LAB_148cf4cfa;
                iVar12 = *(int *)((longlong)iVar12 * 0x38 + 0x30 + *(longlong *)&this_00->Elements);
              } while (iVar12 != -1);
            }
          }
          local_70 = local_res18;
          TSet<TTuple<unsigned_int,FTraceStatus::FChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,FTraceStatus::FChannel,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<unsigned_int_const_&>_>(this_00,&local_res20,(bool *)&local_70);
          pFVar20 = (FScriptContainerElement *)
                    (*(longlong *)&this_00->Elements + (longlong)(int)local_res20.Key * 0x38 + 8);
          uVar17 = 0;
          if ((int)uVar11 < (param_1->Channels).ArrayNum) {
            uVar17 = uVar16;
          }
          if ((uVar17 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar14 = (param_1->Channels).AllocatorInstance.Data + local_80;
          if (pFVar20 != pFVar14) {
            iVar12 = *(int *)&pFVar14[8].field_0x0;
            pFVar15 = pFVar20 + 0xc;
            _Src = *(void **)&pFVar14->field_0x0;
            iVar2 = *(int *)pFVar15;
            *(int *)&pFVar20[8].field_0x0 = iVar12;
            if ((iVar12 == 0) && (iVar2 == 0)) {
              *(int *)pFVar15 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar12,iVar2,(ForAnyElementType *)pFVar20,iVar12,(int *)pFVar15);
              if (iVar12 != 0) {
                memcpy(*(void **)&pFVar20->field_0x0,_Src,(longlong)iVar12 * 2);
              }
            }
          }
          uVar17 = 0;
          if ((int)uVar11 < (param_1->Descriptions).ArrayNum) {
            uVar17 = uVar16;
          }
          if ((uVar17 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar14 = pFVar20 + 0x10;
          pFVar15 = (param_1->Descriptions).AllocatorInstance.Data + local_80;
          if (pFVar14 != pFVar15) {
            iVar12 = *(int *)&pFVar15[8].field_0x0;
            pFVar6 = pFVar20 + 0x1c;
            pFVar15 = *(FScriptContainerElement **)&pFVar15->field_0x0;
            iVar2 = *(int *)pFVar6;
            *(int *)&pFVar20[0x18].field_0x0 = iVar12;
            if ((iVar12 == 0) && (iVar2 == 0)) {
              *(int *)pFVar6 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar12,iVar2,(ForAnyElementType *)pFVar14,iVar12,(int *)pFVar6);
              if (iVar12 != 0) {
                memcpy(*(FScriptContainerElement **)&pFVar14->field_0x0,pFVar15,(longlong)iVar12 * 2
                      );
              }
            }
          }
          *(uint *)&pFVar20[0x20].field_0x0 = local_res18[0];
          pFVar20[0x24] = (FScriptContainerElement)0x0;
          pFVar15 = (param_1->ReadOnlyIds).AllocatorInstance.Data;
          pFVar14 = pFVar15 + (longlong)(param_1->ReadOnlyIds).ArrayNum * 4;
          for (; pFVar15 != pFVar14; pFVar15 = pFVar15 + 4) {
            if (*(uint *)pFVar15 == local_res18[0]) {
              FVar8 = (FScriptContainerElement)0x1;
              goto LAB_148cf4c03;
            }
          }
          FVar8 = (FScriptContainerElement)0x0;
LAB_148cf4c03:
          pFVar20[0x25] = FVar8;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &this->StatusReceivedEvent,(FWriteAccessScope *)&local_58);
          puVar1 = &(this->StatusReceivedEvent).field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + 1;
          bVar7 = false;
          uVar17 = *(int *)&(this->StatusReceivedEvent).field_0x10 - 1;
          if (-1 < (int)uVar17) {
            lVar18 = (longlong)(int)uVar17 << 4;
            bVar7 = false;
            do {
              uVar16 = 0;
              if ((int)uVar17 < *(int *)&(this->StatusReceivedEvent).field_0x10) {
                uVar16 = ~uVar17 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar3 = *(longlong *)&(this->StatusReceivedEvent).field_0x8;
              if (((*(int *)(lVar18 + 8 + lVar3) == 0) ||
                  (plVar4 = *(longlong **)(lVar18 + lVar3), plVar4 == (longlong *)0x0)) ||
                 (cVar10 = (**(code **)(*plVar4 + 0x68))(plVar4,lVar19,4,lVar19 + 0xf8),
                 cVar10 == '\0')) {
                bVar7 = true;
              }
              lVar18 = lVar18 + -0x10;
              uVar17 = uVar17 - 1;
            } while (-1 < (int)uVar17);
          }
          puVar1 = &(this->StatusReceivedEvent).field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          if (bVar7) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &this->StatusReceivedEvent,false);
          }
          if (local_58.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
          }
LAB_148cf4cfa:
          local_88 = local_88 + 1;
          local_80 = local_80 + 0x10;
          uVar11 = uVar11 + 1;
          SRWLock = local_60;
        } while (local_88 < local_68);
      }
      FTraceControllerCommands::OnChannelsDesc((FTraceControllerCommands *)(lVar19 + 0xf8),param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148cf4d66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// OnChannelsStatus @ 148cf4fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceController::OnChannelsStatus
          (FTraceController *this,FTraceControlChannelsStatus *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FMessageAddress *pFVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FTraceStatus *pFVar15;
  undefined1 *puVar16;
  int *piVar17;
  uint uVar18;
  uint *puVar20;
  longlong lVar21;
  FTraceStatus *pFVar22;
  uint uVar23;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_84;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FTraceStatus *pFVar19;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->InstancesLock);
  pFVar12 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
  uVar7 = FCrc::MemCrc_DEPRECATED(pFVar12,0x10,0);
  iVar8 = TSet<TTuple<FMessageAddress,FTraceController::FTracingInstance>,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMessageAddress>
                    ((TSet<TTuple<FMessageAddress,FTraceController::FTracingInstance>,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>,FDefaultSetAllocator>
                      *)&this->Instances,uVar7,pFVar12);
  if (iVar8 != -1) {
    pFVar15 = (FTraceStatus *)0x0;
    uVar7 = 0;
    lVar21 = (longlong)iVar8 * 0x188 + *(longlong *)&this->Instances;
    pFVar22 = (FTraceStatus *)(lVar21 + 0x10);
    if (lVar21 == 0) {
      pFVar22 = pFVar15;
    }
    if (pFVar22 != (FTraceStatus *)0x0) {
      uVar9 = 1;
      puVar3 = &(pFVar22->Channels).field_0x10;
      uVar14 = *(uint *)&(pFVar22->Channels).field_0x28;
      uVar18 = 0;
      uVar10 = uVar7;
      if (uVar14 != 0) {
        puVar20 = *(uint **)&(pFVar22->Channels).field_0x20;
        if (puVar20 == (uint *)0x0) {
          puVar20 = (uint *)puVar3;
        }
        uVar10 = *puVar20;
        pFVar19 = pFVar15;
        uVar18 = 0;
        uVar7 = 0;
        while (uVar10 == 0) {
          iVar8 = (int)pFVar15;
          uVar18 = (int)pFVar19 + 0x20;
          pFVar19 = (FTraceStatus *)(ulonglong)uVar18;
          uVar7 = iVar8 + 1;
          pFVar15 = (FTraceStatus *)(ulonglong)uVar7;
          uVar10 = uVar14;
          if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar7)
          goto LAB_148cf50fe;
          uVar10 = puVar20[(longlong)iVar8 + 1];
        }
        uVar9 = -uVar10 & uVar10;
        uVar2 = (ulonglong)uVar9 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_res20 = (int)lVar21;
        uVar10 = (uVar18 - 1) + local_res20;
        if ((int)uVar14 < (int)uVar10) {
          uVar10 = uVar14;
        }
      }
LAB_148cf50fe:
      uVar11 = *(uint *)&(pFVar22->Channels).field_0x28;
      uVar23 = uVar11 & 0xffffffe0;
      TStack_78._padding_ = CONCAT44(uVar9,uVar7);
      TStack_78.CurrentBitIndex = uVar10;
      TStack_78.UnvisitedBitMask = 0xffffffff;
      iVar8 = (int)uVar11 >> 5;
      TStack_78._28_4_ = uVar10;
      TStack_78.BaseBitIndex = uVar18;
      uStack_58 = CONCAT44(uStack_84,
                           *(int *)&(pFVar22->Channels).field_0x8 -
                           *(int *)&(pFVar22->Channels).field_0x34);
      TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
      if ((((int)uVar11 < 0) || ((int)uVar14 < (int)uVar11)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = *(uint *)&(pFVar22->Channels).field_0x28;
      if (uVar11 != uVar7) {
        puVar16 = *(undefined1 **)&(pFVar22->Channels).field_0x20;
        if (puVar16 == (undefined1 *)0x0) {
          puVar16 = puVar3;
        }
        uVar14 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar8 * 4);
        while (uVar14 == 0) {
          lVar21 = (longlong)iVar8;
          uVar23 = uVar23 + 0x20;
          iVar8 = iVar8 + 1;
          uVar11 = uVar7;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
          goto LAB_148cf5210;
          uVar14 = *(uint *)(puVar16 + lVar21 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        uVar11 = (int)lVar21 + -1 + uVar23;
        if ((int)uVar7 < (int)uVar11) {
          uVar11 = uVar7;
        }
      }
LAB_148cf5210:
      while( true ) {
        if (*(int *)&(pFVar22->Channels).field_0x8 - *(int *)&(pFVar22->Channels).field_0x34 !=
            (int)uStack_58) {
          `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FTraceStatus::FChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if ((TStack_78.CurrentBitIndex == uVar11) &&
           (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) break;
        pFVar13 = (param_1->EnabledIds).AllocatorInstance.Data;
        piVar17 = (int *)((longlong)TStack_78.CurrentBitIndex * 0x38 +
                         *(longlong *)&pFVar22->Channels);
        pFVar1 = pFVar13 + (longlong)(param_1->EnabledIds).ArrayNum * 4;
        if (pFVar13 != pFVar1) {
          do {
            if (*(int *)pFVar13 == *piVar17) {
              uVar6 = 1;
              goto LAB_148cf5265;
            }
            pFVar13 = pFVar13 + 4;
          } while (pFVar13 != pFVar1);
        }
        uVar6 = 0;
LAB_148cf5265:
        *(undefined1 *)(piVar17 + 0xb) = uVar6;
        TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
      }
      TMulticastDelegate<void___cdecl(FTraceStatus_const_&,enum_FTraceStatus::EUpdateType,ITraceControllerCommands_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->StatusReceivedEvent,pFVar22,ChannelsStatus,
                  (ITraceControllerCommands *)(pFVar22 + 1));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148cf52c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->InstancesLock);
  return;
}

// OnDiscoveryResponse @ 148cf52e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceController::OnDiscoveryResponse
          (FTraceController *this,FTraceControlDiscovery *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FTracingInstance *pFVar1;
  int iVar2;
  atomic<int> aVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [8];
  atomic<int> aVar8;
  FMessageAddress *pFVar9;
  FTracingInstance *pFVar10;
  undefined8 *puVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  undefined1 auStackY_218 [32];
  undefined1 local_1e8 [8];
  TSharedPtr<IMessageBus,1> local_1e0;
  FGuid local_1c8;
  TReferenceControllerBase<1> local_1b8;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined2 local_198;
  undefined1 local_196;
  undefined4 local_195;
  undefined1 local_191;
  void *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  FChannelPreset *local_158;
  undefined8 local_150;
  undefined1 local_148 [24];
  undefined8 uStack_130;
  void *local_128;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  void *local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [104];
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1e8 = (undefined1  [8])param_2;
  AcquireSRWLockExclusive((PSRWLOCK)&this->InstancesLock);
  pTVar12 = (this->MessageBus).WeakReferenceCount.ReferenceController;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar12->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148cf5345;
      }
      LOCK();
      aVar8 = pTVar12->SharedReferenceCount;
      bVar13 = aVar3 == aVar8;
      if (bVar13) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar8 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar8;
    } while (!bVar13);
    pFVar1 = (FTracingInstance *)(this->MessageBus).Object;
    if (pFVar1 != (FTracingInstance *)0x0) {
      pFVar9 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
      pFVar10 = TMapBase<FMessageAddress,FTraceController::FTracingInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>_>
                ::Find((TMapBase<FMessageAddress,FTraceController::FTracingInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>_>
                        *)&this->Instances,pFVar9);
      if (pFVar10 == (FTracingInstance *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
        puVar11 = (undefined8 *)(**(code **)((longlong)*param_2->Object + 0x48))();
        local_1c8._0_8_ = *puVar11;
        local_1c8._8_8_ = puVar11[1];
        local_11c = 0x80;
        local_148._16_8_ = 0;
        uStack_130 = 0;
        local_1b8._padding_ = 0;
        local_1b8.SharedReferenceCount = (atomic<int>)0x0;
        local_1b8.WeakReferenceCount = (atomic<int>)0x0;
        local_1a8 = 0;
        local_1a0 = 0;
        local_190 = (void *)0x0;
        local_188 = 0;
        local_180 = 0;
        local_178 = 0;
        local_170 = 0;
        local_168 = 0;
        local_158 = (FChannelPreset *)0x0;
        local_150 = 0;
        local_148._0_8_ = (FScriptContainerElement *)0x0;
        local_148._8_8_ = 0;
        local_128 = (void *)0x0;
        local_120 = 0;
        local_114 = 0;
        local_108 = (void *)0x0;
        local_100 = 0;
        local_d0 = 0;
        local_195 = 0;
        local_191 = 0;
        local_160 = 0;
        local_110 = 0;
        local_fc = 0;
        uStack_f4 = 0;
        local_dc = 0;
        local_ec = 0;
        uStack_e4 = 0;
        local_d4 = 0;
        local_c8 = 0;
        local_198 = 0;
        local_196 = 0;
        local_118 = 0xffffffff;
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
        local_1e0.Object = (IMessageBus *)pFVar1;
        local_1e0.SharedReferenceCount.ReferenceController = pTVar12;
        FTraceControllerCommands::FTraceControllerCommands
                  ((FTraceControllerCommands *)local_c0,(TSharedPtr<IMessageBus,1> *)(local_1e8 + 8)
                   ,(FMessageAddress *)&local_1c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
        auVar7 = local_1e8;
        local_1e0.Object = (IMessageBus *)(**(code **)(**(longlong **)local_1e8 + 0x48))();
        local_1e0.SharedReferenceCount.ReferenceController = &local_1b8;
        TSet<TTuple<FMessageAddress,FTraceController::FTracingInstance>,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FMessageAddress_const_&,FTraceController::FTracingInstance_&&>_>
                  ((TSet<TTuple<FMessageAddress,FTraceController::FTracingInstance>,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>,FDefaultSetAllocator>
                    *)&this->Instances,
                   (TPairInitializer<FMessageAddress_const_&,FTraceController::FTracingInstance_&&>
                    *)local_1e8,(bool *)(local_1e8 + 8));
        local_50 = 0;
        local_c0._0_8_ = &___7FTraceControllerCommands__6B_;
        pFVar10 = (FTracingInstance *)
                  (*(longlong *)&this->Instances + (longlong)(int)local_1e8._0_4_ * 0x188 + 0x10);
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
        TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_c0 + 0x28));
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_c0._32_8_);
        local_c0._0_8_ = &___7ITraceControllerCommands__6B_;
        local_100 = 0;
        if (local_108 != (void *)0x0) {
          FMemory::Free(local_108);
        }
        TSparseArray<TSparseSetElement<TTuple<unsigned_int,FTraceStatus::FChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FTraceStatus::FChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_148,0,local_148._8_4_);
        iVar2 = SUB84(local_148._8_8_,4);
        local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
        if (iVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,0,(ForAnyElementType *)local_148,0,(int *)(local_148 + 0xc));
        }
        local_118 = 0xffffffff;
        local_114 = 0;
        local_120 = 0;
        if (0x80 < local_11c) {
          local_11c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10),0);
        }
        if (local_128 != (void *)0x0) {
          FMemory::Free(local_128);
        }
        if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_148._0_8_);
        }
        DestructItems<FTraceStatus::FChannelPreset,int>(local_158,(int)local_150);
        if (local_158 != (FChannelPreset *)0x0) {
          FMemory::Free(local_158);
        }
        if (local_190 != (void *)0x0) {
          FMemory::Free(local_190);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
        local_1e0.Object = (IMessageBus *)&param_1->InstanceId;
        local_1e0.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)(**(code **)(**(longlong **)auVar7 + 0x48))();
        TSet<TTuple<FGuid,FMessageAddress>,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FGuid_const_&,FMessageAddress_const_&>_>
                  ((TSet<TTuple<FGuid,FMessageAddress>,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>,FDefaultSetAllocator>
                    *)&this->InstanceToAddress,
                   (TPairInitializer<FGuid_const_&,FMessageAddress_const_&> *)local_1e8,
                   (bool *)(local_1e8 + 8));
      }
      UpdateStatus((FTraceControlStatus *)param_1,&pFVar10->Status);
      uVar4 = (param_1->SessionId).B;
      uVar5 = (param_1->SessionId).C;
      uVar6 = (param_1->SessionId).D;
      (pFVar10->Status).SessionId.A = (param_1->SessionId).A;
      (pFVar10->Status).SessionId.B = uVar4;
      (pFVar10->Status).SessionId.C = uVar5;
      (pFVar10->Status).SessionId.D = uVar6;
      uVar4 = (param_1->InstanceId).B;
      uVar5 = (param_1->InstanceId).C;
      uVar6 = (param_1->InstanceId).D;
      (pFVar10->Status).InstanceId.A = (param_1->InstanceId).A;
      (pFVar10->Status).InstanceId.B = uVar4;
      (pFVar10->Status).InstanceId.C = uVar5;
      (pFVar10->Status).InstanceId.D = uVar6;
      TMulticastDelegate<void___cdecl(FTraceStatus_const_&,enum_FTraceStatus::EUpdateType,ITraceControllerCommands_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->StatusReceivedEvent,&pFVar10->Status,ChannelsStatus|ChannelsDesc|Status,
                  (ITraceControllerCommands *)&pFVar10->Commands);
    }
  }
LAB_148cf5345:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  ReleaseSRWLockExclusive((PSRWLOCK)&this->InstancesLock);
  return;
}

// OnNotification @ 148cf5690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceController::OnNotification(FTraceController *this,FMessageBusNotification *param_1)

{
  uint uVar1;
  int iVar2;
  TSet<TTuple<FGuid,FMessageAddress>,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>,FDefaultSetAllocator>
  *pTVar3;
  TMap<FGuid,FMessageAddress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>_>
  *this_00;
  undefined1 auStack_98 [32];
  undefined1 local_78 [72];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_1->NotificationType == Unregistered) {
    AcquireSRWLockExclusive((PSRWLOCK)&this->InstancesLock);
    if (*(int *)&(this->Instances).field_0x8 != *(int *)&(this->Instances).field_0x34) {
      uVar1 = FCrc::MemCrc_DEPRECATED(&param_1->RegistrationAddress,0x10,0);
      iVar2 = TSet<TTuple<FMessageAddress,FTraceController::FTracingInstance>,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>,FDefaultSetAllocator>
              ::RemoveImpl<FMessageAddress>
                        ((TSet<TTuple<FMessageAddress,FTraceController::FTracingInstance>,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>,FDefaultSetAllocator>
                          *)&this->Instances,uVar1,&param_1->RegistrationAddress);
      if (0 < iVar2) {
        this_00 = &this->InstanceToAddress;
        pTVar3 = (TSet<TTuple<FGuid,FMessageAddress>,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>,FDefaultSetAllocator>
                  *)TMapBase<FGuid,FMessageAddress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>_>
                    ::FilterByPredicate<_FTraceController::OnNotification_::__l8::<lambda_1>_>
                              ((TMapBase<FGuid,FMessageAddress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>_>
                                *)this_00,
                               (TMap<FGuid,FMessageAddress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>_>
                                *)local_78,(<lambda_1>)param_1);
        if ((TSet<TTuple<FGuid,FMessageAddress>,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>,FDefaultSetAllocator>
             *)this_00 != pTVar3) {
          TSet<TTuple<FGuid,FMessageAddress>,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>,FDefaultSetAllocator>
          ::
          Move<TSet<TTuple<FGuid,FMessageAddress>,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>,FDefaultSetAllocator>_>
                    ((TSet<TTuple<FGuid,FMessageAddress>,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>,FDefaultSetAllocator>
                      *)this_00,pTVar3);
        }
        local_30 = 0;
        if ((void *)local_78._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_78._64_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<FGuid,FMessageAddress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMessageAddress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FGuid,FMessageAddress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_78);
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->InstancesLock);
  }
  return;
}

// OnSettings @ 148cf57c0

/* WARNING: Removing unreachable block (ram,0x000148cf5a16) */
/* WARNING: Removing unreachable block (ram,0x000148cf5a25) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceController::OnSettings
          (FTraceController *this,FTraceControlSettings *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FMessageAddress *pFVar10;
  FPlatformRWLock *SRWLock;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FTraceStatus *pFVar13;
  undefined1 local_res18 [8];
  FPlatformRWLock *local_res20;
  FString local_68;
  FString local_58;
  FScriptContainerElement local_48;
  
  SRWLock = &this->InstancesLock;
  local_res20 = SRWLock;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pFVar10 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
  uVar7 = FCrc::MemCrc_DEPRECATED(pFVar10,0x10,0);
  iVar8 = TSet<TTuple<FMessageAddress,FTraceController::FTracingInstance>,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMessageAddress>
                    ((TSet<TTuple<FMessageAddress,FTraceController::FTracingInstance>,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>,FDefaultSetAllocator>
                      *)&this->Instances,uVar7,pFVar10);
  if (iVar8 != -1) {
    lVar12 = (longlong)iVar8 * 0x188 + *(longlong *)&this->Instances;
    pFVar13 = (FTraceStatus *)(lVar12 + 0x10);
    if (lVar12 == 0) {
      pFVar13 = (FTraceStatus *)0x0;
    }
    if (pFVar13 != (FTraceStatus *)0x0) {
      (pFVar13->Settings).bUseImportantCache = param_1->bUseImportantCache;
      (pFVar13->Settings).bUseWorkerThread = param_1->bUseWorkerThread;
      (pFVar13->Settings).TailSizeBytes = param_1->TailSizeBytes;
      DestructItems<FTraceStatus::FChannelPreset,int>
                ((FChannelPreset *)(pFVar13->Settings).ChannelPresets.AllocatorInstance.Data,
                 (pFVar13->Settings).ChannelPresets.ArrayNum);
      piVar1 = &(pFVar13->Settings).ChannelPresets.ArrayMax;
      (pFVar13->Settings).ChannelPresets.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&(pFVar13->Settings).ChannelPresets.AllocatorInstance,0,piVar1);
      }
      iVar8 = (param_1->ChannelPresets).ArrayNum;
      pFVar11 = (param_1->ChannelPresets).AllocatorInstance.Data;
      pFVar2 = pFVar11 + (longlong)iVar8 * 0x28;
      while( true ) {
        if ((param_1->ChannelPresets).ArrayNum != iVar8) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FTraceChannelPreset_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res18);
        }
        if (pFVar11 == pFVar2) break;
        FVar3 = (FScriptContainerElement)pFVar11[0x20].field_0x0;
        ::FString::FString(&local_68,(FString *)pFVar11);
        ::FString::FString(&local_58,(FString *)(pFVar11 + 0x10));
        pFVar4 = (pFVar13->Settings).ChannelPresets.AllocatorInstance.Data;
        local_48 = FVar3;
        if (((pFVar4 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 < pFVar4 + (longlong)*piVar1 * 0x28)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (pFVar13->Settings).ChannelPresets.ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&(pFVar13->Settings).ChannelPresets.AllocatorInstance,piVar1);
        }
        (pFVar13->Settings).ChannelPresets.ArrayNum = iVar9 + 1;
        pFVar4 = (pFVar13->Settings).ChannelPresets.AllocatorInstance.Data;
        *(undefined8 *)(pFVar4 + (longlong)iVar9 * 0x28) = 0;
        pFVar4 = pFVar4 + (longlong)iVar9 * 0x28;
        *(FScriptContainerElement **)pFVar4 = local_68.Data.AllocatorInstance.Data;
        *(int *)(pFVar4 + 8) = local_68.Data.ArrayNum;
        *(int *)(pFVar4 + 0xc) = local_68.Data.ArrayMax;
        *(undefined8 *)(pFVar4 + 0x10) = 0;
        *(FScriptContainerElement **)(pFVar4 + 0x10) = local_58.Data.AllocatorInstance.Data;
        *(int *)(pFVar4 + 0x18) = local_58.Data.ArrayNum;
        *(int *)(pFVar4 + 0x1c) = local_58.Data.ArrayMax;
        pFVar4[0x20] = local_48;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar11 = pFVar11 + 0x28;
      }
      TMulticastDelegate<void___cdecl(FTraceStatus_const_&,enum_FTraceStatus::EUpdateType,ITraceControllerCommands_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->StatusReceivedEvent,pFVar13,Settings,
                  (ITraceControllerCommands *)(pFVar13 + 1));
      SRWLock = local_res20;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148cf5a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// OnStatus @ 148cf5aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceController::OnStatus
          (FTraceController *this,FTraceControlStatus *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  uint uVar1;
  int iVar2;
  FMessageAddress *pFVar3;
  longlong lVar4;
  FTraceStatus *pFVar5;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->InstancesLock);
  pFVar3 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
  uVar1 = FCrc::MemCrc_DEPRECATED(pFVar3,0x10,0);
  iVar2 = TSet<TTuple<FMessageAddress,FTraceController::FTracingInstance>,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMessageAddress>
                    ((TSet<TTuple<FMessageAddress,FTraceController::FTracingInstance>,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>,FDefaultSetAllocator>
                      *)&this->Instances,uVar1,pFVar3);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x188 + *(longlong *)&this->Instances;
    pFVar5 = (FTraceStatus *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      pFVar5 = (FTraceStatus *)0x0;
    }
    if (pFVar5 != (FTraceStatus *)0x0) {
      UpdateStatus(param_1,pFVar5);
      TMulticastDelegate<void___cdecl(FTraceStatus_const_&,enum_FTraceStatus::EUpdateType,ITraceControllerCommands_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->StatusReceivedEvent,pFVar5,Status,(ITraceControllerCommands *)(pFVar5 + 1))
      ;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148cf5b57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->InstancesLock);
  return;
}

// OnStatusReceived @ 148cf5b70

/* WARNING: Enum "Type": Some values do not have unique names */

FStatusRecievedEvent * __thiscall FTraceController::OnStatusReceived(FTraceController *this)

{
  return &this->StatusReceivedEvent;
}

// SendChannelUpdateRequest @ 148cf7660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTraceController::SendChannelUpdateRequest(FTraceController *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  code *pcVar5;
  TMap<FMessageAddress,FTraceController::FTracingInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>_>
  *pTVar6;
  bool bVar7;
  int *piVar8;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar9;
  UScriptStruct *pUVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  FMessageAddress *pFVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_f8;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_e8;
  TMap<FMessageAddress,FTraceController::FTracingInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>_>
  *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  FDateTime local_a8;
  FTimespan local_a0;
  FPlatformRWLock *local_98;
  TMap<FMessageAddress,FTraceController::FTracingInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  TSharedPtr<IMessageAttachment,1> local_60 [2];
  
  local_98 = &this->InstancesLock;
  AcquireSRWLockShared((PSRWLOCK)local_98);
  puVar2 = &(this->Instances).field_0x10;
  iStack_d0 = 0;
  iVar3 = *(int *)&(this->Instances).field_0x28;
  local_d8 = &this->Instances;
  local_b8 = 0;
  uStack_cc = 1;
  iStack_bc = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->Instances).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar11 = (longlong)iStack_d0;
      local_b8 = local_b8 + 0x20;
      iStack_d0 = iStack_d0 + 1;
      iStack_bc = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d0) goto LAB_148cf771e;
      uVar12 = puVar16[lVar11 + 1];
    }
    uStack_cc = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_cc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iStack_bc = local_res18 + -1 + local_b8;
    if (iVar3 < iStack_bc) {
      iStack_bc = iVar3;
    }
  }
LAB_148cf771e:
  iStack_b0 = *(int *)&(this->Instances).field_0x8 - *(int *)&(this->Instances).field_0x34;
  uVar12 = *(uint *)&(this->Instances).field_0x28;
  uStack_c0 = 0xffffffff;
  uVar17 = uVar12 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uStack_cc,iStack_d0);
  TStack_88.CurrentBitIndex = iStack_bc;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_88._28_4_ = iStack_bc;
  TStack_88.BaseBitIndex = local_b8;
  uStack_68 = CONCAT44(uStack_ac,iStack_b0);
  local_c8 = puVar2;
  iStack_b4 = iStack_bc;
  local_90 = local_d8;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->Instances).field_0x28;
  if (uVar12 != uVar4) {
    puVar15 = *(undefined1 **)&(this->Instances).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_148cf7830;
      uVar12 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    uVar12 = local_res20 + -1 + uVar17;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_148cf7830:
  while( true ) {
    pTVar6 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMessageAddress,FTraceController::FTracingInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_88.CurrentBitIndex == uVar12) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar6 == &this->Instances)) break;
    pFVar14 = (FMessageAddress *)(*(longlong *)pTVar6 + (longlong)TStack_88.CurrentBitIndex * 0x188)
    ;
    piVar8 = FMemory::Malloc(4,0);
    *piVar8 = 0;
    *piVar8 = pFVar14[8].UniqueId.C - pFVar14[0xb].UniqueId.B;
    if (((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = (this->MessageEndpoint).Object;
    local_a0.Ticks = 0;
    local_a8.Ticks = 0x2bca2875f4373fff;
    local_e8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Array.ArrayNum = 0;
    local_e8.Array.ArrayMax = 0;
    pTVar9 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add(&local_e8,pFVar14);
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = (pTVar9->Array).ArrayNum;
    lVar11 = (longlong)local_f8.ArrayNum;
    _Src = (pTVar9->Array).AllocatorInstance.Data;
    if (local_f8.ArrayNum == 0) {
      local_f8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_f8.ArrayNum,0,&local_f8.AllocatorInstance,local_f8.ArrayNum,
                 &local_f8.ArrayMax);
      memcpy(local_f8.AllocatorInstance.Data,_Src,lVar11 << 4);
    }
    local_60[0].Object = (IMessageAttachment *)0x0;
    local_60[0].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pUVar10 = FTraceControlChannelsPing::StaticStruct();
    FMessageEndpoint::Send(this_00,piVar8,pUVar10,None,local_60,&local_f8,&local_a0,&local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].SharedReferenceCount.ReferenceController);
    if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    if (local_e8.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Array.AllocatorInstance.Data);
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
                    /* WARNING: Could not recover jumptable at 0x000148cf79e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)local_98);
  return;
}

// SendDiscoveryRequest @ 148cf79f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTraceController::SendDiscoveryRequest(FTraceController *this)

{
  FMessageEndpoint *this_00;
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  UScriptStruct *pUVar4;
  FDateTime local_res8;
  FTimespan local_res10;
  
  puVar3 = FMemory::Malloc(0x20,0);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->MessageEndpoint).Object;
  local_res8.Ticks = 0x2bca2875f4373fff;
  local_res10.Ticks = 0;
  pUVar4 = FTraceControlDiscoveryPing::StaticStruct();
  FMessageEndpoint::Publish(this_00,puVar3,pUVar4,Network,&local_res10,&local_res8);
  return;
}

// SendDiscoveryRequest @ 148cf7ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceController::SendDiscoveryRequest(FTraceController *this,FGuid *param_1,FGuid *param_2)

{
  FMessageEndpoint *this_00;
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  UScriptStruct *pUVar5;
  FDateTime local_res8;
  FTimespan local_res10;
  
  puVar4 = FMemory::Malloc(0x20,0);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  uVar2 = *(undefined8 *)&param_1->C;
  *puVar4 = *(undefined8 *)param_1;
  puVar4[1] = uVar2;
  uVar2 = *(undefined8 *)&param_2->C;
  puVar4[2] = *(undefined8 *)param_2;
  puVar4[3] = uVar2;
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->MessageEndpoint).Object;
  local_res8.Ticks = 0x2bca2875f4373fff;
  local_res10.Ticks = 0;
  pUVar5 = FTraceControlDiscoveryPing::StaticStruct();
  FMessageEndpoint::Publish(this_00,puVar4,pUVar5,Network,&local_res10,&local_res8);
  return;
}

// SendSettingsUpdateRequest @ 148cf89c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTraceController::SendSettingsUpdateRequest(FTraceController *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  code *pcVar6;
  TMap<FMessageAddress,FTraceController::FTracingInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>_>
  *pTVar7;
  bool bVar8;
  void *pvVar9;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar10;
  UScriptStruct *pUVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  FDateTime local_res20;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_e8;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_d8;
  TMap<FMessageAddress,FTraceController::FTracingInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  FTimespan local_98;
  TMap<FMessageAddress,FTraceController::FTracingInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  TSharedPtr<IMessageAttachment,1> local_60 [2];
  
  local_c8 = &this->Instances;
  uStack_bc = 1;
  iStack_c0 = 0;
  local_a8 = 0;
  puVar2 = &(this->Instances).field_0x10;
  iVar3 = *(int *)&(this->Instances).field_0x28;
  iStack_ac = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->Instances).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar15 = *puVar17;
    local_a8 = 0;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      iStack_ac = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_148cf8a5d;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_bc = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_bc * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res10 = (int)lVar12;
    iStack_ac = local_res10 + -1 + local_a8;
    if (iVar3 < iStack_ac) {
      iStack_ac = iVar3;
    }
  }
LAB_148cf8a5d:
  uVar15 = *(uint *)&(this->Instances).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_a0 = *(int *)&(this->Instances).field_0x8 - *(int *)&(this->Instances).field_0x34;
  uStack_b0 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_bc,iStack_c0);
  TStack_88.CurrentBitIndex = iStack_ac;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_88._28_4_ = iStack_ac;
  TStack_88.BaseBitIndex = local_a8;
  uStack_68 = CONCAT44(uStack_9c,iStack_a0);
  local_b8 = puVar2;
  iStack_a4 = iStack_ac;
  local_90 = local_c8;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->Instances).field_0x28;
  if (uVar15 != uVar4) {
    puVar16 = *(undefined1 **)&(this->Instances).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_148cf8b60;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    uVar15 = local_res18 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_148cf8b60:
  while( true ) {
    pTVar7 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMessageAddress,FTraceController::FTracingInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar12 = (longlong)TStack_88.CurrentBitIndex;
    if (((TStack_88.CurrentBitIndex == uVar15) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar7 == &this->Instances)) break;
    lVar5 = *(longlong *)pTVar7;
    if (((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_00 = (this->MessageEndpoint).Object;
    pvVar9 = FMemory::Malloc(1,0);
    local_res20.Ticks = 0x2bca2875f4373fff;
    local_98.Ticks = 0;
    local_d8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Array.ArrayNum = 0;
    local_d8.Array.ArrayMax = 0;
    pTVar10 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add
                        (&local_d8,(FMessageAddress *)(lVar12 * 0x188 + lVar5));
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = (pTVar10->Array).ArrayNum;
    lVar12 = (longlong)local_e8.ArrayNum;
    _Src = (pTVar10->Array).AllocatorInstance.Data;
    if (local_e8.ArrayNum == 0) {
      local_e8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_e8.ArrayNum,0,&local_e8.AllocatorInstance,local_e8.ArrayNum,
                 &local_e8.ArrayMax);
      memcpy(local_e8.AllocatorInstance.Data,_Src,lVar12 << 4);
    }
    local_60[0].Object = (IMessageAttachment *)0x0;
    local_60[0].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pUVar11 = FTraceControlSettingsPing::StaticStruct();
    FMessageEndpoint::Send(this_00,pvVar9,pUVar11,None,local_60,&local_e8,&local_98,&local_res20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].SharedReferenceCount.ReferenceController);
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    if (local_d8.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Array.AllocatorInstance.Data);
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  return;
}

// SendStatusUpdateRequest @ 148cf8d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTraceController::SendStatusUpdateRequest(FTraceController *this)

{
  FMessageEndpoint *this_00;
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  UScriptStruct *pUVar4;
  FDateTime local_res8;
  FTimespan local_res10;
  
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->MessageEndpoint).Object;
  pvVar3 = FMemory::Malloc(1,0);
  local_res10.Ticks = 0;
  local_res8.Ticks = 0x2bca2875f4373fff;
  pUVar4 = FTraceControlStatusPing::StaticStruct();
  FMessageEndpoint::Publish(this_00,pvVar3,pUVar4,Network,&local_res10,&local_res8);
  return;
}

// UpdateStatus @ 148cfb790

void __cdecl FTraceController::UpdateStatus(FTraceControlStatus *param_1,FTraceStatus *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  param_2->TraceSystemStatus = param_1->TraceSystemStatus;
  (param_2->StatusTimestamp).Ticks = (param_1->StatusTimestamp).Ticks;
  param_2->bIsTracing = param_1->bIsTracing;
  ::FString::operator=(&param_2->Endpoint,&param_1->Endpoint);
  uVar1 = (param_1->SessionGuid).B;
  uVar2 = (param_1->SessionGuid).C;
  uVar3 = (param_1->SessionGuid).D;
  (param_2->SessionGuid).A = (param_1->SessionGuid).A;
  (param_2->SessionGuid).B = uVar1;
  (param_2->SessionGuid).C = uVar2;
  (param_2->SessionGuid).D = uVar3;
  uVar1 = (param_1->TraceGuid).B;
  uVar2 = (param_1->TraceGuid).C;
  uVar3 = (param_1->TraceGuid).D;
  (param_2->TraceGuid).A = (param_1->TraceGuid).A;
  (param_2->TraceGuid).B = uVar1;
  (param_2->TraceGuid).C = uVar2;
  (param_2->TraceGuid).D = uVar3;
  param_2->bIsPaused = param_1->bIsPaused;
  param_2->bAreStatNamedEventsEnabled = param_1->bAreStatNamedEventsEnabled;
  (param_2->Stats).BytesSent = param_1->BytesSent;
  (param_2->Stats).MemoryUsed = param_1->MemoryUsed;
  (param_2->Stats).BytesTraced = param_1->BytesTraced;
  (param_2->Stats).CacheAllocated = param_1->CacheAllocated;
  (param_2->Stats).CacheUsed = param_1->CacheUsed;
  (param_2->Stats).CacheWaste = param_1->CacheWaste;
  return;
}

// WithInstance @ 148cfb840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceController::WithInstance
          (FTraceController *this,FGuid *param_1,
          TFunction<void___cdecl(FTraceStatus_const_&,ITraceControllerCommands_&)> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  ulong64 uVar4;
  FTracingInstance *pFVar5;
  undefined8 uVar6;
  longlong *plVar7;
  FMessageAddress *pFVar8;
  
  AcquireSRWLockShared((PSRWLOCK)&this->InstancesLock);
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,FMessageAddress>,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FMessageAddress>,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>,FDefaultSetAllocator>
                      *)&this->InstanceToAddress,(uint)uVar4,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&this->InstanceToAddress + (longlong)iVar3 * 0x28;
    pFVar8 = (FMessageAddress *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      pFVar8 = (FMessageAddress *)0x0;
    }
    if (pFVar8 != (FMessageAddress *)0x0) {
      pFVar5 = TMapBase<FMessageAddress,FTraceController::FTracingInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>_>
               ::Find((TMapBase<FMessageAddress,FTraceController::FTracingInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>_>
                       *)&this->Instances,pFVar8);
      if (pFVar5 != (FTracingInstance *)0x0) {
        UE::Core::Private::Function::CheckCallable(*(void **)param_2);
        pcVar2 = *(code **)param_2;
        plVar7 = (longlong *)&param_2->field_0x10;
        if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
          plVar7 = *(longlong **)&param_2->field_0x28;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        (*pcVar2)(uVar6,pFVar5,&pFVar5->Commands);
      }
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->InstancesLock);
  if (*(longlong *)param_2 != 0) {
    plVar7 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

