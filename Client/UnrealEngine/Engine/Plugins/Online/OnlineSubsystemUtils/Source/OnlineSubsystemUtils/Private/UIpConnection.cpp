// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 25

// StaticClass @ 14ec42f70

UClass * __cdecl UIpConnection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIpConnection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetConnection::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"IpConnection",
               &Z_Registration_Info_UClass_UIpConnection.InnerSingleton,
               StaticRegisterNativesUIpConnection,0x2020,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UIpConnection>,InternalVTableHelperCtorCaller<UIpConnection>,
               local_res8,UNetConnection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIpConnection.InnerSingleton;
}

// UIpConnection @ 14ec54010

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UIpConnection * __thiscall UIpConnection::UIpConnection(UIpConnection *this,FVTableHelper *param_1)

{
  UNetConnection::UNetConnection((UNetConnection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->SocketSendResultsCriticalSection,4000);
  (this->SocketSendResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SocketSendResults).ArrayNum = 0;
  (this->SocketSendResults).ArrayMax = 0;
  (this->LastSendTask).Reference = (FBaseGraphTask *)0x0;
  (this->SocketPrivate).Object = (FSocket *)0x0;
  (this->SocketPrivate).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DeferredCleanupSockets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredCleanupSockets).ArrayNum = 0;
  (this->DeferredCleanupSockets).ArrayMax = 0;
  this->DeferredCleanupTimeCheck = 0.0;
  this->DeferredCleanupReadyCount = (atomic<int>)0x0;
  this->InitialConnectSocketSendCount = 0;
  this->InitialConnectLastLogTime = 0.0;
  this->InitialConnectLastLogSocketSendCount = 0;
  (this->Resolver).Ptr = (FNetConnectionAddressResolution *)0x0;
  return this;
}

// UIpConnection @ 14ec540b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UIpConnection * __thiscall
UIpConnection::UIpConnection(UIpConnection *this,FObjectInitializer *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  UNetConnection::UNetConnection((UNetConnection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->SocketSendResultsCriticalSection,4000);
  puVar5 = (undefined8 *)0x0;
  this->SocketErrorDisconnectDelay = 5.0;
  (this->SocketSendResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SocketSendResults).ArrayNum = 0;
  (this->SocketSendResults).ArrayMax = 0;
  (this->LastSendTask).Reference = (FBaseGraphTask *)0x0;
  (this->SocketPrivate).Object = (FSocket *)0x0;
  (this->SocketPrivate).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DeferredCleanupSockets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredCleanupSockets).ArrayNum = 0;
  (this->DeferredCleanupSockets).ArrayMax = 0;
  this->DeferredCleanupTimeCheck = 0.0;
  this->DeferredCleanupReadyCount = (atomic<int>)0x0;
  this->SocketError_SendDelayStartTime = 0.0;
  this->SocketError_RecvDelayStartTime = 0.0;
  this->InitialConnectSocketSendCount = 0;
  this->InitialConnectLastLogTime = 0.0;
  this->InitialConnectLastLogSocketSendCount = 0;
  puVar3 = ::operator_new(0x60);
  puVar4 = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    *puVar3 = UE::Core::Private::PimplPtr::
              DeleterFunc<UE::Net::Private::FNetConnectionAddressResolution>;
    *(undefined2 *)((longlong)puVar3 + 0x55) = 0;
    *(undefined1 *)((longlong)puVar3 + 0x57) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    *(undefined4 *)(puVar3 + 10) = 0;
    *(undefined1 *)((longlong)puVar3 + 0x54) = 0;
    puVar4 = puVar3;
  }
  (this->Resolver).Ptr = (FNetConnectionAddressResolution *)(puVar4 + 2);
  pTVar1 = CVarNetIpConnectionDisableResolution.Ref;
  bVar2 = IsInParallelGameThread();
  if ((!bVar2) && (bVar2 = IsInGameThread(), !bVar2)) {
    puVar5 = (undefined8 *)&DAT_00000004;
  }
  if (*(int *)((longlong)pTVar1->ShadowedValue + (longlong)puVar5) != 0) {
    ((this->Resolver).Ptr)->ResolutionState = Disabled;
  }
  return this;
}

// ~UIpConnection @ 14ec572b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UIpConnection::~UIpConnection(UIpConnection *this)

{
  undefined1 *puVar1;
  int iVar2;
  FNetConnectionAddressResolution *pFVar3;
  FScriptContainerElement *pFVar4;
  FBaseGraphTask *pFVar5;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  pFVar3 = (this->Resolver).Ptr;
  if (pFVar3 != (FNetConnectionAddressResolution *)0x0) {
    (**(code **)&pFVar3[-1].ResolverResults.ArrayNum)(&pFVar3[-1].ResolverResults.ArrayNum);
  }
  DestructItems<TSharedPtr<FSocket,1>,int>
            ((TSharedPtr<FSocket,1> *)(this->DeferredCleanupSockets).AllocatorInstance.Data,
             (this->DeferredCleanupSockets).ArrayNum);
  pFVar4 = (this->DeferredCleanupSockets).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SocketPrivate).SharedReferenceCount.ReferenceController);
  pFVar5 = (this->LastSendTask).Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar5->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  pFVar4 = (this->SocketSendResults).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SocketSendResultsCriticalSection);
  UNetConnection::~UNetConnection((UNetConnection *)this);
  return;
}

// operator() @ 14ec59360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `UIpConnection::SendToRemote'::__l44::<lambda_2>::operator()(void *this)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_IpConnection_SendToSocket> FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  LPCRITICAL_SECTION lpCriticalSection;
  ForAnyElementType *pFVar17;
  FColor_u_0 local_res8 [2];
  uint local_res10;
  uint uStackX_14;
  FName local_res18;
  LARGE_INTEGER local_res20;
  undefined8 local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  
  plVar2 = *(longlong **)(*(longlong *)this + 0x1fc0);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  local_68 = 0;
  FVar13 = StatPtr_STAT_IpConnection_SendToSocket;
  if (StatPtr_STAT_IpConnection_SendToSocket ==
      (FThreadSafeStaticStat<FStat_STAT_IpConnection_SendToSocket>)0x0) {
    pFVar12 = ::FName::FName(&local_60,"STAT_IpConnection_SendToSocket");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_IpConnection_SendToSocket>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IpConnection_SendToSocket,
                        *pFVar12,L"IpConnection Socket SendTo","STATGROUP_Net","STATCAT_Advanced",
                        L"Net",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar9 = false;
  bVar6 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar14 == 0)) {
LAB_14ec594cb:
    bVar5 = false;
    FVar16 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar9 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar15.Value;
        local_res18.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\IpConnection.cpp"
                   ,0x214);
        bVar9 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ec594cb;
    local_res10 = FVar15.Value;
    uStackX_14 = uVar14;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar5 = true;
  }
  lVar3 = *(longlong *)this;
  pcVar4 = *(code **)(*plVar2 + 0x58);
  if ((*(longlong *)(lVar3 + 0x168) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  cVar8 = (*pcVar4)(plVar2,*(undefined8 *)((longlong)this + 8),
                    *(undefined4 *)((longlong)this + 0x10),&local_68,*(undefined8 *)(lVar3 + 0x168))
  ;
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if ((UE::Net::Private::GNetDebugInitialConnect == 0) || (*(int *)(*(longlong *)this + 0x54c) != 0)
     ) {
    if (cVar8 == '\0') goto LAB_14ec5963c;
  }
  else if (cVar8 == '\0') {
LAB_14ec5963c:
    if (*(longlong **)((longlong)this + 0x18) != (longlong *)0x0) {
      uVar10 = (**(code **)(**(longlong **)((longlong)this + 0x18) + 0xb8))();
      local_68 = CONCAT44(uVar10,(undefined4)local_68);
    }
    if (cVar8 == '\0') goto LAB_14ec5966c;
  }
  else {
    piVar1 = (int *)(*(longlong *)this + 0x2000);
    *piVar1 = *piVar1 + 1;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    return;
  }
  if (local_68._4_4_ != 0) {
    return;
  }
LAB_14ec5966c:
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x1f80);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  lVar3 = *(longlong *)this;
  pFVar17 = (ForAnyElementType *)(lVar3 + 0x1fa8);
  if (((pFVar17->Data <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 < pFVar17->Data + (longlong)*(int *)(lVar3 + 0x1fb4) * 8
      )) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar11 = *(int *)(lVar3 + 0x1fb0);
  if (iVar11 == *(int *)(lVar3 + 0x1fb4)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar17,(int *)(lVar3 + 0x1fb4));
    *(int *)(lVar3 + 0x1fb0) = iVar11 + 1;
  }
  else {
    *(int *)(lVar3 + 0x1fb0) = iVar11 + 1;
  }
  *(undefined8 *)(pFVar17->Data + (longlong)iVar11 * 8) = local_68;
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// CleanUp @ 14ec62200

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UIpConnection::CleanUp(UIpConnection *this)

{
  int *piVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UNetConnection::CleanUp((UNetConnection *)this);
  WaitForSendTasks(this);
  UE::Net::Private::FNetConnectionAddressResolution::CleanupResolutionSockets
            ((this->Resolver).Ptr,CleanAll);
  LOCK();
  this->DeferredCleanupReadyCount = (atomic<int>)0x0;
  UNLOCK();
  DestructItems<TSharedPtr<FSocket,1>,int>
            ((TSharedPtr<FSocket,1> *)(this->DeferredCleanupSockets).AllocatorInstance.Data,
             (this->DeferredCleanupSockets).ArrayNum);
  piVar1 = &(this->DeferredCleanupSockets).ArrayMax;
  (this->DeferredCleanupSockets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->DeferredCleanupSockets).AllocatorInstance,0,piVar1);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->SocketPrivate != (TSharedPtr<FSocket,1> *)&local_18) {
    (this->SocketPrivate).Object = (FSocket *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SocketPrivate).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// DisableAddressResolution @ 14ec6c8e0

void __thiscall UIpConnection::DisableAddressResolution(UIpConnection *this)

{
  ((this->Resolver).Ptr)->ResolutionState = Disabled;
  return;
}

// GetPrivateStaticClass @ 14ec781e0

UClass * __cdecl UIpConnection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIpConnection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetConnection::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"IpConnection",
               &Z_Registration_Info_UClass_UIpConnection.InnerSingleton,
               StaticRegisterNativesUIpConnection,0x2020,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UIpConnection>,InternalVTableHelperCtorCaller<UIpConnection>,
               local_res8,UNetConnection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIpConnection.InnerSingleton;
}

