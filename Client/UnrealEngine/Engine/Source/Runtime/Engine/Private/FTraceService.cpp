// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// <lambda_invoker_cdecl> @ 1488a3e60

bool __cdecl
`FTraceService::OnChannelsPing'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FChannelInfo *param_1,void *param_2)

{
  bool bVar1;
  undefined1 local_res18 [16];
  
  bVar1 = operator()(local_res18,param_1,param_2);
  return bVar1;
}

// FTraceService @ 1488af830

/* WARNING: Enum "Type": Some values do not have unique names */

FTraceService * __thiscall
FTraceService::FTraceService(FTraceService *this,TSharedPtr<IMessageBus,1> *param_1)

{
  TSharedPtr<FMessageEndpoint,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  IMessageBus *pIVar4;
  TReferenceControllerBase<1> *pTVar5;
  FMessageEndpoint *pFVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  FGuid *pFVar13;
  FTaskGraphInterface *pFVar14;
  TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *pTVar15;
  FTraceService *pFVar16;
  TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *pTVar17;
  UScriptStruct *pUVar18;
  FTopLevelAssetPath *pFVar19;
  longlong lVar20;
  TRange<EMessageScope> local_res8 [2];
  TRange<EMessageScope> local_res10 [2];
  TRange<EMessageScope> local_res18 [2];
  TRange<EMessageScope> local_res20 [2];
  undefined1 local_358 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_340;
  ForAnyElementType FStack_338;
  int local_330;
  ForAnyElementType local_328;
  undefined8 local_320;
  bool local_318;
  FName local_314;
  Type local_30c;
  TRange<EMessageScope> local_308;
  TRange<EMessageScope> local_304;
  TRange<EMessageScope> local_300;
  TRange<EMessageScope> local_2fc;
  TRange<EMessageScope> local_2f8;
  TRange<EMessageScope> local_2f4;
  TRange<EMessageScope> local_2f0;
  TRange<EMessageScope> local_2ec;
  TRange<EMessageScope> local_2e8;
  TRange<EMessageScope> local_2e4;
  TRange<EMessageScope> local_2e0 [2];
  TSharedPtr<IMessageHandler,1> local_2d8;
  TSharedPtr<IMessageHandler,1> local_2c8;
  TSharedPtr<IMessageHandler,1> local_2b8;
  TSharedPtr<IMessageHandler,1> local_2a8;
  TSharedPtr<IMessageHandler,1> local_298;
  TSharedPtr<IMessageHandler,1> local_288;
  TSharedPtr<IMessageHandler,1> local_278;
  TSharedPtr<IMessageHandler,1> local_268;
  TSharedPtr<IMessageHandler,1> local_258;
  TSharedPtr<IMessageHandler,1> local_248;
  TSharedPtr<IMessageHandler,1> local_238;
  TSharedPtr<IMessageHandler,1> local_228;
  TSharedPtr<IMessageHandler,1> local_218;
  TSharedPtr<IMessageHandler,1> local_208;
  TSharedPtr<IMessageHandler,1> local_1f8;
  FName local_1e8;
  TSharedPtr<FMessageEndpoint,1> local_1e0;
  TRawPtrProxy<TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService>_> local_1d0;
  TRawPtrProxy<TRawMessageHandler<FTraceControlChannelsSet,FTraceService>_> local_1c8;
  TRawPtrProxy<TRawMessageHandler<FTraceControlStop,FTraceService>_> local_1c0;
  TRawPtrProxy<TRawMessageHandler<FTraceControlSend,FTraceService>_> local_1b8;
  TRawPtrProxy<TRawMessageHandler<FTraceControlFile,FTraceService>_> local_1b0;
  TRawPtrProxy<TRawMessageHandler<FTraceControlSnapshotSend,FTraceService>_> local_1a8;
  TRawPtrProxy<TRawMessageHandler<FTraceControlSnapshotFile,FTraceService>_> local_1a0;
  TRawPtrProxy<TRawMessageHandler<FTraceControlPause,FTraceService>_> local_198;
  TRawPtrProxy<TRawMessageHandler<FTraceControlResume,FTraceService>_> local_190;
  TRawPtrProxy<TRawMessageHandler<FTraceControlBookmark,FTraceService>_> local_188;
  TRawPtrProxy<TRawMessageHandler<FTraceControlScreenshot,FTraceService>_> local_180;
  TRawPtrProxy<TRawMessageHandler<FTraceControlStatusPing,FTraceService>_> local_178;
  TRawPtrProxy<TRawMessageHandler<FTraceControlSettingsPing,FTraceService>_> local_170;
  TRawPtrProxy<TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService>_> local_168;
  TRawPtrProxy<TRawMessageHandler<FTraceControlChannelsPing,FTraceService>_> local_160;
  FDestructionSentinel local_158;
  FTopLevelAssetPath local_140;
  FGuid local_130;
  FTopLevelAssetPath local_120;
  FTopLevelAssetPath local_110;
  FTopLevelAssetPath local_100;
  FTopLevelAssetPath local_f0;
  FTopLevelAssetPath local_e0;
  FTopLevelAssetPath local_d0;
  FTopLevelAssetPath local_c0;
  FTopLevelAssetPath local_b0;
  FTopLevelAssetPath local_a0;
  FTopLevelAssetPath local_90;
  FTopLevelAssetPath local_80;
  FTopLevelAssetPath local_70;
  FTopLevelAssetPath local_60;
  FTopLevelAssetPath local_50;
  
  pTVar17 = (TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *)0x0;
  pTVar1 = &this->MessageEndpoint;
  (this->SessionId).A = 0;
  (this->SessionId).B = 0;
  (this->SessionId).C = 0;
  (this->SessionId).D = 0;
  (this->InstanceId).A = 0;
  (this->InstanceId).B = 0;
  (this->InstanceId).C = 0;
  (this->InstanceId).D = 0;
  this->_padding_ = (longlong)&___7FTraceService__6B_;
  pTVar1->Object = (FMessageEndpoint *)0x0;
  (this->MessageEndpoint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->SessionId = FApp::SessionId;
  pFVar13 = FApp::GetInstanceId(&local_130);
  uVar8 = pFVar13->B;
  uVar9 = pFVar13->C;
  uVar10 = pFVar13->D;
  (this->InstanceId).A = pFVar13->A;
  (this->InstanceId).B = uVar8;
  (this->InstanceId).C = uVar9;
  (this->InstanceId).D = uVar10;
  pIVar4 = param_1->Object;
  if (pIVar4 != (IMessageBus *)0x0) {
    pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      ::FName::FName(&local_1e8,"FTraceService");
    }
    else {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      ::FName::FName(&local_1e8,"FTraceService");
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_340.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_338.Data = (FScriptContainerElement *)0x0;
    local_314 = local_1e8;
    local_358[0x10] = false;
    local_330 = 0;
    local_328.Data = (FScriptContainerElement *)0x0;
    local_320._0_4_ = 0;
    local_320._4_4_ = 0;
    local_318 = false;
    local_358._0_8_ = pIVar4;
    local_358._8_8_ = pTVar5;
    pFVar14 = FTaskGraphInterface::Get();
    local_30c = (**(code **)((longlong)*pFVar14 + 0x10))(pFVar14,0);
    pTVar15 = ::operator_new(0x18);
    local_1d0.Object = pTVar17;
    if (pTVar15 != (TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *)0x0) {
      pTVar15->Handler = this;
      pTVar15->_padding_ =
           (longlong)&___7__TRawMessageHandler_UFTraceControlDiscoveryPing__VFTraceService____6B_;
      pTVar15->Func = (pmf_974c75c9)OnDiscoveryPing;
      local_1d0.Object = pTVar15;
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService>_>
              (&local_2d8,&local_1d0);
    if (((local_328.Data <= &local_2d8) &&
        (&local_2d8 <
         (TSharedPtr<IMessageHandler,1> *)(local_328.Data + (longlong)local_320._4_4_ * 0x10))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FTraceService *)(*pcVar7)();
      return pFVar16;
    }
    iVar12 = (int)local_320;
    if ((int)local_320 == local_320._4_4_) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_328,(int *)((longlong)&local_320 + 4));
    }
    *(IMessageHandler **)&local_328.Data[(longlong)iVar12 * 0x10].field_0x0 = local_2d8.Object;
    *(TReferenceControllerBase<1> **)(local_328.Data + (longlong)iVar12 * 0x10 + 8) =
         local_2d8.SharedReferenceCount.ReferenceController;
    local_2d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_2d8.Object = (IMessageHandler *)0x0;
    local_320._0_4_ = iVar12 + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar15 = ::operator_new(0x18);
    local_1c8.Object = (TRawMessageHandler<FTraceControlChannelsSet,FTraceService> *)pTVar17;
    if (pTVar15 != (TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *)0x0) {
      pTVar15->Handler = this;
      pTVar15->_padding_ =
           (longlong)&___7__TRawMessageHandler_UFTraceControlChannelsSet__VFTraceService____6B_;
      pTVar15->Func = (pmf_974c75c9)OnChannelSet;
      local_1c8.Object = (TRawMessageHandler<FTraceControlChannelsSet,FTraceService> *)pTVar15;
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlChannelsSet,FTraceService>_>
              (&local_2c8,&local_1c8);
    if (((local_328.Data <= &local_2c8) &&
        (&local_2c8 <
         (TSharedPtr<IMessageHandler,1> *)(local_328.Data + (longlong)local_320._4_4_ * 0x10))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FTraceService *)(*pcVar7)();
      return pFVar16;
    }
    if ((int)local_320 == local_320._4_4_) {
      local_320._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_328,(int *)((longlong)&local_320 + 4));
    }
    *(IMessageHandler **)&local_328.Data[(longlong)(int)local_320 * 0x10].field_0x0 =
         local_2c8.Object;
    *(TReferenceControllerBase<1> **)(local_328.Data + (longlong)(int)local_320 * 0x10 + 8) =
         local_2c8.SharedReferenceCount.ReferenceController;
    local_2c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_2c8.Object = (IMessageHandler *)0x0;
    local_320._0_4_ = (int)local_320 + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar15 = ::operator_new(0x18);
    local_1c0.Object = (TRawMessageHandler<FTraceControlStop,FTraceService> *)pTVar17;
    if (pTVar15 != (TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *)0x0) {
      pTVar15->Handler = this;
      pTVar15->_padding_ =
           (longlong)&___7__TRawMessageHandler_UFTraceControlStop__VFTraceService____6B_;
      pTVar15->Func = (pmf_974c75c9)OnStop;
      local_1c0.Object = (TRawMessageHandler<FTraceControlStop,FTraceService> *)pTVar15;
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlStop,FTraceService>_>
              (&local_2b8,&local_1c0);
    if (((local_328.Data <= &local_2b8) &&
        (&local_2b8 <
         (TSharedPtr<IMessageHandler,1> *)(local_328.Data + (longlong)local_320._4_4_ * 0x10))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FTraceService *)(*pcVar7)();
      return pFVar16;
    }
    if ((int)local_320 == local_320._4_4_) {
      local_320._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_328,(int *)((longlong)&local_320 + 4));
    }
    *(IMessageHandler **)&local_328.Data[(longlong)(int)local_320 * 0x10].field_0x0 =
         local_2b8.Object;
    *(TReferenceControllerBase<1> **)(local_328.Data + (longlong)(int)local_320 * 0x10 + 8) =
         local_2b8.SharedReferenceCount.ReferenceController;
    local_2b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_2b8.Object = (IMessageHandler *)0x0;
    local_320._0_4_ = (int)local_320 + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar15 = ::operator_new(0x18);
    local_1b8.Object = (TRawMessageHandler<FTraceControlSend,FTraceService> *)pTVar17;
    if (pTVar15 != (TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *)0x0) {
      pTVar15->Handler = this;
      pTVar15->_padding_ =
           (longlong)&___7__TRawMessageHandler_UFTraceControlSend__VFTraceService____6B_;
      pTVar15->Func = (pmf_974c75c9)OnSend;
      local_1b8.Object = (TRawMessageHandler<FTraceControlSend,FTraceService> *)pTVar15;
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlSend,FTraceService>_>
              (&local_218,&local_1b8);
    if (((local_328.Data <= &local_218) &&
        (&local_218 <
         (TSharedPtr<IMessageHandler,1> *)(local_328.Data + (longlong)local_320._4_4_ * 0x10))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FTraceService *)(*pcVar7)();
      return pFVar16;
    }
    if ((int)local_320 == local_320._4_4_) {
      local_320._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_328,(int *)((longlong)&local_320 + 4));
    }
    *(IMessageHandler **)&local_328.Data[(longlong)(int)local_320 * 0x10].field_0x0 =
         local_218.Object;
    *(TReferenceControllerBase<1> **)(local_328.Data + (longlong)(int)local_320 * 0x10 + 8) =
         local_218.SharedReferenceCount.ReferenceController;
    local_218.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_218.Object = (IMessageHandler *)0x0;
    local_320._0_4_ = (int)local_320 + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar15 = ::operator_new(0x18);
    local_1b0.Object = (TRawMessageHandler<FTraceControlFile,FTraceService> *)pTVar17;
    if (pTVar15 != (TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *)0x0) {
      pTVar15->Handler = this;
      pTVar15->_padding_ =
           (longlong)&___7__TRawMessageHandler_UFTraceControlFile__VFTraceService____6B_;
      pTVar15->Func = (pmf_974c75c9)OnFile;
      local_1b0.Object = (TRawMessageHandler<FTraceControlFile,FTraceService> *)pTVar15;
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlFile,FTraceService>_>
              (&local_298,&local_1b0);
    if (((local_328.Data <= &local_298) &&
        (&local_298 <
         (TSharedPtr<IMessageHandler,1> *)(local_328.Data + (longlong)local_320._4_4_ * 0x10))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FTraceService *)(*pcVar7)();
      return pFVar16;
    }
    if ((int)local_320 == local_320._4_4_) {
      local_320._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_328,(int *)((longlong)&local_320 + 4));
    }
    *(IMessageHandler **)&local_328.Data[(longlong)(int)local_320 * 0x10].field_0x0 =
         local_298.Object;
    *(TReferenceControllerBase<1> **)(local_328.Data + (longlong)(int)local_320 * 0x10 + 8) =
         local_298.SharedReferenceCount.ReferenceController;
    local_298.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_298.Object = (IMessageHandler *)0x0;
    local_320._0_4_ = (int)local_320 + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar15 = ::operator_new(0x18);
    local_1a8.Object = (TRawMessageHandler<FTraceControlSnapshotSend,FTraceService> *)pTVar17;
    if (pTVar15 != (TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *)0x0) {
      pTVar15->Handler = this;
      pTVar15->_padding_ =
           (longlong)&___7__TRawMessageHandler_UFTraceControlSnapshotSend__VFTraceService____6B_;
      pTVar15->Func = (pmf_974c75c9)OnSnapshotSend;
      local_1a8.Object = (TRawMessageHandler<FTraceControlSnapshotSend,FTraceService> *)pTVar15;
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlSnapshotSend,FTraceService>_>
              (&local_288,&local_1a8);
    if (((local_328.Data <= &local_288) &&
        (&local_288 <
         (TSharedPtr<IMessageHandler,1> *)(local_328.Data + (longlong)local_320._4_4_ * 0x10))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FTraceService *)(*pcVar7)();
      return pFVar16;
    }
    if ((int)local_320 == local_320._4_4_) {
      local_320._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_328,(int *)((longlong)&local_320 + 4));
    }
    *(IMessageHandler **)&local_328.Data[(longlong)(int)local_320 * 0x10].field_0x0 =
         local_288.Object;
    *(TReferenceControllerBase<1> **)(local_328.Data + (longlong)(int)local_320 * 0x10 + 8) =
         local_288.SharedReferenceCount.ReferenceController;
    local_288.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_288.Object = (IMessageHandler *)0x0;
    local_320._0_4_ = (int)local_320 + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar15 = ::operator_new(0x18);
    local_1a0.Object = (TRawMessageHandler<FTraceControlSnapshotFile,FTraceService> *)pTVar17;
    if (pTVar15 != (TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *)0x0) {
      pTVar15->Handler = this;
      pTVar15->_padding_ =
           (longlong)&___7__TRawMessageHandler_UFTraceControlSnapshotFile__VFTraceService____6B_;
      pTVar15->Func = (pmf_974c75c9)OnSnapshotFile;
      local_1a0.Object = (TRawMessageHandler<FTraceControlSnapshotFile,FTraceService> *)pTVar15;
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlSnapshotFile,FTraceService>_>
              (&local_278,&local_1a0);
    if (((local_328.Data <= &local_278) &&
        (&local_278 <
         (TSharedPtr<IMessageHandler,1> *)(local_328.Data + (longlong)local_320._4_4_ * 0x10))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FTraceService *)(*pcVar7)();
      return pFVar16;
    }
    if ((int)local_320 == local_320._4_4_) {
      local_320._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_328,(int *)((longlong)&local_320 + 4));
    }
    *(IMessageHandler **)&local_328.Data[(longlong)(int)local_320 * 0x10].field_0x0 =
         local_278.Object;
    *(TReferenceControllerBase<1> **)(local_328.Data + (longlong)(int)local_320 * 0x10 + 8) =
         local_278.SharedReferenceCount.ReferenceController;
    local_278.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_278.Object = (IMessageHandler *)0x0;
    local_320._0_4_ = (int)local_320 + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar15 = ::operator_new(0x18);
    local_198.Object = (TRawMessageHandler<FTraceControlPause,FTraceService> *)pTVar17;
    if (pTVar15 != (TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *)0x0) {
      pTVar15->Handler = this;
      pTVar15->_padding_ =
           (longlong)&___7__TRawMessageHandler_UFTraceControlPause__VFTraceService____6B_;
      pTVar15->Func = (pmf_974c75c9)OnPause;
      local_198.Object = (TRawMessageHandler<FTraceControlPause,FTraceService> *)pTVar15;
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlPause,FTraceService>_>
              (&local_268,&local_198);
    if (((local_328.Data <= &local_268) &&
        (&local_268 <
         (TSharedPtr<IMessageHandler,1> *)(local_328.Data + (longlong)local_320._4_4_ * 0x10))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FTraceService *)(*pcVar7)();
      return pFVar16;
    }
    if ((int)local_320 == local_320._4_4_) {
      local_320._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_328,(int *)((longlong)&local_320 + 4));
    }
    *(IMessageHandler **)&local_328.Data[(longlong)(int)local_320 * 0x10].field_0x0 =
         local_268.Object;
    *(TReferenceControllerBase<1> **)(local_328.Data + (longlong)(int)local_320 * 0x10 + 8) =
         local_268.SharedReferenceCount.ReferenceController;
    local_268.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_268.Object = (IMessageHandler *)0x0;
    local_320._0_4_ = (int)local_320 + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar15 = ::operator_new(0x18);
    local_190.Object = (TRawMessageHandler<FTraceControlResume,FTraceService> *)pTVar17;
    if (pTVar15 != (TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *)0x0) {
      pTVar15->Handler = this;
      pTVar15->_padding_ =
           (longlong)&___7__TRawMessageHandler_UFTraceControlResume__VFTraceService____6B_;
      pTVar15->Func = (pmf_974c75c9)OnResume;
      local_190.Object = (TRawMessageHandler<FTraceControlResume,FTraceService> *)pTVar15;
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlResume,FTraceService>_>
              (&local_258,&local_190);
    if (((local_328.Data <= &local_258) &&
        (&local_258 <
         (TSharedPtr<IMessageHandler,1> *)(local_328.Data + (longlong)local_320._4_4_ * 0x10))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FTraceService *)(*pcVar7)();
      return pFVar16;
    }
    if ((int)local_320 == local_320._4_4_) {
      local_320._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_328,(int *)((longlong)&local_320 + 4));
    }
    *(IMessageHandler **)&local_328.Data[(longlong)(int)local_320 * 0x10].field_0x0 =
         local_258.Object;
    *(TReferenceControllerBase<1> **)(local_328.Data + (longlong)(int)local_320 * 0x10 + 8) =
         local_258.SharedReferenceCount.ReferenceController;
    local_258.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_258.Object = (IMessageHandler *)0x0;
    local_320._0_4_ = (int)local_320 + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar15 = ::operator_new(0x18);
    local_188.Object = (TRawMessageHandler<FTraceControlBookmark,FTraceService> *)pTVar17;
    if (pTVar15 != (TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *)0x0) {
      pTVar15->Handler = this;
      pTVar15->_padding_ =
           (longlong)&___7__TRawMessageHandler_UFTraceControlBookmark__VFTraceService____6B_;
      pTVar15->Func = (pmf_974c75c9)OnBookmark;
      local_188.Object = (TRawMessageHandler<FTraceControlBookmark,FTraceService> *)pTVar15;
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlBookmark,FTraceService>_>
              (&local_248,&local_188);
    if (((local_328.Data <= &local_248) &&
        (&local_248 <
         (TSharedPtr<IMessageHandler,1> *)(local_328.Data + (longlong)local_320._4_4_ * 0x10))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FTraceService *)(*pcVar7)();
      return pFVar16;
    }
    if ((int)local_320 == local_320._4_4_) {
      local_320._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_328,(int *)((longlong)&local_320 + 4));
    }
    *(IMessageHandler **)&local_328.Data[(longlong)(int)local_320 * 0x10].field_0x0 =
         local_248.Object;
    *(TReferenceControllerBase<1> **)(local_328.Data + (longlong)(int)local_320 * 0x10 + 8) =
         local_248.SharedReferenceCount.ReferenceController;
    local_248.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_248.Object = (IMessageHandler *)0x0;
    local_320._0_4_ = (int)local_320 + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar15 = ::operator_new(0x18);
    local_180.Object = (TRawMessageHandler<FTraceControlScreenshot,FTraceService> *)pTVar17;
    if (pTVar15 != (TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *)0x0) {
      pTVar15->Handler = this;
      pTVar15->_padding_ =
           (longlong)&___7__TRawMessageHandler_UFTraceControlScreenshot__VFTraceService____6B_;
      pTVar15->Func = (pmf_974c75c9)OnScreenshot;
      local_180.Object = (TRawMessageHandler<FTraceControlScreenshot,FTraceService> *)pTVar15;
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlScreenshot,FTraceService>_>
              (&local_2a8,&local_180);
    if (((local_328.Data <= &local_2a8) &&
        (&local_2a8 <
         (TSharedPtr<IMessageHandler,1> *)(local_328.Data + (longlong)local_320._4_4_ * 0x10))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FTraceService *)(*pcVar7)();
      return pFVar16;
    }
    if ((int)local_320 == local_320._4_4_) {
      local_320._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_328,(int *)((longlong)&local_320 + 4));
    }
    *(IMessageHandler **)&local_328.Data[(longlong)(int)local_320 * 0x10].field_0x0 =
         local_2a8.Object;
    *(TReferenceControllerBase<1> **)(local_328.Data + (longlong)(int)local_320 * 0x10 + 8) =
         local_2a8.SharedReferenceCount.ReferenceController;
    local_2a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_2a8.Object = (IMessageHandler *)0x0;
    local_320._0_4_ = (int)local_320 + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar15 = ::operator_new(0x18);
    local_168.Object = (TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService> *)pTVar17;
    if (pTVar15 != (TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *)0x0) {
      pTVar15->Handler = this;
      pTVar15->_padding_ =
           (longlong)
           &___7__TRawMessageHandler_UFTraceControlSetStatNamedEvents__VFTraceService____6B_;
      pTVar15->Func = (pmf_974c75c9)OnSetStatNamedEvents;
      local_168.Object =
           (TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService> *)pTVar15;
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService>_>
              (&local_238,&local_168);
    if (((local_328.Data <= &local_238) &&
        (&local_238 <
         (TSharedPtr<IMessageHandler,1> *)(local_328.Data + (longlong)local_320._4_4_ * 0x10))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FTraceService *)(*pcVar7)();
      return pFVar16;
    }
    if ((int)local_320 == local_320._4_4_) {
      local_320._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_328,(int *)((longlong)&local_320 + 4));
    }
    *(IMessageHandler **)&local_328.Data[(longlong)(int)local_320 * 0x10].field_0x0 =
         local_238.Object;
    *(TReferenceControllerBase<1> **)(local_328.Data + (longlong)(int)local_320 * 0x10 + 8) =
         local_238.SharedReferenceCount.ReferenceController;
    local_238.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_238.Object = (IMessageHandler *)0x0;
    local_320._0_4_ = (int)local_320 + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar15 = ::operator_new(0x18);
    local_178.Object = (TRawMessageHandler<FTraceControlStatusPing,FTraceService> *)pTVar17;
    if (pTVar15 != (TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *)0x0) {
      pTVar15->Handler = this;
      pTVar15->_padding_ =
           (longlong)&___7__TRawMessageHandler_UFTraceControlStatusPing__VFTraceService____6B_;
      pTVar15->Func = (pmf_974c75c9)OnStatusPing;
      local_178.Object = (TRawMessageHandler<FTraceControlStatusPing,FTraceService> *)pTVar15;
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlStatusPing,FTraceService>_>
              (&local_228,&local_178);
    if (((local_328.Data <= &local_228) &&
        (&local_228 <
         (TSharedPtr<IMessageHandler,1> *)(local_328.Data + (longlong)local_320._4_4_ * 0x10))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FTraceService *)(*pcVar7)();
      return pFVar16;
    }
    if ((int)local_320 == local_320._4_4_) {
      local_320._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_328,(int *)((longlong)&local_320 + 4));
    }
    *(IMessageHandler **)&local_328.Data[(longlong)(int)local_320 * 0x10].field_0x0 =
         local_228.Object;
    *(TReferenceControllerBase<1> **)(local_328.Data + (longlong)(int)local_320 * 0x10 + 8) =
         local_228.SharedReferenceCount.ReferenceController;
    local_228.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_228.Object = (IMessageHandler *)0x0;
    local_320._0_4_ = (int)local_320 + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar15 = ::operator_new(0x18);
    local_170.Object = (TRawMessageHandler<FTraceControlSettingsPing,FTraceService> *)pTVar17;
    if (pTVar15 != (TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *)0x0) {
      pTVar15->Handler = this;
      pTVar15->_padding_ =
           (longlong)&___7__TRawMessageHandler_UFTraceControlSettingsPing__VFTraceService____6B_;
      pTVar15->Func = (pmf_974c75c9)OnSettingsPing;
      local_170.Object = (TRawMessageHandler<FTraceControlSettingsPing,FTraceService> *)pTVar15;
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlSettingsPing,FTraceService>_>
              (&local_208,&local_170);
    if (((local_328.Data <= &local_208) &&
        (&local_208 <
         (TSharedPtr<IMessageHandler,1> *)(local_328.Data + (longlong)local_320._4_4_ * 0x10))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FTraceService *)(*pcVar7)();
      return pFVar16;
    }
    if ((int)local_320 == local_320._4_4_) {
      local_320._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_328,(int *)((longlong)&local_320 + 4));
    }
    lVar20 = (longlong)(int)local_320;
    local_320._0_4_ = (int)local_320 + 1;
    *(IMessageHandler **)&local_328.Data[lVar20 * 0x10].field_0x0 = local_208.Object;
    *(TReferenceControllerBase<1> **)(local_328.Data + lVar20 * 0x10 + 8) =
         local_208.SharedReferenceCount.ReferenceController;
    local_208.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_208.Object = (IMessageHandler *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar15 = ::operator_new(0x18);
    if (pTVar15 != (TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *)0x0) {
      pTVar15->Handler = this;
      pTVar15->_padding_ =
           (longlong)&___7__TRawMessageHandler_UFTraceControlChannelsPing__VFTraceService____6B_;
      pTVar15->Func = (pmf_974c75c9)OnChannelsPing;
      pTVar17 = pTVar15;
    }
    local_160.Object = (TRawMessageHandler<FTraceControlChannelsPing,FTraceService> *)pTVar17;
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlChannelsPing,FTraceService>_>
              (&local_1f8,&local_160);
    if (((local_328.Data <= &local_1f8) &&
        (&local_1f8 <
         (TSharedPtr<IMessageHandler,1> *)(local_328.Data + (longlong)local_320._4_4_ * 0x10))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FTraceService *)(*pcVar7)();
      return pFVar16;
    }
    if ((int)local_320 == local_320._4_4_) {
      local_320._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_328,(int *)((longlong)&local_320 + 4));
    }
    lVar20 = (longlong)(int)local_320;
    local_320._0_4_ = (int)local_320 + 1;
    *(IMessageHandler **)&local_328.Data[lVar20 * 0x10].field_0x0 = local_1f8.Object;
    *(TReferenceControllerBase<1> **)(local_328.Data + lVar20 * 0x10 + 8) =
         local_1f8.SharedReferenceCount.ReferenceController;
    local_1f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_1f8.Object = (IMessageHandler *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    FMessageEndpointBuilder::Build((FMessageEndpointBuilder *)local_358,&local_1e0);
    if (pTVar1 != &local_1e0) {
      pTVar1->Object = local_1e0.Object;
      local_1e0.Object = (FMessageEndpoint *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MessageEndpoint).SharedReferenceCount,&local_1e0.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e0.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<IMessageHandler,1>,int>
              ((TSharedPtr<IMessageHandler,1> *)local_328.Data,(int)local_320);
    if ((TSharedPtr<IMessageHandler,1> *)local_328.Data != (TSharedPtr<IMessageHandler,1> *)0x0) {
      FMemory::Free(local_328.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_340,(FWriteAccessScope *)&local_158);
    if ((local_330 != 0) && (FStack_338.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_338.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_338,0,0,0x10);
      local_330 = 0;
    }
    if (local_158.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
    }
    if (FStack_338.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_338.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_340.AccessDetector);
    if ((TReferenceControllerBase<1> *)local_358._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = (atomic<int> *)(local_358._8_8_ + 0xc);
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)local_358._8_8_ + 8))(local_358._8_8_,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    pFVar6 = pTVar1->Object;
    if (pFVar6 != (FMessageEndpoint *)0x0) {
      local_res8[0].LowerBound.Type.Value = '\x01';
      local_res8[0].LowerBound.Value = Thread;
      local_res8[0].UpperBound.Type.Value = '\x02';
      local_res8[0].UpperBound.Value = Thread;
      pUVar18 = FTraceControlStatusPing::StaticStruct();
      pFVar19 = UStruct::GetStructPathName((UStruct *)pUVar18,&local_60);
      FMessageEndpoint::Subscribe(pFVar6,pFVar19,local_res8);
      if ((pTVar1->Object == (FMessageEndpoint *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        pFVar16 = (FTraceService *)(*pcVar7)();
        return pFVar16;
      }
      pFVar6 = pTVar1->Object;
      local_res10[0].LowerBound.Type.Value = '\x01';
      local_res10[0].LowerBound.Value = Thread;
      local_res10[0].UpperBound.Type.Value = '\x02';
      local_res10[0].UpperBound.Value = Thread;
      pUVar18 = FTraceControlSettingsPing::StaticStruct();
      pFVar19 = UStruct::GetStructPathName((UStruct *)pUVar18,&local_140);
      FMessageEndpoint::Subscribe(pFVar6,pFVar19,local_res10);
      if ((pTVar1->Object == (FMessageEndpoint *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        pFVar16 = (FTraceService *)(*pcVar7)();
        return pFVar16;
      }
      pFVar6 = pTVar1->Object;
      local_res18[0].LowerBound.Type.Value = '\x01';
      local_res18[0].LowerBound.Value = Thread;
      local_res18[0].UpperBound.Type.Value = '\x02';
      local_res18[0].UpperBound.Value = Thread;
      pUVar18 = FTraceControlDiscoveryPing::StaticStruct();
      pFVar19 = UStruct::GetStructPathName((UStruct *)pUVar18,&local_c0);
      FMessageEndpoint::Subscribe(pFVar6,pFVar19,local_res18);
      if ((pTVar1->Object == (FMessageEndpoint *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        pFVar16 = (FTraceService *)(*pcVar7)();
        return pFVar16;
      }
      pFVar6 = pTVar1->Object;
      local_res20[0].LowerBound.Type.Value = '\x01';
      local_res20[0].LowerBound.Value = Thread;
      local_res20[0].UpperBound.Type.Value = '\x02';
      local_res20[0].UpperBound.Value = Thread;
      pUVar18 = FTraceControlChannelsPing::StaticStruct();
      pFVar19 = UStruct::GetStructPathName((UStruct *)pUVar18,&local_120);
      FMessageEndpoint::Subscribe(pFVar6,pFVar19,local_res20);
      if ((pTVar1->Object == (FMessageEndpoint *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        pFVar16 = (FTraceService *)(*pcVar7)();
        return pFVar16;
      }
      pFVar6 = pTVar1->Object;
      local_308.LowerBound.Type.Value = '\x01';
      local_308.LowerBound.Value = Thread;
      local_308.UpperBound.Type.Value = '\x02';
      local_308.UpperBound.Value = Thread;
      pUVar18 = FTraceControlStop::StaticStruct();
      pFVar19 = UStruct::GetStructPathName((UStruct *)pUVar18,&local_110);
      FMessageEndpoint::Subscribe(pFVar6,pFVar19,&local_308);
      if ((pTVar1->Object == (FMessageEndpoint *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        pFVar16 = (FTraceService *)(*pcVar7)();
        return pFVar16;
      }
      pFVar6 = pTVar1->Object;
      local_304.LowerBound.Type.Value = '\x01';
      local_304.LowerBound.Value = Thread;
      local_304.UpperBound.Type.Value = '\x02';
      local_304.UpperBound.Value = Thread;
      pUVar18 = FTraceControlSend::StaticStruct();
      pFVar19 = UStruct::GetStructPathName((UStruct *)pUVar18,&local_100);
      FMessageEndpoint::Subscribe(pFVar6,pFVar19,&local_304);
      if ((pTVar1->Object == (FMessageEndpoint *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        pFVar16 = (FTraceService *)(*pcVar7)();
        return pFVar16;
      }
      pFVar6 = pTVar1->Object;
      local_300.LowerBound.Type.Value = '\x01';
      local_300.LowerBound.Value = Thread;
      local_300.UpperBound.Type.Value = '\x02';
      local_300.UpperBound.Value = Thread;
      pUVar18 = FTraceControlChannelsSet::StaticStruct();
      pFVar19 = UStruct::GetStructPathName((UStruct *)pUVar18,&local_f0);
      FMessageEndpoint::Subscribe(pFVar6,pFVar19,&local_300);
      if ((pTVar1->Object == (FMessageEndpoint *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        pFVar16 = (FTraceService *)(*pcVar7)();
        return pFVar16;
      }
      pFVar6 = pTVar1->Object;
      local_2fc.LowerBound.Type.Value = '\x01';
      local_2fc.LowerBound.Value = Thread;
      local_2fc.UpperBound.Type.Value = '\x02';
      local_2fc.UpperBound.Value = Thread;
      pUVar18 = FTraceControlFile::StaticStruct();
      pFVar19 = UStruct::GetStructPathName((UStruct *)pUVar18,&local_e0);
      FMessageEndpoint::Subscribe(pFVar6,pFVar19,&local_2fc);
      if ((pTVar1->Object == (FMessageEndpoint *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        pFVar16 = (FTraceService *)(*pcVar7)();
        return pFVar16;
      }
      pFVar6 = pTVar1->Object;
      local_2f8.LowerBound.Type.Value = '\x01';
      local_2f8.LowerBound.Value = Thread;
      local_2f8.UpperBound.Type.Value = '\x02';
      local_2f8.UpperBound.Value = Thread;
      pUVar18 = FTraceControlSnapshotSend::StaticStruct();
      pFVar19 = UStruct::GetStructPathName((UStruct *)pUVar18,&local_d0);
      FMessageEndpoint::Subscribe(pFVar6,pFVar19,&local_2f8);
      if ((pTVar1->Object == (FMessageEndpoint *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        pFVar16 = (FTraceService *)(*pcVar7)();
        return pFVar16;
      }
      pFVar6 = pTVar1->Object;
      local_2f4.LowerBound.Type.Value = '\x01';
      local_2f4.LowerBound.Value = Thread;
      local_2f4.UpperBound.Type.Value = '\x02';
      local_2f4.UpperBound.Value = Thread;
      pUVar18 = FTraceControlSnapshotSend::StaticStruct();
      pFVar19 = UStruct::GetStructPathName((UStruct *)pUVar18,&local_50);
      FMessageEndpoint::Subscribe(pFVar6,pFVar19,&local_2f4);
      if ((pTVar1->Object == (FMessageEndpoint *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        pFVar16 = (FTraceService *)(*pcVar7)();
        return pFVar16;
      }
      pFVar6 = pTVar1->Object;
      local_2f0.LowerBound.Type.Value = '\x01';
      local_2f0.LowerBound.Value = Thread;
      local_2f0.UpperBound.Type.Value = '\x02';
      local_2f0.UpperBound.Value = Thread;
      pUVar18 = FTraceControlPause::StaticStruct();
      pFVar19 = UStruct::GetStructPathName((UStruct *)pUVar18,&local_b0);
      FMessageEndpoint::Subscribe(pFVar6,pFVar19,&local_2f0);
      if ((pTVar1->Object == (FMessageEndpoint *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        pFVar16 = (FTraceService *)(*pcVar7)();
        return pFVar16;
      }
      pFVar6 = pTVar1->Object;
      local_2ec.LowerBound.Type.Value = '\x01';
      local_2ec.LowerBound.Value = Thread;
      local_2ec.UpperBound.Type.Value = '\x02';
      local_2ec.UpperBound.Value = Thread;
      pUVar18 = FTraceControlResume::StaticStruct();
      pFVar19 = UStruct::GetStructPathName((UStruct *)pUVar18,&local_a0);
      FMessageEndpoint::Subscribe(pFVar6,pFVar19,&local_2ec);
      if ((pTVar1->Object == (FMessageEndpoint *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        pFVar16 = (FTraceService *)(*pcVar7)();
        return pFVar16;
      }
      pFVar6 = pTVar1->Object;
      local_2e8.LowerBound.Type.Value = '\x01';
      local_2e8.LowerBound.Value = Thread;
      local_2e8.UpperBound.Type.Value = '\x02';
      local_2e8.UpperBound.Value = Thread;
      pUVar18 = FTraceControlBookmark::StaticStruct();
      pFVar19 = UStruct::GetStructPathName((UStruct *)pUVar18,&local_90);
      FMessageEndpoint::Subscribe(pFVar6,pFVar19,&local_2e8);
      if ((pTVar1->Object == (FMessageEndpoint *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        pFVar16 = (FTraceService *)(*pcVar7)();
        return pFVar16;
      }
      pFVar6 = pTVar1->Object;
      local_2e4.LowerBound.Type.Value = '\x01';
      local_2e4.LowerBound.Value = Thread;
      local_2e4.UpperBound.Type.Value = '\x02';
      local_2e4.UpperBound.Value = Thread;
      pUVar18 = FTraceControlScreenshot::StaticStruct();
      pFVar19 = UStruct::GetStructPathName((UStruct *)pUVar18,&local_80);
      FMessageEndpoint::Subscribe(pFVar6,pFVar19,&local_2e4);
      if ((pTVar1->Object == (FMessageEndpoint *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        pFVar16 = (FTraceService *)(*pcVar7)();
        return pFVar16;
      }
      pFVar6 = pTVar1->Object;
      local_2e0[0].LowerBound.Type.Value = '\x01';
      local_2e0[0].LowerBound.Value = Thread;
      local_2e0[0].UpperBound.Type.Value = '\x02';
      local_2e0[0].UpperBound.Value = Thread;
      pUVar18 = FTraceControlSetStatNamedEvents::StaticStruct();
      pFVar19 = UStruct::GetStructPathName((UStruct *)pUVar18,&local_70);
      FMessageEndpoint::Subscribe(pFVar6,pFVar19,local_2e0);
    }
  }
  return this;
}

// FTraceService @ 1488b0e90

/* WARNING: Enum "Type": Some values do not have unique names */

FTraceService * __thiscall FTraceService::FTraceService(FTraceService *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  IModuleInterface *pIVar3;
  TSharedPtr<IMessageBus,1> *pTVar4;
  FName local_res8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pFVar2 = ::FName::FName(&local_res8,"Messaging");
  FVar1 = *pFVar2;
  this_00 = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  pTVar4 = (TSharedPtr<IMessageBus,1> *)(**(code **)((longlong)*pIVar3 + 0x68))(pIVar3,local_18);
  FTraceService(this,pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  this->_padding_ = (longlong)&___7FTraceService__6B_;
  return this;
}

// ~FTraceService @ 1488b2a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTraceService::~FTraceService(FTraceService *this)

{
  this->_padding_ = (longlong)&___7FTraceService__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 1488b39f0

bool __thiscall
`FTraceService::OnChannelsPing'::__l2::<lambda_1>::operator()
          (void *this,FChannelInfo *param_1,void *param_2)

