// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 41

// StaticClass @ 146f13eb0

UClass * __cdecl UEnvQueryManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryManager",
               &Z_Registration_Info_UClass_UEnvQueryManager.InnerSingleton,
               StaticRegisterNativesUEnvQueryManager,0x200,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,
               L"Game",InternalConstructor<UEnvQueryManager>,
               InternalVTableHelperCtorCaller<UEnvQueryManager>,local_res8,UAISubsystem::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryManager.InnerSingleton;
}

// UEnvQueryManager @ 146f2c4b0

UEnvQueryManager * __thiscall
UEnvQueryManager::UEnvQueryManager(UEnvQueryManager *this,FVTableHelper *param_1)

{
  UAISubsystem::UAISubsystem((UAISubsystem *)this,param_1);
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->_padding_ = (longlong)&___7UEnvQueryManager__6B_;
  *(undefined8 *)&(this->EQSDebugger).StoredStats = 0;
  *(undefined8 *)&(this->EQSDebugger).StoredStats.field_0x8 = 0;
  *(undefined8 *)&(this->EQSDebugger).StoredStats.field_0x20 = 0;
  *(undefined4 *)&(this->EQSDebugger).StoredStats.field_0x28 = 0;
  *(undefined4 *)&(this->EQSDebugger).StoredStats.field_0x2c = 0x80;
  *(undefined4 *)&(this->EQSDebugger).StoredStats.field_0x34 = 0;
  *(undefined4 *)&(this->EQSDebugger).StoredStats.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EQSDebugger).StoredStats.field_0x40 = 0;
  *(undefined4 *)&(this->EQSDebugger).StoredStats.field_0x48 = 0;
  *(undefined8 *)&(this->EQSDebugger).StoredQueries = 0;
  *(undefined8 *)&(this->EQSDebugger).StoredQueries.field_0x8 = 0;
  *(undefined8 *)&(this->EQSDebugger).StoredQueries.field_0x20 = 0;
  *(undefined4 *)&(this->EQSDebugger).StoredQueries.field_0x28 = 0;
  *(undefined4 *)&(this->EQSDebugger).StoredQueries.field_0x2c = 0x80;
  *(undefined4 *)&(this->EQSDebugger).StoredQueries.field_0x34 = 0;
  *(undefined4 *)&(this->EQSDebugger).StoredQueries.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EQSDebugger).StoredQueries.field_0x40 = 0;
  *(undefined4 *)&(this->EQSDebugger).StoredQueries.field_0x48 = 0;
  (this->RunningQueries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RunningQueries).ArrayNum = 0;
  (this->RunningQueries).ArrayMax = 0;
  *(undefined8 *)&this->ExternalQueries = 0;
  *(undefined8 *)&(this->ExternalQueries).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalQueries).field_0x20 = 0;
  *(undefined4 *)&(this->ExternalQueries).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalQueries).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalQueries).field_0x34 = 0;
  *(undefined4 *)&(this->ExternalQueries).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ExternalQueries).field_0x40 = 0;
  *(undefined4 *)&(this->ExternalQueries).field_0x48 = 0;
  (this->InstanceCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceCache).ArrayNum = 0;
  (this->InstanceCache).ArrayMax = 0;
  (this->LocalContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalContexts).ArrayNum = 0;
  (this->LocalContexts).ArrayMax = 0;
  (this->GCShieldedWrappers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GCShieldedWrappers).ArrayNum = 0;
  (this->GCShieldedWrappers).ArrayMax = 0;
  *(undefined8 *)&this->LocalContextMap = 0;
  *(undefined8 *)&(this->LocalContextMap).field_0x8 = 0;
  *(undefined8 *)&(this->LocalContextMap).field_0x20 = 0;
  *(undefined4 *)&(this->LocalContextMap).field_0x28 = 0;
  *(undefined4 *)&(this->LocalContextMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LocalContextMap).field_0x34 = 0;
  *(undefined4 *)&(this->LocalContextMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LocalContextMap).field_0x40 = 0;
  *(undefined4 *)&(this->LocalContextMap).field_0x48 = 0;
  this->ExecutionTimeWarningSeconds = 0.02500000037252903;
  this->HandlingResultTimeWarningSeconds = 0.02500000037252903;
  this->GenerationTimeWarningSeconds = 0.009999999776482582;
  return this;
}

// UEnvQueryManager @ 146f2c660

UEnvQueryManager * __thiscall
UEnvQueryManager::UEnvQueryManager(UEnvQueryManager *this,FObjectInitializer *param_1)

{
  bool bVar1;
  
  UAISubsystem::UAISubsystem((UAISubsystem *)this,param_1);
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&(this->EQSDebugger).StoredStats = 0;
  *(undefined8 *)&(this->EQSDebugger).StoredStats.field_0x8 = 0;
  *(undefined8 *)&(this->EQSDebugger).StoredStats.field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->_padding_ = (longlong)&___7UEnvQueryManager__6B_;
  *(undefined4 *)&(this->EQSDebugger).StoredStats.field_0x28 = 0;
  *(undefined4 *)&(this->EQSDebugger).StoredStats.field_0x2c = 0x80;
  *(undefined4 *)&(this->EQSDebugger).StoredStats.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EQSDebugger).StoredStats.field_0x34 = 0;
  *(undefined8 *)&(this->EQSDebugger).StoredStats.field_0x40 = 0;
  *(undefined4 *)&(this->EQSDebugger).StoredStats.field_0x48 = 0;
  *(undefined8 *)&(this->EQSDebugger).StoredQueries = 0;
  *(undefined8 *)&(this->EQSDebugger).StoredQueries.field_0x8 = 0;
  *(undefined8 *)&(this->EQSDebugger).StoredQueries.field_0x20 = 0;
  *(undefined4 *)&(this->EQSDebugger).StoredQueries.field_0x28 = 0;
  *(undefined4 *)&(this->EQSDebugger).StoredQueries.field_0x2c = 0x80;
  *(undefined4 *)&(this->EQSDebugger).StoredQueries.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EQSDebugger).StoredQueries.field_0x34 = 0;
  *(undefined8 *)&(this->EQSDebugger).StoredQueries.field_0x40 = 0;
  *(undefined4 *)&(this->EQSDebugger).StoredQueries.field_0x48 = 0;
  (this->RunningQueries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RunningQueries).ArrayNum = 0;
  (this->RunningQueries).ArrayMax = 0;
  *(undefined8 *)&this->ExternalQueries = 0;
  *(undefined8 *)&(this->ExternalQueries).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalQueries).field_0x20 = 0;
  *(undefined4 *)&(this->ExternalQueries).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalQueries).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalQueries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExternalQueries).field_0x34 = 0;
  *(undefined8 *)&(this->ExternalQueries).field_0x40 = 0;
  *(undefined4 *)&(this->ExternalQueries).field_0x48 = 0;
  (this->InstanceCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceCache).ArrayNum = 0;
  (this->InstanceCache).ArrayMax = 0;
  (this->LocalContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalContexts).ArrayNum = 0;
  (this->LocalContexts).ArrayMax = 0;
  (this->GCShieldedWrappers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GCShieldedWrappers).ArrayNum = 0;
  (this->GCShieldedWrappers).ArrayMax = 0;
  *(undefined8 *)&this->LocalContextMap = 0;
  *(undefined8 *)&(this->LocalContextMap).field_0x8 = 0;
  *(undefined8 *)&(this->LocalContextMap).field_0x20 = 0;
  *(undefined4 *)&(this->LocalContextMap).field_0x28 = 0;
  *(undefined4 *)&(this->LocalContextMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LocalContextMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LocalContextMap).field_0x34 = 0;
  *(undefined8 *)&(this->LocalContextMap).field_0x40 = 0;
  *(undefined4 *)&(this->LocalContextMap).field_0x48 = 0;
  this->ExecutionTimeWarningSeconds = 0.02500000037252903;
  this->HandlingResultTimeWarningSeconds = 0.02500000037252903;
  this->GenerationTimeWarningSeconds = 0.009999999776482582;
  this->QueryCountWarningInterval = 30.0;
  this->LastQueryCountWarningThresholdTime = -3.4028234663852886e+38;
  this->NextQueryID = 0;
  this->MaxAllowedTestingTime = 0.01;
  this->bTestQueriesUsingBreadth = true;
  this->NumRunningQueriesAbortedSinceLastUpdate = 0;
  this->QueryCountWarningThreshold = 0;
  if ((this->_padding_ & 0x10) == 0) {
    bVar1 = 1 < (int)DebuggerStats._72_4_;
    if (!bVar1) {
      TSet<TTuple<FName,FEQSDebugger::FStatsInfo>,TDefaultMapHashableKeyFuncs<FName,FEQSDebugger::FStatsInfo,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,FEQSDebugger::FStatsInfo>,TDefaultMapHashableKeyFuncs<FName,FEQSDebugger::FStatsInfo,0>,FDefaultSetAllocator>
                        *)&DebuggerStats);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FEQSDebugger::FStatsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FEQSDebugger::FStatsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&DebuggerStats,0,DebuggerStats._8_4_);
    DebuggerStats._8_4_ = 0;
    if (DebuggerStats._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,8,0,(ForAnyElementType *)&DebuggerStats,0,(int *)&DebuggerStats.field_0xc);
    }
    DebuggerStats._48_4_ = 0xffffffff;
    DebuggerStats._52_4_ = 0;
    DebuggerStats._40_4_ = 0;
    if (0x80 < (uint)DebuggerStats._44_4_) {
      DebuggerStats._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&DebuggerStats.field_0x10,0);
    }
    if (bVar1) {
      DebuggerStats._72_4_ = 1;
      TSet<TTuple<FName,FEQSDebugger::FStatsInfo>,TDefaultMapHashableKeyFuncs<FName,FEQSDebugger::FStatsInfo,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,FEQSDebugger::FStatsInfo>,TDefaultMapHashableKeyFuncs<FName,FEQSDebugger::FStatsInfo,0>,FDefaultSetAllocator>
                *)&DebuggerStats);
    }
  }
  return this;
}

// ~UEnvQueryManager @ 146f2eec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UEnvQueryManager::~UEnvQueryManager(UEnvQueryManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined4 *)&(this->LocalContextMap).field_0x48 = 0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->_padding_ = (longlong)&___7UEnvQueryManager__6B_;
  pvVar1 = *(void **)&(this->LocalContextMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UEnvQueryContext_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UEnvQueryContext_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UEnvQueryContext_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LocalContextMap);
  pFVar2 = (this->GCShieldedWrappers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LocalContexts).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FEnvQueryInstanceCache,int>
            ((FEnvQueryInstanceCache *)(this->InstanceCache).AllocatorInstance.Data,
             (this->InstanceCache).ArrayNum);
  pFVar2 = (this->InstanceCache).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ExternalQueries).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ExternalQueries).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TWeakPtr<FEnvQueryInstance,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TWeakPtr<FEnvQueryInstance,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TWeakPtr<FEnvQueryInstance,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExternalQueries);
  DestructItems<TSharedPtr<FEnvQueryInstance,1>,int>
            ((TSharedPtr<FEnvQueryInstance,1> *)(this->RunningQueries).AllocatorInstance.Data,
             (this->RunningQueries).ArrayNum);
  pFVar2 = (this->RunningQueries).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->EQSDebugger).StoredQueries.field_0x48 = 0;
  pvVar1 = *(void **)&(this->EQSDebugger).StoredQueries.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->EQSDebugger).StoredQueries);
  *(undefined4 *)&(this->EQSDebugger).StoredStats.field_0x48 = 0;
  pvVar1 = *(void **)&(this->EQSDebugger).StoredStats.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FEQSDebugger::FStatsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FEQSDebugger::FStatsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FEQSDebugger::FStatsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EQSDebugger);
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  UAISubsystem::~UAISubsystem((UAISubsystem *)this);
  return;
}

