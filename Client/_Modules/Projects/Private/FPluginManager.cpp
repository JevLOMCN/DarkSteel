// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 99

// FPluginManager @ 141e0db40

FPluginManager * __thiscall FPluginManager::FPluginManager(FPluginManager *this)

{
  bool bVar1;
  FScopedBootTiming local_28;
  
  this->_padding_ = (longlong)&___7FPluginManager__6B_;
  *(undefined8 *)&this->AllPlugins = 0;
  *(undefined8 *)&(this->AllPlugins).field_0x8 = 0;
  *(undefined8 *)&(this->AllPlugins).field_0x20 = 0;
  *(undefined4 *)&(this->AllPlugins).field_0x28 = 0;
  *(undefined4 *)&(this->AllPlugins).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllPlugins).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllPlugins).field_0x34 = 0;
  *(undefined8 *)&(this->AllPlugins).field_0x40 = 0;
  *(undefined4 *)&(this->AllPlugins).field_0x48 = 0;
  *(undefined8 *)&(this->PluginsToConfigure).Elements = 0;
  *(undefined8 *)&(this->PluginsToConfigure).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PluginsToConfigure).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PluginsToConfigure).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PluginsToConfigure).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PluginsToConfigure).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PluginsToConfigure).Elements.field_0x34 = 0;
  (this->PluginsToConfigure).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PluginsToConfigure).HashSize = 0;
  *(undefined8 *)&(this->PluginsEnabledForTarget).Elements = 0;
  *(undefined8 *)&(this->PluginsEnabledForTarget).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PluginsEnabledForTarget).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PluginsEnabledForTarget).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PluginsEnabledForTarget).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PluginsEnabledForTarget).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PluginsEnabledForTarget).Elements.field_0x34 = 0;
  (this->PluginsEnabledForTarget).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PluginsEnabledForTarget).HashSize = 0;
  *(undefined8 *)&(this->PluginsEnabledAtStartup).Elements = 0;
  *(undefined8 *)&(this->PluginsEnabledAtStartup).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PluginsEnabledAtStartup).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PluginsEnabledAtStartup).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PluginsEnabledAtStartup).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PluginsEnabledAtStartup).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PluginsEnabledAtStartup).Elements.field_0x34 = 0;
  (this->PluginsEnabledAtStartup).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PluginsEnabledAtStartup).HashSize = 0;
  (this->PluginsWithPakFile).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PluginsWithPakFile).ArrayNum = 0;
  (this->PluginsWithPakFile).ArrayMax = 0;
  *(undefined8 *)&this->RegisterMountPointDelegate = 0;
  *(undefined8 *)&(this->RegisterMountPointDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->RegisterMountPointDelegate).field_0x10 = 0;
  *(undefined8 *)&this->UnRegisterMountPointDelegate = 0;
  *(undefined8 *)&(this->UnRegisterMountPointDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->UnRegisterMountPointDelegate).field_0x10 = 0;
  this->bHaveAllRequiredPlugins = false;
  this->bAllPluginsEnabledViaCommandLine = false;
  this->bPreloadedBinaries = false;
  *(undefined8 *)&(this->ExternalPluginSources).Elements = 0;
  *(undefined8 *)&(this->ExternalPluginSources).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ExternalPluginSources).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ExternalPluginSources).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ExternalPluginSources).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalPluginSources).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExternalPluginSources).Elements.field_0x34 = 0;
  (this->ExternalPluginSources).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ExternalPluginSources).HashSize = 0;
  *(undefined8 *)&(this->PluginDiscoveryPaths).Elements = 0;
  *(undefined8 *)&(this->PluginDiscoveryPaths).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PluginDiscoveryPaths).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PluginDiscoveryPaths).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PluginDiscoveryPaths).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PluginDiscoveryPaths).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PluginDiscoveryPaths).Elements.field_0x34 = 0;
  (this->PluginDiscoveryPaths).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PluginDiscoveryPaths).HashSize = 0;
  *(undefined8 *)&this->NewPluginCreatedEvent = 0;
  *(undefined8 *)&(this->NewPluginCreatedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->NewPluginCreatedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->NewPluginCreatedEvent).field_0x18 = 2;
  *(undefined8 *)&this->NewPluginMountedEvent = 0;
  *(undefined8 *)&(this->NewPluginMountedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->NewPluginMountedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->NewPluginMountedEvent).field_0x18 = 2;
  *(undefined8 *)&this->NewPluginContentMountedEvent = 0;
  *(undefined8 *)&(this->NewPluginContentMountedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->NewPluginContentMountedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->NewPluginContentMountedEvent).field_0x18 = 2;
  *(undefined8 *)&this->PluginEditedEvent = 0;
  *(undefined8 *)&(this->PluginEditedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PluginEditedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->PluginEditedEvent).field_0x18 = 2;
  *(undefined8 *)&this->PluginUnmountedEvent = 0;
  *(undefined8 *)&(this->PluginUnmountedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PluginUnmountedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->PluginUnmountedEvent).field_0x18 = 2;
  *(undefined8 *)&this->LoadingPhaseCompleteEvent = 0;
  *(undefined8 *)&(this->LoadingPhaseCompleteEvent).field_0x8 = 0;
  *(undefined8 *)&(this->LoadingPhaseCompleteEvent).field_0x10 = 0;
  *(undefined8 *)&(this->LoadingPhaseCompleteEvent).field_0x18 = 2;
  this->LastCompletedLoadingPhase = None;
  (this->EngineBinariesRootDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EngineBinariesRootDir).Data.ArrayNum = 0;
  (this->EngineBinariesRootDir).Data.ArrayMax = 0;
  (this->ProjectBinariesRootDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectBinariesRootDir).Data.ArrayNum = 0;
  (this->ProjectBinariesRootDir).Data.ArrayMax = 0;
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId535,"DiscoverAllPlugins",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
               ,0x217);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId535);
  }
  FScopedBootTiming::FScopedBootTiming(&local_28,"DiscoverAllPlugins");
  DiscoverAllPlugins(this);
  TMulticastDelegateRegistration<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  ::AddRaw<FPluginManager>
            ((TMulticastDelegateRegistration<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
              *)&FCoreDelegates::GatherAdditionalLocResPathsCallback,
             (FPluginManager *)&stack0x00000008,(pmf_2c82f5ae)this);
  FScopedBootTiming::~FScopedBootTiming(&local_28);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return this;
}

// ~FPluginManager @ 141e0f560

void __thiscall FPluginManager::~FPluginManager(FPluginManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  
  this->_padding_ = (longlong)&___7FPluginManager__6B_;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::GatherAdditionalLocResPathsCallback,this);
  pFVar1 = (this->ProjectBinariesRootDir).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EngineBinariesRootDir).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->LoadingPhaseCompleteEvent).field_0x8,
             *(int *)&(this->LoadingPhaseCompleteEvent).field_0x10);
  pvVar2 = *(void **)&(this->LoadingPhaseCompleteEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LoadingPhaseCompleteEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PluginUnmountedEvent).field_0x8,
             *(int *)&(this->PluginUnmountedEvent).field_0x10);
  pvVar2 = *(void **)&(this->PluginUnmountedEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PluginUnmountedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PluginEditedEvent).field_0x8,*(int *)&(this->PluginEditedEvent).field_0x10);
  pvVar2 = *(void **)&(this->PluginEditedEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PluginEditedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->NewPluginContentMountedEvent).field_0x8,
             *(int *)&(this->NewPluginContentMountedEvent).field_0x10);
  pvVar2 = *(void **)&(this->NewPluginContentMountedEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NewPluginContentMountedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->NewPluginMountedEvent).field_0x8,
             *(int *)&(this->NewPluginMountedEvent).field_0x10);
  pvVar2 = *(void **)&(this->NewPluginMountedEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NewPluginMountedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->NewPluginCreatedEvent).field_0x8,
             *(int *)&(this->NewPluginCreatedEvent).field_0x10);
  pvVar2 = *(void **)&(this->NewPluginCreatedEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NewPluginCreatedEvent);
  (this->PluginDiscoveryPaths).HashSize = 0;
  FVar3 = (this->PluginDiscoveryPaths).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PluginDiscoveryPaths).Elements);
  (this->ExternalPluginSources).HashSize = 0;
  FVar3 = (this->ExternalPluginSources).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FExternalPluginPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FExternalPluginPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ExternalPluginSources).Elements);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UnRegisterMountPointDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RegisterMountPointDelegate);
  DestructItems<TSharedRef<IPlugin,1>,int>
            ((TSharedRef<IPlugin,1> *)(this->PluginsWithPakFile).AllocatorInstance.Data,
             (this->PluginsWithPakFile).ArrayNum);
  pFVar1 = (this->PluginsWithPakFile).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->PluginsEnabledAtStartup).HashSize = 0;
  FVar3 = (this->PluginsEnabledAtStartup).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PluginsEnabledAtStartup).Elements);
  (this->PluginsEnabledForTarget).HashSize = 0;
  FVar3 = (this->PluginsEnabledForTarget).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PluginsEnabledForTarget).Elements);
  (this->PluginsToConfigure).HashSize = 0;
  FVar3 = (this->PluginsToConfigure).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PluginsToConfigure).Elements);
  *(undefined4 *)&(this->AllPlugins).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AllPlugins).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AllPlugins);
  this->_padding_ = (longlong)&___7IPluginManager__6B_;
  return;
}

// operator() @ 141e10360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
`FPluginManager::ConfigureEnabledPluginForCurrentTarget'::__l2::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__,
          TArray<FPluginReferenceDescriptor_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FPluginReferenceDescriptor *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  ulong64 uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  undefined1 auStack_298 [32];
  undefined1 local_278 [8];
  FPluginReferenceDescriptor *local_270;
  FString local_268;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_298;
  pFVar7 = (param_1->AllocatorInstance).Data;
  local_258.Base = local_238;
  iVar6 = param_1->ArrayNum;
  local_258.CurPos = local_238;
  local_258.End = (wchar_t *)local_38;
  pFVar4 = pFVar7 + (longlong)iVar6 * 8;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_270 = param_2;
  local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)__return_storage_ptr__;
  while( true ) {
    if (param_1->ArrayNum != iVar6) {
      `TCheckedPointerIterator<FPluginReferenceDescriptor_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_278);
    }
    FVar2.Data = local_268.Data.AllocatorInstance.Data;
    if (pFVar7 == pFVar4) break;
    iVar1 = *(int *)(*(undefined8 **)pFVar7 + 1);
    pvVar3 = (void *)**(undefined8 **)pFVar7;
    iVar8 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar8 = 0;
    }
    uVar5 = (ulong64)iVar8;
    if (local_258.End < local_258.CurPos + uVar5) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,uVar5);
    }
    if (iVar8 != 0) {
      pvVar3 = FGenericPlatformString::Memcpy(local_258.CurPos,pvVar3,uVar5 * 2);
      local_258.CurPos = (wchar_t *)((longlong)pvVar3 + uVar5 * 2);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_258,L" -> ",4);
    pFVar7 = pFVar7 + 8;
  }
  iVar8 = (local_270->Name).Data.ArrayNum;
  pFVar4 = (local_270->Name).Data.AllocatorInstance.Data;
  iVar6 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar6 = 0;
  }
  uVar5 = (ulong64)iVar6;
  if (local_258.End < local_258.CurPos + uVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,uVar5);
  }
  if (iVar6 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(local_258.CurPos,pFVar4,uVar5 * 2);
    local_258.CurPos = (wchar_t *)((longlong)pvVar3 + uVar5 * 2);
  }
  *(undefined8 *)FVar2.Data = 0;
  *(undefined8 *)(FVar2.Data + 8) = 0;
  pFVar4 = (FScriptContainerElement *)
           ::FString::ConstructFromPtrSize
                     (&local_268,local_258.Base,
                      (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1));
  if (FVar2.Data != pFVar4) {
    if (*(void **)FVar2.Data != (void *)0x0) {
      FMemory::Free(*(void **)FVar2.Data);
    }
    *(undefined8 *)FVar2.Data = *(undefined8 *)pFVar4;
    *(undefined8 *)pFVar4 = 0;
    *(int *)(FVar2.Data + 8) = *(int *)(pFVar4 + 8);
    *(int *)(FVar2.Data + 0xc) = *(int *)(pFVar4 + 0xc);
    *(undefined8 *)(pFVar4 + 8) = 0;
  }
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  return (FString *)FVar2.Data;
}

// operator() @ 141e10570

void __thiscall
`FPluginManager::ConfigureEnabledPluginForTarget'::__l2::<lambda_1>::operator()
          (void *this,FPluginReferenceDescriptor *param_1)

{
  TSet<TTuple<FString,FPluginReferenceDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FPluginReferenceDescriptor_const_*,0>,FDefaultSetAllocator>
  *this_00;
  FPluginReferenceDescriptor *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  FPluginReferenceDescriptor *local_res10;
  
  plVar12 = (longlong *)0x0;
  local_res10 = param_1;
  if (param_1 != (FPluginReferenceDescriptor *)0x0) {
    while( true ) {
      pFVar1 = local_res10;
      iVar7 = (local_res10->Name).Data.ArrayNum;
      this_00 = *(TSet<TTuple<FString,FPluginReferenceDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FPluginReferenceDescriptor_const_*,0>,FDefaultSetAllocator>
                  **)this;
      iVar6 = iVar7 + -1;
      if (iVar7 == 0) {
        pwVar10 = L"";
        iVar6 = 0;
      }
      else {
        pwVar10 = (wchar_t *)(local_res10->Name).Data.AllocatorInstance.Data;
      }
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar10);
      iVar6 = TSet<TTuple<FString,FPluginReferenceDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FPluginReferenceDescriptor_const_*,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>(this_00,uVar5,&pFVar1->Name);
      if (iVar6 == -1) break;
      lVar8 = (longlong)iVar6 * 0x20 + *(longlong *)&this_00->Elements;
      plVar9 = (longlong *)(lVar8 + 0x10);
      if (lVar8 == 0) {
        plVar9 = plVar12;
      }
      if ((plVar9 == (longlong *)0x0) ||
         (pFVar1 = (FPluginReferenceDescriptor *)*plVar9, local_res10 == pFVar1)) break;
      lVar8 = *(longlong *)((longlong)this + 8);
      local_res10 = pFVar1;
      if ((*(FPluginReferenceDescriptor ***)(lVar8 + 0x10) <= &local_res10) &&
         ((&local_res10 < *(FPluginReferenceDescriptor ***)(lVar8 + 0x10) + *(int *)(lVar8 + 0x1c)
          && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)(lVar8 + 0x18);
      if (iVar6 == *(int *)(lVar8 + 0x1c)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(lVar8 + 0x10),(int *)(lVar8 + 0x1c));
      }
      *(int *)(lVar8 + 0x18) = iVar6 + 1;
      *(FPluginReferenceDescriptor **)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar6 * 8) =
           local_res10;
      if (local_res10 == (FPluginReferenceDescriptor *)0x0) break;
    }
  }
  iVar6 = *(int *)(*(longlong *)((longlong)this + 8) + 0x18);
  lVar8 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x10);
  iVar7 = iVar6 / 2;
  if (0 < iVar7) {
    puVar11 = (undefined8 *)(lVar8 + (longlong)(iVar6 + -1) * 8);
    do {
      uVar2 = *(undefined8 *)(lVar8 + (longlong)plVar12 * 8);
      *(undefined8 *)(lVar8 + (longlong)plVar12 * 8) = *puVar11;
      plVar12 = (longlong *)((longlong)plVar12 + 1);
      *puVar11 = uVar2;
      puVar11 = puVar11 + -1;
    } while ((longlong)plVar12 < (longlong)iVar7);
  }
  return;
}

// operator() @ 141e10720

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
`FPluginManager::FindCommandLinePlugins'::__l2::<lambda_1>::operator()
          (void *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          wchar_t *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  wchar_t *pwVar10;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  FString *pFVar16;
  uint uVar17;
  uint uVar18;
  FString *pFVar19;
  ForElementType<unsigned_int> FVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res10;
  undefined1 local_res20 [8];
  undefined1 local_118 [4];
  uint local_114;
  FString *local_110;
  undefined8 local_108;
  ForElementType<unsigned_int> local_100;
  FString *local_f8;
  int local_f0;
  undefined4 local_ec;
  FString **local_e8;
  FString **local_e0;
  FString local_d8;
  longlong *local_c8;
  int iStack_c0;
  uint uStack_bc;
  ForElementType<unsigned_int> local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  int local_94;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_90 [2];
  longlong *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  code *local_50;
  TArray<FString,TSizedDefaultAllocator<32>_> **local_48;
  
  iVar21 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  local_res10 = __return_storage_ptr__;
  pwVar10 = FCommandLine::Get();
  FParse::Value(pwVar10,param_1,&local_d8,false,(wchar_t **)0x0);
  ::FString::ParseIntoArray(&local_d8,__return_storage_ptr__,L",",true);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  iVar22 = __return_storage_ptr__->ArrayNum;
  local_e8 = &local_f8;
  local_f8 = (FString *)0x0;
  local_f0 = 0;
  local_ec = 0;
  if (iVar22 != 0) {
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    bVar8 = ``FPluginManager::FindCommandLinePlugins'::__l2::<lambda_1>::operator()'::__l2::
            <lambda_1>::operator()(&local_e8,(FString *)pFVar4);
    bVar8 = !bVar8;
    iVar14 = iVar21;
    do {
      iVar15 = iVar14;
      do {
        iVar15 = iVar15 + 1;
        if (iVar22 <= iVar15) break;
        bVar9 = ``FPluginManager::FindCommandLinePlugins'::__l2::<lambda_1>::operator()'::__l2::
                <lambda_1>::operator()(&local_e8,(FString *)(pFVar4 + (longlong)iVar15 * 0x10));
      } while (bVar8 == !bVar9);
      iVar23 = iVar15 - iVar14;
      if (bVar8 == false) {
        DestructItems<FString,int>((FString *)(pFVar4 + (longlong)iVar14 * 0x10),iVar23);
      }
      else {
        if (iVar21 != iVar14) {
          memmove(pFVar4 + (longlong)iVar21 * 0x10,pFVar4 + (longlong)iVar14 * 0x10,
                  (longlong)iVar23 << 4);
        }
        iVar21 = iVar21 + iVar23;
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar14 = iVar15;
    } while (iVar15 < iVar22);
    local_res10->ArrayNum = iVar21;
    __return_storage_ptr__ = local_res10;
  }
  iVar21 = local_f0;
  iVar22 = 0;
  pFVar19 = local_f8 + local_f0;
  pFVar16 = local_f8;
  while( true ) {
    if (local_f0 != iVar21) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar16 == pFVar19) break;
    local_48 = local_90;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<``FPluginManager::FindCommandLinePlugins'::__l2::<lambda_1>::operator()'::__l7::<lambda_2>,void,TStringView<wchar_t>_>
               ::Call;
    if ((pFVar16->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
    local_90[0] = __return_storage_ptr__;
    FFileHelper::LoadFileToStringWithLineVisitor
              (pwVar10,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_50);
    pFVar16 = pFVar16 + 1;
  }
  iVar21 = __return_storage_ptr__->ArrayNum;
  local_e0 = &local_110;
  local_110 = (FString *)0x0;
  local_108 = 0;
  if (iVar21 != 0) {
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    bVar8 = ``FPluginManager::FindCommandLinePlugins'::__l2::<lambda_1>::operator()'::__l2::
            <lambda_3>::operator()(&local_e0,(FString *)pFVar4);
    bVar8 = !bVar8;
    iVar14 = iVar22;
    do {
      iVar15 = iVar14;
      do {
        iVar15 = iVar15 + 1;
        if (iVar21 <= iVar15) break;
        bVar9 = ``FPluginManager::FindCommandLinePlugins'::__l2::<lambda_1>::operator()'::__l2::
                <lambda_3>::operator()(&local_e0,(FString *)(pFVar4 + (longlong)iVar15 * 0x10));
      } while (bVar8 == !bVar9);
      iVar23 = iVar15 - iVar14;
      if (bVar8 == false) {
        DestructItems<FString,int>((FString *)(pFVar4 + (longlong)iVar14 * 0x10),iVar23);
      }
      else {
        if (iVar22 != iVar14) {
          memmove(pFVar4 + (longlong)iVar22 * 0x10,pFVar4 + (longlong)iVar14 * 0x10,
                  (longlong)iVar23 << 4);
        }
        iVar22 = iVar22 + iVar23;
      }
      __return_storage_ptr__ = local_res10;
      bVar8 = (bool)(bVar8 ^ 1);
      iVar14 = iVar15;
    } while (iVar15 < iVar21);
    local_res10->ArrayNum = iVar22;
    if (0 < (int)local_108) {
      iStack_c0 = 0;
      uStack_bc = 1;
      local_a8 = 0;
      lVar13 = *(longlong *)this;
      local_b8 = (ForElementType<unsigned_int>)(lVar13 + 0x68);
      iVar21 = *(int *)(lVar13 + 0x80);
      plVar1 = (longlong *)(lVar13 + 0x58);
      iStack_ac = 0;
      if (iVar21 != 0) {
        FVar20 = *(ForElementType<unsigned_int> *)(lVar13 + 0x78);
        if (*(ForElementType<unsigned_int> *)(lVar13 + 0x78) == (ForElementType<unsigned_int>)0x0) {
          FVar20 = local_b8;
        }
        uVar18 = *(uint *)FVar20;
        local_a8 = 0;
        while (uVar18 == 0) {
          lVar12 = (longlong)iStack_c0;
          local_a8 = local_a8 + 0x20;
          iStack_c0 = iStack_c0 + 1;
          iStack_ac = iVar21;
          if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0)
          goto LAB_141e10a3f;
          uVar18 = *(uint *)((uchar *)((longlong)FVar20 + 4) + lVar12 * 4);
        }
        uStack_bc = -uVar18 & uVar18;
        uVar2 = (ulonglong)uStack_bc * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_98 = (int)lVar12;
        iStack_ac = local_a8 + -1 + local_98;
        if (iVar21 < iStack_ac) {
          iStack_ac = iVar21;
        }
      }
LAB_141e10a3f:
      local_100 = (ForElementType<unsigned_int>)(lVar13 + 0x68);
      uVar18 = *(uint *)(lVar13 + 0x80);
      iStack_a0 = *(int *)(lVar13 + 0x60) - *(int *)(lVar13 + 0x8c);
      uVar17 = uVar18 & 0xffffffe0;
      uStack_b0 = 0xffffffff;
      TStack_78.CurrentBitIndex = iStack_ac;
      TStack_78.UnvisitedBitMask = 0xffffffff;
      TStack_78._padding_ = CONCAT44(uStack_bc,iStack_c0);
      iVar21 = (int)uVar18 >> 5;
      TStack_78._28_4_ = iStack_ac;
      TStack_78.BaseBitIndex = local_a8;
      uStack_58 = CONCAT44(uStack_9c,iStack_a0);
      local_114 = uVar18;
      local_c8 = plVar1;
      iStack_a4 = iStack_ac;
      local_80 = plVar1;
      TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b8;
      if (((int)uVar18 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar11;
      }
      uVar3 = *(int *)((longlong)local_100 + 0x18);
      if (uVar18 != uVar3) {
        FVar20 = local_100;
        if (*(ForElementType<unsigned_int> *)((longlong)local_100 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar20 = *(ForElementType<unsigned_int> *)((longlong)local_100 + 0x10);
        }
        uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)((longlong)FVar20 + (longlong)iVar21 * 4);
        while (uVar18 == 0) {
          lVar13 = (longlong)iVar21;
          uVar17 = uVar17 + 0x20;
          iVar21 = iVar21 + 1;
          uVar18 = uVar3;
          local_114 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
          goto LAB_141e10b60;
          uVar18 = ((uint *)((longlong)FVar20 + 4))[lVar13];
        }
        uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_94 = (int)lVar13;
        uVar18 = local_94 + -1 + uVar17;
        local_114 = uVar18;
        if ((int)uVar3 < (int)uVar18) {
          uVar18 = uVar3;
          local_114 = uVar3;
        }
      }
LAB_141e10b60:
      while( true ) {
        plVar7 = local_80;
        if ((int)local_80[1] - *(int *)((longlong)local_80 + 0x34) != (int)uStack_58) {
          local_res10 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
                        ((ulonglong)local_res10 & 0xffffffffffffff00);
          `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res10);
        }
        if (((TStack_78.CurrentBitIndex == uVar18) &&
            ((ForElementType<unsigned_int>)TStack_78.Array == local_100)) && (plVar7 == plVar1))
        break;
        iVar21 = (int)local_108;
        pFVar19 = local_110 + (int)local_108;
        pFVar4 = (FScriptContainerElement *)(*plVar7 + (longlong)TStack_78.CurrentBitIndex * 0x18);
        pFVar16 = local_110;
        while( true ) {
          if ((int)local_108 != iVar21) {
            local_118[0] = 0;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_118);
          }
          if (pFVar16 == pFVar19) goto LAB_141e10ca0;
          iVar14 = (pFVar16->Data).ArrayNum;
          iVar22 = iVar14 + -1;
          if (iVar14 == 0) {
            iVar22 = 0;
            pwVar10 = L"";
          }
          else {
            pwVar10 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
          }
          bVar8 = ::FString::MatchesWildcard((FString *)pFVar4,pwVar10,iVar22,IgnoreCase);
          if (bVar8) break;
          pFVar16 = pFVar16 + 1;
        }
        pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar5 <= pFVar4) &&
            (pFVar4 < pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar11;
        }
        iVar21 = __return_storage_ptr__->ArrayNum;
        if (iVar21 == __return_storage_ptr__->ArrayMax) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&__return_storage_ptr__->AllocatorInstance,
                              &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar21 + 1;
        ::FString::FString((FString *)
                           ((__return_storage_ptr__->AllocatorInstance).Data +
                           (longlong)iVar21 * 0x10),(FString *)pFVar4);
LAB_141e10ca0:
        TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
        uVar18 = local_114;
      }
    }
  }
  DestructItems<FString,int>(local_110,(int)local_108);
  if (local_110 != (FString *)0x0) {
    FMemory::Free(local_110);
  }
  DestructItems<FString,int>(local_f8,local_f0);
  if (local_f8 != (FString *)0x0) {
    FMemory::Free(local_f8);
  }
  return __return_storage_ptr__;
}

// operator() @ 141e10d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FPluginManager::ProcessEnabledPlugins'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  LPCRITICAL_SECTION p_Var2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  FConfigFile *this_00;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar8;
  FName *pFVar9;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  ForAnyElementType FVar13;
  undefined8 *puVar14;
  FString *pFVar15;
  FString *pFVar16;
  undefined1 local_res8 [8];
  int local_res10;
  uint local_res18;
  longlong local_res20;
  FString *local_138;
  undefined8 local_130;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_128;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_118;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_108;
  longlong local_f8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_f0;
  FString local_e0;
  TSharedRef<IPlugin,1> local_d0;
  undefined **local_c0;
  undefined1 local_b8;
  FString **local_b0;
  FName local_a8;
  FName local_a0;
  FString local_98;
  FString local_88;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  
  plVar11 = *(longlong **)this;
  local_res18 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < (int)plVar11[1]) {
    uVar6 = local_res18;
  }
  local_res10 = param_1;
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_f8 = (longlong)param_1 * 0x10;
  lVar1 = *(longlong *)(local_f8 + *plVar11);
  if (*(int *)(lVar1 + 0x20) == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = *(wchar_t **)(lVar1 + 0x18);
  }
  local_res20 = (longlong)param_1;
  ::FName::FName(&local_a8,pwVar12);
  if (*(char *)(lVar1 + 0x180) != '\0') {
    p_Var2 = *(LPCRITICAL_SECTION *)((longlong)this + 8);
    if (p_Var2 == (LPCRITICAL_SECTION)0x0) {
LAB_141e11240:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(p_Var2);
    this_00 = FConfigCacheIni::FindConfigFile(GConfig,&GEngineIni);
    if (this_00 != (FConfigFile *)0x0) {
      pTVar8 = &FPaths::GetPath(&local_98,(FString *)(lVar1 + 0x28))->Data;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&local_f0,pTVar8,9 - (uint)(pTVar8->ArrayNum != 0));
      ::FString::PathAppend((FString *)&local_f0,L"Content",7);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      pFVar9 = ::FName::FName(&local_a0,"Paths");
      FConfigFile::AddUniqueToSection(this_00,L"Core.System",*pFVar9,(FString *)&local_f0);
      if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.AllocatorInstance.Data);
      }
    }
    LeaveCriticalSection(p_Var2);
    local_138 = (FString *)0x0;
    local_c0 = &___7FPakFileSearchVisitor__6B_;
    local_b0 = &local_138;
    local_130 = 0;
    local_b8 = 0;
    this_01 = FPlatformFileManager::Get();
    pIVar10 = FPlatformFileManager::GetPlatformFile(this_01);
    pcVar3 = *(code **)((longlong)*pIVar10 + 0x1d0);
    ::FString::FString(&local_e0,"Windows");
    pTVar8 = &FPaths::GetPath(&local_88,(FString *)(lVar1 + 0x28))->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_108,pTVar8,9 - (uint)(pTVar8->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_108,L"Content",7);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_118,&local_108,6 - (uint)(local_108.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_118,L"Paks",4);
    uVar6 = local_e0.Data.ArrayNum - 1;
    if (local_e0.Data.ArrayNum == 0) {
      uVar6 = 0;
    }
    if ((local_118.ArrayNum != 0) || (iVar7 = 2, uVar6 == 0xffffffff)) {
      iVar7 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_128,&local_118,uVar6 + iVar7);
    ::FString::PathAppend
              ((FString *)&local_128,(wchar_t *)local_e0.Data.AllocatorInstance.Data,uVar6);
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_128.ArrayNum != 0) {
      FVar13.Data = local_128.AllocatorInstance.Data;
    }
    (*pcVar3)(pIVar10,FVar13.Data,&local_c0);
    if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.AllocatorInstance.Data);
    }
    if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
    if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    iVar7 = (int)local_130;
    pFVar16 = local_138 + (int)local_130;
    pFVar15 = local_138;
    while( true ) {
      if ((int)local_130 != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar15 == pFVar16) break;
      p_Var2 = *(LPCRITICAL_SECTION *)((longlong)this + 0x10);
      if (p_Var2 == (LPCRITICAL_SECTION)0x0) goto LAB_141e11240;
      EnterCriticalSection(p_Var2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FCoreDelegates::MountPak
                 ,&local_78);
      if (((FCoreDelegates::MountPak._16_4_ == 0) || (FCoreDelegates::MountPak._8_8_ == 0)) ||
         (cVar5 = (**(code **)(*(longlong *)FCoreDelegates::MountPak._8_8_ + 0x38))(), cVar5 == '\0'
         )) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_78);
      if (bVar4) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &FCoreDelegates::MountPak,&local_60);
        plVar11 = (longlong *)0x0;
        if (FCoreDelegates::MountPak._16_4_ != 0) {
          plVar11 = (longlong *)FCoreDelegates::MountPak._8_8_;
        }
        (**(code **)(*plVar11 + 0x60))(plVar11,pFVar15,0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_60);
        plVar11 = *(longlong **)this;
        lVar1 = *(longlong *)((longlong)this + 0x28);
        uVar6 = 0;
        if (local_res10 < (int)plVar11[1]) {
          uVar6 = local_res18;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar14 = (undefined8 *)(local_f8 + *plVar11);
        local_d0.Object = (IPlugin *)*puVar14;
        local_d0.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar14[1];
        if (local_d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TSharedRef<IPlugin,1>_>
                  ((TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x148),
                   &local_d0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d0.SharedReferenceCount.ReferenceController);
        LeaveCriticalSection(p_Var2);
        pFVar15 = pFVar15 + 1;
      }
      else {
        if (2 < (byte)LogPluginManager._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
        }
        LeaveCriticalSection(p_Var2);
        pFVar15 = pFVar15 + 1;
      }
    }
    local_c0 = &___7FDirectoryVisitor_IPlatformFile__6B_;
    DestructItems<FString,int>(local_138,(int)local_130);
    if (local_138 != (FString *)0x0) {
      FMemory::Free(local_138);
    }
  }
  return;
}

// operator() @ 141e12650

void __thiscall
`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>::operator()
          (void *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  PSRWLOCK SRWLock;
  ForAnyElementType *pFVar7;
  bool bVar8;
  int iVar9;
  wchar_t *pwVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  undefined **local_58;
  undefined1 local_50;
  void *local_48;
  undefined8 local_40;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_38;
  
  plVar3 = *(longlong **)((longlong)this + 0x18);
  plVar4 = *(longlong **)((longlong)this + 0x10);
  uVar2 = param_1->ArrayNum;
  local_50 = 1;
  local_58 = &FindPluginsInDirectory'::`2'::FFindPluginsInDirectory_Visitor::_vftable_;
  local_48 = (void *)0x0;
  local_40 = 0;
  pcVar5 = *(code **)(*plVar3 + 0x140);
  uVar11 = 0;
  if (param_2 < (int)plVar4[1]) {
    uVar11 = (uint)~param_2 >> 0x1f;
  }
  local_38 = param_1;
  if (uVar11 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar6 = *plVar4;
  if (*(int *)(lVar6 + 8 + (longlong)param_2 * 0x10) == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = *(wchar_t **)(lVar6 + (longlong)param_2 * 0x10);
  }
  (*pcVar5)(plVar3,pwVar10,&local_58);
  if (1 < (int)local_40) {
    uVar11 = param_1->ArrayNum - uVar2;
    if ((int)(uVar11 | uVar2) < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (uVar11 != 0) {
      TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAtImpl(param_1,uVar2,uVar11);
    }
    SRWLock = *(PSRWLOCK *)this;
    AcquireSRWLockExclusive(SRWLock);
    pFVar7 = *(ForAnyElementType **)((longlong)this + 8);
    piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
    iVar9 = *(int *)&pFVar7[1].Data;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar7,piVar1);
    }
    *(int *)&pFVar7[1].Data = iVar9 + 1;
    pFVar12 = pFVar7->Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar12 = 0;
    *(void **)pFVar12 = local_48;
    local_48 = (void *)0x0;
    *(int *)(pFVar12 + 8) = (int)local_40;
    *(undefined4 *)(pFVar12 + 0xc) = local_40._4_4_;
    local_40 = 0;
    ReleaseSRWLockExclusive(SRWLock);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// operator() @ 141e12a20

void __thiscall
`FPluginManager::ReadPluginsInDirectory'::__l7::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  FPluginDescriptor *this_00;
  
  plVar1 = *(longlong **)this;
  lVar8 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar2 = *(longlong **)((longlong)this + 8);
  this_00 = (FPluginDescriptor *)(lVar8 * 0x220 + *plVar1);
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *plVar2;
  if (*(int *)(lVar3 + 8 + lVar8 * 0x10) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = *(wchar_t **)(lVar3 + lVar8 * 0x10);
  }
  bVar5 = FPluginDescriptor::Load(this_00,pwVar7,(FText *)(this_00 + 1));
  *(bool *)&this_00[1].VersionName.Data.ArrayNum = bVar5;
  return;
}

// operator() @ 141e12c30

void __thiscall
`FPluginManager::ReadAllPlugins'::__l156::<lambda_1>::operator()
          (void *this,
          TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
          *param_1,TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                   *param_2)

{
  int *piVar1;
  FString *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  uint *puVar16;
  undefined1 *puVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  ForAnyElementType *pFVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res20 [8];
  undefined1 local_e8 [8];
  FString local_e0;
  ForAnyElementType local_d0;
  int local_c8;
  int local_c4;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  int local_8c;
  TPairInitializer<FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_const_&> local_88;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  FString *local_48;
  ForAnyElementType *local_40;
  
  iVar8 = *(int *)&param_2->field_0x28;
  pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10;
  iStack_b8 = 0;
  local_a0 = 0;
  uStack_b4 = 1;
  iStack_a4 = 0;
  if (iVar8 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)pTVar18;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar9 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_141e12cdd;
      uVar14 = puVar16[lVar9 + 1];
    }
    uStack_b4 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_b4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_90 = (int)lVar9;
    iStack_a4 = local_a0 + -1 + local_90;
    if (iVar8 < iStack_a4) {
      iStack_a4 = iVar8;
    }
  }
LAB_141e12cdd:
  uVar14 = *(uint *)&param_2->field_0x28;
  uVar12 = uVar14 & 0xffffffe0;
  iStack_98 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_a8 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_b4,iStack_b8);
  TStack_70.CurrentBitIndex = iStack_a4;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar14 >> 5;
  TStack_70._28_4_ = iStack_a4;
  TStack_70.BaseBitIndex = local_a0;
  uStack_50 = CONCAT44(uStack_94,iStack_98);
  local_c0 = param_2;
  local_b0 = (undefined1 *)pTVar18;
  iStack_9c = iStack_a4;
  local_88.Value = (TArray<FString,TSizedDefaultAllocator<32>_> *)pTVar18;
  local_78 = param_2;
  TStack_70.Array = pTVar18;
  if ((((int)uVar14 < 0) || (iVar8 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar14 != uVar4) {
    puVar17 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar17 = (undefined1 *)pTVar18;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar10 * 4);
    while (uVar14 == 0) {
      lVar9 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_141e12de0;
      uVar14 = *(uint *)(puVar17 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_8c = (int)lVar9;
    uVar14 = local_8c + -1 + uVar12;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_141e12de0:
  do {
    pTVar6 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_70.CurrentBitIndex == uVar14) && (TStack_70.Array == pTVar18)) &&
       (pTVar6 == param_2)) {
      return;
    }
    pFVar2 = (FString *)(*(longlong *)pTVar6 + (longlong)TStack_70.CurrentBitIndex * 0x28);
    ::FString::FString(&local_e0,pFVar2);
    local_d0.Data = (FScriptContainerElement *)0x0;
    iVar8 = pFVar2[1].Data.ArrayNum;
    pFVar20 = pFVar2[1].Data.AllocatorInstance.Data;
    local_c8 = iVar8;
    if (iVar8 == 0) {
      local_c4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar8,0,&local_d0,iVar8,&local_c4);
      ConstructItems<FString,FString,int>(local_d0.Data,(FString *)pFVar20,iVar8);
    }
    iVar8 = local_e0.Data.ArrayNum + -1;
    FVar15.Data = local_e0.Data.AllocatorInstance.Data;
    if (local_e0.Data.ArrayNum == 0) {
      iVar8 = 0;
      FVar15.Data = (FScriptContainerElement *)L"";
    }
    uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar15.Data);
    iVar10 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                         *)param_1,uVar12,&local_e0);
    iVar8 = local_c8;
    if (iVar10 == -1) {
LAB_141e12fef:
      local_48 = &local_e0;
      local_40 = &local_d0;
      TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_const_&>_>
                ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)param_1,&local_88,(bool *)&local_48);
    }
    else {
      lVar9 = *(longlong *)param_1 + (longlong)iVar10 * 0x28;
      pFVar19 = (ForAnyElementType *)(lVar9 + 0x10);
      if (lVar9 == 0) {
        pFVar19 = (ForAnyElementType *)0x0;
      }
      if (pFVar19 == (ForAnyElementType *)0x0) goto LAB_141e12fef;
      pFVar20 = local_d0.Data + (longlong)local_c8 * 0x10;
      FVar15.Data = local_d0.Data;
      while( true ) {
        if (local_c8 != iVar8) {
          local_e8[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_e8);
        }
        if (FVar15.Data == pFVar20) break;
        pFVar11 = pFVar19->Data;
        pFVar13 = pFVar11 + (longlong)*(int *)&pFVar19[1].Data * 0x10;
        for (; pFVar11 != pFVar13; pFVar11 = pFVar11 + 0x10) {
          iVar10 = *(int *)(pFVar11 + 8);
          if (iVar10 == *(int *)(FVar15.Data + 8)) {
            if (iVar10 < 2) goto LAB_141e12fe6;
            iVar10 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)pFVar11,*(wchar_t **)FVar15.Data)
            ;
            bVar7 = iVar10 == 0;
          }
          else {
            bVar7 = iVar10 + *(int *)(FVar15.Data + 8) == 1;
          }
          if (bVar7) goto LAB_141e12fe6;
        }
        if (((pFVar19->Data <= FVar15.Data) &&
            (FVar15.Data < pFVar19->Data + (longlong)*(int *)((longlong)&pFVar19[1].Data + 4) * 0x10
            )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = *(int *)&pFVar19[1].Data;
        piVar1 = (int *)((longlong)&pFVar19[1].Data + 4);
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,pFVar19,piVar1);
        }
        *(int *)&pFVar19[1].Data = iVar10 + 1;
        ::FString::FString((FString *)(pFVar19->Data + (longlong)iVar10 * 0x10),
                           (FString *)FVar15.Data);
LAB_141e12fe6:
        FVar15.Data = FVar15.Data + 0x10;
      }
    }
    DestructItems<FString,int>((FString *)local_d0.Data,local_c8);
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)local_88.Value;
  } while( true );
}

// AddPluginSearchPath @ 141e148e0

bool __thiscall
FPluginManager::AddPluginSearchPath(FPluginManager *this,FString *param_1,bool param_2)

{
  ForAnyElementType _Src;
  FString local_48;
  ForAnyElementType local_38;
  int local_2c [5];
  
  FPaths::ConvertRelativePathToFull(&local_48,param_1);
  _Src.Data = local_48.Data.AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  if (local_48.Data.ArrayNum == 0) {
    local_2c[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,&local_38,local_48.Data.ArrayNum,local_2c);
    memcpy(local_38.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
  }
  local_2c[1] = 3;
  TSet<FExternalPluginPath,DefaultKeyFuncs<FExternalPluginPath,0>,FDefaultSetAllocator>::
  Emplace<FExternalPluginPath>
            (&this->ExternalPluginSources,(FExternalPluginPath *)&stack0x00000008,(bool *)&local_38)
  ;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (&this->PluginDiscoveryPaths,(FString *)&stack0x00000008,(bool *)&local_48);
  if (param_2) {
    RefreshPluginsList(this);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return true;
}

// AddToPluginsList @ 141e14ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPluginManager::AddToPluginsList(FPluginManager *this,FString *param_1,FText *param_2)

{
  FScriptContainerElement *_Src;
  void *_Src_00;
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  EInsertionType EVar5;
  ulonglong uVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FString *pFVar10;
  int iVar11;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  EPluginType EVar14;
  longlong lVar15;
  longlong *plVar16;
  TSharedRef<FPlugin,1> *pTVar17;
  longlong *plVar18;
  longlong *plVar19;
  FPluginDescriptor *this_00;
  bool bVar20;
  undefined1 auStackY_438 [32];
  undefined1 local_3f8 [4];
  uint local_3f4;
  FString local_3f0;
  FText *local_3e0;
  FPluginDescriptor *local_3d8;
  FString local_3d0;
  FText local_3c0;
  FString local_3b0;
  TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> local_3a0;
  FText local_390;
  FText local_380;
  FText local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FText local_310;
  FText local_300;
  FText local_2f0;
  FTextFormat local_2e0;
  FText local_2d0;
  FTextFormat local_2c0;
  TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_2a8;
  FPluginDescriptor local_258;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_438;
  local_3e0 = param_2;
  FPaths::GetBaseFilename(&local_3b0,param_1,true);
  this_00 = (FPluginDescriptor *)&this->AllPlugins;
  iVar4 = local_3b0.Data.ArrayNum;
  FVar12.Data = (FScriptContainerElement *)L"";
  if (iVar4 != 0) {
    FVar12.Data = local_3b0.Data.AllocatorInstance.Data;
  }
  iVar11 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar11 = 0;
  }
  local_3d8 = this_00;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar12.Data);
  iVar4 = TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)this_00,uVar3,&local_3b0);
  plVar18 = (longlong *)0x0;
  if (iVar4 != -1) {
    lVar15 = *(longlong *)
              &((TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
                 *)this_00)->field_0x0 + (longlong)iVar4 * 0x28;
    plVar18 = (longlong *)(lVar15 + 0x10);
    if (lVar15 == 0) {
      plVar18 = (longlong *)0x0;
    }
    if (plVar18 != (longlong *)0x0) {
      local_3f0.Data.ArrayNum = (param_1->Data).ArrayNum;
      lVar15 = (longlong)local_3f0.Data.ArrayNum;
      _Src = (param_1->Data).AllocatorInstance.Data;
      local_3f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_3f0.Data.ArrayNum == 0) {
        local_3f0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_3f0.Data.ArrayNum,0,(ForAnyElementType *)&local_3f0,
                   local_3f0.Data.ArrayNum,&local_3f0.Data.ArrayMax);
        memcpy(local_3f0.Data.AllocatorInstance.Data,_Src,lVar15 * 2);
      }
      FPaths::NormalizeFilename(&local_3f0);
      local_3f4 = *(uint *)(plVar18 + 1);
      uVar6 = (ulonglong)(int)local_3f4;
      plVar16 = (longlong *)*plVar18;
      plVar19 = plVar16 + uVar6 * 2;
      do {
        if ((int)plVar18[1] != (int)uVar6) {
          local_3f8[0] = 0;
          `TCheckedPointerIterator<TSharedRef<FPlugin,1>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_3f8);
        }
        if (plVar16 == plVar19) {
          param_2 = local_3e0;
          this_00 = local_3d8;
          if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
            param_2 = local_3e0;
            this_00 = local_3d8;
          }
          break;
        }
        local_3d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3d0.Data.ArrayNum = *(int *)(*plVar16 + 0x30);
        lVar15 = (longlong)local_3d0.Data.ArrayNum;
        _Src_00 = *(void **)(*plVar16 + 0x28);
        if (local_3d0.Data.ArrayNum == 0) {
          local_3d0.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_3d0.Data.ArrayNum,0,(ForAnyElementType *)&local_3d0,
                     local_3d0.Data.ArrayNum,&local_3d0.Data.ArrayMax);
          memcpy(local_3d0.Data.AllocatorInstance.Data,_Src_00,lVar15 * 2);
        }
        FPaths::NormalizeFilename(&local_3d0);
        FVar12.Data = local_3d0.Data.AllocatorInstance.Data;
        if (local_3d0.Data.ArrayNum == local_3f0.Data.ArrayNum) {
          if (local_3d0.Data.ArrayNum < 2) goto LAB_141e14eae;
          iVar4 = wcscmp((wchar_t *)local_3d0.Data.AllocatorInstance.Data,
                         (wchar_t *)local_3f0.Data.AllocatorInstance.Data);
          bVar20 = iVar4 == 0;
        }
        else {
          bVar20 = local_3d0.Data.ArrayNum + local_3f0.Data.ArrayNum == 1;
        }
        if (bVar20) goto LAB_141e14eae;
        if (FVar12.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar12.Data);
        }
        uVar6 = (ulonglong)local_3f4;
        plVar16 = plVar16 + 2;
      } while( true );
    }
  }
  FPluginDescriptor::FPluginDescriptor(&local_258);
  FText::FText(&local_3c0);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar20 = FPluginDescriptor::Load(&local_258,pwVar13,&local_3c0);
  if (bVar20) {
    if (local_258.bIsPluginExtension == false) {
LAB_141e14fd4:
      bVar20 = true;
    }
    else {
      local_3d8 = &local_258;
      bVar20 = `VerifySinglePluginForAddOrRemove'::__l3::<lambda_1>::operator()(&local_3d8);
      if (bVar20) goto LAB_141e14fd4;
      pFVar7 = FText::FromString(&local_2f0,&local_258.FriendlyName);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_370,L"PluginManager",L"PluginIsExtension",
                          L"Plugin \'{0}\' is a platform extension");
      pFVar9 = FTextFormat::FTextFormat(&local_2e0,pFVar8,Default);
      pFVar7 = FText::Format<FText>(&local_380,pFVar9,pFVar7);
      FText::operator=(&local_3c0,pFVar7);
      if (local_380.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_380.TextData.Reference + 0x10))();
      }
      if (local_370.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_370.TextData.Reference + 0x10))();
      }
      bVar20 = false;
    }
    if (!bVar20) goto LAB_141e15347;
    pFVar10 = FPaths::EngineDir(&local_360);
    iVar11 = (pFVar10->Data).ArrayNum;
    iVar4 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar4 = 0;
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    bVar20 = ::FString::StartsWith(param_1,pwVar13,iVar4,IgnoreCase);
    if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_360.Data.AllocatorInstance.Data);
    }
    if (bVar20) {
      EVar14 = Engine;
    }
    else {
      pFVar10 = FPaths::EnterpriseDir(&local_350);
      iVar11 = (pFVar10->Data).ArrayNum;
      iVar4 = iVar11 + -1;
      if (iVar11 == 0) {
        iVar4 = 0;
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      bVar20 = ::FString::StartsWith(param_1,pwVar13,iVar4,IgnoreCase);
      if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_350.Data.AllocatorInstance.Data);
      }
      if (bVar20) {
        EVar14 = Enterprise;
      }
      else {
        pFVar10 = FPaths::ProjectModsDir(&local_340);
        iVar11 = (pFVar10->Data).ArrayNum;
        iVar4 = iVar11 + -1;
        if (iVar11 == 0) {
          iVar4 = 0;
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
        bVar20 = ::FString::StartsWith(param_1,pwVar13,iVar4,IgnoreCase);
        if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_340.Data.AllocatorInstance.Data);
        }
        if (bVar20) {
          EVar14 = Mod;
        }
        else {
          pFVar10 = FPaths::GetProjectFilePath(&local_320);
          pFVar10 = FPaths::GetPath(&local_330,pFVar10);
          iVar11 = (pFVar10->Data).ArrayNum;
          iVar4 = iVar11 + -1;
          if (iVar11 == 0) {
            iVar4 = 0;
            pwVar13 = L"";
          }
          else {
            pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
          }
          bVar20 = ::FString::StartsWith(param_1,pwVar13,iVar4,IgnoreCase);
          if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_330.Data.AllocatorInstance.Data);
          }
          if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_320.Data.AllocatorInstance.Data);
          }
          EVar14 = External;
          if (bVar20) {
            EVar14 = Project;
          }
        }
      }
    }
    local_2a8.Elements._0_8_ = 0;
    local_2a8.Elements._8_8_ = 0;
    local_2a8.Elements._32_8_ = 0;
    local_2a8.Elements._40_4_ = 0;
    local_2a8.Elements._44_4_ = 0x80;
    local_2a8.Elements._48_4_ = 0xffffffff;
    local_2a8.Elements._52_4_ = 0;
    local_2a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_2a8.HashSize = 0;
    local_3a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3a0.ArrayNum = 0;
    local_3a0.ArrayMax = 0;
    CreatePluginObject(param_1,&local_258,EVar14,
                       (TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
                        *)&local_2a8,&local_3a0);
    if (local_3a0.ArrayNum != 0) {
      local_3e0 = (FText *)param_1;
      `FPluginManager::AddToPluginsList'::__l18::<lambda_1>::operator()(&local_3e0);
    }
    if ((local_2a8.Elements._8_4_ - local_2a8.Elements._52_4_ != 1) &&
       (bVar20 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_8987629764537744745>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
                            ,0x297,"NewPlugins.Num() == 1"), bVar20)) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
    iVar4 = local_3b0.Data.ArrayNum + -1;
    FVar12.Data = local_3b0.Data.AllocatorInstance.Data;
    if (local_3b0.Data.ArrayNum == 0) {
      iVar4 = 0;
      FVar12.Data = (FScriptContainerElement *)L"";
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar12.Data);
    iVar4 = TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>(&local_2a8,uVar3,&local_3b0);
    if (iVar4 == -1) {
LAB_141e152d6:
      bVar20 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_8987629764537744741>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
                          ,0x29b,"NewPlugin");
      if (bVar20) {
        pcVar1 = (code *)swi(3);
        uVar2 = (*pcVar1)();
        return (bool)uVar2;
      }
    }
    else {
      lVar15 = local_2a8.Elements._0_8_ + (longlong)iVar4 * 0x28;
      plVar16 = (longlong *)(lVar15 + 0x10);
      if (lVar15 == 0) {
        plVar16 = (longlong *)0x0;
      }
      if ((plVar16 == (longlong *)0x0) || (iVar4 = (int)plVar16[1], iVar4 == 0)) goto LAB_141e152d6;
      EVar5 = AsOfferedPlugin;
      if ((int)(iVar4 - 1U) < iVar4) {
        EVar5 = ~(iVar4 - 1U) >> 0x1f;
      }
      if ((EVar5 == AsOfferedPlugin) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar1 = (code *)swi(3);
        uVar2 = (*pcVar1)();
        return (bool)uVar2;
      }
      pTVar17 = (TSharedRef<FPlugin,1> *)((longlong)((int)plVar16[1] + -1) * 0x10 + *plVar16);
      if (pTVar17 == (TSharedRef<FPlugin,1> *)0x0) goto LAB_141e152d6;
      if ((plVar18 == (longlong *)0x0) || (EVar5 = AsSuppressedPlugin, (int)plVar18[1] < 1)) {
        EVar5 = AsOfferedPlugin;
      }
      DiscoveredPluginMapUtils::InsertPluginIntoMap
                ((TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
                  *)this_00,&local_3b0,pTVar17,EVar5);
    }
    DestructItems<TSharedRef<FPlugin,1>,int>
              ((TSharedRef<FPlugin,1> *)local_3a0.AllocatorInstance.Data,local_3a0.ArrayNum);
    if ((TSharedRef<FPlugin,1> *)local_3a0.AllocatorInstance.Data != (TSharedRef<FPlugin,1> *)0x0) {
      FMemory::Free(local_3a0.AllocatorInstance.Data);
    }
    local_2a8.HashSize = 0;
    if (local_2a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_2a8.Elements);
    bVar20 = true;
  }
  else {
LAB_141e15347:
    local_390.TextData.Reference = local_3c0.TextData.Reference;
    if (local_3c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3c0.TextData.Reference + 8))
                (local_3c0.TextData.Reference,&local_3f4);
    }
    local_390.Flags = local_3c0.Flags;
    pFVar7 = FText::FromString(&local_2d0,param_1);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_300,L"PluginManager",L"AddToPluginsListFailed",
                        L"Failed to load plugin \'{0}\'\n{1}");
    pFVar9 = FTextFormat::FTextFormat(&local_2c0,pFVar8,Default);
    pFVar7 = FText::Format<FText,FText>(&local_310,pFVar9,pFVar7,&local_390);
    FText::operator=(&local_3c0,pFVar7);
    if (local_310.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_310.TextData.Reference + 0x10))();
    }
    if (local_300.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_300.TextData.Reference + 0x10))();
    }
    if (1 < (byte)LogPluginManager._0_1_) {
      FText::ToString(&local_3c0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
    }
    if (param_2 != (FText *)0x0) {
      FText::operator=(param_2,&local_3c0);
    }
    bVar20 = false;
  }
  if (local_3c0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3c0.TextData.Reference + 0x10))();
  }
  FPluginDescriptor::~FPluginDescriptor(&local_258);
LAB_141e15442:
  if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
  }
  return bVar20;
LAB_141e14eae:
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
  }
  bVar20 = true;
  goto LAB_141e15442;
}

// AreRequiredPluginsAvailable @ 141e154b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FPluginManager::AreRequiredPluginsAvailable(FPluginManager *this)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FTextLocalizationManager *this_00;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStackY_1c8 [32];
  undefined4 uStack_18c;
  TArrayView<FString_const_,int> TStack_188;
  FScopedBootTiming FStack_178;
  undefined1 auStack_158 [32];
  void *pvStack_138;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  void *pvStack_118;
  undefined4 uStack_110;
  undefined1 auStack_108 [32];
  void *pvStack_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  ForElementType<FSetElementId> FStack_c8;
  int iStack_c0;
  ForAnyElementType FStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [32];
  void *pvStack_88;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ForElementType<FSetElementId> FStack_68;
  int iStack_60;
  undefined1 auStack_58 [40];
  longlong *plStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (*(int *)&(this->PluginsToConfigure).Elements.field_0x8 -
      *(int *)&(this->PluginsToConfigure).Elements.field_0x34 < 1) {
    this->bHaveAllRequiredPlugins = true;
  }
  else {
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2024,"FPluginManager::ConfigureEnabledPlugins",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
                 ,0x7e8);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2024);
    }
    FScopedBootTiming::FScopedBootTiming(&FStack_178,"FPluginManager::ConfigureEnabledPlugins");
    this->bHaveAllRequiredPlugins = false;
    auStack_158._0_8_ = (FScriptContainerElement *)0x0;
    auStack_158._8_8_ = 0;
    pvStack_138 = (void *)0x0;
    uStack_130 = 0;
    uStack_124 = 0;
    pvStack_118 = (void *)0x0;
    uStack_110 = 0;
    auStack_108._0_8_ = (FScriptContainerElement *)0x0;
    auStack_108._8_8_ = 0;
    pvStack_e8 = (void *)0x0;
    uStack_e0 = 0;
    uStack_d4 = 0;
    FStack_c8 = (ForElementType<FSetElementId>)0x0;
    iStack_c0 = 0;
    FStack_b8.Data = (FScriptContainerElement *)0x0;
    uStack_b0._0_4_ = 0;
    uStack_b0._4_4_ = 0;
    auStack_a8._0_8_ = (FScriptContainerElement *)0x0;
    auStack_a8._8_8_ = 0;
    pvStack_88 = (void *)0x0;
    uStack_80 = 0;
    uStack_74 = 0;
    FStack_68 = (ForElementType<FSetElementId>)0x0;
    iStack_60 = 0;
    uStack_12c = 0x80;
    uStack_128 = 0xffffffff;
    uStack_dc = 0x80;
    uStack_d8 = 0xffffffff;
    uStack_7c = 0x80;
    uStack_78 = 0xffffffff;
    FindCompileTimePlugins(this,(FPluginDiscoveryContext *)auStack_158);
    bVar4 = FindCommandLinePlugins(this,(FPluginDiscoveryContext *)auStack_158);
    if ((!bVar4) || (bVar4 = FindTargetPlugins(this,(FPluginDiscoveryContext *)auStack_158), !bVar4)
       ) {
      iStack_60 = 0;
      if (FStack_68 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_68);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)auStack_a8,0,auStack_a8._8_4_);
      iVar2 = SUB84(auStack_a8._8_8_,4);
      auStack_a8._8_8_ = auStack_a8._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)auStack_a8,0,(int *)(auStack_a8 + 0xc));
      }
      uStack_78 = 0xffffffff;
      uStack_74 = 0;
      uStack_80 = 0;
      if (0x80 < uStack_7c) {
        uStack_7c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_a8 + 0x10),0);
      }
      if (pvStack_88 != (void *)0x0) {
        FMemory::Free(pvStack_88);
      }
      if ((FScriptContainerElement *)auStack_a8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)auStack_a8._0_8_);
      }
      DestructItems<FString,int>((FString *)FStack_b8.Data,(int)uStack_b0);
      if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_b8.Data);
      }
      iStack_c0 = 0;
      if (FStack_c8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_c8);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)auStack_108,0,auStack_108._8_4_);
      iVar2 = SUB84(auStack_108._8_8_,4);
      auStack_108._8_8_ = auStack_108._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)auStack_108,0,(int *)(auStack_108 + 0xc));
      }
      uStack_d8 = 0xffffffff;
      uStack_d4 = 0;
      uStack_e0 = 0;
      if (0x80 < uStack_dc) {
        uStack_dc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_108 + 0x10),0);
      }
      if (pvStack_e8 != (void *)0x0) {
        FMemory::Free(pvStack_e8);
      }
      if ((FScriptContainerElement *)auStack_108._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)auStack_108._0_8_);
      }
      uStack_110 = 0;
      if (pvStack_118 != (void *)0x0) {
        FMemory::Free(pvStack_118);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FPlugin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FPlugin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)auStack_158,0,auStack_158._8_4_);
      iVar2 = SUB84(auStack_158._8_8_,4);
      auStack_158._8_8_ = auStack_158._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)auStack_158,0,(int *)(auStack_158 + 0xc));
      }
      uStack_128 = 0xffffffff;
      uStack_124 = 0;
      uStack_130 = 0;
      if (0x80 < uStack_12c) {
        uStack_12c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_158 + 0x10),0);
      }
      if (pvStack_138 != (void *)0x0) {
        FMemory::Free(pvStack_138);
      }
      if ((FScriptContainerElement *)auStack_158._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)auStack_158._0_8_);
      }
      FScopedBootTiming::~FScopedBootTiming(&FStack_178);
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return false;
    }
    MarkEnabledPlugins(this,(FPluginDiscoveryContext *)auStack_158);
    this->bHaveAllRequiredPlugins = true;
    ProcessEnabledPlugins(this,(FPluginDiscoveryContext *)auStack_158);
    MountContentPlugins(this,(FPluginDiscoveryContext *)auStack_158);
    if (0 < (int)uStack_b0) {
      this_00 = FTextLocalizationManager::Get();
      TStack_188.DataPtr = (FString *)FStack_b8.Data;
      iVar2 = (int)uStack_b0;
      auStack_58._0_8_ = 0;
      plStack_30 = (longlong *)0x0;
      if (((int)uStack_b0 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      TStack_188._12_4_ = uStack_18c;
      TStack_188.ArrayNum = iVar2;
      FTextLocalizationManager::HandleLocalizationTargetsMounted
                (this_00,&TStack_188,(TUniqueFunction<void___cdecl(void)> *)auStack_58);
      if (auStack_58._0_8_ != 0) {
        plVar6 = (longlong *)(auStack_58 + 0x10);
        if (plStack_30 != (longlong *)0x0) {
          plVar6 = plStack_30;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    bVar4 = 1 < (this->PluginsToConfigure).HashSize;
    if (!bVar4) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements
                (&this->PluginsToConfigure);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&(this->PluginsToConfigure).Elements,0,
                      *(int *)&(this->PluginsToConfigure).Elements.field_0x8);
    puVar1 = &(this->PluginsToConfigure).Elements.field_0xc;
    *(undefined4 *)&(this->PluginsToConfigure).Elements.field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&this->PluginsToConfigure,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->PluginsToConfigure).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->PluginsToConfigure).Elements.field_0x34 = 0;
    iVar2 = *(int *)&(this->PluginsToConfigure).Elements.field_0x2c;
    *(undefined4 *)&(this->PluginsToConfigure).Elements.field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->PluginsToConfigure).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->PluginsToConfigure).Elements.field_0x10,0);
    }
    if (bVar4) {
      (this->PluginsToConfigure).HashSize = 1;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash
                (&this->PluginsToConfigure);
    }
    iStack_60 = 0;
    if (FStack_68 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FStack_68);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)auStack_a8,0,auStack_a8._8_4_);
    iVar2 = SUB84(auStack_a8._8_8_,4);
    auStack_a8._8_8_ = auStack_a8._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)auStack_a8,0,(int *)(auStack_a8 + 0xc));
    }
    uStack_78 = 0xffffffff;
    uStack_74 = 0;
    uStack_80 = 0;
    if (0x80 < uStack_7c) {
      uStack_7c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_a8 + 0x10),0);
    }
    if (pvStack_88 != (void *)0x0) {
      FMemory::Free(pvStack_88);
    }
    if ((FScriptContainerElement *)auStack_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_a8._0_8_);
    }
    DestructItems<FString,int>((FString *)FStack_b8.Data,(int)uStack_b0);
    if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b8.Data);
    }
    iStack_c0 = 0;
    if (FStack_c8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FStack_c8);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)auStack_108,0,auStack_108._8_4_);
    iVar2 = SUB84(auStack_108._8_8_,4);
    auStack_108._8_8_ = auStack_108._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)auStack_108,0,(int *)(auStack_108 + 0xc));
    }
    uStack_d8 = 0xffffffff;
    uStack_d4 = 0;
    uStack_e0 = 0;
    if (0x80 < uStack_dc) {
      uStack_dc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_108 + 0x10),0);
    }
    if (pvStack_e8 != (void *)0x0) {
      FMemory::Free(pvStack_e8);
    }
    if ((FScriptContainerElement *)auStack_108._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_108._0_8_);
    }
    uStack_110 = 0;
    if (pvStack_118 != (void *)0x0) {
      FMemory::Free(pvStack_118);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FPlugin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FPlugin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)auStack_158,0,auStack_158._8_4_);
    iVar2 = SUB84(auStack_158._8_8_,4);
    auStack_158._8_8_ = auStack_158._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)auStack_158,0,(int *)(auStack_158 + 0xc));
    }
    uStack_128 = 0xffffffff;
    uStack_124 = 0;
    uStack_130 = 0;
    if (0x80 < uStack_12c) {
      uStack_12c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_158 + 0x10),0);
    }
    if (pvStack_138 != (void *)0x0) {
      FMemory::Free(pvStack_138);
    }
    if ((FScriptContainerElement *)auStack_158._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_158._0_8_);
    }
    FScopedBootTiming::~FScopedBootTiming(&FStack_178);
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return this->bHaveAllRequiredPlugins;
}

// CanEnablePluginInCurrentTarget @ 141e15990

bool __thiscall FPluginManager::CanEnablePluginInCurrentTarget(FPluginManager *this,char *param_1)

{
  ForAnyElementType FVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  ::FString::FString(&local_28,param_1);
  FVar1.Data = local_28.Data.AllocatorInstance.Data;
  iVar4 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  local_18.Size = iVar4;
  local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  bVar2 = ConfigureEnabledPlugins(this);
  if (bVar2) {
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar1.Data);
    bVar2 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
            ContainsByHash<TStringView<wchar_t>_>(&this->PluginsEnabledForTarget,uVar3,&local_18);
  }
  else {
    bVar2 = false;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// CanEnablePluginInCurrentTarget @ 141e15a30

bool __thiscall
FPluginManager::CanEnablePluginInCurrentTarget(FPluginManager *this,TStringView<wchar_t> *param_1)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = ConfigureEnabledPlugins(this);
  if (bVar1) {
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
    bVar1 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
            ContainsByHash<TStringView<wchar_t>_>(&this->PluginsEnabledForTarget,uVar2,param_1);
    return bVar1;
  }
  return false;
}

// ConfigureEnabledPluginForCurrentTarget @ 141e15df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPluginManager::ConfigureEnabledPluginForCurrentTarget
          (FPluginManager *this,FPluginReferenceDescriptor *param_1,
          TMap<FString,FPlugin_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPlugin_*,0>_>
          *param_2,TStringView<wchar_t> *param_3,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_4)

{
  code *pcVar1;
  EBuildTargetType EVar2;
  EBuildConfiguration EVar3;
  bool bVar4;
  undefined1 uVar5;
  wchar_t *pwVar6;
  IProjectManager *pIVar7;
  FProjectDescriptor *pFVar8;
  ulonglong uVar9;
  void *pvVar10;
  ForAnyElementType FVar11;
  ForAnyElementType FVar12;
  int iVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  undefined1 auStackY_a28 [32];
  undefined1 local_9c8;
  undefined1 local_9c7;
  char local_9c6;
  FString local_9c0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_9b0;
  FString local_9a0;
  FConfigurePluginResultInfo local_990;
  FString local_970;
  FString local_960;
  FString local_950;
  FString local_940;
  FString local_930;
  FString local_920;
  FString local_910;
  FString local_900;
  FString local_8f0;
  FScopedBootTiming local_8e0;
  undefined1 local_8c8 [64];
  void *local_888;
  undefined4 local_880;
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1024];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_a28;
  local_9c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_4;
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2190,"ConfigureEnabledPluginForCurrentTarget",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
               ,0x88e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2190);
  }
  FScopedBootTiming::FScopedBootTiming(&local_8e0,"ConfigureEnabledPluginForCurrentTarget");
  local_990.Code = Unset;
  local_990.PluginReference = (FPluginReferenceDescriptor *)0x0;
  local_990.ReferenceChain.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_990.ReferenceChain.ArrayNum = 0;
  local_990.ReferenceChain.ArrayMax = 0;
  EVar2 = FApp::GetBuildTargetType();
  EVar3 = FApp::GetBuildConfiguration();
  pwVar6 = FGenericPlatformMisc::GetUBTPlatform();
  ::FString::FString(&local_950,pwVar6);
  ::FString::FString(&local_960,"ProjectDS");
  pIVar7 = IProjectManager::Get();
  pFVar8 = (FProjectDescriptor *)(**(code **)((longlong)*pIVar7 + 8))(pIVar7);
  bVar4 = ConfigureEnabledPluginForTarget
                    (param_1,pFVar8,&local_960,&local_950,EVar3,EVar2,false,&this->AllPlugins,
                     param_2,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                             local_9c0.Data.AllocatorInstance.Data,&local_990);
  if (local_960.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_960.Data.AllocatorInstance.Data);
  }
  if (local_950.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_950.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    bVar4 = true;
    goto LAB_141e16487;
  }
  local_9c6 = FApp::IsUnattended();
  local_8c8._44_4_ = 0x80;
  local_9b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9b0.ArrayNum = 0;
  local_9b0.ArrayMax = 0;
  local_8c8._0_8_ = 0;
  local_8c8._8_8_ = 0;
  local_8c8._32_8_ = 0;
  local_8c8._40_4_ = 0;
  local_8c8._52_4_ = 0;
  local_888 = (void *)0x0;
  local_880 = 0;
  local_8c8._48_4_ = 0xffffffff;
  ReadAllPlugins((TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
                  *)local_8c8,&this->PluginDiscoveryPaths,&local_9b0);
  local_878.Base = local_858;
  local_878.CurPos = local_858;
  iVar14 = local_9b0.ArrayNum;
  uVar9 = (ulonglong)local_9b0.ArrayNum;
  local_878.End = (wchar_t *)local_58;
  pFVar15 = local_9b0.AllocatorInstance.Data + uVar9 * 0x10;
  FVar11.Data = (FScriptContainerElement *)0x0;
  local_878.bIsDynamic = false;
  local_878.bIsExternal = false;
  FVar12.Data = local_9b0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar9 != iVar14) {
      local_9c7 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_9c7)
      ;
    }
    if (FVar12.Data == pFVar15) break;
    if (local_878.End < local_878.CurPos + 2) {
      TStringBuilderBase<wchar_t>::Extend(&local_878,2);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_878.CurPos,L"\n\t",4);
    local_878.CurPos = (wchar_t *)((longlong)pvVar10 + 4);
    iVar13 = *(int *)(FVar12.Data + 8) + -1;
    if (*(int *)(FVar12.Data + 8) == 0) {
      iVar13 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_878,*(wchar_t **)FVar12.Data,iVar13);
    uVar9 = local_9b0._8_8_ & 0xffffffff;
    FVar12.Data = FVar12.Data + 0x10;
  }
  if (local_990.PluginReference == param_1) {
    if (local_990.Code == PluginMissing) {
      if (local_878.End < local_878.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_878,1);
      }
      *local_878.CurPos = L'\0';
      ::FString::PrintfImpl
                (&local_920,
                 L"Unable to load plugin \'%s\'. It was requested by %.*s, but is missing on disk. Aborting. Looked in these locations for .uplugin files:%s"
                );
      FVar11.Data = local_920.Data.AllocatorInstance.Data;
    }
    else if (local_990.Code == PluginSealed) {
      ::FString::PrintfImpl
                (&local_930,
                 L"Unable to load plugin \'%s\'. It was requested by %.*s, but is is a sealed plugin and is therefore not usable. Aborting."
                );
      FVar11.Data = local_930.Data.AllocatorInstance.Data;
    }
    else if (local_990.Code == DisallowedDependency) {
      ::FString::PrintfImpl
                (&local_940,
                 L"Unable to load plugin \'%s\'. It was requested by %.*s, but is a disallowed plugin is therefore not usable. Aborting."
                );
      FVar11.Data = local_940.Data.AllocatorInstance.Data;
    }
    else {
      iVar14 = 0x8fe;
LAB_141e160d4:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
                         ,iVar14,L"Unimplemented EConfigurePluginResultCode switch case");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
  }
  else if (local_990.Code == PluginMissing) {
    if (local_878.End < local_878.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_878,1);
    }
    *local_878.CurPos = L'\0';
    `FPluginManager::ConfigureEnabledPluginForCurrentTarget'::__l2::<lambda_1>::operator()
              (&local_9c8,&local_8f0,&local_990.ReferenceChain,local_990.PluginReference);
    ::FString::PrintfImpl
              (&local_970,
               L"Unable to load plugin \'%s\'. It was requested by %.*s, but it has a dependency that is missing on disk.\n\tThe missing dependency is %s (ReferenceChain: %s).\n\tAborting.\n\tLooked in these locations for .uplugin files:%s"
              );
    FVar11.Data = local_970.Data.AllocatorInstance.Data;
    local_970.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_970.Data.ArrayNum = 0;
    local_970.Data.ArrayMax = 0;
    if (local_8f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8f0.Data.AllocatorInstance.Data);
    }
  }
  else if (local_990.Code == PluginSealed) {
    `FPluginManager::ConfigureEnabledPluginForCurrentTarget'::__l2::<lambda_1>::operator()
              (&local_9c8,&local_900,&local_990.ReferenceChain,local_990.PluginReference);
    ::FString::PrintfImpl
              (&local_9c0,
               L"Unable to load plugin \'%s\'. It was requested by %.*s, but it has a dependency on a sealed plugin.\n\tThe sealed dependency is %s (ReferenceChain: %s).\n\tAborting."
              );
    FVar11.Data = local_9c0.Data.AllocatorInstance.Data;
    local_9c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_9c0.Data.ArrayNum = 0;
    local_9c0.Data.ArrayMax = 0;
    if (local_900.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_900.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (local_990.Code != DisallowedDependency) {
      iVar14 = 0x921;
      goto LAB_141e160d4;
    }
    `FPluginManager::ConfigureEnabledPluginForCurrentTarget'::__l2::<lambda_1>::operator()
              (&local_9c8,&local_910,&local_990.ReferenceChain,local_990.PluginReference);
    ::FString::PrintfImpl
              (&local_9a0,
               L"Unable to load plugin \'%s\'. It was requested by %.*s, but it has a dependency on a disallowed plugin.\n\tThe disallowed plugin is %s (ReferenceChain: %s).\n\tAborting."
              );
    FVar11.Data = local_9a0.Data.AllocatorInstance.Data;
    local_9a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_9a0.Data.ArrayNum = 0;
    local_9a0.Data.ArrayMax = 0;
    if (local_910.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_910.Data.AllocatorInstance.Data);
    }
  }
  if (local_9c6 == '\0') {
    if (1 < (byte)LogPluginManager._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
    }
  }
  else {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
  }
  bVar4 = false;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
  local_880 = 0;
  if (local_888 != (void *)0x0) {
    FMemory::Free(local_888);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_8c8);
  DestructItems<FString,int>((FString *)local_9b0.AllocatorInstance.Data,local_9b0.ArrayNum);
  if (local_9b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9b0.AllocatorInstance.Data);
  }
  if ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)FVar11.Data !=
      (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0) {
    FMemory::Free(FVar11.Data);
  }
LAB_141e16487:
  if (local_990.ReferenceChain.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_990.ReferenceChain.AllocatorInstance.Data);
  }
  FScopedBootTiming::~FScopedBootTiming(&local_8e0);
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// ConfigureEnabledPluginForTarget @ 141e164e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FPluginManager::ConfigureEnabledPluginForTarget
          (FPluginReferenceDescriptor *param_1,FProjectDescriptor *param_2,FString *param_3,
          FString *param_4,EBuildConfiguration param_5,EBuildTargetType param_6,bool param_7,
          TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
          *param_8,TMap<FString,FPlugin_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPlugin_*,0>_>
                   *param_9,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_10,
          FConfigurePluginResultInfo *param_11)

{
  FPlugin *pFVar1;
  code *pcVar2;
  FPluginReferenceDescriptor *pFVar3;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  FPlugin **ppFVar9;
  FScriptContainerElement *pFVar10;
  TSharedRef<FPlugin,1> *pTVar11;
  TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> *pTVar12;
  FModuleManager *this;
  FString *pFVar13;
  FPluginDisallowedDescriptor *pFVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  FStaticBasicLogRecord *pFVar17;
  wchar_t *pwVar18;
  TSharedRef<FPlugin,1> *pTVar19;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  longlong lVar20;
  FModuleDescriptor *pFVar21;
  TSharedRef<FPlugin,1> *pTVar22;
  FModuleDescriptor *this_01;
  FPluginReferenceDescriptor *pFVar23;
  FPluginReferenceDescriptor *pFVar24;
  undefined1 auStackY_248 [32];
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined1 local_1f6 [6];
  ForAnyElementType local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  uint local_1d8;
  uint local_1d4;
  FPluginReferenceDescriptor *local_1d0;
  FPluginReferenceDescriptor *local_1c8;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_1c0;
  int local_1b8 [2];
  FConfigurePluginResultInfo *local_1b0;
  FString *local_1a8;
  FPluginReferenceDescriptor *local_1a0;
  TSharedRef<FPlugin,1> *local_198;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_190;
  TSet<TTuple<FString,FPlugin_*>,TDefaultMapHashableKeyFuncs<FString,FPlugin_*,0>,FDefaultSetAllocator>
  *local_188;
  TSet<TTuple<FString,FPluginReferenceDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FPluginReferenceDescriptor_const_*,0>,FDefaultSetAllocator>
  *local_180;
  FConfigurePluginResultInfo *local_178;
  TPairInitializer<FString_const_&,FPluginReferenceDescriptor_const_*_&&> local_170;
  FString *local_160;
  FProjectDescriptor *local_158;
  undefined8 local_150;
  FPlugin *local_148;
  undefined1 local_140 [16];
  FPluginReferenceDescriptor *local_130;
  void *local_128;
  undefined8 local_120;
  FConfigurePluginResultInfo local_118;
  FConfigurePluginResultInfo local_f8;
  FPluginReferenceDescriptor *local_d8;
  FPluginReferenceDescriptor ***local_d0;
  FPluginReferenceDescriptor *local_c8;
  undefined8 *local_c0;
  FString *local_b8;
  FPlugin **local_b0;
  FString local_a8;
  TSet<TTuple<FString,FPluginReferenceDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FPluginReferenceDescriptor_const_*,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  iVar8 = (param_1->Name).Data.ArrayNum;
  local_190 = param_10;
  local_1c0 = param_8;
  local_188 = (TSet<TTuple<FString,FPlugin_*>,TDefaultMapHashableKeyFuncs<FString,FPlugin_*,0>,FDefaultSetAllocator>
               *)param_9;
  local_1b0 = param_11;
  iVar15 = 0;
  local_1d8 = 0;
  if (iVar8 == 0) {
    pwVar18 = L"";
  }
  else {
    pwVar18 = (wchar_t *)(param_1->Name).Data.AllocatorInstance.Data;
    iVar15 = iVar8 + -1;
  }
  local_1a8 = param_4;
  local_160 = param_3;
  local_158 = param_2;
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar18);
  iVar8 = TSet<TTuple<FString,FPlugin_*>,TDefaultMapHashableKeyFuncs<FString,FPlugin_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FPlugin_*>,TDefaultMapHashableKeyFuncs<FString,FPlugin_*,0>,FDefaultSetAllocator>
                      *)param_9,uVar7,&param_1->Name);
  if (iVar8 == -1) {
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    local_1f0.Data = (FScriptContainerElement *)0x0;
    local_1e8 = 0;
    (param_11->ReferenceChain).ArrayNum = 0;
    if ((param_11->ReferenceChain).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(param_11->ReferenceChain).AllocatorInstance,0,
                 &(param_11->ReferenceChain).ArrayMax);
    }
    local_180 = &local_98;
    local_178 = param_11;
    local_1d0 = param_1;
    if (((local_1f0.Data <= (FScriptContainerElement *)&local_1d0) &&
        ((FScriptContainerElement *)&local_1d0 < local_1f0.Data + (longlong)local_1e8._4_4_ * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    iVar8 = (int)local_1e8;
    if ((int)local_1e8 == local_1e8._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_1f0,(int *)((longlong)&local_1e8 + 4));
    }
    local_1e8 = CONCAT44(local_1e8._4_4_,iVar8 + 1);
    *(FPluginReferenceDescriptor **)(local_1f0.Data + (longlong)iVar8 * 8) = local_1d0;
    local_d0 = &local_170.Value;
    local_170.Value = (FPluginReferenceDescriptor **)param_1;
    local_d8 = param_1;
    TSet<TTuple<FString,FPluginReferenceDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FPluginReferenceDescriptor_const_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FPluginReferenceDescriptor_const_*_&&>_>
              (&local_98,&local_170,(bool *)&local_d8);
    local_1d4 = 0;
    if (0 < (int)local_1e8) {
      local_1e0 = 0;
LAB_141e167af:
      lVar20 = local_1e0;
      uVar7 = 0;
      if ((int)local_1d4 < (int)local_1e8) {
        uVar7 = ~local_1d4 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      pFVar23 = *(FPluginReferenceDescriptor **)(local_1f0.Data + lVar20 * 8);
      local_1a0 = pFVar23;
      if ((pFVar23->bEnabled != false) &&
         ((((pFVar23->bHasExplicitPlatforms == false && ((pFVar23->PlatformAllowList).ArrayNum < 1))
           || (bVar5 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                                 (&pFVar23->PlatformAllowList,param_4), bVar5)) &&
          ((bVar5 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                              (&pFVar23->PlatformDenyList,param_4), !bVar5 &&
           (pFVar23->bEnabled != false)))))) {
        iVar8 = (pFVar23->TargetConfigurationAllowList).ArrayNum;
        if (0 < iVar8) {
          pFVar10 = (pFVar23->TargetConfigurationAllowList).AllocatorInstance.Data;
          pFVar16 = pFVar10 + iVar8;
          for (; pFVar10 != pFVar16; pFVar10 = pFVar10 + 1) {
            if (*pFVar10 == (FScriptContainerElement)param_5) goto LAB_141e168a6;
          }
          goto LAB_141e1687d;
        }
LAB_141e168a6:
        pFVar10 = (pFVar23->TargetConfigurationDenyList).AllocatorInstance.Data;
        pFVar16 = pFVar10 + (pFVar23->TargetConfigurationDenyList).ArrayNum;
        for (; pFVar10 != pFVar16; pFVar10 = pFVar10 + 1) {
          if (*pFVar10 == (FScriptContainerElement)param_5) goto LAB_141e1687d;
        }
        iVar8 = (pFVar23->TargetAllowList).ArrayNum;
        if (0 < iVar8) {
          pFVar10 = (pFVar23->TargetAllowList).AllocatorInstance.Data;
          pFVar16 = pFVar10 + iVar8;
          for (; pFVar10 != pFVar16; pFVar10 = pFVar10 + 1) {
            if (*pFVar10 == (FScriptContainerElement)param_6) goto LAB_141e168f9;
          }
          goto LAB_141e1687d;
        }
LAB_141e168f9:
        pFVar10 = (pFVar23->TargetDenyList).AllocatorInstance.Data;
        pFVar16 = pFVar10 + (pFVar23->TargetDenyList).ArrayNum;
        for (; pFVar10 != pFVar16; pFVar10 = pFVar10 + 1) {
          if (*pFVar10 == (FScriptContainerElement)param_6) goto LAB_141e1687d;
        }
        if (((!param_7) &&
            ((pFVar23->bHasExplicitPlatforms != false ||
             ((pFVar23->SupportedTargetPlatforms).ArrayNum != 0)))) &&
           (bVar5 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                              (&pFVar23->SupportedTargetPlatforms,param_4), !bVar5)) {
          if ((byte)LogPluginManager._0_1_ < 6) goto LAB_141e17190;
          if ((pFVar23->Name).Data.ArrayNum == 0) {
            pFVar17 = &::LOG_Static;
          }
          else {
            pFVar17 = &::LOG_Static;
          }
          goto LAB_141e17184;
        }
        this_00 = local_1c0;
        pTVar11 = DiscoveredPluginMapUtils::FindPluginInMap(local_1c0,&pFVar23->Name);
        if (pTVar11 != (TSharedRef<FPlugin,1> *)0x0) {
          if ((pFVar23->RequestedVersion).bIsSet == false) {
LAB_141e16b5b:
            pFVar1 = pTVar11->Object;
            if ((param_7) ||
               ((((pFVar1->Descriptor).bHasExplicitPlatforms == false &&
                 ((pFVar1->Descriptor).SupportedTargetPlatforms.ArrayNum == 0)) ||
                (bVar5 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                                   (&(pFVar1->Descriptor).SupportedTargetPlatforms,param_4), bVar5))
               )) {
              if ((param_6 != Program) ||
                 (bVar5 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                                    (&(pFVar1->Descriptor).SupportedPrograms,local_160), bVar5)) {
                if ((pFVar1->Type == Enterprise) &&
                   ((local_158 != (FProjectDescriptor *)0x0 &&
                    (local_158->bIsEnterpriseProject == false)))) {
                  lVar20 = local_1e0;
                  if (5 < (byte)LogPluginManager._0_1_) {
                    UE::Logging::Private::BasicLog<6>
                              (&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
                    lVar20 = local_1e0;
                  }
                }
                else {
                  if (pFVar23->bOptional != false) {
                    iVar8 = (pFVar1->Descriptor).Modules.ArrayNum;
                    this_01 = (FModuleDescriptor *)
                              (pFVar1->Descriptor).Modules.AllocatorInstance.Data;
                    pFVar21 = this_01 + iVar8;
                    do {
                      if ((pFVar1->Descriptor).Modules.ArrayNum != iVar8) {
                        local_1f7 = 0;
                        `TCheckedPointerIterator<FModuleDescriptor,int,0>::operator!='::__l2::
                        <lambda_1>::operator()(&local_1f7);
                      }
                      pTVar4 = local_190;
                      this_00 = local_1c0;
                      if (this_01 == pFVar21) {
                        if ((pFVar23->bOptional == false) ||
                           (*(int *)&(local_190->Elements).field_0x8 ==
                            *(int *)&(local_190->Elements).field_0x34)) break;
                        iVar8 = (pFVar23->Name).Data.ArrayNum;
                        if (iVar8 == 0) {
                          pwVar18 = L"";
                          iVar8 = 0;
                        }
                        else {
                          pwVar18 = (wchar_t *)(pFVar23->Name).Data.AllocatorInstance.Data;
                          iVar8 = iVar8 + -1;
                        }
                        uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar18);
                        iVar8 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                                FindIndexByHash<FString>(pTVar4,uVar7,&pFVar23->Name);
                        if (iVar8 != -1) break;
                        lVar20 = local_1e0;
                        if (5 < (byte)LogPluginManager._0_1_) {
                          UE::Logging::Private::BasicLog<6>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
                          lVar20 = local_1e0;
                        }
                        goto LAB_141e17190;
                      }
                      bVar5 = FModuleDescriptor::IsLoadedInCurrentConfiguration(this_01);
                      if (bVar5) {
                        this = FModuleManager::Get();
                        local_1d8 = local_1d8 | 1;
                        pFVar13 = ::FName::ToString(&this_01->Name,&local_a8);
                        if ((pFVar13->Data).ArrayNum == 0) {
                          pwVar18 = L"";
                        }
                        else {
                          pwVar18 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
                        }
                        bVar5 = FModuleManager::ModuleExists(this,pwVar18,(FString *)0x0);
                        if (bVar5) goto LAB_141e16d7f;
                        bVar5 = true;
                      }
                      else {
LAB_141e16d7f:
                        bVar5 = false;
                      }
                      if (((local_1d8 & 1) != 0) &&
                         (local_1d8 = local_1d8 & 0xfffffffe,
                         local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                      }
                      if (bVar5) goto LAB_141e16db1;
                      this_01 = this_01 + 1;
                    } while( true );
                  }
                  iVar8 = (pFVar1->Descriptor).Plugins.ArrayNum;
                  pFVar23 = (FPluginReferenceDescriptor *)
                            (pFVar1->Descriptor).Plugins.AllocatorInstance.Data;
                  pFVar24 = pFVar23 + iVar8;
                  while( true ) {
                    if ((pFVar1->Descriptor).Plugins.ArrayNum != iVar8) {
                      local_1f6[0] = 0;
                      `TCheckedPointerIterator<FPluginReferenceDescriptor,int,0>::operator!='::__l2
                      ::<lambda_1>::operator()(local_1f6);
                    }
                    if (pFVar23 == pFVar24) break;
                    local_198 = DiscoveredPluginMapUtils::FindPluginInMap(this_00,&pFVar23->Name);
                    iVar15 = (pFVar23->Name).Data.ArrayNum;
                    local_150 = 0;
                    if (iVar15 == 0) {
                      pwVar18 = L"";
                      iVar15 = 0;
                    }
                    else {
                      pwVar18 = (wchar_t *)(pFVar23->Name).Data.AllocatorInstance.Data;
                      iVar15 = iVar15 + -1;
                    }
                    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar18);
                    iVar15 = TSet<TTuple<FString,FPluginReferenceDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FPluginReferenceDescriptor_const_*,0>,FDefaultSetAllocator>
                             ::FindIndexByHash<FString>(&local_98,uVar7,&pFVar23->Name);
                    if ((iVar15 == -1) ||
                       (lVar20 = (longlong)iVar15 * 0x20 + local_98.Elements._0_8_, lVar20 == 0)) {
                      local_c0 = &local_150;
                      local_c8 = pFVar23;
                      TSet<TTuple<FString,FPluginReferenceDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FPluginReferenceDescriptor_const_*,0>,FDefaultSetAllocator>
                      ::
                      EmplaceByHash<TPairInitializer<FString_const_&,FPluginReferenceDescriptor_const_*_&&>_>
                                (&local_98,(uint)local_1b8,
                                 (TPairInitializer<FString_const_&,FPluginReferenceDescriptor_const_*_&&>
                                  *)(ulonglong)uVar7,(bool *)&local_c8);
                      lVar20 = (longlong)local_1b8[0] * 0x20 + local_98.Elements._0_8_;
                    }
                    pFVar3 = local_1a0;
                    bVar5 = *(longlong *)(lVar20 + 0x10) == 0;
                    if (bVar5) {
                      *(FPluginReferenceDescriptor **)(lVar20 + 0x10) = local_1a0;
                    }
                    if (local_198 != (TSharedRef<FPlugin,1> *)0x0) {
                      if ((local_198->Object->Descriptor).bIsSealed != false) {
                        local_118.Code = PluginSealed;
                        local_118.ReferenceChain.AllocatorInstance.Data =
                             (FScriptContainerElement *)0x0;
                        local_118.ReferenceChain.ArrayNum = 0;
                        local_118.ReferenceChain.ArrayMax = 0;
                        local_118.PluginReference = pFVar23;
                        FConfigurePluginResultInfo::operator=(local_1b0,&local_118);
                        if (local_118.ReferenceChain.AllocatorInstance.Data !=
                            (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_118.ReferenceChain.AllocatorInstance.Data);
                        }
                        `FPluginManager::ConfigureEnabledPluginForTarget'::__l2::<lambda_1>::
                        operator()(&local_180,pFVar23);
                        bVar5 = false;
                        goto LAB_141e17284;
                      }
                      pFVar14 = TArray<FPluginDisallowedDescriptor,TSizedDefaultAllocator<32>_>::
                                FindByPredicate<_FPluginManager::ConfigureEnabledPluginForTarget_::__l307::<lambda_2>_>
                                          (&(pFVar1->Descriptor).DisallowedPlugins,
                                           (<lambda_2>)&local_198);
                      if (pFVar14 != (FPluginDisallowedDescriptor *)0x0) {
                        local_140._8_4_ = 2;
                        local_128 = (void *)0x0;
                        local_120 = 0;
                        local_130 = pFVar23;
                        FConfigurePluginResultInfo::operator=
                                  (local_1b0,(FConfigurePluginResultInfo *)(local_140 + 8));
                        if (local_128 != (void *)0x0) {
                          FMemory::Free(local_128);
                        }
                        *(FPluginReferenceDescriptor **)(lVar20 + 0x10) = pFVar3;
                        `FPluginManager::ConfigureEnabledPluginForTarget'::__l2::<lambda_1>::
                        operator()(&local_180,pFVar23);
                        bVar5 = false;
                        goto LAB_141e17284;
                      }
                    }
                    pTVar4 = local_190;
                    if ((pFVar23->bOptional == false) ||
                       (*(int *)&(local_190->Elements).field_0x8 ==
                        *(int *)&(local_190->Elements).field_0x34)) {
LAB_141e17027:
                      iVar15 = (pFVar23->Name).Data.ArrayNum;
                      if (iVar15 == 0) {
                        pwVar18 = L"";
                        iVar15 = 0;
                      }
                      else {
                        pwVar18 = (wchar_t *)(pFVar23->Name).Data.AllocatorInstance.Data;
                        iVar15 = iVar15 + -1;
                      }
                      uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar18);
                      iVar15 = TSet<TTuple<FString,FPlugin_*>,TDefaultMapHashableKeyFuncs<FString,FPlugin_*,0>,FDefaultSetAllocator>
                               ::FindIndexByHash<FString>(local_188,uVar7,&pFVar23->Name);
                      if ((iVar15 == -1) && (bVar5)) {
                        local_1c8 = pFVar23;
                        if ((local_1f0.Data <= (FScriptContainerElement *)&local_1c8) &&
                           (((FScriptContainerElement *)&local_1c8 <
                             local_1f0.Data + (longlong)local_1e8._4_4_ * 8 &&
                            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar5)))) {
                          pcVar2 = (code *)swi(3);
                          uVar6 = (*pcVar2)();
                          return (bool)uVar6;
                        }
                        iVar15 = (int)local_1e8;
                        if ((int)local_1e8 == local_1e8._4_4_) {
                          iVar15 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x808,&local_1f0,(int *)((longlong)&local_1e8 + 4));
                        }
                        local_1e8 = CONCAT44(local_1e8._4_4_,iVar15 + 1);
                        *(FPluginReferenceDescriptor **)(local_1f0.Data + (longlong)iVar15 * 8) =
                             local_1c8;
                      }
LAB_141e1710e:
                      pFVar23 = pFVar23 + 1;
                      this_00 = local_1c0;
                    }
                    else {
                      iVar15 = (pFVar23->Name).Data.ArrayNum;
                      if (iVar15 == 0) {
                        pwVar18 = L"";
                        iVar15 = 0;
                      }
                      else {
                        pwVar18 = (wchar_t *)(pFVar23->Name).Data.AllocatorInstance.Data;
                        iVar15 = iVar15 + -1;
                      }
                      uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar18);
                      iVar15 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                               FindIndexByHash<FString>(pTVar4,uVar7,&pFVar23->Name);
                      if (iVar15 != -1) goto LAB_141e17027;
                      if ((byte)LogPluginManager._0_1_ < 6) goto LAB_141e1710e;
                      UE::Logging::Private::BasicLog<6>
                                (&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
                      pFVar23 = pFVar23 + 1;
                      this_00 = local_1c0;
                    }
                  }
                  local_b8 = &pFVar1->Name;
                  local_148 = pFVar1;
                  local_b0 = &local_148;
                  TSet<TTuple<FString,FPlugin_*>,TDefaultMapHashableKeyFuncs<FString,FPlugin_*,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<FString_const_&,FPlugin_*_&&>_>
                            (local_188,(TPairInitializer<FString_const_&,FPlugin_*_&&> *)local_140,
                             (bool *)&local_b8);
                  lVar20 = local_1e0;
                }
              }
              else {
                lVar20 = local_1e0;
                if (5 < (byte)LogPluginManager._0_1_) {
                  UE::Logging::Private::BasicLog<6>
                            (&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
                  lVar20 = local_1e0;
                }
              }
            }
            else {
              lVar20 = local_1e0;
              if (5 < (byte)LogPluginManager._0_1_) {
                UE::Logging::Private::BasicLog<6>
                          (&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
                lVar20 = local_1e0;
              }
            }
            goto LAB_141e17190;
          }
          pTVar12 = TMapBase<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
                    ::Find((TMapBase<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
                            *)this_00,&pFVar23->Name);
          if ((pTVar12 == (TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("PluginVersions",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
                                 ,0x97c,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          iVar8 = pTVar12->ArrayNum;
          pTVar19 = (TSharedRef<FPlugin,1> *)(pTVar12->AllocatorInstance).Data;
          pTVar22 = pTVar19 + iVar8;
          while( true ) {
            if (pTVar12->ArrayNum != iVar8) {
              local_1f8 = 0;
              `TCheckedPointerIterator<TSharedRef<FPlugin,1>,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_1f8);
            }
            if (pTVar19 == pTVar22) {
              if (2 < (byte)LogPluginManager._0_1_) {
                if (((pFVar23->RequestedVersion).bIsSet == false) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsSet()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                       ,0x1bd,
                                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                      ), bVar5)) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
              }
              goto LAB_141e16b0b;
            }
            if (((pFVar23->RequestedVersion).bIsSet == false) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            this_00 = local_1c0;
            if ((pTVar19->Object->Descriptor).Version == (pFVar23->RequestedVersion).TypedValue)
            break;
            pTVar19 = pTVar19 + 1;
          }
          if ((pTVar19 == pTVar11) || (!pTVar11->Object->bEnabled)) {
            pTVar11 = DiscoveredPluginMapUtils::PromotePluginToOfferedVersion(local_1c0,pTVar19);
            param_4 = local_1a8;
            if (pTVar11 != (TSharedRef<FPlugin,1> *)0x0) goto LAB_141e16b5b;
          }
          else if (2 < (byte)LogPluginManager._0_1_) {
            if (((pFVar23->RequestedVersion).bIsSet == false) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
          }
        }
LAB_141e16b0b:
        if (pFVar23->bOptional != false) {
          lVar20 = local_1e0;
          if (5 < (byte)LogPluginManager._0_1_) {
            UE::Logging::Private::BasicLog<6>
                      ((FStaticBasicLogRecord *)&PTR_u_Ignored_optiona_1507b98e8,
                       (FLogCategoryBase *)&LogPluginManager);
            lVar20 = local_1e0;
          }
          goto LAB_141e17190;
        }
        local_f8.Code = PluginMissing;
        local_f8.ReferenceChain.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.ReferenceChain.ArrayNum = 0;
        local_f8.ReferenceChain.ArrayMax = 0;
        local_f8.PluginReference = pFVar23;
        FConfigurePluginResultInfo::operator=(local_1b0,&local_f8);
        if (local_f8.ReferenceChain.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.ReferenceChain.AllocatorInstance.Data);
        }
        `FPluginManager::ConfigureEnabledPluginForTarget'::__l2::<lambda_1>::operator()
                  (&local_180,pFVar23);
        bVar5 = false;
        goto LAB_141e17284;
      }
LAB_141e1687d:
      if (5 < (byte)LogPluginManager._0_1_) {
        pFVar17 = &::LOG_Static;
LAB_141e17184:
        UE::Logging::Private::BasicLog<6>(pFVar17,(FLogCategoryBase *)&LogPluginManager);
      }
      goto LAB_141e17190;
    }
LAB_141e17282:
    bVar5 = true;
LAB_141e17284:
    if (local_1f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data);
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FPluginReferenceDescriptor_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FPluginReferenceDescriptor_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
  }
  else {
    if ((((param_1->RequestedVersion).bIsSet != false) && (1 < (byte)LogPluginManager._0_1_)) &&
       (ppFVar9 = TMapBase<FString,FPlugin_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPlugin_*,0>_>
                  ::Find((TMapBase<FString,FPlugin_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPlugin_*,0>_>
                          *)param_9,&param_1->Name),
       ((*ppFVar9)->Descriptor).Version != (param_1->RequestedVersion).TypedValue)) {
      TMapBase<FString,FPlugin_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPlugin_*,0>_>
      ::Find((TMapBase<FString,FPlugin_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPlugin_*,0>_>
              *)param_9,&param_1->Name);
      if (((param_1->RequestedVersion).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
    }
    bVar5 = true;
  }
  return bVar5;
LAB_141e16db1:
  lVar20 = local_1e0;
  if (5 < (byte)LogPluginManager._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
    lVar20 = local_1e0;
  }
LAB_141e17190:
  local_1e0 = lVar20 + 1;
  local_1d4 = local_1d4 + 1;
  param_4 = local_1a8;
  if ((int)local_1e8 <= (int)local_1d4) goto LAB_141e17282;
  goto LAB_141e167af;
}

// ConfigureEnabledPlugins @ 141e172f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FPluginManager::ConfigureEnabledPlugins(FPluginManager *this)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FTextLocalizationManager *this_00;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStackY_1c8 [32];
  undefined4 uStack_18c;
  TArrayView<FString_const_,int> local_188;
  FScopedBootTiming local_178;
  undefined1 local_158 [32];
  void *local_138;
  undefined4 local_130;
  uint local_12c;
  undefined4 local_128;
  undefined4 local_124;
  void *local_118;
  undefined4 local_110;
  undefined1 local_108 [32];
  void *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  undefined1 local_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (*(int *)&(this->PluginsToConfigure).Elements.field_0x8 -
      *(int *)&(this->PluginsToConfigure).Elements.field_0x34 < 1) {
    this->bHaveAllRequiredPlugins = true;
  }
  else {
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2024,"FPluginManager::ConfigureEnabledPlugins",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
                 ,0x7e8);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2024);
    }
    FScopedBootTiming::FScopedBootTiming(&local_178,"FPluginManager::ConfigureEnabledPlugins");
    this->bHaveAllRequiredPlugins = false;
    local_158._0_8_ = (FScriptContainerElement *)0x0;
    local_158._8_8_ = 0;
    local_138 = (void *)0x0;
    local_130 = 0;
    local_124 = 0;
    local_118 = (void *)0x0;
    local_110 = 0;
    local_108._0_8_ = (FScriptContainerElement *)0x0;
    local_108._8_8_ = 0;
    local_e8 = (void *)0x0;
    local_e0 = 0;
    local_d4 = 0;
    local_c8 = (ForElementType<FSetElementId>)0x0;
    local_c0 = 0;
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8._0_8_ = (FScriptContainerElement *)0x0;
    local_a8._8_8_ = 0;
    local_88 = (void *)0x0;
    local_80 = 0;
    local_74 = 0;
    local_68 = (ForElementType<FSetElementId>)0x0;
    local_60 = 0;
    local_12c = 0x80;
    local_128 = 0xffffffff;
    local_dc = 0x80;
    local_d8 = 0xffffffff;
    local_7c = 0x80;
    local_78 = 0xffffffff;
    FindCompileTimePlugins(this,(FPluginDiscoveryContext *)local_158);
    bVar4 = FindCommandLinePlugins(this,(FPluginDiscoveryContext *)local_158);
    if ((!bVar4) || (bVar4 = FindTargetPlugins(this,(FPluginDiscoveryContext *)local_158), !bVar4))
    {
      local_60 = 0;
      if (local_68 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_68);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_a8,0,local_a8._8_4_);
      iVar2 = SUB84(local_a8._8_8_,4);
      local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
      }
      local_78 = 0xffffffff;
      local_74 = 0;
      local_80 = 0;
      if (0x80 < local_7c) {
        local_7c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_a8._0_8_);
      }
      DestructItems<FString,int>((FString *)local_b8.Data,(int)local_b0);
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data);
      }
      local_c0 = 0;
      if (local_c8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_c8);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_108,0,local_108._8_4_);
      iVar2 = SUB84(local_108._8_8_,4);
      local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
      }
      local_d8 = 0xffffffff;
      local_d4 = 0;
      local_e0 = 0;
      if (0x80 < local_dc) {
        local_dc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),0);
      }
      if (local_e8 != (void *)0x0) {
        FMemory::Free(local_e8);
      }
      if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_108._0_8_);
      }
      local_110 = 0;
      if (local_118 != (void *)0x0) {
        FMemory::Free(local_118);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FPlugin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FPlugin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_158,0,local_158._8_4_);
      iVar2 = SUB84(local_158._8_8_,4);
      local_158._8_8_ = local_158._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)local_158,0,(int *)(local_158 + 0xc));
      }
      local_128 = 0xffffffff;
      local_124 = 0;
      local_130 = 0;
      if (0x80 < local_12c) {
        local_12c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10),0);
      }
      if (local_138 != (void *)0x0) {
        FMemory::Free(local_138);
      }
      if ((FScriptContainerElement *)local_158._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_158._0_8_);
      }
      FScopedBootTiming::~FScopedBootTiming(&local_178);
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return false;
    }
    MarkEnabledPlugins(this,(FPluginDiscoveryContext *)local_158);
    this->bHaveAllRequiredPlugins = true;
    ProcessEnabledPlugins(this,(FPluginDiscoveryContext *)local_158);
    MountContentPlugins(this,(FPluginDiscoveryContext *)local_158);
    if (0 < (int)local_b0) {
      this_00 = FTextLocalizationManager::Get();
      local_188.DataPtr = (FString *)local_b8.Data;
      iVar2 = (int)local_b0;
      local_58._0_8_ = 0;
      local_30 = (longlong *)0x0;
      if (((int)local_b0 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      local_188._12_4_ = uStack_18c;
      local_188.ArrayNum = iVar2;
      FTextLocalizationManager::HandleLocalizationTargetsMounted
                (this_00,&local_188,(TUniqueFunction<void___cdecl(void)> *)local_58);
      if (local_58._0_8_ != 0) {
        plVar6 = (longlong *)(local_58 + 0x10);
        if (local_30 != (longlong *)0x0) {
          plVar6 = local_30;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    bVar4 = 1 < (this->PluginsToConfigure).HashSize;
    if (!bVar4) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements
                (&this->PluginsToConfigure);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&(this->PluginsToConfigure).Elements,0,
                      *(int *)&(this->PluginsToConfigure).Elements.field_0x8);
    puVar1 = &(this->PluginsToConfigure).Elements.field_0xc;
    *(undefined4 *)&(this->PluginsToConfigure).Elements.field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&this->PluginsToConfigure,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->PluginsToConfigure).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->PluginsToConfigure).Elements.field_0x34 = 0;
    iVar2 = *(int *)&(this->PluginsToConfigure).Elements.field_0x2c;
    *(undefined4 *)&(this->PluginsToConfigure).Elements.field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->PluginsToConfigure).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->PluginsToConfigure).Elements.field_0x10,0);
    }
    if (bVar4) {
      (this->PluginsToConfigure).HashSize = 1;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash
                (&this->PluginsToConfigure);
    }
    local_60 = 0;
    if (local_68 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_68);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_a8,0,local_a8._8_4_);
    iVar2 = SUB84(local_a8._8_8_,4);
    local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
    }
    local_78 = 0xffffffff;
    local_74 = 0;
    local_80 = 0;
    if (0x80 < local_7c) {
      local_7c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
    }
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    DestructItems<FString,int>((FString *)local_b8.Data,(int)local_b0);
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
    local_c0 = 0;
    if (local_c8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_c8);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_108,0,local_108._8_4_);
    iVar2 = SUB84(local_108._8_8_,4);
    local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
    }
    local_d8 = 0xffffffff;
    local_d4 = 0;
    local_e0 = 0;
    if (0x80 < local_dc) {
      local_dc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),0);
    }
    if (local_e8 != (void *)0x0) {
      FMemory::Free(local_e8);
    }
    if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_108._0_8_);
    }
    local_110 = 0;
    if (local_118 != (void *)0x0) {
      FMemory::Free(local_118);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FPlugin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FPlugin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_158,0,local_158._8_4_);
    iVar2 = SUB84(local_158._8_8_,4);
    local_158._8_8_ = local_158._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_158,0,(int *)(local_158 + 0xc));
    }
    local_128 = 0xffffffff;
    local_124 = 0;
    local_130 = 0;
    if (0x80 < local_12c) {
      local_12c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10),0);
    }
    if (local_138 != (void *)0x0) {
      FMemory::Free(local_138);
    }
    if ((FScriptContainerElement *)local_158._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_158._0_8_);
    }
    FScopedBootTiming::~FScopedBootTiming(&local_178);
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return this->bHaveAllRequiredPlugins;
}

// CreatePluginObject @ 141e18b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FPluginManager::CreatePluginObject
          (FString *param_1,FPluginDescriptor *param_2,EPluginType param_3,
          TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
          *param_4,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> *param_5)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPlugin *pFVar6;
  TSharedRef<FPlugin,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  TRawPtrProxy<FPlugin> local_48;
  TSharedRef<FPlugin,1> local_40;
  FString local_30;
  
  pFVar6 = ::operator_new(600);
  if (pFVar6 == (FPlugin *)0x0) {
    pFVar6 = (FPlugin *)0x0;
  }
  else {
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = (longlong)&___7FPlugin__6B_;
    FPaths::GetBaseFilename(&pFVar6->Name,param_1,true);
    ::FString::FString(&pFVar6->FileName,param_1);
    (pFVar6->PluginExtensionFileNameList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->PluginExtensionFileNameList).ArrayNum = 0;
    (pFVar6->PluginExtensionFileNameList).ArrayMax = 0;
    FPluginDescriptor::FPluginDescriptor(&pFVar6->Descriptor,param_2);
    pFVar6->bEnabled = false;
    pFVar6->bIsMounted = false;
    pFVar6->Type = param_3;
    pFVar6->ExplicitlyLoadedLocalizationDataMountedRefCount = '\0';
    if ((((pFVar6->_padding_ != 0) && (pFVar6->_padding_ != 0)) &&
        (0 < *(int *)(pFVar6->_padding_ + 8))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_48.Object = pFVar6;
  TSharedRef<FPlugin,1>::TSharedRef<FPlugin,1><FPlugin>(&local_40,&local_48);
  if (((local_40.Object)->Descriptor).bIsPluginExtension != false) {
    pTVar7 = (TSharedRef<FPlugin,1> *)(param_5->AllocatorInstance).Data;
    if (((pTVar7 <= &local_40) && (&local_40 < pTVar7 + param_5->ArrayMax)) &&
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
    iVar5 = param_5->ArrayNum;
    if (iVar5 == param_5->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_5->AllocatorInstance,&param_5->ArrayMax);
    }
    pFVar8 = (param_5->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    param_5->ArrayNum = iVar5 + 1;
    *(FPlugin **)pFVar8 = local_40.Object;
    *(TReferenceControllerBase<1> **)(pFVar8 + 8) =
         local_40.SharedReferenceCount.ReferenceController;
    if (local_40.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_40.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    goto LAB_141e18fa2;
  }
  FPaths::ConvertRelativePathToFull(&local_30,param_1);
  if (5 < (byte)LogPluginManager._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
  }
  pTVar7 = DiscoveredPluginMapUtils::FindPluginInMap(param_4,&(local_40.Object)->Name);
  if (pTVar7 == (TSharedRef<FPlugin,1> *)0x0) {
    DiscoveredPluginMapUtils::InsertPluginIntoMap
              (param_4,&(local_40.Object)->Name,&local_40,AsOfferedPlugin);
  }
  else {
    pFVar6 = pTVar7->Object;
    if (((pFVar6->Type != Engine) || (param_3 != Project)) || (pFVar6->bEnabled)) {
      iVar5 = (pFVar6->FileName).Data.ArrayNum;
      iVar2 = ((local_40.Object)->FileName).Data.ArrayNum;
      if (iVar5 == iVar2) {
        if (iVar5 < 2) goto LAB_141e18f94;
        iVar5 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar6->FileName).Data.AllocatorInstance.Data,
                           (wchar_t *)((local_40.Object)->FileName).Data.AllocatorInstance.Data);
        bVar4 = iVar5 == 0;
      }
      else {
        bVar4 = iVar2 + iVar5 == 1;
      }
      if (!bVar4) {
        pFVar6 = pTVar7->Object;
        if (pFVar6->bEnabled) {
          if (3 < (byte)LogPluginManager._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
          }
        }
        else {
          if ((pFVar6->Type != Project) || (param_3 != Engine)) {
            iVar5 = (pFVar6->Descriptor).Version;
            if (iVar5 == param_2->Version) {
              if (2 < (byte)LogPluginManager._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
              }
            }
            else {
              if (3 < (byte)LogPluginManager._0_1_) {
                UE::Logging::Private::BasicLog<4>
                          (&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
              }
              DiscoveredPluginMapUtils::InsertPluginIntoMap
                        (param_4,&(local_40.Object)->Name,&local_40,
                         (uint)(param_2->Version <= iVar5));
            }
            goto LAB_141e18f94;
          }
          if (3 < (byte)LogPluginManager._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
          }
        }
        DiscoveredPluginMapUtils::InsertPluginIntoMap
                  (param_4,&(local_40.Object)->Name,&local_40,AsSuppressedPlugin);
      }
    }
    else {
      if (3 < (byte)LogPluginManager._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
      }
      DiscoveredPluginMapUtils::InsertPluginIntoMap
                (param_4,&(local_40.Object)->Name,&local_40,AsOfferedPlugin);
    }
  }
LAB_141e18f94:
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
LAB_141e18fa2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  return;
}

// DiscoverAllPlugins @ 141e19b30

void __thiscall FPluginManager::DiscoverAllPlugins(FPluginManager *this)

{
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  TSet<FExternalPluginPath,DefaultKeyFuncs<FExternalPluginPath,0>,FDefaultSetAllocator> *this_00;
  void *_Src;
  code *pcVar4;
  TSet<FExternalPluginPath,DefaultKeyFuncs<FExternalPluginPath,0>,FDefaultSetAllocator> *pTVar5;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined4 uStack_124;
  uint local_120;
  ForAnyElementType local_118;
  int local_110;
  int local_10c [3];
  int local_100;
  int local_fc;
  undefined1 local_f8 [16];
  TSet<FExternalPluginPath,DefaultKeyFuncs<FExternalPluginPath,0>,FDefaultSetAllocator> *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined4 local_6c;
  undefined4 local_4c;
  
  if ((*(int *)&(this->AllPlugins).field_0x8 != *(int *)&(this->AllPlugins).field_0x34) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8987629764537744660>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
                         ,0x2ec,"AllPlugins.Num() == 0"), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = &this->ExternalPluginSources;
  PluginSystemDefs::GetCmdLinePluginPaths(this_00);
  uVar17 = 0;
  puVar15 = (undefined8 *)0x0;
  for (puVar13 = puVar15; puVar13 != (undefined8 *)0x0; puVar13 = puVar13 + 2) {
    local_110 = *(int *)(puVar13 + 1);
    lVar16 = (longlong)local_110;
    _Src = (void *)*puVar13;
    local_118.Data = (FScriptContainerElement *)0x0;
    if (local_110 == 0) {
      local_10c[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_110,0,&local_118,local_110,local_10c);
      memcpy(local_118.Data,_Src,lVar16 * 2);
    }
    local_10c[1] = 2;
    TSet<FExternalPluginPath,DefaultKeyFuncs<FExternalPluginPath,0>,FDefaultSetAllocator>::
    Emplace<FExternalPluginPath>
              (this_00,(FExternalPluginPath *)(local_res18 + 8),(bool *)&local_118);
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
    }
  }
  DestructItems<FString,int>((FString *)0x0,0);
  puVar2 = &(this->ExternalPluginSources).Elements.field_0x10;
  iVar12 = *(int *)&(this->ExternalPluginSources).Elements.field_0x28;
  local_120 = 1;
  uVar19 = 0;
  iVar14 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar12 != 0) {
    puVar20 = *(uint **)&(this->ExternalPluginSources).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar2;
    }
    uVar8 = *puVar20;
    puVar13 = puVar15;
    uVar19 = 0;
    uVar17 = 0;
    while (uVar8 == 0) {
      iVar14 = (int)puVar15;
      uVar19 = (int)puVar13 + 0x20;
      puVar13 = (undefined8 *)(ulonglong)uVar19;
      uVar17 = iVar14 + 1;
      puVar15 = (undefined8 *)(ulonglong)uVar17;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar17) {
        iVar14 = *(int *)&(this->ExternalPluginSources).Elements.field_0x28;
        uVar8 = 1;
        iVar9 = iVar12;
        goto LAB_141e19cc4;
      }
      uVar8 = puVar20[(longlong)iVar14 + 1];
    }
    iVar14 = *(int *)&(this->ExternalPluginSources).Elements.field_0x28;
    uVar8 = -uVar8 & uVar8;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_100 = (int)lVar16;
    iVar9 = (uVar19 - 1) + local_100;
    if (iVar14 < iVar9) {
      iVar9 = iVar12;
    }
  }
LAB_141e19cc4:
  uVar10 = *(uint *)&(this->ExternalPluginSources).Elements.field_0x28;
  uVar21 = uVar10 & 0xffffffe0;
  TStack_e0._padding_ = CONCAT44(uVar8,uVar17);
  TStack_e0.CurrentBitIndex = iVar9;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar10 >> 5;
  TStack_e0._28_4_ = local_6c;
  TStack_e0.BaseBitIndex = uVar19;
  uStack_c0 = CONCAT44(uStack_124,
                       *(int *)&(this->ExternalPluginSources).Elements.field_0x8 -
                       *(int *)&(this->ExternalPluginSources).Elements.field_0x34);
  local_e8 = this_00;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar10 < 0) || (iVar14 < (int)uVar10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar17 = *(uint *)&(this->ExternalPluginSources).Elements.field_0x28;
  if (uVar10 != uVar17) {
    puVar18 = *(undefined1 **)&(this->ExternalPluginSources).Elements.field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar2;
    }
    uVar8 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar12 * 4);
    while (uVar8 == 0) {
      lVar16 = (longlong)iVar12;
      uVar21 = uVar21 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_141e19df0;
      uVar8 = *(uint *)(puVar18 + lVar16 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_fc = (int)lVar16;
    uVar10 = local_fc + -1 + uVar21;
    if ((int)uVar17 < (int)uVar10) {
      uVar10 = uVar17;
    }
  }
LAB_141e19df0:
  while( true ) {
    pTVar5 = local_e8;
    if (*(int *)&(local_e8->Elements).field_0x8 - *(int *)&(local_e8->Elements).field_0x34 !=
        (int)uStack_c0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<FExternalPluginPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_e0.CurrentBitIndex == uVar10) &&
        (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar5 == this_00))
    break;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&this->PluginDiscoveryPaths,(FString *)local_f8,
               (bool *)((longlong)TStack_e0.CurrentBitIndex * 0x20 + *(longlong *)&pTVar5->Elements)
              );
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  }
  pTVar1 = &this->AllPlugins;
  ReadAllPlugins(pTVar1,&this->PluginDiscoveryPaths,
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Reserve
            (&this->PluginsToConfigure,
             *(int *)&(this->AllPlugins).field_0x8 - *(int *)&(this->AllPlugins).field_0x34);
  iVar12 = *(int *)&(this->AllPlugins).field_0x28;
  puVar2 = &(this->AllPlugins).field_0x10;
  iVar14 = 0;
  iVar9 = 0;
  iVar11 = 0;
  if (iVar12 != 0) {
    puVar20 = *(uint **)&(this->AllPlugins).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar2;
    }
    uVar17 = *puVar20;
    while (uVar17 == 0) {
      lVar16 = (longlong)iVar14;
      iVar9 = iVar9 + 0x20;
      iVar14 = iVar14 + 1;
      iVar11 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_141e19f00;
      uVar17 = puVar20[lVar16 + 1];
    }
    local_120 = -uVar17 & uVar17;
    uVar3 = (ulonglong)local_120 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_f8._4_4_ = (undefined4)lVar16;
    iVar11 = iVar9 + -1 + local_f8._4_4_;
    if (iVar12 < iVar11) {
      iVar11 = iVar12;
    }
  }
LAB_141e19f00:
  uVar17 = *(uint *)&(this->AllPlugins).field_0x28;
  TStack_b0._padding_ = CONCAT44(local_120,iVar14);
  uVar8 = uVar17 & 0xffffffe0;
  TStack_b0.CurrentBitIndex = iVar11;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_b0._28_4_ = local_4c;
  TStack_b0.BaseBitIndex = iVar9;
  uStack_90 = CONCAT44(uStack_124,
                       *(int *)&(this->AllPlugins).field_0x8 -
                       *(int *)&(this->AllPlugins).field_0x34);
  local_b8 = pTVar1;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar17 < 0) || (iVar12 < (int)uVar17)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar19 = *(uint *)&(this->AllPlugins).field_0x28;
  if (uVar17 != uVar19) {
    puVar18 = *(undefined1 **)&(this->AllPlugins).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar2;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar16 = (longlong)iVar14;
      uVar8 = uVar8 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_141e1a000;
      uVar17 = *(uint *)(puVar18 + lVar16 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar17 = (int)lVar16 + -1 + uVar8;
    if ((int)uVar19 < (int)uVar17) {
      uVar17 = uVar19;
    }
  }
LAB_141e1a000:
  while( true ) {
    pTVar6 = local_b8;
    if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_b0.CurrentBitIndex == uVar17) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == pTVar1))
    break;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&this->PluginsToConfigure,(FString *)(local_f8 + 8),
               (bool *)(*(longlong *)pTVar6 + (longlong)TStack_b0.CurrentBitIndex * 0x28));
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  return;
}

// EnumerateVersePathMountPoints @ 141e1a670

void __thiscall
FPluginManager::EnumerateVersePathMountPoints
          (FPluginManager *this,FVersePath *param_1,
          TFunctionRef<bool___cdecl(TStringView<wchar_t>,TStringView<wchar_t>)> *param_2)

{
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  char cVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res10 [8];
  TFunctionRef<bool___cdecl(TStringView<wchar_t>,TStringView<wchar_t>)> *local_res18;
  int local_res20;
  FString local_118;
  FVersePath local_108;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  int local_c8;
  TStringView<wchar_t> local_c0;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  wchar_t *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  
  if ((param_1->PathString).Data.ArrayNum < 2) {
    return;
  }
  iVar13 = *(int *)&(this->AllPlugins).field_0x28;
  iStack_f0 = 0;
  local_d8 = 0;
  uStack_ec = 1;
  pTVar1 = &this->AllPlugins;
  puVar2 = &(this->AllPlugins).field_0x10;
  iStack_dc = 0;
  if (iVar13 != 0) {
    puVar19 = *(uint **)&(this->AllPlugins).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar2;
    }
    uVar17 = *puVar19;
    while (uVar17 == 0) {
      lVar11 = (longlong)iStack_f0;
      local_d8 = local_d8 + 0x20;
      iStack_f0 = iStack_f0 + 1;
      iStack_dc = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0) goto LAB_141e1a72d;
      uVar17 = puVar19[lVar11 + 1];
    }
    uStack_ec = -uVar17 & uVar17;
    uVar3 = (ulonglong)uStack_ec * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iStack_dc = local_res20 + -1 + local_d8;
    if (iVar13 < iStack_dc) {
      iStack_dc = iVar13;
    }
  }
LAB_141e1a72d:
  iStack_d0 = *(int *)&(this->AllPlugins).field_0x8 - *(int *)&(this->AllPlugins).field_0x34;
  uVar17 = *(uint *)&(this->AllPlugins).field_0x28;
  uStack_e0 = 0xffffffff;
  uVar16 = uVar17 & 0xffffffe0;
  TStack_a8._padding_ = CONCAT44(uStack_ec,iStack_f0);
  TStack_a8.CurrentBitIndex = iStack_dc;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_a8._28_4_ = iStack_dc;
  TStack_a8.BaseBitIndex = local_d8;
  uStack_88 = CONCAT44(uStack_cc,iStack_d0);
  local_res18 = param_2;
  local_f8 = pTVar1;
  local_e8 = puVar2;
  iStack_d4 = iStack_dc;
  local_b0 = pTVar1;
  TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar17 < 0) || (iVar13 < (int)uVar17)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar12 = *(uint *)&(this->AllPlugins).field_0x28;
  if (uVar17 != uVar12) {
    puVar18 = *(undefined1 **)&(this->AllPlugins).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar2;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_141e1a830;
      uVar17 = *(uint *)(puVar18 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_c8 = (int)lVar11;
    uVar17 = local_c8 + -1 + uVar16;
    if ((int)uVar12 < (int)uVar17) {
      uVar17 = uVar12;
    }
  }
LAB_141e1a830:
  while( true ) {
    pTVar7 = local_b0;
    if (*(int *)&local_b0->field_0x8 - *(int *)&local_b0->field_0x34 != (int)uStack_88) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_a8.CurrentBitIndex == uVar17) &&
        (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar7 == pTVar1))
    {
      return;
    }
    lVar11 = *(longlong *)pTVar7;
    iVar13 = *(int *)(lVar11 + 0x18 + (longlong)TStack_a8.CurrentBitIndex * 0x28);
    lVar11 = lVar11 + (longlong)TStack_a8.CurrentBitIndex * 0x28;
    uVar12 = iVar13 - 1;
    uVar16 = 0;
    if ((int)uVar12 < iVar13) {
      uVar16 = ~uVar12 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) break;
    lVar15 = *(longlong *)(lVar11 + 0x10) + (longlong)*(int *)(lVar11 + 0x18) * 0x10;
    lVar11 = *(longlong *)(lVar15 + -0x10);
    if (((*(byte *)(lVar11 + 0x254) & 2) != 0) && (1 < *(int *)(lVar11 + 0x158))) {
      local_108.PathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.PathString.Data.ArrayNum = 0;
      local_108.PathString.Data.ArrayMax = 0;
      bVar9 = UE::Core::FVersePath::TryMake(&local_108,(FString *)(lVar11 + 0x150),(FText *)0x0);
      if (bVar9) {
        local_c0.DataPtr = (wchar_t *)0x0;
        local_c0.Size = 0;
        bVar9 = UE::Core::FVersePath::IsBaseOf(&local_108,param_1,&local_c0);
        pwVar6 = local_c0.DataPtr;
        if (bVar9) {
          lVar11 = *(longlong *)(lVar15 + -0x10);
          uVar5 = CONCAT44(local_c0._12_4_,local_c0.Size);
          local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_118.Data.ArrayNum = 0;
          local_118.Data.ArrayMax = 0;
          iVar13 = *(int *)(lVar11 + 0x20) + 1;
          if (*(int *)(lVar11 + 0x20) == 0) {
            iVar13 = 2;
          }
          ::FString::Reserve(&local_118,iVar13);
          ::FString::AppendChar(&local_118,L'/');
          iVar13 = *(int *)(lVar11 + 0x20) + -1;
          if (*(int *)(lVar11 + 0x20) == 0) {
            iVar13 = 0;
          }
          ::FString::AppendChars(&local_118,*(wchar_t **)(lVar11 + 0x18),iVar13);
          ::FString::AppendChar(&local_118,L'/');
          local_78 = local_118.Data.AllocatorInstance.Data;
          pFVar8 = local_78;
          local_68 = pwVar6;
          iStack_70 = local_118.Data.ArrayNum + -1;
          if (local_118.Data.ArrayNum == 0) {
            iStack_70 = 0;
          }
          local_78._0_4_ = SUB84(local_118.Data.AllocatorInstance.Data,0);
          local_78._4_4_ = (undefined4)((ulonglong)local_118.Data.AllocatorInstance.Data >> 0x20);
          local_58 = (undefined4)local_78;
          uStack_54 = local_78._4_4_;
          uStack_4c = uStack_6c;
          local_78 = pFVar8;
          uStack_60 = uVar5;
          iStack_50 = iStack_70;
          cVar10 = (**(code **)local_res18)
                             (*(undefined8 *)&local_res18->field_0x8,&local_58,&local_68);
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          if (cVar10 == '\0') {
            if (local_108.PathString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
            {
              return;
            }
            FMemory::Free(local_108.PathString.Data.AllocatorInstance.Data);
            return;
          }
        }
      }
      if (local_108.PathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.PathString.Data.AllocatorInstance.Data);
      }
    }
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// FindCommandLinePlugins @ 141e1da50

bool __thiscall
FPluginManager::FindCommandLinePlugins(FPluginManager *this,FPluginDiscoveryContext *param_1)

{
  ulonglong uVar1;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  int iVar2;
  FPlugin *pFVar3;
  void *_Src;
  longlong lVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  wchar_t *pwVar10;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar11;
  TSharedRef<FPlugin,1> *pTVar12;
  FString *pFVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  TReferenceControllerBase<1> *pTVar18;
  FScriptContainerElement *pFVar19;
  bool bVar20;
  FString local_res18;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1c8;
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  FScriptContainerElement *local_1a8;
  FScriptContainerElement *local_1a0;
  FPluginReferenceDescriptor local_198;
  TStringView<wchar_t> local_d8;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  int iStack_bc;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FString local_a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FScopedBootTiming local_78;
  TArray<FString,TSizedDefaultAllocator<32>_> local_60 [2];
  
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1462,"ParseCmdLineForPlugins",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
               ,0x5b6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1462);
  }
  FScopedBootTiming::FScopedBootTiming(&local_78,"ParseCmdLineForPlugins");
  local_1b0 = (undefined1  [8])this;
  pwVar10 = FCommandLine::Get();
  bVar6 = FParse::Param(pwVar10,L"EnableAllPlugins");
  pFVar15 = (FScriptContainerElement *)0x0;
  this->bAllPluginsEnabledViaCommandLine = bVar6;
  local_1a8 = (FScriptContainerElement *)0x0;
  local_res18.Data.ArrayNum = 0;
  if (bVar6) {
    pTVar11 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Array
                        (&this->PluginsToConfigure,&local_1c8);
  }
  else {
    pTVar11 = `FPluginManager::FindCommandLinePlugins'::__l2::<lambda_1>::operator()
                        (local_1b0,&local_1c8,L"EnablePlugins=");
  }
  pFVar16 = pFVar15;
  if (&local_98 != pTVar11) {
    DestructItems<FString,int>((FString *)0x0,0);
    pFVar16 = (pTVar11->AllocatorInstance).Data;
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_res18.Data.ArrayNum = pTVar11->ArrayNum;
    pFVar15 = (FScriptContainerElement *)(ulonglong)(uint)local_res18.Data.ArrayNum;
    pTVar11->ArrayNum = 0;
    pTVar11->ArrayMax = 0;
    local_1a8 = pFVar16;
  }
  DestructItems<FString,int>((FString *)local_1c8.AllocatorInstance.Data,local_1c8.ArrayNum);
  if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.AllocatorInstance.Data);
  }
  iVar9 = (int)pFVar15;
  if (0 < iVar9) {
    this_00 = &param_1->AllowedOptionalDependencies;
    uVar7 = *(int *)&(param_1->AllowedOptionalDependencies).Elements.field_0x8 -
            *(int *)&(param_1->AllowedOptionalDependencies).Elements.field_0x34;
    uVar14 = uVar7 + iVar9;
    if (uVar7 < uVar14) {
      if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
      }
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,uVar14);
      if (uVar14 < 4) {
        iVar8 = 1;
      }
      else {
        uVar1 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar8 = 1 << ((byte)lVar4 & 0x1f);
      }
      iVar2 = (param_1->AllowedOptionalDependencies).HashSize;
      if ((iVar2 == 0) || (iVar2 < iVar8)) {
        (param_1->AllowedOptionalDependencies).HashSize = iVar8;
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(this_00);
      }
    }
    pFVar15 = pFVar16 + (longlong)iVar9 * 0x10;
    for (; pFVar16 != pFVar15; pFVar16 = pFVar16 + 0x10) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (this_00,&local_res18,(bool *)pFVar16);
    }
    `FPluginManager::FindCommandLinePlugins'::__l2::<lambda_1>::operator()
              (local_1b0,&local_1c8,L"ExceptPlugins=");
    pwVar10 = FCommandLine::Get();
    local_res18.Data.AllocatorInstance.Data._0_1_ =
         FParse::Param(pwVar10,L"ExceptRestrictedPlugins");
    uVar5 = local_d8._12_4_;
    local_1a0 = local_1a8 + (longlong)local_res18.Data.ArrayNum * 0x10;
    pFVar15 = local_1a8;
    while (pFVar15 != local_1a0) {
      iVar9 = *(int *)(pFVar15 + 8) + -1;
      if (*(int *)(pFVar15 + 8) == 0) {
        pwVar10 = L"";
        iVar9 = 0;
      }
      else {
        pwVar10 = *(wchar_t **)&pFVar15->field_0x0;
      }
      uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
      iVar9 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>(&param_1->ConfiguredPluginNames,uVar7,(FString *)pFVar15);
      if (iVar9 == -1) {
        pFVar16 = local_1c8.AllocatorInstance.Data + (longlong)local_1c8.ArrayNum * 0x10;
        for (FVar17.Data = local_1c8.AllocatorInstance.Data; FVar17.Data != pFVar16;
            FVar17.Data = FVar17.Data + 0x10) {
          iVar9 = *(int *)(FVar17.Data + 8);
          if (iVar9 == *(int *)(pFVar15 + 8)) {
            if (iVar9 < 2) goto LAB_141e1dd8a;
            iVar9 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)FVar17.Data,*(wchar_t **)&pFVar15->field_0x0);
            bVar6 = iVar9 == 0;
          }
          else {
            bVar6 = iVar9 + *(int *)(pFVar15 + 8) == 1;
          }
          if (bVar6) goto LAB_141e1dd8a;
        }
        if ((char)local_res18.Data.AllocatorInstance.Data != '\0') {
          local_d8.DataPtr = *(wchar_t **)&pFVar15->field_0x0;
          iStack_c0 = *(int *)(pFVar15 + 8) + -1;
          if (*(int *)(pFVar15 + 8) == 0) {
            iStack_c0 = 0;
          }
          local_d8._12_4_ = iStack_bc;
          local_d8.Size = iStack_c0;
          local_c8 = (FScriptContainerElement *)local_d8.DataPtr;
          uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iStack_c0,local_d8.DataPtr);
          pTVar12 = DiscoveredPluginMapUtils::FindPluginInMap_ByHash<TStringView<wchar_t>_>
                              (&this->AllPlugins,uVar7,&local_d8);
          if (pTVar12 == (TSharedRef<FPlugin,1> *)0x0) {
            pTVar18 = (TReferenceControllerBase<1> *)0x0;
          }
          else {
            pTVar18 = (pTVar12->SharedReferenceCount).ReferenceController;
            pFVar3 = pTVar12->Object;
            if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (pFVar3 != (FPlugin *)0x0) {
              (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3,&local_a8);
              iVar9 = ::FString::Find(&local_a8,L"/Restricted/",0xc,IgnoreCase,FromStart,-1);
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar18);
              if (iVar9 != -1) goto LAB_141e1dd8a;
              goto LAB_141e1de00;
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar18);
          goto LAB_141e1dd8a;
        }
LAB_141e1de00:
        local_b8 = (FScriptContainerElement *)0x1507b8550;
        bVar6 = this->bAllPluginsEnabledViaCommandLine == false;
        if (bVar6) {
          local_b8 = (FScriptContainerElement *)0x1507b8590;
        }
        iStack_b0 = 0x1c;
        if (bVar6) {
          iStack_b0 = 0x1a;
        }
        uStack_ac = uVar5;
        pFVar13 = ::FString::FString(&local_88,(FString *)pFVar15);
        local_198.Name.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
        (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.Name.Data.ArrayNum = (pFVar13->Data).ArrayNum;
        local_198.Name.Data.ArrayMax = (pFVar13->Data).ArrayMax;
        (pFVar13->Data).ArrayNum = 0;
        (pFVar13->Data).ArrayMax = 0;
        local_198.bEnabled = true;
        local_198.bOptional = false;
        local_198.bActivate = false;
        local_198.Description.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.Description.Data.ArrayNum = 0;
        local_198.Description.Data.ArrayMax = 0;
        local_198.MarketplaceURL.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.MarketplaceURL.Data.ArrayNum = 0;
        local_198.MarketplaceURL.Data.ArrayMax = 0;
        local_198.PlatformAllowList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.PlatformAllowList.ArrayNum = 0;
        local_198.PlatformAllowList.ArrayMax = 0;
        local_198.PlatformDenyList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.PlatformDenyList.ArrayNum = 0;
        local_198.PlatformDenyList.ArrayMax = 0;
        local_198.TargetConfigurationAllowList.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_198.TargetConfigurationAllowList.ArrayNum = 0;
        local_198.TargetConfigurationAllowList.ArrayMax = 0;
        local_198.TargetConfigurationDenyList.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_198.TargetConfigurationDenyList.ArrayNum = 0;
        local_198.TargetConfigurationDenyList.ArrayMax = 0;
        local_198.TargetAllowList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.TargetAllowList.ArrayNum = 0;
        local_198.TargetAllowList.ArrayMax = 0;
        local_198.TargetDenyList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.TargetDenyList.ArrayNum = 0;
        local_198.TargetDenyList.ArrayMax = 0;
        local_198.SupportedTargetPlatforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.SupportedTargetPlatforms.ArrayNum = 0;
        local_198.SupportedTargetPlatforms.ArrayMax = 0;
        local_198.bHasExplicitPlatforms = false;
        local_198.RequestedVersion.bIsSet = false;
        pFVar16 = (pFVar13->Data).AllocatorInstance.Data;
        if (pFVar16 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar16);
        }
        local_d8._12_4_ = uStack_ac;
        local_d8.Size = iStack_b0;
        local_d8.DataPtr = (wchar_t *)local_b8;
        bVar6 = ConfigureEnabledPluginForCurrentTarget
                          (this,&local_198,&param_1->EnabledPlugins,&local_d8,this_00);
        DestructItems<FString,int>
                  ((FString *)local_198.SupportedTargetPlatforms.AllocatorInstance.Data,
                   local_198.SupportedTargetPlatforms.ArrayNum);
        if (local_198.SupportedTargetPlatforms.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.SupportedTargetPlatforms.AllocatorInstance.Data);
        }
        if (local_198.TargetDenyList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.TargetDenyList.AllocatorInstance.Data);
        }
        if (local_198.TargetAllowList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.TargetAllowList.AllocatorInstance.Data);
        }
        if (local_198.TargetConfigurationDenyList.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.TargetConfigurationDenyList.AllocatorInstance.Data);
        }
        if (local_198.TargetConfigurationAllowList.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.TargetConfigurationAllowList.AllocatorInstance.Data);
        }
        DestructItems<FString,int>
                  ((FString *)local_198.PlatformDenyList.AllocatorInstance.Data,
                   local_198.PlatformDenyList.ArrayNum);
        if (local_198.PlatformDenyList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.PlatformDenyList.AllocatorInstance.Data);
        }
        DestructItems<FString,int>
                  ((FString *)local_198.PlatformAllowList.AllocatorInstance.Data,
                   local_198.PlatformAllowList.ArrayNum);
        if (local_198.PlatformAllowList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.PlatformAllowList.AllocatorInstance.Data);
        }
        if (local_198.MarketplaceURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_198.MarketplaceURL.Data.AllocatorInstance.Data);
        }
        if (local_198.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Description.Data.AllocatorInstance.Data);
        }
        if (local_198.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Name.Data.AllocatorInstance.Data);
        }
        if (!bVar6) {
          if (this->bAllPluginsEnabledViaCommandLine != false) goto LAB_141e1dd8a;
          DestructItems<FString,int>((FString *)local_1c8.AllocatorInstance.Data,local_1c8.ArrayNum)
          ;
          if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.AllocatorInstance.Data);
          }
          bVar6 = false;
          goto LAB_141e1e36f;
        }
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (&param_1->ConfiguredPluginNames,(FString *)local_1b8,(bool *)pFVar15);
        pFVar15 = pFVar15 + 0x10;
      }
      else {
LAB_141e1dd8a:
        pFVar15 = pFVar15 + 0x10;
      }
    }
    DestructItems<FString,int>((FString *)local_1c8.AllocatorInstance.Data,local_1c8.ArrayNum);
    if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.AllocatorInstance.Data);
    }
  }
  pFVar15 = (FScriptContainerElement *)0x0;
  local_1a0 = (FScriptContainerElement *)0x0;
  pTVar11 = `FPluginManager::FindCommandLinePlugins'::__l2::<lambda_1>::operator()
                      (local_1b0,&local_1c8,L"DisablePlugins=");
  local_1b8._0_4_ = 0;
  pFVar16 = pFVar15;
  if (local_60 != pTVar11) {
    DestructItems<FString,int>((FString *)0x0,0);
    pFVar15 = (pTVar11->AllocatorInstance).Data;
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_1b8._0_4_ = pTVar11->ArrayNum;
    pFVar16 = (FScriptContainerElement *)(ulonglong)(uint)local_1b8._0_4_;
    pTVar11->ArrayNum = 0;
    pTVar11->ArrayMax = 0;
    local_1a0 = pFVar15;
  }
  uVar5 = local_1b8._0_4_;
  DestructItems<FString,int>((FString *)local_1c8.AllocatorInstance.Data,local_1c8.ArrayNum);
  if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.AllocatorInstance.Data);
  }
  pFVar19 = pFVar15 + (longlong)(int)pFVar16 * 0x10;
  local_b8 = pFVar19;
  do {
    if (uVar5 != (uint)pFVar16) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res18);
    }
    if (pFVar15 == pFVar19) {
      bVar6 = true;
      goto LAB_141e1e352;
    }
    iVar9 = *(int *)(pFVar15 + 8) + -1;
    if (*(int *)(pFVar15 + 8) == 0) {
      pwVar10 = L"";
      iVar9 = 0;
    }
    else {
      pwVar10 = *(wchar_t **)&pFVar15->field_0x0;
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
    iVar9 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (&param_1->ConfiguredPluginNames,uVar7,(FString *)pFVar15);
    if (iVar9 == -1) {
      iVar9 = *(int *)(pFVar15 + 8);
      _Src = *(void **)&pFVar15->field_0x0;
      local_c8 = (FScriptContainerElement *)0x1507b85e8;
      iStack_c0 = 0x1b;
      iStack_bc = local_88.Data.ArrayMax;
      local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar9 == 0) {
        local_198.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.Name.Data.ArrayMax = 0;
        local_198.Name.Data.ArrayNum = iVar9;
      }
      else {
        local_1c8.ArrayNum = iVar9;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar9,0,&local_1c8.AllocatorInstance,iVar9,&local_1c8.ArrayMax);
        memcpy(local_1c8.AllocatorInstance.Data,_Src,(longlong)iVar9 * 2);
        local_198.Name.Data.AllocatorInstance.Data = local_1c8.AllocatorInstance.Data;
        local_198.Name.Data.ArrayMax = local_1c8.ArrayMax;
        local_198.Name.Data.ArrayNum = local_1c8.ArrayNum;
      }
      local_d8._12_4_ = iStack_bc;
      local_d8.Size = iStack_c0;
      local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.Description.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.MarketplaceURL.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.PlatformAllowList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.PlatformDenyList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.TargetConfigurationAllowList.AllocatorInstance.Data = (FScriptContainerElement *)0x0
      ;
      local_198.TargetConfigurationDenyList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.TargetAllowList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.TargetDenyList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.SupportedTargetPlatforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.ArrayNum = 0;
      local_1c8.ArrayMax = 0;
      local_198.bEnabled = false;
      local_198.bOptional = false;
      local_198.bActivate = false;
      local_198.Description.Data.ArrayNum = 0;
      local_198.Description.Data.ArrayMax = 0;
      local_198.MarketplaceURL.Data.ArrayNum = 0;
      local_198.MarketplaceURL.Data.ArrayMax = 0;
      local_198.PlatformAllowList.ArrayNum = 0;
      local_198.PlatformAllowList.ArrayMax = 0;
      local_198.PlatformDenyList.ArrayNum = 0;
      local_198.PlatformDenyList.ArrayMax = 0;
      local_198.TargetConfigurationAllowList.ArrayNum = 0;
      local_198.TargetConfigurationAllowList.ArrayMax = 0;
      local_198.TargetConfigurationDenyList.ArrayNum = 0;
      local_198.TargetConfigurationDenyList.ArrayMax = 0;
      local_198.TargetAllowList.ArrayNum = 0;
      local_198.TargetAllowList.ArrayMax = 0;
      local_198.TargetDenyList.ArrayNum = 0;
      local_198.TargetDenyList.ArrayMax = 0;
      local_198.SupportedTargetPlatforms.ArrayNum = 0;
      local_198.SupportedTargetPlatforms.ArrayMax = 0;
      local_198.bHasExplicitPlatforms = false;
      local_198.RequestedVersion.bIsSet = false;
      local_d8.DataPtr = (wchar_t *)local_c8;
      bVar6 = ConfigureEnabledPluginForCurrentTarget
                        (this,&local_198,&param_1->EnabledPlugins,&local_d8,
                         &param_1->AllowedOptionalDependencies);
      DestructItems<FString,int>
                ((FString *)local_198.SupportedTargetPlatforms.AllocatorInstance.Data,
                 local_198.SupportedTargetPlatforms.ArrayNum);
      if (local_198.SupportedTargetPlatforms.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.SupportedTargetPlatforms.AllocatorInstance.Data);
      }
      if (local_198.TargetDenyList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.TargetDenyList.AllocatorInstance.Data);
      }
      if (local_198.TargetAllowList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.TargetAllowList.AllocatorInstance.Data);
      }
      if (local_198.TargetConfigurationDenyList.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.TargetConfigurationDenyList.AllocatorInstance.Data);
      }
      if (local_198.TargetConfigurationAllowList.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.TargetConfigurationAllowList.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_198.PlatformDenyList.AllocatorInstance.Data,
                 local_198.PlatformDenyList.ArrayNum);
      if (local_198.PlatformDenyList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.PlatformDenyList.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_198.PlatformAllowList.AllocatorInstance.Data,
                 local_198.PlatformAllowList.ArrayNum);
      if (local_198.PlatformAllowList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.PlatformAllowList.AllocatorInstance.Data);
      }
      if (local_198.MarketplaceURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.MarketplaceURL.Data.AllocatorInstance.Data);
      }
      if (local_198.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Description.Data.AllocatorInstance.Data);
      }
      if (local_198.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Name.Data.AllocatorInstance.Data);
      }
      if (!bVar6) {
        bVar6 = false;
LAB_141e1e352:
        pFVar15 = local_1a0;
        DestructItems<FString,int>((FString *)local_1a0,uVar5);
        if (pFVar15 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar15);
        }
LAB_141e1e36f:
        pFVar15 = local_1a8;
        DestructItems<FString,int>((FString *)local_1a8,local_res18.Data.ArrayNum);
        if (pFVar15 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar15);
        }
        FScopedBootTiming::~FScopedBootTiming(&local_78);
        if (bVar20) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return bVar6;
      }
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (&param_1->ConfiguredPluginNames,(FString *)local_1b0,(bool *)pFVar15);
      pFVar16 = (FScriptContainerElement *)(ulonglong)(uint)local_1b8._0_4_;
      pFVar19 = local_b8;
    }
    pFVar15 = pFVar15 + 0x10;
  } while( true );
}

// FindCompileTimePlugins @ 141e1e3e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPluginManager::FindCompileTimePlugins(FPluginManager *this,FPluginDiscoveryContext *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  bool bVar4;
  undefined1 auStack_1208 [32];
  undefined1 local_11e8 [32];
  FString local_11c8;
  FString local_11b8;
  FString local_11a8;
  FString local_1198;
  FString local_1188;
  FString local_1178;
  FString local_1168;
  FString local_1158;
  FString local_1148;
  FString local_1138;
  FString local_1128;
  FString local_1118;
  FString local_1108;
  FString local_10f8;
  FString local_10e8;
  FString local_10d8;
  FString local_10c8;
  FString local_10b8;
  FString local_10a8;
  FString local_1098;
  FString local_1088;
  FString local_1078;
  FString local_1068;
  FString local_1058;
  FString local_1048;
  FString local_1038;
  FString local_1028;
  FString local_1018;
  FString local_1008;
  FString local_ff8;
  FString local_fe8;
  FString local_fd8;
  FString local_fc8;
  FString local_fb8;
  FString local_fa8;
  FString local_f98;
  FString local_f88;
  FString local_f78;
  FString local_f68;
  FString local_f58;
  FString local_f48;
  FString local_f38;
  FString local_f28;
  FString local_f18;
  FString local_f08;
  FString local_ef8;
  FString local_ee8;
  FString local_ed8;
  FString local_ec8;
  FString local_eb8;
  FString local_ea8;
  FString local_e98;
  FString local_e88;
  FString local_e78;
  FString local_e68;
  FString local_e58;
  FString local_e48;
  FString local_e38;
  FString local_e28;
  FString local_e18;
  FString local_e08;
  FString local_df8;
  FString local_de8;
  FString local_dd8;
  FString local_dc8;
  FString local_db8;
  FString local_da8;
  FString local_d98;
  FString local_d88;
  FString local_d78;
  FString local_d68;
  FString local_d58;
  FString local_d48;
  FString local_d38;
  FString local_d28;
  FString local_d18;
  FString local_d08;
  FString local_cf8;
  FString local_ce8;
  FString local_cd8;
  FString local_cc8;
  FString local_cb8;
  FString local_ca8;
  FString local_c98;
  FString local_c88;
  FString local_c78;
  FString local_c68;
  FString local_c58;
  FString local_c48;
  FString local_c38;
  FString local_c28;
  FString local_c18;
  FString local_c08;
  FString local_bf8;
  FString local_be8;
  FString local_bd8;
  FString local_bc8;
  FString local_bb8;
  FString local_ba8;
  FString local_b98;
  FString local_b88;
  FString local_b78;
  FString local_b68;
  FString local_b58;
  FString local_b48;
  FString local_b38;
  FString local_b28;
  FString local_b18;
  FString local_b08;
  FString local_af8;
  FString local_ae8;
  FString local_ad8;
  FString local_ac8;
  FString local_ab8;
  FString local_aa8;
  FString local_a98;
  FString local_a88;
  FString local_a78;
  FString local_a68;
  FString local_a58;
  FString local_a48;
  FString local_a38;
  FString local_a28;
  FString local_a18;
  FString local_a08;
  FString local_9f8;
  FString local_9e8;
  FString local_9d8;
  FString local_9c8;
  FString local_9b8;
  FString local_9a8;
  FString local_998;
  FString local_988;
  FString local_978;
  FString local_968;
  FString local_958;
  FString local_948;
  FString local_938;
  FString local_928;
  FString local_918;
  FString local_908;
  FString local_8f8;
  FString local_8e8;
  FString local_8d8;
  FString local_8c8;
  FString local_8b8;
  FString local_8a8;
  FString local_898;
  FString local_888;
  FString local_878;
  FString local_868;
  FString local_858;
  FString local_848;
  FString local_838;
  FString local_828;
  FString local_818;
  FString local_808;
  FString local_7f8;
  FString local_7e8;
  FString local_7d8;
  FString local_7c8;
  FString local_7b8;
  FString local_7a8;
  FString local_798;
  FString local_788;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  FString local_6a8;
  FString local_698;
  FString local_688;
  FString local_678;
  FString local_668;
  FString local_658;
  FString local_648;
  FString local_638;
  FString local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_28.Data.ArrayNum = 0x41e1e400;
  local_28.Data.ArrayMax = 1;
  local_28.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStack_1208);
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1452,"ReadTargetBuildPlugins",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
               ,0x5ac);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1452);
  }
  FScopedBootTiming::FScopedBootTiming
            ((FScopedBootTiming *)(local_11e8 + 8),"ReadTargetBuildPlugins");
  ::FString::FString(&local_11c8,L"EditorScriptingUtilities");
  ::FString::FString(&local_11b8,L"PythonScriptPlugin");
  ::FString::FString(&local_11a8,L"DS_ConsoleCommander");
  ::FString::FString(&local_1198,L"WNAbility");
  ::FString::FString(&local_1188,L"WN_Env");
  ::FString::FString(&local_1178,L"WN_Common");
  ::FString::FString(&local_1168,L"Niagara");
  ::FString::FString(&local_1158,L"DataValidation");
  ::FString::FString(&local_1148,L"WN_CS");
  ::FString::FString(&local_1138,L"RigLogic");
  ::FString::FString(&local_1128,L"ControlRig");
  ::FString::FString(&local_1118,L"RigVM");
  ::FString::FString(&local_1108,L"LevelSequenceEditor");
  ::FString::FString(&local_10f8,L"SequencerScripting");
  ::FString::FString(&local_10e8,L"PropertyAccessEditor");
  ::FString::FString(&local_10d8,L"TweeningUtils");
  ::FString::FString(&local_10c8,L"AnimationBudgetAllocator");
  ::FString::FString(&local_10b8,L"WN_WorldUtils");
  ::FString::FString(&local_10a8,L"PCG");
  ::FString::FString(&local_1098,L"ComputeFramework");
  ::FString::FString(&local_1088,L"GeometryProcessing");
  ::FString::FString(&local_1078,L"MeshModelingToolset");
  ::FString::FString(&local_1068,L"ProxyLODPlugin");
  ::FString::FString(&local_1058,L"PlanarCut");
  ::FString::FString(&local_1048,L"GeometryCache");
  ::FString::FString(&local_1038,L"WNTask");
  ::FString::FString(&local_1028,L"EnhancedInput");
  ::FString::FString(&local_1018,L"AnimationWarping");
  ::FString::FString(&local_1008,L"AnimationModifierLibrary");
  ::FString::FString(&local_ff8,L"AnimationLocomotionLibrary");
  ::FString::FString(&local_fe8,L"ModelViewViewModel");
  ::FString::FString(&local_fd8,L"CommonUI");
  ::FString::FString(&local_fc8,L"GameplayTagsEditor");
  ::FString::FString(&local_fb8,L"GameplayInsights");
  ::FString::FString(&local_fa8,L"PCGGeometryScriptInterop");
  ::FString::FString(&local_f98,L"GeometryScripting");
  ::FString::FString(&local_f88,L"PCGExternalDataInterop");
  ::FString::FString(&local_f78,L"AlembicImporter");
  ::FString::FString(&local_f68,L"WN_ISKM");
  ::FString::FString(&local_f58,L"SkeletalMeshModelingTools");
  ::FString::FString(&local_f48,L"MotionWarping");
  ::FString::FString(&local_f38,L"MotionTrajectory");
  ::FString::FString(&local_f28,L"PoseSearch");
  ::FString::FString(&local_f18,L"BlendStack");
  ::FString::FString(&local_f08,L"Chooser");
  ::FString::FString(&local_ef8,L"AdvancedRenamer");
  ::FString::FString(&local_ee8,L"HDRIBackdrop");
  ::FString::FString(&local_ed8,L"AppleARKit");
  ::FString::FString(&local_ec8,L"XRBase");
  ::FString::FString(&local_eb8,L"AppleImageUtils");
  ::FString::FString(&local_ea8,L"ARUtilities");
  ::FString::FString(&local_e98,L"LiveLink");
  ::FString::FString(&local_e88,L"Takes");
  ::FString::FString(&local_e78,L"AudioCapture");
  ::FString::FString(&local_e68,L"NamingTokens");
  ::FString::FString(&local_e58,L"EngineAssetDefinitions");
  ::FString::FString(&local_e48,L"ConcertSyncClient");
  ::FString::FString(&local_e38,L"ConcertSyncCore");
  ::FString::FString(&local_e28,L"ConcertMain");
  ::FString::FString(&local_e18,L"SQLiteCore");
  ::FString::FString(&local_e08,L"ContentBrowserAssetDataSource");
  ::FString::FString(&local_df8,L"AppleARKitFaceSupport");
  ::FString::FString(&local_de8,L"ProceduralMeshComponent");
  ::FString::FString(&local_dd8,L"NiagaraUIRenderer");
  ::FString::FString(&local_dc8,L"DragonIKPlugin");
  ::FString::FString(&local_db8,L"NiagaraFluids");
  ::FString::FString(&local_da8,L"ActorPalette");
  ::FString::FString(&local_d98,L"LiveLinkControlRig");
  ::FString::FString(&local_d88,L"Mutable");
  ::FString::FString(&local_d78,L"SkeletalMerging");
  ::FString::FString(&local_d68,L"MutablePopulation");
  ::FString::FString(&local_d58,L"CameraCalibration");
  ::FString::FString(&local_d48,L"CameraCalibrationCore");
  ::FString::FString(&local_d38,L"GameplayCameras");
  ::FString::FString(&local_d28,L"StateTree");
  ::FString::FString(&local_d18,L"PropertyBindingUtils");
  ::FString::FString(&local_d08,L"TemplateSequence");
  ::FString::FString(&local_cf8,L"LensComponent");
  ::FString::FString(&local_ce8,L"MediaFrameworkUtilities");
  ::FString::FString(&local_cd8,L"MediaIOFramework");
  ::FString::FString(&local_cc8,L"OpenColorIO");
  ::FString::FString(&local_cb8,L"OpenCVLensDistortion");
  ::FString::FString(&local_ca8,L"OpenCV");
  ::FString::FString(&local_c98,L"MediaPlayerEditor");
  ::FString::FString(&local_c88,L"AudioInsights");
  ::FString::FString(&local_c78,L"AudioWidgets");
  ::FString::FString(&local_c68,L"AudioSynesthesia");
  ::FString::FString(&local_c58,L"AudioGameplayVolume");
  ::FString::FString(&local_c48,L"AudioGameplay");
  ::FString::FString(&local_c38,L"CCSAIServicePlugin");
  ::FString::FString(&local_c28,L"PhysicsControl");
  ::FString::FString(&local_c18,L"FastGeoStreaming");
  ::FString::FString(&local_c08,L"UIParticle");
  ::FString::FString(&local_bf8,L"WaveformEditor");
  ::FString::FString(&local_be8,L"WN_MCS");
  ::FString::FString(&local_bd8,L"NiagaraNanite");
  ::FString::FString(&local_bc8,L"ProceduralVegetationEditor");
  ::FString::FString(&local_bb8,L"Dataflow");
  ::FString::FString(&local_ba8,L"ChaosCaching");
  ::FString::FString(&local_b98,L"EditorDataStorage");
  ::FString::FString(&local_b88,L"EditorDataStorageFeatures");
  ::FString::FString(&local_b78,L"DynamicWind");
  ::FString::FString(&local_b68,L"AIAssistant");
  ::FString::FString(&local_b58,L"Reflex");
  ::FString::FString(&local_b48,L"WN_SKMReact");
  ::FString::FString(&local_b38,L"LandscapePatch");
  ::FString::FString(&local_b28,L"DLSSMoviePipelineSupport");
  ::FString::FString(&local_b18,L"MovieRenderPipeline");
  ::FString::FString(&local_b08,L"ActorLayerUtilities");
  ::FString::FString(&local_af8,L"ConsoleVariables");
  ::FString::FString(&local_ae8,L"ConcertSharedSlate");
  ::FString::FString(&local_ad8,L"ChaosClothAsset");
  ::FString::FString(&local_ac8,L"ChaosCloth");
  ::FString::FString(&local_ab8,L"DLSS");
  ::FString::FString(&local_aa8,L"StreamlineNGXCommon");
  ::FString::FString(&local_a98,L"FoliageShadowImpostersRuntime");
  ::FString::FString(&local_a88,L"FoliageShadowImposters");
  ::FString::FString(&local_a78,L"KawaiiPhysics");
  ::FString::FString(&local_a68,L"NIS");
  ::FString::FString(&local_a58,L"StreamlineCore");
  ::FString::FString(&local_a48,L"StreamlineDeepDVC");
  ::FString::FString(&local_a38,L"StreamlineDLSSG");
  ::FString::FString(&local_a28,L"StreamlineReflex");
  ::FString::FString(&local_a18,L"Streamline");
  ::FString::FString(&local_a08,L"TencentCloudChat");
  ::FString::FString(&local_9f8,L"UIWidgetsLib");
  ::FString::FString(&local_9e8,L"Paper2D");
  ::FString::FString(&local_9d8,L"AISupport");
  ::FString::FString(&local_9c8,L"EnvironmentQueryEditor");
  ::FString::FString(&local_9b8,L"ACLPlugin");
  ::FString::FString(&local_9a8,L"AnimationData");
  ::FString::FString(&local_998,L"BlendSpaceMotionAnalysis");
  ::FString::FString(&local_988,L"ControlRigModules");
  ::FString::FString(&local_978,L"ControlRigSpline");
  ::FString::FString(&local_968,L"EaseCurveTool");
  ::FString::FString(&local_958,L"IKRig");
  ::FString::FString(&local_948,L"FullBodyIK");
  ::FString::FString(&local_938,L"BaseMaterial");
  ::FString::FString(&local_928,L"Bridge");
  ::FString::FString(&local_918,L"MetaHumanSDK");
  ::FString::FString(&local_908,L"HairStrands");
  ::FString::FString(&local_8f8,L"DeformerGraph");
  ::FString::FString(&local_8e8,L"CameraShakePreviewer");
  ::FString::FString(&local_8d8,L"EngineCameras");
  ::FString::FString(&local_8c8,L"ChaosInsights");
  ::FString::FString(&local_8b8,L"ChaosVD");
  ::FString::FString(&local_8a8,L"CmdLinkServer");
  ::FString::FString(&local_898,L"OodleNetwork");
  ::FString::FString(&local_888,L"AnimationSharing");
  ::FString::FString(&local_878,L"SignificanceManager");
  ::FString::FString(&local_868,L"CLionSourceCodeAccess");
  ::FString::FString(&local_858,L"CodeLiteSourceCodeAccess");
  ::FString::FString(&local_848,L"DumpGPUServices");
  ::FString::FString(&local_838,L"GitSourceControl");
  ::FString::FString(&local_828,L"GPUReshape");
  ::FString::FString(&local_818,L"KDevelopSourceCodeAccess");
  ::FString::FString(&local_808,L"N10XSourceCodeAccess");
  ::FString::FString(&local_7f8,L"NullSourceCodeAccess");
  ::FString::FString(&local_7e8,L"PerforceSourceControl");
  ::FString::FString(&local_7d8,L"PixWinPlugin");
  ::FString::FString(&local_7c8,L"PlasticSourceControl");
  ::FString::FString(&local_7b8,L"PluginUtils");
  ::FString::FString(&local_7a8,L"ProjectLauncher");
  ::FString::FString(&local_798,L"PropertyAccessNode");
  ::FString::FString(&local_788,L"RenderDocPlugin");
  ::FString::FString(&local_778,L"RiderSourceCodeAccess");
  ::FString::FString(&local_768,L"SubversionSourceControl");
  ::FString::FString(&local_758,L"TextureFormatOodle");
  ::FString::FString(&local_748,L"UObjectPlugin");
  ::FString::FString(&local_738,L"VisualStudioCodeSourceCodeAccess");
  ::FString::FString(&local_728,L"VisualStudioSourceCodeAccess");
  ::FString::FString(&local_718,L"VisualStudioTools");
  ::FString::FString(&local_708,L"AssetManagerEditor");
  ::FString::FString(&local_6f8,L"BlueprintHeaderView");
  ::FString::FString(&local_6e8,L"ChangelistReview");
  ::FString::FString(&local_6d8,L"ColorGrading");
  ::FString::FString(&local_6c8,L"ObjectMixer");
  ::FString::FString(&local_6b8,L"ContentBrowserClassDataSource");
  ::FString::FString(&local_6a8,L"CryptoKeys");
  ::FString::FString(&local_698,L"CurveEditorTools");
  ::FString::FString(&local_688,L"EditorDebugTools");
  ::FString::FString(&local_678,L"FacialAnimation");
  ::FString::FString(&local_668,L"GeometryMode");
  ::FString::FString(&local_658,L"PortableObjectFileDataSource");
  ::FString::FString(&local_648,L"MacGraphicsSwitching");
  ::FString::FString(&local_638,L"MaterialAnalyzer");
  ::FString::FString(&local_628,L"MobileLauncherProfileWizard");
  ::FString::FString(&local_618,L"LightMixer");
  ::FString::FString(&local_608,L"PluginBrowser");
  ::FString::FString(&local_5f8,L"SequencerAnimTools");
  ::FString::FString(&local_5e8,L"SpeedTreeImporter");
  ::FString::FString(&local_5d8,L"UMGWidgetPreview");
  ::FString::FString(&local_5c8,L"UVEditor");
  ::FString::FString(&local_5b8,L"WorldPartitionHLODUtilities");
  ::FString::FString(&local_5a8,L"DatasmithContent");
  ::FString::FString(&local_598,L"VariantManagerContent");
  ::FString::FString(&local_588,L"GLTFExporter");
  ::FString::FString(&local_578,L"Interchange");
  ::FString::FString(&local_568,L"VariantManager");
  ::FString::FString(&local_558,L"InterchangeAssets");
  ::FString::FString(&local_548,L"AutomationUtils");
  ::FString::FString(&local_538,L"BackChannel");
  ::FString::FString(&local_528,L"ChaosEditor");
  ::FString::FString(&local_518,L"GeometryCollectionPlugin");
  ::FString::FString(&local_508,L"ChaosSolverPlugin");
  ::FString::FString(&local_4f8,L"GeometryDataflow");
  ::FString::FString(&local_4e8,L"Fracture");
  ::FString::FString(&local_4d8,L"ChaosNiagara");
  ::FString::FString(&local_4c8,L"ChaosUserDataPT");
  ::FString::FString(&local_4b8,L"CharacterAI");
  ::FString::FString(&local_4a8,L"EditorPerformance");
  ::FString::FString(&local_498,L"EditorTelemetry");
  ::FString::FString(&local_488,L"GlobalConfigurationData");
  ::FString::FString(&local_478,L"LevelSequenceNavigatorBridge");
  ::FString::FString(&local_468,L"SequenceNavigator");
  ::FString::FString(&local_458,L"LocalizableMessage");
  ::FString::FString(&local_448,L"NFORDenoise");
  ::FString::FString(&local_438,L"PlatformCrypto");
  ::FString::FString(&local_428,L"RuntimeTelemetry");
  ::FString::FString(&local_418,L"SkeletalReduction");
  ::FString::FString(&local_408,L"ToolPresets");
  ::FString::FString(&local_3f8,L"Fab");
  ::FString::FString(&local_3e8,L"Cascade");
  ::FString::FString(&local_3d8,L"NiagaraPreviewContent");
  ::FString::FString(&local_3c8,L"NiagaraSimCaching");
  ::FString::FString(&local_3b8,L"InterchangeEditor");
  ::FString::FString(&local_3a8,L"IoStoreInsights");
  ::FString::FString(&local_398,L"MassInsights");
  ::FString::FString(&local_388,L"AndroidMedia");
  ::FString::FString(&local_378,L"AvfMedia");
  ::FString::FString(&local_368,L"ImgMedia");
  ::FString::FString(&local_358,L"MediaCompositing");
  ::FString::FString(&local_348,L"MediaPlate");
  ::FString::FString(&local_338,L"CompositeCore");
  ::FString::FString(&local_328,L"WmfMedia");
  ::FString::FString(&local_318,L"MeshPainting");
  ::FString::FString(&local_308,L"TcpMessaging");
  ::FString::FString(&local_2f8,L"ActorSequence");
  ::FString::FString(&local_2e8,L"SequenceValidator");
  ::FString::FString(&local_2d8,L"NNEDenoiser");
  ::FString::FString(&local_2c8,L"NNERuntimeORT");
  ::FString::FString(&local_2b8,L"OnlineBase");
  ::FString::FString(&local_2a8,L"OnlineSubsystemNull");
  ::FString::FString(&local_298,L"OnlineSubsystem");
  ::FString::FString(&local_288,L"OnlineSubsystemUtils");
  ::FString::FString(&local_278,L"OnlineServices");
  ::FString::FString(&local_268,L"LauncherChunkInstaller");
  ::FString::FString(&local_258,L"RenderGraphInsights");
  ::FString::FString(&local_248,L"AndroidDeviceProfileSelector");
  ::FString::FString(&local_238,L"AndroidFileServer");
  ::FString::FString(&local_228,L"AndroidMoviePlayer");
  ::FString::FString(&local_218,L"AndroidPermission");
  ::FString::FString(&local_208,L"AppleMoviePlayer");
  ::FString::FString(&local_1f8,L"ArchVisCharacter");
  ::FString::FString(&local_1e8,L"AssetTags");
  ::FString::FString(&local_1d8,L"CableComponent");
  ::FString::FString(&local_1c8,L"ChunkDownloader");
  ::FString::FString(&local_1b8,L"CustomMeshComponent");
  ::FString::FString(&local_1a8,L"ExampleDeviceProfileSelector");
  ::FString::FString(&local_198,L"GoogleCloudMessaging");
  ::FString::FString(&local_188,L"GooglePAD");
  ::FString::FString(&local_178,L"InputDebugging");
  ::FString::FString(&local_168,L"IOSDeviceProfileSelector");
  ::FString::FString(&local_158,L"LinuxDeviceProfileSelector");
  ::FString::FString(&local_148,L"LocationServicesBPLibrary");
  ::FString::FString(&local_138,L"Metasound");
  ::FString::FString(&local_128,L"WaveTable");
  ::FString::FString(&local_118,L"MobilePatchingUtils");
  ::FString::FString(&local_108,L"MsQuic");
  ::FString::FString(&local_f8,L"ResonanceAudio");
  ::FString::FString(&local_e8,L"SoundFields");
  ::FString::FString(&local_d8,L"Synthesis");
  ::FString::FString(&local_c8,L"WebMMoviePlayer");
  ::FString::FString(&local_b8,L"WebMMedia");
  ::FString::FString(&local_a8,L"WindowsDeviceProfileSelector");
  ::FString::FString(&local_98,L"WindowsMoviePlayer");
  ::FString::FString(&local_88,L"XInputDevice");
  ::FString::FString(&local_78,L"InterchangeTests");
  ::FString::FString(&local_68,L"TraceUtilities");
  ::FString::FString(&local_58,L"UbaController");
  ::FString::FString(&local_48,L"WorldMetrics");
  ::FString::FString(&local_38,L"XGEController");
  lVar2 = 0x11a;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Reserve
            (&param_1->AllowedOptionalDependencies,
             (*(int *)&(param_1->AllowedOptionalDependencies).Elements.field_0x8 -
             *(int *)&(param_1->AllowedOptionalDependencies).Elements.field_0x34) + 0x11a);
  pFVar3 = &local_11c8;
  do {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&param_1->AllowedOptionalDependencies,(FString *)local_11e8,(bool *)pFVar3);
    pFVar3 = pFVar3 + 1;
  } while (pFVar3 != &local_28);
  pFVar3 = &local_28;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  FScopedBootTiming::~FScopedBootTiming((FScopedBootTiming *)(local_11e8 + 8));
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindEnabledPlugin @ 141e1f9e0

TSharedPtr<IPlugin,1> * __thiscall
FPluginManager::FindEnabledPlugin
          (FPluginManager *this,TSharedPtr<IPlugin,1> *__return_storage_ptr__,char *param_1)

{
  FPlugin *pFVar1;
  char cVar2;
  uint uVar3;
  TSharedRef<FPlugin,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  ::FString::FString(&local_28,param_1);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  local_18.Size = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>
                    (local_18.Size,(wchar_t *)local_28.Data.AllocatorInstance.Data);
  pTVar4 = DiscoveredPluginMapUtils::FindPluginInMap_ByHash<TStringView<wchar_t>_>
                     (&this->AllPlugins,uVar3,&local_18);
  if (pTVar4 != (TSharedRef<FPlugin,1> *)0x0) {
    pTVar5 = (pTVar4->SharedReferenceCount).ReferenceController;
    pFVar1 = pTVar4->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar1 != (FPlugin *)0x0) &&
       (cVar2 = (**(code **)(pFVar1->_padding_ + 0x48))(pFVar1), cVar2 != '\0')) {
      __return_storage_ptr__->Object = (IPlugin *)pFVar1;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_141e1fa58;
    }
  }
  __return_storage_ptr__->Object = (IPlugin *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_141e1fa58:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindEnabledPlugin @ 141e1fad0

TSharedPtr<IPlugin,1> * __thiscall
FPluginManager::FindEnabledPlugin
          (FPluginManager *this,TSharedPtr<IPlugin,1> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  FPlugin *pFVar1;
  char cVar2;
  uint uVar3;
  TSharedRef<FPlugin,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
  pTVar4 = DiscoveredPluginMapUtils::FindPluginInMap_ByHash<TStringView<wchar_t>_>
                     (&this->AllPlugins,uVar3,&local_18);
  if (pTVar4 == (TSharedRef<FPlugin,1> *)0x0) {
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
    if (pFVar1 != (FPlugin *)0x0) {
      cVar2 = (**(code **)(pFVar1->_padding_ + 0x48))(pFVar1);
      if (cVar2 != '\0') {
        __return_storage_ptr__->Object = (IPlugin *)pFVar1;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        goto LAB_141e1fb26;
      }
    }
  }
  __return_storage_ptr__->Object = (IPlugin *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_141e1fb26:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// FindEnabledPluginFromDescriptor @ 141e1fb90

TSharedPtr<IPlugin,1> * __thiscall
FPluginManager::FindEnabledPluginFromDescriptor
          (FPluginManager *this,TSharedPtr<IPlugin,1> *__return_storage_ptr__,
          FPluginReferenceDescriptor *param_1)

{
  FPlugin *pFVar1;
  char cVar2;
  TSharedRef<FPlugin,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  pTVar3 = DiscoveredPluginMapUtils::FindPluginInMap_FromDescriptor(&this->AllPlugins,param_1);
  if (pTVar3 == (TSharedRef<FPlugin,1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4 = (pTVar3->SharedReferenceCount).ReferenceController;
    pFVar1 = pTVar3->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 != (FPlugin *)0x0) {
      cVar2 = (**(code **)(pFVar1->_padding_ + 0x48))(pFVar1);
      if (cVar2 != '\0') {
        __return_storage_ptr__->Object = (IPlugin *)pFVar1;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        goto LAB_141e1fbca;
      }
    }
  }
  __return_storage_ptr__->Object = (IPlugin *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_141e1fbca:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// FindEnabledPluginFromPath @ 141e1fc30

TSharedPtr<IPlugin,1> * __thiscall
FPluginManager::FindEnabledPluginFromPath
          (FPluginManager *this,TSharedPtr<IPlugin,1> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  TSharedPtr<IPlugin,1> *pTVar4;
  TSharedPtr<IPlugin,1> local_18;
  
  FindPluginFromPath(this,&local_18,param_1);
  if (local_18.Object != (IPlugin *)0x0) {
    if (local_18.Object == (IPlugin *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPlugin,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    cVar3 = (**(code **)(*(longlong *)local_18.Object + 0x48))(local_18.Object);
    if (cVar3 != '\0') {
      __return_storage_ptr__->Object = local_18.Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_18.SharedReferenceCount.ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        return __return_storage_ptr__;
      }
      goto LAB_141e1fcc9;
    }
  }
  __return_storage_ptr__->Object = (IPlugin *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_141e1fcc9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FindPlugin @ 141e1fd10

TSharedPtr<IPlugin,1> * __thiscall
FPluginManager::FindPlugin
          (FPluginManager *this,TSharedPtr<IPlugin,1> *__return_storage_ptr__,char *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  TSharedRef<FPlugin,1> *pTVar3;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  ::FString::FString(&local_28,param_1);
  local_18.Size = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>
                    (local_18.Size,(wchar_t *)local_28.Data.AllocatorInstance.Data);
  pTVar3 = DiscoveredPluginMapUtils::FindPluginInMap_ByHash<TStringView<wchar_t>_>
                     (&this->AllPlugins,uVar2,&local_18);
  if (pTVar3 == (TSharedRef<FPlugin,1> *)0x0) {
    __return_storage_ptr__->Object = (IPlugin *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = (IPlugin *)pTVar3->Object;
    pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindPlugin @ 141e1fdc0

TSharedPtr<IPlugin,1> * __thiscall
FPluginManager::FindPlugin
          (FPluginManager *this,TSharedPtr<IPlugin,1> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  TSharedRef<FPlugin,1> *pTVar3;
  
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
  pTVar3 = DiscoveredPluginMapUtils::FindPluginInMap_ByHash<TStringView<wchar_t>_>
                     (&this->AllPlugins,uVar2,param_1);
  if (pTVar3 == (TSharedRef<FPlugin,1> *)0x0) {
    __return_storage_ptr__->Object = (IPlugin *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (IPlugin *)pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// FindPluginFromDescriptor @ 141e1fe50

TSharedPtr<IPlugin,1> * __thiscall
FPluginManager::FindPluginFromDescriptor
          (FPluginManager *this,TSharedPtr<IPlugin,1> *__return_storage_ptr__,
          FPluginReferenceDescriptor *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FPlugin,1> *pTVar2;
  
  pTVar2 = DiscoveredPluginMapUtils::FindPluginInMap_FromDescriptor(&this->AllPlugins,param_1);
  if (pTVar2 == (TSharedRef<FPlugin,1> *)0x0) {
    __return_storage_ptr__->Object = (IPlugin *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (IPlugin *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// FindPluginFromPath @ 141e1feb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TSharedPtr<IPlugin,1> * __thiscall
FPluginManager::FindPluginFromPath
          (FPluginManager *this,TSharedPtr<IPlugin,1> *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ForAnyElementType FVar5;
  TSharedRef<FPlugin,1> *pTVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  local_28.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar8 = (longlong)local_28.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
  }
  FPaths::NormalizeFilename(&local_28);
  bVar2 = ::FString::StartsWith(&local_28,L"/",1,CaseSensitive);
  if (bVar2) {
    ::FString::RemoveAt(&local_28,0,1,Default);
  }
  FVar5.Data = local_28.Data.AllocatorInstance.Data;
  do {
    if (FVar5.Data == local_28.Data.AllocatorInstance.Data + (longlong)local_28.Data.ArrayNum * 2) {
LAB_141e1ffd2:
      local_18.Size = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        local_18.Size = 0;
      }
      local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>
                        (local_18.Size,(wchar_t *)local_28.Data.AllocatorInstance.Data);
      pTVar6 = DiscoveredPluginMapUtils::FindPluginInMap_ByHash<TStringView<wchar_t>_>
                         (&this->AllPlugins,uVar4,&local_18);
      if (pTVar6 == (TSharedRef<FPlugin,1> *)0x0) {
        __return_storage_ptr__->Object = (IPlugin *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
      }
      else {
        __return_storage_ptr__->Object = (IPlugin *)pTVar6->Object;
        pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    if (*(wchar_t *)FVar5.Data == L'/') {
      iVar3 = (int)((longlong)FVar5.Data - (longlong)local_28.Data.AllocatorInstance.Data >> 1);
      if (iVar3 != -1) {
        iVar9 = local_28.Data.ArrayNum + -1;
        if (local_28.Data.ArrayNum == 0) {
          iVar9 = 0;
        }
        iVar7 = iVar9;
        if (iVar3 < iVar9) {
          iVar7 = iVar3;
        }
        iVar3 = 0;
        if (0 < iVar7) {
          iVar3 = iVar7;
        }
        ::FString::RemoveAt(&local_28,iVar3,iVar9 - iVar3,Default);
      }
      goto LAB_141e1ffd2;
    }
    FVar5.Data = FVar5.Data + 2;
  } while( true );
}

// FindPluginInstance @ 141e20440

TSharedPtr<FPlugin,1> * __thiscall
FPluginManager::FindPluginInstance
          (FPluginManager *this,TSharedPtr<FPlugin,1> *__return_storage_ptr__,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FPlugin,1> *pTVar2;
  
  pTVar2 = DiscoveredPluginMapUtils::FindPluginInMap(&this->AllPlugins,param_1);
  if (pTVar2 == (TSharedRef<FPlugin,1> *)0x0) {
    __return_storage_ptr__->Object = (FPlugin *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// FindPluginManifestsInDirectory @ 141e204a0

void __cdecl
FPluginManager::FindPluginManifestsInDirectory
          (FString *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  IFileManager *pIVar1;
  undefined **local_28;
  undefined1 local_20;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_18;
  
  local_20 = 0;
  local_28 = &`FPluginManager::FindPluginManifestsInDirectory'::`2'::FManifestVisitor::_vftable_;
  local_18 = param_2;
  pIVar1 = IFileManager::Get();
  if ((param_1->Data).ArrayNum != 0) {
    (**(code **)((longlong)*pIVar1 + 0x98))(pIVar1,(param_1->Data).AllocatorInstance.Data,&local_28)
    ;
    return;
  }
  (**(code **)((longlong)*pIVar1 + 0x98))(pIVar1,L"",&local_28);
  return;
}

// FindPluginsInDirectory @ 141e20600

void __cdecl
FPluginManager::FindPluginsInDirectory
          (FString *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          IPlatformFile *param_3)

{
  code *pcVar1;
  FFeedbackContext *pFVar2;
  <lambda_1> <Var3;
  bool bVar4;
  bool bVar5;
  BOOLEAN BVar6;
  int iVar7;
  atomic<unsigned_int> aVar8;
  int iVar9;
  int iVar10;
  FText *pFVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  atomic<unsigned_int> aVar14;
  ForAnyElementType FVar15;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar16;
  float fVar17;
  <lambda_1> local_res8 [8];
  undefined1 local_res20 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_148;
  ForAnyElementType local_138;
  undefined8 local_130;
  FPlatformRWLock local_128;
  TArrayView<TArray<FString,TSizedDefaultAllocator<32>_>,int> local_120;
  FPlatformRWLock *local_110;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTStack_108;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_100;
  IPlatformFile *pIStack_f8;
  FText local_f0;
  FText local_e0;
  FSlowTask local_c8;
  <lambda_1> local_68;
  
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  iVar7 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_148.AllocatorInstance,&local_148.ArrayMax);
  local_148.ArrayNum = iVar7 + 1;
  ::FString::FString((FString *)(local_148.AllocatorInstance.Data + (longlong)iVar7 * 0x10),param_1)
  ;
  pFVar2 = GWarn;
  pFVar11 = FText::FText(&local_f0);
  FSlowTask::FSlowTask(&local_c8,__real_447a0000,pFVar11,true,pFVar2);
  FSlowTask::Initialize(&local_c8);
  if (local_f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
  }
  <Var3 = local_res8[0];
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130 = 0;
  local_128.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
  do {
    if (local_148.ArrayNum < 1) {
      BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&local_128);
      if (BVar6 == '\0') {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsLocked()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                           ,0x48,L"Destroying a lock that is still held!");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        ReleaseSRWLockExclusive((PSRWLOCK)&local_128);
      }
      DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)local_138.Data,(int)local_130);
      if ((TArray<FString,TSizedDefaultAllocator<32>_> *)local_138.Data !=
          (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_138.Data);
      }
      FSlowTask::Destroy(&local_c8);
      if (local_c8.FrameMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.FrameMessage.TextData.Reference + 0x10))();
      }
      if (local_c8.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.DefaultMessage.TextData.Reference + 0x10))();
      }
      DestructItems<FString,int>((FString *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
      if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
      return;
    }
    uVar13 = 0;
    fVar17 = (local_c8.TotalAmountOfWork - local_c8.CompletedWork) - local_c8.CurrentFrameScope;
    pFVar11 = FText::FText(&local_e0);
    FSlowTask::EnterProgressFrame(&local_c8,fVar17,pFVar11);
    if (local_e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
    }
    iVar7 = local_148.ArrayNum;
    local_110 = &local_128;
    local_100 = &local_148;
    pTStack_108 = param_2;
    pIStack_f8 = param_3;
    if (0 < local_148.ArrayNum) {
      bVar4 = FApp::ShouldUseThreadingForPerformance();
      if (bVar4) {
LAB_141e20754:
        bVar4 = true;
      }
      else {
        bVar5 = FForkProcessHelper::IsForkedMultithreadInstance();
        bVar4 = false;
        if (bVar5) goto LAB_141e20754;
      }
      aVar8 = (atomic<unsigned_int>)0x0;
      if (((1 < iVar7) && (aVar8 = (atomic<unsigned_int>)0x0, bVar4)) &&
         (aVar8 = (atomic<unsigned_int>)iVar7,
         (int)LowLevelTasks::FScheduler::Singleton.ActiveWorkers < iVar7)) {
        aVar8 = LowLevelTasks::FScheduler::Singleton.ActiveWorkers;
      }
      bVar4 = LowLevelTasks::FSchedulerTls::IsWorkerThread
                        ((FSchedulerTls *)&LowLevelTasks::FScheduler::Singleton);
      aVar14 = (atomic<unsigned_int>)((int)aVar8 + 1);
      if (bVar4) {
        aVar14 = aVar8;
      }
      aVar8 = (atomic<unsigned_int>)FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
      if ((int)aVar14 < (int)aVar8) {
        aVar8 = aVar14;
      }
      aVar14 = (atomic<unsigned_int>)0x1;
      if (1 < (int)aVar8) {
        aVar14 = aVar8;
      }
      if ((longlong)local_130 < 0) {
        DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<FString,TSizedDefaultAllocator<32>_> *)local_138.Data,(int)local_130);
        bVar4 = local_130._4_4_ != 0;
        local_130 = (ulonglong)local_130._4_4_ << 0x20;
        if (bVar4) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_138,0,(int *)((longlong)&local_130 + 4));
        }
      }
      else {
        DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<FString,TSizedDefaultAllocator<32>_> *)local_138.Data,(int)local_130);
        local_130 = local_130 & 0xffffffff00000000;
      }
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,(int)aVar14,&local_138,(int *)&local_130,
                         (int *)((longlong)&local_130 + 4));
      memset(local_138.Data + (longlong)iVar9 * 0x10,0,(longlong)(int)aVar14 << 4);
      iVar9 = (int)local_130;
      local_120.DataPtr = (TArray<FString,TSizedDefaultAllocator<32>_> *)local_138.Data;
      if (((int)local_130 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_68.FoundFilesLock = local_110;
      local_68.FileNames = pTStack_108;
      local_68.DirectoriesToVisit = local_100;
      local_68.PlatformFile = pIStack_f8;
      local_120.ArrayNum = iVar9;
      ParallelForImpl::
      ParallelForInternal<_FPluginManager::FindPluginsInDirectory_::__l4::<lambda_1>,_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_FPluginManager::FindPluginsInDirectory_::__l4::<lambda_1>_>_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
                (L"FindPluginsInDirectory.PF",iVar7,1,&local_68,<Var3,Unbalanced,&local_120);
    }
    iVar9 = (int)local_130;
    uVar12 = (ulonglong)(int)local_130;
    pTVar16 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(local_138.Data + uVar12 * 0x10);
    local_c8.CurrentFrameScope = (fVar17 / (float)(iVar7 + (int)local_130)) * (float)iVar7;
    FVar15.Data = local_138.Data;
    while( true ) {
      if ((int)uVar12 != iVar9) {
        local_res8[0] = (<lambda_1>)0x0;
        `TCheckedPointerIterator<TArray<FString,TSizedDefaultAllocator<32>_>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
        uVar12 = local_130 & 0xffffffff;
      }
      iVar7 = (int)uVar13;
      if ((TArray<FString,TSizedDefaultAllocator<32>_> *)FVar15.Data == pTVar16) break;
      uVar13 = (ulong64)(uint)(iVar7 + ((TArray<FString,TSizedDefaultAllocator<32>_> *)FVar15.Data)
                                       ->ArrayNum);
      FVar15.Data = FVar15.Data + 0x10;
    }
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar13);
    }
    if (local_148.ArrayMax < iVar7) {
      DestructItems<FString,int>((FString *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
      iVar9 = local_148.ArrayMax;
      local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
      if (iVar9 != iVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar7,&local_148.AllocatorInstance,0,&local_148.ArrayMax);
      }
    }
    else {
      DestructItems<FString,int>((FString *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
      local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
    }
    iVar7 = (int)local_130;
    pTVar16 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
              (local_138.Data + (longlong)(int)local_130 * 0x10);
    FVar15.Data = local_138.Data;
    while( true ) {
      if ((int)local_130 != iVar7) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TArray<FString,TSizedDefaultAllocator<32>_>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res20);
      }
      if ((TArray<FString,TSizedDefaultAllocator<32>_> *)FVar15.Data == pTVar16) break;
      if ((&local_148 == (TArray<FString,TSizedDefaultAllocator<32>_> *)FVar15.Data) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar9 = ((TArray<FString,TSizedDefaultAllocator<32>_> *)FVar15.Data)->ArrayNum;
      if (iVar9 != 0) {
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,iVar9,&local_148.AllocatorInstance,&local_148.ArrayNum,
                            &local_148.ArrayMax);
        memmove(local_148.AllocatorInstance.Data + (longlong)iVar10 * 0x10,
                (((TArray<FString,TSizedDefaultAllocator<32>_> *)FVar15.Data)->AllocatorInstance).
                Data,(longlong)iVar9 << 4);
        ((TArray<FString,TSizedDefaultAllocator<32>_> *)FVar15.Data)->ArrayNum = 0;
      }
      FVar15.Data = FVar15.Data + 0x10;
    }
  } while( true );
}

// FindPluginsUnderDirectory @ 141e20b30

void __thiscall
FPluginManager::FindPluginsUnderDirectory
          (FPluginManager *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar1;
  
  this_00 = FPlatformFileManager::Get();
  pIVar1 = FPlatformFileManager::GetPlatformFile(this_00);
  FindPluginsInDirectory(param_1,param_2,pIVar1);
  return;
}

// FindProgramPlugins @ 141e20b70

bool __thiscall
FPluginManager::FindProgramPlugins(FPluginManager *this,FPluginDiscoveryContext *param_1)

{
  return true;
}

// FindTargetPlugins @ 141e20b80

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FPluginManager::FindTargetPlugins(FPluginManager *this,FPluginDiscoveryContext *param_1)

{
  FString *pFVar1;
  ulonglong uVar2;
  EPluginEnabledByDefault EVar3;
  int iVar4;
  uint uVar5;
  FPlugin *pFVar6;
  FScriptContainerElement *_Src;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  ForAnyElementType FVar10;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  wchar_t *pwVar18;
  IProjectManager *pIVar19;
  longlong lVar20;
  TSharedRef<FPlugin,1> *pTVar21;
  FScopedBootTiming *this_00;
  ForAnyElementType FVar22;
  ForElementType<unsigned_int> FVar23;
  uint *puVar24;
  uint uVar25;
  FPluginReferenceDescriptor *pFVar26;
  bool bVar27;
  bool bVar28;
  undefined1 local_res20 [8];
  undefined1 local_288 [4];
  uint local_284;
  ForElementType<unsigned_int> local_280;
  ForAnyElementType local_278;
  int local_270;
  int local_26c;
  ForAnyElementType local_268;
  undefined8 local_260;
  FString local_258;
  FPluginReferenceDescriptor local_248;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_190;
  int iStack_188;
  uint uStack_184;
  undefined1 *local_180;
  undefined4 uStack_178;
  int iStack_174;
  int local_170;
  int iStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  undefined1 local_160 [16];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_150;
  FString local_148;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FScopedBootTiming local_e8;
  FScopedBootTiming local_d0;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  FScopedBootTiming local_98;
  FScopedBootTiming local_80;
  FScopedBootTiming local_68 [2];
  
  pwVar18 = FCommandLine::Get();
  bVar12 = FParse::Param(pwVar18,L"NoEnginePlugins");
  if (bVar12) {
    return true;
  }
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1600,"EnginePlugins",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
               ,0x640);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1600);
  }
  FScopedBootTiming::FScopedBootTiming(local_68,"EnginePlugins");
  bVar28 = true;
  if (CpuChannel->Enabled < 0) {
    FScopedBootTiming::FScopedBootTiming(&local_e8,"ConfigureTargetEnabledPlugins");
    FScopedBootTiming::~FScopedBootTiming(&local_e8);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1661,"ConfigureTargetEnabledPlugins",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
               ,0x67d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1661);
    FScopedBootTiming::FScopedBootTiming(&local_e8,"ConfigureTargetEnabledPlugins");
    FScopedBootTiming::~FScopedBootTiming(&local_e8);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    FScopedBootTiming::FScopedBootTiming(&local_d0,"ConfigureTargetDisabledPlugins");
    FScopedBootTiming::~FScopedBootTiming(&local_d0);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1678,"ConfigureTargetDisabledPlugins",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
               ,0x68e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1678);
    FScopedBootTiming::FScopedBootTiming(&local_d0,"ConfigureTargetDisabledPlugins");
    FScopedBootTiming::~FScopedBootTiming(&local_d0);
    FCpuProfilerTrace::OutputEndEvent();
  }
  pIVar19 = IProjectManager::Get();
  lVar20 = (**(code **)((longlong)*pIVar19 + 8))(pIVar19);
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1715,"AddPluginReferences",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
               ,0x6b3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1715);
  }
  FScopedBootTiming::FScopedBootTiming(&local_98,"AddPluginReferences");
  if (lVar20 != 0) {
    bVar28 = *(char *)(lVar20 + 0x111) == '\0';
    iVar17 = *(int *)(lVar20 + 0x50);
    pFVar26 = *(FPluginReferenceDescriptor **)(lVar20 + 0x48);
    local_278.Data = (FScriptContainerElement *)0x0;
    local_270 = iVar17;
    if (iVar17 == 0) {
      local_26c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb8,8,iVar17,0,&local_278,iVar17,&local_26c);
      ConstructItems<FPluginReferenceDescriptor,FPluginReferenceDescriptor,int>
                (local_278.Data,pFVar26,iVar17);
    }
    ::FString::PrintfImpl(&local_148,L"Enabled plugins in .uproject for %s");
    FVar10.Data = local_148.Data.AllocatorInstance.Data;
    iVar17 = local_270;
    local_108 = local_148.Data.AllocatorInstance.Data;
    iStack_100 = local_148.Data.ArrayNum + -1;
    if (local_148.Data.ArrayNum == 0) {
      iStack_100 = 0;
    }
    uVar8._4_4_ = uStack_fc;
    uVar8._0_4_ = iStack_100;
    pFVar26 = (FPluginReferenceDescriptor *)(local_278.Data + (longlong)local_270 * 0xb8);
    FVar22.Data = local_278.Data;
    do {
      if (local_270 != iVar17) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FPluginReferenceDescriptor_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if ((FPluginReferenceDescriptor *)FVar22.Data == pFVar26) {
        bVar13 = false;
        goto LAB_141e20f25;
      }
      iVar4 = (((FPluginReferenceDescriptor *)FVar22.Data)->Name).Data.ArrayNum;
      iVar16 = iVar4 + -1;
      if (iVar4 == 0) {
        pwVar18 = L"";
        iVar16 = 0;
      }
      else {
        pwVar18 = (wchar_t *)
                  (((FPluginReferenceDescriptor *)FVar22.Data)->Name).Data.AllocatorInstance.Data;
      }
      uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,pwVar18);
      iVar16 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
               FindIndexByHash<FString>
                         (&param_1->ConfiguredPluginNames,uVar15,(FString *)FVar22.Data);
      if (iVar16 == -1) {
        local_b8.DataPtr = (wchar_t *)FVar10.Data;
        local_b8._8_8_ = uVar8;
        bVar13 = ConfigureEnabledPluginForCurrentTarget
                           (this,(FPluginReferenceDescriptor *)FVar22.Data,&param_1->EnabledPlugins,
                            &local_b8,&param_1->AllowedOptionalDependencies);
        if (!bVar13) goto LAB_141e20f1d;
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (&param_1->ConfiguredPluginNames,(FString *)local_160,(bool *)FVar22.Data);
      }
      FVar22.Data = FVar22.Data + 0xb8;
    } while( true );
  }
LAB_141e20f7d:
  FScopedBootTiming::~FScopedBootTiming(&local_98);
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1733,"AddPluginsEnabledByDefault",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
               ,0x6c5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1733);
  }
  FScopedBootTiming::FScopedBootTiming(&local_80,"AddPluginsEnabledByDefault");
  ::FString::PrintfImpl(&local_258,L".uplugin files that are enabled by default");
  local_280 = (ForElementType<unsigned_int>)&(this->PluginsToConfigure).Elements.field_0x10;
  iVar17 = *(int *)&(this->PluginsToConfigure).Elements.field_0x28;
  local_190 = &this->PluginsToConfigure;
  iStack_188 = 0;
  uStack_184 = 1;
  local_170 = 0;
  iStack_174 = 0;
  if (iVar17 != 0) {
    puVar24 = *(uint **)&(this->PluginsToConfigure).Elements.field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)local_280;
    }
    uVar15 = *puVar24;
    local_170 = 0;
    while (uVar15 == 0) {
      lVar20 = (longlong)iStack_188;
      local_170 = local_170 + 0x20;
      iStack_188 = iStack_188 + 1;
      iStack_174 = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_188) goto LAB_141e21094;
      uVar15 = (puVar24 + 1)[lVar20];
    }
    uStack_184 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_184 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_160._4_4_ = (undefined4)lVar20;
    iStack_174 = local_170 + -1 + local_160._4_4_;
    if (iVar17 < iStack_174) {
      iStack_174 = iVar17;
    }
  }
LAB_141e21094:
  iStack_168 = *(int *)&(this->PluginsToConfigure).Elements.field_0x8 -
               *(int *)&(this->PluginsToConfigure).Elements.field_0x34;
  uVar15 = *(uint *)&(this->PluginsToConfigure).Elements.field_0x28;
  uStack_178 = 0xffffffff;
  TStack_130._padding_ = CONCAT44(uStack_184,iStack_188);
  uVar25 = uVar15 & 0xffffffe0;
  TStack_130.CurrentBitIndex = iStack_174;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_130._28_4_ = iStack_174;
  TStack_130.BaseBitIndex = local_170;
  uStack_110 = CONCAT44(uStack_164,iStack_168);
  local_284 = uVar15;
  local_180 = (undefined1 *)local_280;
  iStack_16c = iStack_174;
  local_150 = local_190;
  local_138 = local_190;
  TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_280;
  if ((((int)uVar15 < 0) || (iVar17 < (int)uVar15)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    uVar14 = (*pcVar7)();
    return (bool)uVar14;
  }
  uVar5 = *(int *)((longlong)local_280 + 0x18);
  if (uVar15 != uVar5) {
    FVar23 = *(ForElementType<unsigned_int> *)((longlong)local_280 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_280 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar23 = local_280;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)((longlong)FVar23 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar20 = (longlong)iVar16;
      uVar25 = uVar25 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar5;
      local_284 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_141e211c0;
      uVar15 = *(uint *)((undefined1 *)((longlong)FVar23 + 4) + lVar20 * 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_160._8_4_ = (undefined4)lVar20;
    uVar15 = local_160._8_4_ + -1 + uVar25;
    local_284 = uVar15;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
      local_284 = uVar5;
    }
  }
LAB_141e211c0:
  do {
    pTVar11 = local_138;
    if (*(int *)&(local_138->Elements).field_0x8 - *(int *)&(local_138->Elements).field_0x34 !=
        (int)uStack_110) {
      local_288[0] = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_288);
    }
    if (((TStack_130.CurrentBitIndex == uVar15) &&
        ((ForElementType<unsigned_int>)TStack_130.Array == local_280)) && (pTVar11 == local_150)) {
      if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data.AllocatorInstance.Data);
      }
      FScopedBootTiming::~FScopedBootTiming(&local_80);
      if (bVar27) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FScopedBootTiming::~FScopedBootTiming(local_68);
      if (!bVar12) {
        return true;
      }
      FCpuProfilerTrace::OutputEndEvent();
      return true;
    }
    pFVar1 = (FString *)
             (*(longlong *)&pTVar11->Elements + (longlong)TStack_130.CurrentBitIndex * 0x18);
    pTVar21 = DiscoveredPluginMapUtils::FindPluginInMap(&this->AllPlugins,pFVar1);
    if ((pTVar21 == (TSharedRef<FPlugin,1> *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("PluginPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
                            ,0xe0,L"Cannot find plugin %s"), bVar13)) {
      pcVar7 = (code *)swi(3);
      uVar14 = (*pcVar7)();
      return (bool)uVar14;
    }
    pFVar6 = pTVar21->Object;
    EVar3 = (pFVar6->Descriptor).EnabledByDefault;
    if (EVar3 == Enabled) {
      if ((pFVar6->Type == Engine) || (bVar9 = true, pFVar6->Type == Enterprise)) {
        bVar9 = false;
      }
      bVar13 = bVar28;
      if (bVar9) {
        bVar13 = true;
      }
LAB_141e212c3:
      if (bVar13) {
        iVar16 = (pFVar1->Data).ArrayNum;
        iVar17 = iVar16 + -1;
        if (iVar16 == 0) {
          pwVar18 = L"";
          iVar17 = 0;
        }
        else {
          pwVar18 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
        }
        uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar17,pwVar18);
        iVar17 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                 FindIndexByHash<FString>(&param_1->ConfiguredPluginNames,uVar15,pFVar1);
        uVar15 = local_284;
        if (iVar17 == -1) {
          iVar17 = (pFVar1->Data).ArrayNum;
          _Src = (pFVar1->Data).AllocatorInstance.Data;
          local_f8 = local_258.Data.AllocatorInstance.Data;
          local_268.Data = (FScriptContainerElement *)0x0;
          iStack_f0 = local_258.Data.ArrayNum + -1;
          if (local_258.Data.ArrayNum == 0) {
            iStack_f0 = 0;
          }
          if (iVar17 == 0) {
            local_248.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_248.Name.Data.ArrayMax = 0;
            local_248.Name.Data.ArrayNum = iVar17;
          }
          else {
            local_260._0_4_ = iVar17;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar17,0,&local_268,iVar17,(int *)((longlong)&local_260 + 4));
            memcpy(local_268.Data,_Src,(longlong)iVar17 * 2);
            local_248.Name.Data.AllocatorInstance.Data = local_268.Data;
            local_248.Name.Data.ArrayMax = local_260._4_4_;
            local_248.Name.Data.ArrayNum = (int)local_260;
          }
          local_a8._12_4_ = uStack_ec;
          local_a8.Size = iStack_f0;
          local_268.Data = (FScriptContainerElement *)0x0;
          local_248.Description.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_248.MarketplaceURL.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_248.PlatformAllowList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_248.PlatformDenyList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_248.TargetConfigurationAllowList.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_248.TargetConfigurationDenyList.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_248.TargetAllowList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_248.TargetDenyList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_248.SupportedTargetPlatforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0
          ;
          local_260 = 0;
          local_248.bEnabled = true;
          local_248.bOptional = false;
          local_248.bActivate = false;
          local_248.Description.Data.ArrayNum = 0;
          local_248.Description.Data.ArrayMax = 0;
          local_248.MarketplaceURL.Data.ArrayNum = 0;
          local_248.MarketplaceURL.Data.ArrayMax = 0;
          local_248.PlatformAllowList.ArrayNum = 0;
          local_248.PlatformAllowList.ArrayMax = 0;
          local_248.PlatformDenyList.ArrayNum = 0;
          local_248.PlatformDenyList.ArrayMax = 0;
          local_248.TargetConfigurationAllowList.ArrayNum = 0;
          local_248.TargetConfigurationAllowList.ArrayMax = 0;
          local_248.TargetConfigurationDenyList.ArrayNum = 0;
          local_248.TargetConfigurationDenyList.ArrayMax = 0;
          local_248.TargetAllowList.ArrayNum = 0;
          local_248.TargetAllowList.ArrayMax = 0;
          local_248.TargetDenyList.ArrayNum = 0;
          local_248.TargetDenyList.ArrayMax = 0;
          local_248.SupportedTargetPlatforms.ArrayNum = 0;
          local_248.SupportedTargetPlatforms.ArrayMax = 0;
          local_248.bHasExplicitPlatforms = false;
          local_248.RequestedVersion.bIsSet = false;
          local_a8.DataPtr = (wchar_t *)local_f8;
          bVar13 = ConfigureEnabledPluginForCurrentTarget
                             (this,&local_248,&param_1->EnabledPlugins,&local_a8,
                              &param_1->AllowedOptionalDependencies);
          DestructItems<FString,int>
                    ((FString *)local_248.SupportedTargetPlatforms.AllocatorInstance.Data,
                     local_248.SupportedTargetPlatforms.ArrayNum);
          if (local_248.SupportedTargetPlatforms.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.SupportedTargetPlatforms.AllocatorInstance.Data);
          }
          if (local_248.TargetDenyList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.TargetDenyList.AllocatorInstance.Data);
          }
          if (local_248.TargetAllowList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.TargetAllowList.AllocatorInstance.Data);
          }
          if (local_248.TargetConfigurationDenyList.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.TargetConfigurationDenyList.AllocatorInstance.Data);
          }
          if (local_248.TargetConfigurationAllowList.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.TargetConfigurationAllowList.AllocatorInstance.Data);
          }
          DestructItems<FString,int>
                    ((FString *)local_248.PlatformDenyList.AllocatorInstance.Data,
                     local_248.PlatformDenyList.ArrayNum);
          if (local_248.PlatformDenyList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.PlatformDenyList.AllocatorInstance.Data);
          }
          DestructItems<FString,int>
                    ((FString *)local_248.PlatformAllowList.AllocatorInstance.Data,
                     local_248.PlatformAllowList.ArrayNum);
          if (local_248.PlatformAllowList.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_248.PlatformAllowList.AllocatorInstance.Data);
          }
          if (local_248.MarketplaceURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             ) {
            FMemory::Free(local_248.MarketplaceURL.Data.AllocatorInstance.Data);
          }
          if (local_248.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Description.Data.AllocatorInstance.Data);
          }
          if (local_248.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Name.Data.AllocatorInstance.Data);
          }
          if (!bVar13) break;
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                    (&param_1->ConfiguredPluginNames,(FString *)(local_160 + 0xc),(bool *)pFVar1);
          uVar15 = local_284;
        }
      }
    }
    else if (EVar3 != Disabled) {
      if ((pFVar6->Type == Engine) || (pFVar6->Type == Enterprise)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      goto LAB_141e212c3;
    }
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  } while( true );
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  this_00 = &local_80;
  goto LAB_141e215c1;
LAB_141e20f1d:
  bVar13 = true;
LAB_141e20f25:
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  DestructItems<FPluginReferenceDescriptor,int>
            ((FPluginReferenceDescriptor *)local_278.Data,local_270);
  if (!bVar13) {
    if ((FPluginReferenceDescriptor *)local_278.Data != (FPluginReferenceDescriptor *)0x0) {
      FMemory::Free(local_278.Data);
    }
    goto LAB_141e20f7d;
  }
  if ((FPluginReferenceDescriptor *)local_278.Data != (FPluginReferenceDescriptor *)0x0) {
    FMemory::Free(local_278.Data);
  }
  this_00 = &local_98;
LAB_141e215c1:
  FScopedBootTiming::~FScopedBootTiming(this_00);
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FScopedBootTiming::~FScopedBootTiming(local_68);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return false;
}

// GetAdditionalPluginSearchPaths @ 141e21c80

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
FPluginManager::GetAdditionalPluginSearchPaths(FPluginManager *this)

{
  return &this->PluginDiscoveryPaths;
}

// GetCodePluginsForProject @ 141e22300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FPluginManager::GetCodePluginsForProject
          (FProjectDescriptor *param_1,FString *param_2,EBuildConfiguration param_3,
          EBuildTargetType param_4,
          TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
          *param_5,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_6,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_7,
          FConfigurePluginResultInfo *param_8)

{
  FString *pFVar1;
  ulonglong uVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  IProjectManager *pIVar12;
  FProjectDescriptor *pFVar13;
  byte bVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  int iVar17;
  ForAnyElementType FVar18;
  FModuleDescriptor *this;
  uint uVar19;
  FPluginReferenceDescriptor *pFVar20;
  FModuleDescriptor *pFVar21;
  uint uVar22;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar23;
  ForElementType<unsigned_int> FVar24;
  uint *puVar25;
  undefined1 auStackY_398 [32];
  bool local_338;
  undefined1 local_336;
  undefined1 local_335;
  EBuildTargetType local_334;
  EBuildConfiguration local_333;
  undefined1 local_332;
  undefined1 local_331;
  ForElementType<unsigned_int> local_330;
  ForAnyElementType local_328;
  int local_320;
  int local_31c;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_318;
  ForAnyElementType local_310;
  undefined8 local_308;
  ulonglong local_300;
  FString *local_2f8;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_2f0;
  int iStack_2e8;
  uint uStack_2e4;
  TBitArray<FDefaultBitArrayAllocator> *local_2e0;
  undefined4 uStack_2d8;
  uint uStack_2d4;
  int local_2d0;
  undefined4 uStack_2cc;
  int iStack_2c8;
  undefined4 uStack_2c4;
  FProjectDescriptor *local_2c0;
  FConfigurePluginResultInfo *local_2b8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_2b0;
  FString local_2a8;
  FString local_298;
  FPluginReferenceDescriptor local_288;
  undefined1 local_1d0 [16];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_1c0;
  int local_1b8;
  undefined1 local_1b4 [12];
  undefined8 local_1a8;
  FString local_1a0;
  int local_190;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  undefined4 local_ec;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_1c0 = param_6;
  local_2b0 = param_7;
  local_2b8 = param_8;
  local_318 = param_5;
  local_334 = param_4;
  local_333 = param_3;
  local_2f8 = param_2;
  local_2c0 = param_1;
  if (param_1 != (FProjectDescriptor *)0x0) {
    pIVar12 = IProjectManager::Get();
    pFVar13 = (FProjectDescriptor *)(**(code **)((longlong)*pIVar12 + 8))(pIVar12);
    if ((param_1 != pFVar13) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ProjectDescriptor == nullptr || ProjectDescriptor == IProjectManager::Get().GetCurrentProject()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
                           ,0x848,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_98.Elements._44_4_ = 0x80;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_b4 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_338 = true;
  if (param_1 != (FProjectDescriptor *)0x0) {
    local_338 = param_1->bDisableEnginePluginsByDefault == false;
    iVar17 = (param_1->Plugins).ArrayNum;
    pFVar20 = (FPluginReferenceDescriptor *)(param_1->Plugins).AllocatorInstance.Data;
    local_328.Data = (FScriptContainerElement *)0x0;
    local_320 = iVar17;
    if (iVar17 == 0) {
      local_31c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb8,8,iVar17,0,&local_328,iVar17,&local_31c);
      ConstructItems<FPluginReferenceDescriptor,FPluginReferenceDescriptor,int>
                (local_328.Data,pFVar20,iVar17);
    }
    iVar17 = local_320;
    pFVar20 = (FPluginReferenceDescriptor *)(local_328.Data + (longlong)local_320 * 0xb8);
    FVar18.Data = local_328.Data;
    do {
      if (local_320 != iVar17) {
        local_336 = 0;
        `TCheckedPointerIterator<FPluginReferenceDescriptor,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_336);
      }
      if ((FPluginReferenceDescriptor *)FVar18.Data == pFVar20) {
        DestructItems<FPluginReferenceDescriptor,int>
                  ((FPluginReferenceDescriptor *)local_328.Data,local_320);
        param_5 = local_318;
        if ((FPluginReferenceDescriptor *)local_328.Data != (FPluginReferenceDescriptor *)0x0) {
          FMemory::Free(local_328.Data);
          param_5 = local_318;
        }
        break;
      }
      iVar3 = (((FPluginReferenceDescriptor *)FVar18.Data)->Name).Data.ArrayNum;
      iVar11 = iVar3 + -1;
      if (iVar3 == 0) {
        pwVar16 = L"";
        iVar11 = 0;
      }
      else {
        pwVar16 = (wchar_t *)
                  (((FPluginReferenceDescriptor *)FVar18.Data)->Name).Data.AllocatorInstance.Data;
      }
      uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar16);
      iVar11 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
               FindIndexByHash<FString>(&local_98,uVar10,(FString *)FVar18.Data);
      if (iVar11 == -1) {
        local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2a8.Data.ArrayNum = 0;
        local_2a8.Data.ArrayMax = 0;
        bVar6 = ConfigureEnabledPluginForTarget
                          ((FPluginReferenceDescriptor *)FVar18.Data,param_1,&local_2a8,local_2f8,
                           param_3,param_4,param_4 == Editor,local_318,
                           (TMap<FString,FPlugin_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPlugin_*,0>_>
                            *)local_e8,local_2b0,local_2b8);
        if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
        }
        if (!bVar6) goto LAB_141e225d7;
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (&local_98,(FString *)local_1d0,(bool *)FVar18.Data);
      }
      FVar18.Data = FVar18.Data + 0xb8;
    } while( true );
  }
  uVar10 = *(uint *)&param_5->field_0x28;
  local_330 = (ForElementType<unsigned_int>)&param_5->field_0x10;
  iStack_2e8 = 0;
  local_300 = 1;
  uStack_2e4 = 1;
  local_2d0 = 0;
  uStack_2d4 = 0;
  if (uVar10 != 0) {
    puVar25 = *(uint **)&param_5->field_0x20;
    if (*(uint **)&param_5->field_0x20 == (uint *)0x0) {
      puVar25 = (uint *)local_330;
    }
    uVar22 = *puVar25;
    iStack_2e8 = 0;
    while (uVar22 == 0) {
      lVar15 = (longlong)iStack_2e8;
      local_2d0 = local_2d0 + 0x20;
      iStack_2e8 = iStack_2e8 + 1;
      uStack_2d4 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_2e8)
      goto LAB_141e22745;
      uVar22 = puVar25[lVar15 + 1];
    }
    uStack_2e4 = -uVar22 & uVar22;
    uVar2 = (ulonglong)uStack_2e4 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1d0._4_4_ = (undefined4)lVar15;
    uStack_2d4 = local_2d0 + -1 + local_1d0._4_4_;
    if ((int)uVar10 < (int)uStack_2d4) {
      uStack_2d4 = uVar10;
    }
  }
LAB_141e22745:
  uVar22 = *(uint *)&param_5->field_0x28;
  uStack_2cc = local_10c;
  iStack_2c8 = *(int *)&param_5->field_0x8 - *(int *)&param_5->field_0x34;
  uVar19 = uVar22 & 0xffffffe0;
  TStack_180._padding_ = CONCAT44(uStack_2e4,iStack_2e8);
  uStack_2d8 = 0xffffffff;
  TStack_180.CurrentBitIndex = uStack_2d4;
  TStack_180.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar22 >> 5;
  TStack_180._28_4_ = local_10c;
  TStack_180.BaseBitIndex = local_2d0;
  uStack_160 = CONCAT44(uStack_2c4,iStack_2c8);
  local_2f0 = param_5;
  local_2e0 = (TBitArray<FDefaultBitArrayAllocator> *)local_330;
  local_188 = param_5;
  TStack_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_330;
  if ((((int)uVar22 < 0) || ((int)uVar10 < (int)uVar22)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  uVar10 = *(int *)((longlong)local_330 + 0x18);
  pTVar23 = local_318;
  if (uVar22 != uVar10) {
    FVar24 = *(ForElementType<unsigned_int> *)((longlong)local_330 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_330 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar24 = local_330;
    }
    uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)((longlong)FVar24 + (longlong)iVar17 * 4);
    while (uVar22 == 0) {
      lVar15 = (longlong)iVar17;
      uVar19 = uVar19 + 0x20;
      iVar17 = iVar17 + 1;
      uVar22 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_141e22860;
      uVar22 = *(uint *)((undefined1 *)((longlong)FVar24 + 4) + lVar15 * 4);
    }
    uVar2 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_190 = (int)lVar15;
    uVar22 = (uVar19 - 1) + local_190;
    if ((int)uVar10 < (int)uVar22) {
      uVar22 = uVar10;
    }
  }
LAB_141e22860:
  do {
    pTVar5 = local_188;
    if (*(int *)&local_188->field_0x8 - *(int *)&local_188->field_0x34 != (int)uStack_160) {
      local_335 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_335);
    }
    uVar10 = local_c0;
    if (((TStack_180.CurrentBitIndex == uVar22) &&
        ((ForElementType<unsigned_int>)TStack_180.Array == local_330)) && (pTVar5 == pTVar23)) {
      if (((byte)(param_4 - Editor) < 2) || (1 < (byte)(param_3 - Shipping))) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      iStack_2e8 = 0;
      iVar17 = 0;
      local_2d0 = 0;
      uStack_2d4 = 0;
      if (local_c0 == 0) goto LAB_141e22cd5;
      puVar25 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar25 = local_c8;
      }
      uVar22 = *puVar25;
      local_2d0 = iVar17;
      if (uVar22 != 0) goto LAB_141e22cac;
      goto LAB_141e22c90;
    }
    lVar15 = *(longlong *)pTVar5;
    iVar17 = *(int *)(lVar15 + 0x18 + (longlong)TStack_180.CurrentBitIndex * 0x28);
    pFVar1 = (FString *)(lVar15 + (longlong)TStack_180.CurrentBitIndex * 0x28);
    uVar19 = iVar17 - 1;
    uVar10 = 0;
    if ((int)uVar19 < iVar17) {
      uVar10 = ~uVar19 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    lVar15 = *(longlong *)
              (pFVar1[1].Data.AllocatorInstance.Data +
              (longlong)pFVar1[1].Data.ArrayNum * 0x10 + -0x10);
    iVar17 = 0;
    if (*(char *)(lVar15 + 0x17f) == '\x01') {
      if ((*(int *)(lVar15 + 0x250) == 0) ||
         (iVar11 = (int)local_300, *(int *)(lVar15 + 0x250) == 1)) {
        iVar11 = iVar17;
      }
      cVar8 = local_338;
      if (iVar11 == 1) {
        cVar8 = (char)local_300;
      }
LAB_141e22963:
      if (cVar8 != '\0') {
        iVar11 = (pFVar1->Data).ArrayNum;
        if (iVar11 == 0) {
          pwVar16 = L"";
        }
        else {
          pwVar16 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
          iVar17 = iVar11 + -1;
        }
        uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar17,pwVar16);
        iVar17 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                 FindIndexByHash<FString>(&local_98,uVar10,pFVar1);
        if (iVar17 == -1) {
          iVar17 = (pFVar1->Data).ArrayNum;
          _Src = (pFVar1->Data).AllocatorInstance.Data;
          local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_298.Data.ArrayNum = 0;
          local_298.Data.ArrayMax = 0;
          local_310.Data = (FScriptContainerElement *)0x0;
          if (iVar17 == 0) {
            local_288.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_288.Name.Data.ArrayMax = 0;
            local_288.Name.Data.ArrayNum = iVar17;
          }
          else {
            local_308._0_4_ = iVar17;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar17,0,&local_310,iVar17,(int *)((longlong)&local_308 + 4));
            memcpy(local_310.Data,_Src,(longlong)iVar17 * 2);
            local_288.Name.Data.AllocatorInstance.Data = local_310.Data;
            local_288.Name.Data.ArrayMax = local_308._4_4_;
            local_288.Name.Data.ArrayNum = (int)local_308;
          }
          local_310.Data = (FScriptContainerElement *)0x0;
          local_288.Description.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_288.MarketplaceURL.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_288.PlatformAllowList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_288.PlatformDenyList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_288.TargetConfigurationAllowList.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_288.TargetConfigurationDenyList.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_288.TargetAllowList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_288.TargetDenyList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_288.SupportedTargetPlatforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0
          ;
          local_308 = 0;
          local_288.bEnabled = true;
          local_288.bOptional = false;
          local_288.bActivate = false;
          local_288.Description.Data.ArrayNum = 0;
          local_288.Description.Data.ArrayMax = 0;
          local_288.MarketplaceURL.Data.ArrayNum = 0;
          local_288.MarketplaceURL.Data.ArrayMax = 0;
          local_288.PlatformAllowList.ArrayNum = 0;
          local_288.PlatformAllowList.ArrayMax = 0;
          local_288.PlatformDenyList.ArrayNum = 0;
          local_288.PlatformDenyList.ArrayMax = 0;
          local_288.TargetConfigurationAllowList.ArrayNum = 0;
          local_288.TargetConfigurationAllowList.ArrayMax = 0;
          local_288.TargetConfigurationDenyList.ArrayNum = 0;
          local_288.TargetConfigurationDenyList.ArrayMax = 0;
          local_288.TargetAllowList.ArrayNum = 0;
          local_288.TargetAllowList.ArrayMax = 0;
          local_288.TargetDenyList.ArrayNum = 0;
          local_288.TargetDenyList.ArrayMax = 0;
          local_288.SupportedTargetPlatforms.ArrayNum = 0;
          local_288.SupportedTargetPlatforms.ArrayMax = 0;
          local_288.bHasExplicitPlatforms = false;
          local_288.RequestedVersion.bIsSet = false;
          bVar6 = ConfigureEnabledPluginForTarget
                            (&local_288,local_2c0,&local_298,local_2f8,param_3,param_4,
                             param_4 == Editor,local_318,
                             (TMap<FString,FPlugin_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPlugin_*,0>_>
                              *)local_e8,local_2b0,local_2b8);
          DestructItems<FString,int>
                    ((FString *)local_288.SupportedTargetPlatforms.AllocatorInstance.Data,
                     local_288.SupportedTargetPlatforms.ArrayNum);
          if (local_288.SupportedTargetPlatforms.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.SupportedTargetPlatforms.AllocatorInstance.Data);
          }
          if (local_288.TargetDenyList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.TargetDenyList.AllocatorInstance.Data);
          }
          if (local_288.TargetAllowList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.TargetAllowList.AllocatorInstance.Data);
          }
          if (local_288.TargetConfigurationDenyList.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.TargetConfigurationDenyList.AllocatorInstance.Data);
          }
          if (local_288.TargetConfigurationAllowList.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.TargetConfigurationAllowList.AllocatorInstance.Data);
          }
          DestructItems<FString,int>
                    ((FString *)local_288.PlatformDenyList.AllocatorInstance.Data,
                     local_288.PlatformDenyList.ArrayNum);
          if (local_288.PlatformDenyList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.PlatformDenyList.AllocatorInstance.Data);
          }
          DestructItems<FString,int>
                    ((FString *)local_288.PlatformAllowList.AllocatorInstance.Data,
                     local_288.PlatformAllowList.ArrayNum);
          if (local_288.PlatformAllowList.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_288.PlatformAllowList.AllocatorInstance.Data);
          }
          if (local_288.MarketplaceURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             ) {
            FMemory::Free(local_288.MarketplaceURL.Data.AllocatorInstance.Data);
          }
          if (local_288.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Description.Data.AllocatorInstance.Data);
          }
          if (local_288.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Name.Data.AllocatorInstance.Data);
          }
          if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.Data.AllocatorInstance.Data);
          }
          if (!bVar6) goto LAB_141e225f4;
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                    (&local_98,(FString *)local_1b4,(bool *)pFVar1);
          pTVar23 = local_318;
        }
      }
    }
    else if (*(char *)(lVar15 + 0x17f) != '\x02') {
      if ((*(int *)(lVar15 + 0x250) == 0) || (*(int *)(lVar15 + 0x250) == 1)) {
        cVar8 = '\0';
      }
      else {
        cVar8 = '\x01';
      }
      goto LAB_141e22963;
    }
    TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
  } while( true );
LAB_141e225d7:
  DestructItems<FPluginReferenceDescriptor,int>
            ((FPluginReferenceDescriptor *)local_328.Data,local_320);
  if ((FPluginReferenceDescriptor *)local_328.Data != (FPluginReferenceDescriptor *)0x0) {
    FMemory::Free(local_328.Data);
  }
LAB_141e225f4:
  bVar6 = false;
  goto LAB_141e225f6;
  while (uVar22 = puVar25[lVar15 + 1], iVar17 = local_2d0, uVar22 == 0) {
LAB_141e22c90:
    lVar15 = (longlong)iStack_2e8;
    local_2d0 = iVar17 + 0x20;
    iStack_2e8 = iStack_2e8 + 1;
    uStack_2d4 = local_c0;
    if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_2e8)
    goto LAB_141e22cd5;
  }
LAB_141e22cac:
  local_300 = (ulonglong)(-uVar22 & uVar22);
  uVar2 = local_300 * 2 + 1;
  lVar15 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  local_1b8 = (int)lVar15;
  uStack_2d4 = local_1b8 + -1 + local_2d0;
  if ((int)local_c0 < (int)uStack_2d4) {
    uStack_2d4 = local_c0;
  }
LAB_141e22cd5:
  local_2f0 = (TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
               *)local_e8;
  uVar22 = local_c0 & 0xffffffe0;
  uStack_2e4 = (uint)local_300;
  uStack_2cc = local_ec;
  local_2e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  iStack_2c8 = local_e8._8_4_ - local_b4;
  uStack_2d8 = 0xffffffff;
  TStack_150.CurrentBitIndex = uStack_2d4;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_2e4,iStack_2e8);
  iVar17 = (int)local_c0 >> 5;
  TStack_150._28_4_ = local_ec;
  TStack_150.BaseBitIndex = local_2d0;
  uStack_130 = CONCAT44(uStack_2c4,iStack_2c8);
  bVar14 = (byte)local_c0;
  local_158 = local_2f0;
  TStack_150.Array = local_2e0;
  if (((int)local_c0 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  if (uVar10 != local_c0) {
    puVar25 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar25 = local_c8;
    }
    uVar10 = -1 << (bVar14 & 0x1f) & puVar25[iVar17];
    while (uVar10 == 0) {
      lVar15 = (longlong)iVar17;
      uVar22 = uVar22 + 0x20;
      iVar17 = iVar17 + 1;
      uVar10 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_141e22df0;
      uVar10 = puVar25[lVar15 + 1];
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar10 = (int)lVar15 + -1 + uVar22;
    if ((int)local_c0 < (int)uVar10) {
      uVar10 = local_c0;
    }
  }
LAB_141e22df0:
  while( true ) {
    pTVar23 = local_158;
    if (*(int *)&local_158->field_0x8 - *(int *)&local_158->field_0x34 != (int)uStack_130) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FPlugin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_332);
    }
    if (((TStack_150.CurrentBitIndex == uVar10) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       (pTVar23 ==
        (TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
         *)local_e8)) break;
    local_2c0 = (FProjectDescriptor *)
                (*(longlong *)pTVar23 + (longlong)TStack_150.CurrentBitIndex * 0x20);
    lVar15 = *(longlong *)&(local_2c0->EngineAssociation).Data.ArrayNum;
    iVar17 = *(int *)(lVar15 + 0x138);
    this = *(FModuleDescriptor **)(lVar15 + 0x130);
    pFVar21 = this + iVar17;
    while( true ) {
      if (*(int *)(lVar15 + 0x138) != iVar17) {
        `TCheckedPointerIterator<FModuleDescriptor_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_331);
      }
      if (this == pFVar21) goto LAB_141e22f19;
      local_1b4._4_8_ = 0;
      local_1a8 = 0;
      local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a0.Data.ArrayNum = 0;
      local_1a0.Data.ArrayMax = 0;
      bVar9 = FModuleDescriptor::IsCompiledInConfiguration
                        (this,local_2f8,local_333,&local_1a0,local_334,bVar6,param_4 != Editor,
                         (FString *)(local_1b4 + 4));
      if (bVar9) break;
      this = this + 1;
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (local_1c0,(FString *)(local_1d0 + 8),(bool *)local_2c0);
LAB_141e22f19:
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  }
  bVar6 = true;
LAB_141e225f6:
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FPlugin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FPlugin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FPlugin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  return bVar6;
}

// GetDiscoveredPlugins @ 141e23120

TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> * __thiscall
FPluginManager::GetDiscoveredPlugins
          (FPluginManager *this,
          TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_res20;
  undefined8 local_b8;
  TReferenceControllerBase<1> *local_b0;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
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
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar14 = *(int *)&(this->AllPlugins).field_0x8 - *(int *)&(this->AllPlugins).field_0x34;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (0 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar14,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iStack_a0 = 0;
  iVar8 = *(int *)&(this->AllPlugins).field_0x28;
  puVar2 = &(this->AllPlugins).field_0x10;
  local_res20 = &this->AllPlugins;
  uStack_9c = 1;
  iStack_8c = iStack_a0;
  local_88 = iStack_a0;
  if (iVar8 != 0) {
    puVar16 = *(uint **)&(this->AllPlugins).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar14 = *puVar16;
    iStack_a0 = 0;
    local_88 = 0;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_141e2320f;
      uVar14 = puVar16[lVar10 + 1];
    }
    uStack_9c = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_9c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_8c = local_res10 + -1 + local_88;
    if (iVar8 < iStack_8c) {
      iStack_8c = iVar8;
    }
  }
LAB_141e2320f:
  iStack_80 = *(int *)&(this->AllPlugins).field_0x8 - *(int *)&(this->AllPlugins).field_0x34;
  uVar14 = *(uint *)&(this->AllPlugins).field_0x28;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  uVar17 = uVar14 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar14 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = local_res20;
  local_98 = puVar2;
  iStack_84 = iStack_8c;
  local_78 = local_res20;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar8 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar9;
  }
  pTVar5 = local_res20;
  uVar11 = *(uint *)&(this->AllPlugins).field_0x28;
  if (uVar14 != uVar11) {
    puVar15 = *(undefined1 **)&(this->AllPlugins).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      uVar14 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_141e23320;
      uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    uVar14 = local_res18 + -1 + uVar17;
    if ((int)uVar11 < (int)uVar14) {
      uVar14 = uVar11;
    }
  }
LAB_141e23320:
  while( true ) {
    pTVar6 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar14) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == pTVar5))
    {
      return __return_storage_ptr__;
    }
    lVar10 = *(longlong *)pTVar6;
    iVar8 = *(int *)(lVar10 + 0x18 + (longlong)TStack_70.CurrentBitIndex * 0x28);
    lVar10 = lVar10 + (longlong)TStack_70.CurrentBitIndex * 0x28;
    uVar11 = iVar8 - 1;
    uVar17 = 0;
    if ((int)uVar11 < iVar8) {
      uVar17 = ~uVar11 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
    lVar10 = (longlong)*(int *)(lVar10 + 0x18) * 0x10 + *(longlong *)(lVar10 + 0x10);
    local_b8 = *(undefined8 *)(lVar10 + -0x10);
    local_b0 = *(TReferenceControllerBase<1> **)(lVar10 + -8);
    if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_b8) &&
        ((FScriptContainerElement *)&local_b8 < pFVar12 + (longlong)*piVar1 * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) break;
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar12 = local_b8;
    *(TReferenceControllerBase<1> **)(pFVar12 + 8) = local_b0;
    if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  pcVar4 = (code *)swi(3);
  pTVar9 = (TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
  return pTVar9;
}

// GetEnabledPlugins @ 141e234e0

TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> * __thiscall
FPluginManager::GetEnabledPlugins
          (FPluginManager *this,
          TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_res20;
  longlong local_b8;
  TReferenceControllerBase<1> *local_b0;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
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
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar16 = *(int *)&(this->AllPlugins).field_0x8 - *(int *)&(this->AllPlugins).field_0x34;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if (0 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar16,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iStack_a0 = 0;
  iVar9 = *(int *)&(this->AllPlugins).field_0x28;
  puVar2 = &(this->AllPlugins).field_0x10;
  local_res20 = &this->AllPlugins;
  uStack_9c = 1;
  iStack_8c = iStack_a0;
  local_88 = iStack_a0;
  if (iVar9 != 0) {
    puVar18 = *(uint **)&(this->AllPlugins).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar2;
    }
    uVar16 = *puVar18;
    iStack_a0 = 0;
    local_88 = 0;
    while (uVar16 == 0) {
      lVar11 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_141e235cf;
      uVar16 = puVar18[lVar11 + 1];
    }
    uStack_9c = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_9c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iStack_8c = local_res10 + -1 + local_88;
    if (iVar9 < iStack_8c) {
      iStack_8c = iVar9;
    }
  }
LAB_141e235cf:
  iStack_80 = *(int *)&(this->AllPlugins).field_0x8 - *(int *)&(this->AllPlugins).field_0x34;
  uVar16 = *(uint *)&(this->AllPlugins).field_0x28;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  uVar19 = uVar16 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar16 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = local_res20;
  local_98 = puVar2;
  iStack_84 = iStack_8c;
  local_78 = local_res20;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar16 < 0) || (iVar9 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar10;
  }
  pTVar6 = local_res20;
  uVar13 = *(uint *)&(this->AllPlugins).field_0x28;
  if (uVar16 != uVar13) {
    puVar17 = *(undefined1 **)&(this->AllPlugins).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar2;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar15;
      uVar19 = uVar19 + 0x20;
      iVar15 = iVar15 + 1;
      uVar16 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_141e236e0;
      uVar16 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    uVar16 = local_res18 + -1 + uVar19;
    if ((int)uVar13 < (int)uVar16) {
      uVar16 = uVar13;
    }
  }
LAB_141e236e0:
  do {
    pTVar7 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar16) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar7 == pTVar6))
    {
      return __return_storage_ptr__;
    }
    lVar11 = *(longlong *)pTVar7;
    iVar9 = *(int *)(lVar11 + 0x18 + (longlong)TStack_70.CurrentBitIndex * 0x28);
    lVar11 = lVar11 + (longlong)TStack_70.CurrentBitIndex * 0x28;
    uVar13 = iVar9 - 1;
    uVar19 = 0;
    if ((int)uVar13 < iVar9) {
      uVar19 = ~uVar13 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar10;
    }
    lVar12 = (longlong)*(int *)(lVar11 + 0x18);
    lVar11 = *(longlong *)(lVar11 + 0x10);
    lVar4 = *(longlong *)(lVar11 + -0x10 + lVar12 * 0x10);
    if ((*(byte *)(lVar4 + 0x254) & 1) != 0) {
      local_b0 = *(TReferenceControllerBase<1> **)(lVar11 + -8 + lVar12 * 0x10);
      if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_b8 = lVar4;
      if (((pFVar14 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar14 + (longlong)*piVar1 * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      iVar9 = __return_storage_ptr__->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
      pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      *(longlong *)pFVar14 = local_b8;
      *(TReferenceControllerBase<1> **)(pFVar14 + 8) = local_b0;
      if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// GetEnabledPluginsWithContent @ 141e238b0

TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> * __thiscall
FPluginManager::GetEnabledPluginsWithContent
          (FPluginManager *this,
          TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_res20;
  longlong local_b8;
  TReferenceControllerBase<1> *local_b0;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
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
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar15 = *(int *)&(this->AllPlugins).field_0x8 - *(int *)&(this->AllPlugins).field_0x34;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (0 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar15,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iStack_a0 = 0;
  iVar8 = *(int *)&(this->AllPlugins).field_0x28;
  puVar2 = &(this->AllPlugins).field_0x10;
  local_res20 = &this->AllPlugins;
  uStack_9c = 1;
  iStack_8c = iStack_a0;
  local_88 = iStack_a0;
  if (iVar8 != 0) {
    puVar17 = *(uint **)&(this->AllPlugins).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar15 = *puVar17;
    iStack_a0 = 0;
    local_88 = 0;
    while (uVar15 == 0) {
      lVar10 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_141e2399f;
      uVar15 = puVar17[lVar10 + 1];
    }
    uStack_9c = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_9c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_8c = local_88 + -1 + local_res10;
    if (iVar8 < iStack_8c) {
      iStack_8c = iVar8;
    }
  }
LAB_141e2399f:
  iStack_80 = *(int *)&(this->AllPlugins).field_0x8 - *(int *)&(this->AllPlugins).field_0x34;
  uVar15 = *(uint *)&(this->AllPlugins).field_0x28;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  uVar18 = uVar15 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar15 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = local_res20;
  local_98 = puVar2;
  iStack_84 = iStack_8c;
  local_78 = local_res20;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar15 < 0) || (iVar8 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar9;
  }
  pTVar5 = local_res20;
  uVar11 = *(uint *)&(this->AllPlugins).field_0x28;
  if (uVar15 != uVar11) {
    puVar16 = *(undefined1 **)&(this->AllPlugins).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar15 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_141e23ab0;
      uVar15 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    uVar15 = local_res18 + -1 + uVar18;
    if ((int)uVar11 < (int)uVar15) {
      uVar15 = uVar11;
    }
  }
LAB_141e23ab0:
  do {
    pTVar6 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar15) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == pTVar5))
    {
      return __return_storage_ptr__;
    }
    lVar10 = *(longlong *)pTVar6;
    iVar8 = *(int *)(lVar10 + 0x18 + (longlong)TStack_70.CurrentBitIndex * 0x28);
    lVar10 = lVar10 + (longlong)TStack_70.CurrentBitIndex * 0x28;
    uVar11 = iVar8 - 1;
    uVar18 = 0;
    if ((int)uVar11 < iVar8) {
      uVar18 = ~uVar11 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
    lVar12 = (longlong)*(int *)(lVar10 + 0x18) * 0x10 + *(longlong *)(lVar10 + 0x10);
    lVar10 = *(longlong *)(lVar12 + -0x10);
    if (((*(byte *)(lVar10 + 0x254) & 1) != 0) && (*(char *)(lVar10 + 0x180) != '\0')) {
      local_b0 = *(TReferenceControllerBase<1> **)(lVar12 + -8);
      if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_b8 = lVar10;
      if (((pFVar13 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar13 + (longlong)*piVar1 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(longlong *)pFVar13 = local_b8;
      *(TReferenceControllerBase<1> **)(pFVar13 + 8) = local_b0;
      if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// GetEnabledPluginsWithContentOrVerse @ 141e23c90

TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> * __thiscall
FPluginManager::GetEnabledPluginsWithContentOrVerse
          (FPluginManager *this,
          TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_res20;
  longlong local_b8;
  TReferenceControllerBase<1> *local_b0;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
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
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar15 = *(int *)&(this->AllPlugins).field_0x8 - *(int *)&(this->AllPlugins).field_0x34;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (0 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar15,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iStack_a0 = 0;
  iVar8 = *(int *)&(this->AllPlugins).field_0x28;
  puVar2 = &(this->AllPlugins).field_0x10;
  local_res20 = &this->AllPlugins;
  uStack_9c = 1;
  iStack_8c = iStack_a0;
  local_88 = iStack_a0;
  if (iVar8 != 0) {
    puVar17 = *(uint **)&(this->AllPlugins).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar15 = *puVar17;
    iStack_a0 = 0;
    local_88 = 0;
    while (uVar15 == 0) {
      lVar10 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_141e23d7f;
      uVar15 = puVar17[lVar10 + 1];
    }
    uStack_9c = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_9c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_8c = local_88 + -1 + local_res10;
    if (iVar8 < iStack_8c) {
      iStack_8c = iVar8;
    }
  }
LAB_141e23d7f:
  iStack_80 = *(int *)&(this->AllPlugins).field_0x8 - *(int *)&(this->AllPlugins).field_0x34;
  uVar15 = *(uint *)&(this->AllPlugins).field_0x28;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  uVar18 = uVar15 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar15 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = local_res20;
  local_98 = puVar2;
  iStack_84 = iStack_8c;
  local_78 = local_res20;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar15 < 0) || (iVar8 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar9;
  }
  pTVar5 = local_res20;
  uVar11 = *(uint *)&(this->AllPlugins).field_0x28;
  if (uVar15 != uVar11) {
    puVar16 = *(undefined1 **)&(this->AllPlugins).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar15 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_141e23e90;
      uVar15 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    uVar15 = local_res18 + -1 + uVar18;
    if ((int)uVar11 < (int)uVar15) {
      uVar15 = uVar11;
    }
  }
LAB_141e23e90:
  do {
    pTVar6 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar15) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == pTVar5))
    {
      return __return_storage_ptr__;
    }
    lVar10 = *(longlong *)pTVar6;
    iVar8 = *(int *)(lVar10 + 0x18 + (longlong)TStack_70.CurrentBitIndex * 0x28);
    lVar10 = lVar10 + (longlong)TStack_70.CurrentBitIndex * 0x28;
    uVar11 = iVar8 - 1;
    uVar18 = 0;
    if ((int)uVar11 < iVar8) {
      uVar18 = ~uVar11 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
    lVar12 = (longlong)*(int *)(lVar10 + 0x18) * 0x10 + *(longlong *)(lVar10 + 0x10);
    lVar10 = *(longlong *)(lVar12 + -0x10);
    if (((*(byte *)(lVar10 + 0x254) & 1) != 0) &&
       ((*(char *)(lVar10 + 0x180) != '\0' || (*(char *)(lVar10 + 0x181) != '\0')))) {
      local_b0 = *(TReferenceControllerBase<1> **)(lVar12 + -8);
      if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_b8 = lVar10;
      if (((pFVar13 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar13 + (longlong)*piVar1 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(longlong *)pFVar13 = local_b8;
      *(TReferenceControllerBase<1> **)(pFVar13 + 8) = local_b0;
      if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// GetEnabledPluginsWithVerse @ 141e24070

TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> * __thiscall
FPluginManager::GetEnabledPluginsWithVerse
          (FPluginManager *this,
          TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_res20;
  longlong local_b8;
  TReferenceControllerBase<1> *local_b0;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
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
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar15 = *(int *)&(this->AllPlugins).field_0x8 - *(int *)&(this->AllPlugins).field_0x34;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (0 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar15,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iStack_a0 = 0;
  iVar8 = *(int *)&(this->AllPlugins).field_0x28;
  puVar2 = &(this->AllPlugins).field_0x10;
  local_res20 = &this->AllPlugins;
  uStack_9c = 1;
  iStack_8c = iStack_a0;
  local_88 = iStack_a0;
  if (iVar8 != 0) {
    puVar17 = *(uint **)&(this->AllPlugins).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar15 = *puVar17;
    iStack_a0 = 0;
    local_88 = 0;
    while (uVar15 == 0) {
      lVar10 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_141e2415f;
      uVar15 = puVar17[lVar10 + 1];
    }
    uStack_9c = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_9c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_8c = local_88 + -1 + local_res10;
    if (iVar8 < iStack_8c) {
      iStack_8c = iVar8;
    }
  }
LAB_141e2415f:
  iStack_80 = *(int *)&(this->AllPlugins).field_0x8 - *(int *)&(this->AllPlugins).field_0x34;
  uVar15 = *(uint *)&(this->AllPlugins).field_0x28;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  uVar18 = uVar15 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar15 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = local_res20;
  local_98 = puVar2;
  iStack_84 = iStack_8c;
  local_78 = local_res20;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar15 < 0) || (iVar8 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar9;
  }
  pTVar5 = local_res20;
  uVar11 = *(uint *)&(this->AllPlugins).field_0x28;
  if (uVar15 != uVar11) {
    puVar16 = *(undefined1 **)&(this->AllPlugins).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar15 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_141e24270;
      uVar15 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    uVar15 = local_res18 + -1 + uVar18;
    if ((int)uVar11 < (int)uVar15) {
      uVar15 = uVar11;
    }
  }
LAB_141e24270:
  do {
    pTVar6 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar15) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == pTVar5))
    {
      return __return_storage_ptr__;
    }
    lVar10 = *(longlong *)pTVar6;
    iVar8 = *(int *)(lVar10 + 0x18 + (longlong)TStack_70.CurrentBitIndex * 0x28);
    lVar10 = lVar10 + (longlong)TStack_70.CurrentBitIndex * 0x28;
    uVar11 = iVar8 - 1;
    uVar18 = 0;
    if ((int)uVar11 < iVar8) {
      uVar18 = ~uVar11 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
    lVar12 = (longlong)*(int *)(lVar10 + 0x18) * 0x10 + *(longlong *)(lVar10 + 0x10);
    lVar10 = *(longlong *)(lVar12 + -0x10);
    if (((*(byte *)(lVar10 + 0x254) & 1) != 0) &&
       (((*(char *)(lVar10 + 0x181) != '\0' ||
         ((*(char *)(lVar10 + 0x180) != '\0' && (*(char *)(lVar10 + 0x17d) != '\0')))) &&
        ((*(byte *)(lVar10 + 0x254) & 2) != 0)))) {
      local_b0 = *(TReferenceControllerBase<1> **)(lVar12 + -8);
      if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_b8 = lVar10;
      if (((pFVar13 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar13 + (longlong)*piVar1 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(longlong *)pFVar13 = local_b8;
      *(TReferenceControllerBase<1> **)(pFVar13 + 8) = local_b0;
      if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// GetExplanationForUnavailablePackage @ 141e24470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPluginManager::GetExplanationForUnavailablePackage
          (FPluginManager *this,FName *param_1,TStringBuilderBase<wchar_t> *param_2)

{
  IPlugin *pIVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  TSharedPtr<IPlugin,1> *pTVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  FString local_58;
  TSharedPtr<IPlugin,1> local_48;
  FDestructionSentinel local_38;
  
  ::FName::ToString(param_1,&local_58);
  pTVar8 = FindPluginFromPath(this,&local_48,&local_58);
  pIVar1 = pTVar8->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if ((pIVar1 != (IPlugin *)0x0) && ((pIVar1[0x18].field_0x14 & 2) == 0)) {
    TStringBuilderBase<wchar_t>::AppendfImpl
              (param_2,
               L"Skipped package %s was expected to be found in plugin %s, however that plugin is not mounted. [ExplicitlyLoaded = %s, Enabled = %s]."
              );
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::Delegate._16_8_ = ___xmm_00000000000000020000000000000000;
    ::Delegate._24_8_ = _UNK_150631d48;
    ::Delegate._0_8_ = 0;
    ::Delegate._8_8_ = 0;
    atexit(`FPluginManager::GetExplanationForUnavailablePackageWithPluginInfoDelegate'::__l2::
           _dynamic_atexit_destructor_for__Delegate__);
    _Init_thread_footer(&::_TSS0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&::Delegate,
             (FWriteAccessScope *)&local_38);
  bVar4 = false;
  iVar9 = ::Delegate._28_4_ + 1;
  uVar10 = ::Delegate._16_4_ - 1;
  ::Delegate._28_4_ = iVar9;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (int)::Delegate._16_4_) {
        uVar7 = ~uVar10 >> 0x1f;
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
      if (((*(int *)(lVar11 + 8 + ::Delegate._8_8_) == 0) ||
          (plVar2 = *(longlong **)(lVar11 + ::Delegate._8_8_), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,&local_58,pIVar1,param_2), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar11 = lVar11 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
    iVar9 = ::Delegate._28_4_;
  }
  ::Delegate._28_4_ = iVar9 + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&::Delegate,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// GetExplanationForUnavailablePackageWithPluginInfoDelegate @ 141e24730

TMulticastDelegate<void___cdecl(FString_const_&,IPlugin_*,TStringBuilderBase<wchar_t>_&),FDefaultDelegateUserPolicy>
* __thiscall
FPluginManager::GetExplanationForUnavailablePackageWithPluginInfoDelegate(FPluginManager *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FPluginManager::GetExplanationForUnavailablePackageWithPluginInfoDelegate'::__l2::
             _dynamic_atexit_destructor_for__Delegate__);
      _Init_thread_footer(&::_TSS0);
      return &::Delegate;
    }
  }
  return &::Delegate;
}

// GetExternalPluginSources @ 141e249e0

void __thiscall
FPluginManager::GetExternalPluginSources
          (FPluginManager *this,
          TSet<FExternalPluginPath,DefaultKeyFuncs<FExternalPluginPath,0>,FDefaultSetAllocator>
          *param_1)

{
  void *_Src;
  longlong lVar1;
  IProjectManager *pIVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  ForAnyElementType local_58;
  int local_50;
  int local_4c [5];
  
  TSet<FExternalPluginPath,DefaultKeyFuncs<FExternalPluginPath,0>,FDefaultSetAllocator>::
  Append<FDefaultSetAllocator>(param_1,&this->ExternalPluginSources);
  pIVar2 = IProjectManager::Get();
  plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x98))(pIVar2);
  lVar1 = plVar3[1];
  puVar4 = (undefined8 *)*plVar3;
  puVar5 = puVar4 + (longlong)(int)lVar1 * 2;
  while( true ) {
    if ((int)plVar3[1] != (int)lVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (puVar4 == puVar5) break;
    local_50 = *(int *)(puVar4 + 1);
    lVar6 = (longlong)local_50;
    _Src = (void *)*puVar4;
    local_58.Data = (FScriptContainerElement *)0x0;
    if (local_50 == 0) {
      local_4c[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_50,0,&local_58,local_50,local_4c);
      memcpy(local_58.Data,_Src,lVar6 * 2);
    }
    local_4c[1] = 0;
    TSet<FExternalPluginPath,DefaultKeyFuncs<FExternalPluginPath,0>,FDefaultSetAllocator>::
    Emplace<FExternalPluginPath>(param_1,(FExternalPluginPath *)&stack0x00000018,(bool *)&local_58);
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    puVar4 = puVar4 + 2;
  }
  return;
}

// GetLastCompletedLoadingPhase @ 141e24eb0

Type __thiscall FPluginManager::GetLastCompletedLoadingPhase(FPluginManager *this)

{
  return this->LastCompletedLoadingPhase;
}

// GetLocalizationPathsForEnabledPlugins @ 141e24ee0

void __thiscall
FPluginManager::GetLocalizationPathsForEnabledPlugins
          (FPluginManager *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  IPlugin *pIVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->AllPlugins).field_0x28;
  puVar1 = &(this->AllPlugins).field_0x10;
  iVar12 = 0;
  iVar14 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->AllPlugins).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141e24f8d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = iVar14 + -1 + (int)lVar9;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_141e24f8d:
  uVar11 = *(uint *)&(this->AllPlugins).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->AllPlugins).field_0x8 -
                       *(int *)&(this->AllPlugins).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->AllPlugins).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->AllPlugins).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141e25090;
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
LAB_141e25090:
  while( true ) {
    if (*(int *)&(this->AllPlugins).field_0x8 - *(int *)&(this->AllPlugins).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    iVar3 = *(int *)(*(longlong *)&this->AllPlugins + 0x18 +
                    (longlong)TStack_60.CurrentBitIndex * 0x28);
    lVar9 = *(longlong *)&this->AllPlugins + (longlong)TStack_60.CurrentBitIndex * 0x28;
    uVar10 = iVar3 - 1;
    uVar7 = 0;
    if ((int)uVar10 < iVar3) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar4 = *(IPlugin **)
              (*(longlong *)(lVar9 + 0x10) + -0x10 + (longlong)*(int *)(lVar9 + 0x18) * 0x10);
    if (((pIVar4[0x18].field_0x14 & 1) != 0) &&
       (((pIVar4[0x10].field_0x9 == '\0' || (pIVar4[0x18].field_0x15 != '\0')) &&
        (*(int *)&pIVar4[0xd].field_0x10 != 0)))) {
      PluginLocalizationUtils::GetLocalizationPathsForPlugin(pIVar4,param_1);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetPluginDependencies @ 141e25620

bool __thiscall
FPluginManager::GetPluginDependencies
          (FPluginManager *this,FString *param_1,
          TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_> *param_2)

{
  FPlugin *pFVar1;
  TSharedRef<FPlugin,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar2 = DiscoveredPluginMapUtils::FindPluginInMap(&this->AllPlugins,param_1);
  if (pTVar2 == (TSharedRef<FPlugin,1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3 = (pTVar2->SharedReferenceCount).ReferenceController;
    pFVar1 = pTVar2->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 != (FPlugin *)0x0) {
      TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_>::operator=
                (param_2,&(pFVar1->Descriptor).Plugins);
      bVar4 = true;
      goto LAB_141e25640;
    }
  }
  bVar4 = false;
LAB_141e25640:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return bVar4;
}

// GetPluginDependencies_FromDescriptor @ 141e25690

bool __thiscall
FPluginManager::GetPluginDependencies_FromDescriptor
          (FPluginManager *this,FPluginReferenceDescriptor *param_1,
          TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_> *param_2)

{
  TSharedRef<FPlugin,1> *pTVar1;
  
  pTVar1 = DiscoveredPluginMapUtils::FindPluginInMap_FromDescriptor(&this->AllPlugins,param_1);
  if (pTVar1 != (TSharedRef<FPlugin,1> *)0x0) {
    TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_>::operator=
              (param_2,&(pTVar1->Object->Descriptor).Plugins);
    return true;
  }
  return false;
}

// GetPluginDependencies_FromFileName @ 141e256d0

bool __thiscall
FPluginManager::GetPluginDependencies_FromFileName
          (FPluginManager *this,FString *param_1,
          TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_> *param_2)

{
  TSharedRef<FPlugin,1> *pTVar1;
  
  pTVar1 = DiscoveredPluginMapUtils::FindPluginInMap_FromFileName(&this->AllPlugins,param_1);
  if (pTVar1 != (TSharedRef<FPlugin,1> *)0x0) {
    TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_>::operator=
              (param_2,&(pTVar1->Object->Descriptor).Plugins);
    return true;
  }
  return false;
}

// GetPluginsEnabledAtStartup @ 141e257b0

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
FPluginManager::GetPluginsEnabledAtStartup(FPluginManager *this)

{
  undefined1 local_res8 [32];
  
  if (*(int *)&(this->PluginsEnabledAtStartup).Elements.field_0x8 ==
      *(int *)&(this->PluginsEnabledAtStartup).Elements.field_0x34) {
    `FPluginManager::GetPluginsEnabledAtStartup'::__l2::<lambda_1>::operator()(local_res8);
  }
  return &this->PluginsEnabledAtStartup;
}

// GetPluginsWithPakFile @ 141e257e0

TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> * __thiscall
FPluginManager::GetPluginsWithPakFile
          (FPluginManager *this,
          TArray<TSharedRef<IPlugin,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  TSharedRef<IPlugin,1> *pTVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->PluginsWithPakFile).ArrayNum;
  pTVar2 = (TSharedRef<IPlugin,1> *)(this->PluginsWithPakFile).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<TSharedRef<IPlugin,1>,TSharedRef<IPlugin,1>,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pTVar2,iVar1);
  return __return_storage_ptr__;
}

// GetPreloadBinaries @ 141e25870

bool __thiscall FPluginManager::GetPreloadBinaries(FPluginManager *this)

{
  return this->bPreloadedBinaries;
}

// IsPluginCompatible @ 141e26ad0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FPluginManager::IsPluginCompatible(FPlugin *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  EVersionComparison EVar4;
  FEngineVersion *pFVar5;
  FString local_38;
  FEngineVersion local_28;
  
  iVar1 = (param_1->Descriptor).EngineVersion.Data.ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  if (iVar3 < 1) {
    return true;
  }
  local_28._padding_._0_4_ = 0;
  local_28._padding_._4_2_ = 0;
  local_28._padding_._0_4_ = 0;
  local_28.Branch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Branch.Data.ArrayNum = 0;
  local_28.Branch.Data.ArrayMax = 0;
  bVar2 = FEngineVersion::Parse(&(param_1->Descriptor).EngineVersion,&local_28);
  if (bVar2) {
    pFVar5 = FEngineVersion::CompatibleWith();
    EVar4 = FEngineVersionBase::GetNewest
                      ((FEngineVersionBase *)pFVar5,(FEngineVersionBase *)&local_28,
                       (EVersionComponent *)0x0);
    if (EVar4 == Neither) {
      if (local_28.Branch.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return true;
      }
      FMemory::Free(local_28.Branch.Data.AllocatorInstance.Data);
      return true;
    }
    if (2 < (byte)LogPluginManager._0_1_) {
      pFVar5 = FEngineVersion::CompatibleWith();
      FEngineVersion::ToString(pFVar5,&local_38,Branch);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    bVar2 = false;
  }
  else {
    if (2 < (byte)LogPluginManager._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
    }
    bVar2 = true;
  }
  if (local_28.Branch.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Branch.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// LoadModulesForEnabledPlugins @ 141e27e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall FPluginManager::LoadModulesForEnabledPlugins(FPluginManager *this,Type param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  undefined8 uVar5;
  FFeedbackContext *pFVar6;
  TRefCountPtr<ITextData> TVar7;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  size_t sVar12;
  FText *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  FText *pFVar16;
  FModuleManager *this_00;
  longlong lVar17;
  int iVar18;
  FModuleDescriptor *this_01;
  uint uVar19;
  longlong lVar20;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar21;
  FModuleDescriptor *pFVar22;
  uint uVar23;
  undefined1 *puVar24;
  ForElementType<unsigned_int> FVar25;
  uint *puVar26;
  int iVar27;
  int iVar28;
  ForElementType<unsigned_int> FVar29;
  bool local_res18;
  undefined1 local_res20 [8];
  undefined1 local_2b8;
  undefined1 local_2b7;
  FEngineTrackedActivityScope local_2b6 [2];
  FLLMScope local_2b4;
  ForElementType<unsigned_int> local_2b0;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_2a8;
  FText local_298;
  ulonglong local_288;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_280;
  int iStack_278;
  uint uStack_274;
  undefined1 *local_270;
  undefined4 uStack_268;
  uint uStack_264;
  int local_260;
  undefined4 uStack_25c;
  int iStack_258;
  undefined4 uStack_254;
  int local_250;
  int local_24c;
  int local_248;
  int local_244;
  FMemScope local_240;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  ForElementType<unsigned_int> local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  int local_218;
  uint uStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_208;
  undefined1 auStack_200 [16];
  uint uStack_1f0;
  uint uStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  undefined8 uStack_1b0;
  FString local_1a8;
  wchar_t *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  TStringView<wchar_t> local_188;
  FText local_178;
  FText local_168;
  TStringView<wchar_t> local_158;
  FText local_148;
  TStringView<wchar_t> local_138;
  FSlowTask local_128;
  FText local_c8;
  FTextFormat local_b8;
  FText local_a8;
  FText local_98;
  FTextFormat local_88 [2];
  undefined4 local_5c;
  
  local_res18 = true;
  bVar9 = ConfigureEnabledPlugins(this);
  if (bVar9) {
    local_298.TextData.Reference = (ITextData *)ELoadingPhase::ToString(param_1);
    iVar28 = 0;
    local_298.Flags = 0;
    if (local_298.TextData.Reference != (ITextData *)0x0) {
      sVar12 = wcslen((wchar_t *)local_298.TextData.Reference);
      local_298.Flags = (uint)sVar12;
    }
    TVar7.Reference = local_298.TextData.Reference;
    pFVar6 = GWarn;
    uVar5._4_4_ = local_298._12_4_;
    uVar5._0_4_ = local_298.Flags;
    local_188.DataPtr = (wchar_t *)local_298.TextData.Reference;
    local_188._8_8_ = uVar5;
    pFVar13 = FText::FromStringView(&local_c8,&local_188);
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_168,L"PluginManager",L"LoadingModulesForEnabledPlugins",
                         L"Loading Plugin Modules for Phase {0}");
    pFVar15 = FTextFormat::FTextFormat(&local_b8,pFVar14,Default);
    pFVar13 = FText::Format<FText>(&local_178,pFVar15,pFVar13);
    FSlowTask::FSlowTask
              (&local_128,
               (float)(*(int *)&(this->AllPlugins).field_0x8 -
                      *(int *)&(this->AllPlugins).field_0x34),pFVar13,true,pFVar6);
    FSlowTask::Initialize(&local_128);
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
    }
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
    }
    local_128.Visibility = Important;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&LLMScope_Name2841,L"Modules");
      _Init_thread_footer(&::_TSS0);
    }
    FLLMScope::FLLMScope(&local_2b4,LLMScope_Name2841,false,None,Default,true);
    FMemScope::FMemScope(&local_240,&LLMScope_Name2841,true);
    uVar11 = *(uint *)&(this->AllPlugins).field_0x28;
    FVar29 = (ForElementType<unsigned_int>)&(this->AllPlugins).field_0x10;
    local_288 = 1;
    iVar27 = 0;
    local_2a8 = &this->AllPlugins;
    local_260 = 0;
    uStack_274 = 1;
    uStack_264 = 0;
    iStack_278 = iVar28;
    if (uVar11 != 0) {
      puVar26 = *(uint **)&(this->AllPlugins).field_0x20;
      if (puVar26 == (uint *)0x0) {
        puVar26 = (uint *)FVar29;
      }
      uStack_274 = *puVar26;
      local_260 = 0;
      while (uStack_274 == 0) {
        lVar17 = (longlong)iStack_278;
        local_260 = local_260 + 0x20;
        iStack_278 = iStack_278 + 1;
        uStack_274 = 1;
        uStack_264 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_278)
        goto LAB_141e2808d;
        uStack_274 = (puVar26 + 1)[lVar17];
      }
      uStack_274 = -uStack_274 & uStack_274;
      uVar1 = (ulonglong)uStack_274 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_250 = (int)lVar17;
      uStack_264 = local_260 + -1 + local_250;
      if ((int)uVar11 < (int)uStack_264) {
        uStack_264 = uVar11;
      }
    }
LAB_141e2808d:
    uVar23 = *(uint *)&(this->AllPlugins).field_0x28;
    uStack_25c = local_5c;
    iStack_258 = *(int *)&(this->AllPlugins).field_0x8 - *(int *)&(this->AllPlugins).field_0x34;
    uVar19 = uVar23 & 0xffffffe0;
    auStack_200._0_8_ = CONCAT44(uStack_274,iStack_278);
    uStack_268 = 0xffffffff;
    uStack_1f0 = 0xffffffff;
    auStack_200._8_8_ = FVar29;
    uStack_1ec = uStack_264;
    iVar18 = (int)uVar23 >> 5;
    local_1e8._4_4_ = local_5c;
    local_1e8._0_4_ = local_260;
    uStack_1e0 = CONCAT44(uStack_254,iStack_258);
    local_2b0 = FVar29;
    local_280 = local_2a8;
    local_270 = (undefined1 *)FVar29;
    local_208 = local_2a8;
    if ((((int)uVar23 < 0) || ((int)uVar11 < (int)uVar23)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    uVar11 = *(uint *)&(this->AllPlugins).field_0x28;
    if (uVar23 != uVar11) {
      puVar24 = *(undefined1 **)&(this->AllPlugins).field_0x20;
      if (puVar24 == (undefined1 *)0x0) {
        puVar24 = (undefined1 *)FVar29;
      }
      uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar18 * 4);
      while (iVar28 = iVar27, uVar23 == 0) {
        lVar17 = (longlong)iVar18;
        uVar19 = uVar19 + 0x20;
        iVar18 = iVar18 + 1;
        uVar23 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_141e28190;
        uVar23 = *(uint *)(puVar24 + lVar17 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_24c = (int)lVar17;
      uVar23 = local_24c + -1 + uVar19;
      if ((int)uVar11 < (int)uVar23) {
        uVar23 = uVar11;
      }
    }
LAB_141e28190:
    do {
      pTVar21 = local_208;
      if (*(int *)&local_208->field_0x8 - *(int *)&local_208->field_0x34 != (int)uStack_1e0) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      lVar17 = (longlong)(int)uStack_1ec;
      if (((uStack_1ec == uVar23) && ((ForElementType<unsigned_int>)auStack_200._8_8_ == FVar29)) &&
         (pTVar21 == local_2a8)) {
LAB_141e28367:
        pTVar21 = local_2a8;
        if ((this->bPreloadedBinaries == false) || (param_1 != PostConfigInit)) goto LAB_141e286ec;
        ::FString::FString(&local_1a8,"Preloading all plugin binaries");
        FEngineTrackedActivityScope::FEngineTrackedActivityScope(local_2b6,&local_1a8);
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        uVar11 = *(int *)((longlong)FVar29 + 0x18);
        iStack_230 = 0;
        local_218 = 0;
        uStack_21c = 0;
        if (uVar11 == 0) goto LAB_141e28430;
        FVar25 = *(ForElementType<unsigned_int> *)((longlong)FVar29 + 0x10);
        if (*(ForElementType<unsigned_int> *)((longlong)FVar29 + 0x10) ==
            (ForElementType<unsigned_int>)0x0) {
          FVar25 = FVar29;
        }
        uVar23 = *(uint *)FVar25;
        goto joined_r0x000141e283ea;
      }
      lVar2 = *(longlong *)pTVar21;
      iVar28 = iVar28 + 1;
      iVar27 = *(int *)(lVar2 + 0x18 + lVar17 * 0x28);
      uVar19 = iVar27 - 1;
      uVar11 = 0;
      if ((int)uVar19 < iVar27) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      lVar20 = (longlong)*(int *)(lVar2 + 0x18 + lVar17 * 0x28);
      lVar17 = *(longlong *)(lVar2 + 0x10 + lVar17 * 0x28);
      lVar2 = *(longlong *)(lVar17 + -0x10 + lVar20 * 0x10);
      if (((*(byte *)(lVar2 + 0x254) & 1) != 0) && (*(char *)(lVar2 + 0x189) == '\0')) {
        pFVar13 = FText::FromString(&local_a8,(FString *)(lVar2 + 0x18));
        local_158.DataPtr = (wchar_t *)TVar7.Reference;
        local_158._8_8_ = uVar5;
        pFVar14 = FText::FromStringView(&local_98,&local_158);
        pFVar16 = FText::AsLocalizable_Advanced_LocText
                            (&local_148,L"PluginManager",L"LoadingModulesForPlugin",
                             L"Loading {0} Modules for Plugin: {1}");
        pFVar15 = FTextFormat::FTextFormat(local_88,pFVar16,Default);
        FText::Format<FText,FText>(&local_298,pFVar15,pFVar14,pFVar13);
        if (local_148.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
        }
        FSlowTask::EnterProgressFrame(&local_128,(float)iVar28,&local_298);
        iVar28 = 0;
        bVar9 = TryLoadModulesForPlugin(this,*(FPlugin **)(lVar17 + -0x10 + lVar20 * 0x10),param_1);
        if (!bVar9) {
          local_res18 = false;
          FVar29 = local_2b0;
          if (local_298.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
            FVar29 = local_2b0;
          }
          goto LAB_141e28367;
        }
        if (local_298.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
        }
      }
      uStack_1f0 = uStack_1f0 & ~auStack_200._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_200);
      FVar29 = local_2b0;
    } while( true );
  }
  local_res18 = false;
  goto LAB_141e2875c;
joined_r0x000141e283ea:
  if (uVar23 != 0) goto LAB_141e28408;
  lVar17 = (longlong)iStack_230;
  local_218 = local_218 + 0x20;
  iStack_230 = iStack_230 + 1;
  uStack_21c = uVar11;
  if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_230)
  goto LAB_141e28430;
  uVar23 = ((uint *)((longlong)FVar25 + 4))[lVar17];
  goto joined_r0x000141e283ea;
LAB_141e28408:
  local_288 = (ulonglong)(-uVar23 & uVar23);
  uVar1 = local_288 * 2 + 1;
  lVar17 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
    }
  }
  local_248 = (int)lVar17;
  uStack_21c = local_218 + -1 + local_248;
  if ((int)uVar11 < (int)uStack_21c) {
    uStack_21c = uVar11;
  }
LAB_141e28430:
  uVar23 = *(uint *)&(this->AllPlugins).field_0x28;
  uStack_22c = (undefined4)local_288;
  uVar19 = uVar23 & 0xffffffe0;
  uStack_214 = uStack_264;
  iStack_210 = *(int *)&(this->AllPlugins).field_0x8 - *(int *)&(this->AllPlugins).field_0x34;
  uStack_220 = 0xffffffff;
  local_238 = pTVar21;
  TStack_1d0._padding_ = CONCAT44(uStack_22c,iStack_230);
  TStack_1d0.CurrentBitIndex = uStack_21c;
  TStack_1d0.UnvisitedBitMask = 0xffffffff;
  local_1d8 = pTVar21;
  iVar28 = (int)uVar23 >> 5;
  TStack_1d0._28_4_ = uStack_264;
  TStack_1d0.BaseBitIndex = local_218;
  uStack_1b0 = CONCAT44(uStack_20c,iStack_210);
  local_228 = FVar29;
  TStack_1d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar29;
  if ((((int)uVar23 < 0) || ((int)uVar11 < (int)uVar23)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  uVar11 = *(uint *)((longlong)FVar29 + 0x18);
  if (uVar23 != uVar11) {
    FVar25 = *(ForElementType<unsigned_int> *)((longlong)FVar29 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)FVar29 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar25 = FVar29;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)((longlong)FVar25 + (longlong)iVar28 * 4);
    while (uVar23 == 0) {
      lVar17 = (longlong)iVar28;
      uVar19 = uVar19 + 0x20;
      iVar28 = iVar28 + 1;
      uVar23 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
      goto LAB_141e28530;
      uVar23 = ((uint *)((longlong)FVar25 + 4))[lVar17];
    }
    uVar1 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_244 = (int)lVar17;
    uVar23 = local_244 + -1 + uVar19;
    if ((int)uVar11 < (int)uVar23) {
      uVar23 = uVar11;
    }
  }
LAB_141e28530:
  while( true ) {
    pTVar8 = local_1d8;
    if (*(int *)&local_1d8->field_0x8 - *(int *)&local_1d8->field_0x34 != (int)uStack_1b0) {
      local_2b8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b8);
    }
    lVar17 = (longlong)TStack_1d0.CurrentBitIndex;
    if (((TStack_1d0.CurrentBitIndex == uVar23) &&
        ((ForElementType<unsigned_int>)TStack_1d0.Array == FVar29)) && (pTVar8 == pTVar21)) break;
    lVar2 = *(longlong *)pTVar8;
    iVar27 = *(int *)(lVar2 + 8 + lVar17 * 0x28);
    pwVar3 = *(wchar_t **)(lVar2 + lVar17 * 0x28);
    iVar28 = iVar27 + -1;
    if (iVar27 == 0) {
      iVar28 = 0;
    }
    local_138._12_4_ = uStack_18c;
    local_138.Size = iVar28;
    local_198 = pwVar3;
    iStack_190 = iVar28;
    local_138.DataPtr = pwVar3;
    bVar9 = ConfigureEnabledPlugins(this);
    if (bVar9) {
      uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar28,pwVar3);
      bVar9 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              ContainsByHash<TStringView<wchar_t>_>
                        (&this->PluginsEnabledForTarget,uVar11,&local_138);
      if (!bVar9) goto LAB_141e28694;
      iVar28 = *(int *)(lVar2 + 0x18 + lVar17 * 0x28);
      uVar19 = iVar28 - 1;
      uVar11 = 0;
      if ((int)uVar19 < iVar28) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      lVar17 = *(longlong *)
                (*(longlong *)(lVar2 + 0x10 + lVar17 * 0x28) + -0x10 +
                (longlong)*(int *)(lVar2 + 0x18 + lVar17 * 0x28) * 0x10);
      iVar28 = *(int *)(lVar17 + 0x138);
      this_01 = *(FModuleDescriptor **)(lVar17 + 0x130);
      pFVar22 = this_01 + iVar28;
      while( true ) {
        if (*(int *)(lVar17 + 0x138) != iVar28) {
          local_2b7 = 0;
          `TCheckedPointerIterator<FModuleDescriptor,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_2b7);
        }
        if (this_01 == pFVar22) break;
        bVar9 = FModuleDescriptor::IsCompiledInCurrentConfiguration(this_01);
        if (bVar9) {
          this_00 = FModuleManager::Get();
          FModuleManager::LoadModuleBinaryOnly(this_00,this_01->Name);
        }
        this_01 = this_01 + 1;
      }
    }
    else {
LAB_141e28694:
      if (3 < (byte)LogPluginManager._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
      }
    }
    TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
    FVar29 = (ForElementType<unsigned_int>)&(this->AllPlugins).field_0x10;
    pTVar21 = &this->AllPlugins;
  }
  FEngineTrackedActivityScope::~FEngineTrackedActivityScope(local_2b6);
LAB_141e286ec:
  FMemScope::~FMemScope(&local_240);
  FLLMScope::~FLLMScope(&local_2b4);
  FSlowTask::Destroy(&local_128);
  if (local_128.FrameMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.FrameMessage.TextData.Reference + 0x10))();
  }
  if (local_128.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.DefaultMessage.TextData.Reference + 0x10))();
  }
LAB_141e2875c:
  if (1 < (byte)LogPluginManager._0_1_) {
    if ((this->LastCompletedLoadingPhase != None) &&
       ((int)param_1 < (int)this->LastCompletedLoadingPhase)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
    }
    if (1 < (byte)LogPluginManager._0_1_) {
      if (this->LastCompletedLoadingPhase == None) {
        if (param_1 == EarliestPossible) goto LAB_141e287d4;
      }
      else if ((int)param_1 <= (int)(this->LastCompletedLoadingPhase + PostConfigInit))
      goto LAB_141e287d4;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
    }
  }
LAB_141e287d4:
  this->LastCompletedLoadingPhase = param_1;
  TMulticastDelegate<void___cdecl(enum_ELoadingPhase::Type,bool),FDefaultDelegateUserPolicy>::
  Broadcast(&this->LoadingPhaseCompleteEvent,param_1,local_res18);
  return local_res18;
}

// MarkEnabledPlugins @ 141e296a0

void __thiscall
FPluginManager::MarkEnabledPlugins(FPluginManager *this,FPluginDiscoveryContext *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  IPlugin *pIVar5;
  code *pcVar6;
  FPluginDiscoveryContext *pFVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  bool bVar15;
  undefined1 local_res10 [8];
  int local_res18;
  FScopedBootTiming local_b8;
  FPluginDiscoveryContext *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  FPluginDiscoveryContext *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1797,"MarkEnabledPlugins",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
               ,0x705);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1797);
  }
  FScopedBootTiming::FScopedBootTiming(&local_b8,"MarkEnabledPlugins");
  iVar3 = *(int *)&(param_1->EnabledPlugins).field_0x28;
  puVar1 = &(param_1->EnabledPlugins).field_0x10;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(param_1->EnabledPlugins).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar10 = *puVar13;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_141e2978e;
      uVar10 = puVar13[lVar9 + 1];
    }
    uStack_94 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iStack_84 = local_res18 + -1 + local_80;
    if (iVar3 < iStack_84) {
      iStack_84 = iVar3;
    }
  }
LAB_141e2978e:
  uVar10 = *(uint *)&(param_1->EnabledPlugins).field_0x28;
  uVar14 = uVar10 & 0xffffffe0;
  iStack_78 = *(int *)&(param_1->EnabledPlugins).field_0x8 -
              *(int *)&(param_1->EnabledPlugins).field_0x34;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = param_1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(param_1->EnabledPlugins).field_0x28;
  if (uVar10 != uVar4) {
    puVar12 = *(undefined1 **)&(param_1->EnabledPlugins).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar14 = uVar14 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141e29890;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_141e29890:
  while( true ) {
    pFVar7 = local_70;
    if (*(int *)&(local_70->EnabledPlugins).field_0x8 -
        *(int *)&(local_70->EnabledPlugins).field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FPlugin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_68.CurrentBitIndex == uVar10) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar7 == param_1))
    break;
    pIVar5 = *(IPlugin **)
              ((longlong)TStack_68.CurrentBitIndex * 0x20 + 0x10 +
              *(longlong *)&pFVar7->EnabledPlugins);
    if ((pIVar5[0x10].field_0x9 == '\0') && (0 < *(int *)&pIVar5[0xd].field_0x10)) {
      PluginLocalizationUtils::GetLocalizationPathsForPlugin(pIVar5,&param_1->AdditionalLocResPaths)
      ;
    }
    pIVar5[0x18].field_0x14 = pIVar5[0x18].field_0x14 | 1;
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  FScopedBootTiming::~FScopedBootTiming(&local_b8);
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// MountContentPlugins @ 141e29940

void __thiscall
FPluginManager::MountContentPlugins(FPluginManager *this,FPluginDiscoveryContext *param_1)

{
  undefined1 *puVar1;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar2;
  ulonglong uVar3;
  IPlugin *pIVar4;
  code *pcVar5;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  bool bVar7;
  char cVar8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  FString local_f8;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_b8;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FString local_78;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  iVar13 = *(int *)&(this->AllPlugins).field_0x28;
  puVar1 = &(this->AllPlugins).field_0x10;
  iStack_e0 = 0;
  pTVar2 = &this->AllPlugins;
  local_c8 = 0;
  uStack_dc = 1;
  iStack_cc = 0;
  if (iVar13 != 0) {
    puVar18 = *(uint **)&(this->AllPlugins).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    while (uVar16 == 0) {
      lVar10 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      iStack_cc = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_141e299dd;
      uVar16 = puVar18[lVar10 + 1];
    }
    uStack_dc = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_dc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_cc = local_c8 + -1 + (int)lVar10;
    if (iVar13 < iStack_cc) {
      iStack_cc = iVar13;
    }
  }
LAB_141e299dd:
  uVar16 = *(uint *)&(this->AllPlugins).field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  iStack_c0 = *(int *)&(this->AllPlugins).field_0x8 - *(int *)&(this->AllPlugins).field_0x34;
  uStack_d0 = 0xffffffff;
  TStack_a0._padding_ = CONCAT44(uStack_dc,iStack_e0);
  TStack_a0.CurrentBitIndex = iStack_cc;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_a0._28_4_ = iStack_cc;
  TStack_a0.BaseBitIndex = local_c8;
  uStack_80 = CONCAT44(uStack_bc,iStack_c0);
  local_e8 = pTVar2;
  local_d8 = puVar1;
  iStack_c4 = iStack_cc;
  local_a8 = pTVar2;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar13 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar12 = *(uint *)&(this->AllPlugins).field_0x28;
  if (uVar16 != uVar12) {
    puVar17 = *(undefined1 **)&(this->AllPlugins).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar10 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_141e29add;
      uVar16 = *(uint *)(puVar17 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar16 = (int)lVar10 + -1 + uVar15;
    if ((int)uVar12 < (int)uVar16) {
      uVar16 = uVar12;
    }
  }
LAB_141e29add:
  while( true ) {
    pTVar6 = local_a8;
    if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_a0.CurrentBitIndex == uVar16) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar2))
    {
      return;
    }
    lVar10 = *(longlong *)pTVar6;
    iVar13 = *(int *)(lVar10 + 0x18 + (longlong)TStack_a0.CurrentBitIndex * 0x28);
    lVar10 = lVar10 + (longlong)TStack_a0.CurrentBitIndex * 0x28;
    uVar12 = iVar13 - 1;
    uVar15 = 0;
    if ((int)uVar12 < iVar13) {
      uVar15 = ~uVar12 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    pIVar4 = *(IPlugin **)
              (*(longlong *)(lVar10 + 0x10) + -0x10 + (longlong)*(int *)(lVar10 + 0x18) * 0x10);
    if ((((pIVar4[0x18].field_0x14 & 1) != 0) && (pIVar4[0x10].field_0x9 == '\0')) &&
       ((pIVar4[0x18].field_0x14 = pIVar4[0x18].field_0x14 | 2, *(char *)(pIVar4 + 0x10) != '\0' ||
        (pIVar4[0x10].field_0x1 != '\0')))) {
      bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &this->NewPluginMountedEvent);
      if (bVar7) {
        TMulticastDelegate<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>::Broadcast
                  ((TMulticastDelegate<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy> *)
                   &this->NewPluginMountedEvent,pIVar4);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->RegisterMountPointDelegate,&local_68);
      if (((*(int *)&(this->RegisterMountPointDelegate).field_0x10 == 0) ||
          (plVar11 = *(longlong **)&(this->RegisterMountPointDelegate).field_0x8,
          plVar11 == (longlong *)0x0)) || (cVar8 = (**(code **)(*plVar11 + 0x38))(), cVar8 == '\0'))
      {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_68);
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8987629764537743404>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
                           ,0x7d4,"RegisterMountPointDelegate.IsBound()");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_68);
        pTVar9 = &FPaths::GetPath(&local_78,(FString *)&pIVar4[1].field_0x10)->Data;
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::
        TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                  (&local_b8,pTVar9,9 - (uint)(pTVar9->ArrayNum != 0));
        ::FString::PathAppend((FString *)&local_b8,L"Content",7);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.Data.ArrayNum = 0;
        local_f8.Data.ArrayMax = 0;
        iVar13 = *(int *)&pIVar4[1].field_0x8 + 1;
        if (*(int *)&pIVar4[1].field_0x8 == 0) {
          iVar13 = 2;
        }
        ::FString::Reserve(&local_f8,iVar13);
        ::FString::AppendChar(&local_f8,L'/');
        iVar13 = *(int *)&pIVar4[1].field_0x8 + -1;
        if (*(int *)&pIVar4[1].field_0x8 == 0) {
          iVar13 = 0;
        }
        ::FString::AppendChars(&local_f8,*(wchar_t **)(pIVar4 + 1),iVar13);
        ::FString::AppendChar(&local_f8,L'/');
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->RegisterMountPointDelegate,&local_50);
        plVar11 = (longlong *)0x0;
        if (*(int *)&(this->RegisterMountPointDelegate).field_0x10 != 0) {
          plVar11 = *(longlong **)&(this->RegisterMountPointDelegate).field_0x8;
        }
        (**(code **)(*plVar11 + 0x60))(plVar11,&local_f8,&local_b8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_50);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.AllocatorInstance.Data);
        }
      }
      bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &this->NewPluginContentMountedEvent);
      if (bVar7) {
        TMulticastDelegate<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>::Broadcast
                  ((TMulticastDelegate<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy> *)
                   &this->NewPluginContentMountedEvent,pIVar4);
      }
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// MountExplicitlyLoadedPlugin @ 141e29da0

bool __thiscall
FPluginManager::MountExplicitlyLoadedPlugin(FPluginManager *this,FString *param_1,Type param_2)

{
  FPlugin *pFVar1;
  TSharedRef<FPlugin,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TSharedRef<FPlugin,1> local_18;
  
  bVar4 = false;
  pTVar2 = DiscoveredPluginMapUtils::FindPluginInMap(&this->AllPlugins,param_1);
  if (pTVar2 == (TSharedRef<FPlugin,1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3 = (pTVar2->SharedReferenceCount).ReferenceController;
    pFVar1 = pTVar2->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar1 != (FPlugin *)0x0) && ((pFVar1->Descriptor).bExplicitlyLoaded != false)) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18.Object = pFVar1;
      local_18.SharedReferenceCount.ReferenceController = pTVar3;
      MountPluginFromExternalSource(this,&local_18,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      bVar4 = true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return bVar4;
}

// MountExplicitlyLoadedPluginLocalizationData @ 141e29e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPluginManager::MountExplicitlyLoadedPluginLocalizationData
          (FPluginManager *this,FString *param_1,
          TUniqueFunction<void___cdecl(bool,FString_const_&)> *param_2)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<FPlugin,1> *pTVar5;
  undefined8 uVar6;
  FTextLocalizationManager *pFVar7;
  code **ppcVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  code *pcVar11;
  FPlugin *pFVar12;
  FPlugin *pFVar13;
  bool bVar14;
  undefined1 auStack_178 [32];
  int local_158;
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_138;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  TArrayView<FString_const_,int> local_108;
  TArrayView<FString_const_,int> local_f8;
  FString local_e8;
  code *local_d8;
  code *local_c8;
  code *pcStack_c0;
  code *local_b8;
  code **local_b0;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  pTVar5 = DiscoveredPluginMapUtils::FindPluginInMap(&this->AllPlugins,param_1);
  pFVar12 = (FPlugin *)0x0;
  pFVar13 = pFVar12;
  if (pTVar5 != (TSharedRef<FPlugin,1> *)0x0) {
    pFVar12 = (FPlugin *)(pTVar5->SharedReferenceCount).ReferenceController;
    pFVar13 = pTVar5->Object;
    if (pFVar12 != (FPlugin *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar12->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar12->_padding_ + 1);
      UNLOCK();
    }
  }
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3322,"MountExplicitlyLoadedPluginLocalizationData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
               ,0xcfa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3322);
  }
  if ((pFVar13 == (FPlugin *)0x0) || (!pFVar13->bIsMounted)) {
    if (1 < (byte)LogPluginManager._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
    }
    if (*(void **)param_2 != (void *)0x0) {
      local_140[0] = 0;
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar11 = *(code **)param_2;
      plVar9 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar9 = *(longlong **)&param_2->field_0x28;
      }
      uVar6 = (**(code **)(*plVar9 + 8))();
      puVar10 = local_140;
LAB_141e2a2d2:
      (*pcVar11)(uVar6,puVar10,param_1);
    }
  }
  else {
    if ((pFVar13->Descriptor).bExplicitlyLoaded == false) {
      if (2 < (byte)LogPluginManager._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
      }
      lVar1 = *(longlong *)param_2;
    }
    else {
      if (pFVar13->ExplicitlyLoadedLocalizationDataMountedRefCount == 0) {
        if ((pFVar13->Descriptor).LocalizationTargets.ArrayNum != 0) {
          if (4 < (byte)LogPluginManager._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
          }
          pFVar13->ExplicitlyLoadedLocalizationDataMountedRefCount = '\x01';
          local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_138.ArrayNum = 0;
          local_138.ArrayMax = 0;
          PluginLocalizationUtils::GetLocalizationPathsForPlugin((IPlugin *)pFVar13,&local_138);
          if (*(longlong *)param_2 == 0) {
            pFVar7 = FTextLocalizationManager::Get();
            iStack_110 = local_138.ArrayNum;
            local_118 = local_138.AllocatorInstance.Data;
            local_78._0_8_ = 0;
            local_50 = (longlong *)0x0;
            if ((local_138.ArrayNum < 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar3)) {
              pcVar11 = (code *)swi(3);
              uVar4 = (*pcVar11)();
              return (bool)uVar4;
            }
            local_f8._12_4_ = uStack_10c;
            local_f8.ArrayNum = iStack_110;
            local_f8.DataPtr = (FString *)local_118;
            FTextLocalizationManager::HandleLocalizationTargetsMounted
                      (pFVar7,&local_f8,(TUniqueFunction<void___cdecl(void)> *)local_78);
            if (local_78._0_8_ != 0) {
              plVar9 = (longlong *)(local_78 + 0x10);
              if (local_50 != (longlong *)0x0) {
                plVar9 = local_50;
              }
              (**(code **)(*plVar9 + 0x10))();
            }
          }
          else {
            pFVar7 = FTextLocalizationManager::Get();
            ::FString::FString(&local_e8,param_1);
            local_d8 = *(code **)param_2;
            local_b0 = *(code ***)&param_2->field_0x28;
            *(undefined8 *)&param_2->field_0x28 = 0;
            local_b8 = *(code **)&param_2->field_0x20;
            local_c8 = *(code **)&param_2->field_0x10;
            pcStack_c0 = *(code **)&param_2->field_0x18;
            if (local_d8 != (code *)0x0) {
              *(undefined8 *)param_2 = 0;
            }
            local_a8[0] = (code *)0x0;
            ppcVar8 = FMemory::Malloc(0x50,0x10);
            *ppcVar8 = (code *)&UE::Core::Private::Function::
                                TFunction_OwnedObject<`FPluginManager::MountExplicitlyLoadedPluginLocalizationData'::`119'::<lambda_1>,1,1>
                                ::_vftable_;
            local_80 = ppcVar8;
            ::FString::FString((FString *)(ppcVar8 + 2),&local_e8);
            ppcVar8[4] = local_d8;
            ppcVar8[9] = (code *)local_b0;
            local_b0 = (code **)0x0;
            ppcVar8[6] = local_c8;
            ppcVar8[7] = pcStack_c0;
            ppcVar8[8] = local_b8;
            if (ppcVar8[4] != (code *)0x0) {
              local_d8 = (code *)0x0;
            }
            iVar2 = local_138.ArrayNum;
            if ((FString *)(ppcVar8 + 2) != (FString *)0x0) {
              local_a8[0] = UE::Core::Private::Function::
                            TFunctionRefCaller<`FPluginManager::MountExplicitlyLoadedPluginLocalizationData'::__l119::<lambda_1>,void>
                            ::Call;
            }
            local_128 = local_138.AllocatorInstance.Data;
            if ((local_138.ArrayNum < 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar3)) {
              pcVar11 = (code *)swi(3);
              uVar4 = (*pcVar11)();
              return (bool)uVar4;
            }
            iStack_120 = iVar2;
            local_108._12_4_ = uStack_11c;
            local_108.ArrayNum = iVar2;
            local_108.DataPtr = (FString *)local_128;
            FTextLocalizationManager::HandleLocalizationTargetsMounted
                      (pFVar7,&local_108,(TUniqueFunction<void___cdecl(void)> *)local_a8);
            if (local_a8[0] != (code *)0x0) {
              ppcVar8 = local_a8 + 2;
              if (local_80 != (code **)0x0) {
                ppcVar8 = local_80;
              }
              (**(code **)(*ppcVar8 + 0x10))();
            }
            if (local_d8 != (code *)0x0) {
              ppcVar8 = &local_c8;
              if (local_b0 != (code **)0x0) {
                ppcVar8 = local_b0;
              }
              (**(code **)(*ppcVar8 + 0x10))();
            }
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
          }
          bVar3 = true;
          DestructItems<FString,int>((FString *)local_138.AllocatorInstance.Data,local_138.ArrayNum)
          ;
          if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.AllocatorInstance.Data);
          }
          goto LAB_141e2a2dd;
        }
        if (5 < (byte)LogPluginManager._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
        }
        if (*(void **)param_2 != (void *)0x0) {
          local_148[0] = 0;
          UE::Core::Private::Function::CheckCallable(*(void **)param_2);
          pcVar11 = *(code **)param_2;
          plVar9 = (longlong *)&param_2->field_0x10;
          if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
            plVar9 = *(longlong **)&param_2->field_0x28;
          }
          uVar6 = (**(code **)(*plVar9 + 8))();
          puVar10 = local_148;
          goto LAB_141e2a2d2;
        }
        goto LAB_141e2a2da;
      }
      if (5 < (byte)LogPluginManager._0_1_) {
        local_158 = pFVar13->ExplicitlyLoadedLocalizationDataMountedRefCount + 1;
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
      }
      pFVar13->ExplicitlyLoadedLocalizationDataMountedRefCount =
           pFVar13->ExplicitlyLoadedLocalizationDataMountedRefCount + '\x01';
      lVar1 = *(longlong *)param_2;
    }
    if (lVar1 != 0) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(bool,FString_const_&)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(bool,FString_const_&)>
                    *)param_2,false,param_1);
    }
  }
LAB_141e2a2da:
  bVar3 = false;
LAB_141e2a2dd:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  return bVar3;
}

// MountExplicitlyLoadedPlugin_FromDescriptor @ 141e2a320

bool __thiscall
FPluginManager::MountExplicitlyLoadedPlugin_FromDescriptor
          (FPluginManager *this,FPluginReferenceDescriptor *param_1)

{
  bool bVar1;
  TSharedRef<FPlugin,1> *pTVar2;
  
  pTVar2 = DiscoveredPluginMapUtils::FindPluginInMap_FromDescriptor(&this->AllPlugins,param_1);
  bVar1 = TryMountExplicitlyLoadedPluginVersion(this,pTVar2);
  return bVar1;
}

// MountExplicitlyLoadedPlugin_FromFileName @ 141e2a350

bool __thiscall
FPluginManager::MountExplicitlyLoadedPlugin_FromFileName(FPluginManager *this,FString *param_1)

{
  bool bVar1;
  TSharedRef<FPlugin,1> *pTVar2;
  
  pTVar2 = DiscoveredPluginMapUtils::FindPluginInMap_FromFileName(&this->AllPlugins,param_1);
  bVar1 = TryMountExplicitlyLoadedPluginVersion(this,pTVar2);
  return bVar1;
}

// MountNewlyCreatedPlugin @ 141e2a380

void __thiscall FPluginManager::MountNewlyCreatedPlugin(FPluginManager *this,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FPlugin *pFVar2;
  bool bVar3;
  TSharedRef<FPlugin,1> *pTVar4;
  TSharedRef<FPlugin,1> local_18;
  
  pTVar4 = DiscoveredPluginMapUtils::FindPluginInMap(&this->AllPlugins,param_1);
  if (pTVar4 == (TSharedRef<FPlugin,1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar4->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar2 != (FPlugin *)0x0) {
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar2;
    local_18.SharedReferenceCount.ReferenceController = pTVar1;
    MountPluginFromExternalSource(this,&local_18,Max);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &this->NewPluginCreatedEvent);
    if (bVar3) {
      TMulticastDelegate<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy> *)
                 &this->NewPluginCreatedEvent,(IPlugin *)pFVar2);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// MountPluginFromExternalSource @ 141e2a440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPluginManager::MountPluginFromExternalSource
          (FPluginManager *this,TSharedRef<FPlugin,1> *param_1,Type param_2)

{
  undefined1 *puVar1;
  EPluginType EVar2;
  FPlugin *pFVar3;
  code *pcVar4;
  Type TVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar12;
  FConfigFile *this_00;
  FName *pFVar13;
  FTextLocalizationManager *this_01;
  wchar_t *_Str;
  FString *pFVar14;
  size_t sVar15;
  FModuleManager *this_02;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  Type TVar20;
  longlong *plVar21;
  int iVar22;
  ForAnyElementType FVar23;
  bool bVar24;
  undefined1 auStackY_1f8 [32];
  FString local_1c0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1b0;
  Type local_1a0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_198;
  undefined1 local_188 [8];
  FString local_180;
  FScriptContainerElement *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  FName local_158;
  FText local_150;
  FText local_140;
  FString local_130;
  TArrayView<FString_const_,int> local_118;
  FString local_108;
  FReadAccessScope local_f8;
  FReadAccessScope local_e0;
  FText local_c8;
  FTextFormat local_b8;
  undefined1 local_a8 [40];
  longlong *local_80;
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar24 = -1 < CpuChannel->Enabled;
  local_1a0 = param_2;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3515,"MountPluginFromExternalSource",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
               ,0xdbb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3515);
  }
  if (GWarn != (FFeedbackContext *)0x0) {
    lVar18 = 0x18;
    if (1 < (param_1->Object->Descriptor).FriendlyName.Data.ArrayNum) {
      lVar18 = 0x60;
    }
    pFVar9 = FText::FromString(&local_c8,(FString *)((longlong)&param_1->Object->_padding_ + lVar18)
                              );
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_140,L"PluginManager",L"MountingPluginFiles",
                         L"Mounting plugin {0}...");
    pFVar11 = FTextFormat::FTextFormat(&local_b8,pFVar10,Default);
    pFVar9 = FText::Format<FText>(&local_150,pFVar11,pFVar9);
    FFeedbackContext::BeginSlowTask(GWarn,pFVar9,true,false);
    if (local_150.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
    }
    if (local_140.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
    }
  }
  param_1->Object->bEnabled = true;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (&this->PluginsEnabledForTarget,(FString *)local_188,(bool *)&param_1->Object->Name);
  if ((1 < (param_1->Object->Descriptor).DeprecatedEngineVersion.Data.ArrayNum) &&
     (3 < (byte)LogPluginManager._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
  }
  plVar21 = (longlong *)0x0;
  iVar19 = 0;
  if (((param_1->Object->Descriptor).bCanContainContent != false) ||
     ((param_1->Object->Descriptor).bCanContainVerse != false)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->RegisterMountPointDelegate,&local_f8);
    if ((*(int *)&(this->RegisterMountPointDelegate).field_0x10 != 0) &&
       ((plVar16 = *(longlong **)&(this->RegisterMountPointDelegate).field_0x8,
        plVar16 != (longlong *)0x0 && (cVar6 = (**(code **)(*plVar16 + 0x38))(), cVar6 != '\0')))) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_f8);
      bVar8 = true;
      bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &this->NewPluginMountedEvent);
      if (bVar7) {
        TMulticastDelegate<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>::Broadcast
                  ((TMulticastDelegate<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy> *)
                   &this->NewPluginMountedEvent,(IPlugin *)param_1->Object);
      }
      pTVar12 = &FPaths::GetPath(&local_130,&param_1->Object->FileName)->Data;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&local_198,pTVar12,9 - (uint)(pTVar12->ArrayNum != 0));
      ::FString::PathAppend((FString *)&local_198,L"Content",7);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      pFVar3 = param_1->Object;
      local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c0.Data.ArrayNum = 0;
      local_1c0.Data.ArrayMax = 0;
      iVar22 = (pFVar3->Name).Data.ArrayNum;
      iVar17 = iVar22 + 1;
      if (iVar22 == 0) {
        iVar17 = 2;
      }
      ::FString::Reserve(&local_1c0,iVar17);
      ::FString::AppendChar(&local_1c0,L'/');
      iVar17 = (pFVar3->Name).Data.ArrayNum;
      iVar22 = iVar17 + -1;
      if (iVar17 == 0) {
        iVar22 = iVar19;
      }
      ::FString::AppendChars
                (&local_1c0,(wchar_t *)(pFVar3->Name).Data.AllocatorInstance.Data,iVar22);
      ::FString::AppendChar(&local_1c0,L'/');
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->RegisterMountPointDelegate,&local_e0);
      plVar16 = plVar21;
      if (*(int *)&(this->RegisterMountPointDelegate).field_0x10 != 0) {
        plVar16 = *(longlong **)&(this->RegisterMountPointDelegate).field_0x8;
      }
      (**(code **)(*plVar16 + 0x60))(plVar16,&local_1c0,&local_198);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_e0);
      if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
      }
      if (((param_1->Object->Descriptor).bCanContainContent != false) &&
         (this_00 = FConfigCacheIni::Find(GConfig,&GEngineIni), this_00 != (FConfigFile *)0x0)) {
        pFVar13 = ::FName::FName(&local_158,"Paths");
        FConfigFile::AddUniqueToSection(this_00,L"Core.System",*pFVar13,(FString *)&local_198);
      }
      if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.AllocatorInstance.Data);
      }
      goto LAB_141e2a7e9;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f8);
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8987629764537741880>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
                       ,0xdc8,"RegisterMountPointDelegate.IsBound()");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar8 = false;
LAB_141e2a7e9:
  pFVar3 = param_1->Object;
  if (((pFVar3->Descriptor).bExplicitlyLoaded == false) &&
     (0 < (pFVar3->Descriptor).LocalizationTargets.ArrayNum)) {
    local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.ArrayNum = 0;
    local_1b0.ArrayMax = 0;
    PluginLocalizationUtils::GetLocalizationPathsForPlugin((IPlugin *)pFVar3,&local_1b0);
    this_01 = FTextLocalizationManager::Get();
    iStack_160 = local_1b0.ArrayNum;
    local_168 = local_1b0.AllocatorInstance.Data;
    local_a8._0_8_ = 0;
    local_80 = (longlong *)0x0;
    if ((local_1b0.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_118._12_4_ = uStack_15c;
    local_118.ArrayNum = iStack_160;
    local_118.DataPtr = (FString *)local_168;
    FTextLocalizationManager::HandleLocalizationTargetsMounted
              (this_01,&local_118,(TUniqueFunction<void___cdecl(void)> *)local_a8);
    if (local_a8._0_8_ != 0) {
      plVar16 = (longlong *)(local_a8 + 0x10);
      if (local_80 != (longlong *)0x0) {
        plVar16 = local_80;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    DestructItems<FString,int>((FString *)local_1b0.AllocatorInstance.Data,local_1b0.ArrayNum);
    if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.AllocatorInstance.Data);
    }
  }
  if (0 < (param_1->Object->Descriptor).Modules.ArrayNum) {
    _Str = FWindowsPlatformProcess::GetBinariesSubdirectory();
    pFVar14 = FPaths::GetPath(&local_108,&param_1->Object->FileName);
    if ((pFVar14->Data).ArrayNum == 0) {
      local_78.DataPtr = L"";
    }
    else {
      local_78.DataPtr = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    local_78.Size = iVar19;
    if ((FScriptContainerElement *)local_78.DataPtr != (FScriptContainerElement *)0x0) {
      sVar15 = wcslen(local_78.DataPtr);
      local_78.Size = (int)sVar15;
    }
    local_68 = L"Binaries";
    local_60 = 8;
    local_58 = _Str;
    if (_Str != (wchar_t *)0x0) {
      sVar15 = wcslen(_Str);
      iVar19 = (int)sVar15;
    }
    local_50 = iVar19;
    FPaths::CombineInternal(&local_180,&local_78,3);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    this_02 = FModuleManager::Get();
    EVar2 = param_1->Object->Type;
    if ((EVar2 == Engine) || (EVar2 == Enterprise)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    FVar23.Data = (FScriptContainerElement *)L"";
    if (local_180.Data.ArrayNum != 0) {
      FVar23.Data = local_180.Data.AllocatorInstance.Data;
    }
    FModuleManager::AddBinariesDirectory(this_02,(wchar_t *)FVar23.Data,bVar7);
    TVar5 = local_1a0;
    if (0 < (int)local_1a0) {
      do {
        TVar20 = (Type)plVar21;
        if (TVar20 != None) {
          TryLoadModulesForPlugin(this,param_1->Object,TVar20);
        }
        plVar21 = (longlong *)(ulonglong)(TVar20 + PostConfigInit);
      } while ((int)(TVar20 + PostConfigInit) < (int)TVar5);
    }
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
  }
  param_1->Object->bIsMounted = true;
  if ((bVar8) &&
     (bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &this->NewPluginContentMountedEvent), bVar8)) {
    TMulticastDelegate<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy> *)
               &this->NewPluginContentMountedEvent,(IPlugin *)param_1->Object);
  }
  if (GWarn != (FFeedbackContext *)0x0) {
    FFeedbackContext::EndSlowTask(GWarn);
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnLoadingPhaseComplete @ 141e2ab50

FLoadingModulesForPhaseEvent * __thiscall
FPluginManager::OnLoadingPhaseComplete(FPluginManager *this)

{
  return &this->LoadingPhaseCompleteEvent;
}

// OnNewPluginContentMounted @ 141e2ab70

FNewPluginMountedEvent * __thiscall FPluginManager::OnNewPluginContentMounted(FPluginManager *this)

{
  return &this->NewPluginContentMountedEvent;
}

// OnNewPluginCreated @ 141e2ab80

FNewPluginMountedEvent * __thiscall FPluginManager::OnNewPluginCreated(FPluginManager *this)

{
  return &this->NewPluginCreatedEvent;
}

// OnNewPluginMounted @ 141e2ab90

FNewPluginMountedEvent * __thiscall FPluginManager::OnNewPluginMounted(FPluginManager *this)

{
  return &this->NewPluginMountedEvent;
}

// OnPluginEdited @ 141e2aba0

FNewPluginMountedEvent * __thiscall FPluginManager::OnPluginEdited(FPluginManager *this)

{
  return &this->PluginEditedEvent;
}

// OnPluginUnmounted @ 141e2abb0

FNewPluginMountedEvent * __thiscall FPluginManager::OnPluginUnmounted(FPluginManager *this)

{
  return &this->PluginUnmountedEvent;
}

// PackageNameFromModuleName @ 141e2abd0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall FPluginManager::PackageNameFromModuleName(FPluginManager *this,FName param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName FVar5;
  ulonglong uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  uint uVar10;
  FName in_R8;
  longlong lVar11;
  FName local_res18 [2];
  FString local_a8;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_38;
  undefined2 local_30;
  
  local_res18[0] = in_R8;
  TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->AllPlugins);
  local_30 = 0;
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar6 = local_98._24_8_ >> 0x20;
  local_38 = (TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->AllPlugins;
  if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      iVar4 = *(int *)(*local_68 + 0x18 + (longlong)(int)uVar6 * 0x28);
      lVar1 = *local_68 + (longlong)(int)uVar6 * 0x28;
      uVar7 = iVar4 - 1;
      uVar10 = 0;
      if ((int)uVar7 < iVar4) {
        uVar10 = ~uVar7 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        FVar5 = (FName)(*pcVar2)();
        return FVar5;
      }
      lVar11 = (longlong)*(int *)(lVar1 + 0x18) * 0x10 + *(longlong *)(lVar1 + 0x10);
      uVar10 = 0;
      lVar1 = *(longlong *)(lVar11 + -0x10);
      iVar4 = *(int *)(lVar1 + 0x138);
      if (0 < iVar4) {
        lVar9 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar10 < iVar4) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            FVar5 = (FName)(*pcVar2)();
            return FVar5;
          }
          if (*(FName *)(lVar9 + *(longlong *)(lVar1 + 0x130)) == local_res18[0]) {
            pwVar8 = L"";
            if (4 < (byte)LogPluginManager._0_1_) {
              ::FName::ToString(local_res18,&local_a8);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager)
              ;
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
            lVar1 = *(longlong *)(lVar11 + -0x10);
            if (*(int *)(lVar1 + 0x20) != 0) {
              pwVar8 = *(wchar_t **)(lVar1 + 0x18);
            }
            ::FName::FName((FName *)param_1,pwVar8);
            if ((char)local_30 == '\0') {
              return param_1;
            }
            if (local_30._1_1_ == '\0') {
              return param_1;
            }
            uVar10 = *(int *)&(local_38->Elements).field_0x8 -
                     *(int *)&(local_38->Elements).field_0x34;
            if (uVar10 < 4) {
              iVar4 = 1;
            }
            else {
              uVar6 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
              lVar1 = 0x3f;
              if (uVar6 != 0) {
                for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
                }
              }
              iVar4 = 1 << ((byte)lVar1 & 0x1f);
            }
            if ((((int)uVar10 < 1) || (iVar4 <= local_38->HashSize)) &&
               (local_38->HashSize <= iVar4)) {
              return param_1;
            }
            local_38->HashSize = iVar4;
            TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::Rehash(local_38);
            return param_1;
          }
          iVar4 = *(int *)(lVar1 + 0x138);
          uVar10 = uVar10 + 1;
          lVar9 = lVar9 + 0x168;
        } while ((int)uVar10 < iVar4);
      }
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar6 = (ulonglong)uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
      uVar10 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar10 < 4) {
        iVar4 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar10) && (local_38->HashSize < iVar4)) || (iVar4 < local_38->HashSize)) {
        local_38->HashSize = iVar4;
        TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  *(FName *)param_1 = in_R8;
  return param_1;
}

// ProcessEnabledPlugins @ 141e2b150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPluginManager::ProcessEnabledPlugins(FPluginManager *this,FPluginDiscoveryContext *param_1)

{
  undefined1 *puVar1;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar2;
  atomic<int> *paVar3;
  uint uVar4;
  FPlugin *pFVar5;
  code *pcVar6;
  FPluginManager *pFVar7;
  FPluginManager *pFVar8;
  FPluginDiscoveryContext *pFVar9;
  FPluginDiscoveryContext *pFVar10;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar11;
  bool bVar12;
  int iVar13;
  TSharedRef<FPlugin,1> *pTVar14;
  ulonglong uVar15;
  FString *pFVar16;
  longlong lVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  wchar_t *pwVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  bool *pbVar24;
  undefined1 *puVar25;
  uint *puVar26;
  ForAnyElementType FVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  bool bVar30;
  undefined1 auStackY_5d8 [32];
  <lambda_1> local_588;
  undefined1 local_587;
  undefined1 local_586;
  undefined1 local_585 [5];
  ForAnyElementType local_580;
  undefined8 local_578;
  TArray<FName,TSizedDefaultAllocator<32>_> local_570;
  TArray<FString,TSizedDefaultAllocator<32>_> local_560;
  FName local_550;
  TSharedRef<FPlugin,1> local_548;
  FPluginManager *local_538;
  FPluginDiscoveryContext *local_530;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_528;
  TArray<FString,TSizedDefaultAllocator<32>_> local_520;
  FString local_510;
  FPluginDiscoveryContext *local_500;
  int iStack_4f8;
  uint uStack_4f4;
  undefined1 *local_4f0;
  undefined4 uStack_4e8;
  int iStack_4e4;
  int local_4e0;
  undefined4 uStack_4dc;
  int iStack_4d8;
  undefined4 uStack_4d4;
  int local_4d0;
  int local_4cc;
  undefined1 local_4c8 [12];
  FName local_4bc;
  TSharedRef<FPlugin,1> *local_4b0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_4a8;
  int iStack_4a0;
  uint uStack_49c;
  undefined1 *local_498;
  undefined4 uStack_490;
  int iStack_48c;
  int local_488;
  int iStack_484;
  int iStack_480;
  undefined4 uStack_47c;
  FPluginDiscoveryContext *local_478;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_470;
  undefined8 uStack_450;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_448;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_440;
  undefined8 uStack_420;
  FString local_418;
  TArrayView<std::nullptr_t,int> local_408;
  code *local_3f8;
  ForAnyElementType **local_3f0;
  ForAnyElementType *local_3e8;
  _RTL_CRITICAL_SECTION *local_3e0;
  _RTL_CRITICAL_SECTION *local_3d8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_3d0;
  undefined1 *local_3c8;
  FPluginManager *local_3c0;
  FString local_3b8;
  FScopedBootTiming local_3a8 [2];
  undefined4 local_374;
  FConfigContext local_368;
  undefined1 local_178 [8];
  undefined1 local_170 [64];
  void *local_130;
  undefined4 local_128;
  ForAnyElementType local_120;
  undefined8 local_118;
  undefined1 local_110 [64];
  void *local_d0;
  undefined4 local_c8;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  _RTL_CRITICAL_SECTION local_98;
  _RTL_CRITICAL_SECTION local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  bVar30 = -1 < CpuChannel->Enabled;
  local_538 = this;
  local_530 = param_1;
  if (bVar30) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1868,"ProcessEnabledPlugins",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
               ,0x74c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1868);
  }
  FScopedBootTiming::FScopedBootTiming(local_3a8,"ProcessEnabledPlugins");
  local_528 = &this->PluginsEnabledForTarget;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Reserve
            (local_528,
             *(int *)&(param_1->EnabledPlugins).field_0x8 -
             *(int *)&(param_1->EnabledPlugins).field_0x34);
  iVar13 = *(int *)&(param_1->EnabledPlugins).field_0x28;
  puVar1 = &(param_1->EnabledPlugins).field_0x10;
  iStack_4f8 = 0;
  local_4e0 = 0;
  uStack_4f4 = 1;
  iStack_4e4 = 0;
  if (iVar13 != 0) {
    puVar26 = *(uint **)&(param_1->EnabledPlugins).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar1;
    }
    uVar21 = *puVar26;
    while (uVar21 == 0) {
      lVar17 = (longlong)iStack_4f8;
      local_4e0 = local_4e0 + 0x20;
      iStack_4f8 = iStack_4f8 + 1;
      iStack_4e4 = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_4f8) goto LAB_141e2b27f;
      uVar21 = puVar26[lVar17 + 1];
    }
    uStack_4f4 = -uVar21 & uVar21;
    uVar15 = (ulonglong)uStack_4f4 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_4d0 = (int)lVar17;
    iStack_4e4 = local_4d0 + -1 + local_4e0;
    if (iVar13 < iStack_4e4) {
      iStack_4e4 = iVar13;
    }
  }
LAB_141e2b27f:
  uVar21 = *(uint *)&(param_1->EnabledPlugins).field_0x28;
  uStack_4dc = local_374;
  iStack_4d8 = *(int *)&(param_1->EnabledPlugins).field_0x8 -
               *(int *)&(param_1->EnabledPlugins).field_0x34;
  uVar28 = uVar21 & 0xffffffe0;
  TStack_470._padding_ = CONCAT44(uStack_4f4,iStack_4f8);
  uStack_4e8 = 0xffffffff;
  TStack_470.CurrentBitIndex = iStack_4e4;
  TStack_470.UnvisitedBitMask = 0xffffffff;
  iVar23 = (int)uVar21 >> 5;
  TStack_470._28_4_ = local_374;
  TStack_470.BaseBitIndex = local_4e0;
  uStack_450 = CONCAT44(uStack_4d4,iStack_4d8);
  local_500 = param_1;
  local_4f0 = puVar1;
  local_478 = param_1;
  TStack_470.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar13 < (int)uVar21)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar2 = local_528;
  pFVar9 = local_530;
  uVar4 = *(uint *)&(param_1->EnabledPlugins).field_0x28;
  if (uVar21 != uVar4) {
    puVar25 = *(undefined1 **)&(param_1->EnabledPlugins).field_0x20;
    if (puVar25 == (undefined1 *)0x0) {
      puVar25 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar23 * 4);
    while (uVar21 == 0) {
      lVar17 = (longlong)iVar23;
      uVar28 = uVar28 + 0x20;
      iVar23 = iVar23 + 1;
      uVar21 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23) goto LAB_141e2b3a0;
      uVar21 = *(uint *)(puVar25 + lVar17 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_4cc = (int)lVar17;
    uVar21 = local_4cc + -1 + uVar28;
    if ((int)uVar4 < (int)uVar21) {
      uVar21 = uVar4;
    }
  }
LAB_141e2b3a0:
  while( true ) {
    pFVar10 = local_478;
    if (*(int *)&(local_478->EnabledPlugins).field_0x8 -
        *(int *)&(local_478->EnabledPlugins).field_0x34 != (int)uStack_450) {
      local_587 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FPlugin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_587);
    }
    if (((TStack_470.CurrentBitIndex == uVar21) &&
        (TStack_470.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar10 == pFVar9)
       ) break;
    pbVar24 = (bool *)((longlong)TStack_470.CurrentBitIndex * 0x20 +
                      *(longlong *)&pFVar10->EnabledPlugins);
    if ((*(byte *)(*(longlong *)(pbVar24 + 0x10) + 0x254) & 1) != 0) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (pTVar2,(FString *)local_4c8,pbVar24);
    }
    TStack_470.UnvisitedBitMask = TStack_470.UnvisitedBitMask & ~TStack_470._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_470);
  }
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
            (&local_538->PluginsEnabledAtStartup,pTVar2);
  pFVar7 = local_538;
  local_580.Data = (FScriptContainerElement *)0x0;
  iStack_4a0 = 0;
  local_578 = 0;
  uStack_49c = 1;
  local_488 = 0;
  puVar1 = &(local_538->PluginsToConfigure).Elements.field_0x10;
  iVar13 = *(int *)&(local_538->PluginsToConfigure).Elements.field_0x28;
  pTVar2 = &local_538->PluginsToConfigure;
  iStack_48c = iStack_4a0;
  if (iVar13 != 0) {
    puVar26 = *(uint **)&(local_538->PluginsToConfigure).Elements.field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar1;
    }
    uVar21 = *puVar26;
    local_488 = 0;
    iStack_4a0 = 0;
    while (uVar21 == 0) {
      lVar17 = (longlong)iStack_4a0;
      local_488 = local_488 + 0x20;
      iStack_4a0 = iStack_4a0 + 1;
      iStack_48c = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_4a0) goto LAB_141e2b4af;
      uVar21 = puVar26[lVar17 + 1];
    }
    uStack_49c = -uVar21 & uVar21;
    uVar15 = (ulonglong)uStack_49c * 2 + 1;
    lVar17 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_4c8._4_4_ = (undefined4)lVar17;
    iStack_48c = local_4c8._4_4_ + -1 + local_488;
    if (iVar13 < iStack_48c) {
      iStack_48c = iVar13;
    }
  }
LAB_141e2b4af:
  iStack_484 = iStack_4e4;
  iStack_480 = *(int *)&(local_538->PluginsToConfigure).Elements.field_0x8 -
               *(int *)&(local_538->PluginsToConfigure).Elements.field_0x34;
  uVar21 = *(uint *)&(local_538->PluginsToConfigure).Elements.field_0x28;
  uVar28 = uVar21 & 0xffffffe0;
  uStack_490 = 0xffffffff;
  TStack_440._padding_ = CONCAT44(uStack_49c,iStack_4a0);
  TStack_440.CurrentBitIndex = iStack_48c;
  TStack_440.UnvisitedBitMask = 0xffffffff;
  iVar23 = (int)uVar21 >> 5;
  TStack_440._28_4_ = iStack_4e4;
  TStack_440.BaseBitIndex = local_488;
  uStack_420 = CONCAT44(uStack_47c,iStack_480);
  local_4a8 = pTVar2;
  local_498 = puVar1;
  local_448 = pTVar2;
  TStack_440.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar13 < (int)uVar21)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar8 = local_538;
  uVar4 = *(uint *)&(pFVar7->PluginsToConfigure).Elements.field_0x28;
  if (uVar21 != uVar4) {
    puVar25 = *(undefined1 **)&(pFVar7->PluginsToConfigure).Elements.field_0x20;
    if (puVar25 == (undefined1 *)0x0) {
      puVar25 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar23 * 4);
    while (uVar21 == 0) {
      lVar17 = (longlong)iVar23;
      uVar28 = uVar28 + 0x20;
      iVar23 = iVar23 + 1;
      uVar21 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23) goto LAB_141e2b5d0;
      uVar21 = *(uint *)(puVar25 + lVar17 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_4c8._8_4_ = (undefined4)lVar17;
    uVar21 = local_4c8._8_4_ + -1 + uVar28;
    if ((int)uVar4 < (int)uVar21) {
      uVar21 = uVar4;
    }
  }
LAB_141e2b5d0:
  while( true ) {
    pTVar11 = local_448;
    if (*(int *)&(local_448->Elements).field_0x8 - *(int *)&(local_448->Elements).field_0x34 !=
        (int)uStack_420) {
      local_586 = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_586);
    }
    if (((TStack_440.CurrentBitIndex == uVar21) &&
        (TStack_440.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) break;
    pTVar14 = DiscoveredPluginMapUtils::FindPluginInMap
                        (&pFVar8->AllPlugins,
                         (FString *)
                         (*(longlong *)&pTVar11->Elements +
                         (longlong)TStack_440.CurrentBitIndex * 0x18));
    if ((pTVar14 == (TSharedRef<FPlugin,1> *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("PluginPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
                            ,0xe0,L"Cannot find plugin %s"), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_548.Object = pTVar14->Object;
    local_548.SharedReferenceCount.ReferenceController =
         (pTVar14->SharedReferenceCount).ReferenceController;
    if (local_548.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_548.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_548.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((local_548.Object)->bEnabled) &&
       (((local_548.Object)->Descriptor).bExplicitlyLoaded == false)) {
      if ((local_580.Data <= &local_548) &&
         ((&local_548 < (TSharedRef<FPlugin,1> *)(local_580.Data + (longlong)local_578._4_4_ * 0x10)
          && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)))) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar13 = (int)local_578;
      if ((int)local_578 == local_578._4_4_) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_580,(int *)((longlong)&local_578 + 4));
      }
      local_578 = CONCAT44(local_578._4_4_,iVar13 + 1);
      *(FPlugin **)&local_580.Data[(longlong)iVar13 * 0x10].field_0x0 = local_548.Object;
      *(TReferenceControllerBase<1> **)(local_580.Data + (longlong)iVar13 * 0x10 + 8) =
           local_548.SharedReferenceCount.ReferenceController;
      if (local_548.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_548.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_548.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_548.SharedReferenceCount.ReferenceController);
    TStack_440.UnvisitedBitMask = TStack_440.UnvisitedBitMask & ~TStack_440._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_440);
  }
  local_520.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_520.ArrayNum = 0;
  local_520.ArrayMax = 0;
  FConfigCacheIni::GetArray
            (GConfig,L"Plugins",L"ConfigFilesPluginsCannotOverride",&local_520,&GEngineIni);
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  InitializeCriticalSectionAndSpinCount(&local_98,4000);
  uVar15 = local_578 & 0xffffffff;
  local_178[0] = true;
  local_178[1] = true;
  local_170._0_8_ = 0;
  local_170._8_8_ = 0;
  local_170._32_8_ = 0;
  local_170._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_170._48_8_ = _UNK_150631d98;
  local_130 = (void *)0x0;
  local_128 = 0;
  local_120.Data = (FScriptContainerElement *)0x0;
  local_118._0_4_ = 0;
  local_118._4_4_ = 0;
  local_110._0_8_ = 0;
  local_110._8_8_ = 0;
  local_110._32_8_ = 0;
  local_110._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_110._48_8_ = _UNK_150631d98;
  local_d0 = (void *)0x0;
  local_c8 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8._0_4_ = 0;
  local_b8._4_4_ = 0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 0;
  local_570.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_570.ArrayNum = 0;
  local_570.ArrayMax = 0;
  if ((int)local_578 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar15);
  }
  if (0 < (int)local_578) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_578,&local_570.AllocatorInstance,0,&local_570.ArrayMax);
    uVar15 = local_578 & 0xffffffff;
  }
  uVar18 = (ulonglong)(int)uVar15;
  local_530 = (FPluginDiscoveryContext *)CONCAT44(local_530._4_4_,(int)uVar15);
  local_4b0 = (TSharedRef<FPlugin,1> *)(local_580.Data + uVar18 * 0x10);
  FVar27.Data = local_580.Data;
  while( true ) {
    pTVar14 = local_4b0;
    if ((int)uVar15 != (int)uVar18) {
      local_585[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FPlugin,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_585);
    }
    if ((TSharedRef<FPlugin,1> *)FVar27.Data == pTVar14) {
      FConfigCacheIni::AddMultiplePluginsToAllBranches(&local_570,(FConfigModificationTracker *)0x0)
      ;
      local_3e8 = &local_580;
      local_3e0 = &local_70;
      local_408.DataPtr = (void **)0x0;
      local_3d8 = &local_98;
      local_408.ArrayNum = 0;
      local_3d0 = &local_520;
      local_3c8 = local_178;
      local_3c0 = local_538;
      local_3f8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPluginManager::ProcessEnabledPlugins'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_3f0 = &local_3e8;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",(int)local_578,1,(TFunctionRef<void___cdecl(int)> *)&local_3f8,
                 local_588,ForceSingleThread,&local_408);
      if ((FName *)local_570.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_570.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_b0.Data,(int)local_a8);
      if (local_b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data);
      }
      DestructItems<FString,int>((FString *)local_c0.Data,(int)local_b8);
      if (local_c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data);
      }
      local_c8 = 0;
      if (local_d0 != (void *)0x0) {
        FMemory::Free(local_d0);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FConfigModificationTracker::FCVarTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FConfigModificationTracker::FCVarTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FConfigModificationTracker::FCVarTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_110);
      DestructItems<FString,int>((FString *)local_120.Data,(int)local_118);
      if (local_120.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data);
      }
      local_128 = 0;
      if (local_130 != (void *)0x0) {
        FMemory::Free(local_130);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_170);
      DeleteCriticalSection(&local_98);
      DeleteCriticalSection(&local_70);
      DestructItems<FString,int>((FString *)local_520.AllocatorInstance.Data,local_520.ArrayNum);
      if (local_520.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_520.AllocatorInstance.Data);
      }
      DestructItems<TSharedRef<FPlugin,1>,int>
                ((TSharedRef<FPlugin,1> *)local_580.Data,(int)local_578);
      if ((TSharedRef<FPlugin,1> *)local_580.Data != (TSharedRef<FPlugin,1> *)0x0) {
        FMemory::Free(local_580.Data);
      }
      FScopedBootTiming::~FScopedBootTiming(local_3a8);
      if (bVar30) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    local_528 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                (((TSharedRef<FPlugin,1> *)FVar27.Data)->SharedReferenceCount).ReferenceController;
    pFVar5 = ((TSharedRef<FPlugin,1> *)FVar27.Data)->Object;
    if (local_528 != (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0) {
      LOCK();
      paVar3 = (atomic<int> *)&(local_528->Elements).field_0x8;
      *paVar3 = (atomic<int>)((int)*paVar3 + 1);
      UNLOCK();
    }
    if ((pFVar5->Name).Data.ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(pFVar5->Name).Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_550,pwVar20);
    if (((local_570.AllocatorInstance.Data <= &local_550) &&
        (&local_550 < (FName *)(local_570.AllocatorInstance.Data + (longlong)local_570.ArrayMax * 8)
        )) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar13 = local_570.ArrayNum;
    if (local_570.ArrayNum == local_570.ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_570.AllocatorInstance,&local_570.ArrayMax);
    }
    local_570.ArrayNum = iVar13 + 1;
    *(FName *)(local_570.AllocatorInstance.Data + (longlong)iVar13 * 8) = local_550;
    if (4 < (byte)LogPluginManager._0_1_) {
      EnumToString(&pFVar5->Type);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
    }
    if (5 < (byte)LogPluginManager._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
    }
    if ((1 < (pFVar5->Descriptor).DeprecatedEngineVersion.Data.ArrayNum) &&
       (3 < (byte)LogPluginManager._0_1_)) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
    }
    uVar21 = (pFVar5->PluginExtensionFileNameList).ArrayNum;
    local_560.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_560.ArrayNum = 0;
    local_560.ArrayMax = 0;
    if ((int)uVar21 < 0) break;
    if (0 < (int)uVar21) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar21,&local_560.AllocatorInstance,0,&local_560.ArrayMax);
    }
    iVar13 = (pFVar5->PluginExtensionFileNameList).ArrayNum;
    pFVar22 = (pFVar5->PluginExtensionFileNameList).AllocatorInstance.Data;
    pFVar29 = pFVar22 + (longlong)iVar13 * 0x10;
    while( true ) {
      if ((pFVar5->PluginExtensionFileNameList).ArrayNum != iVar13) {
        local_588 = (<lambda_1>)0x0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_588);
      }
      if (pFVar22 == pFVar29) break;
      pFVar16 = FPaths::GetPath(&local_3b8,(FString *)pFVar22);
      iVar23 = local_560.ArrayNum;
      if (local_560.ArrayNum == local_560.ArrayMax) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_560.AllocatorInstance,&local_560.ArrayMax);
      }
      local_560.ArrayNum = iVar23 + 1;
      pFVar19 = local_560.AllocatorInstance.Data + (longlong)iVar23 * 0x10;
      *(undefined8 *)pFVar19 = 0;
      *(FScriptContainerElement **)pFVar19 = (pFVar16->Data).AllocatorInstance.Data;
      (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar19 + 8) = (pFVar16->Data).ArrayNum;
      *(int *)(pFVar19 + 0xc) = (pFVar16->Data).ArrayMax;
      (pFVar16->Data).ArrayNum = 0;
      (pFVar16->Data).ArrayMax = 0;
      if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
      }
      pFVar22 = pFVar22 + 0x10;
    }
    FPaths::GetPath(&local_418,&pFVar5->FileName);
    FConfigCacheIni::RegisterPlugin(local_550,&local_418,&local_560,Plugin,false);
    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_560.AllocatorInstance.Data,local_560.ArrayNum);
    if (local_560.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_560.AllocatorInstance.Data);
    }
    local_510.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_510.Data.ArrayNum = 0;
    local_510.Data.ArrayMax = 0;
    FConfigContext::FConfigContext(&local_368,GConfig,true,&local_510,(FConfigFile *)0x0);
    if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_510.Data.AllocatorInstance.Data);
    }
    local_368.ChangeTracker = (FConfigModificationTracker *)local_178;
    if ((pFVar5->Name).Data.ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(pFVar5->Name).Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_4bc,pwVar20);
    local_368.ConfigFileTag = local_4bc;
    if ((pFVar5->Name).Data.ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(pFVar5->Name).Data.AllocatorInstance.Data;
    }
    FConfigContext::Load(&local_368,pwVar20);
    FConfigContext::~FConfigContext(&local_368);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_528);
    uVar15 = local_578 & 0xffffffff;
    FVar27.Data = FVar27.Data + 0x10;
    uVar18 = (ulonglong)local_530 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
}

// PromptToDisableDisalowedPlugin @ 141e2c000

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl FPluginManager::PromptToDisableDisalowedPlugin(FString *param_1,FString *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pFVar2 = FText::FromString(&local_38,param_2);
  pFVar3 = FText::FromString(&local_28,param_1);
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"PluginManager",L"DisablePluginMessage_DisallowedDependency",
                      L"This project requires the \'{0}\' plugin, which has a disallowed dependency on the \'{1}\' plugin.\n\nWould you like to disable it?\n\nIf you do, you will no longer be able to open any assets created with it. If not, the application will close."
                     );
  pFVar5 = FTextFormat::FTextFormat(&local_18,pFVar4,Default);
  FText::Format<FText,FText>(&local_58,pFVar5,pFVar3,pFVar2);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_68,L"PluginManager",L"DisablePluginCaption_IllegalDependency",
             L"Illegal Dependency");
  bVar1 = PromptToDisablePlugin(&local_68,&local_58,param_1);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return bVar1;
}

// PromptToDisableIncompatiblePlugin @ 141e2c100

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl FPluginManager::PromptToDisableIncompatiblePlugin(FString *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  TRefCountPtr<ITextData> TVar7;
  bool bVar8;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_78);
  iVar2 = (param_1->Data).ArrayNum;
  iVar1 = (param_2->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)(param_2->Data).AllocatorInstance.Data);
      bVar8 = iVar2 == 0;
      goto LAB_141e2c148;
    }
  }
  else {
    bVar8 = iVar2 + iVar1 == 1;
LAB_141e2c148:
    if (!bVar8) {
      pFVar3 = FText::FromString(&local_38,param_1);
      pFVar4 = FText::FromString(&local_28,param_2);
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"PluginManager",
                          L"DisablePluginMessage_MissingOrIncompatibleDependency",
                          L"Binaries for the \'{0}\' plugin (a dependency of \'{1}\') are missing or incompatible with the current engine version.\n\nWould you like to disable it? You will no longer be able to open assets that were created with it."
                         );
      pFVar6 = FTextFormat::FTextFormat((FTextFormat *)&local_18,pFVar5,Default);
      pFVar3 = FText::Format<FText,FText>(&local_58,pFVar6,pFVar4,pFVar3);
      FText::operator=(&local_78,pFVar3);
      TVar7.Reference = local_48.TextData.Reference;
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        TVar7.Reference = local_48.TextData.Reference;
      }
      goto LAB_141e2c260;
    }
  }
  pFVar3 = FText::FromString(&local_18,param_1);
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"PluginManager",
                      L"DisablePluginMessage_MissingOrIncompatibleEngineVersion",
                      L"Binaries for the \'{0}\' plugin are missing or incompatible with the current engine version.\n\nWould you like to disable it? You will no longer be able to open assets that were created with it."
                     );
  pFVar6 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar4,Default);
  pFVar3 = FText::Format<FText>(&local_48,pFVar6,pFVar3);
  FText::operator=(&local_78,pFVar3);
  TVar7.Reference = local_58.TextData.Reference;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    TVar7.Reference = local_58.TextData.Reference;
  }
LAB_141e2c260:
  if (TVar7.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar7.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_68,L"PluginManager",L"DisablePluginCaption",L"Missing Plugin");
  bVar8 = PromptToDisablePlugin(&local_68,&local_78,param_1);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  return bVar8;
}

// PromptToDisableMissingPlugin @ 141e2c2e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl FPluginManager::PromptToDisableMissingPlugin(FString *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  TRefCountPtr<ITextData> TVar7;
  bool bVar8;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_78);
  iVar2 = (param_1->Data).ArrayNum;
  iVar1 = (param_2->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)(param_2->Data).AllocatorInstance.Data);
      bVar8 = iVar2 == 0;
      goto LAB_141e2c328;
    }
  }
  else {
    bVar8 = iVar2 + iVar1 == 1;
LAB_141e2c328:
    if (!bVar8) {
      pFVar3 = FText::FromString(&local_38,param_2);
      pFVar4 = FText::FromString(&local_28,param_1);
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"PluginManager",L"DisablePluginMessage_MissingDependency",
                          L"This project requires the \'{0}\' plugin, which has a missing dependency on the \'{1}\' plugin.\n\nWould you like to disable it?\n\nIf you do, you will no longer be able to open any assets created with it. If not, the application will close."
                         );
      pFVar6 = FTextFormat::FTextFormat((FTextFormat *)&local_18,pFVar5,Default);
      pFVar3 = FText::Format<FText,FText>(&local_58,pFVar6,pFVar4,pFVar3);
      FText::operator=(&local_78,pFVar3);
      TVar7.Reference = local_48.TextData.Reference;
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        TVar7.Reference = local_48.TextData.Reference;
      }
      goto LAB_141e2c440;
    }
  }
  pFVar3 = FText::FromString(&local_18,param_1);
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"PluginManager",L"DisablePluginMessage_NotFound",
                      L"This project requires the \'{0}\' plugin, which could not be found. Would you like to disable it and continue?\n\nIf you do, you will no longer be able to open any assets created with it. If not, the application will close."
                     );
  pFVar6 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar4,Default);
  pFVar3 = FText::Format<FText>(&local_48,pFVar6,pFVar3);
  FText::operator=(&local_78,pFVar3);
  TVar7.Reference = local_58.TextData.Reference;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    TVar7.Reference = local_58.TextData.Reference;
  }
LAB_141e2c440:
  if (TVar7.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar7.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_68,L"PluginManager",L"DisablePluginCaption",L"Missing Plugin");
  bVar8 = PromptToDisablePlugin(&local_68,&local_78,param_1);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  return bVar8;
}

// PromptToDisablePlugin @ 141e2c4c0

bool __cdecl FPluginManager::PromptToDisablePlugin(FText *param_1,FText *param_2,FString *param_3)

{
  code *pcVar1;
  char cVar2;
  Type TVar3;
  IProjectManager *pIVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  FText local_28;
  FString local_18;
  
  pIVar4 = IProjectManager::Get();
  lVar5 = (**(code **)((longlong)*pIVar4 + 8))(pIVar4);
  if (lVar5 != 0) {
    TVar3 = FMessageDialog::Open(YesNo,param_2,param_1);
    if (TVar3 == Yes) {
      FText::FText(&local_28);
      pIVar4 = IProjectManager::Get();
      pcVar1 = *(code **)((longlong)*pIVar4 + 0x80);
      if ((param_3->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
      }
      ::FString::FString(&local_18,pwVar6);
      cVar2 = (*pcVar1)(pIVar4,&local_18,0,&local_28);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (cVar2 != '\0') {
        if (local_28.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
        }
        return true;
      }
      FMessageDialog::Open(Ok,&local_28);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
    }
  }
  return false;
}

// PromptToDisableSealedPlugin @ 141e2c5c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl FPluginManager::PromptToDisableSealedPlugin(FString *param_1,FString *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pFVar2 = FText::FromString(&local_38,param_2);
  pFVar3 = FText::FromString(&local_28,param_1);
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"PluginManager",L"DisablePluginMessage_IllegalDependency",
                      L"This project requires the \'{0}\' plugin, which has an illegal dependency on the sealed \'{1}\' plugin.\n\nWould you like to disable it?\n\nIf you do, you will no longer be able to open any assets created with it. If not, the application will close."
                     );
  pFVar5 = FTextFormat::FTextFormat(&local_18,pFVar4,Default);
  FText::Format<FText,FText>(&local_58,pFVar5,pFVar3,pFVar2);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_68,L"PluginManager",L"DisablePluginCaption_IllegalDependency",
             L"Illegal Dependency");
  bVar1 = PromptToDisablePlugin(&local_68,&local_58,param_1);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return bVar1;
}

// PromptToDownloadPlugin @ 141e2c6c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl FPluginManager::PromptToDownloadPlugin(FString *param_1,FString *param_2)

{
  bool bVar1;
  uint uVar2;
  Type TVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  TRefCountPtr<ITextData> TVar7;
  wchar_t *pwVar8;
  int iVar9;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  ::FString::FString((FString *)&local_68,"https://");
  pwVar8 = L"";
  uVar2 = local_68.Flags;
  TVar7.Reference = (ITextData *)L"";
  if (uVar2 != 0) {
    TVar7.Reference = local_68.TextData.Reference;
  }
  iVar9 = uVar2 - 1;
  if (uVar2 == 0) {
    iVar9 = 0;
  }
  bVar1 = ::FString::StartsWith(param_2,(wchar_t *)TVar7.Reference,iVar9,IgnoreCase);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_68.TextData.Reference);
  }
  if (bVar1) {
    pFVar4 = FText::FromString(&local_38,param_1);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"PluginManager",L"DownloadPluginCaption",L"Missing {0} Plugin");
    pFVar6 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar5,Default);
    FText::Format<FText>(&local_48,pFVar6,pFVar4);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    pFVar4 = FText::FromString(&local_28,param_1);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"PluginManager",L"DownloadPluginMessage",
                        L"This project requires the {0} plugin.\n\nWould you like to download it from the Unreal Engine Marketplace?"
                       );
    pFVar6 = FTextFormat::FTextFormat((FTextFormat *)&local_38,pFVar5,Default);
    FText::Format<FText>(&local_58,pFVar6,pFVar4);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    TVar3 = FMessageDialog::Open(YesNo,&local_58,&local_48);
    if (TVar3 == Yes) {
      local_68.TextData.Reference = (ITextData *)0x0;
      local_68.Flags = 0;
      local_68._12_4_ = 0;
      if ((param_2->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      FWindowsPlatformProcess::LaunchURL(pwVar8,(wchar_t *)0x0,(FString *)&local_68);
      iVar9 = local_68.Flags - 1;
      if (local_68.Flags == 0) {
        iVar9 = 0;
      }
      if (iVar9 == 0) {
        if (local_68.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_68.TextData.Reference);
        }
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        }
        return true;
      }
      pFVar4 = FText::FromString(&local_38,(FString *)&local_68);
      FMessageDialog::Open(Ok,pFVar4);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_68.TextData.Reference);
      }
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  return false;
}

// PromptToLoadIncompatiblePlugin @ 141e2c8e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl FPluginManager::PromptToLoadIncompatiblePlugin(FPlugin *param_1)

{
  Type TVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  pFVar2 = FText::FromString(&local_38,&(param_1->Descriptor).EngineVersion);
  pFVar3 = FText::FromString(&local_28,&param_1->Name);
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"PluginManager",L"LoadIncompatiblePlugin",
                      L"The \'{0}\' plugin was designed for build {1}. Attempt to load it anyway?");
  pFVar5 = FTextFormat::FTextFormat((FTextFormat *)&local_18,pFVar4,Default);
  FText::Format<FText,FText>(&local_58,pFVar5,pFVar3,pFVar2);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::FromString(&local_18,&param_1->Name);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"PluginManager",L"IncompatiblePluginCaption",
                      L"\'{0}\' is Incompatible");
  pFVar5 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar3,Default);
  FText::Format<FText>(&local_68,pFVar5,pFVar2);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  TVar1 = FMessageDialog::Open(YesNo,&local_58,&local_68);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return TVar1 == Yes;
}

// ReadAllPlugins @ 141e30a10

/* WARNING: Removing unreachable block (ram,0x000141e3255c) */
/* WARNING: Removing unreachable block (ram,0x000141e314f3) */
/* WARNING: Removing unreachable block (ram,0x000141e326f2) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FPluginManager::ReadAllPlugins
          (TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
           *param_1,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 *puVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  void *_Src;
  code *pcVar4;
  ForAnyElementType FVar5;
  FFeedbackContext *pFVar6;
  FModuleDescriptor *pFVar7;
  TSharedRef<FPlugin,1> *pTVar8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  IProjectManager *pIVar14;
  FString *pFVar15;
  IFileManager *pIVar16;
  FText *pFVar17;
  ulonglong uVar18;
  FPlatformFileManager *this;
  IPlatformFile *pIVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  wchar_t *pwVar23;
  ForAnyElementType FVar24;
  longlong *plVar25;
  FName *pFVar26;
  ForAnyElementType *pFVar27;
  uint uVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  FScriptContainerElement *pFVar31;
  FPluginManifestEntry *pFVar32;
  FName *pFVar33;
  EPluginType EVar34;
  undefined1 *puVar35;
  uint *puVar36;
  FPlugin *pFVar37;
  FModuleDescriptor *this_00;
  FName *pFVar38;
  FPlugin *pFVar39;
  longlong *plVar40;
  int *piVar41;
  TReferenceControllerBase<1> *pTVar42;
  float fVar43;
  undefined1 local_res20 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_798;
  undefined1 local_788;
  undefined1 local_787;
  undefined1 local_786;
  undefined1 local_785;
  undefined1 local_784;
  undefined1 local_783;
  undefined1 local_782;
  undefined1 local_781;
  undefined1 local_780;
  undefined1 local_77f;
  undefined1 local_77e [6];
  TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> local_778;
  uint local_768;
  longlong local_760;
  FPlugin *local_758;
  FPlugin *local_750;
  ulonglong local_748;
  longlong *local_740;
  FPluginManifest local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FPlugin *local_6f8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_6f0;
  FString local_6e0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_6d0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_6c0;
  uint local_6b0;
  uint local_6ac;
  int local_6a8;
  int local_6a4;
  FName *local_6a0;
  TReferenceControllerBase<1> *local_698;
  FModuleDescriptor *local_690;
  TSharedRef<FPlugin,1> *local_688;
  longlong local_680;
  FString local_678;
  FString local_668;
  FString local_658;
  FString local_648;
  FText local_638;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_628;
  int iStack_620;
  uint uStack_61c;
  undefined1 *local_618;
  undefined4 uStack_610;
  int iStack_60c;
  int local_608;
  undefined4 uStack_604;
  int iStack_600;
  undefined4 uStack_5fc;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_5f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5f0;
  undefined8 uStack_5d0;
  undefined **local_5c8;
  undefined1 local_5c0;
  FPlugin **local_5b8;
  FString local_5b0;
  FString local_5a0;
  FString local_590;
  TStringView<wchar_t> local_580;
  wchar_t *local_570;
  undefined4 local_568;
  FText local_560;
  FText local_550;
  FText local_540;
  FString local_530;
  FString local_520;
  FText local_510;
  FText local_500;
  FText local_4f0;
  FText local_4e0;
  FText local_4d0;
  FString local_4c0;
  FText local_4b0;
  FText local_4a0;
  FText local_490;
  FText local_480;
  FText local_470;
  FString local_460;
  FString local_450;
  FText local_440;
  FText local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FText local_3f0;
  FText local_3e0;
  FText local_3d0;
  FText local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FText local_350;
  FText local_340;
  FString local_330;
  FSlowTask local_318;
  FSlowTask local_2b8;
  FSlowTask local_258;
  FSlowTask local_1f8;
  FSlowTask local_198;
  FSlowTask local_138;
  FSlowTask local_d8;
  undefined4 local_5c;
  
  local_798.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_798.ArrayNum = 0;
  local_798.ArrayMax = 0;
  pIVar14 = IProjectManager::Get();
  local_760 = (**(code **)((longlong)*pIVar14 + 8))(pIVar14);
  local_750 = (FPlugin *)0x0;
  local_748 = 0;
  if (local_760 != 0) {
    pFVar15 = FPaths::ProjectPluginsDir(&local_410);
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar23 = L"";
    }
    else {
      pwVar23 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_678,pwVar23);
    local_5c0 = 0;
    local_5c8 = &`FPluginManager::FindPluginManifestsInDirectory'::`2'::FManifestVisitor::_vftable_;
    local_5b8 = &local_750;
    pIVar16 = IFileManager::Get();
    FVar24.Data = (FScriptContainerElement *)L"";
    if (local_678.Data.ArrayNum != 0) {
      FVar24.Data = local_678.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar16 + 0x98))(pIVar16,FVar24.Data,&local_5c8);
    local_5c8 = &___7FDirectoryVisitor_IPlatformFile__6B_;
    if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_678.Data.AllocatorInstance.Data);
    }
    if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_410.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = GWarn;
  pFVar17 = FText::FText(&local_350);
  FSlowTask::FSlowTask
            (&local_318,
             (float)(*(int *)&(param_2->Elements).field_0x8 -
                    *(int *)&(param_2->Elements).field_0x34) + __real_40400000,pFVar17,true,pFVar6);
  FSlowTask::Initialize(&local_318);
  if (local_350.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_350.TextData.Reference + 0x10))();
  }
  plVar40 = (longlong *)&DAT_00000001;
  local_778.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_778.ArrayNum = 0;
  local_778.ArrayMax = 0;
  local_740 = (longlong *)&DAT_00000001;
  if ((uint)local_748 == 0) {
    if (5 < (byte)LogPluginManager._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
    }
    pFVar17 = FText::FText(&local_340);
    FSlowTask::EnterProgressFrame(&local_318,__real_3f000000,pFVar17);
    if (local_340.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_340.TextData.Reference + 0x10))();
    }
    ::FString::FString(&local_590,L"Plugins");
    pFVar15 = FPaths::EngineDir(&local_330);
    FPaths::GetExtensionDirs(&local_6d0,pFVar15,&local_590,Default);
    if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_330.Data.AllocatorInstance.Data);
    }
    if (local_590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_590.Data.AllocatorInstance.Data);
    }
    if (param_3 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
      TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
                (&local_798,&local_6d0);
    }
    pFVar6 = GWarn;
    pFVar17 = FText::FText(&local_560);
    FSlowTask::FSlowTask(&local_258,(float)local_6d0.ArrayNum,pFVar17,true,pFVar6);
    FSlowTask::Initialize(&local_258);
    if (local_560.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_560.TextData.Reference + 0x10))();
    }
    iVar13 = local_6d0.ArrayNum;
    fVar43 = __real_3f800000;
    pFVar30 = local_6d0.AllocatorInstance.Data + (longlong)local_6d0.ArrayNum * 0x10;
    FVar24.Data = local_6d0.AllocatorInstance.Data;
    while( true ) {
      if (local_6d0.ArrayNum != iVar13) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (FVar24.Data == pFVar30) break;
      pFVar17 = FText::FText(&local_550);
      FSlowTask::EnterProgressFrame(&local_258,fVar43,pFVar17);
      if (local_550.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_550.TextData.Reference + 0x10))();
      }
      ReadPluginsInDirectory((FString *)FVar24.Data,Engine,param_1,&local_778);
      FVar24.Data = FVar24.Data + 0x10;
    }
    FSlowTask::Destroy(&local_258);
    if (local_258.FrameMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_258.FrameMessage.TextData.Reference + 0x10))();
    }
    if (local_258.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_258.DefaultMessage.TextData.Reference + 0x10))();
    }
    pFVar17 = FText::FText(&local_540);
    FSlowTask::EnterProgressFrame(&local_318,__real_3f000000,pFVar17);
    if (local_540.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_540.TextData.Reference + 0x10))();
    }
    if (local_760 != 0) {
      ::FString::FString(&local_5b0,L"Plugins");
      pFVar15 = FPaths::GetProjectFilePath(&local_520);
      pFVar15 = FPaths::GetPath(&local_530,pFVar15);
      FPaths::GetExtensionDirs(&local_6f0,pFVar15,&local_5b0,Default);
      if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_530.Data.AllocatorInstance.Data);
      }
      if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_520.Data.AllocatorInstance.Data);
      }
      if (local_5b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5b0.Data.AllocatorInstance.Data);
      }
      iVar13 = local_6f0.ArrayNum;
      if ((param_3 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) &&
         (local_6f0.ArrayNum != 0)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,local_6f0.ArrayNum,&local_798.AllocatorInstance,
                            &local_798.ArrayNum,&local_798.ArrayMax);
        ConstructItems<FString,FString,int>
                  (local_798.AllocatorInstance.Data + (longlong)iVar12 * 0x10,
                   (FString *)local_6f0.AllocatorInstance.Data,iVar13);
      }
      pFVar6 = GWarn;
      pFVar17 = FText::FText(&local_510);
      FSlowTask::FSlowTask(&local_1f8,(float)local_6f0.ArrayNum,pFVar17,true,pFVar6);
      FSlowTask::Initialize(&local_1f8);
      if (local_510.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_510.TextData.Reference + 0x10))();
      }
      iVar13 = local_6f0.ArrayNum;
      pFVar30 = local_6f0.AllocatorInstance.Data + (longlong)local_6f0.ArrayNum * 0x10;
      FVar24.Data = local_6f0.AllocatorInstance.Data;
      while( true ) {
        if (local_6f0.ArrayNum != iVar13) {
          local_788 = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_788);
        }
        if (FVar24.Data == pFVar30) break;
        pFVar17 = FText::FText(&local_500);
        FSlowTask::EnterProgressFrame(&local_1f8,fVar43,pFVar17);
        if (local_500.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_500.TextData.Reference + 0x10))();
        }
        ReadPluginsInDirectory((FString *)FVar24.Data,Project,param_1,&local_778);
        FVar24.Data = FVar24.Data + 0x10;
      }
      FSlowTask::Destroy(&local_1f8);
      if (local_1f8.FrameMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1f8.FrameMessage.TextData.Reference + 0x10))();
      }
      if (local_1f8.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1f8.DefaultMessage.TextData.Reference + 0x10))();
      }
      DestructItems<FString,int>((FString *)local_6f0.AllocatorInstance.Data,local_6f0.ArrayNum);
      if (local_6f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6f0.AllocatorInstance.Data);
      }
    }
    lVar21 = local_760;
    DestructItems<FString,int>((FString *)local_6d0.AllocatorInstance.Data,local_6d0.ArrayNum);
    if (local_6d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d0.AllocatorInstance.Data);
    }
  }
  else {
    pFVar17 = FText::FText(&local_4f0);
    fVar43 = __real_3f800000;
    FSlowTask::EnterProgressFrame(&local_318,__real_3f800000,pFVar17);
    if (local_4f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4f0.TextData.Reference + 0x10))();
    }
    pFVar6 = GWarn;
    pFVar17 = FText::FText(&local_4e0);
    FSlowTask::FSlowTask(&local_138,(float)(int)(uint)local_748,pFVar17,true,pFVar6);
    FSlowTask::Initialize(&local_138);
    if (local_4e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4e0.TextData.Reference + 0x10))();
    }
    uVar18 = (ulonglong)(int)(uint)local_748;
    pFVar37 = (FPlugin *)
              ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&local_750->_padding_ + uVar18);
    local_768 = (uint)local_748;
    uVar22 = uVar18;
    pFVar39 = local_750;
    local_6f8 = pFVar37;
    while( true ) {
      local_758 = pFVar39;
      if ((int)uVar18 != (int)uVar22) {
        local_787 = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_787);
      }
      if (pFVar39 == pFVar37) break;
      pFVar17 = FText::FText(&local_4d0);
      FSlowTask::EnterProgressFrame(&local_138,fVar43,pFVar17);
      if (local_4d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_4d0.TextData.Reference + 0x10))();
      }
      if (5 < (byte)LogPluginManager._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
      }
      if (param_3 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
        FPaths::ConvertRelativePathToFull(&local_4c0,(FString *)pFVar39);
        ::FString::PrintfImpl(&local_708,L"Manifest: %s");
        pFVar30 = (param_3->AllocatorInstance).Data;
        if (((pFVar30 <= (FScriptContainerElement *)&local_708) &&
            ((FScriptContainerElement *)&local_708 < pFVar30 + (longlong)param_3->ArrayMax * 0x10))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar13 = param_3->ArrayNum;
        if (iVar13 == param_3->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        lVar21 = (longlong)iVar13;
        param_3->ArrayNum = iVar13 + 1;
        pFVar30 = (param_3->AllocatorInstance).Data;
        *(undefined8 *)(pFVar30 + lVar21 * 0x10) = 0;
        *(FScriptContainerElement **)(pFVar30 + lVar21 * 0x10) =
             local_708.Data.AllocatorInstance.Data;
        *(int *)(pFVar30 + lVar21 * 0x10 + 8) = local_708.Data.ArrayNum;
        *(int *)(pFVar30 + lVar21 * 0x10 + 0xc) = local_708.Data.ArrayMax;
        local_708.Data.ArrayNum = 0;
        local_708.Data.ArrayMax = 0;
        local_708.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
        }
      }
      local_738.Contents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_738.Contents.ArrayNum = 0;
      local_738.Contents.ArrayMax = 0;
      FText::FText(&local_638);
      bVar10 = FPluginManifest::Load(&local_738,(FString *)pFVar39,&local_638);
      if (!bVar10) {
        FText::ToString(&local_638);
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
      }
      FPaths::EngineDir(&local_648);
      FPaths::EnterpriseDir(&local_658);
      FPaths::ProjectModsDir(&local_668);
      pFVar6 = GWarn;
      pFVar17 = FText::FText(&local_4b0);
      FSlowTask::FSlowTask(&local_198,(float)local_738.Contents.ArrayNum,pFVar17,true,pFVar6);
      FSlowTask::Initialize(&local_198);
      if (local_4b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_4b0.TextData.Reference + 0x10))();
      }
      iVar13 = local_738.Contents.ArrayNum;
      uVar22 = (ulonglong)local_738.Contents.ArrayNum;
      pFVar32 = (FPluginManifestEntry *)(local_738.Contents.AllocatorInstance.Data + uVar22 * 0x218)
      ;
      FVar24.Data = local_738.Contents.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar22 != iVar13) {
          local_786 = 0;
          `TCheckedPointerIterator<FPluginManifestEntry,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_786);
        }
        if ((FPluginManifestEntry *)FVar24.Data == pFVar32) break;
        pFVar17 = FText::FText(&local_4a0);
        FSlowTask::EnterProgressFrame(&local_198,fVar43,pFVar17);
        if (local_4a0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_4a0.TextData.Reference + 0x10))();
        }
        iVar12 = local_648.Data.ArrayNum + -1;
        FVar5.Data = local_648.Data.AllocatorInstance.Data;
        if (local_648.Data.ArrayNum == 0) {
          iVar12 = 0;
          FVar5.Data = (FScriptContainerElement *)L"";
        }
        bVar10 = ::FString::StartsWith
                           ((FString *)FVar24.Data,(wchar_t *)FVar5.Data,iVar12,IgnoreCase);
        if (bVar10) {
          EVar34 = Engine;
        }
        else {
          iVar12 = local_658.Data.ArrayNum + -1;
          FVar5.Data = local_658.Data.AllocatorInstance.Data;
          if (local_658.Data.ArrayNum == 0) {
            iVar12 = 0;
            FVar5.Data = (FScriptContainerElement *)L"";
          }
          bVar10 = ::FString::StartsWith
                             ((FString *)FVar24.Data,(wchar_t *)FVar5.Data,iVar12,IgnoreCase);
          if (bVar10) {
            EVar34 = Enterprise;
          }
          else {
            iVar12 = local_668.Data.ArrayNum + -1;
            FVar5.Data = local_668.Data.AllocatorInstance.Data;
            if (local_668.Data.ArrayNum == 0) {
              iVar12 = 0;
              FVar5.Data = (FScriptContainerElement *)L"";
            }
            bVar10 = ::FString::StartsWith
                               ((FString *)FVar24.Data,(wchar_t *)FVar5.Data,iVar12,IgnoreCase);
            EVar34 = Project;
            if (bVar10) {
              EVar34 = Mod;
            }
          }
        }
        CreatePluginObject((FString *)FVar24.Data,&((FPluginManifestEntry *)FVar24.Data)->Descriptor
                           ,EVar34,param_1,&local_778);
        uVar22 = local_738.Contents._8_8_ & 0xffffffff;
        FVar24.Data = FVar24.Data + 0x218;
      }
      FSlowTask::Destroy(&local_198);
      pFVar37 = local_6f8;
      pFVar39 = local_758;
      uVar22 = (ulonglong)local_768;
      if (local_198.FrameMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_198.FrameMessage.TextData.Reference + 0x10))();
      }
      if (local_198.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_198.DefaultMessage.TextData.Reference + 0x10))();
      }
      if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_668.Data.AllocatorInstance.Data);
      }
      if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_658.Data.AllocatorInstance.Data);
      }
      if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_648.Data.AllocatorInstance.Data);
      }
      if (local_638.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_638.TextData.Reference + 0x10))();
      }
      DestructItems<FPluginManifestEntry,int>
                ((FPluginManifestEntry *)local_738.Contents.AllocatorInstance.Data,
                 local_738.Contents.ArrayNum);
      if ((FPluginManifestEntry *)local_738.Contents.AllocatorInstance.Data !=
          (FPluginManifestEntry *)0x0) {
        FMemory::Free(local_738.Contents.AllocatorInstance.Data);
      }
      uVar18 = local_748 & 0xffffffff;
      pFVar39 = (FPlugin *)&pFVar39->_padding_;
    }
    FSlowTask::Destroy(&local_138);
    if (local_138.FrameMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.FrameMessage.TextData.Reference + 0x10))();
    }
    lVar21 = local_760;
    if (local_138.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.DefaultMessage.TextData.Reference + 0x10))();
      lVar21 = local_760;
    }
  }
  pFVar17 = FText::FText(&local_490);
  FSlowTask::EnterProgressFrame(&local_318,fVar43,pFVar17);
  if (local_490.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_490.TextData.Reference + 0x10))();
  }
  pFVar6 = GWarn;
  if (lVar21 != 0) {
    pFVar17 = FText::FText(&local_480);
    FSlowTask::FSlowTask
              (&local_2b8,(float)*(int *)(lVar21 + 0x120) + __real_40000000,pFVar17,true,pFVar6);
    FSlowTask::Initialize(&local_2b8);
    if (local_480.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_480.TextData.Reference + 0x10))();
    }
    pFVar17 = FText::FText(&local_470);
    FSlowTask::EnterProgressFrame(&local_2b8,fVar43,pFVar17);
    if (local_470.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_470.TextData.Reference + 0x10))();
    }
    pFVar15 = FPaths::ProjectModsDir(&local_460);
    ReadPluginsInDirectory(pFVar15,Mod,param_1,&local_778);
    if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_460.Data.AllocatorInstance.Data);
    }
    if (param_3 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar30 = (FScriptContainerElement *)FPaths::ProjectModsDir(&local_450);
      if (((local_798.AllocatorInstance.Data <= pFVar30) &&
          (pFVar30 < local_798.AllocatorInstance.Data + (longlong)local_798.ArrayMax * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar13 = local_798.ArrayNum;
      if (local_798.ArrayNum == local_798.ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_798.AllocatorInstance,&local_798.ArrayMax);
      }
      local_798.ArrayNum = iVar13 + 1;
      lVar20 = (longlong)iVar13;
      *(undefined8 *)(local_798.AllocatorInstance.Data + lVar20 * 0x10) = 0;
      *(undefined8 *)(local_798.AllocatorInstance.Data + lVar20 * 0x10) = *(undefined8 *)pFVar30;
      *(undefined8 *)pFVar30 = 0;
      *(int *)(local_798.AllocatorInstance.Data + lVar20 * 0x10 + 8) = *(int *)(pFVar30 + 8);
      *(int *)(local_798.AllocatorInstance.Data + lVar20 * 0x10 + 0xc) = *(int *)(pFVar30 + 0xc);
      *(undefined8 *)(pFVar30 + 8) = 0;
      if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_450.Data.AllocatorInstance.Data);
      }
    }
    lVar20 = local_760;
    pFVar30 = *(FScriptContainerElement **)(lVar21 + 0x118);
    iVar13 = *(int *)(lVar21 + 0x120);
    pFVar31 = pFVar30 + (longlong)iVar13 * 0x10;
    while( true ) {
      if (*(int *)(lVar20 + 0x120) != iVar13) {
        local_785 = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_785);
      }
      if (pFVar30 == pFVar31) break;
      pFVar17 = FText::FText(&local_440);
      FSlowTask::EnterProgressFrame(&local_2b8,fVar43,pFVar17);
      if (local_440.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_440.TextData.Reference + 0x10))();
      }
      if (param_3 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
        if (((local_798.AllocatorInstance.Data <= pFVar30) &&
            (pFVar30 < local_798.AllocatorInstance.Data + (longlong)local_798.ArrayMax * 0x10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar12 = local_798.ArrayNum;
        if (local_798.ArrayNum == local_798.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_798.AllocatorInstance,&local_798.ArrayMax);
        }
        local_798.ArrayNum = iVar12 + 1;
        ::FString::FString((FString *)(local_798.AllocatorInstance.Data + (longlong)iVar12 * 0x10),
                           (FString *)pFVar30);
      }
      ReadPluginsInDirectory((FString *)pFVar30,External,param_1,&local_778);
      pFVar30 = pFVar30 + 0x10;
    }
    pFVar17 = FText::FText(&local_430);
    FSlowTask::EnterProgressFrame(&local_2b8,fVar43,pFVar17);
    plVar40 = local_740;
    if (local_430.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_430.TextData.Reference + 0x10))();
    }
    pFVar15 = FPaths::EnterprisePluginsDir(&local_420);
    bVar10 = FPaths::DirectoryExists(pFVar15);
    if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_420.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      if (param_3 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar30 = (FScriptContainerElement *)FPaths::EnterprisePluginsDir(&local_360);
        if (((local_798.AllocatorInstance.Data <= pFVar30) &&
            (pFVar30 < local_798.AllocatorInstance.Data + (longlong)local_798.ArrayMax * 0x10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar13 = local_798.ArrayNum;
        if (local_798.ArrayNum == local_798.ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_798.AllocatorInstance,&local_798.ArrayMax);
        }
        local_798.ArrayNum = iVar13 + 1;
        lVar21 = (longlong)iVar13;
        *(undefined8 *)(local_798.AllocatorInstance.Data + lVar21 * 0x10) = 0;
        *(undefined8 *)(local_798.AllocatorInstance.Data + lVar21 * 0x10) = *(undefined8 *)pFVar30;
        *(undefined8 *)pFVar30 = 0;
        *(int *)(local_798.AllocatorInstance.Data + lVar21 * 0x10 + 8) = *(int *)(pFVar30 + 8);
        *(int *)(local_798.AllocatorInstance.Data + lVar21 * 0x10 + 0xc) = *(int *)(pFVar30 + 0xc);
        *(undefined8 *)(pFVar30 + 8) = 0;
        if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_360.Data.AllocatorInstance.Data);
        }
      }
      pFVar15 = FPaths::EnterprisePluginsDir(&local_400);
      ReadPluginsInDirectory(pFVar15,(EPluginType)plVar40,param_1,&local_778);
      if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_400.Data.AllocatorInstance.Data);
      }
    }
    FSlowTask::Destroy(&local_2b8);
    if (local_2b8.FrameMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2b8.FrameMessage.TextData.Reference + 0x10))();
    }
    if (local_2b8.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2b8.DefaultMessage.TextData.Reference + 0x10))();
    }
  }
  uStack_61c = (uint)plVar40;
  iVar13 = *(int *)&(param_2->Elements).field_0x28;
  puVar1 = &(param_2->Elements).field_0x10;
  iStack_620 = 0;
  local_608 = 0;
  iStack_60c = 0;
  if (iVar13 != 0) {
    puVar36 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar36 == (uint *)0x0) {
      puVar36 = (uint *)puVar1;
    }
    uVar29 = *puVar36;
    local_608 = 0;
    while (uVar29 == 0) {
      lVar21 = (longlong)iStack_620;
      local_608 = local_608 + 0x20;
      iStack_620 = iStack_620 + 1;
      iStack_60c = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_620) goto LAB_141e31a3e;
      uVar29 = puVar36[lVar21 + 1];
    }
    uStack_61c = -uVar29 & uVar29;
    uVar22 = (ulonglong)uStack_61c * 2 + 1;
    lVar21 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_6a8 = (int)lVar21;
    iStack_60c = local_608 + -1 + local_6a8;
    if (iVar13 < iStack_60c) {
      iStack_60c = iVar13;
    }
  }
LAB_141e31a3e:
  uStack_604 = local_5c;
  iStack_600 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  uVar29 = *(uint *)&(param_2->Elements).field_0x28;
  uStack_610 = 0xffffffff;
  uVar28 = uVar29 & 0xffffffe0;
  TStack_5f0._padding_ = CONCAT44(uStack_61c,iStack_620);
  TStack_5f0.CurrentBitIndex = iStack_60c;
  TStack_5f0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar29 >> 5;
  TStack_5f0._28_4_ = local_5c;
  TStack_5f0.BaseBitIndex = local_608;
  uStack_5d0 = CONCAT44(uStack_5fc,iStack_600);
  local_628 = param_2;
  local_618 = puVar1;
  local_5f8 = param_2;
  TStack_5f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar29 < 0) || (iVar13 < (int)uVar29)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(param_2->Elements).field_0x28;
  if (uVar29 != uVar3) {
    puVar35 = *(undefined1 **)&(param_2->Elements).field_0x20;
    if (puVar35 == (undefined1 *)0x0) {
      puVar35 = puVar1;
    }
    uVar29 = -1 << ((byte)uVar29 & 0x1f) & *(uint *)(puVar35 + (longlong)iVar12 * 4);
    while (uVar29 == 0) {
      lVar21 = (longlong)iVar12;
      uVar28 = uVar28 + 0x20;
      iVar12 = iVar12 + 1;
      uVar29 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141e31b80;
      uVar29 = *(uint *)(puVar35 + lVar21 * 4 + 4);
    }
    uVar22 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_6a4 = (int)lVar21;
    uVar29 = local_6a4 + -1 + uVar28;
    if ((int)uVar3 < (int)uVar29) {
      uVar29 = uVar3;
    }
  }
LAB_141e31b80:
  while( true ) {
    pTVar9 = local_5f8;
    if (*(int *)&(local_5f8->Elements).field_0x8 - *(int *)&(local_5f8->Elements).field_0x34 !=
        (int)uStack_5d0) {
      local_784 = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_784);
    }
    if (((TStack_5f0.CurrentBitIndex == uVar29) &&
        (TStack_5f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == param_2)
       ) break;
    pFVar30 = (FScriptContainerElement *)
              (*(longlong *)&pTVar9->Elements + (longlong)TStack_5f0.CurrentBitIndex * 0x18);
    pFVar17 = FText::FText(&local_3f0);
    FSlowTask::EnterProgressFrame(&local_318,fVar43,pFVar17);
    if (local_3f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3f0.TextData.Reference + 0x10))();
    }
    if (param_3 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
      if (((local_798.AllocatorInstance.Data <= pFVar30) &&
          (pFVar30 < local_798.AllocatorInstance.Data + (longlong)local_798.ArrayMax * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar13 = local_798.ArrayNum;
      if (local_798.ArrayNum == local_798.ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_798.AllocatorInstance,&local_798.ArrayMax);
      }
      local_798.ArrayNum = iVar13 + 1;
      ::FString::FString((FString *)(local_798.AllocatorInstance.Data + (longlong)iVar13 * 0x10),
                         (FString *)pFVar30);
    }
    ReadPluginsInDirectory((FString *)pFVar30,External,param_1,&local_778);
    TStack_5f0.UnvisitedBitMask = TStack_5f0.UnvisitedBitMask & ~TStack_5f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5f0);
  }
  pFVar17 = FText::FText(&local_3e0);
  FSlowTask::EnterProgressFrame(&local_318,fVar43,pFVar17);
  if (local_3e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3e0.TextData.Reference + 0x10))();
  }
  pFVar6 = GWarn;
  pFVar17 = FText::FText(&local_3d0);
  FSlowTask::FSlowTask(&local_d8,(float)local_778.ArrayNum,pFVar17,true,pFVar6);
  FSlowTask::Initialize(&local_d8);
  if (local_3d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3d0.TextData.Reference + 0x10))();
  }
  uVar18 = (ulonglong)local_778.ArrayNum;
  local_688 = (TSharedRef<FPlugin,1> *)(local_778.AllocatorInstance.Data + uVar18 * 0x10);
  local_6ac = local_778.ArrayNum;
  uVar22 = uVar18;
  FVar24.Data = local_778.AllocatorInstance.Data;
  do {
    pTVar8 = local_688;
    local_6f8 = (FPlugin *)FVar24.Data;
    if ((int)uVar18 != (int)uVar22) {
      local_783 = 0;
      `TCheckedPointerIterator<TSharedRef<FPlugin,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_783);
    }
    if ((TSharedRef<FPlugin,1> *)FVar24.Data == pTVar8) {
      if (param_3 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
        iVar13 = local_798.ArrayNum;
        uVar22 = (ulonglong)local_798.ArrayNum;
        pFVar30 = local_798.AllocatorInstance.Data + uVar22 * 0x10;
        FVar24.Data = local_798.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar22 != iVar13) {
            local_77e[0] = 0;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_77e);
          }
          if (FVar24.Data == pFVar30) break;
          FPaths::ConvertRelativePathToFull(&local_390,(FString *)FVar24.Data);
          ::FString::PrintfImpl(&local_718,L"PluginsDir: %s");
          pFVar31 = (param_3->AllocatorInstance).Data;
          if (((pFVar31 <= (FScriptContainerElement *)&local_718) &&
              ((FScriptContainerElement *)&local_718 < pFVar31 + (longlong)param_3->ArrayMax * 0x10)
              ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar12 = param_3->ArrayNum;
          if (iVar12 == param_3->ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          lVar21 = (longlong)iVar12;
          param_3->ArrayNum = iVar12 + 1;
          pFVar31 = (param_3->AllocatorInstance).Data;
          *(undefined8 *)(pFVar31 + lVar21 * 0x10) = 0;
          *(FScriptContainerElement **)(pFVar31 + lVar21 * 0x10) =
               local_718.Data.AllocatorInstance.Data;
          *(int *)(pFVar31 + lVar21 * 0x10 + 8) = local_718.Data.ArrayNum;
          *(int *)(pFVar31 + lVar21 * 0x10 + 0xc) = local_718.Data.ArrayMax;
          local_718.Data.ArrayNum = 0;
          local_718.Data.ArrayMax = 0;
          local_718.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_390.Data.AllocatorInstance.Data);
          }
          uVar22 = local_798._8_8_ & 0xffffffff;
          FVar24.Data = FVar24.Data + 0x10;
        }
        if (local_760 != 0) {
          this = FPlatformFileManager::Get();
          pIVar19 = FPlatformFileManager::FindPlatformFile(this,L"PakFile");
          if (pIVar19 != (IPlatformFile *)0x0) {
            pFVar15 = FPaths::ProjectContentDir(&local_370);
            local_580.DataPtr = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
            iVar13 = (pFVar15->Data).ArrayNum;
            local_580.Size = iVar13 + -1;
            if (iVar13 == 0) {
              local_580.Size = 0;
            }
            local_570 = L"Paks";
            local_568 = 4;
            FPaths::CombineInternal(&local_5a0,&local_580,2);
            FPaths::ConvertRelativePathToFull(&local_380,&local_5a0);
            ::FString::PrintfImpl(&local_728,L"PakFiles: %s");
            pFVar30 = (param_3->AllocatorInstance).Data;
            if (((pFVar30 <= (FScriptContainerElement *)&local_728) &&
                ((FScriptContainerElement *)&local_728 <
                 pFVar30 + (longlong)param_3->ArrayMax * 0x10)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar13 = param_3->ArrayNum;
            if (iVar13 == param_3->ArrayMax) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            lVar21 = (longlong)iVar13;
            param_3->ArrayNum = iVar13 + 1;
            pFVar30 = (param_3->AllocatorInstance).Data;
            *(undefined8 *)(pFVar30 + lVar21 * 0x10) = 0;
            *(FScriptContainerElement **)(pFVar30 + lVar21 * 0x10) =
                 local_728.Data.AllocatorInstance.Data;
            *(int *)(pFVar30 + lVar21 * 0x10 + 8) = local_728.Data.ArrayNum;
            *(int *)(pFVar30 + lVar21 * 0x10 + 0xc) = local_728.Data.ArrayMax;
            local_728.Data.ArrayNum = 0;
            local_728.Data.ArrayMax = 0;
            local_728.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_380.Data.AllocatorInstance.Data);
            }
            if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
            }
            if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_370.Data.AllocatorInstance.Data);
            }
          }
        }
      }
      FSlowTask::Destroy(&local_d8);
      if (local_d8.FrameMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.FrameMessage.TextData.Reference + 0x10))();
      }
      if (local_d8.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.DefaultMessage.TextData.Reference + 0x10))();
      }
      DestructItems<TSharedRef<FPlugin,1>,int>
                ((TSharedRef<FPlugin,1> *)local_778.AllocatorInstance.Data,local_778.ArrayNum);
      if ((TSharedRef<FPlugin,1> *)local_778.AllocatorInstance.Data != (TSharedRef<FPlugin,1> *)0x0)
      {
        FMemory::Free(local_778.AllocatorInstance.Data);
      }
      FSlowTask::Destroy(&local_318);
      if (local_318.FrameMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_318.FrameMessage.TextData.Reference + 0x10))();
      }
      if (local_318.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_318.DefaultMessage.TextData.Reference + 0x10))();
      }
      DestructItems<FString,int>((FString *)local_750,(uint)local_748);
      if (local_750 != (FPlugin *)0x0) {
        FMemory::Free(local_750);
      }
      DestructItems<FString,int>((FString *)local_798.AllocatorInstance.Data,local_798.ArrayNum);
      if (local_798.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_798.AllocatorInstance.Data);
      }
      return;
    }
    pTVar42 = (((TSharedRef<FPlugin,1> *)FVar24.Data)->SharedReferenceCount).ReferenceController;
    pFVar39 = ((TSharedRef<FPlugin,1> *)FVar24.Data)->Object;
    if (pTVar42 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar42->SharedReferenceCount = (atomic<int>)((int)pTVar42->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_758 = pFVar39;
    local_698 = pTVar42;
    pFVar17 = FText::FText(&local_3c0);
    FSlowTask::EnterProgressFrame(&local_d8,fVar43,pFVar17);
    if (local_3c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3c0.TextData.Reference + 0x10))();
    }
    plVar40 = (longlong *)0x0;
    local_6c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6c0.ArrayNum = 0;
    local_6c0.ArrayMax = 0;
    pFVar15 = FPaths::GetCleanFilename(&local_3b0,&pFVar39->FileName);
    ::FString::ParseIntoArray(pFVar15,&local_6c0,L"_",true);
    if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
    }
    if (local_6c0.ArrayNum == 2) {
      local_6e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6e0.Data.ArrayNum = *(int *)(local_6c0.AllocatorInstance.Data + 8);
      lVar21 = (longlong)local_6e0.Data.ArrayNum;
      _Src = *(void **)local_6c0.AllocatorInstance.Data;
      if (local_6e0.Data.ArrayNum == 0) {
        local_6e0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_6e0.Data.ArrayNum,0,(ForAnyElementType *)&local_6e0,
                   local_6e0.Data.ArrayNum,&local_6e0.Data.ArrayMax);
        memcpy(local_6e0.Data.AllocatorInstance.Data,_Src,lVar21 * 2);
      }
      if (local_6e0.Data.ArrayNum == 0) {
        pwVar23 = L"";
        uVar29 = 0;
      }
      else {
        pwVar23 = (wchar_t *)local_6e0.Data.AllocatorInstance.Data;
        uVar29 = local_6e0.Data.ArrayNum - 1;
      }
      uVar29 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar29,pwVar23);
      iVar13 = TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                           *)param_1,uVar29,&local_6e0);
      if (iVar13 != -1) {
        lVar21 = *(longlong *)param_1 + (longlong)iVar13 * 0x28;
        plVar25 = (longlong *)(lVar21 + 0x10);
        if (lVar21 == 0) {
          plVar25 = plVar40;
        }
        if ((plVar25 != (longlong *)0x0) && (iVar13 = (int)plVar25[1], iVar13 != 0)) {
          uVar29 = 0;
          if ((int)(iVar13 - 1U) < iVar13) {
            uVar29 = ~(iVar13 - 1U) >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          plVar40 = (longlong *)((longlong)((int)plVar25[1] + -1) * 0x10 + *plVar25);
        }
      }
      local_740 = plVar40;
      if (local_6e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6e0.Data.AllocatorInstance.Data);
      }
      if (plVar40 == (longlong *)0x0) goto LAB_141e323bc;
      local_6b0 = (pFVar39->Descriptor).Modules.ArrayNum;
      uVar22 = (ulonglong)(int)local_6b0;
      this_00 = (FModuleDescriptor *)(pFVar39->Descriptor).Modules.AllocatorInstance.Data;
      piVar41 = &(this_00->PlatformDenyList).ArrayNum;
      local_690 = this_00 + uVar22;
      while( true ) {
        pFVar7 = local_690;
        if ((pFVar39->Descriptor).Modules.ArrayNum != (int)uVar22) {
          local_782 = 0;
          `TCheckedPointerIterator<FModuleDescriptor_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_782);
        }
        local_680 = *plVar40;
        if (this_00 == pFVar7) break;
        local_768 = *(uint *)(local_680 + 0x138);
        uVar22 = (ulonglong)(int)local_768;
        pFVar38 = *(FName **)(local_680 + 0x130);
        bVar10 = false;
        pFVar26 = pFVar38 + 3;
        pFVar33 = pFVar38 + uVar22 * 0x2d;
        local_6a0 = pFVar33;
        while( true ) {
          if (*(int *)(local_680 + 0x138) != (int)uVar22) {
            local_781 = 0;
            `TCheckedPointerIterator<FModuleDescriptor,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_781);
          }
          plVar40 = local_740;
          if (pFVar38 == pFVar33) break;
          if ((*pFVar38 == this_00->Name) && (pFVar26[-2].ComparisonIndex.Value == piVar41[-8])) {
            bVar10 = true;
            if (((char)pFVar26[0x29].ComparisonIndex.Value != '\0') ||
               (0 < (int)(pFVar26->ComparisonIndex).Value)) {
              pFVar33 = pFVar26 + -1;
              if ((pFVar33 == (FName *)(piVar41 + -6)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(void*)this != (void*)&Source",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x96e,L""), bVar11)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar13 = piVar41[-4];
              if (iVar13 != 0) {
                iVar12 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x10,8,iVar13,(ForAnyElementType *)pFVar33,(int *)pFVar26,
                                    (int *)&pFVar26->Number);
                ConstructItems<FString,FString,int>
                          (*(FScriptContainerElement **)&pFVar33->ComparisonIndex +
                           (longlong)iVar12 * 0x10,
                           (FString *)
                           *(FScriptContainerElement **)&((FName *)(piVar41 + -6))->ComparisonIndex,
                           iVar13);
              }
            }
            pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(pFVar26 + 1);
            if ((pTVar2 == (TArray<FString,TSizedDefaultAllocator<32>_> *)(piVar41 + -2)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)this != (void*)&Source",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x96e,L""), bVar11)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar13 = *piVar41;
            if (iVar13 != 0) {
              iVar12 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x10,8,iVar13,(ForAnyElementType *)pTVar2,(int *)(pFVar26 + 2),
                                  (int *)&pFVar26[2].Number);
              ConstructItems<FString,FString,int>
                        ((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x10,
                         (FString *)
                         (((TArray<FString,TSizedDefaultAllocator<32>_> *)(piVar41 + -2))->
                         AllocatorInstance).Data,iVar13);
            }
            `FPluginManager::ReadAllPlugins'::__l156::<lambda_1>::operator()
                      (&local_780,
                       (TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                        *)(pFVar26 + 3),
                       (TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                        *)(piVar41 + 2));
            `FPluginManager::ReadAllPlugins'::__l156::<lambda_1>::operator()
                      (&local_780,
                       (TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                        *)(pFVar26 + 0xd),
                       (TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                        *)(piVar41 + 0x16));
            pFVar33 = local_6a0;
          }
          pFVar38 = pFVar38 + 0x2d;
          uVar22 = (ulonglong)local_768;
          pFVar26 = pFVar26 + 0x2d;
        }
        pFVar39 = local_758;
        if (!bVar10) {
          lVar21 = *local_740;
          pFVar27 = (ForAnyElementType *)(lVar21 + 0x130);
          if ((((FModuleDescriptor *)pFVar27->Data <= this_00) &&
              (this_00 < (FModuleDescriptor *)pFVar27->Data + *(int *)(lVar21 + 0x13c))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar13 = *(int *)(lVar21 + 0x138);
          if (iVar13 == *(int *)(lVar21 + 0x13c)) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x168,8,pFVar27,(int *)(lVar21 + 0x13c));
          }
          *(int *)(lVar21 + 0x138) = iVar13 + 1;
          FModuleDescriptor::FModuleDescriptor
                    ((FModuleDescriptor *)(pFVar27->Data + (longlong)iVar13 * 0x168),this_00);
          pFVar39 = local_758;
          if (4 < (byte)LogPluginManager._0_1_) {
            ::FName::ToString(&this_00->Name,&local_3a0);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
            if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
            }
          }
        }
        this_00 = this_00 + 1;
        uVar22 = (ulonglong)local_6b0;
        piVar41 = piVar41 + 0x5a;
      }
      if ((*(char *)(local_680 + 0x18a) != '\0') || (*(int *)(local_680 + 0x108) != 0)) {
        iVar13 = (pFVar39->Descriptor).SupportedTargetPlatforms.ArrayNum;
        pFVar30 = (pFVar39->Descriptor).SupportedTargetPlatforms.AllocatorInstance.Data;
        pFVar31 = pFVar30 + (longlong)iVar13 * 0x10;
        while( true ) {
          if ((pFVar39->Descriptor).SupportedTargetPlatforms.ArrayNum != iVar13) {
            local_77f = 0;
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_77f);
          }
          if (pFVar30 == pFVar31) break;
          TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                    ((TArray<FString,TSizedDefaultAllocator<32>_> *)(*plVar40 + 0x100),
                     (FString *)pFVar30);
          pFVar30 = pFVar30 + 0x10;
        }
      }
      lVar21 = *plVar40;
      pFVar15 = &pFVar39->FileName;
      if (((*(undefined1 **)(lVar21 + 0x38) <= pFVar15) &&
          (pFVar15 < *(undefined1 **)(lVar21 + 0x38) + (longlong)*(int *)(lVar21 + 0x44) * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar13 = *(int *)(lVar21 + 0x40);
      if (iVar13 == *(int *)(lVar21 + 0x44)) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)(lVar21 + 0x38),(int *)(lVar21 + 0x44));
      }
      *(int *)(lVar21 + 0x40) = iVar13 + 1;
      ::FString::FString((FString *)((longlong)iVar13 * 0x10 + *(longlong *)(lVar21 + 0x38)),pFVar15
                        );
      FVar24.Data = (FScriptContainerElement *)local_6f8;
      pTVar42 = local_698;
    }
    else {
LAB_141e323bc:
      if (1 < (byte)LogPluginManager._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
      }
    }
    DestructItems<FString,int>((FString *)local_6c0.AllocatorInstance.Data,local_6c0.ArrayNum);
    if (local_6c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c0.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar42);
    uVar18 = local_778._8_8_ & 0xffffffff;
    uVar22 = (ulonglong)local_6ac;
    FVar24.Data = FVar24.Data + 0x10;
  } while( true );
}

// ReadPluginsInDirectory @ 141e32eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FPluginManager::ReadPluginsInDirectory
          (FString *param_1,EPluginType param_2,
          TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
          *param_3,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  float fVar2;
  FFeedbackContext *pFVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FPlatformFileManager *pFVar9;
  IPlatformFile *pIVar10;
  FText *pFVar11;
  wchar_t *pwVar12;
  FPluginDescriptor *pFVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  <lambda_1> local_res8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1d8;
  ForAnyElementType local_1c8;
  int local_1c0 [2];
  FString local_1b8;
  ForAnyElementType *local_1a8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_1a0;
  TArrayView<std::nullptr_t,int> local_198;
  code *local_188;
  ForAnyElementType **local_180;
  FText local_178;
  FText local_168;
  FText local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FSlowTask local_118;
  FSlowTask local_b8;
  
  pFVar9 = FPlatformFileManager::Get();
  pIVar10 = FPlatformFileManager::GetPlatformFile(pFVar9);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  cVar5 = (**(code **)((longlong)*pIVar10 + 0x118))(pIVar10,pwVar12);
  pFVar3 = GWarn;
  if (cVar5 != '\0') {
    pFVar11 = FText::FText(&local_178);
    FSlowTask::FSlowTask(&local_118,__real_40400000,pFVar11,true,pFVar3);
    FSlowTask::Initialize(&local_118);
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
    }
    uVar14 = 0;
    local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.ArrayNum = 0;
    local_1d8.ArrayMax = 0;
    pFVar11 = FText::FText(&local_168);
    fVar2 = __real_3f800000;
    FSlowTask::EnterProgressFrame(&local_118,__real_3f800000,pFVar11);
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
    }
    pFVar9 = FPlatformFileManager::Get();
    pIVar10 = FPlatformFileManager::GetPlatformFile(pFVar9);
    FindPluginsInDirectory(param_1,&local_1d8,pIVar10);
    iVar4 = local_1d8.ArrayNum;
    local_1c8.Data = (FScriptContainerElement *)0x0;
    local_1c0[0] = 0;
    local_1c0[1] = 0;
    if (local_1d8.ArrayNum < 1) {
      if (local_1d8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_1d8._8_8_ & 0xffffffff);
      }
    }
    else {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x220,8,local_1d8.ArrayNum,&local_1c8,local_1c0,local_1c0 + 1);
      DefaultConstructItems<_FPluginManager::ReadPluginsInDirectory_::__l5::FLoadContext,int>
                (local_1c8.Data + (longlong)iVar7 * 0x220,iVar4);
    }
    pFVar11 = FText::FText(&local_158);
    FSlowTask::EnterProgressFrame(&local_118,fVar2,pFVar11);
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
    }
    local_1a8 = &local_1c8;
    local_1a0 = &local_1d8;
    local_198.DataPtr = (void **)0x0;
    local_198.ArrayNum = 0;
    local_188 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPluginManager::ReadPluginsInDirectory'::__l7::<lambda_1>,void,int>
                ::Call;
    local_180 = &local_1a8;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ReadPluginsInDirectory.PF",local_1d8.ArrayNum,1,
               (TFunctionRef<void___cdecl(int)> *)&local_188,local_res8,Unbalanced,&local_198);
    pFVar11 = FText::FText(&local_148);
    FSlowTask::EnterProgressFrame(&local_118,fVar2,pFVar11);
    if (local_148.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
    }
    pFVar3 = GWarn;
    pFVar11 = FText::FText(&local_138);
    FSlowTask::FSlowTask(&local_b8,(float)local_1d8.ArrayNum,pFVar11,true,pFVar3);
    FSlowTask::Initialize(&local_b8);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    lVar18 = (longlong)local_1d8.ArrayNum;
    uVar17 = uVar14;
    uVar19 = uVar14;
    uVar20 = uVar14;
    if (0 < lVar18) {
      do {
        pFVar11 = FText::FText(&local_128);
        FSlowTask::EnterProgressFrame(&local_b8,fVar2,pFVar11);
        if (local_128.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
        }
        uVar16 = (uint)uVar14;
        uVar8 = 0;
        if ((int)uVar16 < local_1d8.ArrayNum) {
          uVar8 = ~uVar16 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar15 = local_1d8.AllocatorInstance.Data + uVar17;
        uVar8 = 0;
        if ((int)uVar16 < local_1c0[0]) {
          uVar8 = ~uVar16 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar13 = (FPluginDescriptor *)(local_1c8.Data + uVar20);
        if ((char)pFVar13[1].VersionName.Data.ArrayNum == '\0') {
          FPaths::ConvertRelativePathToFull(&local_1b8,(FString *)pFVar15);
          if (1 < (byte)LogPluginManager._0_1_) {
            FText::ToString((FText *)(pFVar13 + 1));
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
          }
          if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          }
        }
        else {
          CreatePluginObject((FString *)pFVar15,pFVar13,param_2,param_3,param_4);
        }
        uVar14 = (ulonglong)(uVar16 + 1);
        uVar19 = uVar19 + 1;
        uVar17 = uVar17 + 0x10;
        uVar20 = uVar20 + 0x220;
      } while ((longlong)uVar19 < lVar18);
    }
    FSlowTask::Destroy(&local_b8);
    if (local_b8.FrameMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.FrameMessage.TextData.Reference + 0x10))();
    }
    if (local_b8.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.DefaultMessage.TextData.Reference + 0x10))();
    }
    DestructItems<_FPluginManager::ReadPluginsInDirectory_::__l5::FLoadContext,int>
              ((FLoadContext *)local_1c8.Data,local_1c0[0]);
    if ((FLoadContext *)local_1c8.Data != (FLoadContext *)0x0) {
      FMemory::Free(local_1c8.Data);
    }
    DestructItems<FString,int>((FString *)local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum);
    if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.AllocatorInstance.Data);
    }
    FSlowTask::Destroy(&local_118);
    if (local_118.FrameMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.FrameMessage.TextData.Reference + 0x10))();
    }
    if (local_118.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.DefaultMessage.TextData.Reference + 0x10))();
    }
  }
  return;
}

// RefreshPluginsList @ 141e337f0

void __thiscall FPluginManager::RefreshPluginsList(FPluginManager *this)

{
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar1;
  byte bVar2;
  undefined1 *puVar3;
  code *pcVar4;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  wchar_t *pwVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 *puVar18;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  int local_res18;
  int local_res20;
  undefined1 auStack_140 [16];
  uint uStack_130;
  uint uStack_12c;
  longlong local_128;
  TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_120;
  TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_118;
  char local_110;
  char cStack_10f;
  undefined1 local_108 [8];
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  undefined1 local_a0 [32];
  longlong local_80;
  TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_78;
  undefined4 local_54;
  
  pTVar1 = &this->AllPlugins;
  TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_a0,
             (TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_110 = '\0';
  cStack_10f = '\0';
  uVar8 = 1;
  stack0xfffffffffffffec8 = local_a0._16_16_;
  auStack_140._0_8_ = local_a0._8_8_;
  local_128 = local_80;
  pTStack_120 = pTStack_78;
  uVar9 = local_a0._24_8_ >> 0x20;
  uVar15 = local_a0._28_4_;
  local_118 = (TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)pTVar1;
  if ((int)uVar15 < *(int *)(local_a0._16_8_ + 0x18)) {
    do {
      iVar7 = *(int *)(*(longlong *)local_a0._0_8_ + 0x18 + (longlong)(int)uVar9 * 0x28);
      lVar10 = *(longlong *)local_a0._0_8_ + (longlong)(int)uVar9 * 0x28;
      uVar11 = iVar7 - 1;
      uVar13 = 0;
      if ((int)uVar11 < iVar7) {
        uVar13 = ~uVar11 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar10 = *(longlong *)
                (*(longlong *)(lVar10 + 0x10) + -0x10 + (longlong)*(int *)(lVar10 + 0x18) * 0x10);
      bVar2 = *(byte *)(lVar10 + 0x254);
      if (((bVar2 & 1) == 0) || ((*(char *)(lVar10 + 0x189) != '\0' && ((bVar2 & 2) == 0)))) {
        TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_120,uVar15);
        local_110 = '\x01';
      }
      else {
        iVar7 = *(int *)(*(longlong *)local_a0._0_8_ + 0x18 + (longlong)(int)uVar15 * 0x28);
        lVar10 = *(longlong *)local_a0._0_8_ + (longlong)(int)uVar15 * 0x28;
        uVar13 = iVar7 - 1;
        uVar15 = 0;
        if ((int)uVar13 <= iVar7) {
          uVar15 = ~uVar13 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar13 != 0) {
          TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    ((TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> *)(lVar10 + 0x10),0,
                     uVar13);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(ForAnyElementType *)(lVar10 + 0x10),*(int *)(lVar10 + 0x18),
                     (int *)(lVar10 + 0x1c));
        }
      }
      uStack_130 = uStack_130 & ~auStack_140._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_140);
      uVar9 = (ulonglong)uStack_12c;
      uVar15 = uStack_12c;
    } while ((int)uStack_12c < *(int *)(auStack_140._8_8_ + 0x18));
    if ((local_110 != '\0') && (cStack_10f != '\0')) {
      uVar15 = *(int *)&(local_118->Elements).field_0x8 - *(int *)&(local_118->Elements).field_0x34;
      if (uVar15 < 4) {
        iVar7 = 1;
      }
      else {
        uVar9 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_res10 = (undefined4)lVar10;
        iVar7 = 1 << ((byte)lVar10 & 0x1f);
      }
      if (((0 < (int)uVar15) && (local_118->HashSize < iVar7)) || (iVar7 < local_118->HashSize)) {
        local_118->HashSize = iVar7;
        TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_118);
      }
    }
  }
  ReadAllPlugins(&this->AllPlugins,&this->PluginDiscoveryPaths,
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0);
  iVar7 = *(int *)&(this->AllPlugins).field_0x28;
  local_f0 = &(this->AllPlugins).field_0x10;
  pTVar1 = &this->AllPlugins;
  iStack_f8 = 0;
  iStack_e4 = iStack_f8;
  local_e0 = iStack_f8;
  if (iVar7 != 0) {
    puVar17 = *(uint **)&(this->AllPlugins).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)local_f0;
    }
    uVar15 = *puVar17;
    local_e0 = 0;
    iStack_f8 = 0;
    while (uVar15 == 0) {
      lVar10 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_141e33ad6;
      uVar15 = puVar17[lVar10 + 1];
    }
    uVar8 = -uVar15 & uVar15;
    uVar9 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iStack_e4 = local_res18 + -1 + local_e0;
    if (iVar7 < iStack_e4) {
LAB_141e33ad6:
      iStack_e4 = iVar7;
    }
  }
  puVar18 = &(this->AllPlugins).field_0x10;
  uStack_dc = local_54;
  iStack_d8 = *(int *)&(this->AllPlugins).field_0x8 - *(int *)&(this->AllPlugins).field_0x34;
  uVar15 = *(uint *)&(this->AllPlugins).field_0x28;
  uStack_e8 = 0xffffffff;
  TStack_c8.CurrentBitIndex = iStack_e4;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  uVar13 = uVar15 & 0xffffffe0;
  TStack_c8._padding_ = CONCAT44(uVar8,iStack_f8);
  iVar7 = (int)uVar15 >> 5;
  TStack_c8._28_4_ = local_54;
  TStack_c8.BaseBitIndex = local_e0;
  uStack_a8 = CONCAT44(uStack_d4,iStack_d8);
  local_100 = pTVar1;
  uStack_f4 = uVar8;
  local_d0 = pTVar1;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_f0;
  if (((int)uVar15 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = *(uint *)&(this->AllPlugins).field_0x28;
  if (uVar15 != uVar8) {
    puVar3 = *(undefined1 **)&(this->AllPlugins).field_0x20;
    puVar16 = puVar18;
    if (puVar3 != (undefined1 *)0x0) {
      puVar16 = puVar3;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar7 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar7;
      uVar13 = uVar13 + 0x20;
      iVar7 = iVar7 + 1;
      uVar15 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7) goto LAB_141e33bd1;
      uVar15 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar9 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    uVar15 = local_res20 + -1 + uVar13;
    if ((int)uVar8 < (int)uVar15) {
      uVar15 = uVar8;
    }
  }
LAB_141e33bd1:
  while( true ) {
    pTVar5 = local_d0;
    if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0->field_0x34 != (int)uStack_a8) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_c8.CurrentBitIndex == uVar15) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar18)) && (pTVar5 == pTVar1))
    {
      return;
    }
    lVar10 = *(longlong *)pTVar5;
    iVar7 = *(int *)(lVar10 + 0x18 + (longlong)TStack_c8.CurrentBitIndex * 0x28);
    lVar10 = lVar10 + (longlong)TStack_c8.CurrentBitIndex * 0x28;
    uVar13 = iVar7 - 1;
    uVar8 = 0;
    if ((int)uVar13 < iVar7) {
      uVar8 = ~uVar13 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    lVar14 = *(longlong *)(lVar10 + 0x10) + (longlong)*(int *)(lVar10 + 0x18) * 0x10;
    lVar10 = *(longlong *)(lVar14 + -0x10);
    if ((*(byte *)(lVar10 + 0x254) & 1) == 0) {
      if (*(int *)(lVar10 + 0x20) == 0) {
        pwVar12 = L"";
        uVar8 = 0;
      }
      else {
        pwVar12 = *(wchar_t **)(lVar10 + 0x18);
        uVar8 = *(int *)(lVar10 + 0x20) - 1;
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar8,pwVar12);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::EmplaceByHash<FString_const_&>
                (&this->PluginsToConfigure,(uint)local_108,(FString *)(ulonglong)uVar8,
                 (bool *)(*(longlong *)(lVar14 + -0x10) + 0x18));
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// RemoveFromPluginsList @ 141e35210

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPluginManager::RemoveFromPluginsList(FPluginManager *this,FString *param_1,FText *param_2)

{
  bool bVar1;
  TSharedRef<FPlugin,1> *pTVar2;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  undefined1 local_res8 [8];
  FText local_78;
  TSharedRef<FPlugin,1> local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pTVar2 = DiscoveredPluginMapUtils::FindPluginInMap_FromFileName(&this->AllPlugins,param_1);
  if (pTVar2 == (TSharedRef<FPlugin,1> *)0x0) {
    return true;
  }
  local_68.Object = pTVar2->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar2->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::FText(&local_78);
  if ((local_68.Object)->bEnabled) {
    pFVar3 = FText::FromString(&local_38,param_1);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"PluginManager",L"PluginIsEnabled",L"Plugin \'{0}\' is enabled");
    pFVar5 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar4,Default);
    pFVar3 = FText::Format<FText>(&local_58,pFVar5,pFVar3);
    FText::operator=(&local_78,pFVar3);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  else {
    bVar1 = VerifySinglePluginForAddOrRemove(&(local_68.Object)->Descriptor,&local_78);
    if (bVar1) {
      DiscoveredPluginMapUtils::RemovePluginFromMap(&this->AllPlugins,&local_68);
      bVar1 = true;
      goto LAB_141e353b7;
    }
  }
  if (param_2 != (FText *)0x0) {
    local_58.TextData.Reference = local_78.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 8))
                (local_78.TextData.Reference,local_res8);
    }
    local_58.Flags = local_78.Flags;
    pFVar3 = FText::FromString(&local_28,param_1);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"PluginManager",L"RemoveFromPluginsListFailed",
                        L"Failed to remove plugin \'{0}\'\n{1}");
    pFVar5 = FTextFormat::FTextFormat(&local_18,pFVar4,Default);
    pFVar3 = FText::Format<FText,FText>(&local_48,pFVar5,pFVar3,&local_58);
    FText::operator=(param_2,pFVar3);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  bVar1 = false;
LAB_141e353b7:
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return bVar1;
}

// RemovePluginSearchPath @ 141e358c0

bool __thiscall
FPluginManager::RemovePluginSearchPath(FPluginManager *this,FString *param_1,bool param_2)

{
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  FString local_58;
  FExternalPluginPath local_48;
  
  FPaths::ConvertRelativePathToFull(&local_58,param_1);
  iVar4 = local_58.Data.ArrayNum + -1;
  FVar1.Data = local_58.Data.AllocatorInstance.Data;
  if (local_58.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar1.Data);
  iVar3 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (&this->PluginDiscoveryPaths,uVar2,&local_58);
  iVar4 = local_58.Data.ArrayNum;
  FVar1.Data = local_58.Data.AllocatorInstance.Data;
  local_48.Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_58.Data.ArrayNum == 0) {
    local_48.Path.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_58.Data.ArrayNum,
               &local_48.Path.Data.ArrayMax);
    memcpy(local_48.Path.Data.AllocatorInstance.Data,FVar1.Data,(longlong)iVar4 * 2);
  }
  local_48.Source = Other;
  if (*(int *)&(this->ExternalPluginSources).Elements.field_0x8 !=
      *(int *)&(this->ExternalPluginSources).Elements.field_0x34) {
    uVar2 = ::GetTypeHash(&local_48);
    TSet<FExternalPluginPath,DefaultKeyFuncs<FExternalPluginPath,0>,FDefaultSetAllocator>::
    RemoveImpl<FExternalPluginPath>(&this->ExternalPluginSources,uVar2,&local_48);
  }
  if (local_48.Path.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Path.Data.AllocatorInstance.Data);
  }
  if (*(int *)&(this->PluginDiscoveryPaths).Elements.field_0x8 !=
      *(int *)&(this->PluginDiscoveryPaths).Elements.field_0x34) {
    iVar4 = local_58.Data.ArrayNum + -1;
    FVar1.Data = local_58.Data.AllocatorInstance.Data;
    if (local_58.Data.ArrayNum == 0) {
      iVar4 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar1.Data);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
              (&this->PluginDiscoveryPaths,uVar2,&local_58);
  }
  if (param_2) {
    RefreshPluginsList(this);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return iVar3 != -1;
}

// RequiresTempTargetForCodePlugin @ 141e35b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPluginManager::RequiresTempTargetForCodePlugin
          (FPluginManager *this,FProjectDescriptor *param_1,FString *param_2,
          EBuildConfiguration param_3,EBuildTargetType param_4,FText *param_5)

{
  FString *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  byte bVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  undefined1 auStackY_3e8 [32];
  undefined1 local_3a8;
  undefined1 local_3a7 [7];
  FText *local_3a0;
  FConfigurePluginResultInfo local_398;
  longlong *local_378;
  int iStack_370;
  uint uStack_36c;
  TBitArray<FDefaultBitArrayAllocator> *local_368;
  undefined4 uStack_360;
  uint uStack_35c;
  int local_358;
  undefined4 uStack_354;
  int iStack_350;
  undefined4 uStack_34c;
  int local_348;
  int local_344;
  int local_340;
  longlong *local_338;
  uint uStack_330;
  uint uStack_32c;
  TBitArray<FDefaultBitArrayAllocator> *local_328;
  undefined4 uStack_320;
  uint uStack_31c;
  uint local_318;
  uint uStack_314;
  int iStack_310;
  undefined4 uStack_30c;
  longlong *local_308;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_300;
  undefined8 uStack_2e0;
  longlong *local_2d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2d0;
  undefined8 uStack_2b0;
  FText local_2a8;
  FText local_298;
  FText local_288;
  FText local_278;
  FText local_268;
  FText local_258;
  FText local_248;
  FText local_238;
  FText local_228;
  FTextFormat local_218;
  FText local_208;
  FTextFormat local_1f8;
  FText local_1e8;
  FTextFormat local_1d8;
  FText local_1c8;
  FTextFormat local_1b8 [2];
  undefined4 local_18c;
  undefined1 local_188 [24];
  undefined8 uStack_170;
  void *local_168;
  undefined4 local_160;
  uint local_15c;
  undefined4 local_158;
  undefined4 local_154;
  ForElementType<FSetElementId> local_150;
  ulonglong local_140;
  undefined1 local_138 [32];
  uint *local_118;
  uint local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  local_3a0 = param_5;
  local_398.Code = Unset;
  local_398.ReferenceChain.ArrayNum = 0;
  local_398.ReferenceChain.ArrayMax = 0;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_c8 = (uint *)0x0;
  iVar18 = 0;
  local_c0 = 0;
  local_bc = 0x80;
  local_398.PluginReference = (FPluginReferenceDescriptor *)0x0;
  local_398.ReferenceChain.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  local_188._16_8_ = 0;
  uStack_170 = 0;
  local_150.InlineData[0] = '\0';
  local_150.InlineData[1] = '\0';
  local_150.InlineData[2] = '\0';
  local_150.InlineData[3] = '\0';
  local_150._padding_ = 0;
  local_140 = 0;
  local_188._0_8_ = (FScriptContainerElement *)0x0;
  local_188._8_8_ = 0;
  local_168 = (void *)0x0;
  local_160 = 0;
  local_15c = 0x80;
  local_158 = 0xffffffff;
  local_154 = 0;
  local_150.SecondaryData = (ForElementType<FSetElementId>)0x0;
  bVar5 = GetCodePluginsForProject
                    (param_1,param_2,param_3,param_4,&this->AllPlugins,
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_e8,
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_188,
                     &local_398);
  local_140 = local_140 & 0xffffffff00000000;
  if (local_150.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_150.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_188,0,local_188._8_4_);
  iVar15 = SUB84(local_188._8_8_,4);
  local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
  if (iVar15 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_188,0,(int *)(local_188 + 0xc));
  }
  local_158 = 0xffffffff;
  local_154 = 0;
  local_160 = 0;
  if (0x80 < local_15c) {
    local_15c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10),0);
  }
  if (local_168 != (void *)0x0) {
    FMemory::Free(local_168);
  }
  if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  if (!bVar5) {
    pFVar9 = FText::FromString(&local_228,&(local_398.PluginReference)->Name);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_298,L"PluginManager",L"TempTarget_MissingPluginForTarget",
                         L"{0} plugin is referenced by target but not found");
    pFVar11 = FTextFormat::FTextFormat(&local_218,pFVar10,Default);
    pFVar9 = FText::Format<FText>(&local_2a8,pFVar11,pFVar9);
    FText::operator=(param_5,pFVar9);
    if (local_2a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2a8.TextData.Reference + 0x10))();
    }
    if (local_298.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
    }
    bVar5 = true;
    goto LAB_141e36573;
  }
  local_138._0_8_ = 0;
  local_138._8_8_ = 0;
  local_118 = (uint *)0x0;
  local_110 = 0;
  local_10c = 0x80;
  local_108 = 0xffffffff;
  local_104 = 0;
  local_f8 = (ForElementType<FSetElementId>)0x0;
  local_f0 = 0;
  local_98.Elements._16_8_ = 0;
  local_98.Elements._24_8_ = 0;
  local_98.Hash.InlineData[0] = '\0';
  local_98.Hash.InlineData[1] = '\0';
  local_98.Hash.InlineData[2] = '\0';
  local_98.Hash.InlineData[3] = '\0';
  local_98.Hash._padding_ = 0;
  local_98._72_8_ = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  bVar5 = GetCodePluginsForProject
                    ((FProjectDescriptor *)0x0,param_2,param_3,param_4,&this->AllPlugins,
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_138,
                     &local_98,&local_398);
  local_98._72_8_ = local_98._72_8_ & 0xffffffff00000000;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  uVar17 = local_c0;
  if (bVar5) {
    local_358 = 0;
    uVar8 = 1;
    uStack_36c = 1;
    uStack_35c = 0;
    if (local_c0 != 0) {
      puVar19 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar19 = local_c8;
      }
      uStack_36c = *puVar19;
      iVar18 = 0;
      while (uStack_36c == 0) {
        lVar13 = (longlong)iVar18;
        local_358 = local_358 + 0x20;
        iVar18 = iVar18 + 1;
        uStack_36c = 1;
        uStack_35c = local_c0;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_141e36020;
        uStack_36c = puVar19[lVar13 + 1];
      }
      uStack_36c = -uStack_36c & uStack_36c;
      uVar2 = (ulonglong)uStack_36c * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_348 = (int)lVar13;
      uStack_35c = local_358 + -1 + local_348;
      if ((int)local_c0 < (int)uStack_35c) {
        uStack_35c = local_c0;
      }
    }
LAB_141e36020:
    local_378 = (longlong *)local_e8;
    uStack_354 = local_18c;
    local_368 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
    iStack_350 = local_e8._8_4_ - local_b4;
    uVar16 = local_c0 & 0xffffffe0;
    TStack_300._padding_ = CONCAT44(uStack_36c,iVar18);
    uStack_360 = 0xffffffff;
    TStack_300.CurrentBitIndex = uStack_35c;
    TStack_300.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)local_c0 >> 5;
    TStack_300._28_4_ = local_18c;
    TStack_300.BaseBitIndex = local_358;
    uStack_2e0 = CONCAT44(uStack_34c,iStack_350);
    bVar12 = (byte)local_c0;
    iStack_370 = iVar18;
    local_308 = local_378;
    TStack_300.Array = local_368;
    if (((int)local_c0 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if (uVar17 != local_c0) {
      puVar19 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar19 = local_c8;
      }
      uVar17 = -1 << (bVar12 & 0x1f) & puVar19[iVar15];
      while (uVar17 == 0) {
        lVar13 = (longlong)iVar15;
        uVar16 = uVar16 + 0x20;
        iVar15 = iVar15 + 1;
        uVar17 = local_c0;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_141e36140;
        uVar17 = puVar19[lVar13 + 1];
      }
      uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_344 = (int)lVar13;
      uVar17 = (uVar16 - 1) + local_344;
      if ((int)local_c0 < (int)uVar17) {
        uVar17 = local_c0;
      }
    }
LAB_141e36140:
    uVar16 = 0;
    while( true ) {
      plVar4 = local_308;
      if ((int)local_308[1] - *(int *)((longlong)local_308 + 0x34) != (int)uStack_2e0) {
        local_3a8 = 0;
        `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3a8);
      }
      uVar7 = local_110;
      if (((TStack_300.CurrentBitIndex == uVar17) &&
          (TStack_300.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
         (plVar4 == (longlong *)local_e8)) {
        uStack_31c = uVar16;
        local_318 = uVar16;
        if (local_110 == 0) goto LAB_141e36271;
        puVar19 = (uint *)(local_138 + 0x10);
        if (local_118 != (uint *)0x0) {
          puVar19 = local_118;
        }
        uVar17 = *puVar19;
        goto joined_r0x000141e3622d;
      }
      lVar13 = *plVar4;
      pFVar1 = (FString *)(lVar13 + (longlong)TStack_300.CurrentBitIndex * 0x18);
      iVar15 = *(int *)(lVar13 + 8 + (longlong)TStack_300.CurrentBitIndex * 0x18);
      iVar18 = iVar15 + -1;
      if (iVar15 == 0) {
        pwVar14 = L"";
        iVar18 = 0;
      }
      else {
        pwVar14 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
      }
      uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar14);
      iVar18 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
               FindIndexByHash<FString>
                         ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_138
                          ,uVar7,pFVar1);
      if (iVar18 == -1) break;
      TStack_300.UnvisitedBitMask = TStack_300.UnvisitedBitMask & ~TStack_300._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_300);
    }
    pFVar9 = FText::FromString(&local_1c8,pFVar1);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_238,L"PluginManager",L"TempTarget_PluginEnabled",
                         L"{0} plugin is enabled");
    pFVar11 = FTextFormat::FTextFormat(local_1b8,pFVar10,Default);
    pFVar9 = FText::Format<FText>(&local_248,pFVar11,pFVar9);
    FText::operator=(local_3a0,pFVar9);
    if (local_248.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
    }
    if (local_238.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
    }
  }
  else {
    pFVar9 = FText::FromString(&local_208,&(local_398.PluginReference)->Name);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_278,L"PluginManager",L"TempTarget_MissingPluginForDefaultTarget",
                         L"{0} plugin is referenced by the default target but not found");
    pFVar11 = FTextFormat::FTextFormat(&local_1f8,pFVar10,Default);
    pFVar9 = FText::Format<FText>(&local_288,pFVar11,pFVar9);
    FText::operator=(param_5,pFVar9);
    if (local_288.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
    }
    if (local_278.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
    }
  }
LAB_141e3654d:
  bVar5 = true;
LAB_141e3654f:
  local_f0 = 0;
  if (local_f8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_138);
LAB_141e36573:
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  if (local_398.ReferenceChain.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.ReferenceChain.AllocatorInstance.Data);
  }
  return bVar5;
joined_r0x000141e3622d:
  if (uVar17 != 0) goto LAB_141e3624c;
  lVar13 = (longlong)(int)uVar16;
  local_318 = local_318 + 0x20;
  uVar16 = uVar16 + 1;
  uStack_31c = local_110;
  if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
  goto LAB_141e36271;
  uVar17 = puVar19[lVar13 + 1];
  goto joined_r0x000141e3622d;
LAB_141e3624c:
  uVar8 = -uVar17 & uVar17;
  uVar2 = (ulonglong)uVar8 * 2 + 1;
  lVar13 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  local_340 = (int)lVar13;
  uStack_31c = (local_318 - 1) + local_340;
  if ((int)local_110 < (int)uStack_31c) {
    uStack_31c = local_110;
  }
LAB_141e36271:
  local_338 = (longlong *)local_138;
  uStack_314 = uStack_35c;
  local_328 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
  iStack_310 = local_138._8_4_ - local_104;
  uVar17 = local_110 & 0xffffffe0;
  uStack_320 = 0xffffffff;
  TStack_2d0.CurrentBitIndex = uStack_31c;
  TStack_2d0.UnvisitedBitMask = 0xffffffff;
  TStack_2d0._padding_ = CONCAT44(uVar8,uVar16);
  iVar18 = (int)local_110 >> 5;
  TStack_2d0._28_4_ = uStack_35c;
  TStack_2d0.BaseBitIndex = local_318;
  uStack_2b0 = CONCAT44(uStack_30c,iStack_310);
  bVar12 = (byte)local_110;
  uStack_330 = uVar16;
  uStack_32c = uVar8;
  local_2d8 = local_338;
  TStack_2d0.Array = local_328;
  if (((int)local_110 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if (uVar7 != local_110) {
    puVar19 = (uint *)(local_138 + 0x10);
    if (local_118 != (uint *)0x0) {
      puVar19 = local_118;
    }
    uVar8 = -1 << (bVar12 & 0x1f) & puVar19[iVar18];
    while (uVar8 == 0) {
      lVar13 = (longlong)iVar18;
      uVar17 = uVar17 + 0x20;
      iVar18 = iVar18 + 1;
      uVar7 = local_110;
      if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_141e36390;
      uVar8 = puVar19[lVar13 + 1];
    }
    uVar2 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar7 = (int)lVar13 + -1 + uVar17;
    if ((int)local_110 < (int)uVar7) {
      uVar7 = local_110;
    }
  }
LAB_141e36390:
  do {
    plVar4 = local_2d8;
    if ((int)local_2d8[1] - *(int *)((longlong)local_2d8 + 0x34) != (int)uStack_2b0) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3a7);
    }
    if (((TStack_2d0.CurrentBitIndex == uVar7) &&
        (TStack_2d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10))) &&
       (plVar4 == (longlong *)local_138)) {
      bVar5 = false;
      goto LAB_141e3654f;
    }
    lVar13 = *plVar4;
    pFVar1 = (FString *)(lVar13 + (longlong)TStack_2d0.CurrentBitIndex * 0x18);
    iVar15 = *(int *)(lVar13 + 8 + (longlong)TStack_2d0.CurrentBitIndex * 0x18);
    iVar18 = iVar15 + -1;
    if (iVar15 == 0) {
      pwVar14 = L"";
      iVar18 = 0;
    }
    else {
      pwVar14 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    }
    uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar14);
    iVar18 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                       ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_e8,
                        uVar17,pFVar1);
    if (iVar18 == -1) break;
    TStack_2d0.UnvisitedBitMask = TStack_2d0.UnvisitedBitMask & ~TStack_2d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2d0);
  } while( true );
  pFVar9 = FText::FromString(&local_1e8,pFVar1);
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_258,L"PluginManager",L"TempTarget_PluginDisabled",
                       L"{0} plugin is disabled");
  pFVar11 = FTextFormat::FTextFormat(&local_1d8,pFVar10,Default);
  pFVar9 = FText::Format<FText>(&local_268,pFVar11,pFVar9);
  FText::operator=(local_3a0,pFVar9);
  if (local_268.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
  }
  if (local_258.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
  }
  goto LAB_141e3654d;
}

// ResumePluginUnloadGC @ 141e365e0

void __thiscall FPluginManager::ResumePluginUnloadGC(FPluginManager *this)

{
  if (UE::PluginManager::Private::CoreUObjectPluginHandler != (ICoreUObjectPluginManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141e365ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*UE::PluginManager::Private::CoreUObjectPluginHandler + 0x10))();
    return;
  }
  return;
}

// SetBinariesRootDirectories @ 141e36c10

void __thiscall
FPluginManager::SetBinariesRootDirectories(FPluginManager *this,FString *param_1,FString *param_2)

{
  ::FString::operator=(&this->EngineBinariesRootDir,param_1);
  ::FString::operator=(&this->ProjectBinariesRootDir,param_2);
  return;
}

// SetPreloadBinaries @ 141e378d0

void __thiscall FPluginManager::SetPreloadBinaries(FPluginManager *this)

{
  this->bPreloadedBinaries = true;
  return;
}

// SetRegisterMountPointDelegate @ 141e378e0

void __thiscall
FPluginManager::SetRegisterMountPointDelegate
          (FPluginManager *this,
          TDelegate<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegate<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->RegisterMountPointDelegate,param_1);
  return;
}

// SetUnRegisterMountPointDelegate @ 141e37900

void __thiscall
FPluginManager::SetUnRegisterMountPointDelegate
          (FPluginManager *this,
          TDelegate<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegate<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->UnRegisterMountPointDelegate,param_1);
  return;
}

// SuppressPluginUnloadGC @ 141e37d90

void __thiscall FPluginManager::SuppressPluginUnloadGC(FPluginManager *this)

{
  if (UE::PluginManager::Private::CoreUObjectPluginHandler != (ICoreUObjectPluginManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141e37d9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*UE::PluginManager::Private::CoreUObjectPluginHandler + 8))();
    return;
  }
  return;
}

// TryLoadModulesForPlugin @ 141e3cd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPluginManager::TryLoadModulesForPlugin(FPluginManager *this,FPlugin *param_1,Type param_2)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined1 uVar5;
  bool bVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  longlong lVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  undefined1 auStackY_308 [32];
  FText local_2d8;
  FText local_2c8;
  FText local_2b8;
  int local_2a8;
  undefined1 local_2a4 [4];
  undefined1 local_2a0 [4];
  undefined1 local_29c [4];
  undefined1 local_298 [4];
  undefined1 local_294 [4];
  undefined1 local_290 [4];
  undefined1 local_28c [4];
  undefined1 local_288 [4];
  undefined1 local_284 [4];
  undefined1 local_280 [8];
  longlong *local_278;
  int iStack_270;
  uint uStack_26c;
  TBitArray<FDefaultBitArrayAllocator> *local_268;
  undefined4 uStack_260;
  int iStack_25c;
  int local_258;
  int iStack_254;
  longlong *local_248;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_240;
  FText local_220;
  FText local_210;
  FText local_200;
  FText local_1f0;
  FText local_1e0;
  FText local_1d0;
  FText local_1c0;
  FText local_1b0;
  FText local_1a0;
  FText local_190;
  FText local_180;
  FText local_170;
  FText local_160;
  FText local_150;
  FText local_140;
  FText local_130;
  FText local_120;
  FText local_110;
  FText local_100;
  FText local_f0;
  FTextFormat local_e0;
  FTextFormat local_d0;
  FTextFormat local_c0;
  FTextFormat local_b0;
  FTextFormat local_a0;
  undefined1 local_88 [32];
  uint *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_308;
  iVar12 = 0;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  iVar10 = 0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  FModuleDescriptor::LoadModulesForPhase
            (param_2,&(param_1->Descriptor).Modules,
             (TMap<FName,EModuleLoadResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,EModuleLoadResult,0>_>
              *)local_88);
  FText::FText(&local_2b8);
  uStack_26c = 1;
  local_258 = iVar10;
  iStack_25c = iVar12;
  if (local_60 != 0) {
    puVar11 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar11 = local_68;
    }
    uVar2 = *puVar11;
    local_258 = iVar12;
    iVar10 = iVar12;
    while (uVar2 == 0) {
      lVar9 = (longlong)iVar10;
      local_258 = local_258 + 0x20;
      iVar10 = iVar10 + 1;
      iStack_25c = local_60;
      if ((int)(local_60 + -1 + (local_60 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_141e3cea3;
      uVar2 = puVar11[lVar9 + 1];
    }
    uStack_26c = -uVar2 & uVar2;
    uVar1 = (ulonglong)uStack_26c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_2a8 = (int)lVar9;
    iStack_25c = local_2a8 + -1 + local_258;
    if (local_60 < iStack_25c) {
      iStack_25c = local_60;
    }
  }
LAB_141e3cea3:
  local_278 = (longlong *)local_88;
  local_268 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uStack_260 = 0xffffffff;
  TStack_240.UnvisitedBitMask = 0xffffffff;
  TStack_240._28_4_ = iStack_25c;
  TStack_240.BaseBitIndex = local_258;
  iStack_270 = iVar10;
  iStack_254 = iStack_25c;
  local_248 = local_278;
  TStack_240.Array = local_268;
  TStack_240._padding_._0_4_ = iVar10;
  TStack_240._padding_._4_4_ = uStack_26c;
  TStack_240.CurrentBitIndex = iStack_25c;
  if (iStack_25c < local_60) {
    do {
      plVar4 = local_248;
      lVar9 = (longlong)TStack_240.CurrentBitIndex;
      iVar10 = *(int *)(lVar9 * 0x14 + 8 + *local_248);
      if (iVar10 != 0) {
        FText::FromString(&local_2c8,&param_1->Name);
        FText::FromName(&local_2d8,(FName *)(*plVar4 + lVar9 * 0x14));
        if (iVar10 == 1) {
          local_1a0.TextData.Reference = local_2d8.TextData.Reference;
          if (local_2d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2d8.TextData.Reference + 8))
                      (local_2d8.TextData.Reference,local_2a4);
          }
          local_1a0.Flags = local_2d8.Flags;
          local_190.TextData.Reference = local_2c8.TextData.Reference;
          if (local_2c8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2c8.TextData.Reference + 8))
                      (local_2c8.TextData.Reference,local_2a0);
          }
          local_190.Flags = local_2c8.Flags;
          pFVar7 = FText::AsLocalizable_Advanced_LocText
                             (&local_f0,L"PluginManager",L"PluginModuleNotFound",
                              L"Plugin \'{0}\' failed to load because module \'{1}\' could not be found.  Please ensure the plugin is properly installed, otherwise consider disabling the plugin for this project."
                             );
          pFVar8 = FTextFormat::FTextFormat(&local_e0,pFVar7,Default);
          pFVar7 = FText::Format<FText,FText>(&local_100,pFVar8,&local_190,&local_1a0);
          FText::operator=(&local_2b8,pFVar7);
          local_110.TextData.Reference = local_f0.TextData.Reference;
          if (local_100.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
            local_110.TextData.Reference = local_f0.TextData.Reference;
          }
        }
        else if (iVar10 == 2) {
          local_220.TextData.Reference = local_2d8.TextData.Reference;
          if (local_2d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2d8.TextData.Reference + 8))
                      (local_2d8.TextData.Reference,local_29c);
          }
          local_220.Flags = local_2d8.Flags;
          local_210.TextData.Reference = local_2c8.TextData.Reference;
          if (local_2c8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2c8.TextData.Reference + 8))
                      (local_2c8.TextData.Reference,local_298);
          }
          local_210.Flags = local_2c8.Flags;
          pFVar7 = FText::AsLocalizable_Advanced_LocText
                             (&local_170,L"PluginManager",L"PluginModuleIncompatible",
                              L"Plugin \'{0}\' failed to load because module \'{1}\' does not appear to be compatible with the current version of the engine.  The plugin may need to be recompiled."
                             );
          pFVar8 = FTextFormat::FTextFormat(&local_d0,pFVar7,Default);
          pFVar7 = FText::Format<FText,FText>(&local_180,pFVar8,&local_210,&local_220);
          FText::operator=(&local_2b8,pFVar7);
          local_110.TextData.Reference = local_170.TextData.Reference;
          if (local_180.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
            local_110.TextData.Reference = local_170.TextData.Reference;
          }
        }
        else if (iVar10 == 3) {
          local_200.TextData.Reference = local_2d8.TextData.Reference;
          if (local_2d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2d8.TextData.Reference + 8))
                      (local_2d8.TextData.Reference,local_294);
          }
          local_200.Flags = local_2d8.Flags;
          local_1f0.TextData.Reference = local_2c8.TextData.Reference;
          if (local_2c8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2c8.TextData.Reference + 8))
                      (local_2c8.TextData.Reference,local_290);
          }
          local_1f0.Flags = local_2c8.Flags;
          pFVar7 = FText::AsLocalizable_Advanced_LocText
                             (&local_150,L"PluginManager",L"PluginModuleCouldntBeLoaded",
                              L"Plugin \'{0}\' failed to load because module \'{1}\' could not be loaded.  There may be an operating system error or the module may not be properly set up."
                             );
          pFVar8 = FTextFormat::FTextFormat(&local_c0,pFVar7,Default);
          pFVar7 = FText::Format<FText,FText>(&local_160,pFVar8,&local_1f0,&local_200);
          FText::operator=(&local_2b8,pFVar7);
          local_110.TextData.Reference = local_150.TextData.Reference;
          if (local_160.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
            local_110.TextData.Reference = local_150.TextData.Reference;
          }
        }
        else if (iVar10 == 4) {
          local_1e0.TextData.Reference = local_2d8.TextData.Reference;
          if (local_2d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2d8.TextData.Reference + 8))
                      (local_2d8.TextData.Reference,local_28c);
          }
          local_1e0.Flags = local_2d8.Flags;
          local_1d0.TextData.Reference = local_2c8.TextData.Reference;
          if (local_2c8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2c8.TextData.Reference + 8))
                      (local_2c8.TextData.Reference,local_288);
          }
          local_1d0.Flags = local_2c8.Flags;
          pFVar7 = FText::AsLocalizable_Advanced_LocText
                             (&local_130,L"PluginManager",L"PluginModuleFailedToInitialize",
                              L"Plugin \'{0}\' failed to load because module \'{1}\' could not be initialized successfully after it was loaded."
                             );
          pFVar8 = FTextFormat::FTextFormat(&local_b0,pFVar7,Default);
          pFVar7 = FText::Format<FText,FText>(&local_140,pFVar8,&local_1d0,&local_1e0);
          FText::operator=(&local_2b8,pFVar7);
          local_110.TextData.Reference = local_130.TextData.Reference;
          if (local_140.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
            local_110.TextData.Reference = local_130.TextData.Reference;
          }
        }
        else {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8987629764537742658>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
                             ,0xabe,"0");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          local_1c0.TextData.Reference = local_2d8.TextData.Reference;
          if (local_2d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2d8.TextData.Reference + 8))
                      (local_2d8.TextData.Reference,local_284);
          }
          local_1c0.Flags = local_2d8.Flags;
          local_1b0.TextData.Reference = local_2c8.TextData.Reference;
          if (local_2c8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2c8.TextData.Reference + 8))
                      (local_2c8.TextData.Reference,local_280);
          }
          local_1b0.Flags = local_2c8.Flags;
          pFVar7 = FText::AsLocalizable_Advanced_LocText
                             (&local_110,L"PluginManager",L"PluginGenericLoadFailure",
                              L"Plugin \'{0}\' failed to load because module \'{1}\' could not be loaded for an unspecified reason.  This plugin\'s functionality will not be available.  Please report this error."
                             );
          pFVar8 = FTextFormat::FTextFormat(&local_a0,pFVar7,Default);
          pFVar7 = FText::Format<FText,FText>(&local_120,pFVar8,&local_1b0,&local_1c0);
          FText::operator=(&local_2b8,pFVar7);
          if (local_120.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
          }
        }
        if (local_110.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
        }
        if (local_2d8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2d8.TextData.Reference + 0x10))();
        }
        if (local_2c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
        }
        break;
      }
      TStack_240.UnvisitedBitMask = TStack_240.UnvisitedBitMask & ~TStack_240._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_240);
    } while (TStack_240.CurrentBitIndex < (TStack_240.Array)->NumBits);
  }
  bVar6 = FText::IsEmpty(&local_2b8);
  if (!bVar6) {
    if (this->bAllPluginsEnabledViaCommandLine == false) {
      if (1 < (byte)LogPluginManager._0_1_) {
        FText::ToString(&local_2b8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
      }
    }
    else if (3 < (byte)LogPluginManager._0_1_) {
      FText::ToString(&local_2b8);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
    }
    if (this->bAllPluginsEnabledViaCommandLine == false) {
      FMessageDialog::Open(Ok,&local_2b8);
      bVar6 = false;
      goto LAB_141e3d436;
    }
  }
  bVar6 = true;
LAB_141e3d436:
  if (local_2b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,enum_EModuleLoadResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,enum_EModuleLoadResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_88);
  return bVar6;
}

// TryMountExplicitlyLoadedPluginVersion @ 141e3d4a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPluginManager::TryMountExplicitlyLoadedPluginVersion
          (FPluginManager *this,TSharedRef<FPlugin,1> *param_1)

{
  FPlugin *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<FPlugin,1> *pTVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  
  bVar6 = false;
  if (param_1 == (TSharedRef<FPlugin,1> *)0x0) {
    return false;
  }
  if ((param_1->Object->Descriptor).bExplicitlyLoaded == false) {
    return false;
  }
  pTVar5 = DiscoveredPluginMapUtils::FindPluginInMap(&this->AllPlugins,&param_1->Object->Name);
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar5 == (TSharedRef<FPlugin,1> *)0x0) {
LAB_141e3d503:
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8987629764537741921>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
                       ,0xd9f,"CurrentPriorityPlugin.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    pTVar7 = (pTVar5->SharedReferenceCount).ReferenceController;
    pFVar1 = pTVar5->Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 == (FPlugin *)0x0) goto LAB_141e3d503;
    if ((pFVar1 != param_1->Object) && (pFVar1->bIsMounted)) {
      if (1 < (byte)LogPluginManager._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
      }
      goto LAB_141e3d5d2;
    }
  }
  pTVar5 = DiscoveredPluginMapUtils::PromotePluginToOfferedVersion(&this->AllPlugins,param_1);
  if (pTVar5 == (TSharedRef<FPlugin,1> *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8987629764537741907>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
                       ,0xdad,"AllPlugins_PluginPtr");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    MountPluginFromExternalSource(this,pTVar5,Max);
    bVar6 = true;
  }
LAB_141e3d5d2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return bVar6;
}

// TryUnloadModulesForPlugin @ 141e3d740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPluginManager::TryUnloadModulesForPlugin
          (FPluginManager *this,FPlugin *param_1,Type param_2,FText *param_3,bool param_4,
          bool param_5)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 uVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 auStackY_228 [32];
  undefined1 local_1f8 [8];
  FText local_1f0;
  FText local_1e0;
  FText local_1d0;
  longlong *local_1c0;
  uint uStack_1b8;
  uint uStack_1b4;
  TBitArray<FDefaultBitArrayAllocator> *local_1b0;
  undefined4 uStack_1a8;
  uint uStack_1a4;
  uint local_1a0;
  uint uStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  int local_190;
  int local_18c;
  undefined1 local_188 [4];
  undefined1 local_184 [4];
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  FName local_178;
  FText *local_170;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FTextFormat local_a8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar12 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_170 = param_3;
  FModuleDescriptor::UnloadModulesForPhase
            (param_2,&(param_1->Descriptor).Modules,
             (TMap<FName,EModuleUnloadResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,EModuleUnloadResult,0>_>
              *)local_98,param_4,param_5);
  FText::FText(&local_1f0);
  uVar11 = local_70;
  uStack_1b4 = 1;
  local_1a0 = 0;
  uStack_1a4 = local_1a0;
  if (local_70 != 0) {
    puVar13 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar13 = local_78;
    }
    uVar14 = *puVar13;
    local_1a0 = 0;
    uVar12 = 0;
    while (uVar14 == 0) {
      lVar9 = (longlong)(int)uVar12;
      local_1a0 = local_1a0 + 0x20;
      uVar12 = uVar12 + 1;
      uStack_1a4 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
      goto LAB_141e3d870;
      uVar14 = puVar13[lVar9 + 1];
    }
    uStack_1b4 = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_1b4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_190 = (int)lVar9;
    uStack_1a4 = (local_1a0 - 1) + local_190;
    if ((int)local_70 < (int)uStack_1a4) {
      uStack_1a4 = local_70;
    }
  }
LAB_141e3d870:
  local_1c0 = (longlong *)local_98;
  local_1b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_198 = local_98._8_4_ - local_64;
  uVar14 = local_70 & 0xffffffe0;
  uStack_1a8 = 0xffffffff;
  TStack_160.CurrentBitIndex = uStack_1a4;
  TStack_160.UnvisitedBitMask = 0xffffffff;
  TStack_160._padding_ = CONCAT44(uStack_1b4,uVar12);
  iVar10 = (int)local_70 >> 5;
  TStack_160._28_4_ = uStack_1a4;
  TStack_160.BaseBitIndex = local_1a0;
  uStack_140 = CONCAT44(uStack_194,iStack_198);
  bVar8 = (byte)local_70;
  uStack_1b8 = uVar12;
  uStack_19c = uStack_1a4;
  local_168 = local_1c0;
  TStack_160.Array = local_1b0;
  if (((int)local_70 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if (uVar11 != local_70) {
    puVar13 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar13 = local_78;
    }
    uVar12 = -1 << (bVar8 & 0x1f) & puVar13[iVar10];
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_141e3d990;
      uVar12 = puVar13[lVar9 + 1];
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_18c = (int)lVar9;
    uVar11 = local_18c + -1 + uVar14;
    if ((int)local_70 < (int)uVar11) {
      uVar11 = local_70;
    }
  }
LAB_141e3d990:
  while( true ) {
    plVar3 = local_168;
    if ((int)local_168[1] - *(int *)((longlong)local_168 + 0x34) != (int)uStack_140) {
      local_1f8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,enum_EModuleUnloadResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1f8);
    }
    if (((TStack_160.CurrentBitIndex == uVar11) &&
        (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar3 == (longlong *)local_98)) goto LAB_141e3dbdd;
    lVar9 = *plVar3;
    iVar10 = *(int *)(lVar9 + 8 + (longlong)TStack_160.CurrentBitIndex * 0x14);
    local_178 = *(FName *)(lVar9 + (longlong)TStack_160.CurrentBitIndex * 0x14);
    if (iVar10 != 0) break;
    TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
  }
  FText::FromString(&local_1d0,&param_1->Name);
  FText::FromName(&local_1e0,&local_178);
  if (iVar10 == 1) {
    local_138.TextData.Reference = local_1e0.TextData.Reference;
    if (local_1e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1e0.TextData.Reference + 8))
                (local_1e0.TextData.Reference,local_188);
    }
    local_138.Flags = local_1e0.Flags;
    local_128.TextData.Reference = local_1d0.TextData.Reference;
    if (local_1d0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1d0.TextData.Reference + 8))
                (local_1d0.TextData.Reference,local_184);
    }
    local_128.Flags = local_1d0.Flags;
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_e8,L"PluginManager",L"UnloadNotSupported",
                        L"Plugin \'{0}\' failed to unload because module \'{1}\' does not support unloading."
                       );
    pFVar7 = FTextFormat::FTextFormat(&local_b8,pFVar6,Default);
    pFVar6 = FText::Format<FText,FText>(&local_f8,pFVar7,&local_128,&local_138);
    FText::operator=(&local_1f0,pFVar6);
    local_c8.TextData.Reference = local_e8.TextData.Reference;
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      local_c8.TextData.Reference = local_e8.TextData.Reference;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8987629764537742607>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
                       ,0xaf1,"0");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    local_118.TextData.Reference = local_1e0.TextData.Reference;
    if (local_1e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1e0.TextData.Reference + 8))
                (local_1e0.TextData.Reference,local_180);
    }
    local_118.Flags = local_1e0.Flags;
    local_108.TextData.Reference = local_1d0.TextData.Reference;
    if (local_1d0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1d0.TextData.Reference + 8))
                (local_1d0.TextData.Reference,local_17c);
    }
    local_108.Flags = local_1d0.Flags;
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_c8,L"PluginManager",L"PluginGenericUnloadFailure",
                        L"Plugin \'{0}\' failed to unload because module \'{1}\' could not be unloaded for an unspecified reason. Please report this error."
                       );
    pFVar7 = FTextFormat::FTextFormat(&local_a8,pFVar6,Default);
    pFVar6 = FText::Format<FText,FText>(&local_d8,pFVar7,&local_108,&local_118);
    FText::operator=(&local_1f0,pFVar6);
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
  }
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  if (local_1e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1e0.TextData.Reference + 0x10))();
  }
  if (local_1d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1d0.TextData.Reference + 0x10))();
  }
LAB_141e3dbdd:
  bVar4 = FText::IsEmpty(&local_1f0);
  if (bVar4) {
    bVar4 = true;
  }
  else {
    if (1 < (byte)LogPluginManager._0_1_) {
      FText::ToString(&local_1f0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
    }
    FMessageDialog::Open(Ok,&local_1f0);
    if (local_170 != (FText *)0x0) {
      FText::operator=(local_170,&local_1f0);
    }
    bVar4 = false;
  }
  if (local_1f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1f0.TextData.Reference + 0x10))();
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,enum_EModuleUnloadResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,enum_EModuleUnloadResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_98);
  return bVar4;
}

// UnmountExplicitlyLoadedPlugin @ 141e3def0

bool __thiscall
FPluginManager::UnmountExplicitlyLoadedPlugin(FPluginManager *this,FString *param_1,FText *param_2)

{
  bool bVar1;
  
  bVar1 = UnmountExplicitlyLoadedPlugin(this,param_1,param_2,true);
  return bVar1;
}

// UnmountExplicitlyLoadedPlugin @ 141e3df00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPluginManager::UnmountExplicitlyLoadedPlugin
          (FPluginManager *this,FString *param_1,FText *param_2,bool param_3)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  TSharedRef<FPlugin,1> *pTVar7;
  FText *pFVar8;
  FTextLocalizationManager *this_00;
  FConfigFile *this_01;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar9;
  FName *pFVar10;
  longlong *plVar11;
  int iVar12;
  Type TVar13;
  FPlugin *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  Type TVar16;
  bool bVar17;
  undefined1 auStackY_188 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_150;
  FString local_140;
  FText local_130;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_120;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_110;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FName local_e8;
  FText local_e0;
  TArrayView<FString_const_,int> local_c8;
  FString local_b8;
  FString local_a8;
  FReadAccessScope local_98;
  undefined1 local_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar7 = DiscoveredPluginMapUtils::FindPluginInMap(&this->AllPlugins,param_1);
  if (pTVar7 == (TSharedRef<FPlugin,1> *)0x0) {
    pFVar14 = (FPlugin *)0x0;
    pTVar15 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar15 = (pTVar7->SharedReferenceCount).ReferenceController;
    pFVar14 = pTVar7->Object;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3624,"UnmountPluginFromExternalSource",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
               ,0xe28);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3624);
  }
  if ((pFVar14 != (FPlugin *)0x0) && (pFVar14->bEnabled)) {
    if ((pFVar14->Descriptor).bExplicitlyLoaded == false) {
      if (param_2 != (FText *)0x0) {
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_e0,L"PluginManager",L"UnloadPluginNotExplicitlyLoaded",
                            L"Plugin was not explicitly loaded");
        FText::operator=(param_2,pFVar8);
LAB_141e3e003:
        if (local_e0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
        }
      }
      bVar4 = false;
      goto LAB_141e3e41b;
    }
    TVar16 = None;
    TVar13 = None;
    do {
      if (TVar13 != None) {
        FText::FText(&local_130);
        bVar4 = TryUnloadModulesForPlugin(this,pFVar14,TVar13,&local_130,true,true);
        if (!bVar4) {
          local_e0.TextData.Reference = local_130.TextData.Reference;
          if (param_2 != (FText *)0x0) {
            FText::operator=(param_2,&local_130);
            local_e0.TextData.Reference = local_130.TextData.Reference;
          }
          goto LAB_141e3e003;
        }
        if (local_130.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
        }
      }
      TVar13 = TVar13 - PostConfigInit;
    } while (-1 < (int)TVar13);
    if (((pFVar14->ExplicitlyLoadedLocalizationDataMountedRefCount != '\0') &&
        (0 < (pFVar14->Descriptor).LocalizationTargets.ArrayNum)) && (GIsRequestingExit == false)) {
      pFVar14->ExplicitlyLoadedLocalizationDataMountedRefCount = '\0';
      local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.ArrayNum = 0;
      local_150.ArrayMax = 0;
      PluginLocalizationUtils::GetLocalizationPathsForPlugin((IPlugin *)pFVar14,&local_150);
      this_00 = FTextLocalizationManager::Get();
      local_78._0_8_ = 0;
      local_50 = (longlong *)0x0;
      iStack_f0 = local_150.ArrayNum;
      local_f8 = local_150.AllocatorInstance.Data;
      if ((local_150.ArrayNum < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      local_c8._12_4_ = uStack_ec;
      local_c8.ArrayNum = iStack_f0;
      local_c8.DataPtr = (FString *)local_f8;
      FTextLocalizationManager::HandleLocalizationTargetsUnmounted
                (this_00,&local_c8,(TUniqueFunction<void___cdecl(void)> *)local_78);
      if (local_78._0_8_ != 0) {
        plVar11 = (longlong *)(local_78 + 0x10);
        if (local_50 != (longlong *)0x0) {
          plVar11 = local_50;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      DestructItems<FString,int>((FString *)local_150.AllocatorInstance.Data,local_150.ArrayNum);
      if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.AllocatorInstance.Data);
      }
    }
    if (((pFVar14->Descriptor).bCanContainContent != false) ||
       ((pFVar14->Descriptor).bCanContainVerse != false)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->UnRegisterMountPointDelegate,&local_98);
      if ((*(int *)&(this->UnRegisterMountPointDelegate).field_0x10 == 0) ||
         ((plVar11 = *(longlong **)&(this->UnRegisterMountPointDelegate).field_0x8,
          plVar11 == (longlong *)0x0 || (cVar6 = (**(code **)(*plVar11 + 0x38))(), cVar6 == '\0'))))
      {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_98);
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8987629764537741737>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
                           ,0xe57,"UnRegisterMountPointDelegate.IsBound()");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_98);
        if (((pFVar14->Descriptor).bCanContainContent != false) &&
           (this_01 = FConfigCacheIni::Find(GConfig,&GEngineIni), this_01 != (FConfigFile *)0x0)) {
          pTVar9 = &FPaths::GetPath(&local_b8,&pFVar14->FileName)->Data;
          TArray<wchar_t,TSizedDefaultAllocator<32>_>::
          TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                    (&local_120,pTVar9,9 - (uint)(pTVar9->ArrayNum != 0));
          ::FString::PathAppend((FString *)&local_120,L"Content",7);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          pFVar10 = ::FName::FName(&local_e8,"Paths");
          FConfigFile::RemoveFromSection(this_01,L"Core.System",*pFVar10,(FString *)&local_120);
          if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.AllocatorInstance.Data);
          }
        }
        bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &this->PluginUnmountedEvent);
        if (bVar4) {
          TMulticastDelegate<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>::Broadcast
                    ((TMulticastDelegate<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy> *)
                     &this->PluginUnmountedEvent,(IPlugin *)pFVar14);
        }
        pTVar9 = &FPaths::GetPath(&local_a8,&pFVar14->FileName)->Data;
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::
        TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                  (&local_110,pTVar9,9 - (uint)(pTVar9->ArrayNum != 0));
        ::FString::PathAppend((FString *)&local_110,L"Content",7);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_140.Data.ArrayNum = 0;
        local_140.Data.ArrayMax = 0;
        iVar2 = (pFVar14->Name).Data.ArrayNum;
        iVar12 = iVar2 + 1;
        if (iVar2 == 0) {
          iVar12 = 2;
        }
        ::FString::Reserve(&local_140,iVar12);
        ::FString::AppendChar(&local_140,L'/');
        iVar2 = (pFVar14->Name).Data.ArrayNum;
        iVar12 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar12 = 0;
        }
        ::FString::AppendChars
                  (&local_140,(wchar_t *)(pFVar14->Name).Data.AllocatorInstance.Data,iVar12);
        ::FString::AppendChar(&local_140,L'/');
        TDelegate<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>::Execute
                  (&this->UnRegisterMountPointDelegate,&local_140,(FString *)&local_110);
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
        if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.AllocatorInstance.Data);
        }
        if (UE::PluginManager::Private::CoreUObjectPluginHandler != (ICoreUObjectPluginManager *)0x0
           ) {
          (**(code **)*UE::PluginManager::Private::CoreUObjectPluginHandler)
                    (UE::PluginManager::Private::CoreUObjectPluginHandler,pFVar14);
        }
      }
    }
    do {
      if (((TVar16 != None) &&
          (bVar4 = TryUnloadModulesForPlugin(this,pFVar14,TVar16,(FText *)0x0,false,param_3), !bVar4
          )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TryUnloadModulesForPlugin(*Plugin, LoadingPhase, nullptr, false, bAllowUnloadCode)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
                                    ,0xe76,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      TVar16 = TVar16 - PostConfigInit;
    } while (-1 < (int)TVar16);
    pFVar14->bEnabled = false;
    pFVar14->bIsMounted = false;
  }
  bVar4 = true;
LAB_141e3e41b:
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return bVar4;
}

// UnmountExplicitlyLoadedPluginLocalizationData @ 141e3e480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPluginManager::UnmountExplicitlyLoadedPluginLocalizationData
          (FPluginManager *this,FString *param_1,
          TUniqueFunction<void___cdecl(bool,FString_const_&)> *param_2)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  TSharedRef<FPlugin,1> *pTVar7;
  FTextLocalizationManager *pFVar8;
  code **ppcVar9;
  undefined8 uVar10;
  longlong *plVar11;
  FPlugin *pFVar12;
  FPlugin *pFVar13;
  bool bVar14;
  undefined1 auStack_178 [32];
  int local_158;
  undefined1 local_148 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_140;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  TArrayView<FString_const_,int> local_108;
  TArrayView<FString_const_,int> local_f8;
  FString local_e8;
  code *local_d8;
  code *local_c8;
  code *pcStack_c0;
  code *local_b8;
  code **local_b0;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  pTVar7 = DiscoveredPluginMapUtils::FindPluginInMap(&this->AllPlugins,param_1);
  pFVar12 = (FPlugin *)0x0;
  pFVar13 = pFVar12;
  if (pTVar7 != (TSharedRef<FPlugin,1> *)0x0) {
    pFVar12 = (FPlugin *)(pTVar7->SharedReferenceCount).ReferenceController;
    pFVar13 = pTVar7->Object;
    if (pFVar12 != (FPlugin *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar12->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar12->_padding_ + 1);
      UNLOCK();
    }
  }
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3392,"UnmountExplicitlyLoadedPluginLocalizationData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
               ,0xd40);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3392);
  }
  if ((pFVar13 == (FPlugin *)0x0) || (!pFVar13->bIsMounted)) {
    if (1 < (byte)LogPluginManager._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
    }
    if (*(void **)param_2 != (void *)0x0) {
      local_148[0] = 0;
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar3 = *(code **)param_2;
      plVar11 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar11 = *(longlong **)&param_2->field_0x28;
      }
      uVar10 = (**(code **)(*plVar11 + 8))();
      (*pcVar3)(uVar10,local_148,param_1);
    }
  }
  else {
    if ((pFVar13->Descriptor).bExplicitlyLoaded == false) {
      if (2 < (byte)LogPluginManager._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
      }
      lVar2 = *(longlong *)param_2;
    }
    else {
      bVar1 = pFVar13->ExplicitlyLoadedLocalizationDataMountedRefCount;
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          if (5 < (byte)LogPluginManager._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
          }
          lVar2 = *(longlong *)param_2;
        }
        else if ((pFVar13->Descriptor).LocalizationTargets.ArrayNum == 0) {
          if (5 < (byte)LogPluginManager._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
          }
          lVar2 = *(longlong *)param_2;
        }
        else {
          if (GIsRequestingExit == false) {
            if (4 < (byte)LogPluginManager._0_1_) {
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager)
              ;
            }
            pFVar13->ExplicitlyLoadedLocalizationDataMountedRefCount = '\0';
            local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_140.ArrayNum = 0;
            local_140.ArrayMax = 0;
            PluginLocalizationUtils::GetLocalizationPathsForPlugin((IPlugin *)pFVar13,&local_140);
            if (*(longlong *)param_2 == 0) {
              pFVar8 = FTextLocalizationManager::Get();
              iStack_110 = local_140.ArrayNum;
              local_118 = local_140.AllocatorInstance.Data;
              local_78._0_8_ = 0;
              local_50 = (longlong *)0x0;
              if ((local_140.ArrayNum < 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              local_f8._12_4_ = uStack_10c;
              local_f8.ArrayNum = iStack_110;
              local_f8.DataPtr = (FString *)local_118;
              FTextLocalizationManager::HandleLocalizationTargetsUnmounted
                        (pFVar8,&local_f8,(TUniqueFunction<void___cdecl(void)> *)local_78);
              if (local_78._0_8_ != 0) {
                plVar11 = (longlong *)(local_78 + 0x10);
                if (local_50 != (longlong *)0x0) {
                  plVar11 = local_50;
                }
                (**(code **)(*plVar11 + 0x10))();
              }
            }
            else {
              pFVar8 = FTextLocalizationManager::Get();
              ::FString::FString(&local_e8,param_1);
              local_d8 = *(code **)param_2;
              local_b0 = *(code ***)&param_2->field_0x28;
              *(undefined8 *)&param_2->field_0x28 = 0;
              local_b8 = *(code **)&param_2->field_0x20;
              local_c8 = *(code **)&param_2->field_0x10;
              pcStack_c0 = *(code **)&param_2->field_0x18;
              if (local_d8 != (code *)0x0) {
                *(undefined8 *)param_2 = 0;
              }
              local_a8[0] = (code *)0x0;
              ppcVar9 = FMemory::Malloc(0x50,0x10);
              *ppcVar9 = (code *)&UE::Core::Private::Function::
                                  TFunction_OwnedObject<`FPluginManager::UnmountExplicitlyLoadedPluginLocalizationData'::`167'::<lambda_1>,1,1>
                                  ::_vftable_;
              local_80 = ppcVar9;
              ::FString::FString((FString *)(ppcVar9 + 2),&local_e8);
              ppcVar9[4] = local_d8;
              ppcVar9[9] = (code *)local_b0;
              local_b0 = (code **)0x0;
              ppcVar9[6] = local_c8;
              ppcVar9[7] = pcStack_c0;
              ppcVar9[8] = local_b8;
              if (ppcVar9[4] != (code *)0x0) {
                local_d8 = (code *)0x0;
              }
              iVar4 = local_140.ArrayNum;
              if ((FString *)(ppcVar9 + 2) != (FString *)0x0) {
                local_a8[0] = UE::Core::Private::Function::
                              TFunctionRefCaller<`FPluginManager::UnmountExplicitlyLoadedPluginLocalizationData'::__l167::<lambda_1>,void>
                              ::Call;
              }
              local_128 = local_140.AllocatorInstance.Data;
              if ((local_140.ArrayNum < 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              iStack_120 = iVar4;
              local_108._12_4_ = uStack_11c;
              local_108.ArrayNum = iVar4;
              local_108.DataPtr = (FString *)local_128;
              FTextLocalizationManager::HandleLocalizationTargetsUnmounted
                        (pFVar8,&local_108,(TUniqueFunction<void___cdecl(void)> *)local_a8);
              if (local_a8[0] != (code *)0x0) {
                ppcVar9 = local_a8 + 2;
                if (local_80 != (code **)0x0) {
                  ppcVar9 = local_80;
                }
                (**(code **)(*ppcVar9 + 0x10))();
              }
              if (local_d8 != (code *)0x0) {
                ppcVar9 = &local_c8;
                if (local_b0 != (code **)0x0) {
                  ppcVar9 = local_b0;
                }
                (**(code **)(*ppcVar9 + 0x10))();
              }
              if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.Data.AllocatorInstance.Data);
              }
            }
            bVar5 = true;
            DestructItems<FString,int>
                      ((FString *)local_140.AllocatorInstance.Data,local_140.ArrayNum);
            if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.AllocatorInstance.Data);
            }
            goto LAB_141e3e96d;
          }
          if (5 < (byte)LogPluginManager._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
          }
          lVar2 = *(longlong *)param_2;
        }
      }
      else {
        if (5 < (byte)LogPluginManager._0_1_) {
          local_158 = bVar1 - 1;
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
        }
        pFVar13->ExplicitlyLoadedLocalizationDataMountedRefCount =
             pFVar13->ExplicitlyLoadedLocalizationDataMountedRefCount + 0xff;
        lVar2 = *(longlong *)param_2;
      }
    }
    if (lVar2 != 0) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(bool,FString_const_&)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(bool,FString_const_&)>
                    *)param_2,false,param_1);
    }
  }
  bVar5 = false;
LAB_141e3e96d:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  return bVar5;
}

// operator() @ 150480f20

bool __thiscall
`FPluginManager::GetPluginsEnabledAtStartup'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8987629764537742230>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8987629764537742230>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504812d0

bool __thiscall `FPluginManager::AddToPluginsList'::__l18::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8987629764537744746>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_8987629764537744746>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