{
  char *_Str;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  size_t sVar6;
  FString *pFVar7;
  int iVar8;
  FString *pFVar9;
  uint local_38 [2];
  FString local_30;
  
  _Str = param_1->Name;
  iVar5 = 0;
  if (_Str != (char *)0x0) {
    sVar6 = strlen(_Str);
    iVar5 = (int)sVar6;
  }
  if (iVar5 + -7 < iVar5) {
    iVar5 = iVar5 + -7;
  }
  iVar8 = 0;
  if (0 < iVar5) {
    iVar8 = iVar5;
  }
  local_38[0] = param_1->Id;
  iVar5 = *(int *)((longlong)param_2 + 8);
  if (iVar5 == *(int *)((longlong)param_2 + 0xc)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,param_2,(int *)((longlong)param_2 + 0xc));
  }
  *(int *)((longlong)param_2 + 8) = iVar5 + 1;
  pFVar9 = (FString *)((longlong)iVar5 * 0x10 + *(longlong *)param_2);
  (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar9->Data).ArrayNum = 0;
  (pFVar9->Data).ArrayMax = 0;
  pFVar7 = ::FString::ConstructFromPtrSize(&local_30,_Str,iVar8);
  if (pFVar9 != pFVar7) {
    pFVar1 = (pFVar9->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar9->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar9->Data).ArrayNum = (pFVar7->Data).ArrayNum;
    (pFVar9->Data).ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  iVar5 = *(int *)((longlong)param_2 + 0x28);
  if (iVar5 == *(int *)((longlong)param_2 + 0x2c)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)((longlong)param_2 + 0x20),
                       (int *)((longlong)param_2 + 0x2c));
  }
  *(int *)((longlong)param_2 + 0x28) = iVar5 + 1;
  *(uint *)(*(longlong *)((longlong)param_2 + 0x20) + (longlong)iVar5 * 4) = local_38[0];
  iVar5 = *(int *)((longlong)param_2 + 0x18);
  if (iVar5 == *(int *)((longlong)param_2 + 0x1c)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)((longlong)param_2 + 0x10),
                       (int *)((longlong)param_2 + 0x1c));
  }
  *(int *)((longlong)param_2 + 0x18) = iVar5 + 1;
  ::FString::FString((FString *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)param_2 + 0x10)),
                     param_1->Desc);
  if (param_1->bIsReadOnly != false) {
    if ((*(uint **)((longlong)param_2 + 0x30) <= local_38) &&
       (local_38 < *(uint **)((longlong)param_2 + 0x30) + *(int *)((longlong)param_2 + 0x3c))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = *(int *)((longlong)param_2 + 0x38);
    if (iVar5 == *(int *)((longlong)param_2 + 0x3c)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)((longlong)param_2 + 0x30),
                         (int *)((longlong)param_2 + 0x3c));
    }
    *(int *)((longlong)param_2 + 0x38) = iVar5 + 1;
    *(uint *)(*(longlong *)((longlong)param_2 + 0x30) + (longlong)iVar5 * 4) = local_38[0];
  }
  if (param_1->bIsEnabled != false) {
    if ((*(uint **)((longlong)param_2 + 0x40) <= local_38) &&
       (local_38 < *(uint **)((longlong)param_2 + 0x40) + *(int *)((longlong)param_2 + 0x4c))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = *(int *)((longlong)param_2 + 0x48);
    if (iVar5 == *(int *)((longlong)param_2 + 0x4c)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)((longlong)param_2 + 0x40),
                         (int *)((longlong)param_2 + 0x4c));
    }
    *(int *)((longlong)param_2 + 0x48) = iVar5 + 1;
    *(uint *)(((ForAnyElementType *)((longlong)param_2 + 0x40))->Data + (longlong)iVar5 * 4) =
         local_38[0];
  }
  return true;
}