// AbortQuery @ 146f33cf0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UEnvQueryManager::AbortQuery(UEnvQueryManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  FName local_res8;
  FName local_res18;
  FString local_48;
  FString local_38;
  TSharedPtr<FEnvQueryResult,1> local_28;
  
  uVar7 = 0;
  if (0 < (this->RunningQueries).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->RunningQueries).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pFVar6 = (this->RunningQueries).AllocatorInstance.Data + lVar8;
      if ((*(longlong *)pFVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(int *)(*(longlong *)pFVar6 + 0x30) == param_1) {
        if ((*(longlong *)pFVar6 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (*(int *)(*(longlong *)pFVar6 + 0x28) == 0) {
          if (FVisualLogger::bIsRecording != 0) {
            if ((*(longlong *)pFVar6 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
            pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)pFVar6 + 0x34));
            if (pUVar5 == (UObject *)0x0) {
              ::FString::FString(&local_48,L"None");
            }
            else {
              local_res8.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
              local_res8.Number = *(uint *)&pUVar5->field_0x1c;
              ::FName::ToString(&local_res8,&local_48);
            }
            if ((*(longlong *)pFVar6 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
            if ((*(longlong *)pFVar6 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
            pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)pFVar6 + 0x34));
            FVisualLogger::CategorizedLogfImpl
                      (pUVar5,(FName *)&LogEQS.field_0x4,Verbose,L"%hs: Query: %s - Owner: %s");
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
          if (5 < (byte)LogEQS._0_1_) {
            if ((*(longlong *)pFVar6 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
            pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)pFVar6 + 0x34));
            if (pUVar5 == (UObject *)0x0) {
              ::FString::FString(&local_38,L"None");
            }
            else {
              local_res18.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
              local_res18.Number = *(uint *)&pUVar5->field_0x1c;
              ::FName::ToString(&local_res18,&local_38);
            }
            if ((*(longlong *)pFVar6 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
          }
          if ((*(longlong *)pFVar6 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          *(undefined4 *)(*(longlong *)pFVar6 + 0x28) = 3;
          if ((*(longlong *)pFVar6 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          local_28.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)(pFVar6 + 8);
          local_28.Object = *(FEnvQueryResult **)pFVar6;
          if (local_28.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          TDelegate<void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>::
          ExecuteIfBound((TDelegate<void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
                          *)&local_28.Object[1].RawData.ArrayNum,&local_28);
          this->NumRunningQueriesAbortedSinceLastUpdate =
               this->NumRunningQueriesAbortedSinceLastUpdate + 1;
          return true;
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar7 < (this->RunningQueries).ArrayNum);
  }
  return false;
}

// CheckQueryCount @ 146f36390

void __thiscall UEnvQueryManager::CheckQueryCount(UEnvQueryManager *this)

{
  double dVar1;
  LARGE_INTEGER local_res8 [4];
  
  if ((0 < this->QueryCountWarningThreshold) &&
     (this->QueryCountWarningThreshold <= (this->RunningQueries).ArrayNum)) {
    QueryPerformanceCounter(local_res8);
    dVar1 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if ((this->LastQueryCountWarningThresholdTime < 0.0) ||
       (this->LastQueryCountWarningThresholdTime + this->QueryCountWarningInterval < dVar1)) {
      LogQueryInfo(this,true);
      this->LastQueryCountWarningThresholdTime = dVar1;
    }
  }
  return;
}

// Configure @ 146f3a330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEnvQueryManager::Configure(UEnvQueryManager *this,FEnvQueryManagerConfig *param_1)

{
  FString local_18;
  
  if (FVisualLogger::bIsRecording != 0) {
    ::FString::PrintfImpl
              (&local_18,
               L"MaxAllowedTestingTime=%f bTestQueriesUsingBreadth=%d QueryCountWarningThreshold=%d QueryCountWarningInterval=%f ExecutionTimeWarningSeconds=%f HandlingResultTimeWarningSeconds=%f GenerationTimeWarningSeconds=%f"
              );
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogEQS.field_0x4,Log,
               L"Applying new FEnvQueryManagerConfig: %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (4 < (byte)LogEQS._0_1_) {
    ::FString::PrintfImpl
              (&local_18,
               L"MaxAllowedTestingTime=%f bTestQueriesUsingBreadth=%d QueryCountWarningThreshold=%d QueryCountWarningInterval=%f ExecutionTimeWarningSeconds=%f HandlingResultTimeWarningSeconds=%f GenerationTimeWarningSeconds=%f"
              );
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  this->MaxAllowedTestingTime = param_1->MaxAllowedTestingTime;
  this->bTestQueriesUsingBreadth = param_1->bTestQueriesUsingBreadth;
  this->QueryCountWarningThreshold = param_1->QueryCountWarningThreshold;
  this->QueryCountWarningInterval = param_1->QueryCountWarningInterval;
  this->ExecutionTimeWarningSeconds = param_1->ExecutionTimeWarningSeconds;
  this->HandlingResultTimeWarningSeconds = param_1->HandlingResultTimeWarningSeconds;
  this->GenerationTimeWarningSeconds = param_1->GenerationTimeWarningSeconds;
  return;
}

// CreateOptionInstance @ 146f3d230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnvQueryManager::CreateOptionInstance
          (UEnvQueryManager *this,UEnvQueryOption *param_1,int param_2,
          TArray<UEnvQueryTest_*,TSizedDefaultAllocator<32>_> *param_3,FEnvQueryInstance *param_4)

{
  TObjectPtr<UEnvQueryGenerator>_u_0 *pTVar1;
  longlong *plVar2;
  UEnvQueryGenerator *pUVar3;
  TObjectPtr<UEnvQueryGenerator>_u_0 TVar4;
  UClass *pUVar5;
  FScriptContainerElement *pFVar6;
  FName FVar7;
  longlong lVar8;
  code *pcVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory> FVar16;
  FThreadStats *pFVar17;
  FThreadStatsPool *pFVar18;
  uint uVar19;
  uint uVar20;
  TObjectPtr<UEnvQueryGenerator>_u_0 *pTVar21;
  undefined4 *puVar22;
  uchar auVar23 [8];
  ulonglong uVar24;
  ulonglong uVar25;
  TArray<FEnvQueryOptionInstance,TSizedDefaultAllocator<32>_> *pTVar26;
  TObjectPtr<UEnvQueryGenerator>_u_0 local_c8;
  ForAnyElementType local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  TObjectPtr<UClass>_u_0 local_a8;
  uint local_a0;
  FName local_98;
  TArray<FEnvQueryOptionInstance,TSizedDefaultAllocator<32>_> *local_90;
  longlong local_88;
  int *local_80;
  FName local_78;
  FStatMessage local_70;
  FStatMessage local_60;
  FName local_50;
  FName local_48 [2];
  
  uVar24 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b4 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar3 = (param_1->Generator).field0_0x0.DebugPtr, pUVar3 != (UEnvQueryGenerator *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  TVar4 = (TObjectPtr<UEnvQueryGenerator>_u_0)(param_1->Generator).field0_0x0.DebugPtr;
  local_c8 = TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = ((TVar4.DebugPtr)->ItemType).Class.field0_0x0.DebugPtr, pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  local_a8 = ((TVar4.DebugPtr)->ItemType).Class.field0_0x0;
  iVar14 = param_3->ArrayNum;
  pFVar6 = (param_3->AllocatorInstance).Data;
  local_b8 = iVar14;
  local_b0 = param_2;
  if ((iVar14 != 0) || (local_b4 != 0)) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar14,local_b4,&local_c0,iVar14,&local_b4);
    ConstructItems<TObjectPtr<UEnvQueryTest>,UEnvQueryTest_*,int>
              (local_c0.Data,(UEnvQueryTest **)pFVar6,iVar14);
  }
  local_80 = &(param_4->Options).ArrayMax;
  iVar14 = *local_80;
  auVar23 = (uchar  [8])((longlong)iVar14 * 0x30);
  if (auVar23 != (uchar  [8])0x0) {
    FVar16 = StatPtr_STAT_AI_EQS_InstanceMemory;
    if (StatPtr_STAT_AI_EQS_InstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
      pFVar15 = ::FName::FName(&local_50,"STAT_AI_EQS_InstanceMemory");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,*pFVar15,
                          L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                          L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar7 = *(FName *)FVar16;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar17 == (FThreadStats *)0x0) {
        pFVar18 = FThreadStatsPool::Get();
        pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
      }
      local_70.NameAndInfo.Number = FVar7.Number & 0xffffbfff | 0xb000;
      local_98 = FVar7;
      local_70.StatData.Pad = auVar23;
      local_70.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar17,&local_70);
      FStatsTrace::Add(&local_98,(longlong)iVar14 * -0x30);
      if (pFVar17->ScopeCount == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
  pTVar26 = &param_4->Options;
  pTVar21 = (TObjectPtr<UEnvQueryGenerator>_u_0 *)(pTVar26->AllocatorInstance).Data;
  local_90 = pTVar26;
  if (((pTVar21 <= &local_c8) && (&local_c8 < pTVar21 + (longlong)(param_4->Options).ArrayMax * 6))
     && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar13 = (param_4->Options).ArrayNum;
  if (uVar13 == (param_4->Options).ArrayMax) {
    uVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&pTVar26->AllocatorInstance,&(param_4->Options).ArrayMax);
  }
  pFVar6 = (pTVar26->AllocatorInstance).Data;
  (param_4->Options).ArrayNum = uVar13 + 1;
  local_88 = (longlong)(int)uVar13 * 0x30;
  pTVar21 = (TObjectPtr<UEnvQueryGenerator>_u_0 *)(pFVar6 + local_88);
  pTVar21->DebugPtr = (UEnvQueryGenerator *)local_c8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_c8.DebugPtr != (UEnvQueryGenerator *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c8.DebugPtr);
  }
  iVar14 = local_b8;
  FVar11.Data = local_c0.Data;
  pTVar1 = pTVar21 + 1;
  pTVar1->DebugPtr = (UEnvQueryGenerator *)0x0;
  *(int *)(pTVar21 + 2) = local_b8;
  if (local_b8 == 0) {
    *(int *)((longlong)pTVar21 + 0x14) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_b8,0,(ForAnyElementType *)&pTVar1->ObjectPtr,local_b8,
               (int *)((longlong)pTVar21 + 0x14));
    ConstructItems<TObjectPtr<UEnvQueryTest>,TObjectPtr<UEnvQueryTest>,int>
              ((FScriptContainerElement *)pTVar1->DebugPtr,(TObjectPtr<UEnvQueryTest> *)FVar11.Data,
               iVar14);
  }
  *(int *)(pTVar21 + 3) = local_b0;
  ((TObjectPtr<UClass>_u_0 *)(pTVar21 + 4))->DebugPtr = (UClass *)local_a8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8.DebugPtr != (UClass *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_a8.DebugPtr);
  }
  *(uint *)(pTVar21 + 5) = local_a0 & 1 | *(uint *)(pTVar21 + 5) & 0xfffffffe;
  plVar2 = &(param_4->DebugData)._padding_;
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x30,8,1,(ForAnyElementType *)&(param_4->DebugData)._padding_,(int *)plVar2,
                      (int *)((longlong)&(param_4->DebugData)._padding_ + 4));
  DefaultConstructItems<FEnvQueryDebugProfileData::FOptionData,int>
            ((void *)((longlong)iVar14 * 0x30 + (param_4->DebugData)._padding_),1);
  uVar20 = (int)*plVar2 - 1;
  uVar19 = 0;
  if ((int)uVar20 < (int)*plVar2) {
    uVar19 = ~uVar20 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar10 = *plVar2;
  lVar8 = (param_4->DebugData)._padding_;
  *(int *)(lVar8 + -0x18 + (longlong)(int)lVar10 * 0x30) = param_2;
  iVar14 = param_3->ArrayNum;
  if (0 < iVar14) {
    lVar8 = lVar8 + (longlong)(int)lVar10 * 0x30;
    uVar25 = uVar24;
    do {
      uVar20 = (uint)uVar24;
      uVar19 = 0;
      if ((int)uVar20 < iVar14) {
        uVar19 = ~uVar20 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      puVar22 = (undefined4 *)(*(longlong *)((param_3->AllocatorInstance).Data + uVar25) + 0x30);
      if (((*(undefined4 **)(lVar8 + -0x10) <= puVar22) &&
          (puVar22 < *(undefined4 **)(lVar8 + -0x10) + *(int *)(lVar8 + -4))) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar14 = *(int *)(lVar8 + -8);
      if (iVar14 == *(int *)(lVar8 + -4)) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)(lVar8 + -0x10),(int *)(lVar8 + -4));
      }
      *(int *)(lVar8 + -8) = iVar14 + 1;
      uVar24 = (ulonglong)(uVar20 + 1);
      uVar25 = uVar25 + 8;
      *(undefined4 *)(*(longlong *)(lVar8 + -0x10) + (longlong)iVar14 * 4) = *puVar22;
      iVar14 = param_3->ArrayNum;
      pTVar26 = local_90;
    } while ((int)(uVar20 + 1) < iVar14);
  }
  uVar19 = 0;
  if ((int)uVar13 < pTVar26->ArrayNum) {
    uVar19 = ~uVar13 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  auVar23 = (uchar  [8])
            ((ulonglong)(*(int *)((pTVar26->AllocatorInstance).Data + local_88 + 0x14) * 8 + 0x30) +
            (longlong)*local_80 * 0x30);
  if (auVar23 != (uchar  [8])0x0) {
    FVar16 = StatPtr_STAT_AI_EQS_InstanceMemory;
    if (StatPtr_STAT_AI_EQS_InstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
      pFVar15 = ::FName::FName(local_48,"STAT_AI_EQS_InstanceMemory");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,*pFVar15,
                          L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                          L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar7 = *(FName *)FVar16;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar17 == (FThreadStats *)0x0) {
        pFVar18 = FThreadStatsPool::Get();
        pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
      }
      local_60.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
      local_78 = FVar7;
      local_60.StatData.Pad = auVar23;
      local_60.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar17,&local_60);
      FStatsTrace::Add(&local_78,(long64)auVar23);
      if (pFVar17->ScopeCount == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  return;
}

// CreateQueryInstance @ 146f3d960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146f3de1c) */
/* WARNING: Removing unreachable block (ram,0x000146f3de28) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TSharedPtr<FEnvQueryInstance,1> * __thiscall
UEnvQueryManager::CreateQueryInstance
          (UEnvQueryManager *this,TSharedPtr<FEnvQueryInstance,1> *__return_storage_ptr__,
          UEnvQuery *param_1,Type param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UEnvQueryTest>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FEnvQueryInstanceCache,TSizedDefaultAllocator<32>_> *pTVar3;
  FName FVar4;
  UObject *pUVar5;
  void *pvVar6;
  UEnvQueryTest *this_00;
  code *pcVar7;
  UEnvQueryManager *pUVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  FString *pFVar15;
  FName *pFVar16;
  TSharedPtr<FEnvQueryInstance,1> *pTVar17;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_LoadTime> FVar18;
  FName FVar19;
  UObject *pUVar20;
  UEnvQueryOption *pUVar21;
  FEnvQueryInstance *pFVar22;
  FEnvQueryInstance *pFVar23;
  FEnvQueryInstance *pFVar24;
  UPackage *pUVar25;
  int iVar26;
  FScriptContainerElement *pFVar27;
  UEnvQueryGenerator *pUVar28;
  longlong lVar29;
  ulonglong uVar30;
  FName FVar31;
  uint uVar32;
  uint uVar33;
  longlong lVar34;
  byte bVar35;
  ulonglong uVar36;
  TArray<UEnvQueryTest_*,TSizedDefaultAllocator<32>_> *pTVar37;
  undefined1 auStackY_598 [32];
  FIdentityFunctor local_538;
  uint local_534;
  undefined1 local_530 [8];
  undefined1 local_528 [8];
  UObject *local_520;
  ForAnyElementType local_518;
  uint local_510;
  int local_50c;
  Type local_508;
  uint local_504;
  uint local_500;
  int local_4fc;
  UEnvQueryManager *local_4f8;
  undefined1 local_4f0 [8];
  TArray<UEnvQueryTest_*,TSizedDefaultAllocator<32>_> *local_4e8;
  FName local_4e0;
  longlong local_4d8;
  UEnvQueryOption *local_4d0;
  UObject *local_4c8;
  UObject *local_4c0;
  UEnvQueryGenerator *local_4b8;
  UObject *local_4b0;
  FScriptContainerElement *local_4a8;
  undefined4 local_4a0 [2];
  UObject *local_498;
  FName local_490;
  FColor_u_0 local_488 [2];
  FString local_480;
  FName local_470;
  undefined8 local_468;
  undefined8 local_460;
  longlong local_458;
  FName local_450;
  FName local_448;
  undefined8 local_440;
  TSharedPtr<FEnvQueryInstance,1> *local_438;
  FString local_430;
  FName local_420;
  FString local_410;
  FString local_400;
  FName local_3f0;
  FName local_3e8;
  FName local_3e0;
  FName local_3d8;
  FName local_3d0;
  FName local_3c8;
  FName local_3c0;
  FName local_3b8;
  FName local_3b0;
  FName local_3a8;
  FName local_3a0;
  FName local_398;
  FName local_390;
  TStatIdData *local_388;
  UObject *local_380;
  UObject *local_378;
  FName local_370;
  TArray<UEnvQueryTest_*,TSizedDefaultAllocator<32>_> local_368;
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
  FName *local_2b8;
  undefined4 *local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined1 local_298 [16];
  FName local_288;
  FName local_280;
  FName local_278;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  UObject *local_220;
  FEnvQueryInstance local_218;
  FName local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_598;
  uVar30 = 0;
  local_4a0[0] = 0;
  if (param_1 == (UEnvQuery *)0x0) {
LAB_146f3f461:
    __return_storage_ptr__->Object = (FEnvQueryInstance *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  local_508 = param_2;
  local_4f8 = this;
  local_438 = __return_storage_ptr__;
  if ((param_1->Options).ArrayNum == 0) {
    if (FVisualLogger::bIsRecording != 0) {
      local_3a8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_3a8,&local_2d8);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogEQS.field_0x4,Warning,
                 L"Query [%s] doesn\'t have any valid options!");
      if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
      }
    }
    if (2 < (byte)LogEQS._0_1_) {
      local_3a0 = (FName)param_1->_padding_;
      ::FName::ToString(&local_3a0,&local_2c8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
      if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_146f3f461;
  }
  pFVar15 = UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&local_270,(UObject *)0x0,None);
  iVar14 = (pFVar15->Data).ArrayNum;
  iVar26 = iVar14 + -1;
  if (iVar14 == 0) {
    iVar26 = 0;
  }
  pFVar16 = ::FName::FName(&local_280,iVar26,(wchar_t *)(pFVar15->Data).AllocatorInstance.Data,
                           FNAME_Add);
  FVar4 = *pFVar16;
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  uVar36 = uVar30;
  if (0 < (this->InstanceCache).ArrayNum) {
    do {
      uVar32 = (uint)uVar30;
      uVar12 = 0;
      if ((int)uVar32 < (this->InstanceCache).ArrayNum) {
        uVar12 = ~uVar32 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar17 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
        return pTVar17;
      }
      if (*(FName *)((this->InstanceCache).AllocatorInstance.Data + uVar36 + 0x1c0) == FVar4) {
        uVar12 = 0;
        if ((int)uVar32 < (this->InstanceCache).ArrayNum) {
          uVar12 = ~uVar32 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar17 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
          return pTVar17;
        }
        if (*(Type *)((this->InstanceCache).AllocatorInstance.Data + uVar36 + 0x138) == local_508) {
          uVar12 = 0;
          if ((int)uVar32 < (this->InstanceCache).ArrayNum) {
            uVar12 = ~uVar32 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            pTVar17 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
            return pTVar17;
          }
          FVar19 = (FName)((longlong)(this->InstanceCache).AllocatorInstance.Data +
                          (longlong)(int)uVar32 * 0x1c8 + 8);
          if (FVar19 != (FName)0x0) goto LAB_146f3ed0f;
          break;
        }
      }
      uVar30 = (ulonglong)(uVar32 + 1);
      uVar36 = uVar36 + 0x1c8;
    } while ((int)(uVar32 + 1) < (this->InstanceCache).ArrayNum);
  }
  FVar18 = StatPtr_STAT_AI_EQS_LoadTime;
  if (StatPtr_STAT_AI_EQS_LoadTime == (FThreadSafeStaticStat<FStat_STAT_AI_EQS_LoadTime>)0x0) {
    pFVar16 = ::FName::FName(&local_278,"STAT_AI_EQS_LoadTime");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_LoadTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_LoadTime,*pFVar16,
                        L"Load Time","STATGROUP_AI_EQS","STATCAT_Advanced",L"Environment Query",true
                        ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar31 = *(FName *)FVar18;
  bVar35 = 0;
  local_420.ComparisonIndex.Value = 0;
  local_420.Number = 0;
  local_538 = (FIdentityFunctor)0x0;
  if ((FVar31.ComparisonIndex.Value.Value != 0) || (FVar31.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_488[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_488[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar35 = 1;
      local_538 = (FIdentityFunctor)0x1;
      if (-1 < CpuChannel->Enabled) {
        local_470.ComparisonIndex.Value = FVar31.ComparisonIndex.Value.Value;
        local_470.Number = FVar31.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_470,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryManager.cpp"
                   ,0x325);
        bVar35 = 3;
        local_538 = (FIdentityFunctor)0x3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_4e0 = FVar31;
      local_490 = FVar31;
      FThreadStats::AddMessage(FVar31,CycleScopeStart);
      local_538 = (FIdentityFunctor)(bVar35 | 4);
      goto LAB_146f3dcc2;
    }
  }
  local_490 = local_420;
  FVar31 = local_420;
LAB_146f3dcc2:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (Z_Registration_Info_UEnum_EEnvQueryRunMode.OuterSingleton == (UEnum *)0x0) {
      pUVar25 = Z_Construct_UPackage__Script_AIModule();
      Z_Registration_Info_UEnum_EEnvQueryRunMode.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryRunMode,(UObject *)pUVar25,
                         L"EEnvQueryRunMode");
    }
    RunModeEnum = Z_Registration_Info_UEnum_EEnvQueryRunMode.OuterSingleton;
    _Init_thread_footer(&::_TSS0);
  }
  if (RunModeEnum == (UEnum *)0x0) {
    FVar19 = MakeUniqueObjectName
                       ((UObject *)(local_298 + 8),(UClass *)this,(FName)param_1->_padding_,
                        (EUniqueObjectNameOptions)param_1->_padding_);
    ::FName::ToString((FName *)FVar19,&local_260);
    ::FString::PrintfImpl(&local_430,L"%s_%d");
    iVar14 = local_430.Data.ArrayNum;
    bVar11 = false;
    bVar9 = false;
    local_4a8 = local_430.Data.AllocatorInstance.Data;
    local_430.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_430.Data.ArrayNum = 0;
    local_430.Data.ArrayMax = 0;
    if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Data.AllocatorInstance.Data);
    }
  }
  else {
    UEnum::GetNameStringByValue(RunModeEnum,&local_240,(longlong)(int)local_508);
    FVar19 = MakeUniqueObjectName
                       ((UObject *)local_298,(UClass *)this,(FName)param_1->_padding_,
                        (EUniqueObjectNameOptions)param_1->_padding_);
    ::FName::ToString((FName *)FVar19,&local_250);
    ::FString::PrintfImpl(&local_480,L"%s_%s");
    iVar14 = local_480.Data.ArrayNum;
    local_4a8 = local_480.Data.AllocatorInstance.Data;
    local_480.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_480.Data.ArrayNum = 0;
    local_480.Data.ArrayMax = 0;
    bVar11 = true;
    bVar9 = true;
  }
  if ((bVar9) && (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
  if ((bVar11) && (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_240.Data.AllocatorInstance.Data);
  }
  pFVar27 = (FScriptContainerElement *)L"";
  if (iVar14 != 0) {
    pFVar27 = local_4a8;
  }
  pFVar16 = ::FName::FName(&local_288,(wchar_t *)pFVar27);
  pUVar20 = StaticDuplicateObject
                      ((UObject *)param_1,(UObject *)this,*pFVar16,
                       RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                       RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                       RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                       RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                       RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                       RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                       RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                       RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                       RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|
                       RF_Public,(UClass *)0x0,Normal,
                       PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                       ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                       AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                       ReachabilityFlag0);
  local_220 = (UObject *)0x0;
  local_520 = pUVar20;
  FEnvQueryInstance::FEnvQueryInstance(&local_218);
  local_60 = FVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar20);
  }
  local_218.UniqueName.ComparisonIndex.Value = *(uint *)&pUVar20->field_0x18;
  local_218.UniqueName.Number = *(uint *)&pUVar20->field_0x1c;
  local_398.ComparisonIndex.Value = *(uint *)&pUVar20[1].field_0x8;
  local_398.Number = *(uint *)&pUVar20[1].field_0xc;
  local_220 = pUVar20;
  pFVar15 = ::FName::ToString(&local_398,&local_230);
  if (&local_218.QueryName != pFVar15) {
    if (local_218.QueryName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.QueryName.Data.AllocatorInstance.Data);
    }
    local_218.QueryName.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
    (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.QueryName.Data.ArrayNum = (pFVar15->Data).ArrayNum;
    local_218.QueryName.Data.ArrayMax = (pFVar15->Data).ArrayMax;
    (pFVar15->Data).ArrayNum = 0;
    (pFVar15->Data).ArrayMax = 0;
  }
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  local_218.Mode = local_508;
  local_390 = local_218.UniqueName;
  local_2b8 = &local_390;
  local_2b0 = local_4a0;
  local_2a8 = local_530;
  local_2a0 = local_528;
  local_528[0] = 1;
  local_530[0] = 1;
  local_4a0[0] = 2;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_AI_EQS>'::__l2::<lambda_1>::operator()
            (&local_2b8);
  pTVar3 = &this->InstanceCache;
  pFVar27 = (pTVar3->AllocatorInstance).Data;
  local_218.StatId.StatIdPtr = local_388;
  if (((pFVar27 <= (FScriptContainerElement *)&local_220) &&
      ((FScriptContainerElement *)&local_220 <
       pFVar27 + (longlong)(this->InstanceCache).ArrayMax * 0x1c8)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar17 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
    return pTVar17;
  }
  uVar12 = (this->InstanceCache).ArrayNum;
  piVar1 = &(this->InstanceCache).ArrayMax;
  if (uVar12 == *piVar1) {
    uVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1c8,8,&pTVar3->AllocatorInstance,piVar1);
  }
  pFVar27 = (pTVar3->AllocatorInstance).Data;
  (this->InstanceCache).ArrayNum = uVar12 + 1;
  lVar34 = (longlong)(int)uVar12 * 0x1c8;
  *(UObject **)(pFVar27 + lVar34) = local_220;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_220 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_220);
  }
  FEnvQueryInstance::FEnvQueryInstance((FEnvQueryInstance *)(pFVar27 + lVar34 + 8),&local_218);
  *(FName *)(pFVar27 + lVar34 + 0x1c0) = local_60;
  uVar32 = 0;
  if ((int)uVar12 < (this->InstanceCache).ArrayNum) {
    uVar32 = ~uVar12 >> 0x1f;
  }
  if ((uVar32 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar17 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
    return pTVar17;
  }
  FVar19 = (FName)((longlong)(this->InstanceCache).AllocatorInstance.Data + lVar34 + 8);
  local_4e0 = FVar19;
  FEnvQueryInstance::~FEnvQueryInstance(&local_218);
  local_4fc = 0;
  local_534 = 0;
  if (0 < *(int *)&local_520[1].field_0x18) {
    local_4d8 = 0;
    pUVar20 = local_520;
    do {
      lVar34 = local_4d8;
      uVar32 = ~local_534 >> 0x1f;
      uVar12 = 0;
      if ((int)local_534 < *(int *)&pUVar20[1].field_0x18) {
        uVar12 = uVar32;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar17 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
        return pTVar17;
      }
      pUVar5 = *(UObject **)(*(longlong *)&pUVar20[1].field_0x10 + lVar34 * 8);
      local_380 = pUVar5;
      if (pUVar5 == (UObject *)0x0) {
        if (FVisualLogger::bIsRecording != 0) {
          local_3b8.ComparisonIndex.Value = *(uint *)&pUVar20->field_0x18;
          local_3b8.Number = *(uint *)&pUVar20->field_0x1c;
          ::FName::ToString(&local_3b8,&local_2f8);
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)local_4f8,(FName *)&LogEQS.field_0x4,Error,
                     L"Trying to spawn a query with broken Template (null option): %s, option %d");
          if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
          }
        }
        if (1 < (byte)LogEQS._0_1_) {
          local_3b0.ComparisonIndex.Value = *(uint *)&pUVar20->field_0x18;
          local_3b0.Number = *(uint *)&pUVar20->field_0x1c;
          ::FName::ToString(&local_3b0,&local_2e8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
          if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
          }
        }
LAB_146f3f1c0:
        uVar12 = 0;
        if ((int)local_534 < *(int *)&pUVar20[1].field_0x18) {
          uVar12 = uVar32;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar17 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
          return pTVar17;
        }
        pvVar6 = (void *)(*(longlong *)&pUVar20[1].field_0x10 + (longlong)(int)local_534 * 8);
        iVar14 = *(int *)&pUVar20[1].field_0x18 + ~local_534;
        if (iVar14 != 0) {
          memmove(pvVar6,(void *)((longlong)pvVar6 + 8),(longlong)iVar14 << 3);
        }
        *(int *)&pUVar20[1].field_0x18 = *(int *)&pUVar20[1].field_0x18 + -1;
        local_534 = local_534 - 1;
        local_4d8 = local_4d8 + -1;
      }
      else {
        if ((*(longlong **)(pUVar5 + 1) == (longlong *)0x0) ||
           (cVar10 = (**(code **)(**(longlong **)(pUVar5 + 1) + 0x2d8))(), pUVar8 = local_4f8,
           cVar10 == '\0')) {
          if (*(longlong *)(pUVar5 + 1) == 0) {
            if (FVisualLogger::bIsRecording != 0) {
              local_3d8.ComparisonIndex.Value = *(uint *)&pUVar20->field_0x18;
              local_3d8.Number = *(uint *)&pUVar20->field_0x1c;
              ::FName::ToString(&local_3d8,&local_338);
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)local_4f8,(FName *)&LogEQS.field_0x4,Error,
                         L"Trying to spawn a query with broken Template (generator:MISSING): %s, option %d"
                        );
              if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_338.Data.AllocatorInstance.Data);
              }
            }
            if (1 < (byte)LogEQS._0_1_) {
              local_3d0.ComparisonIndex.Value = *(uint *)&pUVar20->field_0x18;
              local_3d0.Number = *(uint *)&pUVar20->field_0x1c;
              ::FName::ToString(&local_3d0,&local_328);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
              if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_328.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            if (FVisualLogger::bIsRecording != 0) {
              local_3c8.ComparisonIndex.Value = *(uint *)&pUVar20->field_0x18;
              local_3c8.Number = *(uint *)&pUVar20->field_0x1c;
              ::FName::ToString(&local_3c8,&local_318);
              if (*(longlong *)(*(longlong *)(pUVar5 + 1) + 0x40) != 0) {
                UEnvQueryItemType::StaticClass();
              }
              (**(code **)(**(longlong **)(pUVar5 + 1) + 0x2d8))();
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)local_4f8,(FName *)&LogEQS.field_0x4,Error,
                         L"Trying to spawn a query with broken Template (generator:%s itemType:%s): %s, option %d"
                        );
              pUVar20 = local_520;
              if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_318.Data.AllocatorInstance.Data);
                pUVar20 = local_520;
              }
            }
            if (1 < (byte)LogEQS._0_1_) {
              local_3c0.ComparisonIndex.Value = *(uint *)&pUVar20->field_0x18;
              local_3c0.Number = *(uint *)&pUVar20->field_0x1c;
              ::FName::ToString(&local_3c0,&local_308);
              if (*(longlong *)(*(longlong *)(pUVar5 + 1) + 0x40) != 0) {
                UEnvQueryItemType::StaticClass();
              }
              (**(code **)(**(longlong **)(pUVar5 + 1) + 0x2d8))();
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
              pUVar20 = local_520;
              if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_308.Data.AllocatorInstance.Data);
                pUVar20 = local_520;
              }
            }
          }
          goto LAB_146f3f1c0;
        }
        local_468 = 0;
        pUVar21 = (UEnvQueryOption *)
                  StaticDuplicateObject
                            (pUVar5,(UObject *)local_4f8,(FName)0x0,
                             RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                             RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                             RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                             RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient
                             |RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|
                             RF_FinishDestroyed|RF_BeginDestroyed|RF_NewerVersionExists|
                             RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|
                             RF_NeedInitialization|RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|
                             RF_ArchetypeObject|RF_ClassDefaultObject|RF_Transactional|
                             RF_MarkAsNative|RF_Standalone|RF_Public,(UClass *)0x0,Normal,
                             PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native
                             |ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport
                             |AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                             ReachabilityFlag0);
        local_460 = 0;
        local_4d0 = pUVar21;
        local_4b8 = (UEnvQueryGenerator *)
                    StaticDuplicateObject
                              (*(UObject **)(pUVar5 + 1),(UObject *)pUVar8,(FName)0x0,
                               RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                               RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                               RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient
                               |RF_InheritableComponentTemplate|RF_LoadCompleted|
                               RF_TextExportTransient|RF_WasLoaded|RF_DefaultSubObject|
                               RF_BeingRegenerated|RF_FinishDestroyed|RF_BeginDestroyed|
                               RF_NewerVersionExists|RF_NeedPostLoadSubobjects|RF_NeedPostLoad|
                               RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|RF_TagGarbageTemp|
                               RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                               RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|
                               RF_Public,(UClass *)0x0,Normal,
                               PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|
                               Native|ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|
                               LoaderImport|AutoRTFMConstructionAborted|ReachabilityFlag2|
                               ReachabilityFlag1|ReachabilityFlag0);
        uVar12 = 0;
        if ((int)local_534 < *(int *)&local_520[1].field_0x18) {
          uVar12 = uVar32;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar17 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
          return pTVar17;
        }
        lVar29 = *(longlong *)&local_520[1].field_0x10;
        lVar34 = local_4d8 * 8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar21 != (UEnvQueryOption *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar21);
        }
        pUVar28 = local_4b8;
        *(UEnvQueryOption **)(lVar29 + lVar34) = pUVar21;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_4b8 != (UEnvQueryGenerator *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_4b8);
        }
        (pUVar21->Generator).field0_0x0.DebugPtr = pUVar28;
        iVar14 = *(int *)&pUVar5[1].field_0x10;
        if (iVar14 == 0) {
          local_368.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_368.ArrayNum = 0;
          local_368.ArrayMax = 0;
          CreateOptionInstance(pUVar8,pUVar21,local_4fc,&local_368,(FEnvQueryInstance *)local_4e0);
          pUVar20 = local_520;
        }
        else {
          uVar12 = 0;
          uVar30 = 0;
          if (1 < iVar14) {
            uVar32 = uVar12;
            if ((int)(iVar14 - 1U) < iVar14) {
              uVar32 = ~(iVar14 - 1U) >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              pTVar17 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
              return pTVar17;
            }
            iVar14 = *(int *)&pUVar5[1].field_0x10;
            if (*(longlong *)(*(longlong *)&pUVar5[1].field_0x8 + ((longlong)iVar14 + -1) * 8) != 0)
            {
              uVar32 = uVar12;
              if ((int)(iVar14 - 1U) < iVar14) {
                uVar32 = ~(iVar14 - 1U) >> 0x1f;
              }
              if ((uVar32 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar7 = (code *)swi(3);
                pTVar17 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
                return pTVar17;
              }
              if ((*(int *)(*(longlong *)
                             (*(longlong *)&pUVar5[1].field_0x8 + -8 +
                             (longlong)*(int *)&pUVar5[1].field_0x10 * 8) + 0x30) == 0) &&
                 (pUVar28 = local_4b8, uVar36 = uVar30, uVar32 = uVar12,
                 0 < *(int *)&pUVar5[1].field_0x10)) {
                do {
                  uVar33 = uVar12;
                  if ((int)uVar32 < *(int *)&pUVar5[1].field_0x10) {
                    uVar33 = ~uVar32 >> 0x1f;
                  }
                  if ((uVar33 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    pTVar17 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
                    return pTVar17;
                  }
                  if (*(longlong *)(uVar36 + *(longlong *)&pUVar5[1].field_0x8) != 0) {
                    uVar33 = uVar12;
                    if ((int)uVar32 < *(int *)&pUVar5[1].field_0x10) {
                      uVar33 = ~uVar32 >> 0x1f;
                    }
                    if ((uVar33 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar7 = (code *)swi(3);
                      pTVar17 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
                      return pTVar17;
                    }
                    *(uint *)(*(longlong *)(*(longlong *)&pUVar5[1].field_0x8 + uVar36) + 0x30) =
                         uVar32;
                  }
                  uVar32 = uVar32 + 1;
                  pUVar28 = local_4b8;
                  uVar36 = uVar36 + 8;
                } while ((int)uVar32 < *(int *)&pUVar5[1].field_0x10);
              }
            }
          }
          if ((local_508 != SingleResult) || (bVar9 = true, pUVar28->bAutoSortTests == 0)) {
            bVar9 = false;
          }
          local_4e8 = (TArray<UEnvQueryTest_*,TSizedDefaultAllocator<32>_> *)
                      ((ulonglong)local_4e8 & 0xffffffff00000000);
          local_518.Data = (FScriptContainerElement *)0x0;
          local_510 = *(uint *)&pUVar5[1].field_0x10;
          lVar34 = (longlong)(int)local_510;
          pvVar6 = *(void **)&pUVar5[1].field_0x8;
          local_498 = (UObject *)0x0;
          local_504 = 0xffffffff;
          if (local_510 == 0) {
            local_50c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_510,0,&local_518,local_510,&local_50c);
            memcpy(local_518.Data,pvVar6,lVar34 << 3);
          }
          pUVar20 = *(UObject **)(*(longlong *)(pUVar5 + 1) + 0x40);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar20);
          }
          uVar12 = local_510 - 1;
          uVar32 = 0xffffffff;
          local_500 = uVar12;
          if (-1 < (int)uVar12) {
            lVar29 = (longlong)(int)uVar12;
            lVar34 = lVar29 * 8;
            do {
              uVar33 = ~uVar12;
              uVar32 = 0;
              if ((int)uVar12 < (int)local_510) {
                uVar32 = uVar33 >> 0x1f;
              }
              local_500 = uVar12;
              local_458 = lVar34;
              if ((uVar32 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                pTVar17 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
                return pTVar17;
              }
              this_00 = *(UEnvQueryTest **)(local_518.Data + lVar34);
              if (this_00 == (UEnvQueryTest *)0x0) {
LAB_146f3e654:
                if (FVisualLogger::bIsRecording != 0) {
                  if (this_00 == (UEnvQueryTest *)0x0) {
                    ::FString::FString(&local_410,L"None");
                  }
                  else {
                    local_370 = (FName)this_00->_padding_;
                    ::FName::ToString(&local_370,&local_410);
                  }
                  local_3f0.ComparisonIndex.Value = *(uint *)&local_520->field_0x18;
                  local_3f0.Number = *(uint *)&local_520->field_0x1c;
                  ::FName::ToString(&local_3f0,&local_358);
                  FVisualLogger::CategorizedLogfImpl
                            ((UObject *)local_4f8,(FName *)&LogEQS.field_0x4,Warning,
                             L"Query [%s] can\'t use test [%s] in option %d [%s], removing it");
                  if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_358.Data.AllocatorInstance.Data);
                  }
                  uVar12 = local_500;
                  if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_410.Data.AllocatorInstance.Data);
                    uVar12 = local_500;
                  }
                }
                if (2 < (byte)LogEQS._0_1_) {
                  if (this_00 == (UEnvQueryTest *)0x0) {
                    ::FString::FString(&local_400,L"None");
                  }
                  else {
                    local_3e8 = (FName)this_00->_padding_;
                    ::FName::ToString(&local_3e8,&local_400);
                  }
                  local_3e0.ComparisonIndex.Value = *(uint *)&local_520->field_0x18;
                  local_3e0.Number = *(uint *)&local_520->field_0x1c;
                  ::FName::ToString(&local_3e0,&local_348);
                  UE::Logging::Private::BasicLog<3>
                            ((FStaticBasicLogRecord *)&PTR_u_Query___s__can__1514f3600,
                             (FLogCategoryBase *)&LogEQS);
                  if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_348.Data.AllocatorInstance.Data);
                  }
                  uVar12 = local_500;
                  if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_400.Data.AllocatorInstance.Data);
                    uVar12 = local_500;
                  }
                }
                uVar32 = 0;
                if ((int)uVar12 < (int)local_510) {
                  uVar32 = uVar33 >> 0x1f;
                }
                if ((uVar32 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  pTVar17 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
                  return pTVar17;
                }
                iVar14 = (local_510 - uVar12) + -1;
                if (iVar14 != 0) {
                  memmove(local_518.Data + lVar29 * 8,local_518.Data + lVar29 * 8 + 8,
                          (longlong)iVar14 << 3);
                }
                local_510 = local_510 - 1;
                uVar30 = (ulonglong)local_4e8 & 0xffffffff;
                if (local_504 != 0xffffffff) {
                  local_504 = local_504 - 1;
                }
              }
              else {
                local_378 = pUVar20;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar20 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(pUVar20);
                }
                bVar11 = UEnvQueryTest::IsSupportedItem
                                   (this_00,(TSubclassOf<UEnvQueryItemType>)&local_378);
                if (!bVar11) goto LAB_146f3e654;
                if ((bVar9) && ((this_00->TestPurpose).Value == '\0')) {
                  bVar35 = (this_00->Cost).Value;
                  if (((int)uVar30 < (int)(uint)bVar35) || (local_504 == 0xffffffff)) {
                    uVar30 = (ulonglong)(uint)bVar35;
                    local_4e8 = (TArray<UEnvQueryTest_*,TSizedDefaultAllocator<32>_> *)
                                CONCAT44(local_4e8._4_4_,(uint)bVar35);
                    local_504 = uVar12;
                  }
                }
              }
              uVar12 = uVar12 - 1;
              lVar34 = local_458 + -8;
              lVar29 = lVar29 + -1;
              FVar31 = local_490;
              uVar32 = local_504;
              local_500 = uVar12;
              local_458 = lVar34;
            } while (-1 < (int)uVar12);
          }
          pTVar37 = (TArray<UEnvQueryTest_*,TSizedDefaultAllocator<32>_> *)&local_4d0->Tests;
          local_4e8 = pTVar37;
          if ((int)local_510 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)local_510);
          }
          piVar1 = &(local_4d0->Tests).ArrayMax;
          uVar12 = 0;
          (local_4d0->Tests).ArrayNum = 0;
          if ((local_4d0->Tests).ArrayMax < (int)local_510) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_510,(ForAnyElementType *)pTVar37,0,piVar1);
          }
          pUVar21 = local_4d0;
          pUVar8 = local_4f8;
          if ((bVar9) && (uVar32 != 0xffffffff)) {
            local_450.ComparisonIndex.Value = 0;
            local_450.Number = 0;
            uVar12 = 0;
            if ((int)uVar32 < (int)local_510) {
              uVar12 = ~uVar32 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              pTVar17 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
              return pTVar17;
            }
            local_498 = StaticDuplicateObject
                                  (*(UObject **)(local_518.Data + (longlong)(int)uVar32 * 8),
                                   (UObject *)local_4f8,local_450,
                                   RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                                   RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                                   RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|
                                   RF_DuplicateTransient|RF_InheritableComponentTemplate|
                                   RF_LoadCompleted|RF_TextExportTransient|RF_WasLoaded|
                                   RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                                   RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects
                                   |RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|
                                   RF_NeedInitialization|RF_TagGarbageTemp|RF_MarkAsRootSet|
                                   RF_Transient|RF_ArchetypeObject|RF_ClassDefaultObject|
                                   RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public,
                                   (UClass *)0x0,Normal,
                                   PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|
                                   Native|ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|
                                   LoaderImport|AutoRTFMConstructionAborted|ReachabilityFlag2|
                                   ReachabilityFlag1|ReachabilityFlag0);
            pUVar21 = local_4d0;
            pUVar8 = local_4f8;
            uVar12 = 0;
            pTVar37 = local_4e8;
            uVar33 = local_510;
            if (0 < (int)local_510) {
              lVar34 = 0;
              do {
                if (uVar12 != uVar32) {
                  local_448.ComparisonIndex.Value = 0;
                  local_448.Number = 0;
                  uVar13 = 0;
                  if ((int)uVar12 < (int)uVar33) {
                    uVar13 = ~uVar12 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar7 = (code *)swi(3);
                    pTVar17 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
                    return pTVar17;
                  }
                  local_4c8 = StaticDuplicateObject
                                        (*(UObject **)(local_518.Data + lVar34),(UObject *)pUVar8,
                                         local_448,
                                         RF_AllocatedInSharedPage|RF_MirroredGarbage|
                                         RF_MigratingAsset|RF_HasExternalPackage|RF_WillBeLoaded|
                                         RF_ImmutableDefaultObject|RF_NonPIEDuplicateTransient|
                                         RF_StrongRefOnFrame|RF_DuplicateTransient|
                                         RF_InheritableComponentTemplate|RF_LoadCompleted|
                                         RF_TextExportTransient|RF_WasLoaded|RF_DefaultSubObject|
                                         RF_BeingRegenerated|RF_FinishDestroyed|RF_BeginDestroyed|
                                         RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                                         RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|
                                         RF_NeedInitialization|RF_TagGarbageTemp|RF_MarkAsRootSet|
                                         RF_Transient|RF_ArchetypeObject|RF_ClassDefaultObject|
                                         RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public,
                                         (UClass *)0x0,Normal,
                                         PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|
                                         Async|Native|ClusterRoot|ReachableInCluster|
                                         AsyncLoadingPhase1|Garbage|LoaderImport|
                                         AutoRTFMConstructionAborted|ReachabilityFlag2|
                                         ReachabilityFlag1|ReachabilityFlag0);
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (local_4c8 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(local_4c8);
                  }
                  pFVar27 = (pUVar21->Tests).AllocatorInstance.Data;
                  if (((pFVar27 <= (FScriptContainerElement *)&local_4c8) &&
                      ((FScriptContainerElement *)&local_4c8 <
                       pFVar27 + (longlong)(pUVar21->Tests).ArrayMax * 8)) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar11)) {
                    pcVar7 = (code *)swi(3);
                    pTVar17 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
                    return pTVar17;
                  }
                  iVar14 = (pUVar21->Tests).ArrayNum;
                  if (iVar14 == (pUVar21->Tests).ArrayMax) {
                    iVar14 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&(pUVar21->Tests).AllocatorInstance,piVar1);
                  }
                  pFVar27 = (pUVar21->Tests).AllocatorInstance.Data;
                  (pUVar21->Tests).ArrayNum = iVar14 + 1;
                  *(UObject **)(pFVar27 + (longlong)iVar14 * 8) = local_4c8;
                  uVar33 = local_510;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (local_4c8 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(local_4c8);
                    uVar33 = local_510;
                  }
                }
                uVar12 = uVar12 + 1;
                lVar34 = lVar34 + 8;
                FVar31 = local_490;
                pTVar37 = local_4e8;
              } while ((int)uVar12 < (int)uVar33);
            }
          }
          else {
            uVar33 = local_510;
            if (0 < (int)local_510) {
              pTVar2 = &local_4d0->Tests;
              lVar34 = 0;
              local_440 = 0;
              do {
                uVar32 = 0;
                if ((int)uVar12 < (int)local_510) {
                  uVar32 = ~uVar12 >> 0x1f;
                }
                if ((uVar32 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  pTVar17 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
                  return pTVar17;
                }
                local_4c0 = StaticDuplicateObject
                                      (*(UObject **)(local_518.Data + lVar34),(UObject *)pUVar8,
                                       (FName)0x0,
                                       RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset
                                       |RF_HasExternalPackage|RF_WillBeLoaded|
                                       RF_ImmutableDefaultObject|RF_NonPIEDuplicateTransient|
                                       RF_StrongRefOnFrame|RF_DuplicateTransient|
                                       RF_InheritableComponentTemplate|RF_LoadCompleted|
                                       RF_TextExportTransient|RF_WasLoaded|RF_DefaultSubObject|
                                       RF_BeingRegenerated|RF_FinishDestroyed|RF_BeginDestroyed|
                                       RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                                       RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|
                                       RF_NeedInitialization|RF_TagGarbageTemp|RF_MarkAsRootSet|
                                       RF_Transient|RF_ArchetypeObject|RF_ClassDefaultObject|
                                       RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public,
                                       (UClass *)0x0,Normal,
                                       PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|
                                       Async|Native|ClusterRoot|ReachableInCluster|
                                       AsyncLoadingPhase1|Garbage|LoaderImport|
                                       AutoRTFMConstructionAborted|ReachabilityFlag2|
                                       ReachabilityFlag1|ReachabilityFlag0);
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_4c0 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(local_4c0);
                }
                pFVar27 = (pTVar2->AllocatorInstance).Data;
                if (((pFVar27 <= (FScriptContainerElement *)&local_4c0) &&
                    ((FScriptContainerElement *)&local_4c0 <
                     pFVar27 + (longlong)(pUVar21->Tests).ArrayMax * 8)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  pTVar17 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
                  return pTVar17;
                }
                iVar14 = (pUVar21->Tests).ArrayNum;
                if (iVar14 == (pUVar21->Tests).ArrayMax) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&pTVar2->AllocatorInstance,piVar1);
                }
                pFVar27 = (pTVar2->AllocatorInstance).Data;
                (pUVar21->Tests).ArrayNum = iVar14 + 1;
                *(UObject **)(pFVar27 + (longlong)iVar14 * 8) = local_4c0;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_4c0 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(local_4c0);
                }
                uVar12 = uVar12 + 1;
                lVar34 = lVar34 + 8;
                FVar31 = local_490;
                pTVar37 = local_4e8;
                uVar33 = local_510;
              } while ((int)uVar12 < (int)local_510);
            }
          }
          pUVar20 = local_498;
          if (((uVar33 != 0) && (local_4b8->bAutoSortTests != 0)) &&
             ((AlgoImpl::
               StableSortInternal<TObjectPtr<UEnvQueryTest>,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UEnvQueryTest>,EnvQueryTestSort::FAllMatching>_>
                         ((TObjectPtr<UEnvQueryTest> *)(local_4d0->Tests).AllocatorInstance.Data,
                          (local_4d0->Tests).ArrayNum,local_538,(FAllMatching *)local_4f0),
              pUVar21 = local_4d0, bVar9 && (pUVar20 != (UObject *)0x0)))) {
            local_4b0 = pUVar20;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar20);
            }
            pFVar27 = (pUVar21->Tests).AllocatorInstance.Data;
            if (((pFVar27 <= (FScriptContainerElement *)&local_4b0) &&
                ((FScriptContainerElement *)&local_4b0 <
                 pFVar27 + (longlong)(pUVar21->Tests).ArrayMax * 8)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar7 = (code *)swi(3);
              pTVar17 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
              return pTVar17;
            }
            iVar14 = (pUVar21->Tests).ArrayNum;
            if (iVar14 == (pUVar21->Tests).ArrayMax) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&(pUVar21->Tests).AllocatorInstance,piVar1);
            }
            pFVar27 = (pUVar21->Tests).AllocatorInstance.Data;
            (pUVar21->Tests).ArrayNum = iVar14 + 1;
            *(UObject **)(pFVar27 + (longlong)iVar14 * 8) = local_4b0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_4b0 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_4b0);
            }
          }
          CreateOptionInstance(local_4f8,local_4d0,local_4fc,pTVar37,(FEnvQueryInstance *)local_4e0)
          ;
          pUVar20 = local_520;
          if (local_518.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_518.Data);
            pUVar20 = local_520;
          }
        }
      }
      local_4fc = local_4fc + 1;
      local_534 = local_534 + 1;
      local_4d8 = local_4d8 + 1;
      FVar19 = local_4e0;
    } while ((int)local_534 < *(int *)&pUVar20[1].field_0x18);
  }
  if (local_4a8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8);
  }
  if (((byte)local_538 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (((byte)local_538 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  __return_storage_ptr__ = local_438;
  if (((byte)local_538 & 4) != 0) {
    FThreadStats::AddMessage(FVar31,CycleScopeEnd);
    __return_storage_ptr__ = local_438;
  }
LAB_146f3ed0f:
  pFVar24 = (FEnvQueryInstance *)0x0;
  if (*(int *)((longlong)FVar19 + 0xe0) == 0) {
    __return_storage_ptr__->Object = (FEnvQueryInstance *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pFVar22 = ::operator_new(0x1b8);
  pFVar23 = pFVar24;
  if (pFVar22 != (FEnvQueryInstance *)0x0) {
    pFVar23 = FEnvQueryInstance::FEnvQueryInstance(pFVar22,(FEnvQueryInstance *)FVar19);
  }
  pFVar22 = ::operator_new(0x18);
  if (pFVar22 != (FEnvQueryInstance *)0x0) {
    *(undefined4 *)&pFVar22->_padding_ = 1;
    pFVar22->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFEnvQueryInstance__U__DefaultDeleter_UFEnvQueryInstance___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar22->_padding_ + 4) = 1;
    pFVar22->_padding_ = (longlong)pFVar23;
    pFVar24 = pFVar22;
  }
  __return_storage_ptr__->Object = pFVar23;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar24;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// Exec_Dev @ 146f45f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UEnvQueryManager::Exec_Dev
          (UEnvQueryManager *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  wchar_t *local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res18[0] = param_2;
  bVar1 = FParse::Command(local_res18,L"DumpEnvQueryStats",true);
  if (bVar1) {
    pFVar2 = FPaths::ProjectLogDir(&local_18);
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    FPaths::CreateTempFilename(&local_28,pwVar3,L"EnvQueryStats",L".ue_eqs");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FEQSDebugger::SaveStats(&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return true;
  }
  return false;
}

// FindNamedParam @ 146f498e0

float __thiscall UEnvQueryManager::FindNamedParam(UEnvQueryManager *this,int param_1,FName param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  atomic<int> aVar9;
  TTuple<FName,float> *pTVar10;
  int *piVar11;
  TReferenceControllerBase<1> *pTVar12;
  uint uVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  undefined1 *puVar16;
  float fVar17;
  
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  if (*(int *)&(this->ExternalQueries).field_0x8 != *(int *)&(this->ExternalQueries).field_0x34) {
    puVar16 = *(undefined1 **)&(this->ExternalQueries).field_0x40;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->ExternalQueries).field_0x38;
    }
    iVar7 = *(int *)(puVar16 +
                    (ulonglong)(*(int *)&(this->ExternalQueries).field_0x48 - 1U & param_1) * 4);
    if (iVar7 != -1) {
      do {
        piVar11 = (int *)((longlong)iVar7 * 0x20 + *(longlong *)&this->ExternalQueries);
        if (*piVar11 == param_1) {
          pTVar12 = (TReferenceControllerBase<1> *)(piVar11 + 2);
          if (piVar11 == (int *)0x0) {
            pTVar12 = pTVar14;
          }
          if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
            pTVar3 = *(TReferenceControllerBase<1> **)&pTVar12->SharedReferenceCount;
            pTVar15 = pTVar3;
            if (pTVar3 == (TReferenceControllerBase<1> *)0x0) goto LAB_146f49a66;
            aVar5 = pTVar3->SharedReferenceCount;
            goto joined_r0x000146f49a53;
          }
          break;
        }
        iVar7 = piVar11[6];
      } while (iVar7 != -1);
    }
  }
  pTVar12 = pTVar14;
  if (0 < (this->RunningQueries).ArrayNum) {
    do {
      uVar13 = (uint)pTVar14;
      uVar8 = 0;
      if ((int)uVar13 < (this->RunningQueries).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        fVar17 = (float)(*pcVar4)();
        return fVar17;
      }
      pFVar1 = (this->RunningQueries).AllocatorInstance.Data;
      if ((*(longlong *)((longlong)&pTVar12->_padding_ + (longlong)pFVar1) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        fVar17 = (float)(*pcVar4)();
        return fVar17;
      }
      lVar2 = *(longlong *)((longlong)&pTVar12->_padding_ + (longlong)pFVar1);
      if (*(int *)(lVar2 + 0x30) == param_1) {
        if ((lVar2 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar17 = (float)(*pcVar4)();
          return fVar17;
        }
        pTVar10 = TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                          *)(*(longlong *)((longlong)&pTVar12->_padding_ + (longlong)pFVar1) + 0x78)
                         ,param_2);
        if (pTVar10 == (TTuple<FName,float> *)0x0) {
          return 0.0;
        }
        return *(float *)&pTVar10->field_0x8;
      }
      pTVar14 = (TReferenceControllerBase<1> *)(ulonglong)(uVar13 + 1);
      pTVar12 = pTVar12 + 1;
    } while ((int)(uVar13 + 1) < (this->RunningQueries).ArrayNum);
  }
  return 0.0;
  while( true ) {
    LOCK();
    aVar9 = pTVar3->SharedReferenceCount;
    bVar6 = aVar5 == aVar9;
    if (bVar6) {
      pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
      aVar9 = aVar5;
    }
    UNLOCK();
    aVar5 = aVar9;
    if (bVar6) break;
joined_r0x000146f49a53:
    pTVar15 = pTVar14;
    if (aVar5 == (atomic<int>)0x0) goto LAB_146f49a66;
  }
  pTVar15 = pTVar3;
  if ((pTVar12->_padding_ != 0) &&
     (pTVar10 = TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                        *)(pTVar12->_padding_ + 0x78),param_2),
     pTVar10 != (TTuple<FName,float> *)0x0)) {
    fVar17 = *(float *)&pTVar10->field_0x8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    return fVar17;
  }
LAB_146f49a66:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return 0.0;
}

// FindQueryInstance @ 146f4a330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FEnvQueryInstance,1> * __thiscall
UEnvQueryManager::FindQueryInstance
          (UEnvQueryManager *this,TSharedPtr<FEnvQueryInstance,1> *__return_storage_ptr__,
          int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSharedPtr<FEnvQueryInstance,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((param_1 != -1) && (uVar7 = (this->RunningQueries).ArrayNum - 1, -1 < (int)uVar7)) {
    lVar8 = (longlong)(int)uVar7 << 4;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->RunningQueries).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar2)();
        return pTVar5;
      }
      pFVar6 = (this->RunningQueries).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar6 + lVar8) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar2)();
        return pTVar5;
      }
      if (*(int *)(*(longlong *)(pFVar6 + lVar8) + 0x30) == param_1) {
        uVar4 = 0;
        if ((int)uVar7 < (this->RunningQueries).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar2)();
          return pTVar5;
        }
        pFVar6 = (this->RunningQueries).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
        __return_storage_ptr__->Object = *(FEnvQueryInstance **)pFVar6;
        pTVar1 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
        if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
          return __return_storage_ptr__;
        }
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        return __return_storage_ptr__;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  __return_storage_ptr__->Object = (FEnvQueryInstance *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// FindQueryTemplate @ 146f4a4c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UEnvQuery * __thiscall UEnvQueryManager::FindQueryTemplate(UEnvQueryManager *this,FString *param_1)

{
  code *pcVar1;
  FUObjectItem *pFVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UEnvQuery *pUVar7;
  UClass *pUVar8;
  FUObjectItem *pFVar9;
  UClass *pUVar10;
  uint uVar11;
  UObjectBase *pUVar12;
  longlong lVar13;
  FName local_res8;
  FName local_res18 [2];
  FString local_88;
  FString local_78;
  TIterator local_68;
  UClass *local_50;
  EObjectFlags local_48;
  EInternalObjectFlags local_44;
  
  bVar4 = false;
  uVar11 = 0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (0 < (this->InstanceCache).ArrayNum) {
    lVar13 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar11 < (this->InstanceCache).ArrayNum) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pUVar7 = (UEnvQuery *)(*pcVar1)();
        return pUVar7;
      }
      pUVar7 = *(UEnvQuery **)((this->InstanceCache).AllocatorInstance.Data + lVar13);
      if (pUVar7 == (UEnvQuery *)0x0) {
LAB_146f4a5a6:
        bVar3 = false;
      }
      else {
        local_res8 = (FName)pUVar7->_padding_;
        bVar4 = true;
        ::FName::ToString(&local_res8,&local_88);
        iVar6 = (param_1->Data).ArrayNum;
        if (local_88.Data.ArrayNum == iVar6) {
          if (1 < local_88.Data.ArrayNum) {
            iVar6 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_88.Data.AllocatorInstance.Data,
                               (wchar_t *)(param_1->Data).AllocatorInstance.Data);
            bVar3 = iVar6 == 0;
            goto LAB_146f4a59a;
          }
        }
        else {
          bVar3 = local_88.Data.ArrayNum + iVar6 == 1;
LAB_146f4a59a:
          if (!bVar3) goto LAB_146f4a5a6;
        }
        bVar3 = true;
      }
      if ((bVar4) &&
         (bVar4 = false, local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        return pUVar7;
      }
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 0x1c8;
    } while ((int)uVar11 < (this->InstanceCache).ArrayNum);
  }
  pUVar8 = UEnvQuery::StaticClass();
  local_68.Index = -1;
  local_68.Array = &GUObjectArray;
  local_68.CurrentObject = (FUObjectItem *)0x0;
  FUObjectArray::TIterator::Advance(&local_68);
  local_48 = RF_NoFlags;
  local_50 = pUVar8;
  local_44 = UE::GetAsyncLoadingInternalFlagsExclusion();
  local_44 = local_44 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted);
  if ((pUVar8 == (UClass *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Class",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectIterator.h"
                         ,0x70,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pUVar7 = (UEnvQuery *)(*pcVar1)();
    return pUVar7;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&(local_68.Array)->ObjObjectsCritical);
  do {
    pFVar2 = local_68.CurrentObject;
    if (local_68.CurrentObject == (FUObjectItem *)0x0) {
      pUVar12 = (UObjectBase *)0x0;
    }
    else {
      pUVar12 = ((local_68.CurrentObject)->field1_0x8).Object;
    }
    if (((local_48 & pUVar12->ObjectFlags) == RF_NoFlags) &&
       (pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar12->InternalIndex),
       (local_44 & (EInternalObjectFlags)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x20))
       == Borrowed)) {
      pUVar10 = Z_Construct_UClass_UObject_NoRegister();
      if (pUVar8 == pUVar10) break;
      pUVar10 = (pUVar12->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
      iVar6 = (int)pUVar8->_padding_;
      if ((iVar6 <= (int)pUVar10->_padding_) &&
         ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar6 * 8) ==
          &pUVar8->_padding_)) break;
    }
    bVar4 = FUObjectArray::TIterator::Advance(&local_68);
    pUVar8 = local_50;
    pFVar2 = local_68.CurrentObject;
  } while (bVar4);
joined_r0x000146f4a6d7:
  do {
    if (pFVar2 == (FUObjectItem *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&(local_68.Array)->ObjObjectsCritical);
      return (UEnvQuery *)0x0;
    }
    local_res18[0] = (((pFVar2->field1_0x8).Object)->NamePrivate).Name;
    ::FName::ToString(local_res18,&local_78);
    iVar6 = (param_1->Data).ArrayNum;
    if (local_78.Data.ArrayNum == iVar6) {
      if (local_78.Data.ArrayNum < 2) {
        bVar4 = true;
      }
      else {
        iVar6 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_78.Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar4 = iVar6 == 0;
      }
    }
    else {
      bVar4 = local_78.Data.ArrayNum + iVar6 == 1;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      if ((pFVar2 != (FUObjectItem *)0x0) &&
         (pUVar7 = (UEnvQuery *)(pFVar2->field1_0x8).Object, pUVar7 != (UEnvQuery *)0x0)) {
        pUVar8 = UEnvQuery::StaticClass();
        iVar6 = (int)pUVar8->_padding_;
        if ((iVar6 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
            &pUVar8->_padding_)) goto LAB_146f4a80d;
      }
      pUVar7 = (UEnvQuery *)0x0;
LAB_146f4a80d:
      LeaveCriticalSection((LPCRITICAL_SECTION)&(local_68.Array)->ObjObjectsCritical);
      return pUVar7;
    }
LAB_146f4a740:
    do {
      do {
        bVar4 = FUObjectArray::TIterator::Advance(&local_68);
        pFVar2 = local_68.CurrentObject;
        if (!bVar4) goto joined_r0x000146f4a6d7;
        if (local_68.CurrentObject == (FUObjectItem *)0x0) {
          pUVar12 = (UObjectBase *)0x0;
        }
        else {
          pUVar12 = ((local_68.CurrentObject)->field1_0x8).Object;
        }
      } while ((local_48 & pUVar12->ObjectFlags) != RF_NoFlags);
      pUVar8 = Z_Construct_UClass_UObject_NoRegister();
      if (local_50 != pUVar8) {
        pUVar8 = (pUVar12->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
        iVar6 = (int)local_50->_padding_;
        if (((int)pUVar8->_padding_ < iVar6) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar6 * 8) !=
            &local_50->_padding_)) goto LAB_146f4a740;
      }
      pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar12->InternalIndex);
    } while ((local_44 &
             (EInternalObjectFlags)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x20)) !=
             Borrowed);
  } while( true );
}

// FinishDestroy @ 146f4a890

void __thiscall UEnvQueryManager::FinishDestroy(UEnvQueryManager *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreUObjectDelegates::PreLoadMap,this);
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetCurrent @ 146f50740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UEnvQueryManager * __cdecl UEnvQueryManager::GetCurrent(UWorld *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UAISystemBase *pUVar3;
  
  if (param_1 == (UWorld *)0x0) {
    return (UEnvQueryManager *)0x0;
  }
  pUVar3 = (param_1->AISystem).field0_0x0.DebugPtr;
  if (pUVar3 != (UAISystemBase *)0x0) {
    pUVar2 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_146f5077c;
  }
  pUVar3 = (UAISystemBase *)0x0;
LAB_146f5077c:
  if (pUVar3 == (UAISystemBase *)0x0) {
    return (UEnvQueryManager *)0x0;
  }
  return (UEnvQueryManager *)pUVar3[2].OnMatchStateSetHandle.ID;
}

// GetCurrent @ 146f507a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UEnvQueryManager * __cdecl UEnvQueryManager::GetCurrent(UObject *param_1)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UAISystemBase *pUVar4;
  
  pUVar2 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (pUVar2 == (UWorld *)0x0) {
    return (UEnvQueryManager *)0x0;
  }
  pUVar4 = (pUVar2->AISystem).field0_0x0.DebugPtr;
  if (pUVar4 != (UAISystemBase *)0x0) {
    pUVar3 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_146f507f1;
  }
  pUVar4 = (UAISystemBase *)0x0;
LAB_146f507f1:
  if (pUVar4 == (UAISystemBase *)0x0) {
    return (UEnvQueryManager *)0x0;
  }
  return (UEnvQueryManager *)pUVar4[2].OnMatchStateSetHandle.ID;
}

// GetPrivateStaticClass @ 146f58d30

UClass * __cdecl UEnvQueryManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryManager",
               &Z_Registration_Info_UClass_UEnvQueryManager.InnerSingleton,
               StaticRegisterNativesUEnvQueryManager,0x200,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,
               L"Game",InternalConstructor<UEnvQueryManager>,
               InternalVTableHelperCtorCaller<UEnvQueryManager>,local_res8,UAISubsystem::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryManager.InnerSingleton;
}

// GetStatId @ 146f5a6f0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UEnvQueryManager::GetStatId(UEnvQueryManager *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UEnvQueryManager::GetStatId(void)const_::_2_::FStat_UEnvQueryManager>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UEnvQueryManager ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UEnvQueryManager::GetStatId(void)const_::_2_::FStat_UEnvQueryManager>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"UEnvQueryManager");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_UEnvQueryManager,*pFVar1,
                   L"UEnvQueryManager","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_UEnvQueryManager;
  if (StatPtr_UEnvQueryManager ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UEnvQueryManager::GetStatId(void)const_::_2_::FStat_UEnvQueryManager>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UEnvQueryManager");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UEnvQueryManager::GetStatId(void)const_::_2_::FStat_UEnvQueryManager>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_UEnvQueryManager,*pFVar1,
                         L"UEnvQueryManager","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// IsTickableInEditor @ 146f5be80

bool __thiscall UEnvQueryManager::IsTickableInEditor(UEnvQueryManager *this)

{
  return true;
}

// LogQueryInfo @ 146f5c500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UEnvQueryManager::LogQueryInfo(UEnvQueryManager *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  UObject *pUVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FName local_res8;
  uint local_res10 [2];
  FName local_res18 [2];
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar5 = false;
  bVar4 = false;
  local_res10[0] = 0;
  if (param_1) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogEQS.field_0x4,Warning,
                 L"The number of EQS queries (%d) has reached the warning threshold (%d).  Logging queries."
                );
    }
    if (2 < (byte)LogEQS._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
    }
  }
  else {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogEQS.field_0x4,Warning,
                 L"The number of EQS queries is (%d).  Logging queries.");
    }
    if (2 < (byte)LogEQS._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
    }
  }
  iVar1 = (this->RunningQueries).ArrayNum;
  pFVar7 = (this->RunningQueries).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
LAB_146f5c5f0:
  do {
    if ((this->RunningQueries).ArrayNum != iVar1) {
      local_res10[0] = local_res10[0] & 0xffffff00;
      `TCheckedPointerIterator<TSharedPtr<FEnvQueryInstance,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar8) {
      return;
    }
    if (*(FEnvQueryInstance **)pFVar7 == (FEnvQueryInstance *)0x0) {
      if (FVisualLogger::bIsRecording != 0) {
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this,(FName *)&LogEQS.field_0x4,Warning,
                   L"Invalid query found in list!");
      }
      if (2 < (byte)LogEQS._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
      }
    }
    else {
      if (FVisualLogger::bIsRecording != 0) {
        FEnvQueryInstance::GetExecutionTimeDescription(*(FEnvQueryInstance **)pFVar7,&local_58);
        if ((*(longlong *)pFVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)pFVar7 + 0x34));
        if (bVar3) {
          if ((*(longlong *)pFVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)pFVar7 + 0x34));
          bVar4 = true;
          local_res8.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
          local_res8.Number = *(uint *)&pUVar6->field_0x1c;
          ::FName::ToString(&local_res8,&local_78);
        }
        if ((*(longlong *)pFVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this,(FName *)&LogEQS.field_0x4,Warning,L"Query: %s - Owner: %s - %s")
        ;
        if ((bVar4) &&
           (bVar4 = false, local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      if (2 < (byte)LogEQS._0_1_) {
        if ((*(longlong *)pFVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FEnvQueryInstance::GetExecutionTimeDescription(*(FEnvQueryInstance **)pFVar7,&local_48);
        if ((*(longlong *)pFVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)pFVar7 + 0x34));
        if (bVar3) {
          if ((*(longlong *)pFVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)pFVar7 + 0x34));
          bVar5 = true;
          local_res18[0].ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
          local_res18[0].Number = *(uint *)&pUVar6->field_0x1c;
          ::FName::ToString(local_res18,&local_68);
        }
        if ((*(longlong *)pFVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
        if ((bVar5) &&
           (bVar5 = false, local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
          pFVar7 = pFVar7 + 0x10;
          goto LAB_146f5c5f0;
        }
      }
    }
    pFVar7 = pFVar7 + 0x10;
  } while( true );
}

// NotifyAssetUpdate @ 146f5e2d0

void __cdecl UEnvQueryManager::NotifyAssetUpdate(UEnvQuery *param_1)

{
  return;
}

// OnWorldCleanup @ 146f5eab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UEnvQueryManager::OnWorldCleanup(UEnvQueryManager *this)

{
  int *piVar1;
  TArray<TSharedPtr<FEnvQueryInstance,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  TSharedPtr<FEnvQueryInstance,1> *pTVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  UObject *pUVar10;
  TReferenceControllerBase<1> *pTVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  FName local_res8;
  FName local_res10;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  FString local_88;
  FString local_78;
  longlong local_68;
  TReferenceControllerBase<1> *local_60;
  FReadAccessScope local_58;
  
  uVar13 = 0;
  iVar3 = (this->RunningQueries).ArrayNum;
  if (0 < iVar3) {
    pTVar2 = &this->RunningQueries;
    pTVar4 = (TSharedPtr<FEnvQueryInstance,1> *)(pTVar2->AllocatorInstance).Data;
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90 = iVar3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&local_98,iVar3,&local_8c);
    ConstructItems<TSharedPtr<FEnvQueryInstance,1>,TSharedPtr<FEnvQueryInstance,1>,int>
              (local_98.Data,pTVar4,iVar3);
    piVar1 = &(this->RunningQueries).ArrayMax;
    pTVar4 = (TSharedPtr<FEnvQueryInstance,1> *)(pTVar2->AllocatorInstance).Data;
    iVar3 = (this->RunningQueries).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TSharedPtr<FEnvQueryInstance,1>,int>(pTVar4,iVar3);
      (this->RunningQueries).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TSharedPtr<FEnvQueryInstance,1>,int>(pTVar4,iVar3);
      (this->RunningQueries).ArrayNum = 0;
    }
    uVar15 = uVar13;
    if (0 < local_90) {
      do {
        uVar14 = (uint)uVar13;
        uVar9 = 0;
        if ((int)uVar14 < local_90) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar12 = local_98.Data + uVar15;
        if ((*(longlong *)pFVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(int *)(*(longlong *)pFVar12 + 0x28) == 0) {
          if (FVisualLogger::bIsRecording != 0) {
            if ((*(longlong *)pFVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)pFVar12 + 0x34));
            if (pUVar10 == (UObject *)0x0) {
              ::FString::FString(&local_88,L"None");
            }
            else {
              local_res8.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18;
              local_res8.Number = *(uint *)&pUVar10->field_0x1c;
              ::FName::ToString(&local_res8,&local_88);
            }
            if ((*(longlong *)pFVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if ((*(longlong *)pFVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)pFVar12 + 0x34));
            FVisualLogger::CategorizedLogfImpl
                      (pUVar10,(FName *)&LogEQS.field_0x4,Verbose,
                       L"Query failed due to world cleanup: Query: %s - Owner: %s");
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
          }
          if (5 < (byte)LogEQS._0_1_) {
            if ((*(longlong *)pFVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)pFVar12 + 0x34));
            if (pUVar10 == (UObject *)0x0) {
              ::FString::FString(&local_78,L"None");
            }
            else {
              local_res10.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18;
              local_res10.Number = *(uint *)&pUVar10->field_0x1c;
              ::FName::ToString(&local_res10,&local_78);
            }
            if ((*(longlong *)pFVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
          }
          if ((*(longlong *)pFVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(undefined4 *)(*(longlong *)pFVar12 + 0x28) = 2;
          if ((*(longlong *)pFVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar5 = *(longlong *)pFVar12;
          pTVar11 = *(TReferenceControllerBase<1> **)(pFVar12 + 8);
          if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
            UNLOCK();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar5 + 0x60),
                     &local_58);
          if ((*(int *)(lVar5 + 0x70) == 0) ||
             (plVar6 = *(longlong **)(lVar5 + 0x68), plVar6 == (longlong *)0x0)) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_58);
          }
          else {
            local_68 = lVar5;
            local_60 = pTVar11;
            (**(code **)(*plVar6 + 0x68))(plVar6,&local_68);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_58);
            pTVar11 = (TReferenceControllerBase<1> *)0x0;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar11);
        }
        uVar13 = (ulonglong)(uVar14 + 1);
        uVar15 = uVar15 + 0x10;
      } while ((int)(uVar14 + 1) < local_90);
    }
    DestructItems<TSharedPtr<FEnvQueryInstance,1>,int>
              ((TSharedPtr<FEnvQueryInstance,1> *)local_98.Data,local_90);
    if ((TSharedPtr<FEnvQueryInstance,1> *)local_98.Data != (TSharedPtr<FEnvQueryInstance,1> *)0x0)
    {
      FMemory::Free(local_98.Data);
    }
  }
  (this->GCShieldedWrappers).ArrayNum = 0;
  if ((this->GCShieldedWrappers).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->GCShieldedWrappers).AllocatorInstance,0,
               &(this->GCShieldedWrappers).ArrayMax);
  }
  return;
}

// PostInitProperties @ 146f5f760

void __thiscall UEnvQueryManager::PostInitProperties(UEnvQueryManager *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UEnvQueryManager *pUStack_28;
  code *pcStack_20;
  undefined1 *puStack_18;
  
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_18 = auStackX_8;
  pcStack_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_20,puVar5);
  FVar1 = (FTlsAutoCleanup)(pFVar6 + 0xb);
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  pUStack_28 = this;
  if (((ulonglong)FVar7 <= &pUStack_28) &&
     (&pUStack_28 <
      (UEnvQueryManager **)((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(pFVar6 + 0x1c);
  if (iVar4 == *(int *)&pFVar6[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)&pFVar6[0x1c].field_0x4);
  }
  *(int *)(pFVar6 + 0x1c) = iVar4 + 1;
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  *(UEnvQueryManager **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// PostLoad @ 146f5fa70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UEnvQueryManager::PostLoad(UEnvQueryManager *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FUObjectItem *pFVar4;
  uint uVar5;
  
  UObject::PostLoad((UObject *)this);
  pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  if ((((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsRooted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                         ,0xb8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_MirroredGarbage);
  pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  do {
    lVar1 = (pFVar4->field0_0x0).FlagsAndRefCount;
    uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
    if ((uVar5 >> 0x15 & 1) != 0) break;
    if (((ulonglong)pFVar4 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    bVar3 = lVar1 == (pFVar4->field0_0x0).FlagsAndRefCount;
    if (bVar3) {
      (pFVar4->field0_0x0).FlagsAndRefCount =
           (longlong)(int)uVar5 << 0x20 | (longlong)(int)lVar1 | 0x20000000000000;
    }
    UNLOCK();
  } while (!bVar3);
  pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  FUObjectItem::ClearRootFlags(pFVar4,Async);
  return;
}

// PrepareLocalContext @ 146f615b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UEnvQueryContext * __thiscall
UEnvQueryManager::PrepareLocalContext(UEnvQueryManager *this,TSubclassOf<UEnvQueryContext> param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UEnvQueryContext>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  TTuple<FName,UEnvQueryContext_*> *pTVar10;
  UEnvQueryContext *pUVar11;
  UObject *pUVar12;
  UObject *pUVar13;
  TPairInitializer<FName_&&,UEnvQueryContext_*_const_&> local_res8;
  FName local_res18;
  undefined8 local_res20;
  UObject *local_58;
  undefined8 *local_50;
  UEnvQueryContext ***local_48;
  
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  pUVar13 = (UObject *)0x0;
  pUVar12 = pUVar13;
  if ((lVar3 != 0) && (pUVar9 = UEnvQueryContext::StaticClass(), pUVar9 != (UClass *)0x0)) {
    iVar8 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar9->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      pUVar12 = *(UObject **)param_1.Class.field0_0x0;
    }
  }
  FVar4.ComparisonIndex.Value = *(uint *)&pUVar12->field_0x18;
  FVar4.Number = *(uint *)&pUVar12->field_0x1c;
  pTVar10 = TSet<TTuple<FName,UEnvQueryContext_*>,TDefaultMapHashableKeyFuncs<FName,UEnvQueryContext_*,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,UEnvQueryContext_*>,TDefaultMapHashableKeyFuncs<FName,UEnvQueryContext_*,0>,FDefaultSetAllocator>
                    *)&this->LocalContextMap,FVar4);
  if ((pTVar10 != (TTuple<FName,UEnvQueryContext_*> *)0x0) &&
     (local_res8.Value = *(UEnvQueryContext ***)&pTVar10->field_0x8,
     (UEnvQueryContext *)local_res8.Value != (UEnvQueryContext *)0x0)) {
    return (UEnvQueryContext *)local_res8.Value;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  pUVar12 = pUVar13;
  if (pUVar9 != (UClass *)0x0) {
    if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar9);
    }
    pUVar12 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar12 != (UObject *)0x0) {
      pUVar9 = UEnvQueryContext::StaticClass();
      iVar8 = (int)pUVar9->_padding_;
      if ((iVar8 <= *(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar9->_padding_)) goto LAB_146f616ad;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                       ,0x93,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pUVar11 = (UEnvQueryContext *)(*pcVar6)();
      return pUVar11;
    }
  }
LAB_146f616ad:
  local_res8.Value =
       (UEnvQueryContext **)
       StaticDuplicateObject
                 (pUVar12,(UObject *)this,local_res18,
                  RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                  RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                  RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                  RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                  RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                  RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|RF_NeedPostLoad|
                  RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|RF_TagGarbageTemp|
                  RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|RF_ClassDefaultObject|
                  RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public,(UClass *)0x0,Normal,
                  PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                  ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                  AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|ReachabilityFlag0)
  ;
  pTVar2 = &this->LocalContexts;
  local_58 = (UObject *)local_res8.Value;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)local_res8.Value != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.Value);
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 < pFVar5 + (longlong)(this->LocalContexts).ArrayMax * 8)
      ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pUVar11 = (UEnvQueryContext *)(*pcVar6)();
    return pUVar11;
  }
  iVar8 = (this->LocalContexts).ArrayNum;
  piVar1 = &(this->LocalContexts).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->LocalContexts).ArrayNum = iVar8 + 1;
  *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_58;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_58);
  }
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar3 != 0) && (pUVar9 = UEnvQueryContext::StaticClass(), pUVar9 != (UClass *)0x0)) {
    iVar8 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar9->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      pUVar13 = *(UObject **)param_1.Class.field0_0x0;
    }
  }
  local_res20 = *(undefined8 *)&pUVar13->field_0x18;
  local_50 = &local_res20;
  local_48 = &local_res8.Value;
  TSet<TTuple<FName,UEnvQueryContext_*>,TDefaultMapHashableKeyFuncs<FName,UEnvQueryContext_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,UEnvQueryContext_*_const_&>_>
            ((TSet<TTuple<FName,UEnvQueryContext_*>,TDefaultMapHashableKeyFuncs<FName,UEnvQueryContext_*,0>,FDefaultSetAllocator>
              *)&this->LocalContextMap,&local_res8,(bool *)&local_50);
  return (UEnvQueryContext *)local_res8.Value;
}

// PrepareQueryInstance @ 146f61d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FEnvQueryInstance,1> * __thiscall
UEnvQueryManager::PrepareQueryInstance
          (UEnvQueryManager *this,TSharedPtr<FEnvQueryInstance,1> *__return_storage_ptr__,
          FEnvQueryRequest *param_1,Type param_2)

{
  uchar auVar1 [8];
  uint uVar2;
  int iVar3;
  UObject *pUVar4;
  UEnvQuery *pUVar5;
  LARGE_INTEGER LVar6;
  code *pcVar7;
  bool bVar8;
  FString *pFVar9;
  UWorld *pUVar10;
  TSharedPtr<FEnvQueryInstance,1> *pTVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FSharedReferencer<1> FVar16;
  longlong lVar17;
  longlong lVar18;
  LARGE_INTEGER local_res18 [2];
  uchar local_e8 [8];
  LARGE_INTEGER local_e0;
  TSharedPtr<FEnvQueryInstance,1> local_d8;
  FString local_c8;
  FString local_b8;
  FName local_a8;
  FName local_a0;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  FStatMessage local_88;
  FStatMessage local_78;
  FName local_68;
  FName local_60;
  FString local_58;
  FString local_48;
  
  lVar18 = 0;
  local_res18[0].QuadPart = local_res18[0].QuadPart & 0xffffffff00000000;
  CreateQueryInstance(this,&local_d8,(param_1->QueryTemplate).field0_0x0.DebugPtr,param_2);
  local_res18[0].s.LowPart._0_1_ = local_d8.Object != (FEnvQueryInstance *)0x0;
  if (local_d8.Object == (FEnvQueryInstance *)0x0) {
    if (FVisualLogger::bIsRecording != 0) {
      pUVar4 = (param_1->Owner).field0_0x0.DebugPtr;
      if (pUVar4 == (UObject *)0x0) {
        ::FString::FString(&local_c8,L"None");
      }
      else {
        local_a8.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
        local_a8.Number = *(uint *)&pUVar4->field_0x1c;
        ::FName::ToString(&local_a8,&local_c8);
      }
      pUVar5 = (param_1->QueryTemplate).field0_0x0.DebugPtr;
      if (pUVar5 != (UEnvQuery *)0x0) {
        pFVar9 = ::FName::ToString(&pUVar5->QueryName,&local_58);
        if ((pFVar9->Data).ArrayNum == 0) {
          lVar18 = 1;
        }
        else {
          lVar18 = 1;
        }
      }
      FVisualLogger::CategorizedLogfImpl
                ((param_1->Owner).field0_0x0.DebugPtr,(FName *)&LogEQS.field_0x4,Warning,
                 L"Error creating query instance for QueryTemplate: %s - Owner: %s");
      if ((lVar18 != 0) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
    if (2 < (byte)LogEQS._0_1_) {
      pUVar4 = (param_1->Owner).field0_0x0.DebugPtr;
      if (pUVar4 == (UObject *)0x0) {
        ::FString::FString(&local_b8,L"None");
      }
      else {
        local_a0.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
        local_a0.Number = *(uint *)&pUVar4->field_0x1c;
        ::FName::ToString(&local_a0,&local_b8);
      }
      pUVar5 = (param_1->QueryTemplate).field0_0x0.DebugPtr;
      if (pUVar5 != (UEnvQuery *)0x0) {
        ::FName::ToString(&pUVar5->QueryName,&local_48);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
      if ((pUVar5 != (UEnvQuery *)0x0) &&
         (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__->Object = (FEnvQueryInstance *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FVar16.ReferenceController = local_d8.SharedReferenceCount.ReferenceController;
  }
  else {
    pUVar10 = UAISubsystem::GetWorldFast((UAISubsystem *)this);
    if (((undefined1)local_res18[0].s.LowPart == '\0') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
      return pTVar11;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    ((local_d8.Object)->World).field0_0x0.DebugPtr = pUVar10;
    pUVar4 = (param_1->Owner).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar4 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
    }
    local_res18[0].QuadPart = 0;
    local_e8 = (uchar  [8])pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res18[0].s,(FObjectPtr)local_e8);
    LVar6 = local_res18[0];
    if ((local_d8.Object == (FEnvQueryInstance *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedPtr<FEnvQueryInstance,1> *)(*pcVar7)();
      return pTVar11;
    }
    ((LARGE_INTEGER *)((longlong)&(local_d8.Object)->_padding_ + 4))->QuadPart = (LONGLONG)LVar6;
    QueryPerformanceCounter(&local_e0);
    (local_d8.Object)->StartTime =
         (double)local_e0.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
    ;
    (local_d8.Object)->GenerationTimeWarningSeconds = this->GenerationTimeWarningSeconds;
    uVar2 = *(uint *)&((local_d8.Object)->NamedParams).field_0x48;
    lVar17 = lVar18;
    if (1 < uVar2) {
      lVar17 = (longlong)(int)uVar2 << 2;
    }
    local_e8 = (uchar  [8])
               (lVar17 + (ulonglong)
                         ((*(int *)&((local_d8.Object)->NamedParams).field_0x2c + 0x1fU >> 5) << 2)
               + (longlong)*(int *)&((local_d8.Object)->NamedParams).field_0xc * 0x14);
    if (local_e8 != (uchar  [8])0x0) {
      FVar13 = StatPtr_STAT_AI_EQS_InstanceMemory;
      if (StatPtr_STAT_AI_EQS_InstanceMemory ==
          (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
        pFVar12 = ::FName::FName(&local_68,"STAT_AI_EQS_InstanceMemory");
        FVar13 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,
                            *pFVar12,L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                            L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
      }
      LVar6 = *(LARGE_INTEGER *)FVar13;
      local_res18[0] = LVar6;
      local_e0 = LVar6;
      if (((LVar6.QuadPart != 0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar14 == (FThreadStats *)0x0) {
          pFVar15 = FThreadStatsPool::Get();
          pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
        }
        auVar1 = local_e8;
        local_88.NameAndInfo.Index.Value = local_e0.s.LowPart;
        local_88.NameAndInfo.Number = LVar6.s.HighPart & 0xffffbfffU | 0xb000;
        local_88.StatData.Pad[0] = local_e8[0];
        local_88.StatData.Pad[1] = local_e8[1];
        local_88.StatData.Pad[2] = local_e8[2];
        local_88.StatData.Pad[3] = local_e8[3];
        local_88.StatData.Pad[4] = local_e8[4];
        local_88.StatData.Pad[5] = local_e8[5];
        local_88.StatData.Pad[6] = local_e8[6];
        local_88.StatData.Pad[7] = local_e8[7];
        local_98 = LVar6;
        FThreadStats::AddStatMessage(pFVar14,&local_88);
        FStatsTrace::Add((FName *)&local_98.s,-(longlong)auVar1);
        if (pFVar14->ScopeCount == 0) {
          FThreadStats::Flush(pFVar14,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar14,false,false);
        }
      }
    }
    TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::operator=
              (&(local_d8.Object)->NamedParams,&param_1->NamedParams);
    uVar2 = *(uint *)&((local_d8.Object)->NamedParams).field_0x48;
    if (1 < uVar2) {
      lVar18 = (longlong)(int)uVar2 << 2;
    }
    auVar1 = (uchar  [8])
             (lVar18 + (ulonglong)
                       ((*(int *)&((local_d8.Object)->NamedParams).field_0x2c + 0x1fU >> 5) << 2) +
             (longlong)*(int *)&((local_d8.Object)->NamedParams).field_0xc * 0x14);
    if (auVar1 != (uchar  [8])0x0) {
      FVar13 = StatPtr_STAT_AI_EQS_InstanceMemory;
      if (StatPtr_STAT_AI_EQS_InstanceMemory ==
          (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
        pFVar12 = ::FName::FName(&local_60,"STAT_AI_EQS_InstanceMemory");
        FVar13 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,
                            *pFVar12,L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                            L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
      }
      LVar6 = *(LARGE_INTEGER *)FVar13;
      local_res18[0] = LVar6;
      if (((LVar6.QuadPart != 0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar14 == (FThreadStats *)0x0) {
          pFVar15 = FThreadStatsPool::Get();
          pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
        }
        local_78.NameAndInfo.Number = LVar6.s.HighPart & 0xffffafffU | 0xa000;
        local_90 = LVar6;
        local_78.StatData.Pad = auVar1;
        local_78.NameAndInfo.Index.Value = LVar6.s.LowPart;
        FThreadStats::AddStatMessage(pFVar14,&local_78);
        FStatsTrace::Add((FName *)&local_90.s,(long64)auVar1);
        if (pFVar14->ScopeCount == 0) {
          FThreadStats::Flush(pFVar14,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar14,false,false);
        }
      }
    }
    iVar3 = this->NextQueryID;
    this->NextQueryID = iVar3 + 1;
    *(int *)&(local_d8.Object)->_padding_ = iVar3;
    FVar16.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_d8.SharedReferenceCount.ReferenceController;
    __return_storage_ptr__->Object = local_d8.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  return __return_storage_ptr__;
}

// PrintActiveQueryInfo @ 146f623a0

void __thiscall UEnvQueryManager::PrintActiveQueryInfo(UEnvQueryManager *this)

{
  LogQueryInfo(this,false);
  return;
}

// RegisterActiveWrapper @ 146f653a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnvQueryManager::RegisterActiveWrapper
          (UEnvQueryManager *this,UEnvQueryInstanceBlueprintWrapper *param_1)

{
  TObjectPtr<UEnvQueryInstanceBlueprintWrapper>_u_0 local_res8 [4];
  
  local_res8[0].DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UEnvQueryInstanceBlueprintWrapper *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UEnvQueryInstanceBlueprintWrapper>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TObjectPtr<UEnvQueryInstanceBlueprintWrapper>_>
            (&this->GCShieldedWrappers,
             (TObjectPtr<UEnvQueryInstanceBlueprintWrapper> *)&local_res8[0].ObjectPtr);
  return;
}

// RegisterExternalQuery @ 146f653f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnvQueryManager::RegisterExternalQuery
          (UEnvQueryManager *this,TSharedPtr<FEnvQueryInstance,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  TPairInitializer<int_const_&,TWeakPtr<FEnvQueryInstance,1>_&&> local_res10;
  FEnvQueryInstance *local_28;
  TReferenceControllerBase<1> *local_20;
  longlong *local_18;
  FEnvQueryInstance **local_10;
  
  local_28 = param_1->Object;
  if (local_28 != (FEnvQueryInstance *)0x0) {
    local_20 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_20->WeakReferenceCount = (atomic<int>)((int)local_20->WeakReferenceCount + 1);
      UNLOCK();
    }
    if (param_1->Object == (FEnvQueryInstance *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_18 = &param_1->Object->_padding_;
    local_10 = &local_28;
    TSet<TTuple<int,TWeakPtr<FEnvQueryInstance,1>_>,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FEnvQueryInstance,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,TWeakPtr<FEnvQueryInstance,1>_&&>_>
              ((TSet<TTuple<int,TWeakPtr<FEnvQueryInstance,1>_>,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FEnvQueryInstance,1>,0>,FDefaultSetAllocator>
                *)&this->ExternalQueries,&local_res10,(bool *)&local_18);
    if (local_20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &local_20->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(local_20->_padding_ + 8))(local_20,1);
      }
    }
  }
  return;
}

// RemoveAllQueriesByQuerier @ 146f65cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UEnvQueryManager::RemoveAllQueriesByQuerier(UEnvQueryManager *this,UObject *param_1,bool param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  FName local_res8;
  UObject *local_res10;
  FName local_res20;
  FString local_88;
  FString local_78;
  longlong local_68;
  TReferenceControllerBase<1> *local_60;
  FReadAccessScope local_58;
  
  uVar9 = (this->RunningQueries).ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    local_res10 = param_1;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (this->RunningQueries).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (this->RunningQueries).AllocatorInstance.Data + lVar10;
      if (*(longlong *)pFVar8 == 0) {
LAB_146f65def:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_146f65e15:
        if (*(int *)(*(longlong *)pFVar8 + 0x28) == 0) {
          if ((*(longlong *)pFVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined4 *)(*(longlong *)pFVar8 + 0x28) = 3;
          if (FVisualLogger::bIsRecording != 0) {
            if ((*(longlong *)pFVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)pFVar8 + 0x34));
            if (pUVar6 == (UObject *)0x0) {
              ::FString::FString(&local_88,L"None");
            }
            else {
              local_res8.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
              local_res8.Number = *(uint *)&pUVar6->field_0x1c;
              ::FName::ToString(&local_res8,&local_88);
            }
            if ((*(longlong *)pFVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((*(longlong *)pFVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)pFVar8 + 0x34));
            FVisualLogger::CategorizedLogfImpl
                      (pUVar6,(FName *)&LogEQS.field_0x4,Verbose,L"%hs: Query: %s - Owner: %s");
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
          }
          if (5 < (byte)LogEQS._0_1_) {
            if ((*(longlong *)pFVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)pFVar8 + 0x34));
            if (pUVar6 == (UObject *)0x0) {
              ::FString::FString(&local_78,L"None");
            }
            else {
              local_res20.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
              local_res20.Number = *(uint *)&pUVar6->field_0x1c;
              ::FName::ToString(&local_res20,&local_78);
            }
            if ((*(longlong *)pFVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
          }
          if (param_2) {
            if ((*(longlong *)pFVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar1 = *(longlong *)pFVar8;
            pTVar7 = *(TReferenceControllerBase<1> **)(pFVar8 + 8);
            if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x60),
                       &local_58);
            if ((*(int *)(lVar1 + 0x70) == 0) ||
               (plVar2 = *(longlong **)(lVar1 + 0x68), plVar2 == (longlong *)0x0)) {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_58);
            }
            else {
              local_68 = lVar1;
              local_60 = pTVar7;
              (**(code **)(*plVar2 + 0x68))(plVar2,&local_68);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_58);
              pTVar7 = (TReferenceControllerBase<1> *)0x0;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar7);
          }
          this->NumRunningQueriesAbortedSinceLastUpdate =
               this->NumRunningQueriesAbortedSinceLastUpdate + 1;
          param_1 = local_res10;
        }
      }
      else {
        bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)pFVar8 + 0x34));
        if (!bVar4) {
LAB_146f65de9:
          if (*(longlong *)pFVar8 == 0) goto LAB_146f65def;
          goto LAB_146f65e15;
        }
        if ((*(longlong *)pFVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)pFVar8 + 0x34));
        if (pUVar6 == param_1) goto LAB_146f65de9;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return;
}

// RunEQSQuery @ 146f67ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UEnvQueryInstanceBlueprintWrapper * __cdecl
UEnvQueryManager::RunEQSQuery
          (UObject *param_1,UEnvQuery *param_2,UObject *param_3,
          TEnumAsByte<EEnvQueryRunMode::Type> param_4,
          TSubclassOf<UEnvQueryInstanceBlueprintWrapper> param_5)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  UEnvQueryManager *pUVar7;
  UAISystem *pUVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  UEnvQueryInstanceBlueprintWrapper *pUVar11;
  longlong *plVar12;
  undefined1 auStackY_188 [32];
  UObject *local_140;
  undefined1 local_138 [128];
  TObjectPtr<UEnvQuery_const_>_u_0 local_b8;
  UObject *local_b0;
  undefined8 local_a8;
  ForAnyElementType FStack_a0;
  undefined8 local_98;
  TBitArray<FDefaultBitArrayAllocator> local_90;
  undefined8 uStack_70;
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((param_2 == (UEnvQuery *)0x0) || (param_3 == (UObject *)0x0)) {
    return (UEnvQueryInstanceBlueprintWrapper *)0x0;
  }
  pUVar7 = GetCurrent(param_1);
  if (pUVar7 == (UEnvQueryManager *)0x0) {
    return (UEnvQueryInstanceBlueprintWrapper *)0x0;
  }
  pUVar8 = GetDefault<UAISystem>();
  if (pUVar8->bAllowControllersAsEQSQuerier == false) {
    pUVar9 = Z_Construct_UClass_AController_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar9->_padding_)) {
      pUVar9 = Z_Construct_UClass_AController_NoRegister();
      iVar1 = (int)pUVar9->_padding_;
      if ((*(int *)(*(longlong *)&param_3->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar9->_padding_)) {
        param_3 = (UObject *)0x0;
      }
      pUVar2 = *(UObject **)&param_3[0x13].field_0x18;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar2 == (UObject *)0x0) goto LAB_146f6803a;
      }
      else {
        if (pUVar2 == (UObject *)0x0) {
LAB_146f6803a:
          if (FVisualLogger::bIsRecording == 0) {
            return (UEnvQueryInstanceBlueprintWrapper *)0x0;
          }
          FVisualLogger::CategorizedLogfImpl
                    (param_3,(FName *)&LogEQS.field_0x4,Error,
                     L"Trying to run EQS query while not having a pawn! Aborting.");
          return (UEnvQueryInstanceBlueprintWrapper *)0x0;
        }
        UE::GC::MarkAsReachable(pUVar2);
      }
      param_3 = *(UObject **)&param_3[0x13].field_0x18;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_3);
      }
    }
  }
  lVar3 = *(longlong *)param_5.Class.field0_0x0;
  if ((lVar3 != 0) &&
     (pUVar9 = UEnvQueryInstanceBlueprintWrapper::StaticClass(), pUVar9 != (UClass *)0x0)) {
    iVar1 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar9->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && (lVar3 = *(longlong *)param_5.Class.field0_0x0, lVar3 != 0)) {
      pUVar9 = UEnvQueryInstanceBlueprintWrapper::StaticClass();
      if (pUVar9 != (UClass *)0x0) {
        iVar1 = (int)pUVar9->_padding_;
        if ((*(int *)(lVar3 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar9->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          pUVar9 = *(UClass **)param_5.Class.field0_0x0;
          goto LAB_146f680b5;
        }
      }
      pUVar9 = (UClass *)0x0;
      goto LAB_146f680b5;
    }
  }
  pUVar9 = UEnvQueryInstanceBlueprintWrapper::StaticClass();
LAB_146f680b5:
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar10 = UEnvQueryInstanceBlueprintWrapper::StaticClass();
  CheckIsClassChildOf_Internal(pUVar10,pUVar9);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_138,pUVar9);
  local_138._48_8_ = (FObjectInstancingGraph *)0x0;
  local_138._56_8_ = (UPackage *)0x0;
  local_138._16_4_ = 0;
  local_138._20_4_ = 0;
  local_138._24_4_ = RF_NoFlags;
  local_138._40_8_ = (UObject *)0x0;
  local_138[0x20] = false;
  local_138._8_8_ = pUVar7;
  pUVar11 = (UEnvQueryInstanceBlueprintWrapper *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
  if (local_138._64_8_ != 0) {
    plVar12 = (longlong *)(local_138 + 0x50);
    if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_138._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if ((pUVar11 == (UEnvQueryInstanceBlueprintWrapper *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("QueryInstanceWrapper",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryManager.cpp"
                         ,0x432,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pUVar11 = (UEnvQueryInstanceBlueprintWrapper *)(*pcVar4)();
    return pUVar11;
  }
  local_b8.DebugPtr = param_2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_b0 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  local_98 = 0;
  local_a8 = 0;
  FStack_a0.Data = (FScriptContainerElement *)0x0;
  local_90.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_90.MaxBits = _UNK_150631d94;
  uStack_70 = _UNK_150631d98;
  local_90.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_140 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&pUVar11->Instigator,(FObjectPtr)&local_140);
  UEnvQueryInstanceBlueprintWrapper::RunQuery
            (pUVar11,(uint)param_4.Value,(FEnvQueryRequest *)&local_b8.ObjectPtr);
  local_58 = 0;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  uVar5 = local_98 >> 0x20;
  local_98 = local_98 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&FStack_a0,0,(int *)((longlong)&local_98 + 4));
  }
  iVar1 = local_90.MaxBits;
  uStack_70 = 0xffffffff;
  local_90._24_8_ = (ulonglong)(uint)local_90.MaxBits << 0x20;
  if (0x80 < (uint)iVar1) {
    local_90.NumBits = 0;
    local_90.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_90,0);
  }
  if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
  }
  if (FStack_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a0.Data);
  }
  return pUVar11;
}

// RunInstantQuery @ 146f682d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FEnvQueryResult,1> * __thiscall
UEnvQueryManager::RunInstantQuery
          (UEnvQueryManager *this,TSharedPtr<FEnvQueryResult,1> *__return_storage_ptr__,
          FEnvQueryRequest *param_1,Type param_2)

{
  TSharedPtr<FEnvQueryInstance,1> local_18;
  
  PrepareQueryInstance(this,&local_18,param_1,param_2);
  if (local_18.Object == (FEnvQueryInstance *)0x0) {
    __return_storage_ptr__->Object = (FEnvQueryResult *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    RunInstantQuery(this,&local_18);
    __return_storage_ptr__->Object = (FEnvQueryResult *)local_18.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_18.SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// RunInstantQuery @ 146f68350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnvQueryManager::RunInstantQuery(UEnvQueryManager *this,TSharedPtr<FEnvQueryInstance,1> *param_1)

{
  FEnvQueryInstance *pFVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  uint local_res10 [2];
  FVisualLogEntry *local_res18;
  UWorld *local_res20;
  FName local_68;
  FName local_60;
  FName local_58;
  FString local_50;
  FString local_40;
  
  if (param_1->Object == (FEnvQueryInstance *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<636647700980302144>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryManager.cpp"
                       ,0x140,"QueryInstance.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (FVisualLogger::bIsRecording != 0) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->Object->_padding_ + 4));
      if (pUVar4 == (UObject *)0x0) {
        ::FString::FString(&local_50,L"None");
      }
      else {
        local_60.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
        local_60.Number = *(uint *)&pUVar4->field_0x1c;
        ::FName::ToString(&local_60,&local_50);
      }
      if ((param_1->Object == (FEnvQueryInstance *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((param_1->Object == (FEnvQueryInstance *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->Object->_padding_ + 4));
      FVisualLogger::CategorizedLogfImpl
                (pUVar4,(FName *)&LogEQS.field_0x4,Verbose,L"%hs: Query: %s - Owner: %s");
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    if (5 < (byte)LogEQS._0_1_) {
      if ((param_1->Object == (FEnvQueryInstance *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->Object->_padding_ + 4));
      if (pUVar4 == (UObject *)0x0) {
        ::FString::FString(&local_40,L"None");
      }
      else {
        local_58.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
        local_58.Number = *(uint *)&pUVar4->field_0x1c;
        ::FName::ToString(&local_58,&local_40);
      }
      if ((param_1->Object == (FEnvQueryInstance *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    if (__CsvProfilerStat331 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("EnvQueryManager");
      __CsvProfilerStat331 = true;
    }
    FCsvProfiler::BeginExclusiveStat("EnvQueryManager","CSV_EnvQueryManager");
    RegisterExternalQuery(this,param_1);
    while( true ) {
      if ((param_1->Object == (FEnvQueryInstance *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = param_1->Object;
      if ((int)pFVar1->_padding_ != 0) break;
      if ((pFVar1 == (FEnvQueryInstance *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FEnvQueryInstance::ExecuteOneStep(param_1->Object,(double)UEnvQueryTypes::UnlimitedStepTime);
    }
    if (pFVar1 != (FEnvQueryInstance *)0x0) {
      local_res10[0] = (uint)pFVar1->_padding_;
      if (*(int *)&(this->ExternalQueries).field_0x8 != *(int *)&(this->ExternalQueries).field_0x34)
      {
        TSet<TTuple<int,TWeakPtr<FEnvQueryInstance,1>_>,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FEnvQueryInstance,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,TWeakPtr<FEnvQueryInstance,1>_>,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FEnvQueryInstance,1>,0>,FDefaultSetAllocator>
                           *)&this->ExternalQueries,local_res10[0],(int *)local_res10);
      }
    }
    FCsvProfiler::EndExclusiveStat("EnvQueryManager");
    pFVar1 = param_1->Object;
    local_68.ComparisonIndex.Value = LogEQS._4_4_;
    local_68.Number = LogEQS._8_4_;
    local_res20 = (UWorld *)0x0;
    local_res18 = (FVisualLogEntry *)0x0;
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&pFVar1->_padding_ + 4));
    bVar3 = FVisualLogger::CheckVisualLogInputInternal
                      (pUVar4,&local_68,All,&local_res20,&local_res18);
    if (bVar3) {
      UEnvQueryDebugHelpers::LogQueryInternal
                (pFVar1,&local_68,All,local_res20->TimeSeconds,local_res18);
    }
    FEQSDebugger::StoreQuery(&this->EQSDebugger,param_1);
  }
  return;
}

// RunQuery @ 146f6a930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
UEnvQueryManager::RunQuery
          (UEnvQueryManager *this,FEnvQueryRequest *param_1,Type param_2,
          TDelegate<void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy> *param_3
          )

{
  int iVar1;
  TSharedPtr<FEnvQueryInstance,1> local_18;
  
  PrepareQueryInstance(this,&local_18,param_1,param_2);
  iVar1 = RunQuery(this,&local_18,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return iVar1;
}

// RunQuery @ 146f6a980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
UEnvQueryManager::RunQuery
          (UEnvQueryManager *this,TSharedPtr<FEnvQueryInstance,1> *param_1,
          TDelegate<void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy> *param_2
          )

{
  int *piVar1;
  TSharedPtr<FEnvQueryInstance,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  FScriptContainerElement *pFVar8;
  TArray<TSharedPtr<FEnvQueryInstance,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  FName local_res10 [2];
  FName local_res20;
  FString local_38;
  FString local_28;
  
  if (param_1->Object == (FEnvQueryInstance *)0x0) {
    return -1;
  }
  TDelegate<void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>::operator=
            (&param_1->Object->FinishDelegate,param_2);
  pTVar9 = &this->RunningQueries;
  pTVar2 = (TSharedPtr<FEnvQueryInstance,1> *)(pTVar9->AllocatorInstance).Data;
  if (((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->RunningQueries).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  iVar6 = (this->RunningQueries).ArrayNum;
  piVar1 = &(this->RunningQueries).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar9->AllocatorInstance,piVar1);
  }
  (this->RunningQueries).ArrayNum = iVar6 + 1;
  pFVar8 = (pTVar9->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(FEnvQueryInstance **)pFVar8 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVisualLogger::bIsRecording != 0) {
    if ((param_1->Object == (FEnvQueryInstance *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->Object->_padding_ + 4));
    if (pUVar7 == (UObject *)0x0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res10[0].ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
      local_res10[0].Number = *(uint *)&pUVar7->field_0x1c;
      ::FName::ToString(local_res10,&local_38);
    }
    if ((param_1->Object == (FEnvQueryInstance *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    if ((param_1->Object == (FEnvQueryInstance *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->Object->_padding_ + 4));
    FVisualLogger::CategorizedLogfImpl
              (pUVar7,(FName *)&LogEQS.field_0x4,Verbose,L"%hs: Query: %s - Owner: %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (5 < (byte)LogEQS._0_1_) {
    if ((param_1->Object == (FEnvQueryInstance *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->Object->_padding_ + 4));
    if (pUVar7 == (UObject *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res20.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
      local_res20.Number = *(uint *)&pUVar7->field_0x1c;
      ::FName::ToString(&local_res20,&local_28);
    }
    if ((param_1->Object == (FEnvQueryInstance *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((param_1->Object == (FEnvQueryInstance *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  return (int)param_1->Object->_padding_;
}

// SetAllowTimeSlicing @ 146f73b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UEnvQueryManager::SetAllowTimeSlicing(bool param_1)

{
  bAllowEQSTimeSlicing = param_1;
  if (4 < (byte)LogEQS._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
    return;
  }
  return;
}

// StaticRegisterNativesUEnvQueryManager @ 146f76e30

void __cdecl UEnvQueryManager::StaticRegisterNativesUEnvQueryManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UEnvQueryManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 146f78660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UEnvQueryManager::Tick(UEnvQueryManager *this,float param_1)

{
  FWeakObjectPtr *this_00;
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  TAtomic<FMinimalName> TVar4;
  longlong *plVar5;
  FName FVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  uchar auVar11 [8];
  double dVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  double dVar22;
  double dVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  uint uVar29;
  FName *pFVar30;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_Tick> FVar31;
  TStatId TVar32;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_TickWork> FVar33;
  UObject *pUVar34;
  FUObjectItem *pFVar35;
  FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester> FVar36;
  FUObjectItem *this_01;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_TickNotifies> FVar37;
  FThreadStats *pFVar38;
  FThreadStatsPool *pFVar39;
  FEnvQueryInstance *pFVar40;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_AvgInstanceResponseTime> FVar41;
  ulonglong uVar42;
  TReferenceControllerBase<1> *pTVar43;
  FNameEntryId FVar44;
  uint uVar45;
  ulonglong uVar46;
  TStatIdData *pTVar47;
  FName FVar48;
  ulonglong uVar49;
  FName FVar50;
  longlong lVar51;
  ulonglong uVar52;
  uint uVar53;
  byte *pbVar54;
  ulonglong uVar55;
  TDelegate<void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy> *this_02;
  FEnvQueryInstance *pFVar56;
  uint uVar57;
  ulonglong uVar58;
  uint local_424;
  FName local_420;
  byte local_418;
  ulonglong local_410;
  uint local_408;
  FCycleCounter local_400 [2];
  FEnvQueryInstance *local_3e8;
  FColor_u_0 local_3d8;
  FColor_u_0 local_3d4;
  FColor_u_0 local_3d0;
  FColor_u_0 local_3cc;
  FColor_u_0 local_3c8;
  uint local_3c4;
  FName local_3c0;
  FName local_3b8;
  uint local_3b0;
  uint uStack_3ac;
  FName local_3a8;
  uint local_3a0;
  uint uStack_39c;
  FName local_398;
  uint local_390;
  uint uStack_38c;
  FVisualLogEntry *local_388;
  UWorld *local_380;
  FName local_378;
  FName local_370;
  TReferenceControllerBase<1> *local_368;
  FName local_360;
  FName local_358;
  FName local_350;
  FName local_348;
  FName local_338;
  FName local_328;
  FName local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  LARGE_INTEGER local_288;
  LARGE_INTEGER local_280;
  LARGE_INTEGER local_278;
  LARGE_INTEGER local_270;
  FName local_268;
  LARGE_INTEGER local_260;
  LARGE_INTEGER local_258;
  FName local_250;
  FName local_248;
  LARGE_INTEGER local_240;
  FName local_238;
  FName local_230;
  LARGE_INTEGER local_228;
  FName local_220;
  FWeakObjectPtr *local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  ulonglong local_1f8;
  TSharedPtr<FEnvQueryInstance,1> local_1e8;
  FStatMessage local_1d8;
  FStatMessage local_1c8;
  FSourceLocation local_1b8;
  FName local_190;
  FName local_188;
  FName local_180;
  undefined1 local_178 [16];
  FName local_168;
  FName local_160;
  FString local_158;
  FString local_148;
  FEnvQueryInstance *local_138;
  TReferenceControllerBase<1> *pTStack_130;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FReadAccessScope local_e8;
  FReadAccessScope local_d0 [6];
  
  uVar46 = 0;
  FVar31 = StatPtr_STAT_AI_EQS_Tick;
  if (StatPtr_STAT_AI_EQS_Tick == (FThreadSafeStaticStat<FStat_STAT_AI_EQS_Tick>)0x0) {
    pFVar30 = ::FName::FName(&local_160,"STAT_AI_EQS_Tick");
    FVar31 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_Tick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_Tick,*pFVar30,L"Tick",
                        "STATGROUP_AI_EQS","STATCAT_Advanced",L"Environment Query",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar50 = *(FName *)FVar31;
  bVar13 = false;
  bVar28 = false;
  local_318.ComparisonIndex.Value = 0;
  local_318.Number = 0;
  bVar21 = false;
  bVar20 = false;
  bVar19 = false;
  if ((FVar50.ComparisonIndex.Value.Value == 0) && (FVar50.Number == 0)) {
LAB_146f787ef:
    if (FThreadStats::bPrimaryEnable != false) {
      TVar32 = FThreadSafeStaticStatInner<FStat_STAT_AI_EQS_NumInstances,1>::GetStatId
                         ((FThreadSafeStaticStatInner<FStat_STAT_AI_EQS_NumInstances,1> *)
                          &StatPtr_STAT_AI_EQS_NumInstances);
      FThreadStats::AddMessage<__int64>
                (*(FName *)(TVar32.StatIdPtr)->Name,Set,
                 (longlong)*(int *)&(this->EQSDebugger).StoredQueries.field_0x30,false);
    }
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_3d8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_3d8._s_0,(char *)*(FName *)((longlong)FVar31 + 0x10));
      bVar13 = false;
      bVar28 = true;
      bVar20 = false;
      bVar19 = true;
      if (-1 < CpuChannel->Enabled) {
        local_358.ComparisonIndex.Value = FVar50.ComparisonIndex.Value.Value;
        local_358.Number = FVar50.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_358,(wchar_t *)*(FName *)((longlong)FVar31 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryManager.cpp"
                   ,0x1b5);
        bVar13 = true;
        bVar28 = true;
        bVar20 = true;
        bVar19 = true;
      }
    }
    bVar21 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_318 = FVar50;
      FThreadStats::AddMessage(FVar50,CycleScopeStart);
      bVar21 = true;
      bVar19 = bVar28;
      bVar20 = bVar13;
      goto LAB_146f787ef;
    }
  }
  if (__CsvProfilerStat440 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("EnvQueryManager");
    __CsvProfilerStat440 = true;
  }
  FCsvProfiler::BeginExclusiveStat("EnvQueryManager","CSV_EnvQueryManager");
  dVar23 = __real_4170000000000000;
  iVar3 = *(int *)&(this->LocalContextMap).field_0x34;
  if ((0 < iVar3) && (iVar3 <= *(int *)&(this->EQSDebugger).StoredQueries.field_0x30)) {
    QueryPerformanceCounter(&local_260);
    dVar9 = (double)local_260.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar23;
    if ((*(double *)&this->bTestQueriesUsingBreadth < 0.0) ||
       (*(double *)&this->bTestQueriesUsingBreadth + *(double *)&(this->LocalContextMap).field_0x38
        < dVar9)) {
      LogQueryInfo((UEnvQueryManager *)&this[-1].QueryCountWarningInterval,true);
      *(double *)&this->bTestQueriesUsingBreadth = dVar9;
    }
  }
  local_408 = 0;
  dVar9 = (double)*(float *)&(this->LocalContextMap).field_0x2c;
  FVar33 = StatPtr_STAT_AI_EQS_TickWork;
  if (StatPtr_STAT_AI_EQS_TickWork == (FThreadSafeStaticStat<FStat_STAT_AI_EQS_TickWork>)0x0) {
    pFVar30 = ::FName::FName(&local_190,"STAT_AI_EQS_TickWork");
    FVar33 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_TickWork>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_TickWork,*pFVar30,
                        L"Tick - EQS work","STATGROUP_AI_EQS","STATCAT_Advanced",
                        L"Environment Query",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar50 = *(FName *)FVar33;
  bVar26 = false;
  bVar28 = false;
  local_348.ComparisonIndex.Value = 0;
  local_348.Number = 0;
  bVar14 = false;
  bVar13 = false;
  if ((FVar50.ComparisonIndex.Value.Value == 0) && (FVar50.Number == 0)) {
LAB_146f78a3d:
    bVar16 = false;
    bVar15 = false;
    local_360 = local_348;
    FVar50 = local_348;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_3d4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_3d4._s_0,(char *)*(FName *)((longlong)FVar33 + 0x10));
      bVar26 = false;
      bVar28 = true;
      bVar14 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_350.ComparisonIndex.Value = FVar50.ComparisonIndex.Value.Value;
        local_350.Number = FVar50.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_350,(wchar_t *)*(FName *)((longlong)FVar33 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryManager.cpp"
                   ,0x1c2);
        bVar26 = true;
        bVar28 = true;
        bVar14 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146f78a3d;
    local_360 = FVar50;
    FThreadStats::AddMessage(FVar50,CycleScopeStart);
    bVar26 = false;
    bVar15 = true;
    bVar16 = true;
    bVar28 = bVar13;
  }
  dVar22 = __real_408f400000000000;
  local_3c4 = *(uint *)&(this->EQSDebugger).StoredQueries.field_0x30;
  uVar42 = (ulonglong)(int)local_3c4;
  local_424 = 0;
  uVar53 = 0;
  if (0.0 < dVar9) {
    local_410 = 0;
    uVar49 = uVar46;
    uVar52 = uVar46;
    uVar55 = uVar42;
    uVar58 = uVar46;
    local_1f8 = uVar42;
    do {
      uVar53 = (uint)uVar58;
      FVar50 = local_360;
      bVar28 = bVar13;
      bVar26 = bVar14;
      bVar15 = bVar16;
      if (((longlong)uVar55 <= (longlong)uVar46) ||
         ((int)uVar42 <=
          (int)(*(int *)&(this->EQSDebugger).StoredQueries.field_0x38 + (int)uVar49 + uVar53)))
      break;
      QueryPerformanceCounter(&local_258);
      uVar45 = (uint)uVar52;
      dVar10 = 0.0;
      dVar12 = (double)local_258.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      uVar53 = 0;
      if ((int)uVar45 < *(int *)&(this->EQSDebugger).StoredQueries.field_0x30) {
        uVar53 = ~uVar45 >> 0x1f;
      }
      if ((uVar53 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar51 = *(longlong *)&(this->EQSDebugger).StoredQueries.field_0x28;
      local_368 = *(TReferenceControllerBase<1> **)(lVar51 + 8 + uVar46 * 0x10);
      pFVar40 = *(FEnvQueryInstance **)(lVar51 + uVar46 * 0x10);
      if (local_368 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_368->SharedReferenceCount = (atomic<int>)((int)local_368->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_3e8 = pFVar40;
      local_1e8.Object = pFVar40;
      local_1e8.SharedReferenceCount.ReferenceController = local_368;
      if ((pFVar40 == (FEnvQueryInstance *)0x0) || ((int)pFVar40->_padding_ != 0)) {
        local_424 = uVar45 + 1;
        local_410 = uVar46 + 1;
      }
      else {
        this_00 = (FWeakObjectPtr *)((longlong)&pFVar40->_padding_ + 4);
        local_218 = this_00;
        pUVar34 = FWeakObjectPtr::Get(this_00);
        bVar26 = false;
        bVar15 = false;
        local_420.ComparisonIndex.Value = 0;
        local_420.Number = 0;
        local_418 = 0;
        if (pUVar34 != (UObject *)0x0) {
          pFVar35 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar34->field_0xc);
          FVar36 = StatPtr_STAT_UObjectsStatGroupTester;
          if (StatPtr_STAT_UObjectsStatGroupTester ==
              (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)0x0) {
            pFVar30 = ::FName::FName(&local_188,"STAT_UObjectsStatGroupTester");
            FVar36 = (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UObjectsStatGroupTester,
                                *pFVar30,L"STAT_UObjectsStatGroupTester","STATGROUP_UObjects",
                                "STATCAT_Advanced",L"UObjects",true,true,ST_int64,false,false,
                                MCR_Invalid);
          }
          if ((((int)*(undefined8 *)FVar36 == 0) &&
              ((int)((ulonglong)*(undefined8 *)FVar36 >> 0x20) == 0)) ||
             (FThreadStats::bPrimaryEnable == false)) {
            pTVar47 = &TStatId::TStatId_NAME_None;
          }
          else {
            TVar4 = ((pFVar35->StatID).StatIdPtr)->Name;
            if ((TVar4._0_4_ == 0) && (TVar4._4_4_ == 0)) {
              this_01 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar34->field_0xc);
              FUObjectItem::CreateStatID(this_01);
            }
            pTVar47 = (pFVar35->StatID).StatIdPtr;
          }
          if (((SUB84(pTVar47->Name,0) == 0) && (SUB84(pTVar47->Name,4) == 0)) ||
             (FThreadStats::bPrimaryEnable == false)) {
            if (-1 < CpuChannel->Enabled) {
              FScopeCycleCounterUObject::StartObjectTrace
                        ((FScopeCycleCounterUObject *)&local_420,(UObjectBaseUtility *)pUVar34);
            }
          }
          else {
            FVar50 = *(FName *)&pTVar47->Name;
            FVar44 = FVar50.ComparisonIndex.Value;
            uVar53 = FVar50.Number;
            if ((FVar44.Value != 0) || (uVar53 != 0)) {
              if (GCycleStatsShouldEmitNamedEvents != 0) {
                local_3d0.Bits = 0;
                FGenericPlatformMisc::BeginNamedEvent
                          ((FColor *)&local_3d0._s_0,(pTVar47->StatDescriptionAnsi).Ptr);
                local_418 = local_418 | 1;
                if (-1 < CpuChannel->Enabled) {
                  local_3b8.ComparisonIndex.Value = FVar44.Value;
                  local_3b8.Number = uVar53;
                  FCpuProfilerTrace::OutputBeginDynamicEventWithId
                            (&local_3b8,(pTVar47->StatDescriptionWide).Ptr,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                             ,0x3d8);
                  local_418 = local_418 | 2;
                }
              }
              if (FThreadStats::bPrimaryEnable != false) {
                local_420 = FVar50;
                local_3b0 = FVar44.Value;
                uStack_3ac = uVar53;
                FThreadStats::AddMessage(FVar50,CycleScopeStart);
                local_418 = local_418 | 4;
              }
            }
          }
        }
        pTVar47 = (pFVar40->StatId).StatIdPtr;
        local_338.ComparisonIndex.Value = 0;
        local_338.Number = 0;
        bVar25 = false;
        bVar17 = false;
        FVar50 = *(FName *)&pTVar47->Name;
        FVar44 = FVar50.ComparisonIndex.Value;
        uVar53 = FVar50.Number;
        if ((FVar44.Value == 0) && (uVar53 == 0)) {
LAB_146f78e09:
          bVar15 = bVar17;
          bVar26 = bVar25;
          bVar25 = false;
          FVar50 = local_338;
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_3cc.Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_3cc._s_0,(pTVar47->StatDescriptionAnsi).Ptr);
            bVar26 = false;
            bVar15 = true;
            bVar25 = false;
            bVar17 = true;
            if (-1 < CpuChannel->Enabled) {
              local_3a8.ComparisonIndex.Value = FVar44.Value;
              local_3a8.Number = uVar53;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_3a8,(pTVar47->StatDescriptionWide).Ptr,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryManager.cpp"
                         ,0x1df);
              bVar26 = true;
              bVar15 = true;
              bVar25 = true;
              bVar17 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable == false) goto LAB_146f78e09;
          local_3a0 = FVar44.Value;
          uStack_39c = uVar53;
          local_338 = FVar50;
          FThreadStats::AddMessage(FVar50,CycleScopeStart);
          bVar25 = true;
        }
        FEnvQueryInstance::ExecuteOneStep(pFVar40,dVar9);
        if ((int)pFVar40->_padding_ == 0) {
          pbVar54 = &pFVar40->field_0x10c;
          if (pFVar40->bIsCurrentlyRunningAsync != '\0') {
            uVar49 = (ulonglong)((int)uVar49 + 1);
            dVar10 = 0.0;
            goto LAB_146f79728;
          }
          if ((this->LocalContextMap).field_0x30 != '\0') goto LAB_146f79728;
        }
        else {
          if (*(double *)&(this->LocalContextMap).field_0x40 < pFVar40->TotalExecutionTime) {
            if (FVisualLogger::bIsRecording != 0) {
              FEnvQueryInstance::GetExecutionTimeDescription(pFVar40,&local_158);
              pUVar34 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&pFVar40->_padding_ + 4));
              if (pUVar34 == (UObject *)0x0) {
                ::FString::FString(&local_308,L"None");
              }
              else {
                local_250.ComparisonIndex.Value = *(uint *)&pUVar34->field_0x18;
                local_250.Number = *(uint *)&pUVar34->field_0x1c;
                ::FName::ToString(&local_250,&local_308);
              }
              pUVar34 = FWeakObjectPtr::Get(this_00);
              FVisualLogger::CategorizedLogfImpl
                        (pUVar34,(FName *)&LogEQS.field_0x4,Warning,
                         L"Query %s (Owner: %s) has finished in %.2f ms, exceeding the configured limit of %.2f ms. Execution details: %s"
                        );
              if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_308.Data.AllocatorInstance.Data);
              }
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
            }
            if (2 < (byte)LogEQS._0_1_) {
              FEnvQueryInstance::GetExecutionTimeDescription(pFVar40,&local_148);
              pUVar34 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&pFVar40->_padding_ + 4));
              if (pUVar34 == (UObject *)0x0) {
                ::FString::FString(&local_2f8,L"None");
              }
              else {
                local_248.ComparisonIndex.Value = *(uint *)&pUVar34->field_0x18;
                local_248.Number = *(uint *)&pUVar34->field_0x1c;
                ::FName::ToString(&local_248,&local_2f8);
              }
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
              if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
              }
              if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_148.Data.AllocatorInstance.Data);
              }
            }
            pFVar40->bHasLoggedTimeLimitWarning = '\x01';
          }
          FVar37 = StatPtr_STAT_AI_EQS_TickNotifies;
          if (StatPtr_STAT_AI_EQS_TickNotifies ==
              (FThreadSafeStaticStat<FStat_STAT_AI_EQS_TickNotifies>)0x0) {
            pFVar30 = ::FName::FName(&local_180,"STAT_AI_EQS_TickNotifies");
            FVar37 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_TickNotifies>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_TickNotifies,
                                *pFVar30,L"Tick - OnFinished delegates","STATGROUP_AI_EQS",
                                "STATCAT_Advanced",L"Environment Query",true,true,ST_int64,true,
                                false,MCR_Invalid);
          }
          FVar48 = *(FName *)FVar37;
          bVar18 = false;
          bVar17 = false;
          local_328.ComparisonIndex.Value = 0;
          local_328.Number = 0;
          bVar27 = false;
          bVar24 = false;
          FVar44 = FVar48.ComparisonIndex.Value;
          uVar53 = FVar48.Number;
          if ((FVar44.Value == 0) && (uVar53 == 0)) {
LAB_146f79193:
            bVar18 = bVar27;
            bVar17 = bVar24;
            bVar24 = false;
            FVar48 = local_328;
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_3c8.Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_3c8._s_0,(char *)*(FName *)((longlong)FVar37 + 0x10));
              bVar18 = false;
              bVar17 = true;
              bVar27 = false;
              bVar24 = true;
              if (-1 < CpuChannel->Enabled) {
                local_398.ComparisonIndex.Value = FVar44.Value;
                local_398.Number = uVar53;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_398,(wchar_t *)*(FName *)((longlong)FVar37 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryManager.cpp"
                           ,0x1f7);
                bVar18 = true;
                bVar17 = true;
                bVar27 = true;
                bVar24 = true;
              }
            }
            if (FThreadStats::bPrimaryEnable == false) goto LAB_146f79193;
            local_390 = FVar44.Value;
            uStack_38c = uVar53;
            local_328 = FVar48;
            FThreadStats::AddMessage(FVar48,CycleScopeStart);
            bVar24 = true;
          }
          QueryPerformanceCounter(&local_240);
          local_378.ComparisonIndex.Value = LogEQS._4_4_;
          local_378.Number = LogEQS._8_4_;
          local_380 = (UWorld *)0x0;
          local_388 = (FVisualLogEntry *)0x0;
          dVar10 = (double)local_240.QuadPart * FGenericPlatformTime::SecondsPerCycle;
          pUVar34 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&pFVar40->_padding_ + 4));
          bVar27 = FVisualLogger::CheckVisualLogInputInternal
                             (pUVar34,&local_378,All,&local_380,&local_388);
          if (bVar27) {
            UEnvQueryDebugHelpers::LogQueryInternal
                      (pFVar40,&local_378,All,local_380->TimeSeconds,local_388);
          }
          FEQSDebugger::StoreStats((FEQSDebugger *)&this->_padding_,pFVar40);
          FEQSDebugger::StoreQuery((FEQSDebugger *)&this->_padding_,&local_1e8);
          if (FVisualLogger::bIsRecording != 0) {
            pUVar34 = FWeakObjectPtr::Get(this_00);
            if (pUVar34 == (UObject *)0x0) {
              ::FString::FString(&local_2e8,L"None");
            }
            else {
              local_238.ComparisonIndex.Value = *(uint *)&pUVar34->field_0x18;
              local_238.Number = *(uint *)&pUVar34->field_0x1c;
              ::FName::ToString(&local_238,&local_2e8);
            }
            pUVar34 = FWeakObjectPtr::Get(this_00);
            FVisualLogger::CategorizedLogfImpl
                      (pUVar34,(FName *)&LogEQS.field_0x4,Verbose,
                       L"%hs: Finished Query: %s - Owner: %s");
            if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
            }
          }
          if (5 < (byte)LogEQS._0_1_) {
            pUVar34 = FWeakObjectPtr::Get(this_00);
            if (pUVar34 == (UObject *)0x0) {
              ::FString::FString(&local_2d8,L"None");
            }
            else {
              local_230.ComparisonIndex.Value = *(uint *)&pUVar34->field_0x18;
              local_230.Number = *(uint *)&pUVar34->field_0x1c;
              ::FName::ToString(&local_230,&local_2d8);
            }
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
            if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
            }
          }
          pTVar43 = local_368;
          this_02 = &pFVar40->FinishDelegate;
          if (local_368 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_368->SharedReferenceCount =
                 (atomic<int>)((int)local_368->SharedReferenceCount + 1);
            UNLOCK();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_02,&local_e8);
          if ((*(int *)&(pFVar40->FinishDelegate).field_0x10 == 0) ||
             (plVar5 = *(longlong **)&(pFVar40->FinishDelegate).field_0x8, plVar5 == (longlong *)0x0
             )) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_e8);
          }
          else {
            local_138 = local_1e8.Object;
            pTStack_130 = local_1e8.SharedReferenceCount.ReferenceController;
            (**(code **)(*plVar5 + 0x68))(plVar5,&local_138);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_e8);
            pTVar43 = (TReferenceControllerBase<1> *)0x0;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar43);
          QueryPerformanceCounter(&local_228);
          dVar10 = (double)local_228.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar10;
          puVar2 = &(this->LocalContextMap).field_0x48;
          pFVar56 = local_3e8;
          if (*(double *)puVar2 <= dVar10 && dVar10 != *(double *)puVar2) {
            ::FName::FName(&local_3c0,L"Unavailable");
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_02,local_d0);
            if ((*(int *)&(pFVar40->FinishDelegate).field_0x10 == 0) ||
               (plVar5 = *(longlong **)&(pFVar40->FinishDelegate).field_0x8,
               plVar5 == (longlong *)0x0)) {
              local_370.ComparisonIndex.Value = 0;
              local_370.Number = 0;
              pFVar30 = &local_370;
            }
            else {
              pFVar30 = (FName *)(**(code **)(*plVar5 + 8))(plVar5,local_178);
            }
            FVar6 = *pFVar30;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(local_d0);
            local_3c0 = FVar6;
            if (FVisualLogger::bIsRecording != 0) {
              ::FName::ToString(&local_3c0,&local_128);
              pUVar34 = TDelegateBase<FNotThreadSafeDelegateMode>::GetUObject
                                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_02);
              if (pUVar34 == (UObject *)0x0) {
                ::FString::FString(&local_2c8,L"None");
              }
              else {
                local_220.ComparisonIndex.Value = *(uint *)&pUVar34->field_0x18;
                local_220.Number = *(uint *)&pUVar34->field_0x1c;
                ::FName::ToString(&local_220,&local_2c8);
              }
              pUVar34 = FWeakObjectPtr::Get(local_218);
              FVisualLogger::CategorizedLogfImpl
                        (pUVar34,(FName *)&LogEQS.field_0x4,Warning,
                         L"FinishDelegate for EQS query %s took %f seconds and is over handling time limit warning of %f. Delegate info: object = %s method = %s"
                        );
              if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
              }
              if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_128.Data.AllocatorInstance.Data);
              }
            }
            pFVar56 = local_3e8;
            if (2 < (byte)LogEQS._0_1_) {
              ::FName::ToString(&local_3c0,&local_118);
              pUVar34 = TDelegateBase<FNotThreadSafeDelegateMode>::GetUObject
                                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_02);
              if (pUVar34 == (UObject *)0x0) {
                ::FString::FString(&local_2b8,L"None");
              }
              else {
                local_210.ComparisonIndex.Value = *(uint *)&pUVar34->field_0x18;
                local_210.Number = *(uint *)&pUVar34->field_0x1c;
                ::FName::ToString(&local_210,&local_2b8);
              }
              pFVar56 = local_3e8;
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
              if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
              }
              if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_118.Data.AllocatorInstance.Data);
              }
            }
          }
          if (bVar17) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar18) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (bVar24) {
            FThreadStats::AddMessage(FVar48,CycleScopeEnd);
          }
          local_408 = local_408 + 1;
          pbVar54 = &pFVar56->field_0x10c;
          pFVar40 = pFVar56;
LAB_146f79728:
          local_424 = local_424 + 1;
          local_410 = local_410 + 1;
        }
        if ((*(double *)&(this->LocalContextMap).field_0x40 < pFVar40->TotalExecutionTime) &&
           ((*pbVar54 & 8) == 0)) {
          if (FVisualLogger::bIsRecording != 0) {
            FEnvQueryInstance::GetExecutionTimeDescription(pFVar40,&local_108);
            pUVar34 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&pFVar40->_padding_ + 4));
            if (pUVar34 == (UObject *)0x0) {
              ::FString::FString(&local_2a8,L"None");
            }
            else {
              local_208.ComparisonIndex.Value = *(uint *)&pUVar34->field_0x18;
              local_208.Number = *(uint *)&pUVar34->field_0x1c;
              ::FName::ToString(&local_208,&local_2a8);
            }
            pUVar34 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&pFVar40->_padding_ + 4));
            FVisualLogger::CategorizedLogfImpl
                      (pUVar34,(FName *)&LogEQS.field_0x4,Warning,
                       L"Query %s (Owner: %s) has taken %.2f ms so far, exceeding the configured limit of %.2f ms. Execution details: %s"
                      );
            if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
            }
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
          }
          if (2 < (byte)LogEQS._0_1_) {
            FEnvQueryInstance::GetExecutionTimeDescription(pFVar40,&local_f8);
            pUVar34 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&pFVar40->_padding_ + 4));
            if (pUVar34 == (UObject *)0x0) {
              ::FString::FString(&local_298,L"None");
            }
            else {
              local_200.ComparisonIndex.Value = *(uint *)&pUVar34->field_0x18;
              local_200.Number = *(uint *)&pUVar34->field_0x1c;
              ::FName::ToString(&local_200,&local_298);
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
            if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_298.Data.AllocatorInstance.Data);
            }
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
          }
          *pbVar54 = *pbVar54 | 8;
        }
        if (bVar15) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar26) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar25) {
          FThreadStats::AddMessage(FVar50,CycleScopeEnd);
        }
        if ((local_418 & 1) != 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if ((local_418 & 2) != 0) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((local_418 & 4) != 0) {
          FThreadStats::AddMessage(local_420,CycleScopeEnd);
        }
        local_418 = 0;
        uVar55 = local_1f8;
      }
      pTVar43 = local_368;
      uVar52 = (ulonglong)local_424;
      if (((this->LocalContextMap).field_0x30 != '\0') && (local_410 == uVar55)) {
        local_424 = 0;
        local_410 = 0;
        uVar52 = 0;
      }
      uVar46 = local_410;
      if (bAllowEQSTimeSlicing != false) {
        QueryPerformanceCounter(&local_288);
        dVar9 = dVar9 - (((double)local_288.QuadPart * FGenericPlatformTime::SecondsPerCycle -
                         dVar12) - dVar10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
      uVar58 = (ulonglong)local_408;
      uVar42 = (ulonglong)local_3c4;
      FVar50 = local_360;
      uVar53 = local_408;
      bVar26 = bVar14;
      bVar15 = bVar16;
    } while (0.0 < dVar9);
  }
  uVar46 = 0;
  if (bVar28) {
    FGenericPlatformMisc::EndNamedEvent();
    bVar26 = bVar14;
    bVar15 = bVar16;
  }
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
    bVar15 = bVar16;
  }
  if ((((bVar15) && (FVar50 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar38 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar38 == (FThreadStats *)0x0) {
      pFVar39 = FThreadStatsPool::Get();
      pFVar38 = FThreadStatsPool::GetFromPool(pFVar39);
    }
    if (pFVar38->bWaitForExplicitFlush < pFVar38->ScopeCount) {
      local_1d8.NameAndInfo.Index = FVar50.ComparisonIndex.Value;
      local_1d8.NameAndInfo.Number = FVar50.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_280);
      local_1d8.StatData.Pad[4] = '\0';
      local_1d8.StatData.Pad[5] = '\0';
      local_1d8.StatData.Pad[6] = '\0';
      local_1d8.StatData.Pad[7] = '\0';
      local_1d8.StatData.Pad[0] = local_280.s.LowPart._0_1_;
      local_1d8.StatData.Pad[1] = local_280.s.LowPart._1_1_;
      local_1d8.StatData.Pad[2] = local_280.s.LowPart._2_1_;
      local_1d8.StatData.Pad[3] = local_280.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar38,&local_1d8);
      piVar1 = &pFVar38->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar38,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar38,false,false);
      }
    }
  }
  dVar10 = 0.0;
  dVar9 = 0.0;
  uVar53 = *(int *)&(this->EQSDebugger).StoredQueries.field_0x38 + uVar53;
  if ((int)uVar53 < 1) {
LAB_146f79f1e:
    *(undefined4 *)&(this->EQSDebugger).StoredQueries.field_0x38 = 0;
    if ((int)uVar53 < 1) {
      auVar11[0] = '\0';
      auVar11[1] = '\0';
      auVar11[2] = '\0';
      auVar11[3] = '\0';
      auVar11[4] = '\0';
      auVar11[5] = '\0';
      auVar11[6] = '\0';
      auVar11[7] = '\0';
      goto LAB_146f79f42;
    }
  }
  else {
    TVar32 = FThreadSafeStaticStatInner<FStat_STAT_AI_EQS_TickQueryRemovals,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_AI_EQS_TickQueryRemovals,1> *)
                        &StatPtr_STAT_AI_EQS_TickQueryRemovals);
    local_1b8.Impl._Line = 0x254;
    local_1b8.Impl._Column = 4;
    local_1b8.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryManager.cpp"
    ;
    local_1b8.Impl._Function = "void __cdecl UEnvQueryManager::Tick(float)";
    local_400[0].StatId.ComparisonIndex.Value = 0;
    local_400[0].StatId.Number = 0;
    local_400[0].EmittedEvent = 0;
    FCycleCounter::Start
              (local_400,*(TStatIdData **)&(TVar32.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
               &local_1b8);
    uVar45 = *(uint *)&(this->EQSDebugger).StoredQueries.field_0x30;
    if ((uVar53 == uVar45) ||
       (((this->LocalContextMap).field_0x30 == '\0' &&
        (*(int *)&(this->EQSDebugger).StoredQueries.field_0x38 < 1)))) {
      lVar51 = (longlong)(int)uVar53;
      uVar42 = uVar46;
      if (0 < (int)uVar53) {
        do {
          uVar57 = (uint)uVar46;
          uVar45 = 0;
          if ((int)uVar57 < *(int *)&(this->EQSDebugger).StoredQueries.field_0x30) {
            uVar45 = ~uVar57 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar7 = *(longlong *)&(this->EQSDebugger).StoredQueries.field_0x28;
          if ((*(longlong *)(uVar42 + lVar7) == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar28)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((*(int *)(*(longlong *)(uVar42 + lVar7) + 0x28) == 0) &&
             (bVar28 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<636647700980302451>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryManager.cpp"
                                  ,0x273,"QueryInstance->IsFinished()"), bVar28)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((*(longlong *)(uVar42 + lVar7) == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar28)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar7 = *(longlong *)(uVar42 + lVar7);
          QueryPerformanceCounter(&local_270);
          uVar46 = (ulonglong)(uVar57 + 1);
          dVar9 = dVar9 + (((double)local_270.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                           dVar23) - *(double *)(lVar7 + 0x110));
          lVar51 = lVar51 + -1;
          uVar42 = uVar42 + 0x10;
          dVar10 = dVar9;
        } while (lVar51 != 0);
      }
      uVar45 = 0;
      if ((int)uVar53 <= *(int *)&(this->EQSDebugger).StoredQueries.field_0x30) {
        uVar45 = ~uVar53 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar28)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      TArray<TSharedPtr<FEnvQueryInstance,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                ((TArray<TSharedPtr<FEnvQueryInstance,1>,TSizedDefaultAllocator<32>_> *)
                 &(this->EQSDebugger).StoredQueries.field_0x28,0,uVar53);
    }
    else {
      uVar45 = uVar45 - 1;
      if (-1 < (int)uVar45) {
        lVar51 = (longlong)(int)uVar45 << 4;
        uVar57 = uVar53;
        do {
          dVar10 = dVar9;
          if ((int)uVar57 < 1) break;
          puVar2 = &(this->EQSDebugger).StoredQueries.field_0x28;
          uVar29 = 0;
          if ((int)uVar45 < *(int *)&(this->EQSDebugger).StoredQueries.field_0x30) {
            uVar29 = ~uVar45 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar7 = *(longlong *)puVar2;
          pFVar40 = ((TSharedPtr<FEnvQueryInstance,1> *)(lVar7 + lVar51))->Object;
          if (pFVar40 == (FEnvQueryInstance *)0x0) {
            TArray<TSharedPtr<FEnvQueryInstance,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                      ((TArray<TSharedPtr<FEnvQueryInstance,1>,TSizedDefaultAllocator<32>_> *)puVar2
                       ,uVar45,No);
          }
          else if ((int)pFVar40->_padding_ != 0) {
            QueryPerformanceCounter(&local_278);
            dVar10 = (double)local_278.QuadPart * FGenericPlatformTime::SecondsPerCycle;
            pFVar40 = TSharedPtr<FEnvQueryInstance,1>::operator->
                                ((TSharedPtr<FEnvQueryInstance,1> *)(lVar7 + lVar51));
            dVar9 = dVar9 + ((dVar10 + dVar23) - pFVar40->StartTime);
            TArray<TSharedPtr<FEnvQueryInstance,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                      ((TArray<TSharedPtr<FEnvQueryInstance,1>,TSizedDefaultAllocator<32>_> *)puVar2
                       ,uVar45,No);
            uVar57 = uVar57 - 1;
          }
          lVar51 = lVar51 + -0x10;
          uVar45 = uVar45 - 1;
          dVar10 = dVar9;
        } while (-1 < (int)uVar45);
      }
    }
    if ((local_400[0].EmittedEvent & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_400[0].EmittedEvent & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_400[0].EmittedEvent & 4) == 0) goto LAB_146f79f1e;
    FThreadStats::AddMessage(local_400[0].StatId,CycleScopeEnd);
    *(undefined4 *)&(this->EQSDebugger).StoredQueries.field_0x38 = 0;
  }
  auVar11 = (uchar  [8])((dVar10 * dVar22) / (double)(int)uVar53);
LAB_146f79f42:
  if (FThreadStats::bPrimaryEnable != false) {
    FVar41 = StatPtr_STAT_AI_EQS_AvgInstanceResponseTime;
    if (StatPtr_STAT_AI_EQS_AvgInstanceResponseTime ==
        (FThreadSafeStaticStat<FStat_STAT_AI_EQS_AvgInstanceResponseTime>)0x0) {
      pFVar30 = ::FName::FName(&local_168,"STAT_AI_EQS_AvgInstanceResponseTime");
      FVar41 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_AvgInstanceResponseTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_AvgInstanceResponseTime,
                          *pFVar30,L"Avg Instance Response Time (ms)","STATGROUP_AI_EQS",
                          "STATCAT_Advanced",L"Environment Query",true,true,NumBits,false,false,
                          MCR_Invalid);
    }
    FVar50 = *(FName *)FVar41;
    if (((FVar50 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar38 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar38 == (FThreadStats *)0x0) {
        pFVar39 = FThreadStatsPool::Get();
        pFVar38 = FThreadStatsPool::GetFromPool(pFVar39);
      }
      local_1c8.NameAndInfo.Number = FVar50.Number & 0xffff8fff | 0x8000;
      local_268 = FVar50;
      local_1c8.StatData.Pad = auVar11;
      local_1c8.NameAndInfo.Index.Value = FVar50.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar38,&local_1c8);
      FStatsTrace::Set(&local_268,(double)auVar11);
      if (pFVar38->ScopeCount == 0) {
        FThreadStats::Flush(pFVar38,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar38,false,false);
      }
    }
  }
  FCsvProfiler::EndExclusiveStat("EnvQueryManager");
  if (bVar19) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar21) {
    FThreadStats::AddMessage(local_318,CycleScopeEnd);
  }
  return;
}

// UnregisterActiveWrapper @ 146f7ca30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnvQueryManager::UnregisterActiveWrapper
          (UEnvQueryManager *this,UEnvQueryInstanceBlueprintWrapper *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UEnvQueryInstanceBlueprintWrapper *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (this->GCShieldedWrappers).AllocatorInstance.Data;
  iVar6 = (this->GCShieldedWrappers).ArrayNum;
  pFVar9 = pFVar3;
  if (pFVar3 != pFVar3 + (longlong)iVar6 * 8) {
    while (*(UEnvQueryInstanceBlueprintWrapper **)pFVar9 != param_1) {
      pFVar9 = pFVar9 + 8;
      if (pFVar9 == pFVar3 + (longlong)iVar6 * 8) {
        return;
      }
    }
    uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
    if (uVar8 != 0xffffffff) {
      uVar7 = 0;
      if ((int)(uVar8 + 1) <= iVar6) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar2 = (this->GCShieldedWrappers).ArrayNum;
      pFVar3 = (this->GCShieldedWrappers).AllocatorInstance.Data;
      iVar6 = iVar2 + ~uVar8;
      if (1 < iVar6) {
        iVar6 = 1;
      }
      if (iVar6 != 0) {
        memmove(pFVar3 + (longlong)(int)uVar8 * 8,pFVar3 + (longlong)(iVar2 - iVar6) * 8,
                (longlong)iVar6 << 3);
      }
      piVar1 = &(this->GCShieldedWrappers).ArrayNum;
      *piVar1 = *piVar1 + -1;
    }
  }
  return;
}

// UnregisterExternalQuery @ 146f7cb60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnvQueryManager::UnregisterExternalQuery
          (UEnvQueryManager *this,TSharedPtr<FEnvQueryInstance,1> *param_1)

{
  uint local_res10 [6];
  
  if (param_1->Object != (FEnvQueryInstance *)0x0) {
    local_res10[0] = (uint)param_1->Object->_padding_;
    if (*(int *)&(this->ExternalQueries).field_0x8 != *(int *)&(this->ExternalQueries).field_0x34) {
      TSet<TTuple<int,TWeakPtr<FEnvQueryInstance,1>_>,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FEnvQueryInstance,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<int>((TSet<TTuple<int,TWeakPtr<FEnvQueryInstance,1>_>,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FEnvQueryInstance,1>,0>,FDefaultSetAllocator>
                         *)&this->ExternalQueries,local_res10[0],(int *)local_res10);
    }
  }
  return;
}

// execRunEQSQuery @ 146f816a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UEnvQueryManager::execRunEQSQuery(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  UObject *pUVar4;
  code *pcVar5;
  ulonglong uVar6;
  byte bVar7;
  FName FVar8;
  FName FVar9;
  UEnvQuery *pUVar10;
  UObject *pUVar11;
  bool bVar12;
  UEnvQueryManager *pUVar13;
  UAISystem *pUVar14;
  UClass *pUVar15;
  UClass *pUVar16;
  TObjectPtr<UObject>_u_0 TVar17;
  longlong *plVar18;
  undefined1 auStackY_1b8 [32];
  byte local_188 [8];
  FName local_180;
  UClass *local_178;
  TObjectPtr<UObject>_u_0 local_170;
  UEnvQuery *local_168;
  UObject *local_160;
  undefined8 local_158;
  UObject *local_150;
  undefined8 *local_148;
  undefined1 local_138 [128];
  TObjectPtr<UEnvQuery_const_>_u_0 local_b8;
  TObjectPtr<UObject>_u_0 local_b0;
  undefined8 local_a8;
  ForAnyElementType FStack_a0;
  undefined8 local_98;
  TBitArray<FDefaultBitArrayAllocator> local_90;
  undefined8 uStack_70;
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_160 = (UObject *)0x0;
  local_148 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  local_168 = (UEnvQuery *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_170.DebugPtr = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_170,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_170);
  }
  local_188[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_188,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_188);
  }
  local_178 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  pUVar16 = local_178;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_178 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_178);
  }
  pUVar11 = local_160;
  pUVar10 = local_168;
  TVar17 = local_170;
  bVar7 = local_188[0];
  if ((local_168 == (UEnvQuery *)0x0) || (local_170.DebugPtr == (UObject *)0x0)) {
    *(undefined8 *)param_3 = 0;
    return;
  }
  pUVar13 = GetCurrent(local_160);
  pUVar15 = (UClass *)0x0;
  if (pUVar13 == (UEnvQueryManager *)0x0) goto LAB_146f81b71;
  pUVar14 = GetDefault<UAISystem>();
  if (pUVar14->bAllowControllersAsEQSQuerier == false) {
    pUVar15 = Z_Construct_UClass_AController_NoRegister();
    iVar2 = (int)pUVar15->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&(TVar17.DebugPtr)->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&(TVar17.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar2 * 8)
        == &pUVar15->_padding_)) {
      pUVar15 = Z_Construct_UClass_AController_NoRegister();
      iVar2 = (int)pUVar15->_padding_;
      if ((*(int *)(*(longlong *)&(TVar17.DebugPtr)->field_0x10 + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&(TVar17.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar2 * 8)
          != &pUVar15->_padding_)) {
        TVar17.DebugPtr = (UObject *)0x0;
      }
      pUVar4 = *(UObject **)&TVar17.DebugPtr[0x13].field_0x18;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar4 == (UObject *)0x0) goto LAB_146f81936;
      }
      else {
        if (pUVar4 == (UObject *)0x0) {
LAB_146f81936:
          pUVar15 = (UClass *)0x0;
          if (FVisualLogger::bIsRecording != 0) {
            FVisualLogger::CategorizedLogfImpl
                      (TVar17.DebugPtr,(FName *)&LogEQS.field_0x4,Error,
                       L"Trying to run EQS query while not having a pawn! Aborting.");
            *local_148 = 0;
            return;
          }
          goto LAB_146f81b71;
        }
        UE::GC::MarkAsReachable(pUVar4);
      }
      TVar17 = (TObjectPtr<UObject>_u_0)
               *(TObjectPtr<UObject>_u_0 *)&TVar17.DebugPtr[0x13].field_0x18;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar17.DebugPtr != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(TVar17.DebugPtr);
      }
    }
  }
  local_180.ComparisonIndex.Value = 0;
  local_180.Number = 0;
  if ((pUVar16 == (UClass *)0x0) ||
     (pUVar15 = UEnvQueryInstanceBlueprintWrapper::StaticClass(), pUVar15 == (UClass *)0x0)) {
LAB_146f819a4:
    pUVar16 = UEnvQueryInstanceBlueprintWrapper::StaticClass();
  }
  else {
    iVar2 = (int)pUVar15->_padding_;
    if (((int)pUVar16->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar2 * 8) !=
        &pUVar15->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (!bVar12) goto LAB_146f819a4;
    pUVar15 = UEnvQueryInstanceBlueprintWrapper::StaticClass();
    if (pUVar15 == (UClass *)0x0) {
LAB_146f8199f:
      pUVar16 = (UClass *)0x0;
    }
    else {
      iVar2 = (int)pUVar15->_padding_;
      if (((int)pUVar16->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar15->_padding_)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if (!bVar12) goto LAB_146f8199f;
    }
  }
  FVar8 = local_180;
  local_158 = 0;
  if (local_180 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar13,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar15 = UEnvQueryInstanceBlueprintWrapper::StaticClass();
  CheckIsClassChildOf_Internal(pUVar15,pUVar16);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_138,pUVar16);
  FVar9 = local_180;
  local_180.ComparisonIndex = FVar8.ComparisonIndex.Value;
  local_180.Number = FVar8.Number;
  local_138._16_4_ = local_180.ComparisonIndex.Value;
  local_138._20_4_ = local_180.Number;
  local_138._48_8_ = (FObjectInstancingGraph *)0x0;
  local_138._56_8_ = (UPackage *)0x0;
  local_138._24_4_ = RF_NoFlags;
  local_138._40_8_ = (UObject *)0x0;
  local_138[0x20] = false;
  local_180 = FVar9;
  local_138._8_8_ = pUVar13;
  pUVar15 = (UClass *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
  if (local_138._64_8_ != 0) {
    plVar18 = (longlong *)(local_138 + 0x50);
    if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_138._104_8_;
    }
    (**(code **)(*plVar18 + 0x10))(plVar18);
  }
  if ((pUVar15 == (UClass *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("QueryInstanceWrapper",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryManager.cpp"
                          ,0x432,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_b8.DebugPtr = pUVar10;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_b0 = TVar17;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar17.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(TVar17.DebugPtr);
  }
  local_98 = 0;
  local_a8 = 0;
  FStack_a0.Data = (FScriptContainerElement *)0x0;
  local_90.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_90.MaxBits = _UNK_150631d94;
  uStack_70 = _UNK_150631d98;
  local_90.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_150 = pUVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar11);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar15->_padding_,(FObjectPtr)&local_150);
  UEnvQueryInstanceBlueprintWrapper::RunQuery
            ((UEnvQueryInstanceBlueprintWrapper *)pUVar15,(uint)bVar7,
             (FEnvQueryRequest *)&local_b8.ObjectPtr);
  local_58 = 0;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  uVar6 = local_98 >> 0x20;
  local_98 = local_98 & 0xffffffff00000000;
  if ((int)uVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&FStack_a0,0,(int *)((longlong)&local_98 + 4));
  }
  iVar2 = local_90.MaxBits;
  uStack_70 = 0xffffffff;
  local_90._24_8_ = (ulonglong)(uint)local_90.MaxBits << 0x20;
  if (0x80 < (uint)iVar2) {
    local_90.NumBits = 0;
    local_90.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_90,0);
  }
  if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
  }
  if (FStack_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a0.Data);
  }
LAB_146f81b71:
  *local_148 = pUVar15;
  return;
}

