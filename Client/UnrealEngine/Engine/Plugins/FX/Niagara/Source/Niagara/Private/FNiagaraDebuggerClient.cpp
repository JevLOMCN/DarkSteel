// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 23

// FNiagaraDebuggerClient @ 149274f50

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDebuggerClient * __thiscall
FNiagaraDebuggerClient::FNiagaraDebuggerClient(FNiagaraDebuggerClient *this)

{
  FString *pFVar1;
  TSharedPtr<FMessageEndpoint,1> *pTVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  FName FVar5;
  FMessageEndpoint *pFVar6;
  FScriptContainerElement *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  int iVar14;
  FName *pFVar15;
  FModuleManager *this_00;
  IModuleInterface *pIVar16;
  undefined8 *puVar17;
  FTaskGraphInterface *pFVar18;
  TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient> *pTVar19;
  FNiagaraDebuggerClient *pFVar20;
  TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient> *pTVar21;
  UPackage *pUVar22;
  FTopLevelAssetPath *pFVar23;
  FGuid *pFVar24;
  FTSTicker *this_01;
  ulong64 uVar25;
  TWeakPtr<FTSTicker::FElement,1> *pTVar26;
  longlong lVar27;
  TRange<EMessageScope> local_res8 [2];
  TRange<EMessageScope> local_res10 [2];
  FName local_res18;
  TRawPtrProxy<TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient>_>
  local_res20;
  undefined1 local_238 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_220;
  ForAnyElementType FStack_218;
  int local_210;
  ForAnyElementType local_208;
  undefined8 local_200;
  bool local_1f8;
  FName local_1f4;
  Type local_1ec;
  undefined1 local_1e8 [8];
  FDelegateAllocation local_1e0;
  FString local_1d0;
  TSharedPtr<IMessageHandler,1> local_1c0;
  TSharedPtr<IMessageHandler,1> local_1b0;
  TSharedPtr<IMessageHandler,1> local_1a0;
  TSharedPtr<IMessageHandler,1> local_190;
  TSharedPtr<IMessageHandler,1> local_180;
  TSharedPtr<IMessageHandler,1> local_170;
  TSharedPtr<IMessageHandler,1> local_160;
  FString local_150;
  FString local_140;
  TSharedPtr<FMessageEndpoint,1> local_130;
  TRawPtrProxy<TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient>_>
  local_120;
  TRawPtrProxy<TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient>_>
  local_118;
  TRawPtrProxy<TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient>_> local_110;
  TRawPtrProxy<TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient>_>
  local_108;
  TRawPtrProxy<TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient>_>
  local_100;
  TRawPtrProxy<TRawMessageHandler<FNiagaraSystemSimCacheCaptureRequest,FNiagaraDebuggerClient>_>
  local_f8;
  FDestructionSentinel local_f0;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
  FDelegateAllocation *local_a8;
  FName local_a0;
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  TWeakPtr<FTSTicker::FElement,1> local_88;
  FTopLevelAssetPath local_78;
  FTopLevelAssetPath local_68;
  FGuid local_58;
  
  pTVar21 = (TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient> *)0x0;
  (this->OutlinerSettings).bGatherPerfData = true;
  pFVar1 = &this->InstanceName;
  (this->SessionId).A = 0;
  (this->SessionId).B = 0;
  pTVar2 = &this->MessageEndpoint;
  (this->SessionId).C = 0;
  (this->SessionId).D = 0;
  (this->InstanceId).A = 0;
  (this->InstanceId).B = 0;
  this->_padding_ = (longlong)&___7FNiagaraDebuggerClient__6B_;
  (this->InstanceId).C = 0;
  (this->InstanceId).D = 0;
  (this->Connection).UniqueId.A = 0;
  (this->Connection).UniqueId.B = 0;
  (this->Connection).UniqueId.C = 0;
  (this->Connection).UniqueId.D = 0;
  (this->OutlinerSettings).bTriggerCapture = false;
  (this->OutlinerSettings).CaptureDelayFrames = 0;
  (this->TickerHandle).Object = (FElement *)0x0;
  (this->TickerHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->OutlinerCountdown = 0;
  *(undefined8 *)&this->OutlinerOnCapture = 0;
  *(undefined8 *)&(this->OutlinerOnCapture).field_0x8 = 0;
  *(undefined4 *)&(this->OutlinerOnCapture).field_0x10 = 0;
  (this->StatsListener).Object = (FNiagaraOutlinerPerfListener *)0x0;
  (this->StatsListener).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SimCacheCaptures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimCacheCaptures).ArrayNum = 0;
  (this->SimCacheCaptures).ArrayMax = 0;
  (this->OutlinerSettings).SimCacheCaptureFrames = 10;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceName).Data.ArrayNum = 0;
  (this->InstanceName).Data.ArrayMax = 0;
  pTVar2->Object = (FMessageEndpoint *)0x0;
  (this->MessageEndpoint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  ::FName::FName(&local_res18,"FNiagaraDebuggerClient");
  pFVar15 = ::FName::FName(&local_a0,"Messaging");
  FVar5 = *pFVar15;
  this_00 = FModuleManager::Get();
  pIVar16 = FModuleManager::LoadModuleChecked(this_00,FVar5);
  puVar17 = (undefined8 *)(**(code **)((longlong)*pIVar16 + 0x68))(pIVar16,local_98);
  local_238._0_8_ = *puVar17;
  local_238._8_8_ = puVar17[1];
  if ((TReferenceControllerBase<1> *)local_238._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_238._8_8_)->WeakReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_238._8_8_)->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  local_220.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_218.Data = (FScriptContainerElement *)0x0;
  local_1f4 = local_res18;
  local_238[0x10] = false;
  local_210 = 0;
  local_208.Data = (FScriptContainerElement *)0x0;
  local_200._0_4_ = 0;
  local_200._4_4_ = 0;
  local_1f8 = false;
  pFVar18 = FTaskGraphInterface::Get();
  local_1ec = (**(code **)((longlong)*pFVar18 + 0x10))(pFVar18,0);
  pTVar19 = ::operator_new(0x18);
  local_res20.Object = pTVar21;
  if (pTVar19 != (TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient> *)0x0
     ) {
    pTVar19->Handler = this;
    pTVar19->_padding_ =
         (longlong)
         &
         ___7__TRawMessageHandler_UFNiagaraDebuggerRequestConnection__VFNiagaraDebuggerClient____6B_
    ;
    pTVar19->Func = (pmf_ea8e93d7)HandleConnectionRequestMessage;
    local_res20.Object = pTVar19;
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient>_>
            (&local_1c0,&local_res20);
  if (((local_208.Data <= &local_1c0) &&
      (&local_1c0 <
       (TSharedPtr<IMessageHandler,1> *)(local_208.Data + (longlong)local_200._4_4_ * 0x10))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar9 = (code *)swi(3);
    pFVar20 = (FNiagaraDebuggerClient *)(*pcVar9)();
    return pFVar20;
  }
  iVar14 = (int)local_200;
  if ((int)local_200 == local_200._4_4_) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_208,(int *)((longlong)&local_200 + 4));
  }
  *(IMessageHandler **)&local_208.Data[(longlong)iVar14 * 0x10].field_0x0 = local_1c0.Object;
  *(TReferenceControllerBase<1> **)(local_208.Data + (longlong)iVar14 * 0x10 + 8) =
       local_1c0.SharedReferenceCount.ReferenceController;
  local_1c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1c0.Object = (IMessageHandler *)0x0;
  local_200._0_4_ = iVar14 + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar19 = ::operator_new(0x18);
  local_120.Object =
       (TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient> *)pTVar21;
  if (pTVar19 != (TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient> *)0x0
     ) {
    pTVar19->Handler = this;
    pTVar19->_padding_ =
         (longlong)
         &___7__TRawMessageHandler_UFNiagaraDebuggerConnectionClosed__VFNiagaraDebuggerClient____6B_
    ;
    pTVar19->Func = (pmf_ea8e93d7)HandleConnectionClosedMessage;
    local_120.Object =
         (TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient> *)pTVar19;
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient>_>
            (&local_1b0,&local_120);
  if (((local_208.Data <= &local_1b0) &&
      (&local_1b0 <
       (TSharedPtr<IMessageHandler,1> *)(local_208.Data + (longlong)local_200._4_4_ * 0x10))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar9 = (code *)swi(3);
    pFVar20 = (FNiagaraDebuggerClient *)(*pcVar9)();
    return pFVar20;
  }
  if ((int)local_200 == local_200._4_4_) {
    local_200._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_208,(int *)((longlong)&local_200 + 4));
  }
  *(IMessageHandler **)&local_208.Data[(longlong)(int)local_200 * 0x10].field_0x0 = local_1b0.Object
  ;
  *(TReferenceControllerBase<1> **)(local_208.Data + (longlong)(int)local_200 * 0x10 + 8) =
       local_1b0.SharedReferenceCount.ReferenceController;
  local_1b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1b0.Object = (IMessageHandler *)0x0;
  local_200._0_4_ = (int)local_200 + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar19 = ::operator_new(0x18);
  local_118.Object =
       (TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient> *)pTVar21;
  if (pTVar19 != (TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient> *)0x0
     ) {
    pTVar19->Handler = this;
    pTVar19->_padding_ =
         (longlong)
         &
         ___7__TRawMessageHandler_UFNiagaraDebuggerExecuteConsoleCommand__VFNiagaraDebuggerClient____6B_
    ;
    pTVar19->Func = (pmf_ea8e93d7)HandleExecConsoleCommandMessage;
    local_118.Object =
         (TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient> *)pTVar19
    ;
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient>_>
            (&local_1a0,&local_118);
  if (((local_208.Data <= &local_1a0) &&
      (&local_1a0 <
       (TSharedPtr<IMessageHandler,1> *)(local_208.Data + (longlong)local_200._4_4_ * 0x10))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar9 = (code *)swi(3);
    pFVar20 = (FNiagaraDebuggerClient *)(*pcVar9)();
    return pFVar20;
  }
  if ((int)local_200 == local_200._4_4_) {
    local_200._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_208,(int *)((longlong)&local_200 + 4));
  }
  *(IMessageHandler **)&local_208.Data[(longlong)(int)local_200 * 0x10].field_0x0 = local_1a0.Object
  ;
  *(TReferenceControllerBase<1> **)(local_208.Data + (longlong)(int)local_200 * 0x10 + 8) =
       local_1a0.SharedReferenceCount.ReferenceController;
  local_1a0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1a0.Object = (IMessageHandler *)0x0;
  local_200._0_4_ = (int)local_200 + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar19 = ::operator_new(0x18);
  local_110.Object =
       (TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient> *)pTVar21;
  if (pTVar19 != (TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient> *)0x0
     ) {
    pTVar19->Handler = this;
    pTVar19->_padding_ =
         (longlong)
         &___7__TRawMessageHandler_UFNiagaraDebugHUDSettingsData__VFNiagaraDebuggerClient____6B_;
    pTVar19->Func = (pmf_ea8e93d7)HandleDebugHUDSettingsMessage;
    local_110.Object =
         (TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient> *)pTVar19;
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient>_>
            (&local_190,&local_110);
  if (((local_208.Data <= &local_190) &&
      (&local_190 <
       (TSharedPtr<IMessageHandler,1> *)(local_208.Data + (longlong)local_200._4_4_ * 0x10))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar9 = (code *)swi(3);
    pFVar20 = (FNiagaraDebuggerClient *)(*pcVar9)();
    return pFVar20;
  }
  if ((int)local_200 == local_200._4_4_) {
    local_200._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_208,(int *)((longlong)&local_200 + 4));
  }
  *(IMessageHandler **)&local_208.Data[(longlong)(int)local_200 * 0x10].field_0x0 = local_190.Object
  ;
  *(TReferenceControllerBase<1> **)(local_208.Data + (longlong)(int)local_200 * 0x10 + 8) =
       local_190.SharedReferenceCount.ReferenceController;
  local_190.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_190.Object = (IMessageHandler *)0x0;
  local_200._0_4_ = (int)local_200 + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar19 = ::operator_new(0x18);
  local_108.Object =
       (TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient> *)pTVar21;
  if (pTVar19 != (TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient> *)0x0
     ) {
    pTVar19->Handler = this;
    pTVar19->_padding_ =
         (longlong)
         &
         ___7__TRawMessageHandler_UFNiagaraRequestSimpleClientInfoMessage__VFNiagaraDebuggerClient____6B_
    ;
    pTVar19->Func = (pmf_ea8e93d7)HandleRequestSimpleClientInfoMessage;
    local_108.Object =
         (TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient> *)
         pTVar19;
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient>_>
            (&local_180,&local_108);
  if (((local_208.Data <= &local_180) &&
      (&local_180 <
       (TSharedPtr<IMessageHandler,1> *)(local_208.Data + (longlong)local_200._4_4_ * 0x10))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar9 = (code *)swi(3);
    pFVar20 = (FNiagaraDebuggerClient *)(*pcVar9)();
    return pFVar20;
  }
  if ((int)local_200 == local_200._4_4_) {
    local_200._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_208,(int *)((longlong)&local_200 + 4));
  }
  *(IMessageHandler **)&local_208.Data[(longlong)(int)local_200 * 0x10].field_0x0 = local_180.Object
  ;
  *(TReferenceControllerBase<1> **)(local_208.Data + (longlong)(int)local_200 * 0x10 + 8) =
       local_180.SharedReferenceCount.ReferenceController;
  local_180.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_180.Object = (IMessageHandler *)0x0;
  local_200._0_4_ = (int)local_200 + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar19 = ::operator_new(0x18);
  local_100.Object =
       (TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient> *)pTVar21;
  if (pTVar19 != (TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient> *)0x0
     ) {
    pTVar19->Handler = this;
    pTVar19->_padding_ =
         (longlong)
         &___7__TRawMessageHandler_UFNiagaraOutlinerCaptureSettings__VFNiagaraDebuggerClient____6B_;
    pTVar19->Func = (pmf_ea8e93d7)HandleOutlinerSettingsMessage;
    local_100.Object =
         (TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient> *)pTVar19;
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient>_>
            (&local_170,&local_100);
  if (((local_208.Data <= &local_170) &&
      (&local_170 <
       (TSharedPtr<IMessageHandler,1> *)(local_208.Data + (longlong)local_200._4_4_ * 0x10))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar9 = (code *)swi(3);
    pFVar20 = (FNiagaraDebuggerClient *)(*pcVar9)();
    return pFVar20;
  }
  if ((int)local_200 == local_200._4_4_) {
    local_200._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_208,(int *)((longlong)&local_200 + 4));
  }
  *(IMessageHandler **)&local_208.Data[(longlong)(int)local_200 * 0x10].field_0x0 = local_170.Object
  ;
  *(TReferenceControllerBase<1> **)(local_208.Data + (longlong)(int)local_200 * 0x10 + 8) =
       local_170.SharedReferenceCount.ReferenceController;
  local_170.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_170.Object = (IMessageHandler *)0x0;
  local_200._0_4_ = (int)local_200 + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar19 = ::operator_new(0x18);
  if (pTVar19 != (TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient> *)0x0
     ) {
    pTVar19->Handler = this;
    pTVar19->_padding_ =
         (longlong)
         &
         ___7__TRawMessageHandler_UFNiagaraSystemSimCacheCaptureRequest__VFNiagaraDebuggerClient____6B_
    ;
    pTVar19->Func = (pmf_ea8e93d7)HandleSimCacheCaptureRequestMessage;
    pTVar21 = pTVar19;
  }
  local_f8.Object =
       (TRawMessageHandler<FNiagaraSystemSimCacheCaptureRequest,FNiagaraDebuggerClient> *)pTVar21;
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FNiagaraSystemSimCacheCaptureRequest,FNiagaraDebuggerClient>_>
            (&local_160,&local_f8);
  if (((local_208.Data <= &local_160) &&
      (&local_160 <
       (TSharedPtr<IMessageHandler,1> *)(local_208.Data + (longlong)local_200._4_4_ * 0x10))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar9 = (code *)swi(3);
    pFVar20 = (FNiagaraDebuggerClient *)(*pcVar9)();
    return pFVar20;
  }
  if ((int)local_200 == local_200._4_4_) {
    local_200._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_208,(int *)((longlong)&local_200 + 4));
  }
  lVar27 = (longlong)(int)local_200;
  local_200._0_4_ = (int)local_200 + 1;
  *(IMessageHandler **)&local_208.Data[lVar27 * 0x10].field_0x0 = local_160.Object;
  *(TReferenceControllerBase<1> **)(local_208.Data + lVar27 * 0x10 + 8) =
       local_160.SharedReferenceCount.ReferenceController;
  local_160.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_160.Object = (IMessageHandler *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FMessageEndpointBuilder::Build((FMessageEndpointBuilder *)local_238,&local_130);
  if (pTVar2 != &local_130) {
    pTVar2->Object = local_130.Object;
    local_130.Object = (FMessageEndpoint *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MessageEndpoint).SharedReferenceCount,&local_130.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_130.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<IMessageHandler,1>,int>
            ((TSharedPtr<IMessageHandler,1> *)local_208.Data,(int)local_200);
  if ((TSharedPtr<IMessageHandler,1> *)local_208.Data != (TSharedPtr<IMessageHandler,1> *)0x0) {
    FMemory::Free(local_208.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_220,(FWriteAccessScope *)&local_f0);
  if ((local_210 != 0) && (FStack_218.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_218.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_218,0,0,0x10);
    local_210 = 0;
  }
  if (local_f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
  }
  if (FStack_218.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_218.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_220.AccessDetector);
  if ((TReferenceControllerBase<1> *)local_238._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = (atomic<int> *)(local_238._8_8_ + 0xc);
    aVar4 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(*(longlong *)local_238._8_8_ + 8))(local_238._8_8_,1);
    }
  }
  pFVar6 = pTVar2->Object;
  if (pFVar6 != (FMessageEndpoint *)0x0) {
    local_res8[0].LowerBound.Type.Value = '\x01';
    local_res8[0].LowerBound.Value = Thread;
    local_res8[0].UpperBound.Type.Value = '\x02';
    local_res8[0].UpperBound.Value = Thread;
    if (Z_Registration_Info_UScriptStruct_FNiagaraDebuggerRequestConnection.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar22 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNiagaraDebuggerRequestConnection.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection,
                           (UObject *)pUVar22,L"NiagaraDebuggerRequestConnection");
    }
    pFVar23 = UStruct::GetStructPathName
                        ((UStruct *)
                         Z_Registration_Info_UScriptStruct_FNiagaraDebuggerRequestConnection.
                         OuterSingleton,&local_78);
    FMessageEndpoint::Subscribe(pFVar6,pFVar23,local_res8);
    if ((pTVar2->Object == (FMessageEndpoint *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      pFVar20 = (FNiagaraDebuggerClient *)(*pcVar9)();
      return pFVar20;
    }
    pFVar6 = pTVar2->Object;
    local_res10[0].LowerBound.Type.Value = '\x01';
    local_res10[0].LowerBound.Value = Thread;
    local_res10[0].UpperBound.Type.Value = '\x02';
    local_res10[0].UpperBound.Value = Thread;
    if (Z_Registration_Info_UScriptStruct_FNiagaraDebuggerConnectionClosed.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar22 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNiagaraDebuggerConnectionClosed.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed,
                           (UObject *)pUVar22,L"NiagaraDebuggerConnectionClosed");
    }
    pFVar23 = UStruct::GetStructPathName
                        ((UStruct *)
                         Z_Registration_Info_UScriptStruct_FNiagaraDebuggerConnectionClosed.
                         OuterSingleton,&local_68);
    FMessageEndpoint::Subscribe(pFVar6,pFVar23,local_res10);
  }
  this->SessionId = FApp::SessionId;
  pFVar24 = FApp::GetInstanceId(&local_58);
  uVar10 = pFVar24->B;
  uVar11 = pFVar24->C;
  uVar12 = pFVar24->D;
  (this->InstanceId).A = pFVar24->A;
  (this->InstanceId).B = uVar10;
  (this->InstanceId).C = uVar11;
  (this->InstanceId).D = uVar12;
  FWindowsPlatformProcess::GetCurrentProcessId();
  FWindowsPlatformProcess::ComputerName();
  ::FString::PrintfImpl(&local_1d0,L"%s-%i");
  if (pFVar1 != &local_1d0) {
    pFVar7 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_1d0.Data.AllocatorInstance.Data;
    (this->InstanceName).Data.ArrayNum = local_1d0.Data.ArrayNum;
    (this->InstanceName).Data.ArrayMax = local_1d0.Data.ArrayMax;
    local_1d0.Data.ArrayNum = 0;
    local_1d0.Data.ArrayMax = 0;
    local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  if (4 < (byte)LogNiagaraDebuggerClient._0_1_) {
    local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.Data.ArrayNum = 0;
    local_140.Data.ArrayMax = 0;
    FGuid::AppendString(&this->InstanceId,&local_140,Digits);
    local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.Data.ArrayNum = 0;
    local_150.Data.ArrayMax = 0;
    FGuid::AppendString(&this->SessionId,&local_150,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagaraDebuggerClient);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
  }
  this_01 = FTSTicker::GetCoreTicker();
  local_1e8 = (undefined1  [8])0x0;
  local_1e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
             (FWriteAccessScope *)&local_c0);
  local_a8 = &local_1e0;
  puVar17 = UE::Core::Private::DelegateAllocate(0x28,&local_1e0);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar25 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar25;
    *puVar17 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFNiagaraDebuggerClient____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar17[4] = Tick;
    puVar17[3] = this;
  }
  if (local_c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
  }
  pTVar26 = FTSTicker::AddTicker
                      (this_01,&local_88,
                       (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_1e8,0.0);
  if (&this->TickerHandle != pTVar26) {
    (this->TickerHandle).Object = pTVar26->Object;
    pTVar26->Object = (FElement *)0x0;
    pTVar8 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
    (this->TickerHandle).WeakReferenceCount.ReferenceController =
         (pTVar26->WeakReferenceCount).ReferenceController;
    (pTVar26->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar3 = &pTVar8->WeakReferenceCount;
      aVar4 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
      }
    }
  }
  if (local_88.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = &(local_88.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar4 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((local_88.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_88.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
             (FWriteAccessScope *)&local_d8);
  if ((local_1e0.DelegateSize != 0) &&
     (local_1e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1e0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1e0,0,0,0x10);
    local_1e0.DelegateSize = 0;
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  if (local_1e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1e0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e8);
  return this;
}

// ~FNiagaraDebuggerClient @ 14927a1a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDebuggerClient::~FNiagaraDebuggerClient(FNiagaraDebuggerClient *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  this->_padding_ = (longlong)&___7FNiagaraDebuggerClient__6B_;
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
  CloseConnection(this);
  DestructItems<FNiagaraSimCacheCaptureInfo,int>
            ((FNiagaraSimCacheCaptureInfo *)(this->SimCacheCaptures).AllocatorInstance.Data,
             (this->SimCacheCaptures).ArrayNum);
  pFVar3 = (this->SimCacheCaptures).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StatsListener).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OutlinerOnCapture);
  pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->InstanceName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// operator() @ 14927eb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FNiagaraDebuggerClient::HandleOutlinerSettingsMessage'::__l5::<lambda_1>::operator()
          (void *this,FNiagaraOutlinerData *param_1)

{
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  UPackage *pUVar4;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  FDateTime local_res8;
  FTimespan local_res18;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_48;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_38;
  TSharedPtr<IMessageAttachment,1> local_28;
  
  lVar6 = *(longlong *)this;
  if (((*(int *)(lVar6 + 0x54) == 0 && *(int *)(lVar6 + 0x50) == 0) && *(int *)(lVar6 + 0x4c) == 0)
      && *(int *)(lVar6 + 0x48) == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6175469772516359898>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDebuggerClient.cpp"
                       ,0x126,"Connection.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    puVar3 = FMemory::Malloc(0x50,0);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[4] = 0;
    *(undefined4 *)(puVar3 + 5) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = 0x80;
    *(undefined4 *)(puVar3 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0x34) = 0;
    puVar3[8] = 0;
    *(undefined4 *)(puVar3 + 9) = 0;
    if (Z_Registration_Info_UScriptStruct_FNiagaraOutlinerData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNiagaraOutlinerData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerData,(UObject *)pUVar4,
                           L"NiagaraOutlinerData");
    }
    UScriptStruct::CopyScriptStruct
              (Z_Registration_Info_UScriptStruct_FNiagaraOutlinerData.OuterSingleton,puVar3,param_1,
               1);
    lVar6 = *(longlong *)this;
    if (*(longlong *)(lVar6 + 0x38) == 0) {
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
    this_00 = *(FMessageEndpoint **)(lVar6 + 0x38);
    local_res8.Ticks = 0x2bca2875f4373fff;
    local_res18.Ticks = 0;
    local_38.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Array.ArrayNum = 0;
    local_38.Array.ArrayMax = 0;
    pTVar5 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add
                       (&local_38,(FMessageAddress *)(*(longlong *)this + 0x48));
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = (pTVar5->Array).ArrayNum;
    lVar6 = (longlong)local_48.ArrayNum;
    _Src = (pTVar5->Array).AllocatorInstance.Data;
    if (local_48.ArrayNum == 0) {
      local_48.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_48.ArrayNum,0,&local_48.AllocatorInstance,local_48.ArrayNum,
                 &local_48.ArrayMax);
      memcpy(local_48.AllocatorInstance.Data,_Src,lVar6 << 4);
    }
    local_28.Object = (IMessageAttachment *)0x0;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (Z_Registration_Info_UScriptStruct_FNiagaraDebuggerOutlinerUpdate.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNiagaraDebuggerOutlinerUpdate.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate,
                           (UObject *)pUVar4,L"NiagaraDebuggerOutlinerUpdate");
    }
    FMessageEndpoint::Send
              (this_00,puVar3,
               Z_Registration_Info_UScriptStruct_FNiagaraDebuggerOutlinerUpdate.OuterSingleton,
               Reliable,&local_28,&local_48,&local_res18,&local_res8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (local_38.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Array.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 14927edd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FNiagaraDebuggerClient::HandleSimCacheCaptureRequestMessage'::__l5::<lambda_1>::operator()
          (void *this,FNiagaraSystemSimCacheCaptureRequest *param_1,
          TObjectPtr<UNiagaraSimCache> param_2)

{
  uint uVar1;
  longlong lVar2;
  FName *pFVar3;
  FMessageEndpoint *this_00;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *this_01;
  UPackage *pUVar4;
  FDateTime local_res20;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_1b8;
  FTimespan local_1a8;
  TSharedPtr<IMessageAttachment,1> local_1a0;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_190;
  FArchiveState local_178;
  undefined8 local_e8;
  FName *local_e0;
  undefined8 local_d8;
  FObjectAndNameAsStringProxyArchive local_c8;
  
  lVar2 = *(longlong *)this;
  if ((((*(longlong *)(lVar2 + 0x38) != 0) &&
       (((*(int *)(lVar2 + 0x54) != 0 || *(int *)(lVar2 + 0x50) != 0) || *(int *)(lVar2 + 0x4c) != 0
        ) || *(int *)(lVar2 + 0x48) != 0)) && (*(longlong *)param_2.field0_0x0 != 0)) &&
     ((*(uint *)(*(longlong *)param_2.field0_0x0 + 8) >> 0x1e & 1) == 0)) {
    pFVar3 = FMemory::Malloc(0x18,0);
    pFVar3[1].ComparisonIndex = 0;
    pFVar3[1].Number = 0;
    pFVar3[2].ComparisonIndex.Value = 0;
    pFVar3->ComparisonIndex = 0;
    pFVar3->Number = 0;
    pFVar3[2].Number = 0;
    *pFVar3 = param_1->ComponentName;
    uVar1 = pFVar3[2].Number;
    pFVar3[2].ComparisonIndex.Value = 0;
    if ((int)uVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)(pFVar3 + 1),0,(int *)&pFVar3[2].Number);
    }
    local_178._padding_ = 0;
    local_178.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_178.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_178.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_178.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_178._40_8_ = 0;
    local_178.ArSerializingDefaults = 0;
    local_178.ArPortFlags = 0;
    local_178.ArMaxSerializeSize = 0;
    local_178.ArUEVer.FileVersionUE4 = 0;
    local_178.ArUEVer.FileVersionUE5 = 0;
    local_178.ArLicenseeUEVer = 0;
    local_178.ArEngineVer.Major = 0;
    local_178.ArEngineVer.Minor = 0;
    local_178.ArEngineVer.Patch = 0;
    local_178.ArEngineVer._6_2_ = 0;
    local_178.ArEngineVer.Changelist = 0;
    local_178.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_178.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_178.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_178.SerializedProperty = (FProperty *)0x0;
    local_178.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_178.bCustomVersionsAreReset = false;
    local_178._129_7_ = 0;
    local_178.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_178);
    local_e8 = 0;
    local_178._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_d8 = 0;
    local_e0 = pFVar3 + 1;
    FArchiveState::SetIsSaving(&local_178,true);
    (**(code **)(local_178._padding_ + 0x108))(&local_178,0);
    local_178._padding_ = (longlong)&___7FMemoryWriter__6B_;
    FObjectAndNameAsStringProxyArchive::FObjectAndNameAsStringProxyArchive
              (&local_c8,(FArchive *)&local_178,false);
    (**(code **)(**(longlong **)param_2.field0_0x0 + 200))
              (*(longlong **)param_2.field0_0x0,&local_c8);
    this_00 = TSharedPtr<FMessageEndpoint,1>::operator->
                        ((TSharedPtr<FMessageEndpoint,1> *)(*(longlong *)this + 0x38));
    local_1a8.Ticks = 0;
    local_1b8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_res20.Ticks = 0x2bca2875f4373fff;
    local_1b8.Array.ArrayNum = 0;
    local_1b8.Array.ArrayMax = 0;
    this_01 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add
                        (&local_1b8,(FMessageAddress *)(*(longlong *)this + 0x48));
    TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::
    operator_TArray<FMessageAddress,TSizedDefaultAllocator<32>_>(this_01,&local_190);
    local_1a0.Object = (IMessageAttachment *)0x0;
    local_1a0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (Z_Registration_Info_UScriptStruct_FNiagaraSystemSimCacheCaptureReply.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNiagaraSystemSimCacheCaptureReply.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply,
                           (UObject *)pUVar4,L"NiagaraSystemSimCacheCaptureReply");
    }
    FMessageEndpoint::Send
              (this_00,pFVar3,
               Z_Registration_Info_UScriptStruct_FNiagaraSystemSimCacheCaptureReply.OuterSingleton,
               Reliable,&local_1a0,&local_190,&local_1a8,&local_res20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a0.SharedReferenceCount.ReferenceController);
    if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.AllocatorInstance.Data);
    }
    if (local_1b8.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Array.AllocatorInstance.Data);
    }
    FObjectAndNameAsStringProxyArchive::~FObjectAndNameAsStringProxyArchive(&local_c8);
    FArchive::~FArchive((FArchive *)&local_178);
  }
  return;
}

// CaptureOutlinerData @ 149288850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraDebuggerClient::CaptureOutlinerData
          (FNiagaraDebuggerClient *this,FNiagaraOutlinerData *param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  UFXSystemComponent *this_00;
  FParticlePerfStatsListener_GatherAll *pFVar4;
  UFXSystemAsset *this_01;
  TReferenceControllerBase<1> *pTVar5;
  FNiagaraSystemInstance *this_02;
  FNiagaraSystemGpuComputeProxy *pFVar6;
  FScriptContainerElement *_Src;
  ForElementType<unsigned___int64> FVar7;
  code *pcVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  double dVar12;
  bool bVar13;
  bool bVar14;
  EInternalObjectFlags EVar15;
  uint uVar16;
  uint uVar17;
  ENetMode EVar18;
  int iVar19;
  ETickingGroup EVar20;
  undefined4 uVar21;
  UClass *pUVar22;
  UWorld *this_03;
  FString *pFVar23;
  FNiagaraOutlinerWorldData *this_04;
  FAccumulatedParticlePerfStats *pFVar24;
  FNiagaraOutlinerSystemData *pFVar25;
  ulonglong uVar26;
  FScriptContainerElement *pFVar27;
  FUObjectItem *pFVar28;
  ulonglong uVar29;
  wchar_t *pwVar30;
  longlong lVar31;
  ForAnyElementType *pFVar32;
  FScriptContainerElement *pFVar33;
  ForElementType<unsigned___int64> FVar34;
  FScriptContainerElement *pFVar35;
  FScriptContainerElement *pFVar36;
  float fVar37;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  TObjectIterator<UNiagaraComponent> local_70 [2];
  
  bVar9 = false;
  bVar14 = false;
  local_70[0].ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70[0].ObjectArray.ArrayNum = 0;
  local_70[0].ObjectArray.ArrayMax = 0;
  local_70[0].Index = 0xffffffff;
  EVar15 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar22 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
  GetObjectsOfClass(pUVar22,&local_70[0].ObjectArray,true,RF_ClassDefaultObject,
                    EVar15 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UNiagaraComponent>::Advance(local_70);
  dVar12 = __real_412e848000000000;
  bVar11 = 0;
  do {
    uVar26 = 0;
    lVar31 = (longlong)local_70[0].Index;
    if ((local_70[0].Index < 0) || (local_70[0].ObjectArray.ArrayNum <= local_70[0].Index)) {
      if (local_70[0].ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70[0].ObjectArray.AllocatorInstance.Data);
      }
      return;
    }
    uVar16 = 0;
    uVar17 = uVar16;
    if (local_70[0].Index < local_70[0].ObjectArray.ArrayNum) {
      uVar17 = (uint)~local_70[0].Index >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    this_00 = *(UFXSystemComponent **)(local_70[0].ObjectArray.AllocatorInstance.Data + lVar31 * 8);
    bVar10 = bVar11;
    if ((this_00 != (UFXSystemComponent *)0x0) && (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) {
      this_03 = (UWorld *)this_00->_padding_;
      if ((this_03 == (UWorld *)0x0) &&
         (this_03 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00),
         this_03 == (UWorld *)0x0)) {
        bVar14 = true;
        pFVar23 = ::FString::FString(&local_c0,L"Null World");
      }
      else {
        bVar9 = true;
        pFVar23 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)this_03,&local_b0,(UObject *)0x0);
      }
      iVar19 = (pFVar23->Data).ArrayNum;
      if (iVar19 == 0) {
        pwVar30 = L"";
      }
      else {
        pwVar30 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
        uVar16 = iVar19 - 1;
      }
      uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar16,pwVar30);
      this_04 = TMapBase<FString,FNiagaraOutlinerWorldData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FNiagaraOutlinerWorldData,0>_>
                ::FindOrAddImpl<FString>
                          ((TMapBase<FString,FNiagaraOutlinerWorldData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FNiagaraOutlinerWorldData,0>_>
                            *)param_1,uVar17,pFVar23);
      if ((bVar14) &&
         (bVar14 = false, local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if ((bVar9) &&
         (bVar9 = false, local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if (this_03 != (UWorld *)0x0) {
        bVar13 = UWorld::HasBegunPlay(this_03);
        this_04->bHasBegunPlay = bVar13;
        this_04->WorldType = (this_03->WorldType).Value;
        EVar18 = UWorld::InternalGetNetMode(this_03);
        this_04->NetMode = (uchar)EVar18;
        pFVar4 = (FParticlePerfStatsListener_GatherAll *)(this->StatsListener).Object;
        if ((pFVar4 != (FParticlePerfStatsListener_GatherAll *)0x0) &&
           (pFVar24 = FParticlePerfStatsListener_GatherAll::GetStats(pFVar4,this_03),
           pFVar24 != (FAccumulatedParticlePerfStats *)0x0)) {
          fVar37 = FAccumulatedParticlePerfStats_GT::GetPerFrameAvg(&pFVar24->GameThreadStats);
          (this_04->AveragePerFrameTime).GameThread = fVar37;
          bVar13 = IsInGameThread();
          if ((!bVar13) &&
             ((bVar13 = IsInRenderingThread(), !bVar13 &&
              (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<392709136413884568>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                   ,0x98,"IsInRenderingThread()"), bVar13)))) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar17 = (pFVar24->RenderThreadStats).NumFrames;
          uVar29 = uVar26;
          if (uVar17 != 0) {
            uVar29 = ((pFVar24->RenderThreadStats).AccumulatedStats.GetDynamicMeshElementsCycles +
                     (pFVar24->RenderThreadStats).AccumulatedStats.RenderUpdateCycles) /
                     (ulonglong)uVar17;
          }
          (this_04->AveragePerFrameTime).RenderThread =
               (float)((double)uVar29 * FGenericPlatformTime::SecondsPerCycle64 * dVar12);
          fVar37 = FAccumulatedParticlePerfStats_GT::GetPerFrameMax(&pFVar24->GameThreadStats,0);
          (this_04->MaxPerFrameTime).GameThread = fVar37;
          bVar13 = IsInGameThread();
          if (((!bVar13) && (bVar13 = IsInRenderingThread(), !bVar13)) &&
             (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<392709136413884568>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                  ,0x98,"IsInRenderingThread()"), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar37 = FAccumulatedParticlePerfStats_RT::GetPerFrameMax(&pFVar24->RenderThreadStats,0);
          (this_04->MaxPerFrameTime).RenderThread = fVar37;
        }
      }
      this_01 = (UFXSystemAsset *)this_00[1]._padding_;
      bVar13 = this_01 == (UFXSystemAsset *)0x0;
      if (bVar13) {
        pFVar23 = ::FString::FString(&local_a0,L"Null System");
      }
      else {
        pFVar23 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)this_01,&local_90,(UObject *)0x0);
      }
      bVar10 = bVar11 | bVar13;
      iVar19 = (pFVar23->Data).ArrayNum;
      if (iVar19 == 0) {
        pwVar30 = L"";
      }
      else {
        pwVar30 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
      }
      uVar16 = 0;
      uVar17 = iVar19 - 1;
      if (iVar19 == 0) {
        uVar17 = uVar16;
      }
      uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar17,pwVar30);
      pFVar25 = TMapBase<FString,FNiagaraOutlinerSystemData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FNiagaraOutlinerSystemData,0>_>
                ::FindOrAddImpl<FString>
                          ((TMapBase<FString,FNiagaraOutlinerSystemData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FNiagaraOutlinerSystemData,0>_>
                            *)this_04,uVar17,pFVar23);
      if (((bool)(bVar11 | bVar13)) &&
         (bVar10 = 0, local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if ((!bVar13) && (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (((this_01 != (UFXSystemAsset *)0x0) &&
          (pFVar4 = (FParticlePerfStatsListener_GatherAll *)(this->StatsListener).Object,
          pFVar4 != (FParticlePerfStatsListener_GatherAll *)0x0)) &&
         (pFVar24 = FParticlePerfStatsListener_GatherAll::GetStats(pFVar4,this_01),
         pFVar24 != (FAccumulatedParticlePerfStats *)0x0)) {
        fVar37 = FAccumulatedParticlePerfStats_GT::GetPerFrameAvg(&pFVar24->GameThreadStats);
        (pFVar25->AveragePerFrameTime).GameThread = fVar37;
        bVar13 = IsInGameThread();
        if (((!bVar13) && (bVar13 = IsInRenderingThread(), !bVar13)) &&
           (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<392709136413884568>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                ,0x98,"IsInRenderingThread()"), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar17 = (pFVar24->RenderThreadStats).NumFrames;
        uVar29 = uVar26;
        if (uVar17 != 0) {
          uVar29 = ((pFVar24->RenderThreadStats).AccumulatedStats.GetDynamicMeshElementsCycles +
                   (pFVar24->RenderThreadStats).AccumulatedStats.RenderUpdateCycles) /
                   (ulonglong)uVar17;
        }
        (pFVar25->AveragePerFrameTime).RenderThread =
             (float)((double)uVar29 * FGenericPlatformTime::SecondsPerCycle64 * dVar12);
        fVar37 = FAccumulatedParticlePerfStats_GT::GetPerFrameMax(&pFVar24->GameThreadStats,0);
        (pFVar25->MaxPerFrameTime).GameThread = fVar37;
        bVar13 = IsInGameThread();
        if (((!bVar13) && (bVar13 = IsInRenderingThread(), !bVar13)) &&
           (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<392709136413884568>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                ,0x98,"IsInRenderingThread()"), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar37 = FAccumulatedParticlePerfStats_RT::GetPerFrameMax(&pFVar24->RenderThreadStats,0);
        (pFVar25->MaxPerFrameTime).RenderThread = fVar37;
        fVar37 = FAccumulatedParticlePerfStats_GT::GetPerInstanceAvg(&pFVar24->GameThreadStats);
        (pFVar25->AveragePerInstanceTime).GameThread = fVar37;
        bVar13 = IsInGameThread();
        if (((!bVar13) && (bVar13 = IsInRenderingThread(), !bVar13)) &&
           (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<392709136413884568>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                ,0x98,"IsInRenderingThread()"), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar29 = (pFVar24->RenderThreadStats).AccumulatedStats.NumInstances;
        if (uVar29 != 0) {
          uVar26 = ((pFVar24->RenderThreadStats).AccumulatedStats.GetDynamicMeshElementsCycles +
                   (pFVar24->RenderThreadStats).AccumulatedStats.RenderUpdateCycles) / uVar29;
        }
        (pFVar25->AveragePerInstanceTime).RenderThread =
             (float)((double)uVar26 * FGenericPlatformTime::SecondsPerCycle64 * dVar12);
        fVar37 = FAccumulatedParticlePerfStats_GT::GetPerInstanceMax(&pFVar24->GameThreadStats,0);
        (pFVar25->MaxPerInstanceTime).GameThread = fVar37;
        bVar13 = IsInGameThread();
        if (((!bVar13) && (bVar13 = IsInRenderingThread(), !bVar13)) &&
           (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<392709136413884568>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                ,0x98,"IsInRenderingThread()"), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar37 = FAccumulatedParticlePerfStats_RT::GetPerInstanceMax(&pFVar24->RenderThreadStats,0);
        (pFVar25->MaxPerInstanceTime).RenderThread = fVar37;
      }
      iVar19 = (pFVar25->SystemInstances).ArrayNum;
      piVar1 = &(pFVar25->SystemInstances).ArrayMax;
      if (iVar19 == *piVar1) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x868,(ForAnyElementType *)pFVar25,piVar1);
      }
      (pFVar25->SystemInstances).ArrayNum = iVar19 + 1;
      pFVar36 = (pFVar25->SystemInstances).AllocatorInstance.Data + (longlong)iVar19 * 0x68;
      DefaultConstructItems<FNiagaraOutlinerSystemInstanceData,int>(pFVar36,1);
      pFVar27 = (FScriptContainerElement *)
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)this_00,&local_80,(UObject *)0x0);
      if (pFVar36 != pFVar27) {
        if (*(void **)&pFVar36->field_0x0 != (void *)0x0) {
          FMemory::Free(*(void **)&pFVar36->field_0x0);
        }
        *(undefined8 *)&pFVar36->field_0x0 = *(undefined8 *)&pFVar27->field_0x0;
        *(undefined8 *)&pFVar27->field_0x0 = 0;
        *(undefined4 *)(pFVar36 + 8) = *(undefined4 *)(pFVar27 + 8);
        *(undefined4 *)(pFVar36 + 0xc) = *(undefined4 *)(pFVar27 + 0xc);
        *(undefined8 *)(pFVar27 + 8) = 0;
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      pTVar5 = (TReferenceControllerBase<1> *)this_00[1]._padding_;
      lVar31 = this_00[1]._padding_;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (lVar31 == 0) {
        *(undefined4 *)&pFVar36[0x30].field_0x0 = 5;
        *(undefined4 *)(pFVar36 + 0x34) = 5;
      }
      else {
        if (*(longlong *)(lVar31 + 0x30) == 0) {
          bVar13 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4531953176097587078>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                              ,0x7a,"IsValid()");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((*(longlong *)(lVar31 + 0x30) == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        *(undefined4 *)&pFVar36[0x30].field_0x0 =
             *(undefined4 *)(*(longlong *)(lVar31 + 0x30) + 0x91c);
        if (*(longlong *)(lVar31 + 0x30) == 0) {
          bVar13 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4531953176097587079>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                              ,0x79,"IsValid()");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((*(longlong *)(lVar31 + 0x30) == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        *(undefined4 *)(pFVar36 + 0x34) = *(undefined4 *)(*(longlong *)(lVar31 + 0x30) + 0x918);
        *(longlong *)(pFVar36 + 0x38) = this_00[1]._padding_;
        *(int *)&pFVar36[0x40].field_0x0 = (int)this_00[1]._padding_;
        if ((((uint)this_00->_padding_ >> 0x1e & 1) != 0) ||
           (pFVar28 = FUObjectArray::IndexToObject
                                (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4)),
           ((uint)((ulonglong)(pFVar28->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0)) {
          uVar16 = 1;
        }
        *(uint *)(pFVar36 + 0x44) = *(uint *)(pFVar36 + 0x44) & 0xfffffffe;
        *(uint *)(pFVar36 + 0x44) = *(uint *)(pFVar36 + 0x44) | uVar16;
        *(uint *)(pFVar36 + 0x44) =
             -(uint)(this_00[1]._padding_ != 0) & 2 | *(uint *)(pFVar36 + 0x44) & 0xfffffffd;
        pFVar36[0x48] = *(FScriptContainerElement *)&this_00[1]._padding_;
        this_02 = *(FNiagaraSystemInstance **)(lVar31 + 0x30);
        if (this_02 != (FNiagaraSystemInstance *)0x0) {
          EVar20 = FNiagaraSystemInstance::CalculateTickGroup(this_02);
          pFVar36[0x5c] = SUB41(EVar20,0);
          pFVar6 = (this_02->SystemGpuComputeProxy).Ptr;
          if (pFVar6 != (FNiagaraSystemGpuComputeProxy *)0x0) {
            pFVar36[0x5d] = *(FScriptContainerElement *)&pFVar6->ComputeTickStage;
          }
          *(undefined8 *)&pFVar36[0x10].field_0x0 = *(undefined8 *)&(this_02->LWCTile).field0_0x0;
          *(float *)(pFVar36 + 0x18) = (this_02->LWCTile).field0_0x0._s_0.Z;
          *(uint *)&pFVar36[0x60].field_0x0 =
               *(uint *)&pFVar36[0x60].field_0x0 ^
               (this_02->bSolo ^ *(uint *)&pFVar36[0x60].field_0x0) & 1;
          bVar13 = FNiagaraSystemInstance::RequiresGlobalDistanceField(this_02);
          *(uint *)&pFVar36[0x60].field_0x0 = *(uint *)&pFVar36[0x60].field_0x0 & 0xfffffffd;
          *(uint *)&pFVar36[0x60].field_0x0 = *(uint *)&pFVar36[0x60].field_0x0 | (uint)bVar13 * 2;
          bVar13 = FNiagaraSystemInstance::RequiresDepthBuffer(this_02);
          *(uint *)&pFVar36[0x60].field_0x0 = *(uint *)&pFVar36[0x60].field_0x0 & 0xfffffffb;
          *(uint *)&pFVar36[0x60].field_0x0 = *(uint *)&pFVar36[0x60].field_0x0 | (uint)bVar13 << 2;
          bVar13 = FNiagaraSystemInstance::RequiresEarlyViewData(this_02);
          *(uint *)&pFVar36[0x60].field_0x0 = *(uint *)&pFVar36[0x60].field_0x0 & 0xfffffff7;
          *(uint *)&pFVar36[0x60].field_0x0 = *(uint *)&pFVar36[0x60].field_0x0 | (uint)bVar13 << 3;
          bVar13 = FNiagaraSystemInstance::RequiresViewUniformBuffer(this_02);
          *(uint *)&pFVar36[0x60].field_0x0 = *(uint *)&pFVar36[0x60].field_0x0 & 0xffffffef;
          *(uint *)&pFVar36[0x60].field_0x0 = *(uint *)&pFVar36[0x60].field_0x0 | (uint)bVar13 << 4;
          bVar13 = FNiagaraSystemInstance::RequiresRayTracingScene(this_02);
          *(uint *)&pFVar36[0x60].field_0x0 = *(uint *)&pFVar36[0x60].field_0x0 & 0xffffffdf;
          *(uint *)&pFVar36[0x60].field_0x0 = *(uint *)&pFVar36[0x60].field_0x0 | (uint)bVar13 << 5;
          bVar13 = FNiagaraSystemInstance::RequiresCurrentFrameNDC(this_02);
          *(uint *)&pFVar36[0x60].field_0x0 = *(uint *)&pFVar36[0x60].field_0x0 & 0xffffffbf;
          *(uint *)&pFVar36[0x60].field_0x0 = *(uint *)&pFVar36[0x60].field_0x0 | (uint)bVar13 << 6;
          uVar17 = (this_02->Emitters).ArrayNum;
          if ((int)uVar17 < 0) {
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L"");
            if (!bVar14) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
            }
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar27 = pFVar36 + 0x2c;
          if (*(int *)(pFVar36 + 0x2c) < (int)uVar17) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,uVar17,(ForAnyElementType *)(pFVar36 + 0x20),*(int *)(pFVar36 + 0x28),
                       (int *)pFVar27);
          }
          pFVar33 = (this_02->Emitters).AllocatorInstance.Data;
          iVar19 = (this_02->Emitters).ArrayNum;
          if ((iVar19 < 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar35 = pFVar33 + (longlong)iVar19 * 0x10;
          for (; pFVar33 != pFVar35; pFVar33 = pFVar33 + 0x10) {
            iVar19 = *(int *)(pFVar36 + 0x28);
            if (iVar19 == *(int *)pFVar27) {
              iVar19 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,(ForAnyElementType *)(pFVar36 + 0x20),(int *)pFVar27);
            }
            *(int *)(pFVar36 + 0x28) = iVar19 + 1;
            pFVar32 = (ForAnyElementType *)
                      ((longlong)iVar19 * 0x20 + *(longlong *)&pFVar36[0x20].field_0x0);
            DefaultConstructItems<FNiagaraOutlinerEmitterInstanceData,int>(pFVar32,1);
            lVar31 = *(longlong *)(*(longlong *)pFVar33 + 0x28);
            if (lVar31 != 0) {
              if (pFVar32 != (ForAnyElementType *)(lVar31 + 0x28)) {
                iVar19 = *(int *)(lVar31 + 0x30);
                piVar1 = (int *)((longlong)&pFVar32[1].Data + 4);
                _Src = ((ForAnyElementType *)(lVar31 + 0x28))->Data;
                iVar3 = *piVar1;
                *(int *)&pFVar32[1].Data = iVar19;
                if ((iVar19 == 0) && (iVar3 == 0)) {
                  *piVar1 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,iVar19,iVar3,pFVar32,iVar19,piVar1);
                  if (iVar19 != 0) {
                    memcpy(pFVar32->Data,_Src,(longlong)iVar19 * 2);
                  }
                }
              }
              *(undefined1 *)&pFVar32[2].Data = *(undefined1 *)(*(longlong *)pFVar33 + 0xd1);
              *(undefined4 *)((longlong)&pFVar32[2].Data + 4) =
                   *(undefined4 *)(*(longlong *)pFVar33 + 0xd4);
              uVar21 = (**(code **)(**(longlong **)pFVar33 + 0x58))();
              *(undefined4 *)&pFVar32[3].Data = uVar21;
              lVar31 = *(longlong *)pFVar33;
              if ((*(longlong *)(lVar31 + 0x10) == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ParticleDataSet",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                                      ,0x39,L""), bVar13)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              puVar2 = (uint *)((longlong)&pFVar32[3].Data + 4);
              *puVar2 = *puVar2 ^ ((uint)*(byte *)(*(longlong *)(*(longlong *)(lVar31 + 0x10) + 8) +
                                                  0x38) ^ *(uint *)((longlong)&pFVar32[3].Data + 4))
                                  & 1;
            }
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      pFVar4 = (FParticlePerfStatsListener_GatherAll *)(this->StatsListener).Object;
      if ((pFVar4 != (FParticlePerfStatsListener_GatherAll *)0x0) &&
         (pFVar24 = FParticlePerfStatsListener_GatherAll::GetStats(pFVar4,this_00),
         pFVar24 != (FAccumulatedParticlePerfStats *)0x0)) {
        if ((pFVar24->GameThreadStats).NumFrames == 0) {
          uVar26 = 0;
        }
        else {
          uVar26 = ((longlong)(pFVar24->GameThreadStats).AccumulatedStats.EndOfFrameCycles +
                    (longlong)(pFVar24->GameThreadStats).AccumulatedStats.ActivationCycles +
                    (pFVar24->GameThreadStats).AccumulatedStats.WaitCycles +
                    (pFVar24->GameThreadStats).AccumulatedStats.FinalizeCycles +
                    (pFVar24->GameThreadStats).AccumulatedStats.TickGameThreadCycles +
                   (longlong)(pFVar24->GameThreadStats).AccumulatedStats.TickConcurrentCycles) /
                   (ulonglong)(pFVar24->GameThreadStats).NumFrames;
        }
        *(float *)(pFVar36 + 0x4c) =
             (float)((double)uVar26 * FGenericPlatformTime::SecondsPerCycle64 * dVar12);
        bVar13 = IsInGameThread();
        if (((!bVar13) && (bVar13 = IsInRenderingThread(), !bVar13)) &&
           (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<392709136413884568>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                ,0x98,"IsInRenderingThread()"), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar17 = (pFVar24->RenderThreadStats).NumFrames;
        if (uVar17 == 0) {
          uVar26 = 0;
        }
        else {
          uVar26 = ((pFVar24->RenderThreadStats).AccumulatedStats.GetDynamicMeshElementsCycles +
                   (pFVar24->RenderThreadStats).AccumulatedStats.RenderUpdateCycles) /
                   (ulonglong)uVar17;
        }
        *(float *)&pFVar36[0x50].field_0x0 =
             (float)((double)uVar26 * FGenericPlatformTime::SecondsPerCycle64 * dVar12);
        if (((pFVar24->GameThreadStats).MaxPerFrameTotalCycles.ArrayNum < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar7 = (pFVar24->GameThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData;
        FVar34 = (ForElementType<unsigned___int64>)
                 &(pFVar24->GameThreadStats).MaxPerFrameTotalCycles;
        if (FVar7 != (ForElementType<unsigned___int64>)0x0) {
          FVar34 = FVar7;
        }
        *(float *)(pFVar36 + 0x54) =
             (float)((double)*(ulonglong *)FVar34 * FGenericPlatformTime::SecondsPerCycle64 * dVar12
                    );
        bVar13 = IsInGameThread();
        if (((!bVar13) && (bVar13 = IsInRenderingThread(), !bVar13)) &&
           (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<392709136413884568>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                ,0x98,"IsInRenderingThread()"), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (((pFVar24->RenderThreadStats).MaxPerFrameTotalCycles.ArrayNum < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar7 = (pFVar24->RenderThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData;
        FVar34 = (ForElementType<unsigned___int64>)
                 &(pFVar24->RenderThreadStats).MaxPerFrameTotalCycles;
        if (FVar7 != (ForElementType<unsigned___int64>)0x0) {
          FVar34 = FVar7;
        }
        *(float *)(pFVar36 + 0x58) =
             (float)((double)*(ulonglong *)FVar34 * FGenericPlatformTime::SecondsPerCycle64 * dVar12
                    );
      }
    }
    TObjectIterator<UNiagaraComponent>::Advance(local_70);
    bVar11 = bVar10;
  } while( true );
}

// CloseConnection @ 14928aad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDebuggerClient::CloseConnection(FNiagaraDebuggerClient *this)

{
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  undefined8 uVar1;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *puVar3;
  UPackage *pUVar4;
  longlong lVar5;
  FDateTime local_res8;
  FTimespan local_res10;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_48;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_38;
  TSharedPtr<IMessageAttachment,1> local_28;
  
  this_00 = (this->MessageEndpoint).Object;
  if ((this_00 != (FMessageEndpoint *)0x0) &&
     ((((this->Connection).UniqueId.D != 0 || (this->Connection).UniqueId.C != 0) ||
      (this->Connection).UniqueId.B != 0) || (this->Connection).UniqueId.A != 0)) {
    local_res8.Ticks = 0x2bca2875f4373fff;
    local_res10.Ticks = 0;
    local_38.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Array.ArrayNum = 0;
    local_38.Array.ArrayMax = 0;
    pTVar2 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add
                       (&local_38,&this->Connection);
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = (pTVar2->Array).ArrayNum;
    lVar5 = (longlong)local_48.ArrayNum;
    _Src = (pTVar2->Array).AllocatorInstance.Data;
    if (local_48.ArrayNum == 0) {
      local_48.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_48.ArrayNum,0,&local_48.AllocatorInstance,local_48.ArrayNum,
                 &local_48.ArrayMax);
      memcpy(local_48.AllocatorInstance.Data,_Src,lVar5 << 4);
    }
    local_28.Object = (IMessageAttachment *)0x0;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    puVar3 = FMemory::Malloc(0x20,0);
    uVar1 = *(undefined8 *)&(this->SessionId).C;
    *puVar3 = *(undefined8 *)&this->SessionId;
    puVar3[1] = uVar1;
    uVar1 = *(undefined8 *)&(this->InstanceId).C;
    puVar3[2] = *(undefined8 *)&this->InstanceId;
    puVar3[3] = uVar1;
    if (Z_Registration_Info_UScriptStruct_FNiagaraDebuggerConnectionClosed.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNiagaraDebuggerConnectionClosed.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed,
                           (UObject *)pUVar4,L"NiagaraDebuggerConnectionClosed");
    }
    FMessageEndpoint::Send
              (this_00,puVar3,
               Z_Registration_Info_UScriptStruct_FNiagaraDebuggerConnectionClosed.OuterSingleton,
               Reliable,&local_28,&local_48,&local_res10,&local_res8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (local_38.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Array.AllocatorInstance.Data);
    }
  }
  (this->Connection).UniqueId.C = 0;
  (this->Connection).UniqueId.D = 0;
  (this->Connection).UniqueId.A = 0;
  (this->Connection).UniqueId.B = 0;
  return;
}

// ExecConsoleCommand @ 14929b5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDebuggerClient::ExecConsoleCommand
          (FNiagaraDebuggerClient *this,FNiagaraDebuggerExecuteConsoleCommand *param_1)

{
  if ((param_1->Command).Data.ArrayNum != 0) {
    ExecuteConsoleCommand
              (this,(wchar_t *)(param_1->Command).Data.AllocatorInstance.Data,
               param_1->bRequiresWorld);
    return;
  }
  ExecuteConsoleCommand(this,L"",param_1->bRequiresWorld);
  return;
}

// ExecuteConsoleCommand @ 14929b6c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraDebuggerClient::ExecuteConsoleCommand
          (FNiagaraDebuggerClient *this,wchar_t *param_1,bool param_2)

{
  UWorld *this_00;
  ULevel *pUVar1;
  UWorld *pUVar2;
  code *pcVar3;
  UEngine *pUVar4;
  bool bVar5;
  EInternalObjectFlags EVar6;
  uint uVar7;
  ENetMode EVar8;
  UClass *pUVar9;
  FOutputDeviceRedirector *pFVar10;
  ulonglong uVar11;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar13;
  ulonglong uVar12;
  TObjectIterator<UWorld> local_28;
  
  pUVar4 = GEngine;
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  if (param_2) {
    local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ObjectArray.ArrayNum = 0;
    local_28.ObjectArray.ArrayMax = 0;
    local_28.Index = 0xffffffff;
    EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar9 = Z_Construct_UClass_UWorld_NoRegister();
    uVar12 = CONCAT44(uVar13,EVar6) | 0x90020000;
    GetObjectsOfClass(pUVar9,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                      EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    TObjectIterator<UWorld>::Advance(&local_28);
    while( true ) {
      uVar11 = (ulonglong)local_28.Index;
      if (local_28.Index < 0) break;
      if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
      uVar7 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar7 = (uint)~local_28.Index >> 0x1f;
      }
      if (uVar7 == 0) {
        uVar12 = uVar11;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      this_00 = *(UWorld **)(local_28.ObjectArray.AllocatorInstance.Data + uVar11 * 8);
      if ((((this_00 != (UWorld *)0x0) &&
           (pUVar1 = (this_00->PersistentLevel).field0_0x0.DebugPtr, pUVar1 != (ULevel *)0x0)) &&
          (pUVar2 = (pUVar1->OwningWorld).field0_0x0.DebugPtr, pUVar2 != (UWorld *)0x0)) &&
         (pUVar2 == this_00)) {
        EVar8 = UWorld::InternalGetNetMode(this_00);
        if (EVar8 != NM_Client) {
          EVar8 = UWorld::InternalGetNetMode(this_00);
          if (EVar8 != NM_Standalone) goto LAB_14929b86b;
        }
        pUVar4 = GEngine;
        pcVar3 = *(code **)(GEngine->_padding_ + 8);
        pFVar10 = GetGlobalLogSingleton();
        uVar11 = (ulonglong)local_28.Index;
        uVar7 = 0;
        if (local_28.Index < local_28.ObjectArray.ArrayNum) {
          uVar7 = (uint)~local_28.Index >> 0x1f;
        }
        if (uVar7 == 0) {
          uVar12 = uVar11;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        (*pcVar3)(&pUVar4->_padding_,
                  *(undefined8 *)(local_28.ObjectArray.AllocatorInstance.Data + uVar11 * 8),param_1,
                  pFVar10,uVar12);
      }
LAB_14929b86b:
      TObjectIterator<UWorld>::Advance(&local_28);
    }
    if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
      return;
    }
  }
  else {
    pcVar3 = *(code **)(GEngine->_padding_ + 8);
    pFVar10 = GetGlobalLogSingleton();
    (*pcVar3)(&pUVar4->_padding_,0,param_1,pFVar10);
  }
  return;
}

// GetSimpleClientInfo @ 1492a7200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001492a746d) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraDebuggerClient::GetSimpleClientInfo
          (FNiagaraDebuggerClient *this,FNiagaraSimpleClientInfo *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  UNiagaraSystem *this_00;
  UObject *pUVar5;
  void *pvVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  EInternalObjectFlags EVar10;
  int iVar11;
  UClass *pUVar12;
  TArray<FNiagaraEmitterHandle,TSizedDefaultAllocator<32>_> *pTVar13;
  byte bVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  int *piVar21;
  uint uVar22;
  undefined1 auStackY_218 [32];
  undefined1 local_1c8;
  undefined1 local_1c7 [7];
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  TObjectIterator<UNiagaraSystem> local_190;
  TObjectIterator<UNiagaraComponent> local_178;
  undefined8 local_160;
  FName local_158;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_150;
  FNiagaraSimpleClientInfo *local_148;
  int *local_140;
  FName local_138;
  undefined8 local_130;
  FName local_128;
  longlong *local_120;
  uint uStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  uint local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  FString local_c0 [2];
  undefined4 local_94;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  piVar21 = &(param_1->Systems).ArrayMax;
  pFVar15 = (param_1->Systems).AllocatorInstance.Data;
  iVar11 = (param_1->Systems).ArrayNum;
  local_148 = param_1;
  local_140 = piVar21;
  if ((param_1->Systems).ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar15,iVar11);
    (param_1->Systems).ArrayNum = 0;
    if (*piVar21 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)param_1,0,piVar21);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar15,iVar11);
    (param_1->Systems).ArrayNum = 0;
  }
  pFVar15 = (param_1->Emitters).AllocatorInstance.Data;
  pTVar1 = &param_1->Emitters;
  piVar2 = &(param_1->Emitters).ArrayMax;
  iVar11 = (param_1->Emitters).ArrayNum;
  uVar18 = 0;
  local_150 = pTVar1;
  if ((param_1->Emitters).ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar15,iVar11);
    (param_1->Emitters).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar15,iVar11);
    (param_1->Emitters).ArrayNum = 0;
  }
  local_190.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ObjectArray.ArrayNum = 0;
  local_190.ObjectArray.ArrayMax = 0;
  local_190.Index = 0xffffffff;
  EVar10 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar12 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
  GetObjectsOfClass(pUVar12,&local_190.ObjectArray,true,RF_ClassDefaultObject,
                    EVar10 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UNiagaraSystem>::Advance(&local_190);
    lVar16 = (longlong)local_190.Index;
    if ((local_190.Index < 0) || (local_190.ObjectArray.ArrayNum <= local_190.Index)) break;
    uVar20 = uVar18;
    if (local_190.Index < local_190.ObjectArray.ArrayNum) {
      uVar20 = (uint)~local_190.Index >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_00 = *(UNiagaraSystem **)(local_190.ObjectArray.AllocatorInstance.Data + lVar16 * 8);
    if (this_00 != (UNiagaraSystem *)0x0) {
      local_158 = (FName)this_00->_padding_;
      ::FName::ToString(&local_158,&local_1b0);
      pFVar15 = (param_1->Systems).AllocatorInstance.Data;
      if (((pFVar15 <= (FScriptContainerElement *)&local_1b0) &&
          ((FScriptContainerElement *)&local_1b0 < pFVar15 + (longlong)*piVar21 * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = (param_1->Systems).ArrayNum;
      if (iVar11 == *piVar21) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)param_1,piVar21);
      }
      (param_1->Systems).ArrayNum = iVar11 + 1;
      pFVar15 = (param_1->Systems).AllocatorInstance.Data + (longlong)iVar11 * 0x10;
      *(undefined8 *)pFVar15 = 0;
      *(FScriptContainerElement **)pFVar15 = local_1b0.Data.AllocatorInstance.Data;
      *(int *)(pFVar15 + 8) = local_1b0.Data.ArrayNum;
      *(int *)(pFVar15 + 0xc) = local_1b0.Data.ArrayMax;
      local_1b0.Data.ArrayNum = 0;
      local_1b0.Data.ArrayMax = 0;
      local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pTVar13 = UNiagaraSystem::GetEmitterHandles(this_00);
      iVar11 = pTVar13->ArrayNum;
      pFVar17 = (pTVar13->AllocatorInstance).Data;
      pFVar15 = pFVar17 + (longlong)iVar11 * 0x48;
      while( true ) {
        if (pTVar13->ArrayNum != iVar11) {
          local_1c8 = 0;
          `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_1c8);
        }
        param_1 = local_148;
        piVar21 = local_140;
        if (pFVar17 == pFVar15) break;
        pUVar5 = *(UObject **)(pFVar17 + 0x28);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar5 != (UObject *)0x0) goto LAB_1492a74d7;
        }
        else if (pUVar5 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar5);
LAB_1492a74d7:
          lVar16 = *(longlong *)(pFVar17 + 0x28);
          local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (lVar16 == 0) {
            lVar16 = *(longlong *)(pFVar17 + 0x40);
            if (lVar16 != 0) {
              iVar4 = *(int *)(lVar16 + 0x30);
              pvVar6 = *(void **)(lVar16 + 0x28);
              goto joined_r0x0001492a754b;
            }
            local_1c0.Data.ArrayNum = 0;
            local_1c0.Data.ArrayMax = 0;
          }
          else {
            iVar4 = *(int *)(lVar16 + 0x30);
            pvVar6 = *(void **)(lVar16 + 0x28);
joined_r0x0001492a754b:
            local_1c0.Data.ArrayNum = iVar4;
            if (iVar4 == 0) {
              local_1c0.Data.ArrayNum = 0;
              local_1c0.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar4,0,(ForAnyElementType *)&local_1c0,iVar4,&local_1c0.Data.ArrayMax)
              ;
              memcpy(local_1c0.Data.AllocatorInstance.Data,pvVar6,(longlong)iVar4 * 2);
            }
          }
          TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(local_150,&local_1c0);
          if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
          }
        }
        pFVar17 = pFVar17 + 0x48;
      }
    }
  }
  if (local_190.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.ObjectArray.AllocatorInstance.Data);
  }
  piVar21 = &(param_1->Actors).ArrayMax;
  pFVar15 = (param_1->Actors).AllocatorInstance.Data;
  iVar11 = (param_1->Actors).ArrayNum;
  if ((param_1->Actors).ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar15,iVar11);
    (param_1->Actors).ArrayNum = 0;
    if (*piVar21 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(param_1->Actors).AllocatorInstance,0,piVar21);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar15,iVar11);
    (param_1->Actors).ArrayNum = 0;
  }
  piVar21 = &(param_1->Components).ArrayMax;
  pFVar15 = (param_1->Components).AllocatorInstance.Data;
  iVar11 = (param_1->Components).ArrayNum;
  if ((param_1->Components).ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar15,iVar11);
    (param_1->Components).ArrayNum = 0;
    if (*piVar21 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(param_1->Components).AllocatorInstance,0,piVar21);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar15,iVar11);
    (param_1->Components).ArrayNum = 0;
  }
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_178.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ObjectArray.ArrayNum = 0;
  local_178.ObjectArray.ArrayMax = 0;
  local_178.Index = 0xffffffff;
  EVar10 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar12 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
  GetObjectsOfClass(pUVar12,&local_178.ObjectArray,true,RF_ClassDefaultObject,
                    EVar10 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UNiagaraComponent>::Advance(&local_178);
    lVar16 = (longlong)local_178.Index;
    if ((local_178.Index < 0) || (local_178.ObjectArray.ArrayNum <= local_178.Index)) break;
    uVar20 = uVar18;
    if (local_178.Index < local_178.ObjectArray.ArrayNum) {
      uVar20 = (uint)~local_178.Index >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar16 = *(longlong *)(local_178.ObjectArray.AllocatorInstance.Data + lVar16 * 8);
    if (((lVar16 != 0) && ((*(uint *)(lVar16 + 8) >> 0x1e & 1) == 0)) &&
       ((*(uint *)(lVar16 + 8) & 0x10) == 0)) {
      local_138 = *(FName *)(lVar16 + 0x18);
      ::FName::ToString(&local_138,local_c0);
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
                (&param_1->Components,local_c0);
      if (local_c0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0[0].Data.AllocatorInstance.Data);
      }
      local_130 = *(undefined8 *)(lVar16 + 0xa8);
      TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Emplace<AActor_*>
                ((TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *)local_88,
                 (AActor **)&local_160,(bool *)&local_130);
    }
  }
  if (local_178.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.ObjectArray.AllocatorInstance.Data);
  }
  uVar20 = local_60;
  uStack_114 = 1;
  uStack_104 = uVar18;
  local_100 = uVar18;
  if (local_60 != 0) {
    puVar19 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar19 = local_68;
    }
    uVar22 = *puVar19;
    local_100 = 0;
    uVar18 = 0;
    while (uVar22 == 0) {
      lVar16 = (longlong)(int)uVar18;
      local_100 = local_100 + 0x20;
      uVar18 = uVar18 + 1;
      uStack_104 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_1492a7820;
      uVar22 = puVar19[lVar16 + 1];
    }
    uStack_114 = -uVar22 & uVar22;
    uVar3 = (ulonglong)uStack_114 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_160._4_4_ = (int)lVar16;
    uStack_104 = (local_100 - 1) + local_160._4_4_;
    if ((int)local_60 < (int)uStack_104) {
      uStack_104 = local_60;
    }
  }
LAB_1492a7820:
  local_120 = (longlong *)local_88;
  uStack_fc = local_94;
  local_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uVar22 = local_60 & 0xffffffe0;
  iStack_f8 = local_88._8_4_ - local_54;
  uStack_108 = 0xffffffff;
  TStack_e8.CurrentBitIndex = uStack_104;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  TStack_e8._padding_ = CONCAT44(uStack_114,uVar18);
  iVar11 = (int)local_60 >> 5;
  TStack_e8._28_4_ = local_94;
  TStack_e8.BaseBitIndex = local_100;
  uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
  bVar14 = (byte)local_60;
  uStack_118 = uVar18;
  local_f0 = local_120;
  TStack_e8.Array = local_110;
  if (((int)local_60 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (uVar20 != local_60) {
    puVar19 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar19 = local_68;
    }
    uVar18 = -1 << (bVar14 & 0x1f) & puVar19[iVar11];
    while (uVar18 == 0) {
      lVar16 = (longlong)iVar11;
      uVar22 = uVar22 + 0x20;
      iVar11 = iVar11 + 1;
      uVar20 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_1492a7931;
      uVar18 = puVar19[lVar16 + 1];
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar20 = (uVar22 - 1) + (int)lVar16;
    if ((int)local_60 < (int)uVar20) {
      uVar20 = local_60;
    }
  }
LAB_1492a7931:
  while( true ) {
    plVar8 = local_f0;
    if ((int)local_f0[1] - *(int *)((longlong)local_f0 + 0x34) != (int)uStack_c8) {
      `TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1c7);
    }
    if (((TStack_e8.CurrentBitIndex == uVar20) &&
        (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar8 == (longlong *)local_88)) break;
    lVar16 = *(longlong *)(*plVar8 + (longlong)TStack_e8.CurrentBitIndex * 0x10);
    if (((lVar16 != 0) && ((*(uint *)(lVar16 + 8) >> 0x1e & 1) == 0)) &&
       ((*(uint *)(lVar16 + 8) & 0x10) == 0)) {
      iVar11 = *(int *)(lVar16 + 0x1f0);
      if (iVar11 < 2) {
        local_128 = *(FName *)(lVar16 + 0x18);
        ::FName::ToString(&local_128,&local_1a0);
      }
      else {
        pvVar6 = *(void **)(lVar16 + 0x1e8);
        local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a0.Data.ArrayNum = iVar11;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar11,0,(ForAnyElementType *)&local_1a0,iVar11,&local_1a0.Data.ArrayMax);
        memcpy(local_1a0.Data.AllocatorInstance.Data,pvVar6,(longlong)iVar11 * 2);
      }
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
                (&param_1->Actors,&local_1a0);
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// HandleConnectionClosedMessage @ 1492a8ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDebuggerClient::HandleConnectionClosedMessage
          (FNiagaraDebuggerClient *this,FNiagaraDebuggerConnectionClosed *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FGuid *this_00;
  FGuid *this_01;
  uint *puVar1;
  FString local_38;
  FString local_28;
  
  if ((((this->MessageEndpoint).Object != (FMessageEndpoint *)0x0) &&
      (this_00 = &this->SessionId,
      (((this->SessionId).D == (param_1->SessionId).D &&
       (this->SessionId).C == (param_1->SessionId).C) &&
      (this->SessionId).B == (param_1->SessionId).B) && (param_1->SessionId).A == this_00->A)) &&
     (this_01 = &this->InstanceId,
     (((param_1->InstanceId).D == (this->InstanceId).D &&
      (param_1->InstanceId).C == (this->InstanceId).C) &&
     (param_1->InstanceId).B == (this->InstanceId).B) && this_01->A == (param_1->InstanceId).A)) {
    puVar1 = (uint *)(**(code **)((longlong)*param_2->Object + 0x48))();
    if (((puVar1[3] == (this->Connection).UniqueId.D && puVar1[1] == (this->Connection).UniqueId.B)
        && puVar1[2] == (this->Connection).UniqueId.C) && *puVar1 == (this->Connection).UniqueId.A)
    {
      if (4 < (byte)LogNiagaraDebuggerClient._0_1_) {
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.Data.ArrayNum = 0;
        local_28.Data.ArrayMax = 0;
        FGuid::AppendString(this_01,&local_28,Digits);
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        FGuid::AppendString(this_00,&local_38,Digits);
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogNiagaraDebuggerClient);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      (this->Connection).UniqueId.C = 0;
      (this->Connection).UniqueId.D = 0;
      (this->Connection).UniqueId.A = 0;
      (this->Connection).UniqueId.B = 0;
    }
    else if (2 < (byte)LogNiagaraDebuggerClient._0_1_) {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      FGuid::AppendString(this_01,&local_38,Digits);
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      FGuid::AppendString(this_00,&local_28,Digits);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagaraDebuggerClient)
      ;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// HandleConnectionRequestMessage @ 1492a8cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDebuggerClient::HandleConnectionRequestMessage
          (FNiagaraDebuggerClient *this,FNiagaraDebuggerRequestConnection *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FMessageEndpoint *this_00;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *this_01;
  UPackage *pUVar4;
  FDateTime local_res8;
  FTimespan local_res20;
  TSharedPtr<IMessageAttachment,1> local_68;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_58;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_48;
  
  if ((((this->MessageEndpoint).Object != (FMessageEndpoint *)0x0) &&
      ((((this->SessionId).D == (param_1->SessionId).D &&
        (this->SessionId).C == (param_1->SessionId).C) &&
       (this->SessionId).B == (param_1->SessionId).B) &&
       (param_1->SessionId).A == (this->SessionId).A)) &&
     ((((param_1->InstanceId).D == (this->InstanceId).D &&
       (param_1->InstanceId).C == (this->InstanceId).C) &&
      (param_1->InstanceId).B == (this->InstanceId).B) &&
      (this->InstanceId).A == (param_1->InstanceId).A)) {
    if ((((this->Connection).UniqueId.D == 0 && (this->Connection).UniqueId.C == 0) &&
        (this->Connection).UniqueId.B == 0) && (this->Connection).UniqueId.A == 0) {
      if (4 < (byte)LogNiagaraDebuggerClient._0_1_) {
        local_68.Object = (IMessageAttachment *)0x0;
        local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        FGuid::AppendString(&this->InstanceId,(FString *)&local_68,Digits);
        local_58.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Array.ArrayNum = 0;
        local_58.Array.ArrayMax = 0;
        FGuid::AppendString(&this->SessionId,(FString *)&local_58,Digits);
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogNiagaraDebuggerClient);
        if (local_58.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Array.AllocatorInstance.Data);
        }
        if (local_68.Object != (IMessageAttachment *)0x0) {
          FMemory::Free(local_68.Object);
        }
      }
    }
    else {
      if (2 < (byte)LogNiagaraDebuggerClient._0_1_) {
        local_58.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Array.ArrayNum = 0;
        local_58.Array.ArrayMax = 0;
        FGuid::AppendString(&this->InstanceId,(FString *)&local_58,Digits);
        local_68.Object = (IMessageAttachment *)0x0;
        local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        FGuid::AppendString(&this->SessionId,(FString *)&local_68,Digits);
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogNiagaraDebuggerClient);
        if (local_68.Object != (IMessageAttachment *)0x0) {
          FMemory::Free(local_68.Object);
        }
        if (local_58.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Array.AllocatorInstance.Data);
        }
      }
      CloseConnection(this);
    }
    puVar3 = (undefined8 *)(**(code **)((longlong)*param_2->Object + 0x48))();
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    (this->Connection).UniqueId.A = (int)uVar1;
    (this->Connection).UniqueId.B = (int)((ulonglong)uVar1 >> 0x20);
    (this->Connection).UniqueId.C = (int)uVar2;
    (this->Connection).UniqueId.D = (int)((ulonglong)uVar2 >> 0x20);
    this_00 = TSharedPtr<FMessageEndpoint,1>::operator->(&this->MessageEndpoint);
    local_res8.Ticks = 0x2bca2875f4373fff;
    local_res20.Ticks = 0;
    local_58.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Array.ArrayNum = 0;
    local_58.Array.ArrayMax = 0;
    this_01 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add
                        (&local_58,&this->Connection);
    TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::
    operator_TArray<FMessageAddress,TSizedDefaultAllocator<32>_>(this_01,&local_48);
    local_68.Object = (IMessageAttachment *)0x0;
    local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    puVar3 = FMemory::Malloc(0x20,0);
    uVar1 = *(undefined8 *)&(this->SessionId).C;
    *puVar3 = *(undefined8 *)&this->SessionId;
    puVar3[1] = uVar1;
    uVar1 = *(undefined8 *)&(this->InstanceId).C;
    puVar3[2] = *(undefined8 *)&this->InstanceId;
    puVar3[3] = uVar1;
    if (Z_Registration_Info_UScriptStruct_FNiagaraDebuggerAcceptConnection.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNiagaraDebuggerAcceptConnection.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection,
                           (UObject *)pUVar4,L"NiagaraDebuggerAcceptConnection");
    }
    FMessageEndpoint::Send
              (this_00,puVar3,
               Z_Registration_Info_UScriptStruct_FNiagaraDebuggerAcceptConnection.OuterSingleton,
               Reliable,&local_68,&local_48,&local_res20,&local_res8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (local_58.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Array.AllocatorInstance.Data);
    }
    UpdateClientInfo(this);
  }
  return;
}

// HandleDebugHUDSettingsMessage @ 1492a9030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDebuggerClient::HandleDebugHUDSettingsMessage
          (FNiagaraDebuggerClient *this,FNiagaraDebugHUDSettingsData *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  FString local_38;
  FString local_28;
  
  puVar3 = (uint *)(**(code **)((longlong)*param_2->Object + 0x48))();
  if ((((this->Connection).UniqueId.D == puVar3[3] && (this->Connection).UniqueId.C == puVar3[2]) &&
      (this->Connection).UniqueId.B == puVar3[1]) && (this->Connection).UniqueId.A == *puVar3) {
    if (4 < (byte)LogNiagaraDebuggerClient._0_1_) {
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      FGuid::AppendString(&this->InstanceId,&local_28,Digits);
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      FGuid::AppendString(&this->SessionId,&local_38,Digits);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagaraDebuggerClient)
      ;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(this->_padding_ + 8))(this,param_1);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6175469772516359920>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDebuggerClient.cpp"
                       ,0x110,"Context->GetSender() == Connection");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// HandleExecConsoleCommandMessage @ 1492a91b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDebuggerClient::HandleExecConsoleCommandMessage
          (FNiagaraDebuggerClient *this,FNiagaraDebuggerExecuteConsoleCommand *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  FString local_38;
  FString local_28;
  
  puVar3 = (uint *)(**(code **)((longlong)*param_2->Object + 0x48))();
  if ((((this->Connection).UniqueId.D == puVar3[3] && (this->Connection).UniqueId.C == puVar3[2]) &&
      (this->Connection).UniqueId.B == puVar3[1]) && (this->Connection).UniqueId.A == *puVar3) {
    if (4 < (byte)LogNiagaraDebuggerClient._0_1_) {
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      FGuid::AppendString(&this->InstanceId,&local_28,Digits);
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      FGuid::AppendString(&this->SessionId,&local_38,Digits);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagaraDebuggerClient)
      ;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)this->_padding_)(this,param_1);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6175469772516359929>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDebuggerClient.cpp"
                       ,0x107,"Context->GetSender() == Connection");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// HandleOutlinerSettingsMessage @ 1492a9ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDebuggerClient::HandleOutlinerSettingsMessage
          (FNiagaraDebuggerClient *this,FNiagaraOutlinerCaptureSettings *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  puVar3 = (uint *)(**(code **)((longlong)*param_2->Object + 0x48))();
  if ((((this->Connection).UniqueId.D == puVar3[3] && (this->Connection).UniqueId.C == puVar3[2]) &&
      (this->Connection).UniqueId.B == puVar3[1]) && (this->Connection).UniqueId.A == *puVar3) {
    pcVar1 = *(code **)(this->_padding_ + 0x18);
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFNiagaraOutlinerData___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(FNiagaraOutlinerData_const_&),FDefaultDelegateUserPolicy,`FNiagaraDebuggerClient::HandleOutlinerSettingsMessage'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar4[3] = this;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    (*pcVar1)(this,param_1,&local_48);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6175469772516359903>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDebuggerClient.cpp"
                       ,0x121,"Context->GetSender() == Connection");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// HandleRequestSimpleClientInfoMessage @ 1492a9c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDebuggerClient::HandleRequestSimpleClientInfoMessage
          (FNiagaraDebuggerClient *this,FNiagaraRequestSimpleClientInfoMessage *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(**(code **)((longlong)*param_2->Object + 0x48))();
  if ((((this->Connection).UniqueId.D == puVar3[3] && (this->Connection).UniqueId.C == puVar3[2]) &&
      (this->Connection).UniqueId.B == puVar3[1]) && (this->Connection).UniqueId.A == *puVar3) {
    UpdateClientInfo(this);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6175469772516359911>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDebuggerClient.cpp"
                     ,0x119,"Context->GetSender() == Connection");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// HandleSimCacheCaptureRequestMessage @ 1492a9c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDebuggerClient::HandleSimCacheCaptureRequestMessage
          (FNiagaraDebuggerClient *this,FNiagaraSystemSimCacheCaptureRequest *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  puVar3 = (uint *)(**(code **)((longlong)*param_2->Object + 0x48))();
  if ((((this->Connection).UniqueId.D == puVar3[3] && (this->Connection).UniqueId.C == puVar3[2]) &&
      (this->Connection).UniqueId.B == puVar3[1]) && (this->Connection).UniqueId.A == *puVar3) {
    pcVar1 = *(code **)(this->_padding_ + 0x20);
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFNiagaraSystemSimCacheCaptureRequest__U__TObjectPtr_VUNiagaraSimCache_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(FNiagaraSystemSimCacheCaptureRequest_const_&,TObjectPtr<UNiagaraSimCache>),FDefaultDelegateUserPolicy,`FNiagaraDebuggerClient::HandleSimCacheCaptureRequestMessage'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar4[3] = this;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    (*pcVar1)(this,param_1,&local_48);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6175469772516359884>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDebuggerClient.cpp"
                       ,0x134,"Context->GetSender() == Connection");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnConnectionClosed @ 1492ae960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDebuggerClient::OnConnectionClosed(FNiagaraDebuggerClient *this)

{
  (this->Connection).UniqueId.C = 0;
  (this->Connection).UniqueId.D = 0;
  (this->Connection).UniqueId.A = 0;
  (this->Connection).UniqueId.B = 0;
  return;
}

// SimCacheCaptureRequest @ 1492b6350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FNiagaraDebuggerClient::SimCacheCaptureRequest
          (FNiagaraDebuggerClient *this,FNiagaraSystemSimCacheCaptureRequest *param_1,
          TDelegate<void___cdecl(FNiagaraSystemSimCacheCaptureRequest_const_&,TObjectPtr<UNiagaraSimCache>),FDefaultDelegateUserPolicy>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  EInternalObjectFlags EVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  UObject *pUVar14;
  UObject *local_res20;
  TObjectIterator<UNiagaraComponent> local_98;
  undefined1 local_80 [8];
  ForAnyElementType local_78;
  int local_70;
  FDestructionSentinel local_68;
  FString local_50;
  FReadAccessScope local_40;
  
  pUVar14 = (UObject *)0x0;
  local_98.Index = 0xffffffff;
  local_98.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ObjectArray.ArrayNum = 0;
  local_98.ObjectArray.ArrayMax = 0;
  EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar9 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
  GetObjectsOfClass(pUVar9,&local_98.ObjectArray,true,RF_ClassDefaultObject,
                    EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  do {
    TObjectIterator<UNiagaraComponent>::Advance(&local_98);
    lVar12 = (longlong)local_98.Index;
    if ((local_98.Index < 0) || (local_98.ObjectArray.ArrayNum <= local_98.Index))
    goto LAB_1492b64c0;
    uVar7 = 0;
    if (local_98.Index < local_98.ObjectArray.ArrayNum) {
      uVar7 = (uint)~local_98.Index >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar10 = UObjectBaseUtility::GetPathName
                        (*(UObjectBaseUtility **)
                          (local_98.ObjectArray.AllocatorInstance.Data + lVar12 * 8),&local_50,
                         (UObject *)0x0);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    bVar5 = ::FName::Equals(param_1->ComponentName,pwVar11);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  } while (!bVar5);
  lVar12 = (longlong)local_98.Index;
  uVar7 = 0;
  if (local_98.Index < local_98.ObjectArray.ArrayNum) {
    uVar7 = (uint)~local_98.Index >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar14 = *(UObject **)(local_98.ObjectArray.AllocatorInstance.Data + lVar12 * 8);
LAB_1492b64c0:
  if (local_98.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.ObjectArray.AllocatorInstance.Data);
  }
  if (pUVar14 != (UObject *)0x0) {
    iVar8 = (this->SimCacheCaptures).ArrayNum;
    piVar1 = &(this->SimCacheCaptures).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&(this->SimCacheCaptures).AllocatorInstance,piVar1);
    }
    pFVar13 = (this->SimCacheCaptures).AllocatorInstance.Data + (longlong)iVar8 * 0x40;
    (this->SimCacheCaptures).ArrayNum = iVar8 + 1;
    DefaultConstructItems<FNiagaraSimCacheCaptureInfo,int>(pFVar13,1);
    uVar4 = *(undefined8 *)&param_1->CaptureDelayFrames;
    *(FName *)(pFVar13 + 4) = param_1->ComponentName;
    *(undefined8 *)(pFVar13 + 0xc) = uVar4;
    local_res20 = pUVar14;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar14);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar13 + 0x14),(FObjectPtr)&local_res20);
    if (param_2 !=
        (TDelegate<void___cdecl(FNiagaraSystemSimCacheCaptureRequest_const_&,TObjectPtr<UNiagaraSimCache>),FDefaultDelegateUserPolicy>
         *)(pFVar13 + 0x28)) {
      local_80 = (undefined1  [8])0x0;
      local_78.Data = (FScriptContainerElement *)0x0;
      local_70 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_40);
      if ((*(int *)&param_2->field_0x10 != 0) &&
         (plVar2 = *(longlong **)&param_2->field_0x8, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x50))(plVar2,local_80);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_40);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar13 + 0x28),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_80);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_80,
                 (FWriteAccessScope *)&local_68);
      if ((local_70 != 0) && (local_78.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_78.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,0x10);
        local_70 = 0;
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_80);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// Tick @ 1492b7cf0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FNiagaraDebuggerClient::Tick(FNiagaraDebuggerClient *this,float param_1)

{
  int *piVar1;
  TArray<FNiagaraSimCacheCaptureInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *_Dst;
  
  pTVar2 = &this->SimCacheCaptures;
  for (uVar8 = 0; (-1 < (int)uVar8 && ((int)uVar8 < (this->SimCacheCaptures).ArrayNum));
      uVar8 = uVar8 + 1) {
    if ((int)uVar8 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    bVar4 = FNiagaraSimCacheCaptureInfo::Process
                      ((FNiagaraSimCacheCaptureInfo *)
                       ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x40));
    if (bVar4) {
      uVar6 = 0;
      if ((int)uVar8 < (this->SimCacheCaptures).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x40;
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(_Dst + 0x28));
      if (*(UObject **)(_Dst + 0x20) != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)(_Dst + 0x20));
        *(undefined8 *)(_Dst + 0x20) = 0;
      }
      iVar7 = (this->SimCacheCaptures).ArrayNum + ~uVar8;
      if (iVar7 != 0) {
        memmove(_Dst,_Dst + 0x40,(longlong)iVar7 << 6);
      }
      piVar1 = &(this->SimCacheCaptures).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,&pTVar2->AllocatorInstance,(this->SimCacheCaptures).ArrayNum,
                 &(this->SimCacheCaptures).ArrayMax);
      uVar8 = uVar8 - 1;
    }
  }
  return true;
}

// UpdateClientInfo @ 1492bef10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDebuggerClient::UpdateClientInfo(FNiagaraDebuggerClient *this)

{
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar4;
  UPackage *pUVar5;
  longlong lVar6;
  FDateTime local_res8;
  FTimespan local_res10;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_48;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_38;
  TSharedPtr<IMessageAttachment,1> local_28;
  
  if (((this->MessageEndpoint).Object != (FMessageEndpoint *)0x0) &&
     ((((this->Connection).UniqueId.D != 0 || (this->Connection).UniqueId.C != 0) ||
      (this->Connection).UniqueId.B != 0) || (this->Connection).UniqueId.A != 0)) {
    puVar3 = FMemory::Malloc(0x40,0);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    (**(code **)(this->_padding_ + 0x10))(this,puVar3);
    if (((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = (this->MessageEndpoint).Object;
    local_res10.Ticks = 0;
    local_res8.Ticks = 0x2bca2875f4373fff;
    local_38.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Array.ArrayNum = 0;
    local_38.Array.ArrayMax = 0;
    pTVar4 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add
                       (&local_38,&this->Connection);
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = (pTVar4->Array).ArrayNum;
    lVar6 = (longlong)local_48.ArrayNum;
    _Src = (pTVar4->Array).AllocatorInstance.Data;
    if (local_48.ArrayNum == 0) {
      local_48.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_48.ArrayNum,0,&local_48.AllocatorInstance,local_48.ArrayNum,
                 &local_48.ArrayMax);
      memcpy(local_48.AllocatorInstance.Data,_Src,lVar6 << 4);
    }
    local_28.Object = (IMessageAttachment *)0x0;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (Z_Registration_Info_UScriptStruct_FNiagaraSimpleClientInfo.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNiagaraSimpleClientInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo,(UObject *)pUVar5,
                           L"NiagaraSimpleClientInfo");
    }
    FMessageEndpoint::Send
              (this_00,puVar3,
               Z_Registration_Info_UScriptStruct_FNiagaraSimpleClientInfo.OuterSingleton,Reliable,
               &local_28,&local_48,&local_res10,&local_res8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (local_38.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Array.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateDebugHUDSettings @ 1492bf110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDebuggerClient::UpdateDebugHUDSettings
          (FNiagaraDebuggerClient *this,FNiagaraDebugHUDSettingsData *param_1)

{
  ForAnyElementType FVar1;
  FString local_18;
  
  FNiagaraWorldManager::
  ForAllWorldManagers<_FNiagaraDebuggerClient::UpdateDebugHUDSettings_::__l2::<lambda_1>_>
            ((<lambda_1>)param_1);
  ::FString::PrintfImpl(&local_18,L"fx.Niagara.Debug.GlobalLoopTime %.3f");
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
  }
  ExecuteConsoleCommand(this,(wchar_t *)FVar1.Data,true);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateOutliner @ 1492bf350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FNiagaraDebuggerClient::UpdateOutliner(FNiagaraDebuggerClient *this,float param_1)

{
  TSharedPtr<FNiagaraOutlinerPerfListener,1> *pTVar1;
  longlong *plVar2;
  FNiagaraOutlinerPerfListener *pFVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackY_d8 [32];
  FReadAccessScope local_a8;
  longlong local_90;
  FSharedReferencer<1> FStack_88;
  FString local_80;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if (this->OutlinerCountdown == 0) {
    ::FString::PrintfImpl(&local_80,L"Captured Niagara Outliner Info.");
    FNiagaraWorldManager::
    ForAllWorldManagers<_FNiagaraDebuggerClient::UpdateOutliner_::__l2::<lambda_2>_>(&local_80);
    FlushRenderingCommands();
    local_3c = 0x80;
    this->OutlinerCountdown = 0;
    local_68._0_8_ = (FScriptContainerElement *)0x0;
    local_68._8_8_ = 0;
    local_48 = (void *)0x0;
    local_40 = 0;
    local_34 = 0;
    local_28 = (void *)0x0;
    local_20 = 0;
    local_38 = 0xffffffff;
    CaptureOutlinerData(this,(FNiagaraOutlinerData *)local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OutlinerOnCapture,
               &local_a8);
    if ((*(int *)&(this->OutlinerOnCapture).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OutlinerOnCapture).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a8);
    pTVar1 = &this->StatsListener;
    pFVar3 = pTVar1->Object;
    if (pFVar3 != (FNiagaraOutlinerPerfListener *)0x0) {
      local_a8.DestructionSentinel.Accessor =
           (FMRSWRecursiveAccessDetector *)
           (this->StatsListener).SharedReferenceCount.ReferenceController;
      if ((TReferenceControllerBase<1> *)local_a8.DestructionSentinel.Accessor !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)local_a8.DestructionSentinel.Accessor)->SharedReferenceCount
             = (atomic<int>)
               ((int)((TReferenceControllerBase<1> *)local_a8.DestructionSentinel.Accessor)->
                     SharedReferenceCount + 1);
        UNLOCK();
      }
      local_a8.DestructionSentinel._0_8_ = pFVar3;
      FParticlePerfStatsManager::RemoveListener
                ((TSharedPtr<FParticlePerfStatsListener,1> *)&local_a8);
      local_90 = 0;
      FStack_88.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<FNiagaraOutlinerPerfListener,1> *)&local_90) {
        pTVar1->Object = (FNiagaraOutlinerPerfListener *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->StatsListener).SharedReferenceCount,&FStack_88);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_88.ReferenceController);
    }
    local_20 = 0;
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FNiagaraOutlinerWorldData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FNiagaraOutlinerWorldData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_68,0,local_68._8_4_);
    iVar4 = SUB84(local_68._8_8_,4);
    local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
    if (iVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
    }
    local_34 = 0;
    local_40 = 0;
    local_38 = 0xffffffff;
    if (0x80 < local_3c) {
      local_3c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    bVar5 = false;
  }
  else {
    this->OutlinerCountdown = this->OutlinerCountdown - 1;
    ::FString::PrintfImpl((FString *)&local_a8,L"Capturing Niagara Outliner in %u frames...");
    FNiagaraWorldManager::
    ForAllWorldManagers<_FNiagaraDebuggerClient::UpdateOutliner_::__l5::<lambda_1>_>
              ((FString *)&local_a8);
    if ((FNiagaraOutlinerPerfListener *)local_a8.DestructionSentinel._0_8_ !=
        (FNiagaraOutlinerPerfListener *)0x0) {
      FMemory::Free((void *)local_a8.DestructionSentinel._0_8_);
    }
    bVar5 = true;
  }
  return bVar5;
}

// UpdateOutlinerSettings @ 1492bf580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDebuggerClient::UpdateOutlinerSettings
          (FNiagaraDebuggerClient *this,FNiagaraOutlinerCaptureSettings *param_1,
          TDelegate<void___cdecl(FNiagaraOutlinerData_const_&),FDefaultDelegateUserPolicy> *param_2)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  UPackage *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  FTSTicker *this_00;
  undefined8 *puVar10;
  ulong64 uVar11;
  ForAnyElementType FVar12;
  TReferenceControllerBase<1> *pTVar13;
  FNiagaraOutlinerPerfListener *pFVar14;
  undefined1 local_188 [8];
  FDelegateAllocation local_180;
  undefined1 local_170 [8];
  ForAnyElementType local_168;
  int local_160;
  FNiagaraOutlinerPerfListener *local_158;
  FSharedReferencer<1> local_150;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  TSharedPtr<FParticlePerfStatsListener,1> local_c8;
  TSharedPtr<FParticlePerfStatsListener,1> local_b8;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  TWeakPtr<FTSTicker::FElement,1> local_58;
  FReadAccessScope local_48;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraOutlinerCaptureSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraOutlinerCaptureSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings,(UObject *)pUVar8
                         ,L"NiagaraOutlinerCaptureSettings");
  }
  UScriptStruct::CopyScriptStruct
            (Z_Registration_Info_UScriptStruct_FNiagaraOutlinerCaptureSettings.OuterSingleton,
             &this->OutlinerSettings,param_1,1);
  if ((this->OutlinerSettings).bTriggerCapture == false) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6175469772516359993>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDebuggerClient.cpp"
                       ,199,"OutlinerSettings.bTriggerCapture");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((byte)LogNiagaraDebuggerClient._0_1_ < 5) goto LAB_1492bfc96;
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Data.ArrayNum = 0;
    local_138.Data.ArrayMax = 0;
    FGuid::AppendString(&this->InstanceId,&local_138,Digits);
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.Data.ArrayNum = 0;
    local_148.Data.ArrayMax = 0;
    FGuid::AppendString(&this->SessionId,&local_148,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagaraDebuggerClient);
    FVar12.Data = local_138.Data.AllocatorInstance.Data;
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
      FVar12.Data = local_138.Data.AllocatorInstance.Data;
    }
  }
  else {
    if (this->OutlinerCountdown == 0) {
      pTVar13 = (TReferenceControllerBase<1> *)0x0;
      if (param_1->bGatherPerfData != false) {
        pFVar14 = (this->StatsListener).Object;
        if (pFVar14 != (FNiagaraOutlinerPerfListener *)0x0) {
          local_c8.SharedReferenceCount.ReferenceController =
               (this->StatsListener).SharedReferenceCount.ReferenceController;
          if (local_c8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_c8.Object = (FParticlePerfStatsListener *)pFVar14;
          FParticlePerfStatsManager::RemoveListener(&local_c8);
        }
        pTVar9 = ::operator_new(0x148);
        if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
          pFVar14 = (FNiagaraOutlinerPerfListener *)&DAT_00000010;
LAB_1492bf7b5:
          if (((*(longlong *)&pFVar14->field_0x8 == 0) || (*(longlong *)&pFVar14->field_0x10 == 0))
             || (*(int *)(*(longlong *)&pFVar14->field_0x10 + 8) < 1)) {
            if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
              UNLOCK();
            }
            *(FNiagaraOutlinerPerfListener **)&pFVar14->field_0x8 = pFVar14;
            if (pTVar13 != *(TReferenceControllerBase<1> **)&pFVar14->field_0x10) {
              if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
                UNLOCK();
              }
              plVar5 = *(longlong **)&pFVar14->field_0x10;
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
              *(TReferenceControllerBase<1> **)&pFVar14->field_0x10 = pTVar13;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar13);
          }
        }
        else {
          pTVar9->SharedReferenceCount = (atomic<int>)0x1;
          pTVar9->WeakReferenceCount = (atomic<int>)0x1;
          pTVar9->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFNiagaraOutlinerPerfListener___00_SharedPointerInternals__6B_
          ;
          FParticlePerfStatsListener_GatherAll::FParticlePerfStatsListener_GatherAll
                    ((FParticlePerfStatsListener_GatherAll *)(pTVar9 + 1),true,true,true);
          pFVar14 = (FNiagaraOutlinerPerfListener *)(pTVar9 + 1);
          pTVar9[1]._padding_ = (longlong)&___7FNiagaraOutlinerPerfListener__6B_;
          pTVar13 = pTVar9;
          if (pFVar14 != (FNiagaraOutlinerPerfListener *)0x0) goto LAB_1492bf7b5;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_158 = pFVar14;
        local_150.ReferenceController = pTVar13;
        if (&this->StatsListener != (TSharedPtr<FNiagaraOutlinerPerfListener,1> *)&local_158) {
          (this->StatsListener).Object = pFVar14;
          local_158 = (FNiagaraOutlinerPerfListener *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->StatsListener).SharedReferenceCount,&local_150);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_150.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        local_b8.Object = (FParticlePerfStatsListener *)(this->StatsListener).Object;
        local_b8.SharedReferenceCount.ReferenceController =
             (this->StatsListener).SharedReferenceCount.ReferenceController;
        if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FParticlePerfStatsManager::AddListener(&local_b8,true);
      }
      if (param_2 != &this->OutlinerOnCapture) {
        local_170 = (undefined1  [8])0x0;
        local_168.Data = (FScriptContainerElement *)0x0;
        local_160 = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_48);
        if ((*(int *)&param_2->field_0x10 != 0) &&
           (plVar5 = *(longlong **)&param_2->field_0x8, plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x50))(plVar5,local_170);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_48);
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OutlinerOnCapture,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_170);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_170,
                   (FWriteAccessScope *)&local_a8);
        if ((local_160 != 0) && (local_168.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_168.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,0,0x10);
          local_160 = 0;
        }
        if (local_a8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
        }
        if (local_168.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_170);
      }
      if (param_1->CaptureDelayFrames == 0) {
        if (4 < (byte)LogNiagaraDebuggerClient._0_1_) {
          local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_118.Data.ArrayNum = 0;
          local_118.Data.ArrayMax = 0;
          FGuid::AppendString(&this->InstanceId,&local_118,Digits);
          local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_128.Data.ArrayNum = 0;
          local_128.Data.ArrayMax = 0;
          FGuid::AppendString(&this->SessionId,&local_128,Digits);
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogNiagaraDebuggerClient);
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
        }
        UpdateOutliner(this,__real_3a83126f);
      }
      else {
        this->OutlinerCountdown = param_1->CaptureDelayFrames;
        if (4 < (byte)LogNiagaraDebuggerClient._0_1_) {
          local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_f8.Data.ArrayNum = 0;
          local_f8.Data.ArrayMax = 0;
          FGuid::AppendString(&this->InstanceId,&local_f8,Digits);
          local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_108.Data.ArrayNum = 0;
          local_108.Data.ArrayMax = 0;
          FGuid::AppendString(&this->SessionId,&local_108,Digits);
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogNiagaraDebuggerClient);
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
        }
        this_00 = FTSTicker::GetCoreTicker();
        local_188 = (undefined1  [8])0x0;
        local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_180.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
                   (FWriteAccessScope *)&local_78);
        local_60 = &local_180;
        puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_180);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &
                     ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar11 = FDelegateHandle::GenerateNewID();
          puVar10[2] = uVar11;
          *puVar10 = &
                     ___7__TBaseRawMethodDelegateInstance__0A_VFNiagaraDebuggerClient____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar10[4] = UpdateOutliner;
          puVar10[3] = this;
        }
        if (local_78.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
        }
        FTSTicker::AddTicker
                  (this_00,&local_58,
                   (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_188,0.0);
        if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar4 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar4 == (atomic<int>)0x1) {
            (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_58.WeakReferenceCount.ReferenceController,1);
          }
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
                   (FWriteAccessScope *)&local_90);
        if ((local_180.DelegateSize != 0) &&
           (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_180.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_180,0,0,0x10);
          local_180.DelegateSize = 0;
        }
        if (local_90.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
        }
        if (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_180.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_188);
      }
      goto LAB_1492bfc96;
    }
    if ((byte)LogNiagaraDebuggerClient._0_1_ < 5) goto LAB_1492bfc96;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    FGuid::AppendString(&this->InstanceId,&local_d8,Digits);
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    FGuid::AppendString(&this->SessionId,&local_e8,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagaraDebuggerClient);
    FVar12.Data = local_d8.Data.AllocatorInstance.Data;
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      FVar12.Data = local_d8.Data.AllocatorInstance.Data;
    }
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
LAB_1492bfc96:
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