// operator() @ 1488b3c90

EEnumerateResult __thiscall
`FTraceService::OnSettingsPing'::__l2::<lambda_1>::operator()(void *this,FChannelPreset *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  EEnumerateResult EVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  FString local_38;
  FString local_28;
  undefined1 local_18;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_18 = 0;
  ::FString::operator=(&local_38,param_1->Name);
  ::FString::operator=(&local_28,param_1->ChannelList);
  local_18 = param_1->bIsReadOnly;
  lVar10 = **(longlong **)this;
  if ((*(FString **)(lVar10 + 8) <= &local_38) &&
     (&local_38 <
      (FString *)((longlong)*(FString **)(lVar10 + 8) + (longlong)*(int *)(lVar10 + 0x14) * 0x28)))
  {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
  }
  iVar8 = *(int *)(lVar10 + 0x10);
  if (iVar8 == *(int *)(lVar10 + 0x14)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,(ForAnyElementType *)(lVar10 + 8),(int *)(lVar10 + 0x14));
  }
  FVar5.Data = local_38.Data.AllocatorInstance.Data;
  lVar9 = (longlong)iVar8;
  *(int *)(lVar10 + 0x10) = iVar8 + 1;
  lVar10 = *(longlong *)(lVar10 + 8);
  *(undefined8 *)(lVar10 + lVar9 * 0x28) = 0;
  lVar11 = (longlong)local_38.Data.ArrayNum;
  *(int *)(lVar10 + 8 + lVar9 * 0x28) = local_38.Data.ArrayNum;
  pFVar3 = (ForAnyElementType *)(lVar10 + lVar9 * 0x28);
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (local_38.Data.ArrayNum == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,pFVar3,local_38.Data.ArrayNum,piVar1);
    memcpy(pFVar3->Data,FVar5.Data,lVar11 * 2);
  }
  FVar5.Data = local_28.Data.AllocatorInstance.Data;
  pFVar2 = pFVar3 + 2;
  pFVar2->Data = (FScriptContainerElement *)0x0;
  piVar1 = (int *)((longlong)&pFVar3[3].Data + 4);
  lVar10 = (longlong)local_28.Data.ArrayNum;
  *(int *)&pFVar3[3].Data = local_28.Data.ArrayNum;
  if (local_28.Data.ArrayNum == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,pFVar2,local_28.Data.ArrayNum,piVar1);
    memcpy(pFVar2->Data,FVar5.Data,lVar10 * 2);
  }
  *(undefined1 *)&pFVar3[4].Data = local_18;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return Continue;
}

// FillTraceStatusMessage @ 1488bf980

void __cdecl FTraceService::FillTraceStatusMessage(FTraceControlStatus *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  ETraceSystemStatus EVar3;
  FTraceControlStatus *pFVar4;
  FDateTime FVar5;
  FString local_68;
  FStatistics local_58;
  
  pFVar4 = (FTraceControlStatus *)FTraceAuxiliary::GetTraceDestinationString(&local_68);
  if (param_1 != pFVar4) {
    pFVar1 = (param_1->Endpoint).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Endpoint).Data.AllocatorInstance.Data = (pFVar4->Endpoint).Data.AllocatorInstance.Data
    ;
    (pFVar4->Endpoint).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->Endpoint).Data.ArrayNum = (pFVar4->Endpoint).Data.ArrayNum;
    (param_1->Endpoint).Data.ArrayMax = (pFVar4->Endpoint).Data.ArrayMax;
    (pFVar4->Endpoint).Data.ArrayNum = 0;
    (pFVar4->Endpoint).Data.ArrayMax = 0;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  bVar2 = FTraceAuxiliary::IsConnected(&param_1->SessionGuid,&param_1->TraceGuid);
  param_1->bIsTracing = bVar2;
  local_58.BytesSent = 0;
  local_58.BytesTraced = 0;
  local_58.BytesEmitted = 0;
  local_58.MemoryUsed = 0;
  local_58.BlockPoolAllocated = 0;
  local_58.BlockPoolFreeBlocks = 0;
  local_58.BlockPoolAllocatedBlocks = 0;
  local_58.SharedBufferAllocated = 0;
  local_58.FixedBufferAllocated = 0;
  local_58.CacheAllocated = 0;
  local_58.CacheUsed = 0;
  local_58.CacheWaste = 0;
  UE::Trace::GetStatistics(&local_58);
  param_1->BytesSent = local_58.BytesSent;
  param_1->BytesTraced = local_58.BytesTraced;
  param_1->MemoryUsed = local_58.MemoryUsed;
  param_1->CacheAllocated = local_58.CacheAllocated;
  param_1->CacheUsed = local_58.CacheUsed;
  param_1->CacheWaste = local_58.CacheWaste;
  param_1->bAreStatNamedEventsEnabled = 0 < GCycleStatsShouldEmitNamedEvents;
  bVar2 = FTraceAuxiliary::IsPaused();
  param_1->bIsPaused = bVar2;
  FVar5 = FDateTime::Now();
                    /* WARNING: Load size is inaccurate */
  (param_1->StatusTimestamp).Ticks = *FVar5.Ticks;
  EVar3 = FTraceAuxiliary::GetTraceSystemStatus();
  param_1->TraceSystemStatus = EVar3;
  return;
}

// HandleSendUri @ 1488c7b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTraceService::HandleSendUri(FTraceService *this,FTraceControlSend *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  FOptions local_res10 [8];
  
  local_res10[0].bExcludeTail = SUB81(param_1->_padding_,0);
  pwVar1 = L"";
  local_res10[0].bNoWorkerThread = false;
  local_res10[0].bTruncateFile = false;
  if ((int)param_1->_padding_ == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)param_1->_padding_;
  }
  if ((param_1->Host).Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)(param_1->Host).Data.AllocatorInstance.Data;
  }
  FTraceAuxiliary::Start(Network,pwVar1,pwVar2,local_res10,(FLogCategoryBase *)&LogCore);
  return;
}

// OnBookmark @ 1488ce770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceService::OnBookmark
          (FTraceService *this,FTraceControlBookmark *param_1,TSharedRef<IMessageContext,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong _Size;
  wchar_t *_Str;
  undefined1 auStack_1058 [32];
  undefined4 local_1038;
  undefined4 uStack_1034;
  undefined1 auStack_102e [6];
  undefined4 local_1028;
  undefined1 local_1024 [4092];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1058;
  if (-1 < BookmarkChannel->Enabled) {
    if (!__BookmarkPoint148) {
      FMiscTrace::OutputBookmarkSpec
                (&__BookmarkPoint148,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TraceService.cpp"
                 ,0x94,L"%s");
      __BookmarkPoint148 = true;
    }
    if ((param_1->Label).Data.ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(param_1->Label).Data.AllocatorInstance.Data;
    }
    uVar3 = CallstackTrace_GetCurrentId();
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      uVar9 = 4;
      local_1028 = 0xc201;
      puVar8 = local_1024;
    }
    else {
      sVar6 = wcslen(_Str);
      iVar4 = (int)sVar6 * 2 + 2;
      if (0xffff < iVar4) {
        iVar4 = 0xffff;
      }
      uVar9 = (longlong)iVar4 + 2;
      if (0x1000 < uVar9) {
        return;
      }
      local_1028 = CONCAT22(local_1028._2_2_,0xc201);
      sVar6 = wcslen(_Str);
      uVar5 = (int)sVar6 * 2 + 2;
      uVar7 = (ulonglong)uVar5;
      if (0xffff < (int)uVar5) {
        uVar7 = 0xffff;
      }
      _Size = uVar7 & 0xffff;
      memcpy((void *)((longlong)&local_1028 + 2),_Str,_Size);
      if ((short)uVar7 == -1) {
        local_1038 = 0x2e002e;
        uStack_1034 = 0x2e;
        *(undefined8 *)(auStack_102e + (_Size - ((uint)_Size & 1))) = 0x2e002e002e;
      }
      puVar8 = local_1024 + (_Size - 2);
    }
    if (((longlong)puVar8 - (longlong)&local_1028 != uVar9) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("PayloadBufferPtr - Buffer == FormatArgsSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\FormatArgsTrace.h"
                           ,0x44,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((ushort)uVar9 != 0) {
      FMiscTrace::OutputBookmarkInternal
                (&__BookmarkPoint148,uVar3,(ushort)uVar9,(uchar *)&local_1028);
    }
  }
  return;
}

// OnChannelSet @ 1488ce950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceService::OnChannelSet
          (FTraceService *this,FTraceControlChannelsSet *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  int iVar1;
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_01;
  FMessageAddress *pFVar5;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar6;
  UScriptStruct *pUVar7;
  longlong lVar8;
  undefined1 auStackY_148 [32];
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_108;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_f8;
  FDateTime local_e8;
  FTimespan local_e0;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TSharedPtr<IMessageAttachment,1> local_b8;
  TArrayView<unsigned_int_const_,int> local_a8;
  TArrayView<unsigned_int_const_,int> local_98;
  undefined1 local_88 [32];
  void *local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_d8 = (param_1->ChannelIdsToEnable).AllocatorInstance.Data;
  iVar1 = (param_1->ChannelIdsToEnable).ArrayNum;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0x8000000000;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_a8._12_4_ = uStack_cc;
  local_a8.ArrayNum = iVar1;
  local_a8.DataPtr = (uint *)local_d8;
  iStack_d0 = iVar1;
  FTraceAuxiliary::EnableChannels
            (&local_a8,
             (TMap<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
              *)local_88);
  local_c8 = (param_1->ChannelIdsToDisable).AllocatorInstance.Data;
  iStack_c0 = (param_1->ChannelIdsToDisable).ArrayNum;
  if (iStack_c0 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_98._12_4_ = uStack_bc;
  local_98.ArrayNum = iStack_c0;
  local_98.DataPtr = (uint *)local_c8;
  FTraceAuxiliary::DisableChannels
            (&local_98,
             (TMap<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
              *)local_88);
  if (local_88._8_4_ != local_54) {
    if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
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
    this_01 = FMemory::Malloc(0x50,0);
    *(undefined8 *)&this_01->field_0x10 = 0;
    *(undefined8 *)&this_01->field_0x18 = 0;
    *(undefined8 *)(this_01 + 1) = 0;
    *(undefined8 *)&this_01[1].field_0x10 = 0;
    *(undefined8 *)this_01 = 0;
    *(undefined8 *)&this_01->field_0x8 = 0;
    *(undefined8 *)&this_01->field_0x20 = 0;
    *(undefined4 *)&this_01->field_0x28 = 0;
    *(undefined4 *)&this_01->field_0x2c = 0x80;
    *(undefined4 *)&this_01->field_0x30 = 0xffffffff;
    *(undefined4 *)&this_01->field_0x34 = 0;
    *(undefined8 *)&this_01[1].field_0x8 = 0;
    if (this_01 !=
        (TSparseArray<TSparseSetElement<TTuple<unsigned_int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)local_88) {
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(this_01,0,0);
      if (*(void **)this_01 != (void *)0x0) {
        FMemory::Free(*(void **)this_01);
      }
      *(undefined8 *)this_01 = local_88._0_8_;
      local_88._0_8_ = (FScriptContainerElement *)0x0;
      *(undefined4 *)&this_01->field_0x8 = local_88._8_4_;
      *(undefined4 *)&this_01->field_0xc = local_88._12_4_;
      local_88._8_8_ = 0;
      if (&this_01->field_0x10 != local_88 + 0x10) {
        if (local_68 == (void *)0x0) {
          memmove(&this_01->field_0x10,local_88 + 0x10,0x10);
        }
        if (*(void **)&this_01->field_0x20 != (void *)0x0) {
          FMemory::Free(*(void **)&this_01->field_0x20);
        }
        *(void **)&this_01->field_0x20 = local_68;
        local_68 = (void *)0x0;
        *(undefined4 *)&this_01->field_0x28 = (undefined4)local_60;
        *(uint *)&this_01->field_0x2c = local_60._4_4_;
        local_60 = 0;
      }
      *(undefined4 *)&this_01->field_0x30 = local_58;
      *(int *)&this_01->field_0x34 = local_54;
      local_58 = 0xffffffff;
      local_54 = 0;
      if (local_48 == (void *)0x0) {
        *(undefined4 *)(this_01 + 1) = local_50;
      }
      if (*(void **)&this_01[1].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this_01[1].field_0x8);
      }
      *(void **)&this_01[1].field_0x8 = local_48;
      local_48 = (void *)0x0;
      *(undefined4 *)&this_01[1].field_0x10 = local_40;
      local_40 = 0;
    }
    if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
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
    this_00 = (this->MessageEndpoint).Object;
    pFVar5 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
    local_e0.Ticks = 0;
    local_e8.Ticks = 0x2bca2875f4373fff;
    local_f8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Array.ArrayNum = 0;
    local_f8.Array.ArrayMax = 0;
    pTVar6 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add(&local_f8,pFVar5);
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = (pTVar6->Array).ArrayNum;
    lVar8 = (longlong)local_108.ArrayNum;
    _Src = (pTVar6->Array).AllocatorInstance.Data;
    if (local_108.ArrayNum == 0) {
      local_108.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_108.ArrayNum,0,&local_108.AllocatorInstance,local_108.ArrayNum,
                 &local_108.ArrayMax);
      memcpy(local_108.AllocatorInstance.Data,_Src,lVar8 << 4);
    }
    local_b8.Object = (IMessageAttachment *)0x0;
    local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pUVar7 = FTraceControlChannelsSetError::StaticStruct();
    FMessageEndpoint::Send(this_00,this_01,pUVar7,None,&local_b8,&local_108,&local_e0,&local_e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    if (local_f8.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Array.AllocatorInstance.Data);
    }
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar1 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  uVar3 = local_60._4_4_;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = (ulonglong)local_60._4_4_ << 0x20;
  if (0x80 < uVar3) {
    local_60 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// OnChannelsPing @ 1488ced90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceService::OnChannelsPing
          (FTraceService *this,FTraceControlChannelsPing *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FString **ppFVar1;
  FString **ppFVar2;
  FString **ppFVar3;
  FMessageEndpoint *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  FString **ppFVar8;
  FMessageAddress *pFVar9;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar10;
  UScriptStruct *pUVar11;
  void **ppvVar12;
  longlong lVar13;
  FDateTime local_res8;
  FTimespan local_res10;
  FDateTime local_res18;
  FTimespan local_res20;
  FString *local_f8;
  undefined8 local_f0;
  FString *local_e8;
  undefined8 local_e0;
  FString *local_d8;
  undefined8 local_d0;
  FString *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_a8;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_98;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_88;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_78;
  TSharedPtr<IMessageAttachment,1> local_68;
  TSharedPtr<IMessageAttachment,1> local_58;
  
  local_f8 = (FString *)0x0;
  local_f0 = 0;
  local_e8 = (FString *)0x0;
  local_e0 = 0;
  local_d8 = (FString *)0x0;
  local_d0 = 0;
  local_c8 = (FString *)0x0;
  local_c0 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  UE::Trace::EnumerateChannels
            (`FTraceService::OnChannelsPing'::__l2::<lambda_1>::<lambda_invoker_cdecl>,&local_f8);
  if (param_1->KnownChannelCount < (uint)local_f0) {
    ppFVar8 = FMemory::Malloc(0x40,0);
    ppFVar8[2] = (FString *)0x0;
    ppFVar8[3] = (FString *)0x0;
    ppFVar8[4] = (FString *)0x0;
    ppFVar1 = ppFVar8 + 2;
    *ppFVar8 = (FString *)0x0;
    ppFVar2 = ppFVar8 + 4;
    ppFVar8[1] = (FString *)0x0;
    ppFVar3 = ppFVar8 + 6;
    ppFVar8[5] = (FString *)0x0;
    *ppFVar3 = (FString *)0x0;
    ppFVar8[7] = (FString *)0x0;
    if (ppFVar8 != &local_f8) {
      DestructItems<FString,int>((FString *)0x0,0);
      if (*ppFVar8 != (FString *)0x0) {
        FMemory::Free(*ppFVar8);
      }
      *ppFVar8 = local_f8;
      local_f8 = (FString *)0x0;
      *(uint *)(ppFVar8 + 1) = (uint)local_f0;
      *(undefined4 *)((longlong)ppFVar8 + 0xc) = local_f0._4_4_;
      local_f0 = 0;
    }
    if (ppFVar1 != &local_d8) {
      if (*ppFVar1 != (FString *)0x0) {
        FMemory::Free(*ppFVar1);
      }
      *ppFVar1 = local_d8;
      local_d8 = (FString *)0x0;
      *(undefined4 *)(ppFVar8 + 3) = (undefined4)local_d0;
      *(undefined4 *)((longlong)ppFVar8 + 0x1c) = local_d0._4_4_;
      local_d0 = 0;
    }
    if (ppFVar2 != &local_e8) {
      DestructItems<FString,int>(*ppFVar2,*(int *)(ppFVar8 + 5));
      if (*ppFVar2 != (FString *)0x0) {
        FMemory::Free(*ppFVar2);
      }
      *ppFVar2 = local_e8;
      local_e8 = (FString *)0x0;
      *(int *)(ppFVar8 + 5) = (int)local_e0;
      *(undefined4 *)((longlong)ppFVar8 + 0x2c) = local_e0._4_4_;
      local_e0 = 0;
    }
    if (ppFVar3 != &local_c8) {
      if (*ppFVar3 != (FString *)0x0) {
        FMemory::Free(*ppFVar3);
      }
      *ppFVar3 = local_c8;
      local_c8 = (FString *)0x0;
      *(undefined4 *)(ppFVar8 + 7) = (undefined4)local_c0;
      *(undefined4 *)((longlong)ppFVar8 + 0x3c) = local_c0._4_4_;
      local_c0 = 0;
    }
    if (((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = (this->MessageEndpoint).Object;
    pFVar9 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
    local_res10.Ticks = 0;
    local_res8.Ticks = 0x2bca2875f4373fff;
    local_88.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Array.ArrayNum = 0;
    local_88.Array.ArrayMax = 0;
    pTVar10 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add(&local_88,pFVar9);
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = (pTVar10->Array).ArrayNum;
    lVar13 = (longlong)local_a8.ArrayNum;
    pFVar5 = (pTVar10->Array).AllocatorInstance.Data;
    if (local_a8.ArrayNum == 0) {
      local_a8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_a8.ArrayNum,0,&local_a8.AllocatorInstance,local_a8.ArrayNum,
                 &local_a8.ArrayMax);
      memcpy(local_a8.AllocatorInstance.Data,pFVar5,lVar13 << 4);
    }
    local_68.Object = (IMessageAttachment *)0x0;
    local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pUVar11 = FTraceControlChannelsDesc::StaticStruct();
    FMessageEndpoint::Send(pFVar4,ppFVar8,pUVar11,None,&local_68,&local_a8,&local_res10,&local_res8)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    if (local_88.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Array.AllocatorInstance.Data);
    }
  }
  ppvVar12 = FMemory::Malloc(0x10,0);
  *ppvVar12 = (void *)0x0;
  ppvVar12[1] = (void *)0x0;
  if (ppvVar12 != &local_b8) {
    *ppvVar12 = local_b8;
    local_b8 = (void *)0x0;
    *(undefined4 *)(ppvVar12 + 1) = (undefined4)local_b0;
    *(undefined4 *)((longlong)ppvVar12 + 0xc) = local_b0._4_4_;
    local_b0 = 0;
  }
  if (((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (this->MessageEndpoint).Object;
  pFVar9 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
  local_res18.Ticks = 0x2bca2875f4373fff;
  local_res20.Ticks = 0;
  local_78.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Array.ArrayNum = 0;
  local_78.Array.ArrayMax = 0;
  pTVar10 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add(&local_78,pFVar9);
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = (pTVar10->Array).ArrayNum;
  lVar13 = (longlong)local_98.ArrayNum;
  pFVar5 = (pTVar10->Array).AllocatorInstance.Data;
  if (local_98.ArrayNum == 0) {
    local_98.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_98.ArrayNum,0,&local_98.AllocatorInstance,local_98.ArrayNum,
               &local_98.ArrayMax);
    memcpy(local_98.AllocatorInstance.Data,pFVar5,lVar13 << 4);
  }
  local_58.Object = (IMessageAttachment *)0x0;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pUVar11 = FTraceControlChannelsStatus::StaticStruct();
  FMessageEndpoint::Send(pFVar4,ppvVar12,pUVar11,None,&local_58,&local_98,&local_res20,&local_res18)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_78.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Array.AllocatorInstance.Data);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_c8 != (FString *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_d8 != (FString *)0x0) {
    FMemory::Free(local_d8);
  }
  DestructItems<FString,int>(local_e8,(int)local_e0);
  if (local_e8 != (FString *)0x0) {
    FMemory::Free(local_e8);
  }
  DestructItems<FString,int>(local_f8,(uint)local_f0);
  if (local_f8 != (FString *)0x0) {
    FMemory::Free(local_f8);
  }
  return;
}

// OnDiscoveryPing @ 1488cfa50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceService::OnDiscoveryPing
          (FTraceService *this,FTraceControlDiscoveryPing *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  code *pcVar1;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> TVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  FGuid *pFVar7;
  FTraceControlStatus *pFVar8;
  FMessageAddress *pFVar9;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar10;
  UScriptStruct *pUVar11;
  longlong lVar12;
  FDateTime local_res10;
  FTimespan local_res20;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_68;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_58;
  TSharedPtr<IMessageAttachment,1> local_48;
  FGuid local_38;
  FGuid local_28;
  
  if (((((((param_1->SessionId).B != 0 || (param_1->SessionId).A != 0) ||
         (param_1->SessionId).C != 0) || (param_1->SessionId).D != 0) ||
       ((((param_1->InstanceId).D != 0 || (param_1->InstanceId).C != 0) ||
        (param_1->InstanceId).B != 0) || (param_1->InstanceId).A != 0)) &&
      (pFVar7 = FApp::GetInstanceId(&local_38),
      (((param_1->InstanceId).D != pFVar7->D || (param_1->InstanceId).C != pFVar7->C) ||
      (param_1->InstanceId).B != pFVar7->B) || pFVar7->A != (param_1->InstanceId).A)) &&
     (((FApp::SessionId.A != (param_1->SessionId).A || FApp::SessionId.C != (param_1->SessionId).C)
      || FApp::SessionId.D != (param_1->SessionId).D) || FApp::SessionId.B != (param_1->SessionId).B
     )) {
    return;
  }
  pFVar8 = FMemory::Malloc(0x88,0);
  pFVar8->CacheWaste = 0;
  pFVar8->bAreStatNamedEventsEnabled = false;
  pFVar8->bIsPaused = false;
  pFVar8->bIsTracing = false;
  pFVar8->field_0x57 = 0;
  *(undefined4 *)&pFVar8->field_0x61 = 0;
  *(undefined2 *)&pFVar8->field_0x65 = 0;
  pFVar8->field_0x67 = 0;
  (pFVar8->Endpoint).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar8->Endpoint).Data.ArrayNum = 0;
  (pFVar8->Endpoint).Data.ArrayMax = 0;
  (pFVar8->SessionGuid).A = 0;
  (pFVar8->SessionGuid).B = 0;
  (pFVar8->SessionGuid).C = 0;
  (pFVar8->SessionGuid).D = 0;
  (pFVar8->TraceGuid).A = 0;
  (pFVar8->TraceGuid).B = 0;
  (pFVar8->TraceGuid).C = 0;
  (pFVar8->TraceGuid).D = 0;
  pFVar8->BytesSent = 0;
  pFVar8->BytesTraced = 0;
  pFVar8->MemoryUsed = 0;
  pFVar8->CacheAllocated = 0;
  pFVar8->CacheUsed = 0;
  (pFVar8->StatusTimestamp).Ticks = 0;
  pFVar8->TraceSystemStatus = '\0';
  pFVar8[1].Endpoint.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[1].Endpoint.Data.ArrayNum = 0;
  pFVar8[1].Endpoint.Data.ArrayMax = 0;
  pFVar8[1].SessionGuid.A = 0;
  pFVar8[1].SessionGuid.B = 0;
  pFVar8[1].SessionGuid.C = 0;
  pFVar8[1].SessionGuid.D = 0;
  TVar2.AllocatorInstance.Data._4_4_ = FApp::SessionId.B;
  TVar2.AllocatorInstance.Data._0_4_ = FApp::SessionId.A;
  TVar2.ArrayNum = FApp::SessionId.C;
  TVar2.ArrayMax = FApp::SessionId.D;
  pFVar8[1].Endpoint.Data = TVar2;
  pFVar7 = FApp::GetInstanceId(&local_28);
  uVar3 = pFVar7->B;
  uVar4 = pFVar7->C;
  uVar5 = pFVar7->D;
  pFVar8[1].SessionGuid.A = pFVar7->A;
  pFVar8[1].SessionGuid.B = uVar3;
  pFVar8[1].SessionGuid.C = uVar4;
  pFVar8[1].SessionGuid.D = uVar5;
  FillTraceStatusMessage(pFVar8);
  if (((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = (this->MessageEndpoint).Object;
  pFVar9 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
  local_res20.Ticks = 0;
  local_res10.Ticks = 0x2bca2875f4373fff;
  local_58.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Array.ArrayNum = 0;
  local_58.Array.ArrayMax = 0;
  pTVar10 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add(&local_58,pFVar9);
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = (pTVar10->Array).ArrayNum;
  lVar12 = (longlong)local_68.ArrayNum;
  _Src = (pTVar10->Array).AllocatorInstance.Data;
  if (local_68.ArrayNum == 0) {
    local_68.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_68.ArrayNum,0,&local_68.AllocatorInstance,local_68.ArrayNum,
               &local_68.ArrayMax);
    memcpy(local_68.AllocatorInstance.Data,_Src,lVar12 << 4);
  }
  local_48.Object = (IMessageAttachment *)0x0;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pUVar11 = FTraceControlDiscovery::StaticStruct();
  FMessageEndpoint::Send(this_00,pFVar8,pUVar11,None,&local_48,&local_68,&local_res20,&local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_58.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Array.AllocatorInstance.Data);
  }
  return;
}

// OnFile @ 1488cfcd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceService::OnFile
          (FTraceService *this,FTraceControlFile *param_1,TSharedRef<IMessageContext,1> *param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  FOptions local_res10 [8];
  
  local_res10[0].bTruncateFile = param_1->bTruncateFile;
  local_res10[0].bExcludeTail = SUB81(param_1->_padding_,0);
  pwVar1 = L"";
  local_res10[0].bNoWorkerThread = false;
  if ((int)param_1->_padding_ == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)param_1->_padding_;
  }
  if ((param_1->File).Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)(param_1->File).Data.AllocatorInstance.Data;
  }
  FTraceAuxiliary::Start(File,pwVar1,pwVar2,local_res10,(FLogCategoryBase *)&LogCore);
  return;
}