// GetTimeoutValue @ 14ec79100

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UIpConnection::GetTimeoutValue(UIpConnection *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  float fVar4;
  
  if ((this->_padding_ == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Driver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\IpConnection.cpp"
                         ,0x26e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    fVar4 = (float)(*pcVar1)();
    return fVar4;
  }
  if ((-1 < *(char *)(this->_padding_ + 0x329)) &&
     (((this->Resolver).Ptr)->ResolutionState == Connecting)) {
    if (this->_padding_ != 0) {
      pUVar3 = UIpNetDriver::StaticClass();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
      if (((bVar2) && (this->_padding_ != 0)) &&
         (fVar4 = *(float *)(this->_padding_ + 0xa84), fVar4 != 0.0)) {
        return fVar4;
      }
    }
    return *(float *)(this->_padding_ + 0xec);
  }
  fVar4 = UNetConnection::GetTimeoutValue((UNetConnection *)this);
  return fVar4;
}

// HandleConnectionTimeout @ 14ec7a090

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UIpConnection::HandleConnectionTimeout(UIpConnection *this,FString *param_1)

{
  uint *puVar1;
  FNetConnectionAddressResolution *pFVar2;
  
  pFVar2 = (this->Resolver).Ptr;
  if (((pFVar2->CurrentAddressIndex < (pFVar2->ResolverResults).ArrayNum) &&
      (pFVar2->ResolutionState != Disabled)) && (1 < (byte)(pFVar2->ResolutionState - Done))) {
    pFVar2->ResolutionState = TryNextAddress;
    puVar1 = (uint *)((longlong)&this->_padding_ + 4);
    *puVar1 = *puVar1 & 0xfffffffe;
    return;
  }
  UNetConnection::HandleConnectionTimeout((UNetConnection *)this,param_1);
  return;
}

// HandleSocketRecvError @ 14ec7ce90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UIpConnection::HandleSocketRecvError(UIpConnection *this,UNetDriver *param_1,FString *param_2)

{
  double dVar1;
  FNetConnectionAddressResolution *pFVar2;
  code *pcVar3;
  bool bVar4;
  void *local_38 [6];
  
  if ((param_1 == (UNetDriver *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NetDriver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\IpConnection.cpp"
                         ,0x2c6,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (0.0 < this->SocketErrorDisconnectDelay) {
    dVar1 = param_1->ElapsedTime;
    if (this->SocketError_RecvDelayStartTime == 0.0) {
      if (4 < (byte)LogNet._0_1_) {
        (**(code **)(this->_padding_ + 0x2e0))(this,local_38);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_38[0] != (void *)0x0) {
          FMemory::Free(local_38[0]);
        }
      }
      this->SocketError_RecvDelayStartTime = dVar1;
      return;
    }
    if (dVar1 - this->SocketError_RecvDelayStartTime < (double)this->SocketErrorDisconnectDelay) {
      return;
    }
  }
  pFVar2 = (this->Resolver).Ptr;
  if (((pFVar2->CurrentAddressIndex < (pFVar2->ResolverResults).ArrayNum) &&
      (pFVar2->ResolutionState != Disabled)) && (1 < (byte)(pFVar2->ResolutionState - Done))) {
    pFVar2->ResolutionState = TryNextAddress;
    this->SocketErrorDisconnectDelay = 0.0;
  }
  else {
    pFVar2->ResolutionState = Error;
    UEngine::BroadcastNetworkFailure
              (GEngine,(param_1->World).field0_0x0.DebugPtr,param_1,ConnectionLost,param_2);
    (**(code **)(param_1->_padding_ + 800))(param_1);
  }
  return;
}

// HandleSocketSendResult @ 14ec7d010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UIpConnection::HandleSocketSendResult
          (UIpConnection *this,FSocketSendResult *param_1,ISocketSubsystem *param_2)

{
  double dVar1;
  FNetConnectionAddressResolution *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  void *local_38 [6];
  
  if (param_1->Error == SE_NO_ERROR) {
    if ((4 < (byte)LogNet._0_1_) && (0.0 < this->SocketError_SendDelayStartTime)) {
      (**(code **)(this->_padding_ + 0x2e0))(0,local_58);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_58[0] != (void *)0x0) {
        FMemory::Free(local_58[0]);
        this->SocketError_SendDelayStartTime = 0.0;
        return;
      }
    }
  }
  else {
    if (param_1->Error == SE_EWOULDBLOCK) {
      return;
    }
    if ((param_2 == (ISocketSubsystem *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("SocketSubsystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\IpConnection.cpp"
                           ,0x291,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (0.0 < this->SocketErrorDisconnectDelay) {
      dVar1 = *(double *)(this->_padding_ + 800);
      if (this->SocketError_SendDelayStartTime == 0.0) {
        if (4 < (byte)LogNet._0_1_) {
          (**(code **)(this->_padding_ + 0x2e0))(this,local_48);
          ISocketSubsystem::GetSocketError(param_2,param_1->Error);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          if (local_48[0] != (void *)0x0) {
            FMemory::Free(local_48[0]);
          }
        }
        this->SocketError_SendDelayStartTime = dVar1;
        return;
      }
      if (dVar1 - this->SocketError_SendDelayStartTime < (double)this->SocketErrorDisconnectDelay) {
        return;
      }
    }
    if (*(char *)((longlong)&this->_padding_ + 5) != '\0') {
      return;
    }
    pFVar2 = (this->Resolver).Ptr;
    if ((((pFVar2->ResolverResults).ArrayNum <= pFVar2->CurrentAddressIndex) ||
        (pFVar2->ResolutionState == Disabled)) || ((byte)(pFVar2->ResolutionState - Done) < 2)) {
      pFVar2->ResolutionState = Error;
      UNetConnection::SetPendingCloseDueToSocketSendFailure((UNetConnection *)this);
      (**(code **)(this->_padding_ + 0x2e0))(this,local_38);
      ISocketSubsystem::GetSocketError(param_2,param_1->Error);
      ::FString::PrintfImpl
                (&local_68,
                 L"UIpNetConnection::HandleSocketSendResult: Socket->SendTo failed with error %i (%s). %s Connection will be closed during next Tick()!"
                );
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
      UEngine::BroadcastNetworkFailure
                (GEngine,(((UNetDriver *)this->_padding_)->World).field0_0x0.DebugPtr,
                 (UNetDriver *)this->_padding_,ConnectionLost,&local_68);
      if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
      return;
    }
    pFVar2->ResolutionState = TryNextAddress;
    UNetConnection::SetPendingCloseDueToSocketSendFailure((UNetConnection *)this);
  }
  this->SocketError_SendDelayStartTime = 0.0;
  return;
}

// InitBase @ 14ec7e660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UIpConnection::InitBase
          (UIpConnection *this,UNetDriver *param_1,FSocket *param_2,FURL *param_3,
          EConnectionState param_4,int param_5,int param_6)

{
  code *pcVar1;
  int iVar2;
  TConsoleVariableData<int> *pTVar3;
  int iVar4;
  FSocket *pFVar5;
  FSocket *pFVar6;
  FSocket *pFVar7;
  FSocket *pFVar8;
  bool bVar9;
  FSocket *local_18;
  FSharedReferencer<1> local_10;
  
  if (param_6 == 0) {
    param_6 = 0x1c;
  }
  if ((param_5 == 0) || (0x400 < param_5)) {
    param_5 = 0x400;
  }
  UNetConnection::InitBase((UNetConnection *)this,param_1,param_2,param_3,param_4,param_5,param_6);
  pFVar7 = (FSocket *)0x0;
  if (((this->Resolver).Ptr)->ResolutionState == Disabled) {
    pFVar5 = (FSocket *)param_2->_padding_;
    pFVar6 = pFVar5;
    pFVar8 = pFVar7;
    if (pFVar5 != (FSocket *)0x0) {
      iVar2 = (int)pFVar5->_padding_;
      do {
        pFVar6 = pFVar7;
        pFVar8 = (FSocket *)0x0;
        if (iVar2 == 0) goto LAB_14ec7e705;
        LOCK();
        iVar4 = (int)pFVar5->_padding_;
        bVar9 = iVar2 == iVar4;
        if (bVar9) {
          *(int *)&pFVar5->_padding_ = iVar2 + 1;
          iVar4 = iVar2;
        }
        UNLOCK();
        iVar2 = iVar4;
      } while (!bVar9);
      pFVar6 = pFVar5;
      pFVar8 = (FSocket *)param_2->_padding_;
    }
LAB_14ec7e705:
    pFVar5 = (FSocket *)&pFVar8->_padding_;
    if (pFVar8 == (FSocket *)0x0) {
      pFVar5 = pFVar7;
    }
    if ((pFVar5 != (FSocket *)&param_2->_padding_) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("SharedThis.Get() == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x67f,L""), bVar9)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (pFVar8 == (FSocket *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L"");
      if (bVar9) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L"");
      if (bVar9) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pFVar6 != (FSocket *)0x0) {
      LOCK();
      *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
      UNLOCK();
    }
    local_18 = pFVar8;
    local_10.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
    if (&this->SocketPrivate != (TSharedPtr<FSocket,1> *)&local_18) {
      (this->SocketPrivate).Object = pFVar8;
      local_18 = (FSocket *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SocketPrivate).SharedReferenceCount,&local_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar6);
  }
  pTVar3 = CVarNetEnableCongestionControl.Ref;
  bVar9 = IsInParallelGameThread();
  if ((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) {
    pFVar7 = (FSocket *)&DAT_00000004;
  }
  if (0 < *(int *)((longlong)&pFVar7->_padding_ + (longlong)pTVar3->ShadowedValue)) {
    if ((char)this->_padding_ != '\0') {
      FNetworkCongestionControl::~FNetworkCongestionControl
                ((FNetworkCongestionControl *)&this->_padding_);
    }
    FNetworkCongestionControl::FNetworkCongestionControl
              ((FNetworkCongestionControl *)&this->_padding_,(double)(int)this->_padding_,0x100);
    *(undefined1 *)&this->_padding_ = 1;
  }
  return;
}

// InitLocalConnection @ 14ec80aa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UIpConnection::InitLocalConnection
          (UIpConnection *this,UNetDriver *param_1,FSocket *param_2,FURL *param_3,
          EConnectionState param_4,int param_5,int param_6)

{
  FNetConnectionAddressResolution *pFVar1;
  bool bVar2;
  ISocketSubsystem *pIVar3;
  FInternetAddr *local_18;
  FSharedReferencer<1> local_10;
  
  (**(code **)(this->_padding_ + 0x350))(this);
  pFVar1 = (this->Resolver).Ptr;
  pIVar3 = (ISocketSubsystem *)(**(code **)(param_1->_padding_ + 0x408))(param_1);
  bVar2 = UE::Net::Private::FNetConnectionAddressResolution::InitLocalConnection
                    (pFVar1,pIVar3,param_2,param_3);
  if (bVar2) {
    pFVar1 = (this->Resolver).Ptr;
    local_10.ReferenceController = (pFVar1->RemoteAddr).SharedReferenceCount.ReferenceController;
    local_18 = (pFVar1->RemoteAddr).Object;
    if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_10.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((FInternetAddr **)&this->_padding_ != &local_18) {
      this->_padding_ = (longlong)local_18;
      local_18 = (FInternetAddr *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&local_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
    (**(code **)(this->_padding_ + 0x2f8))(this);
  }
  else {
    UNetConnection::Close((UNetConnection *)this);
  }
  return;
}

// InitRemoteConnection @ 14ec80bd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UIpConnection::InitRemoteConnection
          (UIpConnection *this,UNetDriver *param_1,FSocket *param_2,FURL *param_3,
          FInternetAddr *param_4,EConnectionState param_5,int param_6,int param_7)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_Stat_IpConnectionInitRemoteConnection> FVar10;
  longlong *plVar11;
  longlong *plVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar13;
  FColor_u_0 local_res8 [2];
  FName local_88;
  FStatMessage local_80;
  FName local_70;
  FName local_68;
  longlong local_58;
  FSharedReferencer<1> local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  void *local_38 [2];
  
  FVar10 = StatPtr_Stat_IpConnectionInitRemoteConnection;
  if (StatPtr_Stat_IpConnectionInitRemoteConnection ==
      (FThreadSafeStaticStat<FStat_Stat_IpConnectionInitRemoteConnection>)0x0) {
    pFVar9 = ::FName::FName(&local_70,"Stat_IpConnectionInitRemoteConnection");
    FVar10 = (FThreadSafeStaticStat<FStat_Stat_IpConnectionInitRemoteConnection>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_Stat_IpConnectionInitRemoteConnection,
                        *pFVar9,L"IpConnection InitRemoteConnection","STATGROUP_Net",
                        "STATCAT_Advanced",L"Net",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  bVar4 = false;
  bVar6 = false;
  FVar13 = *(FName *)FVar10;
  if ((FVar13.ComparisonIndex.Value.Value != 0) || (FVar13.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.ComparisonIndex.Value = FVar13.ComparisonIndex.Value.Value;
        local_88.Number = FVar13.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_88,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\IpConnection.cpp"
                   ,0x9a);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_80.StatData.Pad = (uchar  [8])FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      goto LAB_14ec80d1b;
    }
  }
  bVar5 = false;
  FVar13 = local_68;
LAB_14ec80d1b:
  ((this->Resolver).Ptr)->ResolutionState = Disabled;
  iVar3 = param_7;
  if (param_7 == 0) {
    iVar3 = 0x1c;
  }
  if ((param_6 == 0) || (iVar8 = param_6, 0x400 < param_6)) {
    iVar8 = 0x400;
  }
  (**(code **)(this->_padding_ + 0x350))(this,param_1,param_2,param_3,param_5,iVar8,iVar3);
  plVar11 = (longlong *)(**(code **)((longlong)*param_4 + 0xa0))(param_4,local_48);
  local_50.ReferenceController = (TReferenceControllerBase<1> *)plVar11[1];
  local_58 = *plVar11;
  if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_50.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  plVar11 = &this->_padding_;
  if (plVar11 != &local_58) {
    *plVar11 = local_58;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  if (*plVar11 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar12 = (longlong *)(**(code **)(*(longlong *)*plVar11 + 0x80))((longlong *)*plVar11,local_38);
  plVar11 = &this->_padding_;
  if (plVar11 != plVar12) {
    if ((void *)*plVar11 != (void *)0x0) {
      FMemory::Free((void *)*plVar11);
    }
    *plVar11 = *plVar12;
    *plVar12 = 0;
    *(int *)&this->_padding_ = (int)plVar12[1];
    *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)((longlong)plVar12 + 0xc);
    plVar12[1] = 0;
  }
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  (**(code **)(this->_padding_ + 0x2f8))(this);
  (**(code **)(this->_padding_ + 0x3d0))(this);
  UNetConnection::SetExpectedClientLoginMsgType((UNetConnection *)this,'\0');
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_80.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter((LARGE_INTEGER *)&param_4);
      local_80.StatData.Pad = (uchar  [8])((ulonglong)param_4 & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_80);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// LowLevelDescribe @ 14ec82360

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
UIpConnection::LowLevelDescribe(UIpConnection *this,FString *__return_storage_ptr__)

{
  FSocket *pFVar1;
  FUniqueNetId *pFVar2;
  bool bVar3;
  bool bVar4;
  EConnectionState EVar5;
  longlong *plVar6;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar7;
  longlong lVar8;
  longlong *local_78;
  TReferenceControllerBase<1> *local_70;
  TSharedPtr<FUniqueNetId_const_,1> local_68;
  void *local_58 [2];
  void *local_48 [2];
  void *local_38 [2];
  
  bVar3 = false;
  plVar6 = (longlong *)(**(code **)(*(longlong *)this->_padding_ + 0x408))();
  (**(code **)(*plVar6 + 0x90))(plVar6,&local_78);
  pFVar1 = (this->SocketPrivate).Object;
  if (pFVar1 != (FSocket *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,local_78);
  }
  EVar5 = UNetConnection::GetConnectionState((UNetConnection *)this);
  ::LexToString(EVar5);
  bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&this->_padding_);
  if (bVar4) {
    pTVar7 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)&this->_padding_,&local_68);
    pFVar2 = pTVar7->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    lVar8 = (**(code **)(*(longlong *)pFVar2 + 0x38))(pFVar2,local_38);
    if (*(int *)(lVar8 + 8) == 0) {
      bVar3 = true;
    }
    else {
      bVar3 = true;
    }
  }
  (**(code **)(*local_78 + 0x80))(local_78,local_48,1);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x80))(plVar6,local_58,1);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"url=%s remote=%s local=%s uniqueid=%s state: %s");
  if ((plVar6 != (longlong *)0x0) && (local_58[0] != (void *)0x0)) {
    FMemory::Free(local_58[0]);
  }
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  if ((bVar3) && (local_38[0] != (void *)0x0)) {
    FMemory::Free(local_38[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  return __return_storage_ptr__;
}

// LowLevelGetRemoteAddress @ 14ec82a20

FString * __thiscall
UIpConnection::LowLevelGetRemoteAddress
          (UIpConnection *this,FString *__return_storage_ptr__,bool param_1)

{
  longlong *plVar1;
  FString *pFVar2;
  bool bVar3;
  FString local_28;
  void *local_18 [2];
  
  plVar1 = (longlong *)this->_padding_;
  bVar3 = plVar1 == (longlong *)0x0;
  if (bVar3) {
    pFVar2 = ::FString::FString(&local_28,L"");
  }
  else {
    pFVar2 = (FString *)(**(code **)(*plVar1 + 0x80))(plVar1,local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if (bVar3) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// LowLevelSend @ 14ec82ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UIpConnection::LowLevelSend(UIpConnection *this,void *param_1,int param_2,FOutPacketTraits *param_3)

{
  EAddressResolutionState EVar1;
  char cVar2;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    cVar2 = (**(code **)(*(longlong *)this->_padding_ + 0x98))();
    if ((cVar2 != '\0') && (UE::Net::Private::GNetBlockSend == 0)) {
      EVar1 = ((this->Resolver).Ptr)->ResolutionState;
      if ((EVar1 == Disabled) || ((EVar1 - WaitingForResolves & 0xfd) != 0)) {
        SendToRemote(this,param_1,param_2,param_3);
      }
      else if (5 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
    }
  }
  return;
}

// ReceivedRawPacket @ 14ec8f970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UIpConnection::ReceivedRawPacket(UIpConnection *this,void *param_1,int param_2)

{
  EAddressResolutionState EVar1;
  FNetConnectionAddressResolution *pFVar2;
  void *local_18 [2];
  
  if ((4 < (byte)LogNet._0_1_) && (0.0 < this->SocketError_RecvDelayStartTime)) {
    (**(code **)(this->_padding_ + 0x2e0))(0,local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  pFVar2 = (this->Resolver).Ptr;
  this->SocketError_RecvDelayStartTime = 0.0;
  EVar1 = pFVar2->ResolutionState;
  if ((EVar1 != Disabled) && (EVar1 == Connecting)) {
    pFVar2->ResolutionState = Connected;
  }
  UNetConnection::ReceivedRawPacket((UNetConnection *)this,param_1,param_2);
  return;
}

// SafeDeferredSocketCleanup @ 14ec939e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UIpConnection::SafeDeferredSocketCleanup(UIpConnection *this,TSharedPtr<FSocket,1> *param_1)

{
  int *piVar1;
  TArray<TSharedPtr<FSocket,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TRefCountPtr<FBaseGraphTask> *this_00;
  TSharedPtr<FSocket,1> *pTVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FBaseGraphTask *pFVar6;
  code *pcVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  int iVar10;
  TSharedPtr<FSocket,1> *pTVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_private:_void___cdecl_UIpConnection::SafeDeferredSocketCleanup(TSharedPtr<FSocket,1>_const_&)_::_8_::FStat_STAT_IpConnection_SocketCleanupTask>
  FVar13;
  TRefCountPtr<FBaseGraphTask> TVar14;
  undefined1 auStackY_118 [32];
  undefined8 *local_b8;
  FName local_b0;
  FName local_a8 [2];
  code *local_98 [2];
  undefined **local_88;
  UIpConnection *local_80;
  undefined8 local_70;
  undefined1 local_68 [32];
  TRefCountPtr<FBaseGraphTask> local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pTVar2 = &this->DeferredCleanupSockets;
  pTVar3 = (TSharedPtr<FSocket,1> *)(pTVar2->AllocatorInstance).Data;
  if (pTVar3 != pTVar3 + (this->DeferredCleanupSockets).ArrayNum) {
    pTVar11 = pTVar3;
    do {
      if (pTVar11->Object == param_1->Object) {
        return;
      }
      pTVar11 = pTVar11 + 1;
    } while (pTVar11 != pTVar3 + (this->DeferredCleanupSockets).ArrayNum);
  }
  if (((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->DeferredCleanupSockets).ArrayMax)) &&
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
  iVar10 = (this->DeferredCleanupSockets).ArrayNum;
  piVar1 = &(this->DeferredCleanupSockets).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->DeferredCleanupSockets).ArrayNum = iVar10 + 1;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  *(FSocket **)(pFVar4 + (longlong)iVar10 * 0x10) = param_1->Object;
  pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar10 * 0x10 + 8) = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->DeferredCleanupTimeCheck = (double)this->_padding_;
  pTVar8 = CVarNetIpConnectionUseSendTasks.Ref;
  bVar9 = IsInParallelGameThread();
  if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((pTVar8->ShadowedValue[0] == 0) ||
     (this_00 = &this->LastSendTask, this_00->Reference == (FBaseGraphTask *)0x0)) {
    LOCK();
    this->DeferredCleanupReadyCount = (atomic<int>)((int)this->DeferredCleanupReadyCount + 1);
    UNLOCK();
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_IpConnection_SocketCleanupTask ==
          (FThreadSafeStaticStat<_private:_void___cdecl_UIpConnection::SafeDeferredSocketCleanup(TSharedPtr<FSocket,1>_const_&)_::_8_::FStat_STAT_IpConnection_SocketCleanupTask>
           )0x0) {
        pFVar12 = ::FName::FName(&local_b0,"STAT_IpConnection_SocketCleanupTask");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IpConnection_SocketCleanupTask,
                   *pFVar12,L"IpConnection SocketCleanup task","STATGROUP_TaskGraphTasks",
                   "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      _Init_thread_footer(&::_TSS0);
    }
    local_48.Reference = (FBaseGraphTask *)0x0;
    local_40 = 0;
    local_3c = 4;
    iVar10 = 0;
    if ((local_68 <= this_00) && (this_00 < &local_48)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = local_40;
      if (local_40 == local_3c) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                           (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)local_68,
                            &local_3c);
      }
    }
    local_40 = iVar10 + 1;
    TVar14.Reference = (FBaseGraphTask *)local_68;
    if (local_48.Reference != (FBaseGraphTask *)0x0) {
      TVar14.Reference = local_48.Reference;
    }
    *(FBaseGraphTask **)((longlong)&(TVar14.Reference)->field_0x0 + (longlong)iVar10 * 8) =
         (FBaseGraphTask *)0x0;
    pFVar6 = this_00->Reference;
    *(FBaseGraphTask **)((longlong)&(TVar14.Reference)->field_0x0 + (longlong)iVar10 * 8) = pFVar6;
    if (pFVar6 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&pFVar6->field_0x30 = *(int *)&pFVar6->field_0x30 + 1;
      UNLOCK();
    }
    FVar13 = StatPtr_STAT_IpConnection_SocketCleanupTask;
    if (StatPtr_STAT_IpConnection_SocketCleanupTask ==
        (FThreadSafeStaticStat<_private:_void___cdecl_UIpConnection::SafeDeferredSocketCleanup(TSharedPtr<FSocket,1>_const_&)_::_8_::FStat_STAT_IpConnection_SocketCleanupTask>
         )0x0) {
      pFVar12 = ::FName::FName(local_a8,"STAT_IpConnection_SocketCleanupTask");
      FVar13 = (FThreadSafeStaticStat<_private:_void___cdecl_UIpConnection::SafeDeferredSocketCleanup(TSharedPtr<FSocket,1>_const_&)_::_8_::FStat_STAT_IpConnection_SocketCleanupTask>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_IpConnection_SocketCleanupTask,*pFVar12,
                            L"IpConnection SocketCleanup task","STATGROUP_TaskGraphTasks",
                            "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                            MCR_Invalid);
    }
    local_70 = 0;
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UIpConnection::SafeDeferredSocketCleanup'::`8'::<lambda_1>,1,0>
                ::_vftable_;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UIpConnection::SafeDeferredSocketCleanup'::__l8::<lambda_1>,void>
                  ::Call;
    local_80 = this;
    TVar14 = FFunctionGraphTask::CreateAndDispatchWhenReady
                       ((TUniqueFunction<void___cdecl(void)> *)&local_b8,(TStatIdData *)local_98,
                        (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                         *)FVar13,(Type)local_68);
    TRefCountPtr<FBaseGraphTask>::operator=
              (this_00,(TRefCountPtr<FBaseGraphTask> *)TVar14.Reference);
    if (local_b8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_b8 + 6);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar10 == 1) && (local_b8 != (undefined8 *)0x0)) {
        (**(code **)*local_b8)(local_b8,1);
      }
    }
    TVar14.Reference = (FBaseGraphTask *)local_68;
    if (local_48.Reference != (FBaseGraphTask *)0x0) {
      TVar14.Reference = local_48.Reference;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)TVar14.Reference,local_40);
    if (local_48.Reference != (FBaseGraphTask *)0x0) {
      FMemory::Free(local_48.Reference);
    }
  }
  return;
}

// SendToRemote @ 14ec94a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ec95676) */
/* WARNING: Removing unreachable block (ram,0x00014ec9567f) */
/* WARNING: Removing unreachable block (ram,0x00014ec956a0) */
/* WARNING: Removing unreachable block (ram,0x00014ec956a1) */
/* WARNING: Removing unreachable block (ram,0x00014ec956b3) */
/* WARNING: Removing unreachable block (ram,0x00014ec95747) */
/* WARNING: Removing unreachable block (ram,0x00014ec95758) */
/* WARNING: Removing unreachable block (ram,0x00014ec95766) */
/* WARNING: Removing unreachable block (ram,0x00014ec95775) */
/* WARNING: Removing unreachable block (ram,0x00014ec9577d) */
/* WARNING: Removing unreachable block (ram,0x00014ec95783) */
/* WARNING: Removing unreachable block (ram,0x00014ec9579d) */
/* WARNING: Removing unreachable block (ram,0x00014ec957c2) */
/* WARNING: Removing unreachable block (ram,0x00014ec957c5) */
/* WARNING: Removing unreachable block (ram,0x00014ec957f9) */
/* WARNING: Removing unreachable block (ram,0x00014ec957fe) */
/* WARNING: Removing unreachable block (ram,0x00014ec95830) */
/* WARNING: Removing unreachable block (ram,0x00014ec956cf) */
/* WARNING: Removing unreachable block (ram,0x00014ec956d8) */
/* WARNING: Removing unreachable block (ram,0x00014ec956f1) */
/* WARNING: Removing unreachable block (ram,0x00014ec956f4) */
/* WARNING: Removing unreachable block (ram,0x00014ec95734) */
/* WARNING: Removing unreachable block (ram,0x00014ec95739) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UIpConnection::SendToRemote
          (UIpConnection *this,uchar *param_1,int param_2,FOutPacketTraits *param_3)

{
  int *piVar1;
  TRefCountPtr<FBaseGraphTask> *this_00;
  double dVar2;
  ushort uVar3;
  ushort uVar4;
  longlong *plVar5;
  PacketHandler *this_01;
  longlong *plVar6;
  FSocket *pFVar7;
  FBaseGraphTask *pFVar8;
  FScriptContainerElement *_Src;
  FNetConnectionAddressResolution *pFVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  TConsoleVariableData<int> *pTVar14;
  ForAnyElementType FVar15;
  undefined4 uVar16;
  bool bVar17;
  char cVar18;
  int iVar19;
  ESocketErrors EVar20;
  longlong lVar21;
  undefined8 uVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<_private:_void___cdecl_UIpConnection::SendToRemote(unsigned_char_*,int,FOutPacketTraits_&)_::_44_::FStat_STAT_IpConnection_SendToTask>
  FVar24;
  TRefCountPtr<FBaseGraphTask> TVar25;
  FThreadSafeStaticStat<FStat_STAT_IpConnection_SendToSocket> FVar26;
  ISocketSubsystem *this_02;
  size_t _Size;
  longlong lVar27;
  FName FVar28;
  int iVar29;
  undefined1 auStackY_3d8 [32];
  char local_378;
  uchar *local_368;
  ushort local_360;
  short sStack_35e;
  ForAnyElementType local_358;
  undefined8 local_350;
  FSocket *local_348;
  FColor_u_0 local_340 [2];
  longlong *local_338;
  TReferenceControllerBase<1> *local_328;
  FString local_320;
  FString local_310;
  FName local_300;
  longlong *local_2f8;
  FSharedReferencer<1> local_2f0;
  longlong *local_2e8;
  TReferenceControllerBase<1> *local_2e0;
  FName local_2d8;
  longlong *local_2c8;
  TReferenceControllerBase<1> *pTStack_2c0;
  LARGE_INTEGER local_2b8;
  undefined8 *local_2b0;
  LARGE_INTEGER local_2a8;
  ProcessedPacket local_2a0;
  TSharedPtr<FInternetAddr_const_,1> local_290 [2];
  FString local_270;
  FName local_260;
  FName local_258;
  FName local_250;
  void *local_248 [2];
  void *local_238 [6];
  void *local_208 [2];
  void *local_1f8 [2];
  void *local_1e8 [2];
  longlong local_1d8;
  TReferenceControllerBase<1> *pTStack_1d0;
  FReadAccessScope local_1c8;
  code *local_1a8 [5];
  undefined8 *local_180;
  FBitWriter local_178;
  undefined1 local_b8 [32];
  TRefCountPtr<FBaseGraphTask> local_98;
  int local_90;
  int local_8c;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_2c8 = (longlong *)0x0;
  pTStack_2c0 = (TReferenceControllerBase<1> *)0x0;
  if (GCurrentDuplicateIP.Object == (FInternetAddr *)0x0) {
LAB_14ec94c33:
    local_328 = pTStack_2c0;
    local_338 = local_2c8;
  }
  else {
    plVar6 = &this->_padding_;
    if ((*plVar6 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    plVar5 = (longlong *)*plVar6;
    pcVar10 = *(code **)(*plVar5 + 8);
    if ((GCurrentDuplicateIP.Object == (FInternetAddr *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    cVar18 = (*pcVar10)(plVar5,GCurrentDuplicateIP.Object);
    if (cVar18 == '\0') goto LAB_14ec94c33;
    local_328 = (TReferenceControllerBase<1> *)this->_padding_;
    local_338 = (longlong *)*plVar6;
    if (local_328 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_328->SharedReferenceCount = (atomic<int>)((int)local_328->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    plVar5 = local_338;
    if ((local_338 == (longlong *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    (**(code **)(*plVar5 + 0xa0))(plVar5,&local_2e8);
    iVar19 = (**(code **)(*local_2e8 + 0x38))();
    (**(code **)(*local_2e8 + 0x28))
              (local_2e8,iVar19 + -0x2694 + (iVar19 + -0x2694 >> 0x1f & 0x10000U));
    local_2f8 = local_2e8;
    local_2f0.ReferenceController = local_2e0;
    if (local_2e0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_2e0->SharedReferenceCount = (atomic<int>)((int)local_2e0->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((longlong **)plVar6 != &local_2f8) {
      *plVar6 = (longlong)local_2e8;
      local_2f8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&local_2f0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2f0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e0);
  }
  this_01 = (PacketHandler *)this->_padding_;
  local_368 = param_1;
  if ((this_01 != (PacketHandler *)0x0) && (this_01->bRawSend == 0)) {
    local_290[0].Object = (FInternetAddr *)0x0;
    local_290[0].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    PacketHandler::Outgoing_Internal(this_01,&local_2a0,param_1,param_2,param_3,false,local_290);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_290[0].SharedReferenceCount.ReferenceController);
    if (local_2a0.bError == false) {
      local_368 = local_2a0.Data;
      param_2 = local_2a0.CountBits;
    }
    else {
      param_2 = 0;
    }
  }
  iVar19 = ((int)(param_2 + 7U) >> 0x1f & 7U) + param_2 + 7U;
  iVar29 = iVar19 >> 3;
  local_360 = (ushort)iVar29;
  sStack_35e = (short)(iVar19 >> 0x13);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_1c8);
  if (((int)this->_padding_ != 0) &&
     (plVar6 = (longlong *)this->_padding_, plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x68))(plVar6,local_368);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_1c8);
  QueryPerformanceCounter(&local_2b8);
  piVar1 = (int *)(this->_padding_ + 0x338);
  *piVar1 = *piVar1 - local_2b8._0_4_;
  if (((int)this->_padding_ < iVar29) && (2 < (byte)LogNet._0_1_)) {
    (**(code **)(this->_padding_ + 0x2e0))(this,local_248);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_248[0] != (void *)0x0) {
      FMemory::Free(local_248[0]);
    }
  }
  if (GPacketAuditor != (FPacketAudit *)0x0) {
    FBitWriter::FBitWriter(&local_178,(ulonglong)(uint)param_2,false);
    FBitWriter::SerializeBits(&local_178,local_368,(ulonglong)(uint)param_2);
    FPacketAudit::NotifyLowLevelSend_Internal(GPacketAuditor,&local_178);
    FBitWriter::~FBitWriter(&local_178);
  }
  pTVar14 = CVarNetIpConnectionUseSendTasks.Ref;
  if (iVar29 < 1) goto LAB_14ec95aa4;
  if ((this->SocketErrorDisconnectDelay <= 0.0) ||
     (local_378 = '\x01', this->SocketError_SendDelayStartTime == 0.0)) {
    local_378 = '\0';
  }
  pFVar7 = (this->SocketPrivate).Object;
  local_348 = pFVar7;
  bVar17 = IsInParallelGameThread();
  if ((bVar17) || (bVar17 = IsInGameThread(), bVar17)) {
    lVar21 = 0;
  }
  else {
    lVar21 = 4;
  }
  if (*(int *)((longlong)pTVar14->ShadowedValue + lVar21) != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_IpConnection_SendToTask ==
          (FThreadSafeStaticStat<_private:_void___cdecl_UIpConnection::SendToRemote(unsigned_char_*,int,FOutPacketTraits_&)_::_44_::FStat_STAT_IpConnection_SendToTask>
           )0x0) {
        pFVar23 = ::FName::FName(&local_260,"STAT_IpConnection_SendToTask");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IpConnection_SendToTask,*pFVar23,
                   L"IpConnection SendTo task","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                   L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    this_00 = &this->LastSendTask;
    local_98.Reference = (FBaseGraphTask *)0x0;
    local_90 = 0;
    local_8c = 4;
    if (this_00->Reference != (FBaseGraphTask *)0x0) {
      iVar19 = 0;
      if ((local_b8 <= this_00) && (iVar19 = 0, this_00 < &local_98)) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar17) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar19 = local_90;
        if (local_90 == local_8c) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                             (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)local_b8,
                              &local_8c);
        }
      }
      local_90 = iVar19 + 1;
      TVar25.Reference = (FBaseGraphTask *)local_b8;
      if (local_98.Reference != (FBaseGraphTask *)0x0) {
        TVar25.Reference = local_98.Reference;
      }
      *(FBaseGraphTask **)((longlong)&(TVar25.Reference)->field_0x0 + (longlong)iVar19 * 8) =
           (FBaseGraphTask *)0x0;
      pFVar8 = this_00->Reference;
      *(FBaseGraphTask **)((longlong)&(TVar25.Reference)->field_0x0 + (longlong)iVar19 * 8) = pFVar8
      ;
      if (pFVar8 != (FBaseGraphTask *)0x0) {
        LOCK();
        *(int *)&pFVar8->field_0x30 = *(int *)&pFVar8->field_0x30 + 1;
        UNLOCK();
      }
    }
    uVar22 = (**(code **)(*(longlong *)this->_padding_ + 0x408))();
    FVar24 = StatPtr_STAT_IpConnection_SendToTask;
    if (StatPtr_STAT_IpConnection_SendToTask ==
        (FThreadSafeStaticStat<_private:_void___cdecl_UIpConnection::SendToRemote(unsigned_char_*,int,FOutPacketTraits_&)_::_44_::FStat_STAT_IpConnection_SendToTask>
         )0x0) {
      pFVar23 = ::FName::FName(&local_258,"STAT_IpConnection_SendToTask");
      FVar24 = (FThreadSafeStaticStat<_private:_void___cdecl_UIpConnection::SendToRemote(unsigned_char_*,int,FOutPacketTraits_&)_::_44_::FStat_STAT_IpConnection_SendToTask>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IpConnection_SendToTask,
                            *pFVar23,L"IpConnection SendTo task","STATGROUP_TaskGraphTasks",
                            "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                            MCR_Invalid);
    }
    local_358.Data = (FScriptContainerElement *)0x0;
    if ((local_368 == (uchar *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ptr != nullptr || Count == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x2d3,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_350._0_4_ = CONCAT22(sStack_35e,local_360);
    _Size = (size_t)(int)local_350;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_350,0,&local_358,(int)local_350,(int *)((longlong)&local_350 + 4));
    memcpy(local_358.Data,local_368,_Size);
    uVar16 = local_350._4_4_;
    iVar19 = (int)local_350;
    FVar15.Data = local_358.Data;
    local_358.Data = (FScriptContainerElement *)0x0;
    local_350 = 0;
    local_1a8[0] = (code *)0x0;
    local_180 = FMemory::Malloc(0x30,8);
    local_180[2] = FVar15.Data;
    local_180[1] = this;
    *local_180 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UIpConnection::SendToRemote'::`44'::<lambda_2>,1,1>::
                  _vftable_;
    *(int *)(local_180 + 3) = iVar19;
    *(undefined4 *)((longlong)local_180 + 0x1c) = uVar16;
    local_180[4] = uVar22;
    *(char *)(local_180 + 5) = local_378;
    if (local_180 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_1a8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UIpConnection::SendToRemote'::__l44::<lambda_2>,void>::Call
      ;
    }
    TVar25 = FFunctionGraphTask::CreateAndDispatchWhenReady
                       ((TUniqueFunction<void___cdecl(void)> *)&local_2b0,(TStatIdData *)local_1a8,
                        (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                         *)FVar24,(Type)local_b8);
    TRefCountPtr<FBaseGraphTask>::operator=
              (this_00,(TRefCountPtr<FBaseGraphTask> *)TVar25.Reference);
    if (local_2b0 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_2b0 + 6);
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar19 == 1) && (local_2b0 != (undefined8 *)0x0)) {
        (**(code **)*local_2b0)(local_2b0,1);
      }
    }
    if (local_358.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data);
    }
    if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
       (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
      if (__CsvProfilerStat559 == false) {
        FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
        __CsvProfilerStat559 = true;
      }
      FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
      FNetworkProfiler::FlushOutgoingBunches(&GNetworkProfiler,(UNetConnection *)this);
      FCsvProfiler::EndExclusiveStat("NetworkProfiler");
      if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
         (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
        if (__CsvProfilerStat560 == false) {
          FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
          __CsvProfilerStat560 = true;
        }
        FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
        uVar3 = *(ushort *)((longlong)&this->_padding_ + 4);
        lVar21 = this->_padding_;
        uVar4 = *(ushort *)((longlong)&this->_padding_ + 4);
        local_320.Data.ArrayNum = (local_348->SocketDescription).Data.ArrayNum;
        lVar27 = (longlong)local_320.Data.ArrayNum;
        lVar13 = this->_padding_;
        _Src = (local_348->SocketDescription).Data.AllocatorInstance.Data;
        local_320.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_320.Data.ArrayNum == 0) {
          local_320.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_320.Data.ArrayNum,0,(ForAnyElementType *)&local_320,
                     local_320.Data.ArrayNum,&local_320.Data.ArrayMax);
          memcpy(local_320.Data.AllocatorInstance.Data,_Src,lVar27 * 2);
        }
        FNetworkProfiler::TrackSocketSendTo
                  (&GNetworkProfiler,&local_320,local_368,local_360,(ushort)lVar13,uVar4,
                   (ushort)lVar21,uVar3,(UNetConnection *)this);
        if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_320.Data.AllocatorInstance.Data);
        }
        FCsvProfiler::EndExclusiveStat("NetworkProfiler");
      }
    }
    TVar25.Reference = (FBaseGraphTask *)local_b8;
    if (local_98.Reference != (FBaseGraphTask *)0x0) {
      TVar25.Reference = local_98.Reference;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)TVar25.Reference,local_90);
    if (local_98.Reference != (FBaseGraphTask *)0x0) {
      FMemory::Free(local_98.Reference);
    }
    goto LAB_14ec95aa4;
  }
  FVar26 = StatPtr_STAT_IpConnection_SendToSocket;
  if (StatPtr_STAT_IpConnection_SendToSocket ==
      (FThreadSafeStaticStat<FStat_STAT_IpConnection_SendToSocket>)0x0) {
    pFVar23 = ::FName::FName(&local_250,"STAT_IpConnection_SendToSocket");
    FVar26 = (FThreadSafeStaticStat<FStat_STAT_IpConnection_SendToSocket>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IpConnection_SendToSocket,
                        *pFVar23,L"IpConnection Socket SendTo","STATGROUP_Net","STATCAT_Advanced",
                        L"Net",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar26;
  bVar17 = false;
  bVar12 = false;
  local_2d8.ComparisonIndex.Value = 0;
  local_2d8.Number = 0;
  if ((FVar28.ComparisonIndex.Value.Value == 0) && (FVar28.Number == 0)) {
LAB_14ec953fc:
    bVar11 = false;
    FVar28 = local_2d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_340[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_340[0]._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
      bVar17 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_300.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
        local_300.Number = FVar28.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_300,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\IpConnection.cpp"
                   ,0x236);
        bVar17 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ec953fc;
    FThreadStats::AddMessage(FVar28,CycleScopeStart);
    bVar11 = true;
  }
  pcVar10 = *(code **)(pFVar7->_padding_ + 0x58);
  TSharedPtr<FInternetAddr,1>::operator*<FInternetAddr>
            ((TSharedPtr<FInternetAddr,1> *)&this->_padding_);
  cVar18 = (*pcVar10)(pFVar7,local_368,iVar29);
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar28,CycleScopeEnd);
  }
  if (cVar18 == '\0') {
    this_02 = (ISocketSubsystem *)(**(code **)(*(longlong *)this->_padding_ + 0x408))();
    EVar20 = (**(code **)(this_02->_padding_ + 0xb8))();
    if (EVar20 == SE_NO_ERROR) {
      if ((4 < (byte)LogNet._0_1_) && (0.0 < this->SocketError_SendDelayStartTime)) {
        (**(code **)(this->_padding_ + 0x2e0))(this,local_208);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_208[0] != (void *)0x0) {
          FMemory::Free(local_208[0]);
          this->SocketError_SendDelayStartTime = 0.0;
          goto LAB_14ec95aa4;
        }
      }
    }
    else {
      if (EVar20 == SE_EWOULDBLOCK) goto LAB_14ec95aa4;
      if (0.0 < this->SocketErrorDisconnectDelay) {
        dVar2 = *(double *)(this->_padding_ + 800);
        if (this->SocketError_SendDelayStartTime == 0.0) {
          if (4 < (byte)LogNet._0_1_) {
            (**(code **)(this->_padding_ + 0x2e0))(this,local_1f8);
            ISocketSubsystem::GetSocketError(this_02,EVar20);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            if (local_1f8[0] != (void *)0x0) {
              FMemory::Free(local_1f8[0]);
            }
          }
          this->SocketError_SendDelayStartTime = dVar2;
          goto LAB_14ec95aa4;
        }
        if (dVar2 - this->SocketError_SendDelayStartTime < (double)this->SocketErrorDisconnectDelay)
        goto LAB_14ec95aa4;
      }
      if (*(char *)((longlong)&this->_padding_ + 5) != '\0') goto LAB_14ec95aa4;
      pFVar9 = (this->Resolver).Ptr;
      if ((((pFVar9->ResolverResults).ArrayNum <= pFVar9->CurrentAddressIndex) ||
          (pFVar9->ResolutionState == Disabled)) || ((byte)(pFVar9->ResolutionState - Done) < 2)) {
        pFVar9->ResolutionState = Error;
        UNetConnection::SetPendingCloseDueToSocketSendFailure((UNetConnection *)this);
        (**(code **)(this->_padding_ + 0x2e0))(this,local_1e8);
        ISocketSubsystem::GetSocketError(this_02,EVar20);
        ::FString::PrintfImpl
                  (&local_270,
                   L"UIpNetConnection::HandleSocketSendResult: Socket->SendTo failed with error %i (%s). %s Connection will be closed during next Tick()!"
                  );
        if (local_1e8[0] != (void *)0x0) {
          FMemory::Free(local_1e8[0]);
        }
        UEngine::BroadcastNetworkFailure
                  (GEngine,(((UNetDriver *)this->_padding_)->World).field0_0x0.DebugPtr,
                   (UNetDriver *)this->_padding_,ConnectionLost,&local_270);
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
        goto LAB_14ec95aa4;
      }
      pFVar9->ResolutionState = TryNextAddress;
      UNetConnection::SetPendingCloseDueToSocketSendFailure((UNetConnection *)this);
    }
    this->SocketError_SendDelayStartTime = 0.0;
    goto LAB_14ec95aa4;
  }
  QueryPerformanceCounter(&local_2a8);
  piVar1 = (int *)(this->_padding_ + 0x338);
  *piVar1 = *piVar1 + local_2a8.s.LowPart;
  if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
     (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
    if (__CsvProfilerStat573 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
      __CsvProfilerStat573 = true;
    }
    FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
    FNetworkProfiler::FlushOutgoingBunches(&GNetworkProfiler,(UNetConnection *)this);
    FCsvProfiler::EndExclusiveStat("NetworkProfiler");
    if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
       (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
      if (__CsvProfilerStat574 == false) {
        FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
        __CsvProfilerStat574 = true;
      }
      FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
      uVar3 = *(ushort *)((longlong)&this->_padding_ + 4);
      lVar21 = this->_padding_;
      uVar4 = *(ushort *)((longlong)&this->_padding_ + 4);
      local_310.Data.ArrayNum = (local_348->SocketDescription).Data.ArrayNum;
      lVar27 = (longlong)local_310.Data.ArrayNum;
      local_348 = (FSocket *)(local_348->SocketDescription).Data.AllocatorInstance.Data;
      lVar13 = this->_padding_;
      local_310.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_310.Data.ArrayNum == 0) {
        local_310.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_310.Data.ArrayNum,0,(ForAnyElementType *)&local_310,
                   local_310.Data.ArrayNum,&local_310.Data.ArrayMax);
        memcpy(local_310.Data.AllocatorInstance.Data,local_348,lVar27 * 2);
      }
      FNetworkProfiler::TrackSocketSendTo
                (&GNetworkProfiler,&local_310,local_368,0,(ushort)lVar13,uVar4,(ushort)lVar21,uVar3,
                 (UNetConnection *)this);
      if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_310.Data.AllocatorInstance.Data);
      }
      FCsvProfiler::EndExclusiveStat("NetworkProfiler");
    }
  }
  if (local_378 != '\0') {
    if ((4 < (byte)LogNet._0_1_) && (0.0 < this->SocketError_SendDelayStartTime)) {
      (**(code **)(this->_padding_ + 0x2e0))(this,local_238);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_238[0] != (void *)0x0) {
        FMemory::Free(local_238[0]);
        this->SocketError_SendDelayStartTime = 0.0;
        goto LAB_14ec95835;
      }
    }
    this->SocketError_SendDelayStartTime = 0.0;
  }
LAB_14ec95835:
  if ((UE::Net::Private::GNetDebugInitialConnect != 0) &&
     (*(int *)((longlong)&this->_padding_ + 4) == 0)) {
    this->InitialConnectSocketSendCount = this->InitialConnectSocketSendCount + 1;
  }
LAB_14ec95aa4:
  if (local_338 != (longlong *)0x0) {
    if (local_328 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_328->SharedReferenceCount = (atomic<int>)((int)local_328->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1d8 = this->_padding_;
    pTStack_1d0 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = (longlong)local_338;
    this->_padding_ = (longlong)local_328;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1d0)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_328);
  return;
}

// SetSocket_Local @ 14ec98440

void __thiscall UIpConnection::SetSocket_Local(UIpConnection *this,TSharedPtr<FSocket,1> *param_1)

{
  FNetConnectionAddressResolution *pFVar1;
  FSocket *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FSocket,1> local_18;
  
  pFVar1 = (this->Resolver).Ptr;
  local_18.Object = (pFVar1->ResolutionSocket).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (pFVar1->ResolutionSocket).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_18.Object != (FSocket *)0x0) && (param_1->Object != local_18.Object)) {
    SafeDeferredSocketCleanup(this,&local_18);
    UE::Net::Private::FNetConnectionAddressResolution::CleanupResolutionSockets
              ((this->Resolver).Ptr,CleanAll);
  }
  pFVar2 = (this->SocketPrivate).Object;
  if (((pFVar2 != (FSocket *)0x0) && (param_1->Object != pFVar2)) && (pFVar2 != local_18.Object)) {
    SafeDeferredSocketCleanup(this,&this->SocketPrivate);
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->SocketPrivate).SharedReferenceCount.ReferenceController;
  (this->SocketPrivate).Object = pFVar2;
  (this->SocketPrivate).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// StaticRegisterNativesUIpConnection @ 14ec99950

void __cdecl UIpConnection::StaticRegisterNativesUIpConnection(void)

{
  return;
}

// Tick @ 14ec9a040

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UIpConnection::Tick(UIpConnection *this,float param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<UIpConnection::FSocketSendResult,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FNetConnectionAddressResolution *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  UPendingNetGame *this_00;
  TSharedPtr<FSocket,1> *pTVar8;
  longlong lVar9;
  code *pcVar10;
  TConsoleVariableData<int> *pTVar11;
  bool bVar12;
  ECheckAddressResolutionResult EVar13;
  char cVar14;
  ERecreateSocketResult EVar15;
  EConnectionState EVar16;
  ISocketSubsystem *pIVar17;
  UClass *pUVar18;
  FWorldContext *pFVar19;
  UIpNetDriver *pUVar20;
  UIpNetDriver *pUVar21;
  int iVar22;
  UIpNetDriver *pUVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  FInternetAddr *local_c8;
  FSharedReferencer<1> local_c0;
  TSharedPtr<FSocket,1> local_b8;
  TSharedPtr<FSocket,1> local_a8;
  undefined8 local_98 [2];
  FNetResult local_88 [2];
  
  pTVar11 = CVarNetIpConnectionUseSendTasks.Ref;
  bVar12 = IsInParallelGameThread();
  if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pUVar20 = (UIpNetDriver *)0x0;
  iVar22 = 0;
  if (pTVar11->ShadowedValue[0] != 0) {
    pIVar17 = (ISocketSubsystem *)(**(code **)(*(longlong *)this->_padding_ + 0x408))();
    lpCriticalSection = &this->SocketSendResultsCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pUVar21 = pUVar20;
    if (((this->SocketSendResults).ArrayNum != 0) &&
       (pTVar2 = &this->SocketSendResults, pUVar21 = (UIpNetDriver *)0x0,
       (TArray<UIpConnection::FSocketSendResult,TSizedDefaultAllocator<32>_> *)local_98 != pTVar2))
    {
      pUVar21 = (UIpNetDriver *)(pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar22 = (this->SocketSendResults).ArrayNum;
      (this->SocketSendResults).ArrayNum = 0;
      (this->SocketSendResults).ArrayMax = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    for (pUVar23 = pUVar21; pUVar23 != (UIpNetDriver *)(&pUVar21->_padding_ + iVar22);
        pUVar23 = (UIpNetDriver *)&pUVar23->_padding_) {
      HandleSocketSendResult(this,(FSocketSendResult *)pUVar23,pIVar17);
    }
    if (pUVar21 != (UIpNetDriver *)0x0) {
      FMemory::Free(pUVar21);
    }
  }
  EVar13 = UE::Net::Private::FNetConnectionAddressResolution::CheckAddressResolution
                     ((this->Resolver).Ptr);
  if ((byte)(EVar13 - TryFirstAddress) < 2) {
    pFVar6 = (this->Resolver).Ptr;
    pTVar7 = (pFVar6->ResolutionSocket).SharedReferenceCount.ReferenceController;
    local_a8.Object = (pFVar6->ResolutionSocket).Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a8.SharedReferenceCount.ReferenceController = pTVar7;
    SetSocket_Local(this,&local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pFVar6 = (this->Resolver).Ptr;
    local_c0.ReferenceController = (pFVar6->RemoteAddr).SharedReferenceCount.ReferenceController;
    local_c8 = (pFVar6->RemoteAddr).Object;
    if (local_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_c0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((FInternetAddr **)&this->_padding_ != &local_c8) {
      this->_padding_ = (longlong)local_c8;
      local_c8 = (FInternetAddr *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&local_c0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c0.ReferenceController);
    this->_padding_ = *(longlong *)(this->_padding_ + 800);
    QueryPerformanceCounter(&local_res18);
    this->_padding_ =
         (longlong)
         ((double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000);
    QueryPerformanceCounter(&local_res20);
    this->_padding_ =
         (longlong)
         ((double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000);
    (**(code **)(this->_padding_ + 0x2f8))(this);
    if (((EVar13 == TryNextAddress) && (this->_padding_ == 0)) &&
       ((pFVar19 = UEngine::GetWorldContextFromPendingNetGameNetDriver
                             (GEngine,(UNetDriver *)this->_padding_),
        pFVar19 != (FWorldContext *)0x0 &&
        (this_00 = (pFVar19->PendingNetGame).field0_0x0.DebugPtr, this_00 != (UPendingNetGame *)0x0)
        ))) {
      UPendingNetGame::SendInitialJoin(this_00);
    }
  }
  else if (EVar13 == Connected) {
    if (this->_padding_ != 0) {
      pUVar18 = UIpNetDriver::StaticClass();
      bVar12 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar18);
      if (bVar12) {
        pUVar20 = (UIpNetDriver *)this->_padding_;
      }
    }
    pFVar6 = (this->Resolver).Ptr;
    local_b8.Object = (pFVar6->ResolutionSocket).Object;
    local_b8.SharedReferenceCount.ReferenceController =
         (pFVar6->ResolutionSocket).SharedReferenceCount.ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UIpNetDriver::SetSocketAndLocalAddress(pUVar20,&local_b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
  }
  else if (EVar13 == Error) {
    UNetConnection::SetConnectionState((UNetConnection *)this,USOCK_Closed);
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (local_88,AddressResolutionFailed);
    UNetConnection::Close((UNetConnection *)this,local_88);
    if (local_88[0].NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_88[0].NextResult + -0x10))
                ((longlong)local_88[0].NextResult + -0x10);
    }
    if (local_88[0].ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88[0].ErrorContext.Data.AllocatorInstance.Data);
    }
  }
  uVar24 = SUB84(__real_3ff0000000000000,0);
  uVar25 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  if (((0 < (this->DeferredCleanupSockets).ArrayNum) &&
      (__real_3ff0000000000000 <= (double)this->_padding_ - this->DeferredCleanupTimeCheck)) &&
     ((atomic<int>)(this->DeferredCleanupSockets).ArrayNum == this->DeferredCleanupReadyCount)) {
    LOCK();
    this->DeferredCleanupReadyCount = (atomic<int>)0x0;
    UNLOCK();
    piVar1 = &(this->DeferredCleanupSockets).ArrayMax;
    pTVar8 = (TSharedPtr<FSocket,1> *)(this->DeferredCleanupSockets).AllocatorInstance.Data;
    iVar22 = (this->DeferredCleanupSockets).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TSharedPtr<FSocket,1>,int>(pTVar8,iVar22);
      (this->DeferredCleanupSockets).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->DeferredCleanupSockets).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TSharedPtr<FSocket,1>,int>(pTVar8,iVar22);
      (this->DeferredCleanupSockets).ArrayNum = 0;
    }
  }
  UNetConnection::Tick((UNetConnection *)this,param_1);
  if (((UE::Net::Private::GNetDebugInitialConnect != 0) &&
      (*(int *)((longlong)&this->_padding_ + 4) == 0)) &&
     ((lVar9 = this->_padding_, lVar9 != 0 &&
      ((*(longlong *)(lVar9 + 0x100) != 0 &&
       (dVar3 = *(double *)(lVar9 + 800),
       (double)UE::Net::Private::GNetDebugInitialConnectLogFrequency <=
       dVar3 - this->InitialConnectLastLogTime)))))) {
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    this->InitialConnectLastLogSocketSendCount = this->InitialConnectSocketSendCount;
    this->InitialConnectLastLogTime = dVar3;
  }
  if (this->_padding_ != 0) {
    pUVar18 = UIpNetDriver::StaticClass();
    bVar12 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar18);
    if (((((bVar12) && (pUVar20 = (UIpNetDriver *)this->_padding_, pUVar20 != (UIpNetDriver *)0x0))
         && (UE::Net::Private::GNetRecreateSocketTimeoutThreshold != 0.0)) &&
        ((EVar16 = UNetConnection::GetConnectionState((UNetConnection *)this),
         EVar16 != USOCK_Closed && ((*(uint *)((longlong)&this->_padding_ + 4) >> 1 & 1) == 0)))) &&
       (cVar14 = (**(code **)(pUVar20->_padding_ + 0x3f8))(pUVar20), cVar14 == '\0')) {
      dVar3 = pUVar20->LastRecreateSocketTime;
      dVar4 = *(double *)(this->_padding_ + 800);
      if ((dVar4 < (double)*(float *)(this->_padding_ + 0xec)) && (dVar3 == 0.0)) {
        uVar24 = (undefined4)__real_4000000000000000;
        uVar25 = (undefined4)((ulonglong)__real_4000000000000000 >> 0x20);
      }
      dVar5 = (double)this->_padding_;
      if ((double)this->_padding_ <= dVar3) {
        dVar5 = dVar3;
      }
      if ((double)UE::Net::Private::GNetRecreateSocketCooldown * (double)CONCAT44(uVar25,uVar24) <
          dVar4 - dVar5) {
        dVar3 = (double)this->_padding_;
        if ((double)this->_padding_ <= (double)this->_padding_) {
          dVar3 = (double)this->_padding_;
        }
        if (((double)UE::Net::Private::GNetRecreateSocketTimeoutThreshold < dVar4 - dVar3) &&
           (EVar15 = UIpNetDriver::RecreateSocket(pUVar20,-1), 2 < (byte)LogNet._0_1_)) {
          UE::Net::LexToString(EVar15);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
      }
    }
  }
  return;
}

// WaitForSendTasks @ 14ec9fdc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UIpConnection::WaitForSendTasks(UIpConnection *this)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  TSharedPtr<FSocket,1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_IpConnection_WaitForSendTasks> FVar11;
  FTaskGraphInterface *pFVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar14;
  FNameEntryId FVar15;
  FName FVar16;
  undefined1 auStackY_108 [32];
  FColor_u_0 local_a8 [2];
  FName local_a0;
  TRefCountPtr<FBaseGraphTask> local_98;
  FName local_90;
  LARGE_INTEGER local_80;
  FStatMessage local_78;
  FName local_68;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_60;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  pTVar8 = CVarNetIpConnectionUseSendTasks.Ref;
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_108;
  bVar9 = IsInParallelGameThread();
  if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar8->ShadowedValue[0] == 0) {
    return;
  }
  if ((this->LastSendTask).Reference == (FBaseGraphTask *)0x0) {
    return;
  }
  bVar9 = IsInGameThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\IpConnection.cpp"
                         ,0x17d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar11 = StatPtr_STAT_IpConnection_WaitForSendTasks;
  if (StatPtr_STAT_IpConnection_WaitForSendTasks ==
      (FThreadSafeStaticStat<FStat_STAT_IpConnection_WaitForSendTasks>)0x0) {
    pFVar10 = ::FName::FName(&local_68,"STAT_IpConnection_WaitForSendTasks");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_IpConnection_WaitForSendTasks>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IpConnection_WaitForSendTasks,
                        *pFVar10,L"IpConnection WaitForSendTasks","STATGROUP_Net","STATCAT_Advanced"
                        ,L"Net",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar9 = false;
  bVar7 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar13 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar9 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar15.Value;
        local_a0.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\IpConnection.cpp"
                   ,0x17f);
        bVar9 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_a0.ComparisonIndex.Value = FVar15.Value;
      local_a0.Number = uVar13;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar6 = true;
      goto LAB_14ec9ffa9;
    }
  }
  bVar6 = false;
  FVar16 = local_90;
LAB_14ec9ffa9:
  pFVar12 = FTaskGraphInterface::Get();
  pcVar5 = *(code **)((longlong)*pFVar12 + 0x60);
  local_98.Reference = (this->LastSendTask).Reference;
  if (local_98.Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    *(int *)&(local_98.Reference)->field_0x30 = *(int *)&(local_98.Reference)->field_0x30 + 1;
    UNLOCK();
  }
  local_60.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_38 = 1;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
            (8,8,1,0,&local_60,1,&local_34);
  FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_60;
  if (local_60.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar14 = local_60.SecondaryData;
  }
  ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
            ((void *)FVar14,&local_98,1);
  (*pcVar5)(pFVar12,&local_60);
  FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_60;
  if (local_60.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar14 = local_60.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar14,local_38);
  if (local_60.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_60.SecondaryData);
  }
  if (local_98.Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &(local_98.Reference)->field_0x30;
    iVar3 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)local_98.Reference)(local_98.Reference,1);
    }
  }
  piVar2 = &(this->DeferredCleanupSockets).ArrayMax;
  pTVar4 = (TSharedPtr<FSocket,1> *)(this->DeferredCleanupSockets).AllocatorInstance.Data;
  iVar3 = (this->DeferredCleanupSockets).ArrayNum;
  if (*piVar2 < 0) {
    DestructItems<TSharedPtr<FSocket,1>,int>(pTVar4,iVar3);
    (this->DeferredCleanupSockets).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->DeferredCleanupSockets).AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<TSharedPtr<FSocket,1>,int>(pTVar4,iVar3);
    (this->DeferredCleanupSockets).ArrayNum = 0;
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_78.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_80);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_80.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_80.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_80.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_80.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_78);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