// OnPause @ 1488cfd60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceService::OnPause
          (FTraceService *this,FTraceControlPause *param_1,TSharedRef<IMessageContext,1> *param_2)

{
  FTraceAuxiliaryImpl::PauseChannels(&GTraceAuxiliary);
  return;
}

// OnResume @ 1488d00f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceService::OnResume
          (FTraceService *this,FTraceControlResume *param_1,TSharedRef<IMessageContext,1> *param_2)

{
  wchar_t *pwVar1;
  undefined8 uStackX_8;
  pmf_41f21a49 apStackX_10 [3];
  
  apStackX_10[0] = (pmf_41f21a49)FTraceAuxiliaryImpl::EnableChannel<wchar_t_const_*>;
  pwVar1 = L"";
  if (GTraceAuxiliary.PausedPreset.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GTraceAuxiliary.PausedPreset.Data.AllocatorInstance.Data;
  }
  uStackX_8 = 0;
  FTraceAuxiliaryImpl::
  ForEachChannel<bool_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&,FString_*),FLogCategoryLogTrace_&,std::nullptr_t>
            (&GTraceAuxiliary,pwVar1,false,apStackX_10,&LogTrace,(void **)&uStackX_8);
  ::FString::Empty(&GTraceAuxiliary.PausedPreset);
  return;
}

// OnScreenshot @ 1488d0100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceService::OnScreenshot
          (FTraceService *this,FTraceControlScreenshot *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  bool bVar1;
  FString *pFVar2;
  FString local_18;
  
  bVar1 = param_1->bShowUI;
  pFVar2 = ::FString::FString(&local_18,&param_1->Name);
  FTraceScreenshot::RequestScreenshot(pFVar2,bVar1,(FLogCategoryBase *)&LogCore);
  return;
}

// OnSend @ 1488d0140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceService::OnSend
          (FTraceService *this,FTraceControlSend *param_1,TSharedRef<IMessageContext,1> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001488d0143. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))();
  return;
}

// OnSetStatNamedEvents @ 1488d0150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceService::OnSetStatNamedEvents
          (FTraceService *this,FTraceControlSetStatNamedEvents *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  if (param_1->bEnabled != false) {
    if (GCycleStatsShouldEmitNamedEvents == 0) {
      GCycleStatsShouldEmitNamedEvents = 1;
    }
    if (param_1->bEnabled != false) {
      return;
    }
  }
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    GCycleStatsShouldEmitNamedEvents = 0;
  }
  return;
}

// OnSettingsPing @ 1488d0190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceService::OnSettingsPing
          (FTraceService *this,FTraceControlSettingsPing *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  code *pcVar1;
  undefined8 *puVar2;
  bool bVar3;
  FInitializeDesc *pFVar4;
  FMessageAddress *pFVar5;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar6;
  UScriptStruct *pUVar7;
  longlong lVar8;
  undefined8 *local_res8;
  undefined8 **local_res18;
  FDateTime local_res20;
  FTimespan local_88;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_80;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_70;
  code *local_60;
  undefined8 ***local_58;
  code *local_50;
  undefined8 ***local_48;
  TSharedPtr<IMessageAttachment,1> local_40;
  
  local_res8 = FMemory::Malloc(0x18,0);
  *local_res8 = 0;
  local_res8[1] = 0;
  local_res8[2] = 0;
  pFVar4 = FTraceAuxiliary::GetInitializeDesc();
  if (pFVar4 != (FInitializeDesc *)0x0) {
    *(bool *)((longlong)local_res8 + 1) = pFVar4->bUseImportantCache;
    *(bool *)local_res8 = pFVar4->bUseWorkerThread;
    *(uint *)((longlong)local_res8 + 4) = pFVar4->TailSizeBytes;
  }
  local_res18 = &local_res8;
  local_58 = &local_res18;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTraceService::OnSettingsPing'::__l2::<lambda_1>,enum_FTraceAuxiliary::EEnumerateResult,FTraceAuxiliary::FChannelPreset_const_&>
             ::Call;
  FTraceAuxiliary::EnumerateFixedChannelPresets
            ((TFunctionRef<FTraceAuxiliary::EEnumerateResult___cdecl(FTraceAuxiliary::FChannelPreset_const_&)>
              *)&local_60);
  local_48 = &local_res18;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTraceService::OnSettingsPing'::__l2::<lambda_1>,enum_FTraceAuxiliary::EEnumerateResult,FTraceAuxiliary::FChannelPreset_const_&>
             ::Call;
  FTraceAuxiliary::EnumerateChannelPresetsFromSettings
            ((TFunctionRef<FTraceAuxiliary::EEnumerateResult___cdecl(FTraceAuxiliary::FChannelPreset_const_&)>
              *)&local_50);
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
  pFVar5 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
  puVar2 = local_res8;
  local_res20.Ticks = 0x2bca2875f4373fff;
  local_88.Ticks = 0;
  local_70.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Array.ArrayNum = 0;
  local_70.Array.ArrayMax = 0;
  pTVar6 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add(&local_70,pFVar5);
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = (pTVar6->Array).ArrayNum;
  lVar8 = (longlong)local_80.ArrayNum;
  _Src = (pTVar6->Array).AllocatorInstance.Data;
  if (local_80.ArrayNum == 0) {
    local_80.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_80.ArrayNum,0,&local_80.AllocatorInstance,local_80.ArrayNum,
               &local_80.ArrayMax);
    memcpy(local_80.AllocatorInstance.Data,_Src,lVar8 << 4);
  }
  local_40.Object = (IMessageAttachment *)0x0;
  local_40.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pUVar7 = FTraceControlSettings::StaticStruct();
  FMessageEndpoint::Send(this_00,puVar2,pUVar7,None,&local_40,&local_80,&local_88,&local_res20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  if (local_70.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Array.AllocatorInstance.Data);
  }
  return;
}

// OnSnapshotFile @ 1488d0370

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceService::OnSnapshotFile
          (FTraceService *this,FTraceControlSnapshotFile *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  if ((param_1->File).Data.ArrayNum != 0) {
    FTraceAuxiliary::WriteSnapshot((wchar_t *)(param_1->File).Data.AllocatorInstance.Data);
    return;
  }
  FTraceAuxiliary::WriteSnapshot(L"");
  return;
}

// OnSnapshotSend @ 1488d0390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceService::OnSnapshotSend
          (FTraceService *this,FTraceControlSnapshotSend *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  if ((param_1->Host).Data.ArrayNum != 0) {
    FTraceAuxiliary::SendSnapshot((wchar_t *)(param_1->Host).Data.AllocatorInstance.Data,0);
    return;
  }
  FTraceAuxiliary::SendSnapshot(L"",0);
  return;
}

// OnStatusPing @ 1488d03c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceService::OnStatusPing
          (FTraceService *this,FTraceControlStatusPing *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  FTraceControlStatus *pFVar3;
  FMessageAddress *pFVar4;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar5;
  UScriptStruct *pUVar6;
  longlong lVar7;
  FDateTime local_res8;
  FTimespan local_res18;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_48;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_38;
  TSharedPtr<IMessageAttachment,1> local_28;
  
  pFVar3 = FMemory::Malloc(0x68,0);
  pFVar3->CacheWaste = 0;
  pFVar3->bAreStatNamedEventsEnabled = false;
  pFVar3->bIsPaused = false;
  pFVar3->bIsTracing = false;
  pFVar3->field_0x57 = 0;
  *(undefined4 *)&pFVar3->field_0x61 = 0;
  *(undefined2 *)&pFVar3->field_0x65 = 0;
  pFVar3->field_0x67 = 0;
  (pFVar3->Endpoint).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar3->Endpoint).Data.ArrayNum = 0;
  (pFVar3->Endpoint).Data.ArrayMax = 0;
  (pFVar3->SessionGuid).A = 0;
  (pFVar3->SessionGuid).B = 0;
  (pFVar3->SessionGuid).C = 0;
  (pFVar3->SessionGuid).D = 0;
  (pFVar3->TraceGuid).A = 0;
  (pFVar3->TraceGuid).B = 0;
  (pFVar3->TraceGuid).C = 0;
  (pFVar3->TraceGuid).D = 0;
  pFVar3->BytesSent = 0;
  pFVar3->BytesTraced = 0;
  pFVar3->MemoryUsed = 0;
  pFVar3->CacheAllocated = 0;
  pFVar3->CacheUsed = 0;
  (pFVar3->StatusTimestamp).Ticks = 0;
  pFVar3->TraceSystemStatus = '\0';
  FillTraceStatusMessage(pFVar3);
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
  pFVar4 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
  local_res18.Ticks = 0;
  local_res8.Ticks = 0x2bca2875f4373fff;
  local_38.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Array.ArrayNum = 0;
  local_38.Array.ArrayMax = 0;
  pTVar5 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add(&local_38,pFVar4);
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = (pTVar5->Array).ArrayNum;
  lVar7 = (longlong)local_48.ArrayNum;
  _Src = (pTVar5->Array).AllocatorInstance.Data;
  if (local_48.ArrayNum == 0) {
    local_48.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_48.ArrayNum,0,&local_48.AllocatorInstance,local_48.ArrayNum,
               &local_48.ArrayMax);
    memcpy(local_48.AllocatorInstance.Data,_Src,lVar7 << 4);
  }
  local_28.Object = (IMessageAttachment *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pUVar6 = FTraceControlStatus::StaticStruct();
  FMessageEndpoint::Send(this_00,pFVar3,pUVar6,None,&local_28,&local_48,&local_res18,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Array.AllocatorInstance.Data);
  }
  return;
}

// OnStop @ 1488d0590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceService::OnStop
          (FTraceService *this,FTraceControlStop *param_1,TSharedRef<IMessageContext,1> *param_2)

{
  FTraceAuxiliaryImpl::Stop(&GTraceAuxiliary);
  return;
}

