// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 27

// FPCGRuntimeGenScheduler @ 149f31b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGRuntimeGenScheduler * __thiscall
FPCGRuntimeGenScheduler::FPCGRuntimeGenScheduler
          (FPCGRuntimeGenScheduler *this,UWorld *param_1,FPCGActorAndComponentMapping *param_2)

{
  int iVar1;
  code *pcVar2;
  TConsoleVariableData<bool> *pTVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  FPCGRuntimeGenScheduler *pFVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  
  pUVar9 = (UClass *)0x0;
  *(undefined8 *)&(this->GeneratedComponents).Elements = 0;
  *(undefined8 *)&(this->GeneratedComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GeneratedComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GeneratedComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GeneratedComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GeneratedComponents).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GeneratedComponents).Elements.field_0x34 = 0;
  (this->GeneratedComponents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GeneratedComponents).HashSize = 0;
  *(undefined8 *)&(this->GeneratedComponentsToRemove).Elements = 0;
  *(undefined8 *)&(this->GeneratedComponentsToRemove).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GeneratedComponentsToRemove).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GeneratedComponentsToRemove).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GeneratedComponentsToRemove).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GeneratedComponentsToRemove).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GeneratedComponentsToRemove).Elements.field_0x34 = 0;
  (this->GeneratedComponentsToRemove).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GeneratedComponentsToRemove).HashSize = 0;
  *(undefined8 *)&this->ComponentsToGenerate = 0;
  *(undefined8 *)&(this->ComponentsToGenerate).field_0x8 = 0;
  *(undefined8 *)&(this->ComponentsToGenerate).field_0x20 = 0;
  *(undefined4 *)&(this->ComponentsToGenerate).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentsToGenerate).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentsToGenerate).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ComponentsToGenerate).field_0x34 = 0;
  *(undefined8 *)&(this->ComponentsToGenerate).field_0x40 = 0;
  *(undefined4 *)&(this->ComponentsToGenerate).field_0x48 = 0;
  *(undefined8 *)&(this->GenSources).Elements = 0;
  *(undefined8 *)&(this->GenSources).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GenSources).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GenSources).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GenSources).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GenSources).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GenSources).Elements.field_0x34 = 0;
  (this->GenSources).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GenSources).HashSize = 0;
  (this->PartitionActorPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartitionActorPool).ArrayNum = 0;
  (this->PartitionActorPool).ArrayMax = 0;
  this->ActorAndComponentMapping = (FPCGActorAndComponentMapping *)0x0;
  this->GenSourceManager = (FPCGGenSourceManager *)0x0;
  this->Subsystem = (UPCGSubsystem *)0x0;
  this->World = (UWorld *)0x0;
  this->bPoolingWasEnabledLastFrame = true;
  this->BasePoolSizeLastFrame = 0;
  this->FramesUntilGeneration = 0;
  *(undefined8 *)&this->CachedStreamingQueryResults = 0;
  *(undefined8 *)&(this->CachedStreamingQueryResults).field_0x8 = 0;
  *(undefined8 *)&(this->CachedStreamingQueryResults).field_0x20 = 0;
  this->PartitionActorPoolSize = 0;
  this->bActorFlushRequested = false;
  this->bAnyRuntimeGenComponentsExist = false;
  this->bAnyRuntimeGenComponentsExistDirty = false;
  this->OriginalComponentBeingGenerated = (UPCGComponent *)0x0;
  *(undefined4 *)&(this->CachedStreamingQueryResults).field_0x28 = 0;
  *(undefined4 *)&(this->CachedStreamingQueryResults).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedStreamingQueryResults).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedStreamingQueryResults).field_0x34 = 0;
  *(undefined8 *)&(this->CachedStreamingQueryResults).field_0x40 = 0;
  *(undefined4 *)&(this->CachedStreamingQueryResults).field_0x48 = 0;
  *(undefined8 *)&(this->ChangeDetector).StateCache = 0;
  *(undefined8 *)&(this->ChangeDetector).StateCache.field_0x8 = 0;
  *(undefined8 *)&(this->ChangeDetector).StateCache.field_0x20 = 0;
  *(undefined4 *)&(this->ChangeDetector).StateCache.field_0x28 = 0;
  *(undefined4 *)&(this->ChangeDetector).StateCache.field_0x2c = 0x80;
  *(undefined4 *)&(this->ChangeDetector).StateCache.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChangeDetector).StateCache.field_0x34 = 0;
  *(undefined8 *)&(this->ChangeDetector).StateCache.field_0x40 = 0;
  *(undefined4 *)&(this->ChangeDetector).StateCache.field_0x48 = 0;
  (this->ChangeDetector).InputsPendingDeletion.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ChangeDetector).InputsPendingDeletion.ArrayNum = 0;
  (this->ChangeDetector).InputsPendingDeletion.ArrayMax = 0;
  if (((param_1 == (UWorld *)0x0) || (param_2 == (FPCGActorAndComponentMapping *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InWorld && InActorAndComponentMapping",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                         ,0xc1,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FPCGRuntimeGenScheduler *)(*pcVar2)();
    return pFVar6;
  }
  this->World = param_1;
  if (param_1 == (UWorld *)0x0) {
LAB_149f31d9d:
    pUVar7 = pUVar9;
  }
  else {
    pUVar7 = UPCGSubsystem::StaticClass();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar7 != (UClass *)0x0) goto LAB_149f31d53;
LAB_149f31d81:
      pUVar7 = pUVar9;
    }
    else {
      if (pUVar7 == (UClass *)0x0) goto LAB_149f31d81;
      UE::GC::MarkAsReachable((UObject *)pUVar7);
LAB_149f31d53:
      pUVar8 = UPCGSubsystem::StaticClass();
      if (pUVar8 == (UClass *)0x0) goto LAB_149f31d81;
      iVar1 = (int)pUVar8->_padding_;
      if (((int)pUVar7->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_149f31d81;
    }
    pUVar7 = (UClass *)
             FSubsystemCollectionBase::GetSubsystemInternal
                       ((FSubsystemCollectionBase *)&param_1->SubsystemCollection,pUVar7);
    if ((pUVar7 == (UClass *)0x0) || ((char)pUVar7->_padding_ == '\0')) goto LAB_149f31d9d;
  }
  this->Subsystem = (UPCGSubsystem *)pUVar7;
  this->ActorAndComponentMapping = param_2;
  pUVar8 = ::operator_new(200);
  pUVar7 = pUVar9;
  if (pUVar8 != (UClass *)0x0) {
    *(longlong *)&pUVar8->_padding_ = 0;
    pUVar8->_padding_ = 0;
    pUVar8->_padding_ = 0;
    *(undefined4 *)&pUVar8->_padding_ = 0;
    *(undefined4 *)((longlong)&pUVar8->_padding_ + 4) = 0x80;
    *(undefined4 *)&pUVar8->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pUVar8->_padding_ + 4) = 0;
    pUVar8->_padding_ = 0;
    *(undefined4 *)&pUVar8->_padding_ = 0;
    *(longlong *)
     &((TSet<TScriptInterface<IPCGGenSourceBase>,DefaultKeyFuncs<TScriptInterface<IPCGGenSourceBase>,0>,FDefaultSetAllocator>
        *)&pUVar8->_padding_)->Elements = 0;
    pUVar8->_padding_ = 0;
    pUVar8->_padding_ = 0;
    *(undefined4 *)
     &((TUniquePtr<FPCGActorAndComponentMapping,TDefaultDelete<FPCGActorAndComponentMapping>_> *)
      &pUVar8->_padding_)->Ptr = 0;
    *(undefined4 *)
     ((longlong)
      &((TUniquePtr<FPCGActorAndComponentMapping,TDefaultDelete<FPCGActorAndComponentMapping>_> *)
       &pUVar8->_padding_)->Ptr + 4) = 0x80;
    *(undefined4 *)
     &(((TArray<TFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *)&pUVar8->_padding_)->
      AllocatorInstance).Data = 0xffffffff;
    *(undefined4 *)
     ((longlong)
      &(((TArray<TFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *)&pUVar8->_padding_)->
       AllocatorInstance).Data + 4) = 0;
    (((FWindowsRecursiveMutex *)&pUVar8->_padding_)->CriticalSection).Opaque1[0] = (void *)0x0;
    *(long *)&pUVar8->_padding_ = 0;
    (((TArray<TObjectPtr<UPCGGenSourceWPStreamingSource>,TSizedDefaultAllocator<32>_> *)
     &pUVar8->_padding_)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pUVar8->_padding_ = 0;
    *(bool *)&pUVar8->ClassConstructor = false;
    *(bool *)&(pUVar8->CppClassStaticFunctions).AddReferencedObjects = false;
    pUVar8->ClassVTableHelperCtorCaller = (_func___cdecl_UObject_ptr_FVTableHelper_ptr *)param_1;
    pUVar7 = pUVar8;
  }
  this->GenSourceManager = (FPCGGenSourceManager *)pUVar7;
  pTVar3 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnablePooling.Ref;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    pUVar7 = (UClass *)&DAT_00000001;
    if (!bVar5) goto LAB_149f31e64;
  }
  pUVar7 = pUVar9;
LAB_149f31e64:
  this->bPoolingWasEnabledLastFrame =
       pTVar3->ShadowedValue
       [(longlong)
        &((TMap<FName,TScriptInterface<IPCGGenSourceBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>_>
           *)&pUVar7->_padding_)->field_0x0];
  pTVar4 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationBasePoolSize.Ref;
  bVar5 = IsInParallelGameThread();
  if ((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) {
    pUVar9 = (UClass *)&DAT_00000004;
  }
  this->BasePoolSizeLastFrame =
       *(uint *)((longlong)
                 &((TMap<FName,TScriptInterface<IPCGGenSourceBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>_>
                    *)&pUVar9->_padding_)->field_0x0 + (longlong)pTVar4->ShadowedValue);
  pTVar4 = PCGRuntimeGenSchedulerHelpers::CVarFramesBeforeFirstGenerate.Ref;
  bVar5 = IsInParallelGameThread();
  if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FPCGRuntimeGenScheduler *)(*pcVar2)();
    return pFVar6;
  }
  this->FramesUntilGeneration = pTVar4->ShadowedValue[0];
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
  ::AddRaw<FPCGRuntimeGenScheduler>
            (&FLevelStreamingDelegates::OnLevelStreamingStateChanged,
             (FPCGRuntimeGenScheduler *)&stack0x00000008,(pmf_94c223a1)this);
  return this;
}

// ~FPCGRuntimeGenScheduler @ 149f34420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGRuntimeGenScheduler::~FPCGRuntimeGenScheduler(FPCGRuntimeGenScheduler *this)

{
  FPCGGenSourceManager *this_00;
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  
  this_00 = this->GenSourceManager;
  if (this_00 != (FPCGGenSourceManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FGameModeEvents::GameModePostLoginEvent,this_00);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FGameModeEvents::GameModeLogoutEvent,this_00);
    pFVar1 = (this_00->WorldPartitionGenSources).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this_00->RegisteredGenSources).HashSize = 0;
    FVar2 = (this_00->RegisteredGenSources).Hash.SecondaryData;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    TSparseArray<TSparseSetElement<TScriptInterface<IPCGGenSourceBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TScriptInterface<IPCGGenSourceBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(this_00->RegisteredGenSources).Elements);
    *(undefined4 *)&(this_00->RegisteredNamedGenSources).field_0x48 = 0;
    pvVar3 = *(void **)&(this_00->RegisteredNamedGenSources).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TScriptInterface<IPCGGenSourceBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TScriptInterface<IPCGGenSourceBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,TScriptInterface<IPCGGenSourceBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    ::operator_delete(this_00,200);
  }
  this->GenSourceManager = (FPCGGenSourceManager *)0x0;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FLevelStreamingDelegates::OnLevelStreamingStateChanged,this);
  pFVar1 = (this->ChangeDetector).InputsPendingDeletion.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ChangeDetector).StateCache.field_0x48 = 0;
  pvVar3 = *(void **)&(this->ChangeDetector).StateCache.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChangeDetector);
  *(undefined4 *)&(this->CachedStreamingQueryResults).field_0x48 = 0;
  pvVar3 = *(void **)&(this->CachedStreamingQueryResults).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UE::Math::TVector<double>,float>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UE::Math::TVector<double>,float>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UE::Math::TVector<double>,float>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedStreamingQueryResults);
  pFVar1 = (this->PartitionActorPool).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->GenSources).HashSize = 0;
  FVar2 = (this->GenSources).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<IPCGGenSourceBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<IPCGGenSourceBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->GenSources).Elements);
  *(undefined4 *)&(this->ComponentsToGenerate).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ComponentsToGenerate).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComponentsToGenerate);
  (this->GeneratedComponentsToRemove).HashSize = 0;
  FVar2 = (this->GeneratedComponentsToRemove).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->GeneratedComponentsToRemove).Elements);
  (this->GeneratedComponents).HashSize = 0;
  FVar2 = (this->GeneratedComponents).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator() @ 149f36a00

bool __thiscall
`FPCGRuntimeGenScheduler::TickCleanup'::__l2::<lambda_1>::operator()
          (void *this,UPCGSchedulingPolicyBase *param_1,FPCGGridDescriptor *param_2,
          TBox<double> *param_3,double *param_4)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  undefined1 local_res8 [8];
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  char local_70;
  double local_58;
  
  plVar4 = *(longlong **)this;
  iVar3 = (int)plVar4[5];
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar4 + 2);
  iVar17 = 0;
  uVar11 = 1;
  iVar16 = 0;
  iVar12 = 0;
  if (iVar3 != 0) {
    pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)plVar4[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar4[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = pTVar1;
    }
    uVar15 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar17;
      iVar16 = iVar16 + 0x20;
      iVar17 = iVar17 + 1;
      iVar12 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar17) goto LAB_149f36aad;
      uVar15 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar11 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar12 = iVar16 + -1 + (int)lVar13;
    if (iVar3 < iVar12) {
      iVar12 = iVar3;
    }
  }
LAB_149f36aad:
  uVar15 = *(uint *)(plVar4 + 5);
  uVar18 = uVar15 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uVar11,iVar17);
  TStack_b0.CurrentBitIndex = iVar12;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar15 >> 5;
  TStack_b0._28_4_ = iVar12;
  TStack_b0.BaseBitIndex = iVar16;
  uStack_90 = CONCAT44(uStack_cc,(int)plVar4[1] - *(int *)((longlong)plVar4 + 0x34));
  TStack_b0.Array = pTVar1;
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  uVar11 = *(uint *)(plVar4 + 5);
  if (uVar15 != uVar11) {
    pTVar14 = pTVar1;
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar4[4] !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)plVar4[4];
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) &
             *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar17;
      uVar18 = uVar18 + 0x20;
      iVar17 = iVar17 + 1;
      uVar15 = uVar11;
      if ((int)(((int)(uVar11 - 1) >> 0x1f & 0x1fU) + (uVar11 - 1)) >> 5 < iVar17)
      goto LAB_149f36bc9;
      uVar15 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar18;
    if ((int)uVar11 < (int)uVar15) {
      uVar15 = uVar11;
    }
  }
LAB_149f36bc9:
  do {
    if ((int)plVar4[1] - *(int *)((longlong)plVar4 + 0x34) != (int)uStack_90) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<IPCGGenSourceBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_b0.CurrentBitIndex == uVar15) && (TStack_b0.Array == pTVar1)) {
      return true;
    }
    plVar5 = *(longlong **)(*plVar4 + (longlong)TStack_b0.CurrentBitIndex * 0x10);
    if (plVar5 == (longlong *)0x0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4830013997950436178>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                         ,0x352,"GenSource");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_88);
      if (local_70 != '\0') {
        local_58 = local_78;
        dVar21 = local_78;
        if (param_2->bIs2DGrid != false) {
          dVar21 = (param_3->Min).field0_0x0._s_0.Z;
        }
        dVar22 = (param_3->Min).field0_0x0._s_0.X;
        dVar7 = 0.0;
        if ((local_88 < dVar22) || (dVar22 = (param_3->Max).field0_0x0._s_0.X, dVar22 < local_88)) {
          dVar7 = (local_88 - dVar22) * (local_88 - dVar22);
        }
        dVar22 = (param_3->Min).field0_0x0._s_0.Y;
        if ((dStack_80 < dVar22) || (dVar22 = (param_3->Max).field0_0x0._s_0.Y, dVar22 < dStack_80))
        {
          dVar7 = dVar7 + (dStack_80 - dVar22) * (dStack_80 - dVar22);
        }
        dVar22 = *(double *)((longlong)&(param_3->Min).field0_0x0 + 0x10);
        uVar19 = SUB84(dVar22,0);
        uVar20 = (undefined4)((ulonglong)dVar22 >> 0x20);
        if (dVar21 < dVar22) {
LAB_149f36ce6:
          dVar21 = dVar21 - (double)CONCAT44(uVar20,uVar19);
          dVar7 = dVar7 + dVar21 * dVar21;
        }
        else {
          dVar22 = *(double *)((longlong)&(param_3->Max).field0_0x0 + 0x10);
          uVar19 = SUB84(dVar22,0);
          uVar20 = (undefined4)((ulonglong)dVar22 >> 0x20);
          if (dVar22 < dVar21) goto LAB_149f36ce6;
        }
        if ((dVar7 < *param_4 || dVar7 == *param_4) &&
           ((param_1 == (UPCGSchedulingPolicyBase *)0x0 ||
            (cVar10 = (**(code **)(param_1->_padding_ + 0x2c0))
                                (param_1,plVar5,param_3,param_2->bIs2DGrid), cVar10 == '\0')))) {
          return false;
        }
      }
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  } while( true );
}

// operator() @ 149f36d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FPCGRuntimeGenScheduler::TickQueueComponentsForGeneration'::__l2::<lambda_1>::operator()
          (void *this,FGridGenerationKey *param_1,IPCGGenSourceBase *param_2,
          UPCGSchedulingPolicyBase *param_3,TBox<double> *param_4,bool param_5)

{
  TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar1;
  int iVar2;
  longlong lVar3;
  double *pdVar4;
  TPairInitializer<FPCGRuntimeGenScheduler::FGridGenerationKey_const_&,double_const_&> local_res8;
  FGridGenerationKey *local_28;
  double **local_20;
  
  if (param_3 == (UPCGSchedulingPolicyBase *)0x0) {
    pdVar4 = (double *)0x0;
  }
  else {
    pdVar4 = (double *)(**(code **)(param_3->_padding_ + 0x2b0))(param_3,param_2,param_4,param_5);
  }
  local_res8.Value = pdVar4;
  if ((double)__real_3ff0000000000000 <= (double)pdVar4) {
    local_res8.Value = __real_3ff0000000000000;
  }
  if ((double)local_res8.Value <= 0.0) {
    local_res8.Value = (double *)0x0;
  }
  if (((double)pdVar4 != (double)local_res8.Value) && (2 < (byte)LogPCG._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  this_00 = *(TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>
              **)this;
  local_res8.Value = (double *)((double)local_res8.Value + (double)param_1->GridSize);
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FPCGRuntimeGenScheduler::FGridGenerationKey>(this_00,uVar1,param_1);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x38 + *(longlong *)&this_00->Elements;
    pdVar4 = (double *)(lVar3 + 0x28);
    if (lVar3 == 0) {
      pdVar4 = (double *)0x0;
    }
    if (pdVar4 != (double *)0x0) {
      if ((double)local_res8.Value < *pdVar4 || (double)local_res8.Value == *pdVar4) {
        return;
      }
      *pdVar4 = (double)local_res8.Value;
      return;
    }
  }
  local_20 = &local_res8.Value;
  local_28 = param_1;
  TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FPCGRuntimeGenScheduler::FGridGenerationKey_const_&,double_const_&>_>
            (*(TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>
               **)this,&local_res8,(bool *)&local_28);
  return;
}

// operator() @ 149f376a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`FPCGRuntimeGenScheduler::RefreshComponent'::__l94::<lambda_1>::operator()
          (void *this,UPCGComponent *param_1)

{
  UPCGComponent *this_00;
  longlong *plVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  APCGPartitionActor *this_01;
  TIntVector3<int> *pTVar5;
  char *pcVar6;
  longlong *plVar7;
  int iVar8;
  FWeakObjectPtr local_res8;
  UPCGComponent *local_res10;
  UPCGComponent *local_res18;
  FName local_res20;
  TIntVector3<int> local_98;
  FString local_88;
  FGridGenerationKey local_78;
  
  if ((param_1 == (UPCGComponent *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                         ,0x74d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_01 = CastChecked<APCGPartitionActor,AActor>((AActor *)param_1->_padding_);
  this_00 = *(UPCGComponent **)((longlong)this + 8);
  pTVar5 = APCGPartitionActor::GetGridCoord(this_01,&local_98);
  local_78.GridSize = this_01->PCGGridSize;
  local_78.bUse2DGrid = false;
  local_78.GridCoords.field0_0x0._0_8_ = *(undefined8 *)&pTVar5->field0_0x0;
  local_78.GridCoords.field0_0x0._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
  local_78.OriginalComponent.ObjectKey.ObjectIndex = 0;
  local_78.OriginalComponent.ObjectKey.ObjectSerialNumber = 0;
  if (this_00 != (UPCGComponent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    local_78.OriginalComponent.ObjectKey = (FObjectKey)local_res8;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_78.CachedLocalComponent.WeakPtr.ObjectIndex = 0;
  local_78.CachedLocalComponent.WeakPtr.ObjectSerialNumber = 0;
  local_res18 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_78.CachedLocalComponent.WeakPtr,(FObjectPtr)&local_res18);
  if (this_00 == (UPCGComponent *)0x0) {
    local_78.bUse2DGrid = true;
  }
  else {
    local_78.bUse2DGrid = UPCGComponent::Use2DGrid(this_00);
  }
  plVar1 = *(longlong **)this;
  uVar4 = ::GetTypeHash(&local_78);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar7 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar7 = plVar1 + 7;
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar1[9] - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      do {
        pcVar6 = (char *)((longlong)iVar8 * 0x2c + *plVar1);
        if (((((*(uint *)(pcVar6 + 4) == local_78.GridSize) &&
              (*(int *)(pcVar6 + 8) == local_78.GridCoords.field0_0x0._s_0.X)) &&
             (*(int *)(pcVar6 + 0xc) == local_78.GridCoords.field0_0x0._s_0.Y)) &&
            ((*(int *)(pcVar6 + 0x10) == local_78.GridCoords.field0_0x0._s_0.Z &&
             ((bool)*pcVar6 == local_78.bUse2DGrid)))) &&
           ((*(int *)(pcVar6 + 0x14) == local_78.OriginalComponent.ObjectKey.ObjectIndex &&
            (*(int *)(pcVar6 + 0x18) == local_78.OriginalComponent.ObjectKey.ObjectSerialNumber))))
        {
          if (iVar8 == -1) {
            return;
          }
          if (pcVar6 == (char *)0x0) {
            return;
          }
          if ((*(char *)((longlong)this + 0x10) != '\0') && (2 < (byte)LogPCG._0_1_)) {
            iVar8 = (int)this_01->_padding_;
            if (iVar8 < 2) {
              local_res20 = (FName)this_01->_padding_;
              ::FName::ToString(&local_res20,&local_88);
            }
            else {
              _Src = (void *)this_01->_padding_;
              local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_88.Data.ArrayNum = iVar8;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar8,0,(ForAnyElementType *)&local_88,iVar8,&local_88.Data.ArrayMax);
              memcpy(local_88.Data.AllocatorInstance.Data,_Src,(longlong)iVar8 * 2);
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
          }
          FPCGRuntimeGenScheduler::CleanupComponent
                    (*(FPCGRuntimeGenScheduler **)this,&local_78,param_1);
          return;
        }
        iVar8 = *(int *)(pcVar6 + 0x24);
      } while (iVar8 != -1);
    }
  }
  return;
}

// operator() @ 149f37f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
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
`FPCGRuntimeGenScheduler::TickCleanup'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  int *piVar4;
  UPCGSchedulingPolicyBase *pUVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  EPCGHiGenGrid EVar12;
  UObject *pUVar13;
  longlong lVar14;
  UPCGComponent *this_00;
  UPCGComponent *this_01;
  UClass *pUVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStackY_238 [32];
  FLLMScope local_204;
  FPCGGridDescriptor local_200;
  FWeakObjectPtr local_1e8;
  FWeakObjectPtr local_1e0;
  double local_1d8;
  FName local_1d0;
  UPCGSchedulingPolicyBase *local_1c8;
  FMemScope local_1c0;
  TIntVector3<int>_u_0 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  TBox<double> local_d0;
  TBox<double> local_98;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_238;
  lVar18 = (longlong)param_1;
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId900,"SelectComponentForCleanup",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
               ,900);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId900);
  }
  FLLMScope::FLLMScope(&local_204,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_1d0 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_1c0,&local_1d0,true);
  plVar3 = *(longlong **)this;
  uVar16 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar16 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar14 = *plVar3;
  local_1e8.ObjectIndex = *(int *)(lVar14 + 0x14 + lVar18 * 0x24);
  local_1e8.ObjectSerialNumber = *(int *)(lVar14 + 0x18 + lVar18 * 0x24);
  pUVar13 = FWeakObjectPtr::Get(&local_1e8);
  if (pUVar13 == (UObject *)0x0) {
    piVar4 = *(int **)((longlong)this + 0x20);
    LOCK();
    iVar17 = *piVar4;
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    puVar1 = (undefined8 *)(lVar14 + lVar18 * 0x24);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar18 * 0x24);
    uVar9 = *puVar1;
    uVar10 = puVar1[1];
    uVar24 = *(undefined4 *)(lVar14 + 0x20 + lVar18 * 0x24);
    lVar18 = *(longlong *)((longlong)this + 0x10);
    if ((iVar17 < 0 || *(int *)(lVar18 + 0x248) <= iVar17) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(longlong *)(lVar18 + 0x240) != 0) {
      lVar18 = *(longlong *)(lVar18 + 0x240);
    }
    lVar14 = (longlong)iVar17;
    puVar1 = (undefined8 *)(lVar18 + lVar14 * 0x24);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1 = (undefined8 *)(lVar18 + 0x10 + lVar14 * 0x24);
    *puVar1 = uVar9;
    puVar1[1] = uVar10;
    *(undefined4 *)(lVar18 + 0x20 + lVar14 * 0x24) = uVar24;
    goto LAB_149f385e8;
  }
  local_200.GridSize = *(uint *)(lVar14 + 4 + lVar18 * 0x24);
  local_198 = 0;
  local_200.bIs2DGrid = *(bool *)(lVar14 + lVar18 * 0x24);
  uStack_1a0 = 0;
  local_1a8 = (ulonglong)CONCAT15(1,CONCAT14(local_200.bIs2DGrid,local_200.GridSize));
  local_200.bIsRuntime = true;
  local_200.RuntimeHash = 0;
  local_200.Hash.bIsSet = false;
  EVar12 = PCGHiGenGrid::GridSizeToGrid(local_200.GridSize);
  local_1b8._0_8_ = *(undefined8 *)(lVar14 + 8 + lVar18 * 0x24);
  local_1b8._s_0.Z = *(int *)(lVar14 + 0x10 + lVar18 * 0x24);
  local_1e0.ObjectIndex = *(int *)(lVar14 + 0x14 + lVar18 * 0x24);
  local_1e0.ObjectSerialNumber = *(int *)(lVar14 + 0x18 + lVar18 * 0x24);
  this_00 = (UPCGComponent *)FWeakObjectPtr::Get(&local_1e0);
  if ((this_00 == (UPCGComponent *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("OriginalComponent",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                          ,0x394,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar5 = (this_00->SchedulingPolicy).field0_0x0.DebugPtr;
  local_1c8 = pUVar5;
  if ((pUVar5 == (UPCGSchedulingPolicyBase *)0x0) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4830013997950436247>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                          ,0x397,"Policy"), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_1d8 = UPCGComponent::GetCleanupRadiusFromGrid(this_00,EVar12);
  local_1d8 = local_1d8 * local_1d8;
  if (EVar12 == Unbounded) {
    if (this_00->bActivated == false) {
      piVar4 = *(int **)((longlong)this + 0x18);
      LOCK();
      iVar17 = *piVar4;
      *piVar4 = *piVar4 + 1;
      UNLOCK();
      local_170 = *(undefined4 *)(lVar14 + 0x20 + lVar18 * 0x24);
      puVar2 = (undefined4 *)(lVar14 + lVar18 * 0x24);
      uVar24 = *puVar2;
      uVar25 = puVar2[1];
      uVar26 = puVar2[2];
      uVar27 = puVar2[3];
      puVar2 = (undefined4 *)(lVar14 + 0x10 + lVar18 * 0x24);
      uVar28 = *puVar2;
      uVar29 = puVar2[1];
      uVar30 = puVar2[2];
      uVar31 = puVar2[3];
      lVar18 = *(longlong *)((longlong)this + 8);
      local_190 = uVar24;
      uStack_18c = uVar25;
      uStack_188 = uVar26;
      uStack_184 = uVar27;
      local_180 = uVar28;
      uStack_17c = uVar29;
      uStack_178 = uVar30;
      uStack_174 = uVar31;
      uStack_168 = this_00;
      if ((iVar17 < 0 || *(int *)(lVar18 + 0x3008) <= iVar17) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar21 = local_170;
      uVar22 = (undefined4)uStack_168;
      uVar23 = uStack_168._4_4_;
    }
    else {
      UPCGComponent::GetGridBounds(this_00,&local_d0);
      bVar11 = __l2::<lambda_1>::operator()
                         (*(void **)((longlong)this + 0x30),pUVar5,&local_200,&local_d0,&local_1d8);
      if (!bVar11) goto LAB_149f385e8;
      piVar4 = *(int **)((longlong)this + 0x18);
      LOCK();
      iVar17 = *piVar4;
      *piVar4 = *piVar4 + 1;
      UNLOCK();
      local_140 = *(undefined4 *)(lVar14 + 0x20 + lVar18 * 0x24);
      puVar2 = (undefined4 *)(lVar14 + lVar18 * 0x24);
      uVar24 = *puVar2;
      uVar25 = puVar2[1];
      uVar26 = puVar2[2];
      uVar27 = puVar2[3];
      puVar2 = (undefined4 *)(lVar14 + 0x10 + lVar18 * 0x24);
      uVar28 = *puVar2;
      uVar29 = puVar2[1];
      uVar30 = puVar2[2];
      uVar31 = puVar2[3];
      lVar18 = *(longlong *)((longlong)this + 8);
      local_160 = uVar24;
      uStack_15c = uVar25;
      uStack_158 = uVar26;
      uStack_154 = uVar27;
      local_150 = uVar28;
      uStack_14c = uVar29;
      uStack_148 = uVar30;
      uStack_144 = uVar31;
      uStack_138 = this_00;
      if ((iVar17 < 0 || *(int *)(lVar18 + 0x3008) <= iVar17) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar21 = local_140;
      uStack_16c = uStack_13c;
      uVar22 = (undefined4)uStack_138;
      uVar23 = uStack_138._4_4_;
    }
  }
  else {
    this_01 = (UPCGComponent *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar14 + (lVar18 * 9 + 7) * 4));
    if ((this_01 != (UPCGComponent *)0x0) ||
       (this_01 = FPCGActorAndComponentMapping::GetLocalComponent
                            (*(FPCGActorAndComponentMapping **)((longlong)this + 0x28),&local_200,
                             (TIntVector3<int> *)&local_1b8._s_0,this_00),
       this_01 != (UPCGComponent *)0x0)) {
      lVar19 = this_01->_padding_;
      if (lVar19 == 0) {
LAB_149f3844c:
        lVar19 = 0;
      }
      else {
        pUVar15 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
        iVar17 = (int)pUVar15->_padding_;
        if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < iVar17) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) + (longlong)iVar17 * 8) !=
            &pUVar15->_padding_)) goto LAB_149f3844c;
      }
      if ((lVar19 != 0) && (this_00->bActivated != false)) {
        UPCGComponent::GetGridBounds(this_01,&local_98);
        bVar11 = __l2::<lambda_1>::operator()
                           (*(void **)((longlong)this + 0x30),local_1c8,&local_200,&local_98,
                            &local_1d8);
        if (!bVar11) goto LAB_149f385e8;
        piVar4 = *(int **)((longlong)this + 0x18);
        LOCK();
        iVar17 = *piVar4;
        *piVar4 = *piVar4 + 1;
        UNLOCK();
        local_110 = *(undefined4 *)(lVar14 + 0x20 + lVar18 * 0x24);
        puVar2 = (undefined4 *)(lVar14 + lVar18 * 0x24);
        uVar24 = *puVar2;
        uVar25 = puVar2[1];
        uVar26 = puVar2[2];
        uVar27 = puVar2[3];
        puVar2 = (undefined4 *)(lVar14 + 0x10 + lVar18 * 0x24);
        uVar28 = *puVar2;
        uVar29 = puVar2[1];
        uVar30 = puVar2[2];
        uVar31 = puVar2[3];
        lVar18 = *(longlong *)((longlong)this + 8);
        local_130 = uVar24;
        uStack_12c = uVar25;
        uStack_128 = uVar26;
        uStack_124 = uVar27;
        local_120 = uVar28;
        uStack_11c = uVar29;
        uStack_118 = uVar30;
        uStack_114 = uVar31;
        uStack_108 = this_01;
        if ((iVar17 < 0 || *(int *)(lVar18 + 0x3008) <= iVar17) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar21 = local_110;
        uStack_16c = uStack_10c;
        uVar22 = (undefined4)uStack_108;
        uVar23 = uStack_108._4_4_;
        goto LAB_149f385ba;
      }
    }
    piVar4 = *(int **)((longlong)this + 0x18);
    LOCK();
    iVar17 = *piVar4;
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    local_e0 = *(undefined4 *)(lVar14 + 0x20 + lVar18 * 0x24);
    puVar2 = (undefined4 *)(lVar14 + lVar18 * 0x24);
    uVar24 = *puVar2;
    uVar25 = puVar2[1];
    uVar26 = puVar2[2];
    uVar27 = puVar2[3];
    puVar2 = (undefined4 *)(lVar14 + 0x10 + lVar18 * 0x24);
    uVar28 = *puVar2;
    uVar29 = puVar2[1];
    uVar30 = puVar2[2];
    uVar31 = puVar2[3];
    lVar18 = *(longlong *)((longlong)this + 8);
    local_100 = uVar24;
    uStack_fc = uVar25;
    uStack_f8 = uVar26;
    uStack_f4 = uVar27;
    local_f0 = uVar28;
    uStack_ec = uVar29;
    uStack_e8 = uVar30;
    uStack_e4 = uVar31;
    uStack_d8 = this_01;
    if ((iVar17 < 0 || *(int *)(lVar18 + 0x3008) <= iVar17) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar21 = local_e0;
    uStack_16c = uStack_dc;
    uVar22 = (undefined4)uStack_d8;
    uVar23 = uStack_d8._4_4_;
  }
LAB_149f385ba:
  if (*(longlong *)(lVar18 + 0x3000) != 0) {
    lVar18 = *(longlong *)(lVar18 + 0x3000);
  }
  lVar14 = (longlong)iVar17;
  puVar2 = (undefined4 *)(lVar18 + lVar14 * 0x30);
  *puVar2 = uVar24;
  puVar2[1] = uVar25;
  puVar2[2] = uVar26;
  puVar2[3] = uVar27;
  puVar2 = (undefined4 *)(lVar18 + 0x10 + lVar14 * 0x30);
  *puVar2 = uVar28;
  puVar2[1] = uVar29;
  puVar2[2] = uVar30;
  puVar2[3] = uVar31;
  puVar2 = (undefined4 *)(lVar18 + 0x20 + lVar14 * 0x30);
  *puVar2 = uVar21;
  puVar2[1] = uStack_16c;
  puVar2[2] = uVar22;
  puVar2[3] = uVar23;
LAB_149f385e8:
  FMemScope::~FMemScope(&local_1c0);
  FLLMScope::~FLLMScope(&local_204);
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 149f38670

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`FPCGRuntimeGenScheduler::TickQueueComponentsForGeneration'::__l2::<lambda_2>::operator()
          (void *this,TVector<double> *param_1,float param_2)

{
  double dVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  double *pdVar10;
  double *pdVar11;
  longlong *plVar12;
  int iVar13;
  bool bVar14;
  float fVar15;
  char local_res18 [8];
  double *local_78;
  char *local_70;
  double local_68;
  double dStack_60;
  double local_58;
  float local_50;
  
  local_68 = (param_1->field0_0x0)._s_0.X;
  dStack_60 = (param_1->field0_0x0)._s_0.Y;
  plVar2 = *(longlong **)((longlong)this + 0x10);
  local_58 = (param_1->field0_0x0)._s_0.Z;
  local_50 = param_2;
  uVar9 = FCrc::MemCrc_DEPRECATED(&local_68,0x18,0);
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar12 = (longlong *)plVar2[8];
    if ((longlong *)plVar2[8] == (longlong *)0x0) {
      plVar12 = plVar2 + 7;
    }
    iVar13 = *(int *)((longlong)plVar12 +
                     (ulonglong)
                     ((int)plVar2[9] - 1U &
                     (uVar9 * 0x40 + (int)local_50 + -0x61c88647 + (uVar9 >> 2) ^ uVar9)) * 4);
    if (iVar13 != -1) {
      do {
        pdVar10 = (double *)((longlong)iVar13 * 0x30 + *plVar2);
        if ((((local_68 == *pdVar10) && (dStack_60 == pdVar10[1])) && (local_58 == pdVar10[2])) &&
           (local_50 == *(float *)(pdVar10 + 3))) {
          if (iVar13 != -1) {
            pdVar11 = pdVar10 + 4;
            if (pdVar10 == (double *)0x0) {
              pdVar11 = (double *)0x0;
            }
            if (pdVar11 != (double *)0x0) {
              return (bool)*(undefined1 *)pdVar11;
            }
          }
          break;
        }
        iVar13 = *(int *)(pdVar10 + 5);
      } while (iVar13 != -1);
    }
  }
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId471,"IsWorldStreamingComplete",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
               ,0x1d7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId471);
  }
  plVar2 = *(longlong **)((longlong)this + 8);
  fVar15 = param_2 * __real_3f000000;
  if (((int)plVar2[1] < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  *(float *)(*plVar2 + 0x18) = fVar15;
  plVar2 = *(longlong **)((longlong)this + 8);
  dVar4 = (param_1->field0_0x0)._s_0.X;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  if (((int)plVar2[1] < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  pdVar10 = (double *)*plVar2;
  *pdVar10 = dVar4;
  pdVar10[1] = dVar5;
  pdVar10[2] = dVar1;
  local_res18[0] =
       UWorldPartitionSubsystem::IsStreamingCompleted
                 (*(UWorldPartitionSubsystem **)this,Activated,
                  *(TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>_> **)
                   ((longlong)this + 8),false);
  local_78 = &local_68;
  local_70 = local_res18;
  TSet<TTuple<TTuple<UE::Math::TVector<double>,float>,bool>,TDefaultMapHashableKeyFuncs<TTuple<UE::Math::TVector<double>,float>,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TTuple<UE::Math::TVector<double>,float>_const_&,bool_const_&>_>
            (*(TSet<TTuple<TTuple<UE::Math::TVector<double>,float>,bool>,TDefaultMapHashableKeyFuncs<TTuple<UE::Math::TVector<double>,float>,bool,0>,FDefaultSetAllocator>
               **)((longlong)this + 0x10),
             (TPairInitializer<TTuple<UE::Math::TVector<double>,float>_const_&,bool_const_&> *)
             &stack0x00000008,(bool *)&local_78);
  if ((local_res18[0] == '\0') && (5 < (byte)LogPCG._0_1_)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  cVar6 = local_res18[0];
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)cVar6;
}

// AddPartitionActorPoolCount @ 149f3b850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FPCGRuntimeGenScheduler::AddPartitionActorPoolCount(FPCGRuntimeGenScheduler *this,int param_1)

{
  int *piVar1;
  TArray<TObjectPtr<APCGPartitionActor>,TSizedDefaultAllocator<32>_> *pTVar2;
  UWorld *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  AActor *pAVar8;
  FString *pFVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  int iVar12;
  wchar_t *pwVar13;
  bool bVar14;
  undefined1 auStackY_128 [32];
  AActor *local_d8;
  FString local_d0;
  FString local_c0;
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2007,"FPCGRuntimeGenScheduler::AddPartitionActorPoolCount",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
               ,0x7d7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2007);
  }
  this->PartitionActorPoolSize = this->PartitionActorPoolSize + param_1;
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_a8);
  iVar12 = 0;
  local_a8._52_4_ =
       local_a8._52_4_ &
       (RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|RF_HasExternalPackage|
        RF_WillBeLoaded|RF_ImmutableDefaultObject|RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|
        RF_DuplicateTransient|RF_InheritableComponentTemplate|RF_LoadCompleted|
        RF_TextExportTransient|RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|
        RF_FinishDestroyed|RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
        RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|RF_TagGarbageTemp|
        RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|RF_ClassDefaultObject|RF_MarkAsNative|
        RF_Standalone|RF_Public) | RF_Transient;
  local_a8._32_8_ = (this->World->PersistentLevel).field0_0x0;
  if (0 < param_1) {
    pwVar13 = L"";
    do {
      this_00 = this->World;
      pUVar7 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
      pAVar8 = UWorld::SpawnActor(this_00,pUVar7,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                                  (FActorSpawnParameters *)local_a8);
      if (pAVar8 == (AActor *)0x0) {
        pAVar8 = (AActor *)0x0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewActor",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                           ,0x7ef,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        pUVar7 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
        iVar6 = (int)pUVar7->_padding_;
        if ((*(int *)(pAVar8->_padding_ + 0x38) < iVar6) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar8->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
            &pUVar7->_padding_)) {
          pFVar9 = GetTypeName<APCGPartitionActor>(&local_d0);
          if ((pFVar9->Data).ArrayNum == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
          }
          pFVar9 = GetFullNameForCastLogError<AActor>(&local_c0,pAVar8);
          if ((pFVar9->Data).ArrayNum != 0) {
            pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar13,pwVar11);
        }
      }
      *(undefined1 *)((longlong)&pAVar8[1].ReplicatedMovement.Location.field0_0x0 + 0xd) = 1;
      pTVar2 = &this->PartitionActorPool;
      local_d8 = pAVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pAVar8);
      }
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 <
           pFVar3 + (longlong)(this->PartitionActorPool).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->PartitionActorPool).ArrayNum;
      piVar1 = &(this->PartitionActorPool).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->PartitionActorPool).ArrayNum = iVar6 + 1;
      *(AActor **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_d8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_d8);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < param_1);
  }
  if (local_a8._64_8_ != 0) {
    plVar10 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AddReferencedObjects @ 149f3bfb0

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
FPCGRuntimeGenScheduler::AddReferencedObjects
          (FPCGRuntimeGenScheduler *this,FReferenceCollector *param_1)

{
  if (this->GenSourceManager != (FPCGGenSourceManager *)0x0) {
    FPCGGenSourceManager::AddReferencedObjects(this->GenSourceManager,param_1);
  }
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->PartitionActorPool).AllocatorInstance.Data,
             (this->PartitionActorPool).ArrayNum,0,0);
  return;
}

// CleanupComponent @ 149f3e3e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
FPCGRuntimeGenScheduler::CleanupComponent
          (FPCGRuntimeGenScheduler *this,FGridGenerationKey *param_1,UPCGComponent *param_2)

{
  int iVar1;
  code *pcVar2;
  TConsoleVariableData<bool> *pTVar3;
  bool bVar4;
  EPCGHiGenGrid EVar5;
  uint uVar6;
  APCGPartitionActor *pAVar7;
  UClass *pUVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  FName local_res8;
  TIntVector3<int>_u_0 local_78;
  FString local_68;
  FPCGGridDescriptor local_58;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1675,"FPCGRuntimeGenScheduler::CleanupComponent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
               ,0x68b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1675);
  }
  if ((this->ActorAndComponentMapping == (FPCGActorAndComponentMapping *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActorAndComponentMapping",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                         ,0x68d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_58.GridSize = param_1->GridSize;
  local_30 = 0;
  local_58.bIs2DGrid = param_1->bUse2DGrid;
  uStack_38 = 0;
  local_40 = (ulonglong)CONCAT15(1,CONCAT14(local_58.bIs2DGrid,local_58.GridSize));
  local_58.bIsRuntime = true;
  local_58.RuntimeHash = 0;
  local_58.Hash.bIsSet = false;
  EVar5 = PCGHiGenGrid::GridSizeToGrid(local_58.GridSize);
  local_78._0_8_ = *(undefined8 *)&(param_1->GridCoords).field0_0x0;
  local_78._s_0.Z = (param_1->GridCoords).field0_0x0._s_0.Z;
  if (param_2 == (UPCGComponent *)0x0) {
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    pAVar7 = FPCGActorAndComponentMapping::GetPartitionActor
                       (this->ActorAndComponentMapping,&local_58,(TIntVector3<int> *)&local_78._s_0)
    ;
    goto LAB_149f3e6af;
  }
  pAVar7 = (APCGPartitionActor *)param_2->_padding_;
  if (pAVar7 == (APCGPartitionActor *)0x0) {
LAB_149f3e57f:
    pAVar7 = (APCGPartitionActor *)0x0;
    if (EVar5 != Unbounded) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4830013997950437024>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                         ,0x6a0,"PartitionActor || Grid == EPCGHiGenGrid::Unbounded");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_149f3e6af;
    }
  }
  else {
    pUVar8 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(pAVar7->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar8->_padding_)) goto LAB_149f3e57f;
    if (EVar5 != Unbounded) goto LAB_149f3e6af;
  }
  pTVar3 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnableDebugging.Ref;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar9 = 0;
  }
  else {
    lVar9 = 1;
  }
  if (((pTVar3->ShadowedValue[lVar9] != false) && (lVar9 = param_2->_padding_, lVar9 != 0)) &&
     (2 < (byte)LogPCG._0_1_)) {
    if (*(int *)(lVar9 + 0x1f0) < 2) {
      local_res8 = *(FName *)(lVar9 + 0x18);
      ::FName::ToString(&local_res8,&local_68);
    }
    else {
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = *(int *)(lVar9 + 0x1f0);
      lVar10 = (longlong)local_68.Data.ArrayNum;
      local_res8 = *(FName *)(lVar9 + 0x1e8);
      if (local_68.Data.ArrayNum == 0) {
        local_68.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,
                   local_68.Data.ArrayNum,&local_68.Data.ArrayMax);
        memcpy(local_68.Data.AllocatorInstance.Data,(void *)local_res8,lVar10 * 2);
      }
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  PCGRuntimeGenSchedulerHelpers::Stats.CleanupCallCounter =
       PCGRuntimeGenSchedulerHelpers::Stats.CleanupCallCounter + 1;
  UPCGComponent::CleanupLocalImmediate(param_2,true,false);
LAB_149f3e6af:
  CleanupLocalComponent(this,pAVar7,param_2);
  if (*(int *)&(this->GeneratedComponents).Elements.field_0x8 !=
      *(int *)&(this->GeneratedComponents).Elements.field_0x34) {
    uVar6 = ::GetTypeHash(param_1);
    TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
    ::RemoveImpl<FPCGRuntimeGenScheduler::FGridGenerationKey>
              (&this->GeneratedComponents,uVar6,param_1);
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CleanupDelayedRefreshComponents @ 149f3e710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
FPCGRuntimeGenScheduler::CleanupDelayedRefreshComponents(FPCGRuntimeGenScheduler *this)

{
  TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
  *this_00;
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  code *pcVar7;
  TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
  *pTVar8;
  bool bVar9;
  EPCGHiGenGrid EVar10;
  UObject *pUVar11;
  UPCGComponent *this_01;
  UPCGComponent *pUVar12;
  UClass *pUVar13;
  FPCGRuntimeGenScheduler *pFVar14;
  uint uVar15;
  int iVar16;
  APCGPartitionActor *this_02;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  FGridGenerationKey *pFVar20;
  bool bVar21;
  undefined1 auStackY_1f8 [32];
  uint local_1c4;
  undefined1 local_1c0 [8];
  FWeakObjectPtr local_1b8;
  FWeakObjectPtr local_1b0;
  FPCGGridDescriptor local_1a8;
  int local_190;
  TIntVector3<int>_u_0 local_188;
  TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
  *local_178;
  int iStack_170;
  uint uStack_16c;
  undefined1 *local_168;
  undefined4 uStack_160;
  int iStack_15c;
  int local_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
  *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  undefined4 local_fc;
  TVector<double>_u_0 local_f8;
  double local_e0;
  double local_d8;
  double local_d0;
  TVector<double>_u_0 local_c0;
  double local_a8;
  double local_a0;
  double local_98;
  TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1720,
               "FPCGRuntimeGenScheduler::CleanupDelayedRefreshComponents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
               ,0x6b8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1720);
  }
  if ((this->ActorAndComponentMapping == (FPCGActorAndComponentMapping *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActorAndComponentMapping",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                         ,0x6ba,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = &this->GeneratedComponentsToRemove;
  iStack_170 = 0;
  iVar3 = *(int *)&(this->GeneratedComponentsToRemove).Elements.field_0x28;
  puVar17 = &(this->GeneratedComponentsToRemove).Elements.field_0x10;
  local_158 = 0;
  uStack_16c = 1;
  iStack_15c = 0;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&(this->GeneratedComponentsToRemove).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar17;
    }
    uVar19 = *puVar18;
    while (uVar19 == 0) {
      iStack_170 = iStack_170 + 1;
      local_158 = local_158 + 0x20;
      iStack_15c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_170) goto LAB_149f3e842;
      uVar19 = puVar18[iStack_170];
    }
    uStack_16c = ~(uVar19 - 1) & uVar19;
    uVar1 = (ulonglong)uStack_16c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_190 = (int)lVar6;
    iStack_15c = local_158 + -1 + local_190;
    if (iVar3 < iStack_15c) {
      iStack_15c = iVar3;
    }
  }
LAB_149f3e842:
  uStack_154 = local_fc;
  iStack_150 = *(int *)&(this->GeneratedComponentsToRemove).Elements.field_0x8 -
               *(int *)&(this->GeneratedComponentsToRemove).Elements.field_0x34;
  local_1c4 = *(uint *)&(this->GeneratedComponentsToRemove).Elements.field_0x28;
  uStack_160 = 0xffffffff;
  uVar19 = local_1c4 & 0xffffffe0;
  TStack_140._padding_ = CONCAT44(uStack_16c,iStack_170);
  TStack_140.CurrentBitIndex = iStack_15c;
  TStack_140.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)local_1c4 >> 5;
  TStack_140._28_4_ = local_fc;
  TStack_140.BaseBitIndex = local_158;
  uStack_120 = CONCAT44(uStack_14c,iStack_150);
  local_178 = this_00;
  local_168 = puVar17;
  local_148 = this_00;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar17;
  if ((((int)local_1c4 < 0) || (iVar3 < (int)local_1c4)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&(this->GeneratedComponentsToRemove).Elements.field_0x28;
  if (local_1c4 != uVar4) {
    puVar5 = *(undefined1 **)&(this->GeneratedComponentsToRemove).Elements.field_0x20;
    if (puVar5 != (undefined1 *)0x0) {
      puVar17 = puVar5;
    }
    uVar15 = -1 << ((byte)local_1c4 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      iVar16 = iVar16 + 1;
      uVar19 = uVar19 + 0x20;
      local_1c4 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar16) goto LAB_149f3e94c;
      uVar15 = *(uint *)(puVar17 + (longlong)iVar16 * 4);
    }
    uVar1 = (ulonglong)(~(uVar15 - 1) & uVar15) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_1c4 = (uVar19 - 1) + (int)lVar6;
    if ((int)uVar4 < (int)local_1c4) {
      local_1c4 = uVar4;
    }
  }
LAB_149f3e94c:
  do {
    pTVar8 = local_148;
    if (*(int *)&(local_148->Elements).field_0x8 - *(int *)&(local_148->Elements).field_0x34 !=
        (int)uStack_120) {
      `TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1c0);
    }
    if (((TStack_140.CurrentBitIndex == local_1c4) &&
        (TStack_140.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)
         &(this->GeneratedComponentsToRemove).Elements.field_0x10)) && (pTVar8 == this_00)) {
      pFVar14 = (FPCGRuntimeGenScheduler *)
                TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
                ::Difference(&this->GeneratedComponents,&local_88,this_00);
      if (this != pFVar14) {
        TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
        ::
        Move<TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>_>
                  (&this->GeneratedComponents,
                   (TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
                    *)pFVar14);
      }
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      bVar9 = 1 < (this->GeneratedComponentsToRemove).HashSize;
      if (!bVar9) {
        TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
        ::UnhashElements(this_00);
      }
      puVar17 = &(this->GeneratedComponentsToRemove).Elements.field_0xc;
      *(undefined4 *)&(this->GeneratedComponentsToRemove).Elements.field_0x8 = 0;
      if (*(int *)puVar17 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x2c,4,0,(ForAnyElementType *)this_00,0,(int *)puVar17);
      }
      *(undefined4 *)&(this->GeneratedComponentsToRemove).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->GeneratedComponentsToRemove).Elements.field_0x34 = 0;
      iVar3 = *(int *)&(this->GeneratedComponentsToRemove).Elements.field_0x2c;
      *(undefined4 *)&(this->GeneratedComponentsToRemove).Elements.field_0x28 = 0;
      if ((iVar3 < 0) || (0x80 < iVar3)) {
        *(undefined4 *)&(this->GeneratedComponentsToRemove).Elements.field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->GeneratedComponentsToRemove).Elements.field_0x10,0);
      }
      if (bVar9) {
        (this->GeneratedComponentsToRemove).HashSize = 1;
        TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
        ::Rehash(this_00);
      }
      if (bVar21) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    pFVar20 = (FGridGenerationKey *)
              ((longlong)TStack_140.CurrentBitIndex * 0x2c + *(longlong *)&pTVar8->Elements);
    local_1b8.ObjectIndex = (pFVar20->OriginalComponent).ObjectKey.ObjectIndex;
    local_1b8.ObjectSerialNumber = (pFVar20->OriginalComponent).ObjectKey.ObjectSerialNumber;
    pUVar11 = FWeakObjectPtr::Get(&local_1b8);
    if (pUVar11 != (UObject *)0x0) {
      local_1a8.bIs2DGrid = pFVar20->bUse2DGrid;
      local_1a8.GridSize = pFVar20->GridSize;
      local_1a8.bIsRuntime = true;
      local_1a8.RuntimeHash = 0;
      local_1a8.Hash.bIsSet = false;
      EVar10 = PCGHiGenGrid::GridSizeToGrid(local_1a8.GridSize);
      local_1b0.ObjectIndex = (pFVar20->OriginalComponent).ObjectKey.ObjectIndex;
      local_1b0.ObjectSerialNumber = (pFVar20->OriginalComponent).ObjectKey.ObjectSerialNumber;
      this_01 = (UPCGComponent *)FWeakObjectPtr::Get(&local_1b0);
      local_188._0_8_ = *(undefined8 *)&(pFVar20->GridCoords).field0_0x0;
      local_188._s_0.Z = (pFVar20->GridCoords).field0_0x0._s_0.Z;
      if (EVar10 == Unbounded) {
        if (this_01 == (UPCGComponent *)0x0) goto LAB_149f3eb0d;
        cVar2 = this_01->bActivated;
        pUVar12 = this_01;
joined_r0x000149f3eaf8:
        if (cVar2 != '\0') goto LAB_149f3eb0d;
      }
      else {
        if ((this_01 != (UPCGComponent *)0x0) &&
           (pUVar12 = FPCGActorAndComponentMapping::GetLocalComponent
                                (this->ActorAndComponentMapping,&local_1a8,
                                 (TIntVector3<int> *)&local_188._s_0,this_01),
           pUVar12 != (UPCGComponent *)0x0)) {
          this_02 = (APCGPartitionActor *)pUVar12->_padding_;
          if (this_02 == (APCGPartitionActor *)0x0) {
LAB_149f3ea8a:
            this_02 = (APCGPartitionActor *)0x0;
          }
          else {
            pUVar13 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
            iVar3 = (int)pUVar13->_padding_;
            if ((*(int *)(this_02->_padding_ + 0x38) < iVar3) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
                &pUVar13->_padding_)) goto LAB_149f3ea8a;
          }
          if (this_02 != (APCGPartitionActor *)0x0) {
            UPCGComponent::GetGridBounds(this_01,(TBox<double> *)&local_c0._s_0);
            APCGPartitionActor::GetFixedBounds(this_02,(TBox<double> *)&local_f8._s_0);
            if (((((local_c0._s_0.X <= local_e0) && (local_f8._s_0.X <= local_a8)) &&
                 (local_c0._s_0.Y <= local_d8)) &&
                ((local_f8._s_0.Y <= local_a0 && (local_c0._s_0.Z <= local_d0)))) &&
               (local_f8._s_0.Z <= local_98)) {
              cVar2 = this_01->bActivated;
              goto joined_r0x000149f3eaf8;
            }
            goto LAB_149f3eb02;
          }
        }
        pUVar12 = (UPCGComponent *)0x0;
      }
LAB_149f3eb02:
      CleanupComponent(this,pFVar20,pUVar12);
    }
LAB_149f3eb0d:
    TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
  } while( true );
}

// CleanupLocalComponent @ 149f3ec40

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
FPCGRuntimeGenScheduler::CleanupLocalComponent
          (FPCGRuntimeGenScheduler *this,APCGPartitionActor *param_1,UPCGComponent *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<APCGPartitionActor>,TSizedDefaultAllocator<32>_> *pTVar2;
  void *pvVar3;
  FPCGActorAndComponentMapping *pFVar4;
  FPCGActorAndComponentMapping *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TConsoleVariableData<bool> *pTVar8;
  TConsoleVariableData<bool> *pTVar9;
  bool bVar10;
  int iVar11;
  UPCGComponent *pUVar12;
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  *this_00;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  FName local_res10 [2];
  TObjectPtr<APCGPartitionActor_const_>_u_0 local_res20;
  APCGPartitionActor *local_88;
  UPCGComponent *local_80;
  FName local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (param_1 != (APCGPartitionActor *)0x0) {
    pUVar12 = APCGPartitionActor::GetOriginalComponent(param_1,param_2);
    pTVar8 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnableDebugging.Ref;
    lVar15 = 1;
    if (pUVar12 != (UPCGComponent *)0x0) {
      bVar10 = IsInParallelGameThread();
      if ((bVar10) || (bVar10 = IsInGameThread(), bVar10)) {
        lVar13 = 0;
      }
      else {
        lVar13 = 1;
      }
      if ((pTVar8->ShadowedValue[lVar13] != false) && (2 < (byte)LogPCG._0_1_)) {
        iVar11 = (int)param_1->_padding_;
        if (iVar11 < 2) {
          local_res10[0] = (FName)param_1->_padding_;
          ::FName::ToString(local_res10,&local_68);
        }
        else {
          pvVar3 = (void *)param_1->_padding_;
          local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.Data.ArrayNum = iVar11;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar11,0,(ForAnyElementType *)&local_68,iVar11,&local_68.Data.ArrayMax);
          memcpy(local_68.Data.AllocatorInstance.Data,pvVar3,(longlong)iVar11 * 2);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      APCGPartitionActor::RemoveGraphInstance(param_1,pUVar12);
      PCGRuntimeGenSchedulerHelpers::Stats.CleanupCallCounter =
           PCGRuntimeGenSchedulerHelpers::Stats.CleanupCallCounter + 1;
      pFVar4 = this->ActorAndComponentMapping;
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar4->ComponentToPartitionActorsMapLock);
      this_00 = TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
                ::Find((TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
                        *)&this->ActorAndComponentMapping->ComponentToPartitionActorsMap,pUVar12);
      if (this_00 !=
          (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
           *)0x0) {
        local_res20.DebugPtr = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          uVar14 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                   -0x7a143595;
          uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
          TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
          ::RemoveImpl<TObjectPtr<APCGPartitionActor_const_>_>
                    (this_00,uVar14 >> 0x10 ^ uVar14,
                     (TObjectPtr<APCGPartitionActor_const_> *)&local_res20.ObjectPtr);
        }
        if (*(int *)&(this_00->Elements).field_0x8 == *(int *)&(this_00->Elements).field_0x34) {
          pFVar5 = this->ActorAndComponentMapping;
          local_80 = pUVar12;
          if (*(int *)&(pFVar5->ComponentToPartitionActorsMap).field_0x8 !=
              *(int *)&(pFVar5->ComponentToPartitionActorsMap).field_0x34) {
            uVar14 = ((uint)((ulonglong)pUVar12 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar12 >> 4))
                     * -0x7a143595;
            uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
            TSet<TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            ::RemoveImpl<UPCGComponent_const_*>
                      ((TSet<TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                        *)&pFVar5->ComponentToPartitionActorsMap,uVar14 >> 0x10 ^ uVar14,&local_80);
          }
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar4->ComponentToPartitionActorsMapLock);
    }
    bVar10 = APCGPartitionActor::HasLocalPCGComponents(param_1);
    if (!bVar10) {
      APCGPartitionActor::UnregisterPCG(param_1);
      pTVar8 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnablePooling.Ref;
      bVar10 = IsInParallelGameThread();
      if ((bVar10) || (bVar10 = IsInGameThread(), bVar10)) {
        lVar13 = 0;
      }
      else {
        lVar13 = 1;
      }
      pTVar9 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnableDebugging.Ref;
      if (pTVar8->ShadowedValue[lVar13] == false) {
        bVar10 = IsInParallelGameThread();
        if ((bVar10) || (bVar10 = IsInGameThread(), bVar10)) {
          lVar15 = 0;
        }
        if ((pTVar9->ShadowedValue[lVar15] != false) && (2 < (byte)LogPCG._0_1_)) {
          iVar11 = (int)param_1->_padding_;
          if (iVar11 < 2) {
            local_70 = (FName)param_1->_padding_;
            ::FName::ToString(&local_70,&local_48);
          }
          else {
            pvVar3 = (void *)param_1->_padding_;
            local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_48.Data.ArrayNum = iVar11;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar11,0,(ForAnyElementType *)&local_48,iVar11,&local_48.Data.ArrayMax);
            memcpy(local_48.Data.AllocatorInstance.Data,pvVar3,(longlong)iVar11 * 2);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        UWorld::DestroyActor(this->World,(AActor *)param_1,false,true);
      }
      else {
        bVar10 = IsInParallelGameThread();
        if ((bVar10) || (bVar10 = IsInGameThread(), bVar10)) {
          lVar15 = 0;
        }
        if ((pTVar9->ShadowedValue[lVar15] != false) && (2 < (byte)LogPCG._0_1_)) {
          iVar11 = (int)param_1->_padding_;
          if (iVar11 < 2) {
            local_78 = (FName)param_1->_padding_;
            ::FName::ToString(&local_78,&local_58);
          }
          else {
            pvVar3 = (void *)param_1->_padding_;
            local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_58.Data.ArrayNum = iVar11;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar11,0,(ForAnyElementType *)&local_58,iVar11,&local_58.Data.ArrayMax);
            memcpy(local_58.Data.AllocatorInstance.Data,pvVar3,(longlong)iVar11 * 2);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        pTVar2 = &this->PartitionActorPool;
        local_88 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        pFVar6 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 <
             pFVar6 + (longlong)(this->PartitionActorPool).ArrayMax * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = (this->PartitionActorPool).ArrayNum;
        piVar1 = &(this->PartitionActorPool).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->PartitionActorPool).ArrayNum = iVar11 + 1;
        *(APCGPartitionActor **)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_88
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_88 != (APCGPartitionActor *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_88);
        }
      }
    }
  }
  return;
}

// CleanupLocalComponents @ 149f3f1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
FPCGRuntimeGenScheduler::CleanupLocalComponents
          (FPCGRuntimeGenScheduler *this,APCGWorldActor *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  FPCGRuntimeGenScheduler *pFVar4;
  longlong *plVar5;
  bool bVar6;
  EPCGHiGenGrid EVar7;
  ulonglong uVar8;
  UObject *pUVar9;
  UPCGComponent *pUVar10;
  byte bVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  ulonglong uVar14;
  ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> FVar15;
  uint uVar16;
  int iVar17;
  ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> FVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  ForElementType<unsigned_int> FVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  uint *puVar26;
  uint uVar27;
  bool bVar28;
  undefined1 auStack_808 [32];
  ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> local_7e8;
  ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> local_7e0;
  longlong local_7d8;
  longlong local_7d0;
  undefined8 local_7c8;
  undefined1 local_7b8;
  undefined1 local_7b7;
  undefined1 local_7b6;
  undefined1 local_7b5 [5];
  FPCGRuntimeGenScheduler *local_7b0;
  int iStack_7a8;
  uint uStack_7a4;
  TBitArray<FDefaultBitArrayAllocator> *local_7a0;
  undefined4 uStack_798;
  uint uStack_794;
  uint local_790;
  undefined4 uStack_78c;
  int iStack_788;
  undefined4 uStack_784;
  uint local_780;
  uint uStack_77c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_778;
  undefined4 local_770;
  uint uStack_76c;
  uint uStack_768;
  undefined4 uStack_764;
  FWeakObjectPtr local_760;
  FWeakObjectPtr local_758;
  UPCGComponent *local_750;
  undefined8 local_748;
  FPCGGridDescriptor local_740;
  undefined4 local_728;
  int local_724;
  int local_720;
  int local_71c;
  undefined8 local_718;
  TIntVector3<int>_u_0 local_710;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined4 local_6f0;
  longlong *local_6e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6e0;
  FPCGRuntimeGenScheduler *local_6c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_6b8;
  undefined8 uStack_698;
  longlong *local_690;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_688;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined4 local_640;
  undefined4 uStack_63c;
  UPCGComponent *pUStack_638;
  undefined4 local_614;
  undefined4 local_5f4;
  undefined1 local_5e8 [32];
  ForElementType<unsigned_int> local_5c8;
  uint local_5c0;
  int local_5bc;
  int local_5b8;
  int local_5b4;
  FScriptContainerElement local_5b0 [8];
  ForAnyElementType local_5a8;
  uint local_5a0;
  ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> local_598;
  int local_350;
  int local_34c;
  ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_> local_348;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_808;
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1540,"FPCGRuntimeGenScheduler::CleanupLocalComponents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
               ,0x604);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1540);
  }
  if (((this->ActorAndComponentMapping == (FPCGActorAndComponentMapping *)0x0) ||
      (param_1 == (APCGWorldActor *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActorAndComponentMapping && InPCGWorldActor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                         ,0x606,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar14 = 0;
  local_3c = 0x10;
  local_348.SecondaryData =
       (ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>)0x0;
  local_40 = 0;
  local_5e8._0_8_ = (FScriptContainerElement *)0x0;
  local_5e8._8_8_ = 0;
  local_5c8 = (ForElementType<unsigned_int>)0x0;
  local_5c0 = 0;
  local_5b4 = 0;
  local_5a8.Data = (FScriptContainerElement *)0x0;
  local_5a0 = 0;
  local_5bc = 0x80;
  local_5b8 = -1;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_5e8,0x10);
  for (lVar13 = 0x3f; 0x1fUL >> lVar13 == 0; lVar13 = lVar13 + -1) {
  }
  uVar16 = 1 << ((byte)lVar13 & 0x1f);
  local_728 = (undefined4)lVar13;
  local_748 = 1;
  uVar23 = 0;
  if ((local_5a0 != 0) && ((int)uVar16 <= (int)local_5a0)) goto LAB_149f3f51c;
  local_5a0 = uVar16;
  if (local_5a8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_5a8,0,0,4);
  }
  if (uVar16 != 0) {
    uVar19 = uVar16;
    if (uVar16 < 2) {
      if (local_5a8.Data != (FScriptContainerElement *)0x0) {
        uVar19 = 0;
        goto LAB_149f3f33f;
      }
    }
    else {
LAB_149f3f33f:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_5a8,0,uVar19,4);
    }
    if (0 < (int)uVar16) {
      uVar24 = (ulonglong)uVar16;
      uVar20 = uVar14;
      do {
        FVar12.Data = local_5b0;
        if (local_5a8.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_5a8.Data;
        }
        uVar8 = (longlong)(int)uVar16 - 1U & uVar20;
        uVar20 = uVar20 + 1;
        *(undefined4 *)(FVar12.Data + uVar8 * 4) = 0xffffffff;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
  if (local_5a0 != 0) {
    pTStack_778 = (TBitArray<FDefaultBitArrayAllocator> *)(local_5e8 + 0x10);
    local_780 = 0;
    uStack_77c = 1;
    uStack_76c = 0;
    uStack_768 = 0;
    uVar20 = uVar14;
    if (local_5c0 != 0) {
      FVar22 = (ForElementType<unsigned_int>)((longlong)local_5e8 + 0x10);
      if (local_5c8 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_5c8;
      }
      uVar16 = *(uint *)FVar22;
      uVar24 = uVar14;
      while (uVar16 == 0) {
        uStack_768 = (int)uVar24 + 0x20;
        uVar24 = (ulonglong)uStack_768;
        iVar17 = (int)uVar20;
        local_780 = iVar17 + 1;
        uVar20 = (ulonglong)local_780;
        if ((int)((local_5c0 - 1) + ((int)(local_5c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_780)
        goto LAB_149f3f44c;
        uVar16 = ((uint *)((longlong)FVar22 + 4))[iVar17];
      }
      uStack_77c = -uVar16 & uVar16;
      uVar20 = (ulonglong)uStack_77c * 2 + 1;
      lVar13 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_724 = (int)lVar13;
      uStack_76c = local_724 + -1 + uStack_768;
      uVar20 = (ulonglong)uStack_76c;
      if ((int)local_5c0 < (int)uStack_76c) {
LAB_149f3f44c:
        uVar20 = (ulonglong)local_5c0;
        uStack_76c = local_5c0;
      }
    }
    local_770 = 0xffffffff;
    local_6e8 = (longlong *)local_5e8;
    local_6e0._padding_ = CONCAT44(uStack_77c,local_780);
    local_6e0.CurrentBitIndex = uStack_76c;
    local_6e0.UnvisitedBitMask = 0xffffffff;
    local_6e0._28_4_ = uStack_764;
    local_6e0.BaseBitIndex = uStack_768;
    local_6e0.Array = pTStack_778;
    if ((int)uVar20 < (int)local_5c0) {
      do {
        puVar25 = (ulonglong *)((longlong)(int)uVar20 * 0x10 + *local_6e8);
        uVar16 = ((uint)(*puVar25 >> 0x14) & 0xffff ^ (uint)(*puVar25 >> 4)) * -0x7a143595;
        uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
        uVar16 = (uVar16 >> 0x10 ^ uVar16) & local_5a0 - 1;
        *(uint *)((longlong)puVar25 + 0xc) = uVar16;
        FVar12.Data = local_5b0;
        if (local_5a8.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_5a8.Data;
        }
        uVar24 = (longlong)(int)local_5a0 - 1U & (longlong)(int)uVar16;
        *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(FVar12.Data + uVar24 * 4);
        *(int *)(FVar12.Data + uVar24 * 4) = (int)uVar20;
        local_6e0.UnvisitedBitMask = local_6e0.UnvisitedBitMask & ~local_6e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_6e0);
        uVar20 = (ulonglong)(uint)local_6e0.CurrentBitIndex;
      } while (local_6e0.CurrentBitIndex < (local_6e0.Array)->NumBits);
    }
  }
LAB_149f3f51c:
  local_7a0 = (TBitArray<FDefaultBitArrayAllocator> *)
              &(this->GeneratedComponents).Elements.field_0x10;
  local_598.SecondaryData = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0;
  local_350 = 0;
  local_34c = 0x10;
  uVar16 = *(uint *)&(this->GeneratedComponents).Elements.field_0x28;
  uStack_794 = uVar23;
  uStack_7a4 = 1;
  if (uVar16 != 0) {
    puVar26 = *(uint **)&(this->GeneratedComponents).Elements.field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)local_7a0;
    }
    uVar19 = *puVar26;
    uVar20 = uVar14;
    uVar23 = 0;
    while (uVar19 == 0) {
      iVar17 = (int)uVar14;
      uVar23 = (int)uVar20 + 0x20;
      uVar20 = (ulonglong)uVar23;
      uVar19 = iVar17 + 1;
      uVar14 = (ulonglong)uVar19;
      uStack_794 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
      goto LAB_149f3f5ae;
      uVar19 = puVar26[(longlong)iVar17 + 1];
    }
    uStack_7a4 = -uVar19 & uVar19;
    uVar20 = (ulonglong)uStack_7a4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_720 = (int)lVar13;
    uStack_794 = (uVar23 - 1) + local_720;
    if ((int)uVar16 < (int)uStack_794) {
      uStack_794 = uVar16;
    }
  }
LAB_149f3f5ae:
  uVar19 = *(uint *)&(this->GeneratedComponents).Elements.field_0x28;
  uStack_78c = local_614;
  iStack_788 = *(int *)&(this->GeneratedComponents).Elements.field_0x8 -
               *(int *)&(this->GeneratedComponents).Elements.field_0x34;
  uVar27 = uVar19 & 0xffffffe0;
  iStack_7a8 = (int)uVar14;
  TStack_6b8._padding_ = CONCAT44(uStack_7a4,iStack_7a8);
  uStack_798 = 0xffffffff;
  TStack_6b8.CurrentBitIndex = uStack_794;
  TStack_6b8.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar19 >> 5;
  TStack_6b8._28_4_ = local_614;
  TStack_6b8.BaseBitIndex = uVar23;
  uStack_698 = CONCAT44(uStack_784,iStack_788);
  local_7b0 = this;
  local_790 = uVar23;
  local_6c0 = this;
  TStack_6b8.Array = local_7a0;
  if ((((int)uVar19 < 0) || ((int)uVar16 < (int)uVar19)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar23 = *(uint *)&(this->GeneratedComponents).Elements.field_0x28;
  if (uVar19 != uVar23) {
    puVar21 = *(undefined1 **)&(this->GeneratedComponents).Elements.field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = &(this->GeneratedComponents).Elements.field_0x10;
    }
    uVar16 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar17;
      uVar27 = uVar27 + 0x20;
      iVar17 = iVar17 + 1;
      uVar19 = uVar23;
      if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_149f3f6bf;
      uVar16 = *(uint *)(puVar21 + lVar13 * 4 + 4);
    }
    uVar14 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_71c = (int)lVar13;
    uVar19 = (uVar27 - 1) + local_71c;
    if ((int)uVar23 < (int)uVar19) {
      uVar19 = uVar23;
    }
  }
LAB_149f3f6bf:
  while( true ) {
    pFVar4 = local_6c0;
    if (*(int *)&(local_6c0->GeneratedComponents).Elements.field_0x8 -
        *(int *)&(local_6c0->GeneratedComponents).Elements.field_0x34 != (int)uStack_698) {
      local_7b8 = 0;
      `TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_7b8);
    }
    iVar17 = local_350;
    if (((TStack_6b8.CurrentBitIndex == uVar19) &&
        (TStack_6b8.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->GeneratedComponents).Elements.field_0x10))
       && (pFVar4 == this)) break;
    FVar18 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)
             (*(longlong *)&(pFVar4->GeneratedComponents).Elements +
             (longlong)TStack_6b8.CurrentBitIndex * 0x2c);
    local_760.ObjectIndex = *(int *)((longlong)FVar18 + 0x14);
    local_760.ObjectSerialNumber = *(int *)((longlong)FVar18 + 0x18);
    pUVar9 = FWeakObjectPtr::Get(&local_760);
    if (pUVar9 == (UObject *)0x0) {
      FVar15 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&local_598;
      if (local_598.SecondaryData !=
          (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
        FVar15 = local_598.SecondaryData;
      }
      if ((ulonglong)FVar15 <= (ulonglong)FVar18) {
        FVar15 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&local_598;
        if (local_598.SecondaryData !=
            (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
          FVar15 = local_598.SecondaryData;
        }
        if ((ulonglong)FVar18 < (ulonglong)((longlong)FVar15 + (longlong)local_34c * 0x24)) {
          local_7d0 = (longlong)local_350;
          local_7c8 = 0x24;
          local_7e0 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&local_598;
          if (local_598.SecondaryData !=
              (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
            local_7e0 = local_598.SecondaryData;
          }
          local_7e8 = FVar18;
          local_7d8 = (longlong)local_34c;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      if (local_350 == local_34c) {
        local_350 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>_>
                              (0x424,&local_598,&local_34c);
      }
      uVar3 = *(undefined8 *)((longlong)FVar18 + 8);
      FVar15 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&local_598;
      if (local_598.SecondaryData !=
          (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
        FVar15 = local_598.SecondaryData;
      }
      lVar13 = (longlong)local_350;
      puVar1 = (undefined8 *)((longlong)FVar15 + lVar13 * 0x24);
      local_350 = local_350 + 1;
      *puVar1 = *(undefined8 *)FVar18;
      puVar1[1] = uVar3;
      uVar3 = *(undefined8 *)((longlong)FVar18 + 0x18);
      *(undefined8 *)((uchar *)((longlong)FVar15 + 0x10) + lVar13 * 0x24) =
           *(undefined8 *)((longlong)FVar18 + 0x10);
      *(undefined8 *)((uchar *)((longlong)FVar15 + 0x10) + lVar13 * 0x24 + 8) = uVar3;
      *(undefined4 *)((uchar *)((longlong)FVar15 + 0x20) + lVar13 * 0x24) =
           *(undefined4 *)((longlong)FVar18 + 0x20);
    }
    else {
      local_740.GridSize = *(uint *)((longlong)FVar18 + 4);
      local_6f0 = 0;
      local_740.bIs2DGrid = *(bool *)FVar18;
      uStack_6f8 = 0;
      local_700 = (ulonglong)CONCAT15(1,CONCAT14(local_740.bIs2DGrid,local_740.GridSize));
      local_740.bIsRuntime = true;
      local_740.RuntimeHash = 0;
      local_740.Hash.bIsSet = false;
      EVar7 = PCGHiGenGrid::GridSizeToGrid(local_740.GridSize);
      local_710._s_0.Z = *(undefined4 *)((longlong)FVar18 + 0x10);
      local_710._0_8_ = *(undefined8 *)((longlong)FVar18 + 8);
      local_758.ObjectIndex = *(int *)((longlong)FVar18 + 0x14);
      local_758.ObjectSerialNumber = *(int *)((longlong)FVar18 + 0x18);
      pUVar10 = (UPCGComponent *)FWeakObjectPtr::Get(&local_758);
      local_750 = pUVar10;
      if ((pUVar10 == (UPCGComponent *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("OriginalComponent",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                             ,0x61e,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator>::
      Emplace<UPCGComponent_*_const_&>
                ((TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *)
                 local_5e8,(UPCGComponent **)&local_718,(bool *)&local_750);
      if (EVar7 != Unbounded) {
        pUStack_638 = FPCGActorAndComponentMapping::GetLocalComponent
                                (this->ActorAndComponentMapping,&local_740,
                                 (TIntVector3<int> *)&local_710._s_0,pUVar10);
        local_640 = *(undefined4 *)((longlong)FVar18 + 0x20);
        local_660 = *(undefined8 *)FVar18;
        uStack_658 = *(undefined8 *)((longlong)FVar18 + 8);
        local_650 = *(undefined8 *)((longlong)FVar18 + 0x10);
        uStack_648 = *(undefined8 *)((longlong)FVar18 + 0x18);
        FVar18 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&local_348;
        if (local_348.SecondaryData !=
            (ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>)
            0x0) {
          FVar18 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)
                   local_348.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_660) {
          FVar18 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&local_348;
          if (local_348.SecondaryData !=
              (ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>)
              0x0) {
            FVar18 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)
                     local_348.SecondaryData;
          }
          if (&local_660 < (undefined8 *)((longlong)(int)local_3c * 0x30 + (longlong)FVar18)) {
            local_7d0 = (longlong)(int)local_40;
            local_7c8 = 0x30;
            local_7e8 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&local_660;
            local_7e0 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&local_348;
            if (local_348.SecondaryData !=
                (ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>
                 )0x0) {
              local_7e0 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)
                          local_348.SecondaryData;
            }
            local_7d8 = (longlong)(int)local_3c;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>_>
                               (0x830,&local_348,(int *)&local_3c);
        }
        FVar18 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&local_348;
        if (local_348.SecondaryData !=
            (ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>)
            0x0) {
          FVar18 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)
                   local_348.SecondaryData;
        }
        lVar13 = (longlong)(int)local_40;
        puVar1 = (undefined8 *)((longlong)FVar18 + lVar13 * 0x30);
        local_40 = local_40 + 1;
        *puVar1 = local_660;
        puVar1[1] = uStack_658;
        *(undefined8 *)((uchar *)((longlong)FVar18 + 0x10) + lVar13 * 0x30) = local_650;
        *(undefined8 *)((uchar *)((longlong)FVar18 + 0x10) + lVar13 * 0x30 + 8) = uStack_648;
        *(ulonglong *)((uchar *)((longlong)FVar18 + 0x20) + lVar13 * 0x30) =
             CONCAT44(uStack_63c,local_640);
        *(UPCGComponent **)((uchar *)((longlong)FVar18 + 0x20) + lVar13 * 0x30 + 8) = pUStack_638;
      }
    }
    TStack_6b8.UnvisitedBitMask = TStack_6b8.UnvisitedBitMask & ~TStack_6b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_6b8);
  }
  FVar18 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&local_598;
  if (local_598.SecondaryData != (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
    FVar18 = local_598.SecondaryData;
  }
  FVar15 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)
           ((longlong)FVar18 + (longlong)local_350 * 0x24);
  while( true ) {
    if (local_350 != iVar17) {
      local_7b7 = 0;
      `TCheckedPointerIterator<FPCGRuntimeGenScheduler::FGridGenerationKey,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_7b7);
    }
    uVar23 = local_40;
    if (FVar18 == FVar15) break;
    if (*(int *)&(this->GeneratedComponents).Elements.field_0x8 !=
        *(int *)&(this->GeneratedComponents).Elements.field_0x34) {
      uVar23 = ::GetTypeHash((FGridGenerationKey *)FVar18);
      TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
      ::RemoveImpl<FPCGRuntimeGenScheduler::FGridGenerationKey>
                (&this->GeneratedComponents,uVar23,(FGridGenerationKey *)FVar18);
    }
    FVar18 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)((longlong)FVar18 + 0x24);
  }
  uVar14 = (ulonglong)(int)local_40;
  FVar18 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&local_348;
  if (local_348.SecondaryData !=
      (ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>)0x0) {
    FVar18 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)local_348.SecondaryData;
  }
  FVar15 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)
           (uVar14 * 0x30 + (longlong)FVar18);
  while( true ) {
    if ((uint)uVar14 != uVar23) {
      local_7b6 = 0;
      `TCheckedPointerIterator<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_7b6);
    }
    uVar16 = local_5c0;
    if (FVar18 == FVar15) break;
    CleanupComponent(this,(FGridGenerationKey *)FVar18,*(UPCGComponent **)((longlong)FVar18 + 0x28))
    ;
    uVar14 = (ulonglong)local_40;
    FVar18 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)((longlong)FVar18 + 0x30);
  }
  iStack_7a8 = 0;
  local_790 = 0;
  uStack_794 = 0;
  if (local_5c0 == 0) {
LAB_149f3fbd1:
    uStack_7a4 = (uint)local_748;
  }
  else {
    FVar22 = (ForElementType<unsigned_int>)((longlong)local_5e8 + 0x10);
    if (local_5c8 != (ForElementType<unsigned_int>)0x0) {
      FVar22 = local_5c8;
    }
    uStack_7a4 = *(uint *)FVar22;
    while (uStack_7a4 == 0) {
      lVar13 = (longlong)iStack_7a8;
      local_790 = local_790 + 0x20;
      iStack_7a8 = iStack_7a8 + 1;
      uStack_794 = local_5c0;
      if ((int)((local_5c0 - 1) + ((int)(local_5c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_7a8)
      goto LAB_149f3fbd1;
      uStack_7a4 = ((uint *)((longlong)FVar22 + 4))[lVar13];
    }
    uStack_7a4 = -uStack_7a4 & uStack_7a4;
    uVar14 = (ulonglong)uStack_7a4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_718._4_4_ = (int)lVar13;
    uStack_794 = local_790 + -1 + local_718._4_4_;
    if ((int)local_5c0 < (int)uStack_794) {
      uStack_794 = local_5c0;
    }
  }
  local_7b0 = (FPCGRuntimeGenScheduler *)local_5e8;
  uStack_78c = local_5f4;
  local_7a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_5e8 + 0x10);
  uVar23 = local_5c0 & 0xffffffe0;
  iStack_788 = local_5e8._8_4_ - local_5b4;
  uStack_798 = 0xffffffff;
  TStack_688.CurrentBitIndex = uStack_794;
  TStack_688.UnvisitedBitMask = 0xffffffff;
  TStack_688._padding_ = CONCAT44(uStack_7a4,iStack_7a8);
  iVar17 = (int)local_5c0 >> 5;
  TStack_688._28_4_ = local_5f4;
  TStack_688.BaseBitIndex = local_790;
  uStack_668 = CONCAT44(uStack_784,iStack_788);
  bVar11 = (byte)local_5c0;
  local_690 = (longlong *)local_7b0;
  TStack_688.Array = local_7a0;
  if (((int)local_5c0 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar16 != local_5c0) {
    FVar22 = (ForElementType<unsigned_int>)((longlong)local_5e8 + 0x10);
    if (local_5c8 != (ForElementType<unsigned_int>)0x0) {
      FVar22 = local_5c8;
    }
    uVar16 = -1 << (bVar11 & 0x1f) & *(uint *)((longlong)FVar22 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar17;
      uVar23 = uVar23 + 0x20;
      iVar17 = iVar17 + 1;
      uVar16 = local_5c0;
      if ((int)((local_5c0 - 1) + ((int)(local_5c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_149f3fcff;
      uVar16 = ((uint *)((longlong)FVar22 + 4))[lVar13];
    }
    uVar14 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar16 = (int)lVar13 + -1 + uVar23;
    if ((int)local_5c0 < (int)uVar16) {
      uVar16 = local_5c0;
    }
  }
LAB_149f3fcff:
  while( true ) {
    plVar5 = local_690;
    if ((int)local_690[1] - *(int *)((longlong)local_690 + 0x34) != (int)uStack_668) {
      `TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_7b5);
    }
    if (((TStack_688.CurrentBitIndex == uVar16) &&
        (TStack_688.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_5e8 + 0x10))) &&
       (plVar5 == (longlong *)local_5e8)) break;
    CleanupRemainingComponents
              (this,*(UPCGComponent **)(*plVar5 + (longlong)TStack_688.CurrentBitIndex * 0x10));
    TStack_688.UnvisitedBitMask = TStack_688.UnvisitedBitMask & ~TStack_688._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_688);
  }
  if (local_598.SecondaryData != (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
    FMemory::Free((void *)local_598.SecondaryData);
  }
  local_5a0 = 0;
  if (local_5a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a8.Data);
  }
  TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_5e8);
  if (local_348.SecondaryData !=
      (ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>)0x0) {
    FMemory::Free((void *)local_348.SecondaryData);
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CleanupRemainingComponents @ 149f3feb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FPCGRuntimeGenScheduler::CleanupRemainingComponents
          (FPCGRuntimeGenScheduler *this,UPCGComponent *param_1)

{
  ulonglong uVar1;
  APCGPartitionActor *this_00;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  UPCGComponent *pUVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  longlong *local_100;
  int iStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  int local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  if ((param_1 != (UPCGComponent *)0x0) &&
     (local_48 = __security_cookie.value ^ (ulonglong)auStack_128,
     param_1->GenerationTrigger == GenerateAtRuntime)) {
    FPCGActorAndComponentMapping::GetPCGComponentPartitionActorMappings
              (this->ActorAndComponentMapping,
               (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                *)local_98,param_1);
    uVar9 = local_70;
    iStack_f8 = 0;
    local_e0 = 0;
    uStack_f4 = 1;
    uStack_e4 = 0;
    if (local_70 != 0) {
      puVar10 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar10 = local_78;
      }
      uVar11 = *puVar10;
      while (uVar11 == 0) {
        lVar7 = (longlong)iStack_f8;
        local_e0 = local_e0 + 0x20;
        iStack_f8 = iStack_f8 + 1;
        uStack_e4 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_f8)
        goto LAB_149f3ff91;
        uVar11 = puVar10[lVar7 + 1];
      }
      uStack_f4 = -uVar11 & uVar11;
      uVar1 = (ulonglong)uStack_f4 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_d0 = (int)lVar7;
      uStack_e4 = local_d0 + -1 + local_e0;
      if ((int)local_70 < (int)uStack_e4) {
        uStack_e4 = local_70;
      }
    }
LAB_149f3ff91:
    local_100 = (longlong *)local_98;
    local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar11 = local_70 & 0xffffffe0;
    iStack_d8 = local_98._8_4_ - local_64;
    uStack_e8 = 0xffffffff;
    TStack_c0.CurrentBitIndex = uStack_e4;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    TStack_c0._padding_ = CONCAT44(uStack_f4,iStack_f8);
    iVar8 = (int)local_70 >> 5;
    TStack_c0._28_4_ = uStack_e4;
    TStack_c0.BaseBitIndex = local_e0;
    uStack_a0 = CONCAT44(uStack_d4,iStack_d8);
    bVar6 = (byte)local_70;
    uStack_dc = uStack_e4;
    local_c8 = local_100;
    TStack_c0.Array = local_f0;
    if (((int)local_70 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar9 != local_70) {
      puVar10 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar10 = local_78;
      }
      uVar9 = -1 << (bVar6 & 0x1f) & puVar10[iVar8];
      while (uVar9 == 0) {
        lVar7 = (longlong)iVar8;
        uVar11 = uVar11 + 0x20;
        iVar8 = iVar8 + 1;
        uVar9 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
        goto LAB_149f4009c;
        uVar9 = puVar10[lVar7 + 1];
      }
      uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar9 = (int)lVar7 + -1 + uVar11;
      if ((int)local_70 < (int)uVar9) {
        uVar9 = local_70;
      }
    }
LAB_149f4009c:
    while( true ) {
      plVar3 = local_c8;
      if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
        `TSparseArray<TSparseSetElement<TObjectPtr<APCGPartitionActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
      }
      if (((TStack_c0.CurrentBitIndex == uVar9) &&
          (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar3 == (longlong *)local_98)) break;
      this_00 = *(APCGPartitionActor **)(*plVar3 + (longlong)TStack_c0.CurrentBitIndex * 0x10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (APCGPartitionActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pUVar5 = APCGPartitionActor::GetLocalComponent(this_00,param_1);
      if (pUVar5 != (UPCGComponent *)0x0) {
        CleanupLocalComponent(this,this_00,pUVar5);
      }
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<TObjectPtr<APCGPartitionActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TObjectPtr<APCGPartitionActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TObjectPtr<APCGPartitionActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  return;
}

// GetPartitionActorFromPool @ 149f4c180

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

APCGPartitionActor * __thiscall
FPCGRuntimeGenScheduler::GetPartitionActorFromPool
          (FPCGRuntimeGenScheduler *this,FPCGGridDescriptor *param_1,TIntVector3<int> *param_2)

{
  uint uVar1;
  int *piVar2;
  TArray<TObjectPtr<APCGPartitionActor>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Dst;
  void *_Src;
  code *pcVar4;
  TConsoleVariableData<bool> *pTVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  APCGPartitionActor *pAVar8;
  APCGPartitionActor *pAVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  double dVar13;
  FName local_res8;
  FString local_68;
  TVector<double>_u_0 local_58;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1948,"FPCGRuntimeGenScheduler::GetPartitionActorFromPool",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
               ,0x79c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1948);
  }
  if ((this->ActorAndComponentMapping == (FPCGActorAndComponentMapping *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActorAndComponentMapping",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                         ,0x79e,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pAVar8 = (APCGPartitionActor *)(*pcVar4)();
    return pAVar8;
  }
  if (this->World == (UWorld *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    pAVar8 = (APCGPartitionActor *)0x0;
    goto LAB_149f4c521;
  }
  pAVar9 = FPCGActorAndComponentMapping::GetPartitionActor
                     (this->ActorAndComponentMapping,param_1,param_2);
  pTVar6 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationBasePoolSize.Ref;
  pAVar8 = pAVar9;
  if (pAVar9 != (APCGPartitionActor *)0x0) goto LAB_149f4c521;
  if ((this->PartitionActorPool).ArrayNum == 0) {
    iVar10 = this->PartitionActorPoolSize;
    if (iVar10 < 1) {
      bVar7 = IsInParallelGameThread();
      if (bVar7) {
LAB_149f4c2b9:
        lVar11 = 0;
      }
      else {
        bVar7 = IsInGameThread();
        lVar11 = 4;
        if (bVar7) goto LAB_149f4c2b9;
      }
      iVar10 = *(int *)((longlong)pTVar6->ShadowedValue + lVar11);
    }
    pTVar5 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnableDebugging.Ref;
    lVar11 = 1;
    if (iVar10 < 1) {
      iVar10 = 1;
    }
    bVar7 = IsInParallelGameThread();
    if ((bVar7) || (bVar7 = IsInGameThread(), bVar7)) {
      lVar11 = 0;
    }
    if ((pTVar5->ShadowedValue[lVar11] != false) && (2 < (byte)LogPCG._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    AddPartitionActorPoolCount(this,iVar10);
    if (((this->PartitionActorPool).ArrayNum == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PartitionActorPool.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                           ,0x7bb,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pAVar8 = (APCGPartitionActor *)(*pcVar4)();
      return pAVar8;
    }
  }
  pTVar3 = &this->PartitionActorPool;
  if (((this->PartitionActorPool).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    pAVar8 = (APCGPartitionActor *)(*pcVar4)();
    return pAVar8;
  }
  pAVar8 = *(APCGPartitionActor **)
            ((pTVar3->AllocatorInstance).Data +
            (longlong)(this->PartitionActorPool).ArrayNum * 8 + -8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar8 != (APCGPartitionActor *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pAVar8);
  }
  iVar10 = (this->PartitionActorPool).ArrayNum;
  uVar1 = iVar10 - 1;
  _Dst = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar1 * 8;
  iVar10 = ~uVar1 + iVar10;
  if (iVar10 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar10 << 3);
  }
  piVar2 = &(this->PartitionActorPool).ArrayNum;
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&pTVar3->AllocatorInstance,(this->PartitionActorPool).ArrayNum,
             &(this->PartitionActorPool).ArrayMax);
  dVar13 = (double)param_1->GridSize;
  local_58._s_0.X =
       ((double)(int)*(undefined8 *)&param_2->field0_0x0 + ___xmm_3fe00000000000003fe0000000000000)
       * dVar13;
  local_58._s_0.Y =
       ((double)(int)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) + _UNK_150689678) *
       dVar13;
  local_58._s_0.Z = ((double)(param_2->field0_0x0)._s_0.Z + __real_3fe0000000000000) * dVar13;
  bVar7 = APCGPartitionActor::Teleport(pAVar8,(TVector<double> *)&local_58._s_0);
  if ((!bVar7) && (1 < (byte)LogPCG._0_1_)) {
    iVar10 = (int)pAVar8->_padding_;
    if (iVar10 < 2) {
      local_res8 = (FName)pAVar8->_padding_;
      ::FName::ToString(&local_res8,&local_68);
    }
    else {
      _Src = (void *)pAVar8->_padding_;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)pAVar9;
      local_68.Data.ArrayNum = iVar10;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar10,0,(ForAnyElementType *)&local_68,iVar10,&local_68.Data.ArrayMax);
      memcpy(local_68.Data.AllocatorInstance.Data,_Src,(longlong)iVar10 * 2);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((APCGPartitionActor *)local_68.Data.AllocatorInstance.Data != (APCGPartitionActor *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  APCGPartitionActor::PostCreation(pAVar8,param_1);
LAB_149f4c521:
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pAVar8;
}

// OnLevelStreamingStateChanged @ 149f56990

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
FPCGRuntimeGenScheduler::OnLevelStreamingStateChanged
          (FPCGRuntimeGenScheduler *this,UWorld *param_1,ULevelStreaming *param_2,ULevel *param_3,
          ELevelStreamingState param_4,ELevelStreamingState param_5)

{
  if ((this->World == param_1) && ((param_4 == LoadedVisible || (param_5 == LoadedVisible)))) {
    TSet<TTuple<TTuple<UE::Math::TVector<double>,float>,bool>,TDefaultMapHashableKeyFuncs<TTuple<UE::Math::TVector<double>,float>,bool,0>,FDefaultSetAllocator>
    ::Empty((TSet<TTuple<TTuple<UE::Math::TVector<double>,float>,bool>,TDefaultMapHashableKeyFuncs<TTuple<UE::Math::TVector<double>,float>,bool,0>,FDefaultSetAllocator>
             *)&this->CachedStreamingQueryResults,
            *(int *)&(this->CachedStreamingQueryResults).field_0x8 -
            *(int *)&(this->CachedStreamingQueryResults).field_0x34);
    return;
  }
  return;
}

// OnOriginalComponentRegistered @ 149f569c0

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
FPCGRuntimeGenScheduler::OnOriginalComponentRegistered
          (FPCGRuntimeGenScheduler *this,UPCGComponent *param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if ((param_1 != (UPCGComponent *)0x0) && (param_1->GenerationTrigger == GenerateAtRuntime)) {
    lVar2 = param_1->_padding_;
    if (lVar2 != 0) {
      pUVar3 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return;
      }
    }
    this->bAnyRuntimeGenComponentsExistDirty = true;
  }
  return;
}

// OnOriginalComponentUnregistered @ 149f56aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FPCGRuntimeGenScheduler::OnOriginalComponentUnregistered
          (FPCGRuntimeGenScheduler *this,UPCGComponent *param_1)

{
  undefined1 *puVar1;
  FGridGenerationKey *pFVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FPCGRuntimeGenScheduler *pFVar9;
  longlong *plVar10;
  bool bVar11;
  uint uVar12;
  UClass *pUVar13;
  UPCGComponent *pUVar14;
  UObject *pUVar15;
  ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> FVar16;
  longlong lVar17;
  UPCGComponent *pUVar18;
  byte bVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> FVar24;
  undefined1 *puVar25;
  uint *puVar26;
  uint uVar27;
  undefined1 auStack_4a8 [32];
  ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> local_488;
  ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> local_480;
  longlong local_478;
  longlong local_470;
  undefined8 local_468;
  undefined1 local_458;
  undefined1 local_457;
  undefined1 local_456 [6];
  UPCGComponent *local_450;
  FPCGRuntimeGenScheduler *local_448;
  uint uStack_440;
  uint uStack_43c;
  TBitArray<FDefaultBitArrayAllocator> *local_438;
  undefined4 uStack_430;
  uint uStack_42c;
  uint local_428;
  undefined4 uStack_424;
  int iStack_420;
  undefined4 uStack_41c;
  FWeakObjectPtr local_418;
  ulonglong local_410;
  FWeakObjectPtr local_408;
  FPCGGridDescriptor local_400;
  int local_3e8;
  int local_3e4;
  undefined1 local_3e0 [40];
  undefined4 local_3b8;
  FPCGRuntimeGenScheduler *local_3b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3a8;
  undefined8 uStack_388;
  longlong *local_380;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_378;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined4 local_340;
  int iStack_33c;
  int iStack_338;
  undefined4 uStack_334;
  undefined4 local_330;
  undefined4 local_30c;
  undefined4 local_2ec;
  undefined1 local_2e8 [32];
  uint *local_2c8;
  uint local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  int local_2b4;
  ForElementType<FSetElementId> local_2a8;
  int local_2a0;
  ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> local_298;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  if (param_1 == (UPCGComponent *)0x0) {
    return;
  }
  local_48 = __security_cookie.value ^ (ulonglong)auStack_4a8;
  lVar17 = param_1->_padding_;
  local_450 = param_1;
  if (lVar17 != 0) {
    pUVar13 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
    lVar17 = *(longlong *)(lVar17 + 0x10);
    iVar22 = (int)pUVar13->_padding_;
    if ((iVar22 <= *(int *)(lVar17 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar17 + 0x30) + (longlong)iVar22 * 8) ==
        &pUVar13->_padding_)) {
      return;
    }
  }
  if ((this->ActorAndComponentMapping == (FPCGActorAndComponentMapping *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActorAndComponentMapping",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                          ,0x5ab,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->bAnyRuntimeGenComponentsExistDirty = true;
  local_2e8._0_8_ = 0;
  puVar1 = &(this->GeneratedComponents).Elements.field_0x10;
  local_2e8._8_8_ = 0;
  local_2c8 = (uint *)0x0;
  uStack_440 = 0;
  local_2c0 = 0;
  local_2b4 = 0;
  local_428 = 0;
  local_2a8 = (ForElementType<FSetElementId>)0x0;
  local_2a0 = 0;
  local_2bc = 0x80;
  local_2b8 = 0xffffffff;
  iVar22 = *(int *)&(this->GeneratedComponents).Elements.field_0x28;
  local_410 = 1;
  uStack_43c = 1;
  uStack_42c = local_428;
  if (iVar22 != 0) {
    puVar26 = *(uint **)&(this->GeneratedComponents).Elements.field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar1;
    }
    uStack_43c = *puVar26;
    uStack_440 = 0;
    local_428 = 0;
    while (uStack_43c == 0) {
      uStack_440 = uStack_440 + 1;
      local_428 = local_428 + 0x20;
      uStack_43c = 1;
      uStack_42c = iVar22;
      if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_440)
      goto LAB_149f56c2e;
      uStack_43c = puVar26[(int)uStack_440];
    }
    uStack_43c = -uStack_43c & uStack_43c;
    uVar3 = (ulonglong)uStack_43c * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_3e8 = (int)lVar17;
    uStack_42c = local_3e8 + -1 + local_428;
    if (iVar22 < (int)uStack_42c) {
      uStack_42c = iVar22;
    }
  }
LAB_149f56c2e:
  uVar23 = *(uint *)&(this->GeneratedComponents).Elements.field_0x28;
  uStack_424 = local_30c;
  uVar27 = uVar23 & 0xffffffe0;
  iStack_420 = *(int *)&(this->GeneratedComponents).Elements.field_0x8 -
               *(int *)&(this->GeneratedComponents).Elements.field_0x34;
  TStack_3a8._padding_ = CONCAT44(uStack_43c,uStack_440);
  uStack_430 = 0xffffffff;
  TStack_3a8.CurrentBitIndex = uStack_42c;
  TStack_3a8.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)uVar23 >> 5;
  TStack_3a8._28_4_ = local_30c;
  TStack_3a8.BaseBitIndex = local_428;
  uStack_388 = CONCAT44(uStack_41c,iStack_420);
  local_448 = this;
  local_438 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_3b0 = this;
  TStack_3a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar23 < 0) || (iVar22 < (int)uVar23)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar18 = local_450;
  uVar12 = *(uint *)&(this->GeneratedComponents).Elements.field_0x28;
  if (uVar23 != uVar12) {
    puVar5 = *(undefined1 **)&(this->GeneratedComponents).Elements.field_0x20;
    puVar25 = puVar1;
    if (puVar5 != (undefined1 *)0x0) {
      puVar25 = puVar5;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar21 * 4);
    while (uVar23 == 0) {
      iVar21 = iVar21 + 1;
      uVar27 = uVar27 + 0x20;
      uVar23 = uVar12;
      if ((int)(((int)(uVar12 - 1) >> 0x1f & 0x1fU) + (uVar12 - 1)) >> 5 < iVar21)
      goto LAB_149f56d50;
      uVar23 = *(uint *)(puVar25 + (longlong)iVar21 * 4);
    }
    uVar3 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_3e4 = (int)lVar17;
    uVar23 = local_3e4 + -1 + uVar27;
    if ((int)uVar12 < (int)uVar23) {
      uVar23 = uVar12;
    }
  }
LAB_149f56d50:
  while( true ) {
    pFVar9 = local_3b0;
    if (*(int *)&(local_3b0->GeneratedComponents).Elements.field_0x8 -
        *(int *)&(local_3b0->GeneratedComponents).Elements.field_0x34 != (int)uStack_388) {
      local_458 = 0;
      `TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_458);
    }
    uVar27 = local_2c0;
    if (((TStack_3a8.CurrentBitIndex == uVar23) &&
        (TStack_3a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar9 == this))
    break;
    lVar20 = (longlong)TStack_3a8.CurrentBitIndex * 0x2c;
    lVar17 = *(longlong *)&(pFVar9->GeneratedComponents).Elements;
    puVar4 = (undefined4 *)(lVar20 + 0x10 + lVar17);
    local_340 = *puVar4;
    local_418.ObjectIndex = puVar4[1];
    local_418.ObjectSerialNumber = puVar4[2];
    uStack_334 = puVar4[3];
    local_350 = *(undefined8 *)(lVar20 + lVar17);
    uStack_348 = ((undefined8 *)(lVar20 + lVar17))[1];
    local_330 = *(undefined4 *)(lVar20 + 0x20 + lVar17);
    iStack_33c = local_418.ObjectIndex;
    iStack_338 = local_418.ObjectSerialNumber;
    pUVar14 = (UPCGComponent *)FWeakObjectPtr::Get(&local_418);
    if (pUVar14 == pUVar18) {
      TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
      ::Emplace<FPCGRuntimeGenScheduler::FGridGenerationKey_const_&>
                ((TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
                  *)local_2e8,(FGridGenerationKey *)local_3e0,(bool *)&local_350);
    }
    TStack_3a8.UnvisitedBitMask = TStack_3a8.UnvisitedBitMask & ~TStack_3a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3a8);
  }
  uStack_440 = 0;
  local_298.SecondaryData = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0;
  local_50 = 0;
  local_4c = 0x10;
  uStack_42c = uStack_440;
  local_428 = uStack_440;
  if (local_2c0 != 0) {
    puVar26 = (uint *)(local_2e8 + 0x10);
    if (local_2c8 != (uint *)0x0) {
      puVar26 = local_2c8;
    }
    uVar23 = *puVar26;
    uStack_440 = 0;
    local_428 = 0;
    while (uVar23 == 0) {
      uStack_440 = uStack_440 + 1;
      local_428 = local_428 + 0x20;
      uStack_42c = local_2c0;
      if ((int)((local_2c0 - 1) + ((int)(local_2c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_440)
      goto LAB_149f56e91;
      uVar23 = puVar26[(int)uStack_440];
    }
    local_410 = (ulonglong)(-uVar23 & uVar23);
    uVar3 = local_410 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_3e0._4_4_ = (undefined4)lVar17;
    uStack_42c = (local_3e0._4_4_ - 1) + local_428;
    if ((int)local_2c0 < (int)uStack_42c) {
      uStack_42c = local_2c0;
    }
  }
LAB_149f56e91:
  local_448 = (FPCGRuntimeGenScheduler *)local_2e8;
  uVar23 = local_2c0 & 0xffffffe0;
  uStack_43c = (uint)local_410;
  uStack_424 = local_2ec;
  local_438 = (TBitArray<FDefaultBitArrayAllocator> *)(local_2e8 + 0x10);
  iStack_420 = local_2e8._8_4_ - local_2b4;
  uStack_430 = 0xffffffff;
  TStack_378.CurrentBitIndex = uStack_42c;
  TStack_378.UnvisitedBitMask = 0xffffffff;
  TStack_378._padding_ = CONCAT44(uStack_43c,uStack_440);
  iVar22 = (int)local_2c0 >> 5;
  TStack_378._28_4_ = local_2ec;
  TStack_378.BaseBitIndex = local_428;
  uStack_358 = CONCAT44(uStack_41c,iStack_420);
  bVar19 = (byte)local_2c0;
  local_380 = (longlong *)local_448;
  TStack_378.Array = local_438;
  if (((int)local_2c0 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (uVar27 != local_2c0) {
    puVar26 = (uint *)(local_2e8 + 0x10);
    if (local_2c8 != (uint *)0x0) {
      puVar26 = local_2c8;
    }
    uVar27 = -1 << (bVar19 & 0x1f) & puVar26[iVar22];
    while (uVar27 == 0) {
      iVar22 = iVar22 + 1;
      uVar23 = uVar23 + 0x20;
      uVar27 = local_2c0;
      if ((int)(((int)(local_2c0 - 1) >> 0x1f & 0x1fU) + (local_2c0 - 1)) >> 5 < iVar22)
      goto LAB_149f56fc1;
      uVar27 = puVar26[iVar22];
    }
    uVar3 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_3e0._8_4_ = (undefined4)lVar17;
    uVar27 = local_3e0._8_4_ + -1 + uVar23;
    if ((int)local_2c0 < (int)uVar27) {
      uVar27 = local_2c0;
    }
  }
LAB_149f56fc1:
  do {
    plVar10 = local_380;
    if ((int)local_380[1] - *(int *)((longlong)local_380 + 0x34) != (int)uStack_358) {
      local_457 = 0;
      `TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_457);
    }
    iVar22 = local_50;
    if (((TStack_378.CurrentBitIndex == uVar27) &&
        (TStack_378.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_2e8 + 0x10))) &&
       (plVar10 == (longlong *)local_2e8)) {
      FVar24 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&local_298;
      if (local_298.SecondaryData !=
          (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
        FVar24 = local_298.SecondaryData;
      }
      FVar16 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)
               ((longlong)FVar24 + (longlong)local_50 * 0x24);
      while( true ) {
        if (local_50 != iVar22) {
          `TCheckedPointerIterator<FPCGRuntimeGenScheduler::FGridGenerationKey,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_456);
        }
        if (FVar24 == FVar16) break;
        if (*(int *)&(this->GeneratedComponents).Elements.field_0x8 !=
            *(int *)&(this->GeneratedComponents).Elements.field_0x34) {
          uVar23 = ::GetTypeHash((FGridGenerationKey *)FVar24);
          TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
          ::RemoveImpl<FPCGRuntimeGenScheduler::FGridGenerationKey>
                    (&this->GeneratedComponents,uVar23,(FGridGenerationKey *)FVar24);
        }
        FVar24 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)
                 ((longlong)FVar24 + 0x24);
      }
      CleanupRemainingComponents(this,local_450);
      if (local_298.SecondaryData !=
          (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
        FMemory::Free((void *)local_298.SecondaryData);
      }
      local_2a0 = 0;
      if (local_2a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_2a8);
      }
      TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_2e8);
      return;
    }
    FVar24 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)
             ((longlong)TStack_378.CurrentBitIndex * 0x2c + *plVar10);
    local_408.ObjectIndex = *(int *)((longlong)FVar24 + 0x14);
    local_408.ObjectSerialNumber = *(int *)((longlong)FVar24 + 0x18);
    pUVar15 = FWeakObjectPtr::Get(&local_408);
    if (pUVar15 == (UObject *)0x0) {
      FVar16 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&local_298;
      if (local_298.SecondaryData !=
          (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
        FVar16 = local_298.SecondaryData;
      }
      if ((ulonglong)FVar16 <= (ulonglong)FVar24) {
        FVar16 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&local_298;
        if (local_298.SecondaryData !=
            (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
          FVar16 = local_298.SecondaryData;
        }
        if ((ulonglong)FVar24 < (ulonglong)((longlong)FVar16 + (longlong)local_4c * 0x24)) {
          local_470 = (longlong)local_50;
          local_468 = 0x24;
          local_480 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&local_298;
          if (local_298.SecondaryData !=
              (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
            local_480 = local_298.SecondaryData;
          }
          local_488 = FVar24;
          local_478 = (longlong)local_4c;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
      if (local_50 == local_4c) {
        local_50 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>_>
                             (0x424,&local_298,&local_4c);
      }
      uVar7 = *(undefined8 *)FVar24;
      uVar8 = *(undefined8 *)((longlong)FVar24 + 8);
      FVar16 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&local_298;
      if (local_298.SecondaryData !=
          (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
        FVar16 = local_298.SecondaryData;
      }
      lVar17 = (longlong)local_50;
      pFVar2 = (FGridGenerationKey *)((longlong)FVar16 + lVar17 * 0x24);
      local_50 = local_50 + 1;
      pFVar2->bUse2DGrid = (bool)(char)uVar7;
      *(int3 *)&pFVar2->field_0x1 = (int3)((ulonglong)uVar7 >> 8);
      pFVar2->GridSize = (int)((ulonglong)uVar7 >> 0x20);
      *(undefined8 *)&(pFVar2->GridCoords).field0_0x0 = uVar8;
      uVar7 = *(undefined8 *)((longlong)FVar24 + 0x18);
      *(undefined8 *)((uchar *)((longlong)FVar16 + 0x10) + lVar17 * 0x24) =
           *(undefined8 *)((longlong)FVar24 + 0x10);
      *(undefined8 *)((uchar *)((longlong)FVar16 + 0x10) + lVar17 * 0x24 + 8) = uVar7;
      ((int *)((longlong)FVar16 + 0x20))[lVar17 * 9] = *(int *)((longlong)FVar24 + 0x20);
    }
    else {
      uVar23 = *(uint *)((longlong)FVar24 + 4);
      local_3b8 = 0;
      local_400.bIs2DGrid = *(bool *)FVar24;
      local_3e0._32_8_ = 0;
      local_3e0[0x1c] = local_400.bIs2DGrid;
      local_3e0._24_4_ = uVar23;
      local_3e0[0x1d] = 1;
      local_3e0._30_2_ = 0;
      local_400.bIsRuntime = true;
      local_400.RuntimeHash = 0;
      local_400.Hash.bIsSet = false;
      local_400.GridSize = uVar23;
      uVar12 = PCGHiGenGrid::UnboundedGridSize();
      pUVar18 = local_450;
      if (uVar23 != uVar12) {
        local_3e0._12_8_ = *(undefined8 *)((longlong)FVar24 + 8);
        local_3e0._20_4_ = *(undefined4 *)((longlong)FVar24 + 0x10);
        pUVar18 = FPCGActorAndComponentMapping::GetLocalComponent
                            (this->ActorAndComponentMapping,&local_400,
                             (TIntVector3<int> *)(local_3e0 + 0xc),local_450);
        if (pUVar18 == (UPCGComponent *)0x0) goto LAB_149f571b9;
      }
      CleanupComponent(this,(FGridGenerationKey *)FVar24,pUVar18);
    }
LAB_149f571b9:
    TStack_378.UnvisitedBitMask = TStack_378.UnvisitedBitMask & ~TStack_378._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_378);
  } while( true );
}

// RefreshComponent @ 149f59030

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
FPCGRuntimeGenScheduler::RefreshComponent
          (FPCGRuntimeGenScheduler *this,UPCGComponent *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  code *pcVar5;
  TConsoleVariableData<bool> *pTVar6;
  FPCGRuntimeGenScheduler *pFVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  EPCGHiGenGrid EVar14;
  UClass *pUVar15;
  UPCGComponent *this_00;
  TIntVector3<int> *pTVar16;
  UPCGComponent *pUVar17;
  longlong lVar18;
  FGridGenerationKey *pFVar19;
  int iVar20;
  APCGPartitionActor *this_01;
  longlong lVar21;
  ForAnyElementType FVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  uint *puVar25;
  uint uVar26;
  undefined1 local_2c8 [4];
  uint local_2c4;
  ForAnyElementType local_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0;
  undefined1 local_2af [7];
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FWeakObjectPtr local_268;
  FPCGRuntimeGenScheduler *local_260;
  undefined1 auStack_258 [16];
  uint uStack_248;
  int iStack_244;
  int local_240;
  undefined4 uStack_23c;
  int iStack_238;
  undefined4 uStack_234;
  FWeakObjectPtr local_230;
  FWeakObjectPtr local_228;
  TIntVector3<int>_u_0 local_220;
  bool local_214 [4];
  uint local_210;
  undefined8 local_20c;
  int local_204;
  int local_200;
  int local_1fc;
  FWeakObjectPtr local_1f8;
  FPCGGridDescriptor local_1f0;
  FPCGGridDescriptor local_1d8;
  undefined1 local_1c0 [24];
  int iStack_1a8;
  int iStack_1a4;
  int local_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  undefined1 local_190 [8];
  undefined1 local_188 [12];
  int local_17c;
  TIntVector3<int>_u_0 local_178;
  TIntVector3<int>_u_0 local_168;
  FName local_158;
  FName local_150;
  FName local_148;
  UPCGComponent *local_140;
  UPCGComponent *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  int iStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  FName local_108;
  FPCGRuntimeGenScheduler *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  FPCGRuntimeGenScheduler *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  FPCGRuntimeGenScheduler *local_a0;
  UPCGComponent *local_98;
  char local_90;
  TIntVector3<int> local_88 [3];
  undefined4 local_5c;
  undefined4 local_3c;
  
  if (param_1 == (UPCGComponent *)0x0) {
    return;
  }
  bVar8 = IsInGameThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4830013997950437104>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                       ,0x6f0,"IsInGameThread()");
    if (!bVar8) {
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_01 = (APCGPartitionActor *)param_1->_padding_;
  if (this_01 != (APCGPartitionActor *)0x0) {
    pUVar15 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((iVar13 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
        &pUVar15->_padding_)) {
      bVar8 = true;
      this_00 = APCGPartitionActor::GetOriginalComponent(this_01,param_1);
      if (this_00 == (UPCGComponent *)0x0) {
        return;
      }
      goto LAB_149f5910d;
    }
  }
  this_01 = (APCGPartitionActor *)0x0;
  bVar8 = false;
  this_00 = param_1;
LAB_149f5910d:
  if (this_00 != this->OriginalComponentBeingGenerated) {
    PCGRuntimeGenChangeDetection::FDetector::FlushCachedState(&this->ChangeDetector,this_00);
    pTVar6 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnableDebugging.Ref;
    bVar9 = IsInParallelGameThread();
    uVar12 = 1;
    if ((bVar9) || (bVar9 = IsInGameThread(), bVar9)) {
      lVar18 = 0;
    }
    else {
      lVar18 = 1;
    }
    bVar9 = pTVar6->ShadowedValue[lVar18];
    if (param_1->CurrentGenerationTask != 0xffffffffffffffff) {
      UPCGComponent::CancelGeneration(param_1);
    }
    if (param_2) {
      local_a0 = this;
      local_98 = this_00;
      local_90 = bVar9;
      if (bVar8) {
        `FPCGRuntimeGenScheduler::RefreshComponent'::__l94::<lambda_1>::operator()
                  (&local_a0,param_1);
        return;
      }
      local_1a0 = 0;
      puVar23 = &(this->GeneratedComponents).Elements.field_0x10;
      local_2c0.Data = (FScriptContainerElement *)0x0;
      local_1c0._8_4_ = 0;
      local_2b8 = 0;
      iVar13 = *(int *)&(this->GeneratedComponents).Elements.field_0x28;
      iStack_1a4 = local_1c0._8_4_;
      if (iVar13 != 0) {
        puVar25 = *(uint **)&(this->GeneratedComponents).Elements.field_0x20;
        if (puVar25 == (uint *)0x0) {
          puVar25 = (uint *)puVar23;
        }
        uVar11 = *puVar25;
        local_1c0._8_4_ = 0;
        while (uVar11 == 0) {
          local_1c0._8_4_ = local_1c0._8_4_ + 1;
          local_1a0 = local_1a0 + 0x20;
          iStack_1a4 = iVar13;
          if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_1c0._8_4_)
          goto LAB_149f59921;
          uVar11 = puVar25[(int)local_1c0._8_4_];
        }
        uVar12 = -uVar11 & uVar11;
        uVar2 = (ulonglong)uVar12 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_188._8_4_ = (undefined4)lVar18;
        iStack_1a4 = local_1a0 + -1 + local_188._8_4_;
        if (iVar13 < iStack_1a4) {
          iStack_1a4 = iVar13;
        }
      }
LAB_149f59921:
      uStack_19c = local_3c;
      iStack_198 = *(int *)&(this->GeneratedComponents).Elements.field_0x8 -
                   *(int *)&(this->GeneratedComponents).Elements.field_0x34;
      uVar11 = *(uint *)&(this->GeneratedComponents).Elements.field_0x28;
      iStack_1a8 = -1;
      uVar26 = uVar11 & 0xffffffe0;
      TStack_c8._padding_ = CONCAT44(uVar12,local_1c0._8_4_);
      TStack_c8.CurrentBitIndex = iStack_1a4;
      TStack_c8.UnvisitedBitMask = 0xffffffff;
      iVar20 = (int)uVar11 >> 5;
      TStack_c8._28_4_ = local_3c;
      TStack_c8.BaseBitIndex = local_1a0;
      uStack_a8 = CONCAT44(uStack_194,iStack_198);
      local_1c0._0_8_ = this;
      local_1c0._12_4_ = uVar12;
      local_1c0._16_8_ = puVar23;
      local_d0 = this;
      TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar23;
      if ((((int)uVar11 < 0) || (iVar13 < (int)uVar11)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar12 = *(uint *)&(this->GeneratedComponents).Elements.field_0x28;
      if (uVar11 != uVar12) {
        puVar24 = *(undefined1 **)&(this->GeneratedComponents).Elements.field_0x20;
        if (puVar24 == (undefined1 *)0x0) {
          puVar24 = puVar23;
        }
        uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar20 * 4);
        while (uVar11 == 0) {
          iVar20 = iVar20 + 1;
          uVar26 = uVar26 + 0x20;
          uVar11 = uVar12;
          if ((int)(((int)(uVar12 - 1) >> 0x1f & 0x1fU) + (uVar12 - 1)) >> 5 < iVar20)
          goto LAB_149f59a30;
          uVar11 = *(uint *)(puVar24 + (longlong)iVar20 * 4);
        }
        uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_17c = (int)lVar18;
        uVar11 = (uVar26 - 1) + local_17c;
        if ((int)uVar12 < (int)uVar11) {
          uVar11 = uVar12;
        }
      }
LAB_149f59a30:
      while( true ) {
        pFVar7 = local_d0;
        if (*(int *)&(local_d0->GeneratedComponents).Elements.field_0x8 -
            *(int *)&(local_d0->GeneratedComponents).Elements.field_0x34 != (int)uStack_a8) {
          local_2c8[0] = 0;
          `TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2c8);
        }
        if (((TStack_c8.CurrentBitIndex == uVar11) &&
            (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar23)) &&
           (pFVar7 == this)) break;
        lVar21 = (longlong)TStack_c8.CurrentBitIndex * 0x2c;
        lVar18 = *(longlong *)&(pFVar7->GeneratedComponents).Elements;
        local_130 = *(undefined8 *)(lVar21 + lVar18);
        uStack_128 = ((undefined8 *)(lVar21 + lVar18))[1];
        puVar3 = (undefined4 *)(lVar21 + 0x10 + lVar18);
        local_120 = *puVar3;
        local_228.ObjectIndex = puVar3[1];
        local_228.ObjectSerialNumber = puVar3[2];
        uStack_114 = puVar3[3];
        local_110 = *(undefined4 *)(lVar21 + 0x20 + lVar18);
        iStack_11c = local_228.ObjectIndex;
        iStack_118 = local_228.ObjectSerialNumber;
        pUVar17 = (UPCGComponent *)FWeakObjectPtr::Get(&local_228);
        if (pUVar17 == this_00) {
          if (((local_2c0.Data <= (FScriptContainerElement *)&local_130) &&
              ((FScriptContainerElement *)&local_130 <
               local_2c0.Data + (longlong)local_2b8._4_4_ * 0x24)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar13 = (int)local_2b8;
          if ((int)local_2b8 == local_2b8._4_4_) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x424,&local_2c0,(int *)((longlong)&local_2b8 + 4));
          }
          lVar18 = (longlong)iVar13;
          local_2b8 = CONCAT44(local_2b8._4_4_,iVar13 + 1);
          *(undefined8 *)(local_2c0.Data + lVar18 * 0x24) = local_130;
          *(undefined8 *)(local_2c0.Data + lVar18 * 0x24 + 8) = uStack_128;
          *(ulonglong *)(local_2c0.Data + lVar18 * 0x24 + 0x10) = CONCAT44(iStack_11c,local_120);
          *(ulonglong *)(local_2c0.Data + lVar18 * 0x24 + 0x10 + 8) =
               CONCAT44(uStack_114,iStack_118);
          *(undefined4 *)(local_2c0.Data + lVar18 * 0x24 + 0x20) = local_110;
        }
        TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
      }
      iVar13 = (int)local_2b8;
      pFVar1 = local_2c0.Data + (longlong)(int)local_2b8 * 0x24;
      FVar22.Data = local_2c0.Data;
      while( true ) {
        if ((int)local_2b8 != iVar13) {
          `TCheckedPointerIterator<FPCGRuntimeGenScheduler::FGridGenerationKey,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_2af);
        }
        if (FVar22.Data == pFVar1) break;
        local_1d8.GridSize = *(uint *)(FVar22.Data + 4);
        local_260 = *(FPCGRuntimeGenScheduler **)FVar22.Data;
        auStack_258._0_4_ = *(undefined4 *)(FVar22.Data + 8);
        auStack_258._4_4_ = *(undefined4 *)(FVar22.Data + 0xc);
        local_240 = *(int *)(FVar22.Data + 0x20);
        auStack_258._8_8_ = *(undefined8 *)(FVar22.Data + 0x10);
        _uStack_248 = *(undefined8 *)(FVar22.Data + 0x18);
        local_1d8.bIsRuntime = true;
        local_1d8.bIs2DGrid = SUB41(*(undefined4 *)FVar22.Data,0);
        local_1d8.RuntimeHash = 0;
        local_1d8.Hash.bIsSet = false;
        EVar14 = PCGHiGenGrid::GridSizeToGrid(local_1d8.GridSize);
        if (EVar14 == Unbounded) {
          pUVar17 = this_00;
          if (((bVar9 != false) && (this_00->_padding_ != 0)) && (2 < (byte)LogPCG._0_1_)) {
            UPCGComponent::IsPartitioned(this_00);
            lVar18 = this_00->_padding_;
            if (*(int *)(lVar18 + 0x1f0) < 2) {
              local_158 = *(FName *)(lVar18 + 0x18);
              ::FName::ToString(&local_158,&local_2a8);
            }
            else {
              local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_2a8.Data.ArrayNum = *(int *)(lVar18 + 0x1f0);
              lVar21 = (longlong)local_2a8.Data.ArrayNum;
              pvVar4 = *(void **)(lVar18 + 0x1e8);
              if (local_2a8.Data.ArrayNum == 0) {
                local_2a8.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_2a8.Data.ArrayNum,0,(ForAnyElementType *)&local_2a8,
                           local_2a8.Data.ArrayNum,&local_2a8.Data.ArrayMax);
                memcpy(local_2a8.Data.AllocatorInstance.Data,pvVar4,lVar21 * 2);
              }
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
            }
          }
LAB_149f59d8c:
          CleanupComponent(this,(FGridGenerationKey *)&local_260,pUVar17);
          FVar22.Data = FVar22.Data + 0x24;
        }
        else {
          local_168._0_8_ = CONCAT44(auStack_258._4_4_,auStack_258._0_4_);
          local_168._s_0.Z = auStack_258._8_4_;
          pUVar17 = FPCGActorAndComponentMapping::GetLocalComponent
                              (this->ActorAndComponentMapping,&local_1d8,
                               (TIntVector3<int> *)&local_168._s_0,this_00);
          if (pUVar17 == (UPCGComponent *)0x0) {
            pUVar17 = (UPCGComponent *)0x0;
            goto LAB_149f59d8c;
          }
          `FPCGRuntimeGenScheduler::RefreshComponent'::__l94::<lambda_1>::operator()
                    (&local_a0,pUVar17);
          FVar22.Data = FVar22.Data + 0x24;
        }
      }
      if (local_2c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c0.Data);
      }
    }
    else {
      if (this_01 == (APCGPartitionActor *)0x0) {
        uVar11 = PCGHiGenGrid::UnboundedGridSize();
        iVar20 = 0;
        local_220._0_8_ = 0;
        local_220._s_0.Z = 0;
        FGridGenerationKey::FGridGenerationKey
                  ((FGridGenerationKey *)local_1c0,uVar11,(TIntVector3<int> *)&local_220._s_0,
                   this_00);
        TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
        ::Emplace<FPCGRuntimeGenScheduler::FGridGenerationKey>
                  (&this->GeneratedComponentsToRemove,(FGridGenerationKey *)(local_190 + 4),
                   (bool *)local_1c0);
        iVar13 = *(int *)&(this->GeneratedComponents).Elements.field_0x28;
        iStack_244 = 0;
        auStack_258._0_4_ = iVar20;
        local_240 = iVar20;
        if (iVar13 != 0) {
          puVar25 = *(uint **)&(this->GeneratedComponents).Elements.field_0x20;
          if (puVar25 == (uint *)0x0) {
            puVar25 = (uint *)&(this->GeneratedComponents).Elements.field_0x10;
          }
          uVar11 = *puVar25;
          while (uVar11 == 0) {
            auStack_258._0_4_ = auStack_258._0_4_ + 1;
            local_240 = local_240 + 0x20;
            iStack_244 = iVar13;
            if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)auStack_258._0_4_)
            goto LAB_149f5941e;
            uVar11 = puVar25[(int)auStack_258._0_4_];
          }
          uVar12 = -uVar11 & uVar11;
          uVar2 = (ulonglong)uVar12 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_188._0_4_ = (undefined4)lVar18;
          iStack_244 = local_240 + -1 + local_188._0_4_;
          if (iVar13 < iStack_244) {
            iStack_244 = iVar13;
          }
        }
LAB_149f5941e:
        auStack_258._8_8_ = &(this->GeneratedComponents).Elements.field_0x10;
        uStack_23c = local_5c;
        iStack_238 = *(int *)&(this->GeneratedComponents).Elements.field_0x8 -
                     *(int *)&(this->GeneratedComponents).Elements.field_0x34;
        uVar11 = *(uint *)&(this->GeneratedComponents).Elements.field_0x28;
        uVar26 = uVar11 & 0xffffffe0;
        TStack_f8._padding_ = CONCAT44(uVar12,auStack_258._0_4_);
        uStack_248 = 0xffffffff;
        iVar20 = (int)uVar11 >> 5;
        TStack_f8._28_4_ = local_5c;
        TStack_f8.BaseBitIndex = local_240;
        uStack_d8 = CONCAT44(uStack_234,iStack_238);
        TStack_f8.UnvisitedBitMask = 0xffffffff;
        TStack_f8.CurrentBitIndex = iStack_244;
        local_2c4 = uVar11;
        local_260 = this;
        auStack_258._4_4_ = uVar12;
        local_100 = this;
        TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)auStack_258._8_8_;
        if ((((int)uVar11 < 0) || (iVar13 < (int)uVar11)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar12 = *(uint *)&(this->GeneratedComponents).Elements.field_0x28;
        if (uVar11 != uVar12) {
          puVar23 = *(undefined1 **)&(this->GeneratedComponents).Elements.field_0x20;
          if (puVar23 == (undefined1 *)0x0) {
            puVar23 = &(this->GeneratedComponents).Elements.field_0x10;
          }
          uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar20 * 4);
          while (uVar11 == 0) {
            iVar20 = iVar20 + 1;
            uVar26 = uVar26 + 0x20;
            uVar11 = uVar12;
            local_2c4 = uVar12;
            if ((int)(((int)(uVar12 - 1) >> 0x1f & 0x1fU) + (uVar12 - 1)) >> 5 < iVar20)
            goto LAB_149f59530;
            uVar11 = *(uint *)(puVar23 + (longlong)iVar20 * 4);
          }
          uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
          lVar18 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar11 = (int)lVar18 + -1 + uVar26;
          local_2c4 = uVar11;
          if ((int)uVar12 < (int)uVar11) {
            uVar11 = uVar12;
            local_2c4 = uVar12;
          }
        }
LAB_149f59530:
        while( true ) {
          pFVar7 = local_100;
          if (*(int *)&(local_100->GeneratedComponents).Elements.field_0x8 -
              *(int *)&(local_100->GeneratedComponents).Elements.field_0x34 != (int)uStack_d8) {
            `TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b0);
          }
          if (((TStack_f8.CurrentBitIndex == uVar11) &&
              (TStack_f8.Array ==
               (TBitArray<FDefaultBitArrayAllocator> *)
               &(this->GeneratedComponents).Elements.field_0x10)) && (pFVar7 == this)) break;
          pFVar19 = (FGridGenerationKey *)
                    (*(longlong *)&(pFVar7->GeneratedComponents).Elements +
                    (longlong)TStack_f8.CurrentBitIndex * 0x2c);
          local_230.ObjectIndex = (pFVar19->OriginalComponent).ObjectKey.ObjectIndex;
          local_230.ObjectSerialNumber = (pFVar19->OriginalComponent).ObjectKey.ObjectSerialNumber;
          pUVar17 = (UPCGComponent *)FWeakObjectPtr::Get(&local_230);
          if (pUVar17 == param_1) {
            uVar12 = ::GetTypeHash(pFVar19);
            iVar13 = TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<FPCGRuntimeGenScheduler::FGridGenerationKey>
                               (&this->GeneratedComponentsToRemove,uVar12,pFVar19);
            if (iVar13 == -1) {
              local_1f0.GridSize = pFVar19->GridSize;
              local_178._0_8_ = *(undefined8 *)&(pFVar19->GridCoords).field0_0x0;
              local_1f0.bIs2DGrid = pFVar19->bUse2DGrid;
              local_178._s_0.Z = (pFVar19->GridCoords).field0_0x0._s_0.Z;
              local_1f0.bIsRuntime = true;
              local_1f0.RuntimeHash = 0;
              local_1f0.Hash.bIsSet = false;
              pUVar17 = FPCGActorAndComponentMapping::GetLocalComponent
                                  (this->ActorAndComponentMapping,&local_1f0,
                                   (TIntVector3<int> *)&local_178._s_0,this_00);
              if (pUVar17 != (UPCGComponent *)0x0) {
                if (((bVar9 != false) && (lVar18 = pUVar17->_padding_, lVar18 != 0)) &&
                   (2 < (byte)LogPCG._0_1_)) {
                  if (*(int *)(lVar18 + 0x1f0) < 2) {
                    local_148 = *(FName *)(lVar18 + 0x18);
                    ::FName::ToString(&local_148,&local_288);
                  }
                  else {
                    local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_288.Data.ArrayNum = *(int *)(lVar18 + 0x1f0);
                    lVar21 = (longlong)local_288.Data.ArrayNum;
                    pvVar4 = *(void **)(lVar18 + 0x1e8);
                    if (local_288.Data.ArrayNum == 0) {
                      local_288.Data.ArrayMax = 0;
                      uVar11 = local_2c4;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (2,2,local_288.Data.ArrayNum,0,(ForAnyElementType *)&local_288,
                                 local_288.Data.ArrayNum,&local_288.Data.ArrayMax);
                      memcpy(local_288.Data.AllocatorInstance.Data,pvVar4,lVar21 * 2);
                      uVar11 = local_2c4;
                    }
                  }
                  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_288.Data.AllocatorInstance.Data);
                  }
                }
                UPCGComponent::CleanupLocalImmediate(pUVar17,false,false);
                UPCGComponent::SetPropertiesFromOriginal(pUVar17,this_00);
              }
              TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
              ::Emplace<FPCGRuntimeGenScheduler::FGridGenerationKey_const_&>
                        (&this->GeneratedComponentsToRemove,(FGridGenerationKey *)(local_188 + 4),
                         (bool *)pFVar19);
            }
          }
          TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
        }
        if (((bVar9 != false) && (this_00->_padding_ != 0)) && (2 < (byte)LogPCG._0_1_)) {
          UPCGComponent::IsPartitioned(this_00);
          lVar18 = this_00->_padding_;
          if (*(int *)(lVar18 + 0x1f0) < 2) {
            local_150 = *(FName *)(lVar18 + 0x18);
            ::FName::ToString(&local_150,&local_298);
          }
          else {
            local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_298.Data.ArrayNum = *(int *)(lVar18 + 0x1f0);
            lVar21 = (longlong)local_298.Data.ArrayNum;
            pvVar4 = *(void **)(lVar18 + 0x1e8);
            if (local_298.Data.ArrayNum == 0) {
              local_298.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_298.Data.ArrayNum,0,(ForAnyElementType *)&local_298,
                         local_298.Data.ArrayNum,&local_298.Data.ArrayMax);
              memcpy(local_298.Data.AllocatorInstance.Data,pvVar4,lVar21 * 2);
            }
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        if ((bVar9 != false) && (2 < (byte)LogPCG._0_1_)) {
          if ((int)this_01->_padding_ < 2) {
            local_108 = (FName)this_01->_padding_;
            ::FName::ToString(&local_108,&local_278);
          }
          else {
            local_278.Data.ArrayNum = (int)this_01->_padding_;
            lVar18 = (longlong)local_278.Data.ArrayNum;
            pvVar4 = (void *)this_01->_padding_;
            local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_278.Data.ArrayNum == 0) {
              local_278.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_278.Data.ArrayNum,0,(ForAnyElementType *)&local_278,
                         local_278.Data.ArrayNum,&local_278.Data.ArrayMax);
              memcpy(local_278.Data.AllocatorInstance.Data,pvVar4,lVar18 * 2);
            }
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.Data.AllocatorInstance.Data);
          }
        }
        uVar12 = this_01->PCGGridSize;
        pTVar16 = APCGPartitionActor::GetGridCoord(this_01,local_88);
        local_214[0] = false;
        local_20c = *(undefined8 *)&pTVar16->field0_0x0;
        pUVar17 = (UPCGComponent *)0x0;
        if (bVar8) {
          pUVar17 = param_1;
        }
        local_204 = (pTVar16->field0_0x0)._s_0.Z;
        local_210 = uVar12;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        local_268.ObjectIndex = 0;
        local_268.ObjectSerialNumber = 0;
        local_138 = this_00;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        FWeakObjectPtr::operator=(&local_268,(FObjectPtr)&local_138);
        local_200 = local_268.ObjectIndex;
        local_1fc = local_268.ObjectSerialNumber;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar17 != (UPCGComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar17);
        }
        local_1f8.ObjectIndex = 0;
        local_1f8.ObjectSerialNumber = 0;
        local_140 = pUVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar17 != (UPCGComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar17);
        }
        FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_140);
        local_214[0] = UPCGComponent::Use2DGrid(this_00);
        TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
        ::Emplace<FPCGRuntimeGenScheduler::FGridGenerationKey>
                  (&this->GeneratedComponentsToRemove,(FGridGenerationKey *)local_190,local_214);
      }
      UPCGComponent::CleanupLocalImmediate(param_1,false,false);
      if (bVar8) {
        return;
      }
    }
    this->bAnyRuntimeGenComponentsExistDirty = true;
  }
  return;
}

// ResetPartitionActorPoolToSize @ 149f5e470

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
FPCGRuntimeGenScheduler::ResetPartitionActorPoolToSize(FPCGRuntimeGenScheduler *this,uint param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->PartitionActorPool).AllocatorInstance.Data;
  iVar3 = (this->PartitionActorPool).ArrayNum;
  pFVar2 = pFVar4 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->PartitionActorPool).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<APCGPartitionActor>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar2) break;
    UWorld::DestroyActor(this->World,*(AActor **)pFVar4,false,true);
    pFVar4 = pFVar4 + 8;
  }
  piVar1 = &(this->PartitionActorPool).ArrayMax;
  (this->PartitionActorPool).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PartitionActorPool).AllocatorInstance,0,piVar1);
  }
  this->PartitionActorPoolSize = 0;
  AddPartitionActorPoolCount(this,param_1);
  return;
}

// ShouldTick @ 149f636c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGRuntimeGenScheduler::ShouldTick(FPCGRuntimeGenScheduler *this)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  longlong lVar6;
  FStaticBasicLogRecord *pFVar7;
  longlong lVar8;
  
  if (((this->World == (UWorld *)0x0) ||
      (this->ActorAndComponentMapping == (FPCGActorAndComponentMapping *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("World && ActorAndComponentMapping",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                         ,0x15d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  pTVar2 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnable.Ref;
  bVar3 = IsInParallelGameThread();
  lVar8 = 1;
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar6 = 0;
  }
  else {
    lVar6 = 1;
  }
  if (pTVar2->ShadowedValue[lVar6] == false) {
    return false;
  }
  bVar3 = PCGHelpers::IsRuntimeOrPIE();
  if ((bVar3) && (bVar3 = UWorld::IsGameWorld(this->World), !bVar3)) {
    return false;
  }
  if (this->bAnyRuntimeGenComponentsExistDirty != false) {
    bVar3 = this->bAnyRuntimeGenComponentsExist;
    bVar5 = FPCGActorAndComponentMapping::AnyRuntimeGenComponentsExist
                      (this->ActorAndComponentMapping);
    this->bAnyRuntimeGenComponentsExist = bVar5;
    this->bAnyRuntimeGenComponentsExistDirty = false;
    pTVar2 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnableDebugging.Ref;
    bVar5 = IsInParallelGameThread();
    if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
      lVar8 = 0;
    }
    if ((pTVar2->ShadowedValue[lVar8] != false) && (bVar3 != this->bAnyRuntimeGenComponentsExist)) {
      if (this->bAnyRuntimeGenComponentsExist == false) {
        if ((byte)LogPCG._0_1_ < 3) goto LAB_149f637ed;
        pFVar7 = &::LOG_Static;
      }
      else {
        if ((byte)LogPCG._0_1_ < 3) goto LAB_149f637ed;
        pFVar7 = &::LOG_Static;
      }
      UE::Logging::Private::BasicLog<3>(pFVar7,(FLogCategoryBase *)&LogPCG);
    }
  }
LAB_149f637ed:
  if ((this->bAnyRuntimeGenComponentsExist == false) &&
     (*(int *)&(this->GeneratedComponents).Elements.field_0x8 ==
      *(int *)&(this->GeneratedComponents).Elements.field_0x34)) {
    return *(int *)&(this->GeneratedComponentsToRemove).Elements.field_0x8 !=
           *(int *)&(this->GeneratedComponentsToRemove).Elements.field_0x34;
  }
  return true;
}

// Tick @ 149f63e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
FPCGRuntimeGenScheduler::Tick(FPCGRuntimeGenScheduler *this,APCGWorldActor *param_1,double param_2)

{
  APCGWorldActor *pAVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  void *pvVar4;
  code *pcVar5;
  TConsoleVariableData<bool> *pTVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator> *pTVar11;
  TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *pTVar12;
  FStaticBasicLogRecord *pFVar13;
  longlong lVar14;
  undefined1 *puVar15;
  void *_Src;
  FDetectionInputs *pFVar16;
  uint uVar17;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  FDetectionInputs *pFVar22;
  int iVar23;
  uint uVar24;
  undefined1 auStackY_398 [32];
  undefined1 local_338;
  undefined1 local_337;
  undefined1 local_336 [6];
  APCGWorldActor *local_330;
  undefined4 local_328;
  int local_324;
  int local_320;
  LARGE_INTEGER local_318;
  FValueComparisonClass<_public:_void___cdecl_FPCGRuntimeGenScheduler::Tick(APCGWorldActor_*,double)_::_43_::<lambda_1>_>
  local_310;
  LARGE_INTEGER local_308;
  TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator> *local_300;
  uint uStack_2f8;
  uint uStack_2f4;
  undefined1 *local_2f0;
  undefined4 uStack_2e8;
  uint uStack_2e4;
  uint local_2e0;
  undefined4 uStack_2dc;
  int iStack_2d8;
  undefined4 uStack_2d4;
  TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator> *local_2d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c8;
  undefined8 uStack_2a8;
  FString local_2a0 [3];
  undefined4 local_264;
  undefined1 local_258 [16];
  undefined1 local_248 [32];
  void *local_228;
  undefined4 local_220;
  uint local_21c;
  undefined4 local_218;
  undefined4 local_214;
  ForElementType<FSetElementId> local_208;
  int local_200;
  undefined1 local_1f8 [32];
  void *local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  ForElementType<FSetElementId> local_1b8;
  int local_1b0;
  undefined1 local_1a8 [32];
  undefined1 *local_188;
  int local_180;
  uint local_17c;
  undefined4 local_178;
  undefined4 local_174;
  ForElementType<FSetElementId> local_170;
  int local_160 [2];
  TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator> local_158;
  TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> local_108;
  TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> local_b8;
  ForAnyElementType local_68;
  ulonglong uVar18;
  
  local_68.Data = (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStackY_398);
  local_330 = param_1;
  if (((param_1 == (APCGWorldActor *)0x0) || (this->GenSourceManager == (FPCGGenSourceManager *)0x0)
      ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InPCGWorldActor && GenSourceManager",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                               ,0xf9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->World == (UWorld *)0x0) ||
      (this->ActorAndComponentMapping == (FPCGActorAndComponentMapping *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("World && ActorAndComponentMapping",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                         ,0x15d,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar6 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnable.Ref;
  bVar8 = IsInParallelGameThread();
  uVar18 = 0;
  iVar23 = 1;
  if (bVar8) {
LAB_149f63f14:
    uVar10 = uVar18;
  }
  else {
    bVar8 = IsInGameThread();
    uVar10 = 1;
    if (bVar8) goto LAB_149f63f14;
  }
  if (pTVar6->ShadowedValue[uVar10] == false) {
    return;
  }
  bVar8 = PCGHelpers::IsRuntimeOrPIE();
  if ((bVar8) && (bVar8 = UWorld::IsGameWorld(this->World), !bVar8)) {
    return;
  }
  if (this->bAnyRuntimeGenComponentsExistDirty != false) {
    bVar8 = this->bAnyRuntimeGenComponentsExist;
    bVar9 = FPCGActorAndComponentMapping::AnyRuntimeGenComponentsExist
                      (this->ActorAndComponentMapping);
    this->bAnyRuntimeGenComponentsExist = bVar9;
    this->bAnyRuntimeGenComponentsExistDirty = false;
    pTVar6 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnableDebugging.Ref;
    bVar9 = IsInParallelGameThread();
    if (bVar9) {
LAB_149f63f8f:
      uVar10 = uVar18;
    }
    else {
      bVar9 = IsInGameThread();
      uVar10 = 1;
      if (bVar9) goto LAB_149f63f8f;
    }
    if ((pTVar6->ShadowedValue[uVar10] != false) && (bVar8 != this->bAnyRuntimeGenComponentsExist))
    {
      if (this->bAnyRuntimeGenComponentsExist == false) {
        if (2 < (byte)LogPCG._0_1_) {
          pFVar13 = &::LOG_Static;
          goto LAB_149f63fca;
        }
      }
      else if (2 < (byte)LogPCG._0_1_) {
        pFVar13 = &::LOG_Static;
LAB_149f63fca:
        UE::Logging::Private::BasicLog<3>(pFVar13,(FLogCategoryBase *)&LogPCG);
      }
    }
  }
  if (((this->bAnyRuntimeGenComponentsExist == false) &&
      (*(int *)&(this->GeneratedComponents).Elements.field_0x8 ==
       *(int *)&(this->GeneratedComponents).Elements.field_0x34)) &&
     (*(int *)&(this->GeneratedComponentsToRemove).Elements.field_0x8 ==
      *(int *)&(this->GeneratedComponentsToRemove).Elements.field_0x34)) {
    return;
  }
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId258,"FPCGRuntimeGenScheduler::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
               ,0x102);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId258);
  }
  uVar17 = 0;
  PCGRuntimeGenSchedulerHelpers::Stats.VTPreloadCounter = 0;
  PCGRuntimeGenSchedulerHelpers::Stats.TickStartTime = 0.0;
  PCGRuntimeGenSchedulerHelpers::Stats.GenerateCallCounter = 0;
  PCGRuntimeGenSchedulerHelpers::Stats.CleanupCallCounter = 0;
  PCGRuntimeGenSchedulerHelpers::Stats.GridCellScanCounter = 0;
  PCGRuntimeGenSchedulerHelpers::Stats.NumGeneratingComponents = 0;
  PCGRuntimeGenSchedulerHelpers::Stats._20_4_ = local_2a0[1].Data.AllocatorInstance.Data._4_4_;
  QueryPerformanceCounter(&local_318);
  PCGRuntimeGenSchedulerHelpers::Stats.TickStartTime =
       (double)local_318.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  if (((this->bActorFlushRequested != false) && (this->Subsystem != (UPCGSubsystem *)0x0)) &&
     (pAVar1 = this->Subsystem->PCGWorldActor, pAVar1 != (APCGWorldActor *)0x0)) {
    CleanupLocalComponents(this,pAVar1);
    pTVar7 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationBasePoolSize.Ref;
    bVar9 = IsInParallelGameThread();
    if (bVar9) {
LAB_149f640e0:
      uVar10 = uVar18;
    }
    else {
      bVar9 = IsInGameThread();
      uVar10 = 4;
      if (bVar9) goto LAB_149f640e0;
    }
    ResetPartitionActorPoolToSize(this,*(uint *)((longlong)pTVar7->ShadowedValue + uVar10));
  }
  this->bActorFlushRequested = false;
  pTVar6 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnablePooling.Ref;
  bVar9 = IsInParallelGameThread();
  if (bVar9) {
LAB_149f64111:
    uVar10 = uVar18;
  }
  else {
    bVar9 = IsInGameThread();
    uVar10 = 1;
    if (bVar9) goto LAB_149f64111;
  }
  bVar9 = pTVar6->ShadowedValue[uVar10];
  if ((this->bPoolingWasEnabledLastFrame != false) && (bVar9 == false)) {
    CleanupLocalComponents(this,param_1);
    ResetPartitionActorPoolToSize(this,0);
  }
  this->bPoolingWasEnabledLastFrame = bVar9;
  pTVar6 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnablePooling.Ref;
  bVar9 = IsInParallelGameThread();
  if (bVar9) {
LAB_149f6415e:
    uVar10 = uVar18;
  }
  else {
    bVar9 = IsInGameThread();
    uVar10 = 1;
    if (bVar9) goto LAB_149f6415e;
  }
  pTVar7 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationBasePoolSize.Ref;
  if (pTVar6->ShadowedValue[uVar10] != false) {
    bVar9 = IsInParallelGameThread();
    if (bVar9) {
LAB_149f64185:
      uVar10 = uVar18;
    }
    else {
      bVar9 = IsInGameThread();
      uVar10 = 4;
      if (bVar9) goto LAB_149f64185;
    }
    uVar21 = *(uint *)((longlong)pTVar7->ShadowedValue + uVar10);
    if ((int)uVar21 < 1) {
      uVar21 = 1;
    }
    if (this->BasePoolSizeLastFrame != uVar21) {
      this->BasePoolSizeLastFrame = uVar21;
      CleanupLocalComponents(this,param_1);
      ResetPartitionActorPoolToSize(this,uVar21);
    }
  }
  pTVar11 = &this->GenSources;
  uVar21 = *(int *)&(this->GenSources).Elements.field_0x8 -
           *(int *)&(this->GenSources).Elements.field_0x34;
  if (3 < uVar21) {
    uVar10 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_328 = (undefined4)lVar14;
    iVar23 = 1 << ((byte)lVar14 & 0x1f);
  }
  if ((((int)uVar21 < 1) || (iVar23 <= (this->GenSources).HashSize)) &&
     ((this->GenSources).HashSize <= iVar23)) {
    TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator>::
    UnhashElements(pTVar11);
    TSparseArray<TSparseSetElement<IPCGGenSourceBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&pTVar11->Elements,uVar21);
  }
  else {
    TSparseArray<TSparseSetElement<IPCGGenSourceBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&pTVar11->Elements,uVar21);
    (this->GenSources).HashSize = iVar23;
    TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator>::Rehash
              (pTVar11);
  }
  if (this->bAnyRuntimeGenComponentsExist != false) {
    this->GenSourceManager->bDirty = true;
    pTVar11 = FPCGGenSourceManager::GetAllGenSources(this->GenSourceManager,&local_158,param_1);
    if (&this->GenSources != pTVar11) {
      TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator>::
      Move<TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator>_>
                (&this->GenSources,pTVar11);
    }
    local_158.HashSize = 0;
    if (local_158.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_158.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<IPCGGenSourceBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<IPCGGenSourceBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_158.Elements);
    local_2f0 = &(this->GenSources).Elements.field_0x10;
    uVar21 = *(uint *)&(this->GenSources).Elements.field_0x28;
    local_300 = &this->GenSources;
    uStack_2f4 = 1;
    uStack_2e4 = uVar17;
    local_2e0 = uVar17;
    if (uVar21 != 0) {
      puVar20 = *(uint **)&(this->GenSources).Elements.field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)local_2f0;
      }
      uVar24 = *puVar20;
      uVar10 = uVar18;
      local_2e0 = 0;
      uVar17 = 0;
      while (uVar24 == 0) {
        iVar23 = (int)uVar18;
        local_2e0 = (int)uVar10 + 0x20;
        uVar10 = (ulonglong)local_2e0;
        uVar17 = iVar23 + 1;
        uVar18 = (ulonglong)uVar17;
        uStack_2e4 = uVar21;
        if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
        goto LAB_149f64321;
        uVar24 = puVar20[(longlong)iVar23 + 1];
      }
      uStack_2f4 = -uVar24 & uVar24;
      uVar18 = (ulonglong)uStack_2f4 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_324 = (int)lVar14;
      uStack_2e4 = local_324 + -1 + local_2e0;
      if ((int)uVar21 < (int)uStack_2e4) {
        uStack_2e4 = uVar21;
      }
    }
LAB_149f64321:
    puVar15 = &(this->GenSources).Elements.field_0x10;
    uStack_2dc = local_264;
    iStack_2d8 = *(int *)&(this->GenSources).Elements.field_0x8 -
                 *(int *)&(this->GenSources).Elements.field_0x34;
    uVar21 = *(uint *)&(this->GenSources).Elements.field_0x28;
    uStack_2e8 = 0xffffffff;
    TStack_2c8.CurrentBitIndex = uStack_2e4;
    TStack_2c8.UnvisitedBitMask = 0xffffffff;
    TStack_2c8._padding_ = CONCAT44(uStack_2f4,uVar17);
    uVar24 = uVar21 & 0xffffffe0;
    iVar23 = (int)uVar21 >> 5;
    TStack_2c8._28_4_ = local_264;
    TStack_2c8.BaseBitIndex = local_2e0;
    uStack_2a8 = CONCAT44(uStack_2d4,iStack_2d8);
    uStack_2f8 = uVar17;
    local_2d0 = local_300;
    TStack_2c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2f0;
    if (((int)uVar21 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar17 = *(uint *)&(this->GenSources).Elements.field_0x28;
    if (uVar21 != uVar17) {
      puVar2 = *(undefined1 **)&(this->GenSources).Elements.field_0x20;
      puVar19 = puVar15;
      if (puVar2 != (undefined1 *)0x0) {
        puVar19 = puVar2;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar23 * 4);
      while (uVar21 == 0) {
        lVar14 = (longlong)iVar23;
        uVar24 = uVar24 + 0x20;
        iVar23 = iVar23 + 1;
        uVar21 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
        goto LAB_149f64433;
        uVar21 = *(uint *)(puVar19 + lVar14 * 4 + 4);
      }
      uVar18 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_320 = (int)lVar14;
      uVar21 = local_320 + -1 + uVar24;
      if ((int)uVar17 < (int)uVar21) {
        uVar21 = uVar17;
      }
    }
LAB_149f64433:
    while( true ) {
      pTVar11 = local_2d0;
      if (*(int *)&(local_2d0->Elements).field_0x8 - *(int *)&(local_2d0->Elements).field_0x34 !=
          (int)uStack_2a8) {
        local_338 = 0;
        `TSparseArray<TSparseSetElement<IPCGGenSourceBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_338);
      }
      if (((TStack_2c8.CurrentBitIndex == uVar21) &&
          (TStack_2c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar15)) &&
         (param_1 = local_330, pTVar11 == &this->GenSources)) break;
      plVar3 = *(longlong **)
                (*(longlong *)&pTVar11->Elements + (longlong)TStack_2c8.CurrentBitIndex * 0x10);
      if (plVar3 == (longlong *)0x0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4830013997950435603>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                           ,0x113,"GenSource");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x10))();
      }
      TStack_2c8.UnvisitedBitMask = TStack_2c8.UnvisitedBitMask & ~TStack_2c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c8);
    }
  }
  pTVar6 = PCGRuntimeGenSchedulerHelpers::CVarEnableVirtualTexturePriming.Ref;
  if (*(int *)&(this->GenSources).Elements.field_0x8 !=
      *(int *)&(this->GenSources).Elements.field_0x34) {
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
    if (pTVar6->ShadowedValue[0] != false) {
      TickRequestVirtualTexturePriming(this,&this->GenSources);
    }
  }
  pTVar6 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnablePooling.Ref;
  if (((*(int *)&(this->GenSources).Elements.field_0x8 ==
        *(int *)&(this->GenSources).Elements.field_0x34) &&
      (*(int *)&(this->GeneratedComponents).Elements.field_0x8 ==
       *(int *)&(this->GeneratedComponents).Elements.field_0x34)) ||
     (this->PartitionActorPoolSize != 0)) goto LAB_149f645ab;
  bVar9 = IsInParallelGameThread();
  if (bVar9) {
LAB_149f64576:
    lVar14 = 0;
  }
  else {
    bVar9 = IsInGameThread();
    lVar14 = 1;
    if (bVar9) goto LAB_149f64576;
  }
  pTVar7 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationBasePoolSize.Ref;
  if (pTVar6->ShadowedValue[lVar14] == false) goto LAB_149f645ab;
  bVar9 = IsInParallelGameThread();
  if (bVar9) {
LAB_149f6459d:
    lVar14 = 0;
  }
  else {
    bVar9 = IsInGameThread();
    lVar14 = 4;
    if (bVar9) goto LAB_149f6459d;
  }
  AddPartitionActorPoolCount(this,*(int *)((longlong)pTVar7->ShadowedValue + lVar14));
LAB_149f645ab:
  if (this->FramesUntilGeneration < 1) {
    CleanupDelayedRefreshComponents(this);
    if (*(int *)&(this->GenSources).Elements.field_0x8 !=
        *(int *)&(this->GenSources).Elements.field_0x34) {
      local_258._0_8_ = &this->GenSources;
      local_248._0_8_ = (FScriptContainerElement *)0x0;
      local_248._8_8_ = 0;
      local_228 = (void *)0x0;
      local_220 = 0;
      local_21c = 0x80;
      local_218 = 0xffffffff;
      local_214 = 0;
      local_208 = (ForElementType<FSetElementId>)0x0;
      local_200 = 0;
      local_1f8._0_8_ = (FScriptContainerElement *)0x0;
      local_1f8._8_8_ = 0;
      local_1d8 = (void *)0x0;
      local_1d0 = 0;
      local_1cc = 0x80;
      local_1c8 = 0xffffffff;
      local_1c4 = 0;
      local_1b8 = (ForElementType<FSetElementId>)0x0;
      local_1b0 = 0;
      local_1a8._0_8_ = (FScriptContainerElement *)0x0;
      local_1a8._8_8_ = 0;
      local_188 = (undefined1 *)0x0;
      local_180 = 0;
      local_17c = 0x80;
      local_178 = 0xffffffff;
      local_174 = 0;
      local_170.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_160[0] = 0;
      local_258._8_8_ = param_1;
      pTVar12 = FPCGActorAndComponentMapping::GetAllRegisteredPartitionedComponents
                          (this->ActorAndComponentMapping,&local_108);
      TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator>::operator=
                ((TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *)
                 local_248,pTVar12);
      local_108.HashSize = 0;
      if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_108.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_108.Elements);
      pTVar12 = FPCGActorAndComponentMapping::GetAllRegisteredNonPartitionedComponents
                          (this->ActorAndComponentMapping,&local_b8);
      TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator>::operator=
                ((TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *)
                 local_1f8,pTVar12);
      local_b8.HashSize = 0;
      if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_b8.Elements);
      if ((FPCGRuntimeGenScheduler *)local_1a8 != this) {
        UE::Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  (&local_170,local_160,&(this->GeneratedComponents).Hash,
                   (this->GeneratedComponents).HashSize);
        iVar23 = *(int *)&(this->GeneratedComponents).Elements.field_0x8;
        TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_1a8,iVar23);
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x2c,4,iVar23,(ForAnyElementType *)local_1a8,(int *)(local_1a8 + 8),
                   (int *)(local_1a8 + 0xc));
        local_178 = *(undefined4 *)&(this->GeneratedComponents).Elements.field_0x30;
        _Src = &(this->GeneratedComponents).Elements.field_0x10;
        local_174 = *(undefined4 *)&(this->GeneratedComponents).Elements.field_0x34;
        if (local_1a8 + 0x10 != _Src) {
          uVar17 = *(int *)&(this->GeneratedComponents).Elements.field_0x28 + 0x1fU & 0xffffffe0;
          local_180 = 0;
          if (((int)local_17c < (int)uVar17) || (0x80 < (int)local_17c)) {
            local_17c = 0x80;
            if (0x80 < (int)uVar17) {
              local_17c = uVar17;
            }
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10),0);
          }
          local_180 = *(int *)&(this->GeneratedComponents).Elements.field_0x28;
          if (local_180 != 0) {
            pvVar4 = *(void **)&(this->GeneratedComponents).Elements.field_0x20;
            if (pvVar4 != (void *)0x0) {
              _Src = pvVar4;
            }
            puVar15 = local_1a8 + 0x10;
            if (local_188 != (undefined1 *)0x0) {
              puVar15 = local_188;
            }
            memcpy(puVar15,_Src,(ulonglong)(local_180 + 0x1fU >> 5) << 2);
          }
        }
        if (iVar23 != 0) {
          memcpy((void *)local_1a8._0_8_,*(void **)&(this->GeneratedComponents).Elements,
                 (longlong)iVar23 * 0x2c);
        }
      }
      TMapBase<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>_>
      ::GetKeys<TSizedDefaultAllocator<32>_>
                ((TMapBase<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>_>
                  *)&this->ChangeDetector,&(this->ChangeDetector).InputsPendingDeletion);
      TickQueueComponentsForGeneration
                (this,(FTickQueueComponentsForGenerationInputs *)local_258,
                 &this->ComponentsToGenerate);
      iVar23 = (this->ChangeDetector).InputsPendingDeletion.ArrayNum;
      pFVar16 = (FDetectionInputs *)
                (this->ChangeDetector).InputsPendingDeletion.AllocatorInstance.Data;
      pFVar22 = pFVar16 + iVar23;
      while( true ) {
        if ((this->ChangeDetector).InputsPendingDeletion.ArrayNum != iVar23) {
          local_337 = 0;
          `TCheckedPointerIterator<PCGRuntimeGenChangeDetection::FDetectionInputs,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_337);
        }
        if (pFVar16 == pFVar22) break;
        TSet<TTuple<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState>,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>,FDefaultSetAllocator>
        ::Remove((TSet<TTuple<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState>,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>,FDefaultSetAllocator>
                  *)&this->ChangeDetector,pFVar16);
        pFVar16 = pFVar16 + 1;
      }
      iVar23 = (this->ChangeDetector).InputsPendingDeletion.ArrayMax;
      (this->ChangeDetector).InputsPendingDeletion.ArrayNum = 0;
      if (iVar23 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,8,0,&(this->ChangeDetector).InputsPendingDeletion.AllocatorInstance,0,
                   &(this->ChangeDetector).InputsPendingDeletion.ArrayMax);
      }
      local_160[0] = 0;
      if (local_170.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_170.SecondaryData);
      }
      iVar23 = SUB84(local_1a8._8_8_,4);
      local_1a8._8_8_ = local_1a8._8_8_ & 0xffffffff00000000;
      if (iVar23 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x2c,4,0,(ForAnyElementType *)local_1a8,0,(int *)(local_1a8 + 0xc));
      }
      local_178 = 0xffffffff;
      local_174 = 0;
      local_180 = 0;
      if (0x80 < local_17c) {
        local_17c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10),0);
      }
      if (local_188 != (undefined1 *)0x0) {
        FMemory::Free(local_188);
      }
      if ((FScriptContainerElement *)local_1a8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1a8._0_8_);
      }
      local_1b0 = 0;
      if (local_1b8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1b8);
      }
      iVar23 = SUB84(local_1f8._8_8_,4);
      local_1f8._8_8_ = local_1f8._8_8_ & 0xffffffff00000000;
      if (iVar23 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_1f8,0,(int *)(local_1f8 + 0xc));
      }
      local_1c8 = 0xffffffff;
      local_1c4 = 0;
      local_1d0 = 0;
      if (0x80 < local_1cc) {
        local_1cc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_1f8 + 0x10),0);
      }
      if (local_1d8 != (void *)0x0) {
        FMemory::Free(local_1d8);
      }
      if ((FScriptContainerElement *)local_1f8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1f8._0_8_);
      }
      local_200 = 0;
      if (local_208 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_208);
      }
      iVar23 = SUB84(local_248._8_8_,4);
      local_248._8_8_ = local_248._8_8_ & 0xffffffff00000000;
      if (iVar23 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_248,0,(int *)(local_248 + 0xc));
      }
      local_218 = 0xffffffff;
      local_214 = 0;
      local_220 = 0;
      if (0x80 < local_21c) {
        local_21c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_248 + 0x10),0);
      }
      if (local_228 != (void *)0x0) {
        FMemory::Free(local_228);
      }
      if ((FScriptContainerElement *)local_248._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_248._0_8_);
      }
    }
    if (*(int *)&(this->GeneratedComponents).Elements.field_0x8 !=
        *(int *)&(this->GeneratedComponents).Elements.field_0x34) {
      TickCleanup(this,&this->GenSources,local_330,param_2);
    }
    if (*(int *)&(this->ComponentsToGenerate).field_0x8 !=
        *(int *)&(this->ComponentsToGenerate).field_0x34) {
      local_310.Predicate.Predicate =
           (TDereferenceWrapper<double,_public:_void___cdecl_FPCGRuntimeGenScheduler::Tick(APCGWorldActor_*,double)_::_43_::<lambda_1>_>
            )local_336;
      TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>
      ::
      Sort<TSortableMapBase<FPCGRuntimeGenScheduler::FGridGenerationKey,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>_>::FValueComparisonClass<_FPCGRuntimeGenScheduler::Tick_::__l43::<lambda_1>_>_>
                ((TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>
                  *)&this->ComponentsToGenerate,&local_310);
      TickScheduleGeneration(this,&this->ComponentsToGenerate);
    }
    pTVar6 = PCGRuntimeGenSchedulerHelpers::CVarEnableDebugOverlay.Ref;
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
    if (pTVar6->ShadowedValue[0] != false) {
      QueryPerformanceCounter(&local_308);
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
      ::FString::PrintfImpl
                (local_2a0,
                 L"PCG Runtime Generation\n    Tick time: %.3fms\n        Generate Calls: %d\n        Cleanup Calls: %d\n        Grid Cell Scans: %d\n    Num Generating Components: %d / %d\n    PA Pool: %d / %d available\n    VT Preloads: %d\n"
                );
      UEngine::AddOnScreenDebugMessage
                (GEngine,-1,0.0,FColor::Yellow,local_2a0,true,
                 &UE::Math::TVector2<double>::UnitVector);
      if (local_2a0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0[0].Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    this->FramesUntilGeneration = this->FramesUntilGeneration + -1;
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// TickCVars @ 149f65440

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
FPCGRuntimeGenScheduler::TickCVars(FPCGRuntimeGenScheduler *this,APCGWorldActor *param_1)

{
  APCGWorldActor *pAVar1;
  TConsoleVariableData<bool> *pTVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar6 = 4;
  if (((this->bActorFlushRequested != false) && (this->Subsystem != (UPCGSubsystem *)0x0)) &&
     (pAVar1 = this->Subsystem->PCGWorldActor, pAVar1 != (APCGWorldActor *)0x0)) {
    CleanupLocalComponents(this,pAVar1);
    pTVar3 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationBasePoolSize.Ref;
    bVar4 = IsInParallelGameThread();
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar5 = 0;
    }
    else {
      lVar5 = 4;
    }
    ResetPartitionActorPoolToSize(this,*(uint *)((longlong)pTVar3->ShadowedValue + lVar5));
  }
  this->bActorFlushRequested = false;
  pTVar2 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnablePooling.Ref;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 1;
  }
  bVar4 = pTVar2->ShadowedValue[lVar5];
  if ((this->bPoolingWasEnabledLastFrame != false) && (bVar4 == false)) {
    CleanupLocalComponents(this,param_1);
    ResetPartitionActorPoolToSize(this,0);
  }
  this->bPoolingWasEnabledLastFrame = bVar4;
  pTVar2 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnablePooling.Ref;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 1;
  }
  pTVar3 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationBasePoolSize.Ref;
  if (pTVar2->ShadowedValue[lVar5] != false) {
    bVar4 = IsInParallelGameThread();
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar6 = 0;
    }
    uVar7 = *(uint *)((longlong)pTVar3->ShadowedValue + lVar6);
    if ((int)uVar7 < 1) {
      uVar7 = 1;
    }
    if (this->BasePoolSizeLastFrame != uVar7) {
      this->BasePoolSizeLastFrame = uVar7;
      CleanupLocalComponents(this,param_1);
      ResetPartitionActorPoolToSize(this,uVar7);
    }
    return;
  }
  return;
}

// TickCleanup @ 149f655a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FPCGRuntimeGenScheduler::TickCleanup
          (FPCGRuntimeGenScheduler *this,
          TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator>
          *param_1,APCGWorldActor *param_2,double param_3)

{
  void *_Dst;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> FVar6;
  ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_> FVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined1 auStackY_3388 [32];
  <lambda_1> local_3348;
  int local_3344;
  int local_3340;
  int local_333c;
  TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator> *local_3338;
  LARGE_INTEGER local_3330;
  TArray<FPCGRuntimeGenScheduler::FGridGenerationKey,TSizedDefaultAllocator<32>_> local_3328;
  TArrayView<std::nullptr_t,int> local_3318;
  code *local_3308;
  TArray<FPCGRuntimeGenScheduler::FGridGenerationKey,TSizedDefaultAllocator<32>_> **local_3300;
  TArray<FPCGRuntimeGenScheduler::FGridGenerationKey,TSizedDefaultAllocator<32>_> *local_32f8;
  ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_> *local_32f0;
  ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> *local_32e8;
  int *local_32e0;
  int *local_32d8;
  FPCGActorAndComponentMapping *local_32d0;
  TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator> **local_32c8
  ;
  ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> local_32b8;
  int local_3070 [2];
  ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_> local_3068;
  int local_60 [2];
  ulonglong local_58;
  undefined8 uStack_30;
  
  uStack_30 = 0x149f655be;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3388;
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId840,"FPCGRuntimeGenScheduler::TickCleanup",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
               ,0x348);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId840);
  }
  if (((this->ActorAndComponentMapping == (FPCGActorAndComponentMapping *)0x0) ||
      (param_2 == (APCGWorldActor *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActorAndComponentMapping && InPCGWorldActor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                         ,0x34a,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_3338 = param_1;
  TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
  ::Array(&this->GeneratedComponents,&local_3328);
  uVar8 = 0;
  local_3068.SecondaryData =
       (ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>)0x0;
  local_60[0] = 0;
  local_60[1] = 0x100;
  local_32b8.SecondaryData = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0;
  local_3070[0] = 0;
  local_3070[1] = 0x10;
  if (local_3328.ArrayNum < 1) {
    if (local_3328.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_3328.ArrayNum);
    }
  }
  else {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>_>
              (0x30,8,local_3328.ArrayNum,&local_3068,local_60,local_60 + 1);
  }
  if (local_3070[0] < local_3328.ArrayNum) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>_>
              (0x24,4,local_3328.ArrayNum - local_3070[0],&local_32b8,local_3070,local_3070 + 1);
  }
  else {
    if (local_3328.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_3328.ArrayNum);
    }
    if (local_3328.ArrayNum < local_3070[0]) {
      uVar5 = local_3070[0] - local_3328.ArrayNum;
      if (((int)(local_3328.ArrayNum | uVar5) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (uVar5 != 0) {
        FVar6 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&local_32b8;
        if (local_32b8.SecondaryData !=
            (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
          FVar6 = local_32b8.SecondaryData;
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)local_3328.ArrayNum * 0x24);
        iVar4 = (local_3070[0] - uVar5) - local_3328.ArrayNum;
        if (iVar4 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar5 * 0x24),(longlong)iVar4 * 0x24
                 );
        }
        local_3070[0] = local_3070[0] - uVar5;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>_>
                  (0x24,4,&local_32b8,local_3070[0],local_3070 + 1);
      }
    }
  }
  local_32f8 = &local_3328;
  local_32f0 = &local_3068;
  local_32e8 = &local_32b8;
  local_3340 = 0;
  local_32e0 = &local_3340;
  local_3344 = 0;
  local_32d8 = &local_3344;
  local_3318.DataPtr = (void **)0x0;
  local_32d0 = this->ActorAndComponentMapping;
  local_32c8 = &local_3338;
  local_3308 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGRuntimeGenScheduler::TickCleanup'::__l2::<lambda_2>,void,int>
               ::Call;
  local_3300 = &local_32f8;
  local_3318.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_3328.ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_3308,local_3348,None,&local_3318);
  iVar4 = local_3344;
  local_333c = local_3340;
  uVar11 = uVar8;
  if (0 < local_3344) {
    do {
      uVar10 = (uint)uVar11;
      uVar5 = 0;
      if ((int)uVar10 < local_3070[0]) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar6 = (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)&local_32b8;
      if (local_32b8.SecondaryData !=
          (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0) {
        FVar6 = local_32b8.SecondaryData;
      }
      if (*(int *)&(this->GeneratedComponents).Elements.field_0x8 !=
          *(int *)&(this->GeneratedComponents).Elements.field_0x34) {
        uVar5 = ::GetTypeHash((FGridGenerationKey *)((longlong)FVar6 + uVar8));
        TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
        ::RemoveImpl<FPCGRuntimeGenScheduler::FGridGenerationKey>
                  (&this->GeneratedComponents,uVar5,(FGridGenerationKey *)((longlong)FVar6 + uVar8))
        ;
      }
      uVar8 = uVar8 + 0x24;
      uVar11 = (ulonglong)(uVar10 + 1);
    } while ((int)(uVar10 + 1) < iVar4);
  }
  dVar2 = __real_4170000000000000;
  uVar5 = 0;
  lVar13 = (longlong)local_333c;
  if (0 < local_333c) {
    lVar9 = 0;
    uStack_30 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
    lVar12 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar5 < local_60[0]) {
        uVar10 = ~uVar5 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar7 = (ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>)
              &local_3068;
      if (local_3068.SecondaryData !=
          (ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>)0x0)
      {
        FVar7 = local_3068.SecondaryData;
      }
      CleanupComponent(this,(FGridGenerationKey *)((longlong)FVar7 + lVar12),
                       *(UPCGComponent **)
                        &((FGridGenerationKey *)((longlong)FVar7 + lVar12))[1].GridSize);
      QueryPerformanceCounter(&local_3330);
      if (param_3 <= (double)local_3330.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar2) {
        if (5 < (byte)LogPCG._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        }
        break;
      }
      uVar5 = uVar5 + 1;
      lVar9 = lVar9 + 1;
      lVar12 = lVar12 + 0x30;
    } while (lVar9 < lVar13);
  }
  if (local_32b8.SecondaryData != (ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>)0x0)
  {
    FMemory::Free((void *)local_32b8.SecondaryData);
  }
  if (local_3068.SecondaryData !=
      (ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>)0x0) {
    FMemory::Free((void *)local_3068.SecondaryData);
  }
  if (local_3328.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3328.AllocatorInstance.Data);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// TickQueueComponentsForGeneration @ 149f65b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPCGRuntimeGenScheduler::TickQueueComponentsForGeneration
          (FPCGRuntimeGenScheduler *this,FTickQueueComponentsForGenerationInputs *param_1,
          TMap<FPCGRuntimeGenScheduler::FGridGenerationKey,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>_>
          *param_2)

{
  undefined1 *puVar1;
  float fVar2;
  APCGWorldActor *pAVar3;
  TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  TConsoleVariableData<bool> *pTVar13;
  TConsoleVariableData<float> *pTVar14;
  FPCGRuntimeGenScheduler *pFVar15;
  TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>_> *pTVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *pTVar22;
  int iVar23;
  bool bVar24;
  undefined1 uVar25;
  bool bVar26;
  char cVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  EPCGHiGenGrid EVar31;
  UWorld *pUVar32;
  UClass *pUVar33;
  UWorldPartitionSubsystem *pUVar34;
  FWorldPartitionStreamingQuerySource *pFVar35;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar36;
  UPCGGraph *pUVar37;
  FPCGRuntimeGenerationRadii *pFVar38;
  char *pcVar39;
  double *pdVar40;
  byte bVar41;
  ForElementType<unsigned_int> FVar42;
  double *pdVar43;
  ulonglong uVar44;
  TVector<double>_u_0 *pTVar45;
  ForElementType<FSetElementId> FVar46;
  ForElementType<unsigned_int> FVar47;
  FTickQueueComponentsForGenerationInputs *pFVar48;
  char cVar49;
  IPCGGenSourceBase *pIVar50;
  ulonglong uVar51;
  uint uVar52;
  int iVar53;
  longlong lVar54;
  UPCGSchedulingPolicyBase *pUVar55;
  UPCGComponent *pUVar56;
  TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *pTVar57;
  uint uVar58;
  uint uVar59;
  int iVar60;
  UPCGComponent *pUVar61;
  undefined4 uVar62;
  undefined4 uVar64;
  double dVar63;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  float fVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  float fVar74;
  undefined1 auStackY_a28 [32];
  bool local_9d8;
  char local_9d7;
  char local_9d6;
  char local_9d5;
  char local_9d4;
  char local_9d3;
  char local_9d2;
  int local_9d0;
  uint local_9cc;
  undefined1 local_9c8;
  undefined1 local_9c7;
  undefined1 local_9c6;
  char local_9c5;
  undefined1 local_9c4;
  bool local_9c3;
  undefined1 local_9c2 [2];
  int local_9c0;
  uint local_9bc;
  FTickQueueComponentsForGenerationInputs *local_9b8;
  UPCGComponent *local_9b0;
  TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator> *local_9a8;
  longlong lStack_9a0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_998;
  longlong lStack_990;
  longlong lStack_988;
  int local_980;
  undefined4 uStack_97c;
  TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>_> local_978;
  FGridGenerationKey local_968;
  UPCGSchedulingPolicyBase *local_940;
  FWeakObjectPtr local_938;
  FWeakObjectPtr local_930;
  double local_928;
  double local_920;
  FPCGRuntimeGenScheduler *local_918;
  TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>
  *local_910;
  ForElementType<unsigned_int> local_908;
  TIntVector3<int>_u_0 local_900;
  FGridGenerationKey local_8f0;
  int local_8cc;
  TVector<double>_u_0 local_8c8;
  int local_8b0;
  IPCGGenSourceBase *local_8a8;
  UWorldPartitionSubsystem *local_8a0;
  TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>_> *local_898;
  TSet<TTuple<TTuple<UE::Math::TVector<double>,float>,bool>,TDefaultMapHashableKeyFuncs<TTuple<UE::Math::TVector<double>,float>,bool,0>,FDefaultSetAllocator>
  *local_890;
  TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *local_888;
  TVector<double>_u_0 local_880;
  TVector<double>_u_0 local_868;
  double local_850;
  TIntVector3<int>_u_0 local_848;
  TIntVector3<int>_u_0 local_83c;
  FGridGenerationKey local_830;
  FString local_808;
  FString local_7f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7a8;
  double local_788;
  double dStack_780;
  double local_778;
  float local_770;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_768;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_748;
  undefined8 local_728;
  UPCGComponent *local_720;
  int local_718;
  int iStack_714;
  TObjectPtr<UClass>_u_0 local_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined4 local_6f0;
  undefined8 local_6ec;
  undefined8 uStack_6e4;
  undefined4 local_6dc;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined4 local_6c8;
  ulonglong local_6c4;
  undefined8 uStack_6bc;
  undefined4 local_6b4;
  undefined1 local_6b0 [8];
  UPCGComponent *local_6a8;
  undefined8 local_6a0;
  FName local_698;
  undefined8 local_690;
  FName local_688;
  FName local_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined4 local_668;
  undefined1 local_660 [12];
  uint uStack_654;
  TBitArray<FDefaultBitArrayAllocator> *local_650;
  undefined8 uStack_648;
  longlong local_640;
  undefined8 uStack_638;
  TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator> *local_630;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_628;
  undefined8 uStack_608;
  TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *local_600;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5f8;
  undefined8 uStack_5d8;
  TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *local_5d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5c8;
  undefined8 uStack_5a8;
  FGridGenerationKey *local_5a0;
  double *local_598;
  FString local_590;
  double *local_580;
  char *local_578;
  undefined1 local_570 [40];
  int local_548;
  undefined4 uStack_544;
  TVector<double>_u_0 local_540;
  TVector<double>_u_0 local_528;
  TVector<double>_u_0 local_510;
  FGridGenerationKey local_4f8;
  TVector<double>_u_0 local_4d0;
  double local_4b8;
  double local_4b0;
  double local_4a8;
  char local_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  char local_480;
  TVector<double>_u_0 local_478;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  double local_450;
  char local_448;
  TVector<double>_u_0 local_438;
  TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *local_418;
  longlong lStack_410;
  TBitArray<FDefaultBitArrayAllocator> *local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator> *local_3e8;
  longlong lStack_3e0;
  TBitArray<FDefaultBitArrayAllocator> *local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  TRangedForConstIterator local_3b8;
  undefined1 local_388 [16];
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  float local_318;
  undefined1 local_314;
  uint local_310;
  TVector<double> local_308;
  FGridGenerationKey local_2f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2a8;
  TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> local_288;
  TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> local_238;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  uchar local_1b8;
  uchar uStack_1b7;
  uchar uStack_1b6;
  uchar uStack_1b5;
  uchar uStack_1b4;
  uchar uStack_1b3;
  uchar uStack_1b2;
  uchar uStack_1b1;
  TVector<double>_u_0 local_1b0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> local_138;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_a28;
  local_9b8 = param_1;
  local_918 = this;
  if (CpuChannel->Enabled < 0) {
    local_9d6 = '\0';
  }
  else {
    local_9d6 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId412,
               "FPCGRuntimeGenScheduler::TickQueueComponentsForGeneration",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
               ,0x19c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId412);
  }
  if (((param_1->PCGWorldActor == (APCGWorldActor *)0x0) ||
      (param_1->GenSources ==
       (TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator> *)0x0)
      ) && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Inputs.PCGWorldActor && Inputs.GenSources",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                                ,0x19e,L""), bVar24)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar34 = (UWorldPartitionSubsystem *)0x0;
  local_978.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_978.ArrayNum = 0;
  local_978.ArrayMax = 0;
  local_910 = (TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>
               *)param_2;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x108,8,1,&local_978.AllocatorInstance,0,&local_978.ArrayMax);
  pTVar13 = PCGRuntimeGenSchedulerHelpers::CVarEnableWorldStreamingQueries.Ref;
  bVar24 = IsInParallelGameThread();
  if (((!bVar24) && (bVar24 = IsInGameThread(), !bVar24)) &&
     (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar24)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  cVar27 = pTVar13->ShadowedValue[0];
  if ((bool)cVar27 != false) {
    local_9d7 = cVar27;
    pUVar32 = AActor::GetWorld((AActor *)param_1->PCGWorldActor);
    if (pUVar32 != (UWorld *)0x0) {
      local_708.DebugPtr = Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_708.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_708.DebugPtr);
      }
      pUVar33 = TSubclassOf<UWorldPartitionSubsystem>::operator*
                          ((TSubclassOf<UWorldPartitionSubsystem> *)&local_708.ObjectPtr);
      pUVar34 = (UWorldPartitionSubsystem *)
                FSubsystemCollectionBase::GetSubsystemInternal
                          ((FSubsystemCollectionBase *)&pUVar32->SubsystemCollection,pUVar33);
    }
    if (pUVar34 != (UWorldPartitionSubsystem *)0x0) {
      iVar28 = local_978.ArrayNum;
      if (local_978.ArrayNum == local_978.ArrayMax) {
        iVar28 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x108,8,&local_978.AllocatorInstance,&local_978.ArrayMax);
      }
      local_978.ArrayNum = iVar28 + 1;
      pFVar35 = FWorldPartitionStreamingQuerySource::FWorldPartitionStreamingQuerySource
                          ((FWorldPartitionStreamingQuerySource *)
                           (local_978.AllocatorInstance.Data + (longlong)iVar28 * 0x108));
      pFVar35->bDataLayersOnly = false;
      pFVar35->bSpatialQuery = true;
      pFVar35->bUseGridLoadingRange = false;
      goto LAB_149f65d40;
    }
  }
  cVar27 = '\0';
  local_9d7 = '\0';
LAB_149f65d40:
  pTVar13 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnableChangeDetection.Ref;
  local_898 = &local_978;
  local_890 = (TSet<TTuple<TTuple<UE::Math::TVector<double>,float>,bool>,TDefaultMapHashableKeyFuncs<TTuple<UE::Math::TVector<double>,float>,bool,0>,FDefaultSetAllocator>
               *)&this->CachedStreamingQueryResults;
  local_8a0 = pUVar34;
  bVar24 = IsInParallelGameThread();
  if (((!bVar24) && (bVar24 = IsInGameThread(), !bVar24)) &&
     (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar24)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_9d4 = pTVar13->ShadowedValue[0];
  local_9c5 = TAutoConsoleVariable<bool>::GetValueOnGameThread
                        (&PCGSystemSwitches::CVarPCGDebugDrawGeneratedCells);
  puVar1 = &(param_1->AllPartitionedComponents).Elements.field_0x10;
  pTVar57 = &param_1->AllPartitionedComponents;
  local_7c8._padding_._0_4_ = 0;
  local_7c8._padding_._4_4_ = 1;
  local_7c8.UnvisitedBitMask = 0xffffffff;
  local_7c8.CurrentBitIndex = 0;
  local_7c8.BaseBitIndex = 0;
  local_7c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&(param_1->AllPartitionedComponents).Elements.field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_7c8);
  }
  TStack_5f8._padding_ = CONCAT44(local_7c8._padding_._4_4_,(undefined4)local_7c8._padding_);
  TStack_5f8.CurrentBitIndex = local_7c8.CurrentBitIndex;
  TStack_5f8.UnvisitedBitMask = local_7c8.UnvisitedBitMask;
  TStack_5f8._28_4_ = local_7c8._28_4_;
  TStack_5f8.BaseBitIndex = local_7c8.BaseBitIndex;
  local_548 = *(int *)&(param_1->AllPartitionedComponents).Elements.field_0x8 -
              *(int *)&(param_1->AllPartitionedComponents).Elements.field_0x34;
  local_570._16_8_ = local_7c8.Array;
  uStack_5d8 = CONCAT44(uStack_544,local_548);
  TStack_5f8.Array = local_7c8.Array;
  local_600 = pTVar57;
  local_570._0_8_ = pTVar57;
  local_570._8_8_ = TStack_5f8._padding_;
  local_570._24_8_ = TStack_5f8._16_8_;
  local_570._32_8_ = TStack_5f8._24_8_;
  pTVar36 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_570,
                       (TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(param_1->AllPartitionedComponents).Elements.field_0x28);
  uVar69 = (undefined4)__real_4059000000000000;
  uVar70 = (undefined4)((ulonglong)__real_4059000000000000 >> 0x20);
  uVar65 = (undefined4)__real_3fe0000000000000;
  uVar66 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
  lStack_9a0 = pTVar36->_padding_;
  pTStack_998 = pTVar36->Array;
  lStack_990._0_4_ = pTVar36->UnvisitedBitMask;
  lStack_990._4_4_ = pTVar36->CurrentBitIndex;
  lStack_988 = *(longlong *)&pTVar36->BaseBitIndex;
  local_980 = *(int *)&(param_1->AllPartitionedComponents).Elements.field_0x8 -
              *(int *)&(param_1->AllPartitionedComponents).Elements.field_0x34;
  uVar72 = (undefined4)__real_bfe0000000000000;
  uVar73 = (undefined4)((ulonglong)__real_bfe0000000000000 >> 0x20);
  uVar67 = (undefined4)__real_428ffffffffff800;
  uVar68 = (undefined4)((ulonglong)__real_428ffffffffff800 >> 0x20);
  uStack_3f0 = CONCAT44(uStack_97c,local_980);
  fVar71 = __real_3f800000;
  fVar74 = __real_3f000000;
  local_9a8 = (TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator>
               *)pTVar57;
  local_418 = pTVar57;
  lStack_410 = lStack_9a0;
  local_408 = pTStack_998;
  uStack_400 = lStack_990;
  local_3f8 = lStack_988;
  while( true ) {
    pTVar57 = local_600;
    if (*(int *)&(local_600->Elements).field_0x8 - *(int *)&(local_600->Elements).field_0x34 !=
        (int)uStack_5d8) {
      local_9c8 = 0;
      `TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_9c8);
    }
    if (((TStack_5f8.CurrentBitIndex == uStack_400._4_4_) && (TStack_5f8.Array == local_408)) &&
       (pTVar57 == local_418)) break;
    pUVar61 = *(UPCGComponent **)
               (*(longlong *)&pTVar57->Elements + (longlong)TStack_5f8.CurrentBitIndex * 0x10);
    bVar24 = CpuChannel->Enabled < 0;
    local_9b0 = pUVar61;
    if (bVar24) {
      local_9d2 = '\0';
    }
    else {
      local_9d2 = '\x01';
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId498,"FPCGRuntimeGenScheduler::CollectLocalComponents",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                 ,0x1f2);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId498);
    }
    cVar49 = !bVar24;
    if (pUVar61 == (UPCGComponent *)0x0) {
      bVar24 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4830013997950435828>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                          ,500,"OriginalComponent");
      if (bVar24) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_149f65fc7:
      if ((bool)cVar49) {
LAB_149f65fcc:
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else {
      pUVar37 = UPCGComponent::GetGraph(pUVar61);
      if ((pUVar37 == (UPCGGraph *)0x0) || (pUVar61->bActivated == false)) goto LAB_149f65fc7;
      pUVar55 = (pUVar61->SchedulingPolicy).field0_0x0.DebugPtr;
      local_940 = pUVar55;
      if (pUVar61->GenerationTrigger == GenerateAtRuntime) {
        if (pUVar55 == (UPCGSchedulingPolicyBase *)0x0) {
          bVar24 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4830013997950435837>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                              ,0x1fd,"Policy");
          if (bVar24) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          pAVar3 = param_1->PCGWorldActor;
          local_288.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          local_288.ArrayNum = 0;
          local_9d8 = false;
          local_288.ArrayMax = 0xd;
          pUVar37 = UPCGComponent::GetGraph(pUVar61);
          bVar24 = PCGHelpers::GetGenerationGridSizes(pUVar37,pAVar3,&local_288,&local_9d8);
          if ((!bVar24) &&
             (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<4830013997950435841>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                                  ,0x201,
                                  "PCGHelpers::GetGenerationGridSizes(OriginalComponent->GetGraph(), Inputs.PCGWorldActor, GridSizes, bHasUnbounded)"
                                 ), bVar24)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((local_288.ArrayNum == 0) && (local_9d8 == false)) {
            if (local_288.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_288.AllocatorInstance.SecondaryData);
            }
            goto LAB_149f65fc7;
          }
          uVar58 = 0;
          local_238.ArrayMax = 0xd;
          local_238.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          local_238.ArrayNum = 0;
          if (cVar27 == '\0') {
            TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>::
            SetNumZeroed(&local_238,local_288.ArrayNum,Default);
          }
          else {
            if (local_288.ArrayNum < 1) {
              if (local_288.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_288.ArrayNum);
              }
            }
            else {
              UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                        (4,4,local_288.ArrayNum,&local_238.AllocatorInstance,&local_238.ArrayNum,
                         &local_238.ArrayMax);
            }
            if (0 < local_288.ArrayNum) {
              lVar54 = 0;
              do {
                uVar29 = PCGHiGenGrid::UninitializedGridSize();
                uVar52 = ~uVar58 >> 0x1f;
                uVar59 = 0;
                if ((int)uVar58 < local_238.ArrayNum) {
                  uVar59 = uVar52;
                }
                if ((uVar59 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FVar47 = (ForElementType<unsigned_int>)&local_238;
                if (local_238.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
                {
                  FVar47 = local_238.AllocatorInstance.SecondaryData;
                }
                *(uint *)((longlong)FVar47 + lVar54) = uVar29;
                local_138.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
                local_138.ArrayNum = 0;
                local_138.ArrayMax = 0xd;
                pUVar37 = UPCGComponent::GetGraph(pUVar61);
                uVar59 = 0;
                if ((int)uVar58 < local_288.ArrayNum) {
                  uVar59 = uVar52;
                }
                if ((uVar59 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FVar47 = (ForElementType<unsigned_int>)&local_288;
                if (local_288.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
                {
                  FVar47 = local_288.AllocatorInstance.SecondaryData;
                }
                UPCGGraph::GetParentGridSizes
                          (pUVar37,*(uint *)((longlong)FVar47 + lVar54),&local_138);
                uVar44 = (ulonglong)local_138.ArrayNum;
                local_9cc = local_138.ArrayNum;
                FVar47 = (ForElementType<unsigned_int>)&local_138;
                if (local_138.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
                {
                  FVar47 = local_138.AllocatorInstance.SecondaryData;
                }
                local_908 = (ForElementType<unsigned_int>)((longlong)FVar47 + uVar44 * 4);
                uVar51 = uVar44;
LAB_149f662b0:
                FVar42 = local_908;
                if ((int)uVar44 != (int)uVar51) {
                  local_9c7 = 0;
                  `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_9c7);
                }
                uVar59 = 0;
                if (FVar47 == FVar42) goto LAB_149f663f2;
                uVar29 = *(uint *)FVar47;
                bVar24 = UPCGComponent::DoesGridDependOnWorldStreaming(local_9b0,uVar29);
                if (!bVar24) {
LAB_149f66377:
                  uVar44 = (ulonglong)(uint)local_138.ArrayNum;
                  FVar47 = (ForElementType<unsigned_int>)((longlong)FVar47 + 4);
                  uVar51 = (ulonglong)local_9cc;
                  goto LAB_149f662b0;
                }
                uVar30 = uVar59;
                if ((int)uVar58 < local_288.ArrayNum) {
                  uVar30 = uVar52;
                }
                if ((uVar30 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FVar42 = (ForElementType<unsigned_int>)&local_288;
                if (local_288.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
                {
                  FVar42 = local_288.AllocatorInstance.SecondaryData;
                }
                if (uVar29 <= *(uint *)((longlong)FVar42 + lVar54)) {
                  bVar24 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<4830013997950435863>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                                      ,0x217,"ParentGridSize > GridSizes[GridIndex]");
                  if (bVar24) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  goto LAB_149f66377;
                }
                uVar30 = uVar59;
                if ((int)uVar58 < local_238.ArrayNum) {
                  uVar30 = uVar52;
                }
                if ((uVar30 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FVar47 = (ForElementType<unsigned_int>)&local_238;
                if (local_238.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
                {
                  FVar47 = local_238.AllocatorInstance.SecondaryData;
                }
                *(uint *)((longlong)FVar47 + lVar54) = uVar29;
LAB_149f663f2:
                uVar29 = uVar59;
                if ((int)uVar58 < local_238.ArrayNum) {
                  uVar29 = uVar52;
                }
                if ((uVar29 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FVar47 = (ForElementType<unsigned_int>)&local_238;
                if (local_238.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
                {
                  FVar47 = local_238.AllocatorInstance.SecondaryData;
                }
                uVar29 = *(uint *)((longlong)FVar47 + lVar54);
                uVar30 = PCGHiGenGrid::UninitializedGridSize();
                pUVar61 = local_9b0;
                if (uVar29 == uVar30) {
                  uVar29 = uVar59;
                  if ((int)uVar58 < local_288.ArrayNum) {
                    uVar29 = uVar52;
                  }
                  if ((uVar29 == 0) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar24)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pUVar61 = local_9b0;
                  FVar47 = (ForElementType<unsigned_int>)&local_288;
                  if (local_288.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
                     ) {
                    FVar47 = local_288.AllocatorInstance.SecondaryData;
                  }
                  bVar24 = UPCGComponent::DoesGridDependOnWorldStreaming
                                     (local_9b0,*(uint *)((longlong)FVar47 + lVar54));
                  if (bVar24) {
                    uVar29 = uVar59;
                    if ((int)uVar58 < local_288.ArrayNum) {
                      uVar29 = uVar52;
                    }
                    if ((uVar29 == 0) &&
                       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar24)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    FVar47 = (ForElementType<unsigned_int>)&local_288;
                    if (local_288.AllocatorInstance.SecondaryData !=
                        (ForElementType<unsigned_int>)0x0) {
                      FVar47 = local_288.AllocatorInstance.SecondaryData;
                    }
                    uVar62 = *(undefined4 *)((longlong)FVar47 + lVar54);
                    if ((int)uVar58 < local_238.ArrayNum) {
                      uVar59 = uVar52;
                    }
                    if ((uVar59 == 0) &&
                       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar24)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    FVar47 = (ForElementType<unsigned_int>)&local_238;
                    if (local_238.AllocatorInstance.SecondaryData !=
                        (ForElementType<unsigned_int>)0x0) {
                      FVar47 = local_238.AllocatorInstance.SecondaryData;
                    }
                    *(undefined4 *)((longlong)FVar47 + lVar54) = uVar62;
                  }
                }
                if (local_138.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
                {
                  FMemory::Free((void *)local_138.AllocatorInstance.SecondaryData);
                }
                uVar58 = uVar58 + 1;
                lVar54 = lVar54 + 4;
                param_1 = local_9b8;
                pUVar55 = local_940;
              } while ((int)uVar58 < local_288.ArrayNum);
            }
          }
          if (local_9d8 == false) {
            if ((local_288.ArrayNum < 1) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FVar47 = (ForElementType<unsigned_int>)&local_288;
            if (local_288.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar47 = local_288.AllocatorInstance.SecondaryData;
            }
            EVar31 = PCGHiGenGrid::GridSizeToGrid(*(uint *)FVar47);
          }
          else {
            EVar31 = Unbounded;
          }
          local_888 = (TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator>
                       *)UPCGComponent::GetGenerationRadiusFromGrid(pUVar61,EVar31);
          uVar62 = SUB84(local_888,0);
          uVar64 = (undefined4)((ulonglong)local_888 >> 0x20);
          pTVar4 = param_1->GenSources;
          local_7a8._padding_._0_4_ = 0;
          local_7a8._padding_._4_4_ = 1;
          puVar1 = &(pTVar4->Elements).field_0x10;
          local_7a8.UnvisitedBitMask = 0xffffffff;
          local_7a8.CurrentBitIndex = 0;
          local_7a8.BaseBitIndex = 0;
          local_7a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
          if (*(int *)&(pTVar4->Elements).field_0x28 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_7a8);
          }
          lStack_9a0 = CONCAT44(local_7a8._padding_._4_4_,(undefined4)local_7a8._padding_);
          lStack_990._4_4_ = local_7a8.CurrentBitIndex;
          lStack_990._0_4_ = local_7a8.UnvisitedBitMask;
          lStack_988._4_4_ = local_7a8._28_4_;
          lStack_988._0_4_ = local_7a8.BaseBitIndex;
          local_980 = *(int *)&(pTVar4->Elements).field_0x8 - *(int *)&(pTVar4->Elements).field_0x34
          ;
          pTStack_998 = local_7a8.Array;
          uStack_608 = CONCAT44(uStack_97c,local_980);
          TStack_628.Array = local_7a8.Array;
          local_9a8 = pTVar4;
          local_630 = pTVar4;
          TStack_628._padding_ = lStack_9a0;
          TStack_628._16_8_ = lStack_990;
          TStack_628._24_8_ = lStack_988;
          pTVar36 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              (&local_2c8,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                               *(int *)&(pTVar4->Elements).field_0x28);
          pUVar61 = local_9b0;
          lStack_9a0 = pTVar36->_padding_;
          pTStack_998 = pTVar36->Array;
          lStack_990._0_4_ = pTVar36->UnvisitedBitMask;
          lStack_990._4_4_ = pTVar36->CurrentBitIndex;
          lStack_988 = *(longlong *)&pTVar36->BaseBitIndex;
          local_980 = *(int *)&(pTVar4->Elements).field_0x8 - *(int *)&(pTVar4->Elements).field_0x34
          ;
          uStack_3c0 = CONCAT44(uStack_97c,local_980);
          local_9a8 = pTVar4;
          local_3e8 = pTVar4;
          lStack_3e0 = lStack_9a0;
          local_3d8 = pTStack_998;
          uStack_3d0 = lStack_990;
          local_3c8 = lStack_988;
          while( true ) {
            pTVar4 = local_630;
            if (*(int *)&(local_630->Elements).field_0x8 - *(int *)&(local_630->Elements).field_0x34
                != (int)uStack_608) {
              local_9c6 = 0;
              `TSparseArray<TSparseSetElement<IPCGGenSourceBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_9c6);
            }
            cVar49 = local_9d2;
            if (((TStack_628.CurrentBitIndex == uStack_3d0._4_4_) && (TStack_628.Array == local_3d8)
                ) && (pTVar4 == local_3e8)) break;
            pIVar50 = *(IPCGGenSourceBase **)
                       (*(longlong *)&pTVar4->Elements + (longlong)TStack_628.CurrentBitIndex * 0x10
                       );
            local_8a8 = pIVar50;
            pFVar38 = UPCGComponent::GetGenerationRadii(pUVar61);
            pTVar14 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationRadiusMultiplier.Ref;
            bVar24 = IsInParallelGameThread();
            if (((!bVar24) && (bVar24 = IsInGameThread(), !bVar24)) &&
               (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<6409875433831007945>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x6c9,"GetShadowIndex() == 0"), bVar24)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar2 = pTVar14->ShadowedValue[0];
            uVar25 = (**(code **)(pUVar55->_padding_ + 0x2c8))(pUVar55);
            if (local_288.ArrayNum == 0) {
              uVar58 = PCGHiGenGrid::UnboundedGridSize();
            }
            else {
              uVar58 = 0;
              if ((int)(local_288.ArrayNum - 1U) < local_288.ArrayNum) {
                uVar58 = ~(local_288.ArrayNum - 1U) >> 0x1f;
              }
              if ((uVar58 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FVar47 = (ForElementType<unsigned_int>)&local_288;
              if (local_288.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FVar47 = local_288.AllocatorInstance.SecondaryData;
              }
              uVar58 = *(uint *)((longlong)FVar47 + (longlong)(int)(local_288.ArrayNum - 1) * 4);
            }
            FObjectKey::FObjectKey((FObjectKey *)local_388,(UObject *)pUVar61);
            pFVar15 = local_918;
            cVar27 = local_9d4;
            local_378 = pFVar38->GenerationRadius;
            dStack_370 = pFVar38->GenerationRadius400;
            local_368 = pFVar38->GenerationRadius800;
            dStack_360 = pFVar38->GenerationRadius1600;
            local_358 = pFVar38->GenerationRadius3200;
            dStack_350 = pFVar38->GenerationRadius6400;
            local_348 = pFVar38->GenerationRadius12800;
            dStack_340 = pFVar38->GenerationRadius25600;
            local_338 = pFVar38->GenerationRadius51200;
            dStack_330 = pFVar38->GenerationRadius102400;
            local_328 = pFVar38->GenerationRadius204800;
            dStack_320 = pFVar38->CleanupRadiusMultiplier;
            local_388._8_8_ = pIVar50;
            local_318 = fVar2;
            local_314 = uVar25;
            local_310 = uVar58;
            if ((local_9d4 == '\0') ||
               (bVar24 = PCGRuntimeGenChangeDetection::FDetector::IsCellScanRequired
                                   (&local_918->ChangeDetector,(FDetectionInputs *)local_388),
               bVar24)) {
              PCGRuntimeGenSchedulerHelpers::Stats.GridCellScanCounter =
                   PCGRuntimeGenSchedulerHelpers::Stats.GridCellScanCounter + 1;
              (**(code **)((longlong)*pIVar50 + 0x18))(pIVar50);
              if (local_448 != '\0') {
                local_8c8._0_4_ = local_460;
                local_8c8._4_4_ = uStack_45c;
                local_8c8._8_4_ = uStack_458;
                local_8c8._12_4_ = uStack_454;
                local_8c8._s_0.Z = local_450;
                if (local_9c5 != '\0') {
                  lVar54 = (**(code **)((longlong)*pIVar50 + 8))(pIVar50);
                  if (lVar54 != 0) {
                    (**(code **)((longlong)*pIVar50 + 0x20))(pIVar50,&local_4b8);
                    local_680 = *(FName *)(lVar54 + 0x18);
                    ::FName::ToString(&local_680,&local_590);
                    if (local_4a0 == '\0') {
                      local_478._s_0.X = (double)CONCAT44(local_8c8._4_4_,local_8c8._0_4_);
                      local_478._s_0.Y = (double)CONCAT44(local_8c8._12_4_,local_8c8._8_4_);
                      pTVar45 = &local_478;
                      local_478._s_0.Z = local_8c8._s_0.Z;
                    }
                    else {
                      pTVar45 = &local_540;
                      local_540._s_0.X =
                           local_4b8 * (double)CONCAT44(uVar70,uVar69) +
                           (double)CONCAT44(local_8c8._4_4_,local_8c8._0_4_);
                      local_540._s_0.Y =
                           local_4b0 * (double)CONCAT44(uVar70,uVar69) +
                           (double)CONCAT44(local_8c8._12_4_,local_8c8._8_4_);
                      local_540._s_0.Z =
                           local_4a8 * (double)CONCAT44(uVar70,uVar69) + local_8c8._s_0.Z;
                    }
                    DrawDebugString(pFVar15->World,(TVector<double> *)&pTVar45->_s_0,&local_590,
                                    (AActor *)0x0,&FColor::Red,0.0,false,fVar71);
                    if (local_590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_590.Data.AllocatorInstance.Data);
                    }
                  }
                  iVar28 = local_288.ArrayNum;
                  uVar44 = (ulonglong)local_288.ArrayNum;
                  FVar47 = (ForElementType<unsigned_int>)&local_288;
                  if (local_288.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
                     ) {
                    FVar47 = local_288.AllocatorInstance.SecondaryData;
                  }
                  FVar42 = (ForElementType<unsigned_int>)((longlong)FVar47 + uVar44 * 4);
                  while( true ) {
                    if ((uint)uVar44 != iVar28) {
                      local_9c4 = 0;
                      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::
                      operator()(&local_9c4);
                    }
                    pIVar50 = local_8a8;
                    pUVar55 = local_940;
                    cVar27 = local_9d4;
                    if (FVar47 == FVar42) break;
                    uVar58 = *(uint *)FVar47;
                    bVar24 = PCGHiGenGrid::IsValidGridSize(uVar58);
                    if ((!bVar24) &&
                       (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                                           (&bGEnsureHasExecuted<4830013997950435925>,false,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                                            ,0x255,"PCGHiGenGrid::IsValidGridSize(GridSize)"),
                       bVar24)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    EVar31 = PCGHiGenGrid::GridSizeToGrid(uVar58);
                    dVar8 = UPCGComponent::GetGenerationRadiusFromGrid(pUVar61,EVar31);
                    DrawDebugSphere(local_918->World,(TVector<double> *)&local_8c8._s_0,(float)dVar8
                                    ,0x40,&FColor::Red,false,0.0,'\0',0.0);
                    uVar44 = (ulonglong)(uint)local_288.ArrayNum;
                    FVar47 = (ForElementType<unsigned_int>)((longlong)FVar47 + 4);
                  }
                }
                UPCGComponent::GetGridBounds(pUVar61,(TBox<double> *)&local_1b0._s_0);
                bVar24 = UPCGComponent::Use2DGrid(pUVar61);
                local_880._s_0.Z = local_8c8._s_0.Z;
                local_880._s_0.X = (double)CONCAT44(local_8c8._4_4_,local_8c8._0_4_);
                local_880._s_0.Y = (double)CONCAT44(local_8c8._12_4_,local_8c8._8_4_);
                if (bVar24) {
                  local_880._s_0.Z = local_1b0._s_0.Z;
                }
                local_9c3 = bVar24;
                dVar8 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                                  ((TVector<double> *)&local_1b0._s_0,
                                   (TVector<double> *)&local_198._s_0,
                                   (TVector<double> *)&local_880._s_0);
                if (dVar8 <= (double)CONCAT44(uVar64,uVar62) * (double)CONCAT44(uVar64,uVar62)) {
                  pFVar48 = local_9b8;
                  if (local_9d8 != false) {
                    if (local_9d7 != '\0') {
                      uVar58 = PCGHiGenGrid::UnboundedGridSize();
                      bVar26 = UPCGSchedulingPolicyBase::DoesGridDependOnWorldStreaming
                                         (pUVar55,uVar58);
                      if (bVar26) {
                        local_528._s_0.X =
                             (local_198._s_0.X + local_1b0._s_0.X) * (double)CONCAT44(uVar66,uVar65)
                        ;
                        dVar8 = local_198._s_0.Y - local_1b0._s_0.Y;
                        if (local_198._s_0.Y - local_1b0._s_0.Y <=
                            local_198._s_0.X - local_1b0._s_0.X) {
                          dVar8 = local_198._s_0.X - local_1b0._s_0.X;
                        }
                        local_528._s_0.Y =
                             (local_198._s_0.Y + local_1b0._s_0.Y) * (double)CONCAT44(uVar66,uVar65)
                        ;
                        local_528._s_0.Z =
                             (local_1b0._s_0.Z + local_198._s_0.Z) * (double)CONCAT44(uVar66,uVar65)
                        ;
                        bVar26 = `FPCGRuntimeGenScheduler::TickQueueComponentsForGeneration'::__l2::
                                 <lambda_2>::operator()
                                           (&local_8a0,(TVector<double> *)&local_528._s_0,
                                            (float)dVar8);
                        if (!bVar26) {
                          if (6 < (byte)LogPCG._0_1_) {
                            lVar54 = pUVar61->_padding_;
                            if (*(int *)(lVar54 + 0x1f0) < 2) {
                              local_698 = *(FName *)(lVar54 + 0x18);
                              ::FName::ToString(&local_698,&local_808);
                            }
                            else {
                              ::FString::FString(&local_808,(FString *)(lVar54 + 0x1e8));
                            }
                            UE::Logging::Private::BasicLog<7>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                            if (local_808.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_808.Data.AllocatorInstance.Data);
                            }
                          }
                          goto LAB_149f67b63;
                        }
                      }
                    }
                    local_848._0_8_ = 0;
                    local_848._s_0.Z = 0;
                    uVar58 = PCGHiGenGrid::UnboundedGridSize();
                    FGridGenerationKey::FGridGenerationKey
                              (&local_4f8,uVar58,(TIntVector3<int> *)&local_848._s_0,pUVar61);
                    uVar58 = ::GetTypeHash(&local_4f8);
                    pFVar48 = local_9b8;
                    iVar28 = TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
                             ::FindIndexByHash<FPCGRuntimeGenScheduler::FGridGenerationKey>
                                       (&local_9b8->GeneratedComponents,uVar58,&local_4f8);
                    if ((iVar28 == -1) &&
                       (cVar27 = (**(code **)(pUVar55->_padding_ + 0x2b8))
                                           (pUVar55,pIVar50,&local_1b0), cVar27 != '\0')) {
                      uStack_6f8 = 0;
                      local_6f0 = 0;
                      local_700._0_5_ = CONCAT14(local_4f8.bUse2DGrid,local_4f8.GridSize);
                      local_700 = (ulonglong)CONCAT15(1,(undefined5)local_700);
                      if ((local_4f8.bUse2DGrid != bVar24) &&
                         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Key.GetGridDescriptor().Is2DGrid() == bIs2DGrid",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                                              ,0x288,L""), bVar26)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      `FPCGRuntimeGenScheduler::TickQueueComponentsForGeneration'::__l2::<lambda_1>
                      ::operator()(&local_910,&local_4f8,pIVar50,pUVar55,
                                   (TBox<double> *)&local_1b0._s_0,bVar24);
                    }
                  }
                  uVar58 = 0;
                  local_9b0 = (UPCGComponent *)0x0;
                  local_9d3 = '\0';
                  if (0 < local_288.ArrayNum) {
                    local_908 = (ForElementType<unsigned_int>)0x0;
                    do {
                      FVar47 = local_908;
                      pUVar56 = local_9b0;
                      uVar59 = ~uVar58 >> 0x1f;
                      uVar29 = 0;
                      if ((int)uVar58 < local_288.ArrayNum) {
                        uVar29 = uVar59;
                      }
                      local_9cc = uVar59;
                      if ((uVar29 == 0) &&
                         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar24)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      FVar42 = (ForElementType<unsigned_int>)&local_288;
                      if (local_288.AllocatorInstance.SecondaryData !=
                          (ForElementType<unsigned_int>)0x0) {
                        FVar42 = local_288.AllocatorInstance.SecondaryData;
                      }
                      uVar29 = *(uint *)((longlong)FVar42 + (longlong)FVar47);
                      local_9bc = uVar29;
                      bVar24 = PCGHiGenGrid::IsValidGridSize(uVar29);
                      if ((!bVar24) &&
                         (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                                             (&bGEnsureHasExecuted<4830013997950435989>,false,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                                              ,0x295,"PCGHiGenGrid::IsValidGridSize(GridSize)"),
                         bVar24)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      bVar24 = local_9c3;
                      local_438._s_0.X = (double)CONCAT44(local_8c8._4_4_,local_8c8._0_4_);
                      local_438._s_0.Y = (double)CONCAT44(local_8c8._12_4_,local_8c8._8_4_);
                      local_438._s_0.Z = local_8c8._s_0.Z;
                      UPCGActorHelpers::GetCellCoord
                                ((TIntVector3<int> *)&local_900._s_0,
                                 (TVector<double> *)&local_438._s_0,uVar29,local_9c3);
                      EVar31 = PCGHiGenGrid::GridSizeToGrid(uVar29);
                      dVar8 = UPCGComponent::GetGenerationRadiusFromGrid(pUVar61,EVar31);
                      dVar63 = (double)uVar29;
                      iVar28 = -((int)ROUND((double)CONCAT44(uVar73,uVar72) -
                                            (dVar8 + dVar8) / dVar63) >> 1);
                      uVar44 = (ulonglong)uVar29;
                      local_8b0 = iVar28;
                      if (bVar24 != false) {
                        local_8b0 = 0;
                      }
                      fVar74 = (float)uVar44 * fVar74;
                      dVar12 = (double)fVar74;
                      local_920 = dVar12;
                      if (bVar24 != false) {
                        local_920 = (double)CONCAT44(uVar68,uVar67);
                      }
                      iVar60 = local_900._s_0.Z - local_8b0;
                      uVar69 = local_900._s_0.Z;
                      uVar70 = local_900._s_0.X;
                      local_9c0 = iVar60;
                      local_8cc = iVar28;
                      local_850 = dVar63;
                      uVar72 = local_900._s_0.Y;
                      if (iVar60 <= local_900._s_0.Z + local_8b0) {
                        do {
                          local_9d0 = uVar72 - iVar28;
                          local_9c0 = iVar60;
                          if (local_9d0 <= uVar72 + iVar28) {
                            do {
                              iVar53 = uVar70 - iVar28;
                              iVar23 = local_9d0;
                              if (iVar53 <= uVar70 + iVar28) {
                                do {
                                  iStack_714 = iVar23;
                                  dVar9 = local_920;
                                  local_968.GridCoords.field0_0x0._s_0.Y = local_9d0;
                                  local_968.bUse2DGrid = false;
                                  local_968.OriginalComponent.ObjectKey.ObjectIndex = 0;
                                  local_968.OriginalComponent.ObjectKey.ObjectSerialNumber = 0;
                                  local_968.GridSize = uVar29;
                                  local_968.GridCoords.field0_0x0._s_0.X = iVar53;
                                  local_968.GridCoords.field0_0x0._s_0.Z = iVar60;
                                  local_718 = iVar53;
                                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                                    UE::GC::MarkAsReachable((UObject *)pUVar61);
                                  }
                                  local_938.ObjectIndex = 0;
                                  local_938.ObjectSerialNumber = 0;
                                  local_720 = pUVar61;
                                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                                    UE::GC::MarkAsReachable((UObject *)pUVar61);
                                  }
                                  FWeakObjectPtr::operator=(&local_938,(FObjectPtr)&local_720);
                                  local_968.OriginalComponent.ObjectKey = (FObjectKey)local_938;
                                  local_968.CachedLocalComponent.WeakPtr.ObjectIndex = 0;
                                  local_968.CachedLocalComponent.WeakPtr.ObjectSerialNumber = 0;
                                  local_728 = 0;
                                  FWeakObjectPtr::operator=
                                            (&local_968.CachedLocalComponent.WeakPtr,
                                             (FObjectPtr)&local_728);
                                  local_968.bUse2DGrid = UPCGComponent::Use2DGrid(pUVar61);
                                  local_8f0.GridCoords.field0_0x0._0_8_ =
                                       CONCAT44(iStack_714,local_718);
                                  local_8f0.bUse2DGrid = false;
                                  local_8f0.OriginalComponent.ObjectKey.ObjectIndex = 0;
                                  local_8f0.OriginalComponent.ObjectKey.ObjectSerialNumber = 0;
                                  local_8f0.GridSize = uVar29;
                                  local_8f0.GridCoords.field0_0x0._s_0.Z = iVar60;
                                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                                    UE::GC::MarkAsReachable((UObject *)pUVar61);
                                  }
                                  local_930.ObjectIndex = 0;
                                  local_930.ObjectSerialNumber = 0;
                                  local_6a8 = pUVar61;
                                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                                    UE::GC::MarkAsReachable((UObject *)pUVar61);
                                  }
                                  FWeakObjectPtr::operator=(&local_930,(FObjectPtr)&local_6a8);
                                  local_8f0.OriginalComponent.ObjectKey = (FObjectKey)local_930;
                                  local_8f0.CachedLocalComponent.WeakPtr.ObjectIndex = 0;
                                  local_8f0.CachedLocalComponent.WeakPtr.ObjectSerialNumber = 0;
                                  local_6a0 = 0;
                                  FWeakObjectPtr::operator=
                                            (&local_8f0.CachedLocalComponent.WeakPtr,
                                             (FObjectPtr)&local_6a0);
                                  local_8f0.bUse2DGrid = UPCGComponent::Use2DGrid(pUVar61);
                                  uVar52 = ::GetTypeHash(&local_8f0);
                                  if (*(int *)&(pFVar48->GeneratedComponents).Elements.field_0x8 !=
                                      *(int *)&(pFVar48->GeneratedComponents).Elements.field_0x34) {
                                    FVar5 = (pFVar48->GeneratedComponents).Hash.SecondaryData;
                                    FVar46 = (ForElementType<FSetElementId>)
                                             &(pFVar48->GeneratedComponents).Hash;
                                    if (FVar5 != (ForElementType<FSetElementId>)0x0) {
                                      FVar46 = FVar5;
                                    }
                                    iVar28 = *(int *)((longlong)FVar46 +
                                                     (ulonglong)
                                                     ((pFVar48->GeneratedComponents).HashSize - 1U &
                                                     uVar52) * 4);
                                    if (iVar28 != -1) {
                                      do {
                                        pcVar39 = (char *)((longlong)iVar28 * 0x2c +
                                                          *(longlong *)
                                                           &(pFVar48->GeneratedComponents).Elements)
                                        ;
                                        uVar59 = local_9cc;
                                        iVar60 = local_9c0;
                                        uVar29 = local_9bc;
                                        if (((((*(uint *)(pcVar39 + 4) == local_8f0.GridSize) &&
                                              (*(int *)(pcVar39 + 8) ==
                                               local_8f0.GridCoords.field0_0x0._s_0.X)) &&
                                             (*(int *)(pcVar39 + 0xc) ==
                                              local_8f0.GridCoords.field0_0x0._s_0.Y)) &&
                                            ((*(int *)(pcVar39 + 0x10) ==
                                              local_8f0.GridCoords.field0_0x0._s_0.Z &&
                                             ((bool)*pcVar39 == local_8f0.bUse2DGrid)))) &&
                                           ((*(int *)(pcVar39 + 0x14) ==
                                             local_8f0.OriginalComponent.ObjectKey.ObjectIndex &&
                                            (*(int *)(pcVar39 + 0x18) ==
                                             local_8f0.OriginalComponent.ObjectKey.
                                             ObjectSerialNumber)))) {
                                          if ((iVar28 != -1) && (pcVar39 != (char *)0x0))
                                          goto LAB_149f67a53;
                                          break;
                                        }
                                        iVar28 = *(int *)(pcVar39 + 0x24);
                                      } while (iVar28 != -1);
                                    }
                                  }
                                  local_868._s_0.X =
                                       ((double)iVar53 + (double)CONCAT44(uVar66,uVar65)) * dVar63;
                                  local_868._s_0.Y =
                                       ((double)local_9d0 + (double)CONCAT44(uVar66,uVar65)) *
                                       dVar63;
                                  dVar11 = local_868._s_0.X + dVar12;
                                  local_868._s_0.Z =
                                       ((double)iVar60 + (double)CONCAT44(uVar66,uVar65)) * dVar63;
                                  local_1e8 = local_868._s_0.X - dVar12;
                                  dVar63 = local_868._s_0.Y + dVar12;
                                  dVar10 = local_868._s_0.Z + dVar9;
                                  dStack_1e0 = local_868._s_0.Y - dVar12;
                                  dVar9 = local_868._s_0.Z - dVar9;
                                  if ((((dVar11 < local_1b0._s_0.X) ||
                                       (local_198._s_0.X < local_1e8)) ||
                                      (dVar63 < local_1b0._s_0.Y)) ||
                                     (((local_198._s_0.Y < dStack_1e0 || (dVar10 < local_1b0._s_0.Z)
                                       ) || (local_198._s_0.Z < dVar9)))) {
                                    local_1e8 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                                ::__l5::EmptyBox.Min.field0_0x0._s_0.X;
                                    dStack_1e0 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                                 ::__l5::EmptyBox.Min.field0_0x0._s_0.Y;
                                    local_1d8 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                                ::__l5::EmptyBox.Min.field0_0x0._s_0.Z;
                                    dStack_1d0 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                                 ::__l5::EmptyBox.Max.field0_0x0._s_0.X;
                                    local_1b8 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                                ::__l5::EmptyBox.IsValid;
                                    uStack_1b7 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                                 ::__l5::EmptyBox.Pad[0];
                                    uStack_1b6 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                                 ::__l5::EmptyBox.Pad[1];
                                    uStack_1b5 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                                 ::__l5::EmptyBox.Pad[2];
                                    uStack_1b4 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                                 ::__l5::EmptyBox.Pad[3];
                                    uStack_1b3 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                                 ::__l5::EmptyBox.Pad[4];
                                    uStack_1b2 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                                 ::__l5::EmptyBox.Pad[5];
                                    uStack_1b1 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                                 ::__l5::EmptyBox.Pad[6];
                                    uVar18 = _local_1b8;
                                    local_1b8 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                                ::__l5::EmptyBox.IsValid;
                                    bVar24 = local_1b8 != '\0';
                                    local_1c8 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                                ::__l5::EmptyBox.Max.field0_0x0._s_0.Y;
                                    dStack_1c0 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                                 ::__l5::EmptyBox.Max.field0_0x0._s_0.Z;
                                    _local_1b8 = uVar18;
                                    if (bVar24) goto LAB_149f67406;
LAB_149f67d42:
                                    uVar65 = (undefined4)__real_3fe0000000000000;
                                    uVar66 = (undefined4)
                                             ((ulonglong)__real_3fe0000000000000 >> 0x20);
                                  }
                                  else {
                                    if (local_1e8 <= local_1b0._s_0.X) {
                                      local_1e8 = local_1b0._s_0.X;
                                    }
                                    local_1b8 = '\x01';
                                    if (dStack_1e0 <= local_1b0._s_0.Y) {
                                      dStack_1e0 = local_1b0._s_0.Y;
                                    }
                                    local_1d8 = local_1b0._s_0.Z;
                                    if (local_1b0._s_0.Z <= dVar9) {
                                      local_1d8 = dVar9;
                                    }
                                    dStack_1d0 = local_198._s_0.X;
                                    if (dVar11 <= local_198._s_0.X) {
                                      dStack_1d0 = dVar11;
                                    }
                                    local_1c8 = local_198._s_0.Y;
                                    if (dVar63 <= local_198._s_0.Y) {
                                      local_1c8 = dVar63;
                                    }
                                    dStack_1c0 = local_198._s_0.Z;
                                    if (dVar10 <= local_198._s_0.Z) {
                                      dStack_1c0 = dVar10;
                                    }
LAB_149f67406:
                                    if ((local_1c8 - dStack_1e0) * (dStack_1d0 - local_1e8) *
                                        (dStack_1c0 - local_1d8) <= __real_3e45798ee2308c3a)
                                    goto LAB_149f67d42;
                                    local_6dc = 0;
                                    uStack_6e4 = 0;
                                    local_6ec._0_5_ =
                                         CONCAT14(local_968.bUse2DGrid,local_968.GridSize);
                                    local_6ec = (ulonglong)CONCAT15(1,(undefined5)local_6ec);
                                    if (local_968.bUse2DGrid != false) {
                                      local_880._s_0.Z = local_1d8;
                                    }
                                    dVar63 = 0.0;
                                    dVar9 = local_1e8;
                                    if ((local_880._s_0.X < local_1e8) ||
                                       (dVar9 = dStack_1d0, dStack_1d0 < local_880._s_0.X)) {
                                      dVar63 = (local_880._s_0.X - dVar9) *
                                               (local_880._s_0.X - dVar9);
                                    }
                                    dVar9 = dStack_1e0;
                                    if ((local_880._s_0.Y < dStack_1e0) ||
                                       (dVar9 = local_1c8, local_1c8 < local_880._s_0.Y)) {
                                      dVar63 = dVar63 + (local_880._s_0.Y - dVar9) *
                                                        (local_880._s_0.Y - dVar9);
                                    }
                                    dVar9 = local_1d8;
                                    if ((local_880._s_0.Z < local_1d8) ||
                                       (dVar9 = dStack_1c0, dStack_1c0 < local_880._s_0.Z)) {
                                      dVar63 = dVar63 + (local_880._s_0.Z - dVar9) *
                                                        (local_880._s_0.Z - dVar9);
                                    }
                                    if (dVar63 <= dVar8 * dVar8) {
                                      uStack_6d0 = 0;
                                      local_6c8 = 0;
                                      local_6d8._0_5_ =
                                           CONCAT14(local_968.bUse2DGrid,local_968.GridSize);
                                      local_6d8 = (ulonglong)CONCAT15(1,(undefined5)local_6d8);
                                      cVar27 = (**(code **)(local_940->_padding_ + 0x2b8))
                                                         (local_940,local_8a8,&local_1e8);
                                      if (cVar27 != '\0') {
                                        uVar52 = 0;
                                        if ((int)uVar58 < local_238.ArrayNum) {
                                          uVar52 = uVar59;
                                        }
                                        if ((uVar52 == 0) &&
                                           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar24)) {
                                          pcVar7 = (code *)swi(3);
                                          (*pcVar7)();
                                          return;
                                        }
                                        FVar47 = (ForElementType<unsigned_int>)&local_238;
                                        if (local_238.AllocatorInstance.SecondaryData !=
                                            (ForElementType<unsigned_int>)0x0) {
                                          FVar47 = local_238.AllocatorInstance.SecondaryData;
                                        }
                                        if (*(uint *)((longlong)FVar47 + (longlong)local_9b0 * 4) ==
                                            uVar29) {
                                          local_788 = local_868._s_0.X;
                                          dStack_780 = local_868._s_0.Y;
                                          local_778 = local_868._s_0.Z;
                                          local_770 = (float)uVar44;
                                          uVar59 = FCrc::MemCrc_DEPRECATED(&local_788,0x18,0);
                                          if (*(int *)&(local_890->Elements).field_0x8 !=
                                              *(int *)&(local_890->Elements).field_0x34) {
                                            FVar5 = (local_890->Hash).SecondaryData;
                                            FVar46 = (ForElementType<FSetElementId>)&local_890->Hash
                                            ;
                                            if (FVar5 != (ForElementType<FSetElementId>)0x0) {
                                              FVar46 = FVar5;
                                            }
                                            iVar28 = *(int *)((longlong)FVar46 +
                                                             (ulonglong)
                                                             (local_890->HashSize - 1U &
                                                             (uVar59 * 0x40 + (int)local_770 +
                                                              (uVar59 >> 2) + 0x9e3779b9 ^ uVar59))
                                                             * 4);
                                            if (iVar28 != -1) {
                                              do {
                                                pdVar40 = (double *)
                                                          ((longlong)iVar28 * 0x30 +
                                                          *(longlong *)&local_890->Elements);
                                                if ((((local_788 == *pdVar40) &&
                                                     (dStack_780 == pdVar40[1])) &&
                                                    (local_778 == pdVar40[2])) &&
                                                   (local_770 == *(float *)(pdVar40 + 3))) {
                                                  if (iVar28 != -1) {
                                                    pdVar43 = pdVar40 + 4;
                                                    if (pdVar40 == (double *)0x0) {
                                                      pdVar43 = (double *)0x0;
                                                    }
                                                    if (pdVar43 != (double *)0x0) {
                                                      cVar27 = *(char *)pdVar43;
                                                      goto LAB_149f6786c;
                                                    }
                                                  }
                                                  break;
                                                }
                                                iVar28 = *(int *)(pdVar40 + 5);
                                              } while (iVar28 != -1);
                                            }
                                          }
                                          bVar24 = -1 < CpuChannel->Enabled;
                                          if (bVar24) {
                                            FCpuProfilerTrace::GetOrCreateSpecId
                                                      (&__CpuProfilerEventSpecId471,
                                                       "IsWorldStreamingComplete",
                                                                                                              
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                                                  ,0x1d7);
                                            FCpuProfilerTrace::OutputBeginEvent
                                                      (__CpuProfilerEventSpecId471);
                                          }
                                          pTVar16 = local_898;
                                          if ((local_898->ArrayNum < 1) &&
                                             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                                                 (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar26)) {
                                            pcVar7 = (code *)swi(3);
                                            (*pcVar7)();
                                            return;
                                          }
                                          uVar20 = local_868._s_0.Z;
                                          uVar19 = local_868._s_0.Y;
                                          uVar18 = local_868._s_0.X;
                                          pTVar17 = local_898;
                                          *(float *)((pTVar16->AllocatorInstance).Data + 0x18) =
                                               fVar74;
                                          if ((local_898->ArrayNum < 1) &&
                                             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                                                 (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar26)) {
                                            pcVar7 = (code *)swi(3);
                                            (*pcVar7)();
                                            return;
                                          }
                                          pFVar6 = (pTVar17->AllocatorInstance).Data;
                                          *(undefined8 *)pFVar6 = uVar18;
                                          *(undefined8 *)(pFVar6 + 8) = uVar19;
                                          *(undefined8 *)(pFVar6 + 0x10) = uVar20;
                                          local_9d5 = UWorldPartitionSubsystem::IsStreamingCompleted
                                                                (local_8a0,Activated,local_898,false
                                                                );
                                          local_580 = &local_788;
                                          local_578 = &local_9d5;
                                          TSet<TTuple<TTuple<UE::Math::TVector<double>,float>,bool>,TDefaultMapHashableKeyFuncs<TTuple<UE::Math::TVector<double>,float>,bool,0>,FDefaultSetAllocator>
                                          ::
                                          Emplace<TPairInitializer<TTuple<UE::Math::TVector<double>,float>_const_&,bool_const_&>_>
                                                    (local_890,
                                                     (
                                                  TPairInitializer<TTuple<UE::Math::TVector<double>,float>_const_&,bool_const_&>
                                                  *)(local_6b0 + 4),(bool *)&local_580);
                                          if ((local_9d5 == '\0') && (5 < (byte)LogPCG._0_1_)) {
                                            UE::Logging::Private::BasicLog<6>
                                                      (&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                                          }
                                          cVar27 = local_9d5;
                                          if (bVar24) {
                                            FCpuProfilerTrace::OutputEndEvent();
                                          }
LAB_149f6786c:
                                          if (cVar27 == '\0') {
                                            if (6 < (byte)LogPCG._0_1_) {
                                              UE::Logging::Private::BasicLog<7>
                                                        ((FStaticBasicLogRecord *)
                                                         &PTR_u_Cell__u___d___d_152013558,
                                                         (FLogCategoryBase *)&LogPCG);
                                            }
LAB_149f67a3d:
                                            local_9d3 = '\x01';
                                            goto LAB_149f67a42;
                                          }
                                        }
                                        else {
                                          uVar29 = 0;
                                          if ((int)uVar58 < local_238.ArrayNum) {
                                            uVar29 = uVar59;
                                          }
                                          if ((uVar29 == 0) &&
                                             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                                                 (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar24)) {
                                            pcVar7 = (code *)swi(3);
                                            (*pcVar7)();
                                            return;
                                          }
                                          FVar47 = (ForElementType<unsigned_int>)&local_238;
                                          if (local_238.AllocatorInstance.SecondaryData !=
                                              (ForElementType<unsigned_int>)0x0) {
                                            FVar47 = local_238.AllocatorInstance.SecondaryData;
                                          }
                                          uVar29 = *(uint *)((longlong)FVar47 +
                                                            (longlong)local_9b0 * 4);
                                          uVar52 = PCGHiGenGrid::UninitializedGridSize();
                                          if (uVar29 != uVar52) {
                                            uVar29 = 0;
                                            if ((int)uVar58 < local_238.ArrayNum) {
                                              uVar29 = uVar59;
                                            }
                                            if ((uVar29 == 0) &&
                                               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                                                   (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar24)) {
                                              pcVar7 = (code *)swi(3);
                                              (*pcVar7)();
                                              return;
                                            }
                                            uStack_6bc = 0;
                                            FVar47 = (ForElementType<unsigned_int>)&local_238;
                                            if (local_238.AllocatorInstance.SecondaryData !=
                                                (ForElementType<unsigned_int>)0x0) {
                                              FVar47 = local_238.AllocatorInstance.SecondaryData;
                                            }
                                            uVar59 = *(uint *)((longlong)FVar47 +
                                                              (longlong)local_9b0 * 4);
                                            local_6b4 = 0;
                                            local_6c4 = (ulonglong)
                                                        CONCAT24(CONCAT11(1,local_968.bUse2DGrid),
                                                                 local_968.GridSize);
                                            UPCGActorHelpers::GetCellCenter
                                                      (&local_308,(TVector<double> *)&local_868._s_0
                                                       ,uVar59,local_968.bUse2DGrid);
                                            bVar24 = `FPCGRuntimeGenScheduler::
                                                     TickQueueComponentsForGeneration'::__l2::
                                                     <lambda_2>::operator()
                                                               (&local_8a0,&local_308,(float)uVar59)
                                            ;
                                            if (!bVar24) {
                                              if (6 < (byte)LogPCG._0_1_) {
                                                UE::Logging::Private::BasicLog<7>
                                                          (&::LOG_Static,(FLogCategoryBase *)&LogPCG
                                                          );
                                              }
                                              goto LAB_149f67a3d;
                                            }
                                          }
                                        }
                                        uStack_670 = 0;
                                        local_668 = 0;
                                        local_678._0_5_ =
                                             CONCAT14(local_968.bUse2DGrid,local_968.GridSize);
                                        local_678 = (ulonglong)CONCAT15(1,(undefined5)local_678);
                                        dVar63 = (double)(**(code **)(local_940->_padding_ + 0x2b0))
                                                                   (local_940,local_8a8,&local_1e8);
                                        local_928 = dVar63;
                                        if (__real_3ff0000000000000 <= dVar63) {
                                          local_928 = __real_3ff0000000000000;
                                        }
                                        if (local_928 <= 0.0) {
                                          local_928 = 0.0;
                                        }
                                        if ((dVar63 != local_928) && (2 < (byte)LogPCG._0_1_)) {
                                          UE::Logging::Private::BasicLog<3>
                                                    (&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                                        }
                                        local_928 = local_928 + (double)local_968.GridSize;
                                        uVar59 = ::GetTypeHash(&local_968);
                                        if (*(int *)&(local_910->Elements).field_0x8 !=
                                            *(int *)&(local_910->Elements).field_0x34) {
                                          FVar5 = (local_910->Hash).SecondaryData;
                                          FVar46 = (ForElementType<FSetElementId>)&local_910->Hash;
                                          if (FVar5 != (ForElementType<FSetElementId>)0x0) {
                                            FVar46 = FVar5;
                                          }
                                          iVar28 = *(int *)((longlong)FVar46 +
                                                           (ulonglong)
                                                           (local_910->HashSize - 1U & uVar59) * 4);
                                          if (iVar28 != -1) {
                                            do {
                                              pcVar39 = (char *)((longlong)iVar28 * 0x38 +
                                                                *(longlong *)&local_910->Elements);
                                              if (((((*(uint *)(pcVar39 + 4) == local_968.GridSize)
                                                    && (*(int *)(pcVar39 + 8) ==
                                                        local_968.GridCoords.field0_0x0._s_0.X)) &&
                                                   (*(int *)(pcVar39 + 0xc) ==
                                                    local_968.GridCoords.field0_0x0._s_0.Y)) &&
                                                  ((*(int *)(pcVar39 + 0x10) ==
                                                    local_968.GridCoords.field0_0x0._s_0.Z &&
                                                   ((bool)*pcVar39 == local_968.bUse2DGrid)))) &&
                                                 ((*(int *)(pcVar39 + 0x14) ==
                                                   local_968.OriginalComponent.ObjectKey.ObjectIndex
                                                  && (*(int *)(pcVar39 + 0x18) ==
                                                      local_968.OriginalComponent.ObjectKey.
                                                      ObjectSerialNumber)))) {
                                                if (iVar28 != -1) {
                                                  pdVar40 = (double *)(pcVar39 + 0x28);
                                                  if (pcVar39 == (char *)0x0) {
                                                    pdVar40 = (double *)0x0;
                                                  }
                                                  if (pdVar40 != (double *)0x0) {
                                                    uVar65 = (undefined4)__real_3fe0000000000000;
                                                    uVar66 = (undefined4)
                                                             ((ulonglong)__real_3fe0000000000000 >>
                                                             0x20);
                                                    if (*pdVar40 <= local_928 &&
                                                        local_928 != *pdVar40) {
                                                      *pdVar40 = local_928;
                                                    }
                                                    goto LAB_149f67a53;
                                                  }
                                                }
                                                break;
                                              }
                                              iVar28 = *(int *)(pcVar39 + 0x30);
                                            } while (iVar28 != -1);
                                          }
                                        }
                                        local_5a0 = &local_968;
                                        local_598 = &local_928;
                                        TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>
                                        ::
                                        Emplace<TPairInitializer<FPCGRuntimeGenScheduler::FGridGenerationKey_const_&,double_const_&>_>
                                                  (local_910,
                                                   (
                                                  TPairInitializer<FPCGRuntimeGenScheduler::FGridGenerationKey_const_&,double_const_&>
                                                  *)local_6b0,(bool *)&local_5a0);
                                      }
                                    }
LAB_149f67a42:
                                    uVar65 = (undefined4)__real_3fe0000000000000;
                                    uVar66 = (undefined4)
                                             ((ulonglong)__real_3fe0000000000000 >> 0x20);
                                  }
LAB_149f67a53:
                                  iVar53 = iVar53 + 1;
                                  pFVar48 = local_9b8;
                                  uVar59 = local_9cc;
                                  iVar60 = local_9c0;
                                  iVar28 = local_8cc;
                                  uVar70 = local_900._s_0.X;
                                  uVar29 = local_9bc;
                                  dVar63 = local_850;
                                  iVar23 = iStack_714;
                                  uVar72 = local_900._s_0.Y;
                                } while (iVar53 <= local_900._s_0.X + local_8cc);
                              }
                              local_9d0 = local_9d0 + 1;
                              pFVar48 = local_9b8;
                              uVar69 = local_900._s_0.Z;
                            } while (local_9d0 <= uVar72 + iVar28);
                          }
                          iVar60 = iVar60 + 1;
                          pFVar48 = local_9b8;
                        } while (iVar60 <= local_8b0 + uVar69);
                        uVar67 = (undefined4)__real_428ffffffffff800;
                        uVar68 = (undefined4)((ulonglong)__real_428ffffffffff800 >> 0x20);
                        pUVar56 = local_9b0;
                        local_9c0 = iVar60;
                      }
                      local_9b0 = (UPCGComponent *)((longlong)&pUVar56->_padding_ + 1);
                      local_908 = (ForElementType<unsigned_int>)((longlong)local_908 + 4);
                      uVar72 = (undefined4)__real_bfe0000000000000;
                      uVar73 = (undefined4)((ulonglong)__real_bfe0000000000000 >> 0x20);
                      uVar58 = uVar58 + 1;
                      pFVar48 = local_9b8;
                      fVar74 = __real_3f000000;
                    } while ((int)uVar58 < local_288.ArrayNum);
                    uVar62 = SUB84(local_888,0);
                    uVar64 = (undefined4)((ulonglong)local_888 >> 0x20);
                    uVar69 = (undefined4)__real_4059000000000000;
                    uVar70 = (undefined4)((ulonglong)__real_4059000000000000 >> 0x20);
                    fVar71 = __real_3f800000;
                  }
                  if ((local_9d4 != '\0') && (local_9d3 == '\0')) goto LAB_149f67b4c;
                }
                else if (cVar27 != '\0') {
LAB_149f67b4c:
                  PCGRuntimeGenChangeDetection::FDetector::OnCellsScanned
                            (&local_918->ChangeDetector,(FDetectionInputs *)local_388);
                }
              }
            }
LAB_149f67b63:
            TStack_628.UnvisitedBitMask = TStack_628.UnvisitedBitMask & ~TStack_628._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_628);
            pUVar55 = local_940;
          }
          if (local_238.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_238.AllocatorInstance.SecondaryData);
          }
          param_1 = local_9b8;
          if (local_288.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_288.AllocatorInstance.SecondaryData);
            param_1 = local_9b8;
          }
        }
      }
      if (cVar49 != '\0') goto LAB_149f65fcc;
    }
    TStack_5f8.UnvisitedBitMask = TStack_5f8.UnvisitedBitMask & ~TStack_5f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5f8);
    cVar27 = local_9d7;
  }
  local_768._padding_._4_4_ = 1;
  pTVar57 = &param_1->AllNonPartitionedComponents;
  local_768._padding_._0_4_ = 0;
  puVar1 = &(param_1->AllNonPartitionedComponents).Elements.field_0x10;
  local_768.UnvisitedBitMask = 0xffffffff;
  local_768.CurrentBitIndex = 0;
  local_768.BaseBitIndex = 0;
  local_888 = pTVar57;
  local_768.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&(param_1->AllNonPartitionedComponents).Elements.field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_768);
  }
  uVar58 = *(uint *)&(param_1->AllNonPartitionedComponents).Elements.field_0x28;
  lStack_9a0 = CONCAT44(local_768._padding_._4_4_,(undefined4)local_768._padding_);
  bVar41 = (byte)uVar58 & 0x1f;
  local_980 = *(int *)&(param_1->AllNonPartitionedComponents).Elements.field_0x8 -
              *(int *)&(param_1->AllNonPartitionedComponents).Elements.field_0x34;
  lStack_990._4_4_ = local_768.CurrentBitIndex;
  lStack_990._0_4_ = local_768.UnvisitedBitMask;
  lStack_988._4_4_ = local_768._28_4_;
  lStack_988._0_4_ = local_768.BaseBitIndex;
  local_7e8._padding_._0_4_ = (int)uVar58 >> 5;
  local_7e8._padding_._4_4_ = 1 << bVar41;
  local_7e8.UnvisitedBitMask = -1 << bVar41;
  pTStack_998 = local_768.Array;
  local_7e8.BaseBitIndex = uVar58 & 0xffffffe0;
  uStack_5a8 = CONCAT44(uStack_97c,local_980);
  TStack_5c8.Array = local_768.Array;
  local_9a8 = (TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator>
               *)pTVar57;
  local_7e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_7e8.CurrentBitIndex = uVar58;
  local_5d0 = pTVar57;
  TStack_5c8._padding_ = lStack_9a0;
  TStack_5c8._16_8_ = lStack_990;
  TStack_5c8._24_8_ = lStack_988;
  if (((int)uVar58 < 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar24)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (uVar58 != *(uint *)&(param_1->AllNonPartitionedComponents).Elements.field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_7e8);
  }
  pTVar21 = local_7e8.Array;
  lStack_990 = CONCAT44(local_7e8.CurrentBitIndex,local_7e8.UnvisitedBitMask);
  lStack_988 = CONCAT44(local_7e8._28_4_,local_7e8.BaseBitIndex);
  lStack_9a0 = CONCAT44(local_7e8._padding_._4_4_,(int)local_7e8._padding_);
  pTStack_998 = local_7e8.Array;
  local_9cc = local_7e8.CurrentBitIndex;
  uVar58 = local_7e8.CurrentBitIndex;
  do {
    pTVar22 = local_5d0;
    if (*(int *)&(local_5d0->Elements).field_0x8 - *(int *)&(local_5d0->Elements).field_0x34 !=
        (int)uStack_5a8) {
      local_9c2[0] = 0;
      `TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_9c2);
    }
    if (((TStack_5c8.CurrentBitIndex == uVar58) && (TStack_5c8.Array == pTVar21)) &&
       (pTVar22 == pTVar57)) {
      DestructItems<FWorldPartitionStreamingQuerySource,int>
                ((FWorldPartitionStreamingQuerySource *)local_978.AllocatorInstance.Data,
                 local_978.ArrayNum);
      cVar27 = local_9d6;
      if ((FWorldPartitionStreamingQuerySource *)local_978.AllocatorInstance.Data !=
          (FWorldPartitionStreamingQuerySource *)0x0) {
        FMemory::Free(local_978.AllocatorInstance.Data);
      }
      if (cVar27 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    pUVar61 = *(UPCGComponent **)
               (*(longlong *)&pTVar22->Elements + (longlong)TStack_5c8.CurrentBitIndex * 0x10);
    bVar24 = -1 < CpuChannel->Enabled;
    if (bVar24) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId769,
                 "FPCGRuntimeGenScheduler::CollectNonPartitionedComponents",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                 ,0x301);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId769);
    }
    if (pUVar61 == (UPCGComponent *)0x0) {
      bVar26 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4830013997950436099>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                          ,0x303,"OriginalComponent");
      if (bVar26) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      pUVar37 = UPCGComponent::GetGraph(pUVar61);
      if ((pUVar37 != (UPCGGraph *)0x0) && (pUVar61->bActivated != false)) {
        local_830.GridSize = PCGHiGenGrid::UnboundedGridSize();
        local_830.bUse2DGrid = false;
        local_830.GridCoords.field0_0x0._0_8_ = 0;
        local_830.GridCoords.field0_0x0._s_0.Z = 0;
        FObjectKey::FObjectKey(&local_830.OriginalComponent.ObjectKey,(UObject *)pUVar61);
        local_830.CachedLocalComponent.WeakPtr.ObjectIndex = 0;
        local_830.CachedLocalComponent.WeakPtr.ObjectSerialNumber = 0;
        local_690 = 0;
        FWeakObjectPtr::operator=(&local_830.CachedLocalComponent.WeakPtr,(FObjectPtr)&local_690);
        local_830.bUse2DGrid = UPCGComponent::Use2DGrid(pUVar61);
        uVar59 = ::GetTypeHash(&local_830);
        iVar28 = TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FPCGRuntimeGenScheduler::FGridGenerationKey>
                           (&param_1->GeneratedComponents,uVar59,&local_830);
        if ((iVar28 == -1) &&
           (pUVar55 = (pUVar61->SchedulingPolicy).field0_0x0.DebugPtr,
           pUVar61->GenerationTrigger == GenerateAtRuntime)) {
          if (pUVar55 == (UPCGSchedulingPolicyBase *)0x0) {
            bVar26 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4830013997950436115>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                                ,0x313,"Policy");
            if (bVar26) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          else {
            UPCGComponent::GetGridBounds(pUVar61,(TBox<double> *)&local_178._s_0);
            if (local_9d7 != '\0') {
              uVar59 = PCGHiGenGrid::UnboundedGridSize();
              bVar26 = UPCGSchedulingPolicyBase::DoesGridDependOnWorldStreaming(pUVar55,uVar59);
              if (bVar26) {
                local_510._s_0.X =
                     (local_160._s_0.X + local_178._s_0.X) * (double)CONCAT44(uVar66,uVar65);
                dVar8 = local_160._s_0.Y - local_178._s_0.Y;
                if (local_160._s_0.Y - local_178._s_0.Y <= local_160._s_0.X - local_178._s_0.X) {
                  dVar8 = local_160._s_0.X - local_178._s_0.X;
                }
                local_510._s_0.Y =
                     (local_160._s_0.Y + local_178._s_0.Y) * (double)CONCAT44(uVar66,uVar65);
                local_510._s_0.Z =
                     (local_178._s_0.Z + local_160._s_0.Z) * (double)CONCAT44(uVar66,uVar65);
                bVar26 = `FPCGRuntimeGenScheduler::TickQueueComponentsForGeneration'::__l2::
                         <lambda_2>::operator()
                                   (&local_8a0,(TVector<double> *)&local_510._s_0,(float)dVar8);
                if (!bVar26) {
                  if (6 < (byte)LogPCG._0_1_) {
                    lVar54 = pUVar61->_padding_;
                    if (*(int *)(lVar54 + 0x1f0) < 2) {
                      local_688 = *(FName *)(lVar54 + 0x18);
                      ::FName::ToString(&local_688,&local_7f8);
                    }
                    else {
                      ::FString::FString(&local_7f8,(FString *)(lVar54 + 0x1e8));
                    }
                    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                    if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
                    }
                  }
                  goto joined_r0x000149f6847c;
                }
              }
            }
            dVar8 = UPCGComponent::GetGenerationRadiusFromGrid(pUVar61,Unbounded);
            pTVar4 = param_1->GenSources;
            local_748._padding_._0_4_ = 0;
            local_748._padding_._4_4_ = 1;
            local_748.UnvisitedBitMask = 0xffffffff;
            puVar1 = &(pTVar4->Elements).field_0x10;
            local_748.CurrentBitIndex = 0;
            local_748.BaseBitIndex = 0;
            local_748.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
            if (*(int *)&(pTVar4->Elements).field_0x28 != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_748);
            }
            lStack_9a0 = CONCAT44(local_748._padding_._4_4_,(undefined4)local_748._padding_);
            lStack_990 = CONCAT44(local_748.CurrentBitIndex,local_748.UnvisitedBitMask);
            lStack_988 = CONCAT44(local_748._28_4_,local_748.BaseBitIndex);
            local_980 = *(int *)&(pTVar4->Elements).field_0x8 -
                        *(int *)&(pTVar4->Elements).field_0x34;
            pTStack_998 = local_748.Array;
            uStack_638._4_4_ = uStack_97c;
            uStack_638._0_4_ = local_980;
            local_650 = local_748.Array;
            local_9a8 = pTVar4;
            local_660._0_8_ = pTVar4;
            unique0x10005d31 = lStack_9a0;
            uStack_648 = lStack_990;
            local_640 = lStack_988;
            pTVar36 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                      TConstSetBitIterator<FDefaultBitArrayAllocator>
                                (&local_2a8,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                                 *(int *)&(pTVar4->Elements).field_0x28);
            lStack_9a0 = pTVar36->_padding_;
            pTStack_998 = pTVar36->Array;
            lStack_990._0_4_ = pTVar36->UnvisitedBitMask;
            lStack_990._4_4_ = pTVar36->CurrentBitIndex;
            lStack_988 = *(longlong *)&pTVar36->BaseBitIndex;
            local_980 = *(int *)&(pTVar4->Elements).field_0x8 -
                        *(int *)&(pTVar4->Elements).field_0x34;
            local_3b8._44_4_ = uStack_97c;
            local_3b8.InitialNum = local_980;
            local_9a8 = pTVar4;
            local_3b8._padding_ = (longlong)pTVar4;
            local_3b8._padding_ = lStack_9a0;
            local_3b8._padding_ = (longlong)pTStack_998;
            local_3b8._padding_ = lStack_990;
            local_3b8._padding_ = lStack_988;
            bVar26 = TSparseArray<TSparseSetElement<IPCGGenSourceBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForConstIterator::operator!=
                               ((TRangedForConstIterator *)local_660,&local_3b8);
            param_1 = local_9b8;
            uVar58 = local_9cc;
            if (bVar26) {
              do {
                pIVar50 = *(IPCGGenSourceBase **)
                           (*(longlong *)
                             (TSparseArray<TSparseSetElement<IPCGGenSourceBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_660._0_8_ + (longlong)uStack_648._4_4_ * 0x10);
                (**(code **)((longlong)*pIVar50 + 0x18))(pIVar50,&local_498);
                if (local_480 != '\0') {
                  local_4d0._s_0.X = local_498;
                  local_4d0._s_0.Y = dStack_490;
                  local_4d0._s_0.Z = local_488;
                  bVar26 = UPCGComponent::Use2DGrid(pUVar61);
                  if (bVar26) {
                    local_4d0._s_0.Z = local_178._s_0.Z;
                  }
                  dVar63 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                                     ((TVector<double> *)&local_178._s_0,
                                      (TVector<double> *)&local_160._s_0,
                                      (TVector<double> *)&local_4d0._s_0);
                  if ((dVar63 <= dVar8 * dVar8) &&
                     (cVar27 = (**(code **)(pUVar55->_padding_ + 0x2b8))
                                         (pUVar55,pIVar50,&local_178,0), cVar27 != '\0')) {
                    local_83c._0_8_ = 0;
                    local_83c._s_0.Z = 0;
                    uVar58 = PCGHiGenGrid::UnboundedGridSize();
                    FGridGenerationKey::FGridGenerationKey
                              (&local_2f0,uVar58,(TIntVector3<int> *)&local_83c._s_0,pUVar61);
                    `FPCGRuntimeGenScheduler::TickQueueComponentsForGeneration'::__l2::<lambda_1>::
                    operator()(&local_910,&local_2f0,pIVar50,pUVar55,(TBox<double> *)&local_178._s_0
                               ,false);
                  }
                }
                uStack_648 = CONCAT44(uStack_648._4_4_,(uint)uStack_648 & ~uStack_654);
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_660 + 8));
                bVar26 = TSparseArray<TSparseSetElement<IPCGGenSourceBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         ::TRangedForConstIterator::operator!=
                                   ((TRangedForConstIterator *)local_660,&local_3b8);
                param_1 = local_9b8;
                pTVar57 = local_888;
                uVar58 = local_9cc;
              } while (bVar26);
            }
          }
        }
      }
    }
joined_r0x000149f6847c:
    if (bVar24) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    TStack_5c8.UnvisitedBitMask = TStack_5c8.UnvisitedBitMask & ~TStack_5c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5c8);
  } while( true );
}

// TickRequestVirtualTexturePriming @ 149f68530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
FPCGRuntimeGenScheduler::TickRequestVirtualTexturePriming
          (FPCGRuntimeGenScheduler *this,
          TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator>
          *param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  EPCGHiGenGrid EVar4;
  UWorld *pUVar5;
  FScriptContainerElement *pFVar6;
  UPCGGraphInstance *pUVar7;
  UScriptStruct *pUVar8;
  uint *puVar9;
  code *pcVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  float fVar14;
  TConsoleVariableData<bool> *pTVar15;
  FPCGRuntimeGenScheduler *pFVar16;
  ForElementType<unsigned_int> FVar17;
  TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator> *pTVar18;
  URuntimeVirtualTextureComponent *this_00;
  double dVar19;
  double dVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar27;
  UClass *pUVar28;
  UWorld *pUVar29;
  TArray<URuntimeVirtualTextureComponent_*,TSizedDefaultAllocator<32>_> *pTVar30;
  FScriptContainerElement *pFVar31;
  UPropertyBag *pUVar32;
  UPackage *pUVar33;
  UScriptStruct *pUVar34;
  UObject *pUVar35;
  byte bVar36;
  int iVar37;
  ulonglong uVar38;
  bool **ppbVar39;
  ulonglong uVar40;
  longlong lVar41;
  longlong *plVar42;
  uint uVar43;
  int iVar44;
  ForElementType<unsigned_int> FVar45;
  uint *puVar46;
  FPropertyBagPropertyDesc *pFVar47;
  longlong *plVar48;
  FPropertyBagPropertyDesc *pFVar49;
  UPCGComponent *pUVar50;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar51;
  uint uVar52;
  ForAnyElementType FVar53;
  bool bVar54;
  TBitArray<FDefaultBitArrayAllocator> *pTVar55;
  undefined4 uVar56;
  float fVar57;
  undefined4 uVar58;
  undefined1 auStackY_688 [32];
  ForAnyElementType local_630;
  undefined8 local_628;
  undefined1 local_620;
  undefined1 local_61f;
  undefined1 local_61e;
  undefined1 local_61d;
  undefined1 local_61c;
  undefined1 local_61b [3];
  FScriptContainerElement *local_618;
  ForAnyElementType local_610;
  undefined8 local_608;
  undefined1 local_600;
  longlong *local_5f8;
  longlong local_5f0;
  longlong local_5e8;
  TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator> *local_5e0;
  undefined8 uStack_5d8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  int local_5b8;
  undefined4 uStack_5b4;
  uint local_5b0;
  uint local_5ac;
  uint local_5a8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_5a0;
  UPCGComponent *local_590;
  FPCGRuntimeGenScheduler *local_588;
  undefined1 local_580 [8];
  FName local_578;
  FName FStack_570;
  FUtf8String local_568;
  undefined8 local_558;
  ForElementType<unsigned_int> local_550;
  TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator> *local_548;
  longlong *local_540;
  TPersistentObjectPtr<FSoftObjectPath> *local_538;
  longlong *local_530;
  FScriptContainerElement *local_528;
  FScriptContainerElement *local_520;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_518;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4f8;
  int local_4d8;
  int local_4d4;
  longlong *local_4d0;
  FScriptContainerElement *local_4c8;
  UObject *local_4c0;
  int local_4b8;
  uchar *local_4b0;
  int local_4a8;
  URuntimeVirtualTextureComponent *local_4a0;
  longlong *local_498;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_490;
  undefined8 uStack_470;
  undefined1 local_468 [12];
  uint uStack_45c;
  TBitArray<FDefaultBitArrayAllocator> *local_458;
  undefined8 uStack_450;
  longlong local_448;
  undefined8 uStack_440;
  TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator> *local_438;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_430;
  undefined8 uStack_410;
  FWeakObjectPtr local_408;
  FSoftObjectPath local_400;
  TVector<double>_u_0 local_3e0;
  TVector<double>_u_0 local_3c8;
  undefined1 local_3b0 [24];
  longlong lStack_398;
  longlong lStack_390;
  int local_388;
  undefined4 uStack_384;
  undefined1 local_380 [40];
  int local_358;
  undefined4 uStack_354;
  undefined1 local_350 [8];
  FSoftObjectPath local_348;
  FWeakObjectPtr local_328;
  FSoftObjectPath local_320;
  double local_300;
  double dStack_2f8;
  TBitArray<FDefaultBitArrayAllocator> *local_2f0;
  char local_2e8;
  TVector<double>_u_0 local_2e0;
  undefined1 local_2c8 [16];
  double local_2b8;
  double local_2b0;
  TRangedForIterator local_2a8;
  FWeakObjectPtr local_278;
  FSoftObjectPath local_270;
  undefined4 local_234;
  TVector<double>_u_0 local_230;
  double local_218;
  double local_210;
  double local_208;
  uchar *local_1f8;
  char local_1f0;
  TValueOrError<FStructView,EPropertyBagResult> local_1e8;
  TSet<TTuple<TSoftObjectPtr<URuntimeVirtualTexture>,TArray<URuntimeVirtualTextureComponent_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<URuntimeVirtualTexture>,TArray<URuntimeVirtualTextureComponent_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_1c8;
  undefined1 local_178 [40];
  int local_150;
  int local_144;
  ForElementType<FSetElementId> local_138;
  int local_130;
  undefined1 local_128 [40];
  int local_100;
  int local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_688;
  bVar54 = -1 < CpuChannel->Enabled;
  local_588 = this;
  local_548 = param_1;
  if (bVar54) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1198,
               "FPCGRuntimeGenScheduler::TickRequestVirtualTexturePriming",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
               ,0x4ae);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1198);
  }
  if ((this->ActorAndComponentMapping == (FPCGActorAndComponentMapping *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActorAndComponentMapping",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                          ,0x4b0,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_630.Data = (FScriptContainerElement *)0x0;
  local_628 = 0;
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1205,"GatherOriginalComponents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
               ,0x4b5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1205);
  }
  FPCGActorAndComponentMapping::GetAllRegisteredPartitionedComponents
            (this->ActorAndComponentMapping,
             (TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *)
             local_178);
  FPCGActorAndComponentMapping::GetAllRegisteredNonPartitionedComponents
            (this->ActorAndComponentMapping,
             (TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *)
             local_128);
  uVar43 = ((local_128._8_4_ - local_f4) - local_144) + local_178._8_4_;
  if ((int)uVar43 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar43);
  }
  if (local_628._4_4_ < (int)uVar43) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar43,&local_630,(uint)local_628,(int *)((longlong)&local_628 + 4));
  }
  local_518.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
  local_518._padding_._4_4_ = 1;
  local_518._padding_._0_4_ = 0;
  local_518.UnvisitedBitMask = 0xffffffff;
  local_518.CurrentBitIndex = 0;
  local_518.BaseBitIndex = 0;
  if (local_150 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_518);
  }
  unique0x1000178f =
       (TBitArray<FDefaultBitArrayAllocator> *)
       CONCAT44(local_518._padding_._4_4_,(undefined4)local_518._padding_);
  local_468._0_8_ = local_178;
  uStack_450 = CONCAT44(local_518.CurrentBitIndex,local_518.UnvisitedBitMask);
  local_448 = CONCAT44(local_518._28_4_,local_518.BaseBitIndex);
  local_388 = local_178._8_4_ - local_144;
  local_3b0._16_8_ = local_518.Array;
  uStack_440._4_4_ = uStack_384;
  uStack_440._0_4_ = local_388;
  local_458 = local_518.Array;
  local_3b0._0_8_ = local_468._0_8_;
  local_3b0._8_8_ = unique0x1000178f;
  lStack_398 = uStack_450;
  lStack_390 = local_448;
  pTVar27 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_3b0,
                       (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10),local_150);
  local_5e0 = (TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator>
               *)local_178;
  uStack_5d8 = pTVar27->_padding_;
  pTStack_5d0 = pTVar27->Array;
  uStack_5c8._0_4_ = pTVar27->UnvisitedBitMask;
  uStack_5c8._4_4_ = pTVar27->CurrentBitIndex;
  uStack_5c0 = *(longlong *)&pTVar27->BaseBitIndex;
  local_5b8 = local_178._8_4_ - local_144;
  local_2a8._44_4_ = uStack_5b4;
  local_2a8.InitialNum = local_5b8;
  local_2a8._padding_ = (longlong)local_5e0;
  local_2a8._padding_ = uStack_5d8;
  local_2a8._padding_ = (longlong)pTStack_5d0;
  local_2a8._padding_ = uStack_5c8;
  local_2a8._padding_ = uStack_5c0;
  bVar22 = TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_468,&local_2a8);
  if (bVar22) {
    do {
      lVar41 = *(longlong *)(*(longlong *)local_468._0_8_ + (longlong)uStack_450._4_4_ * 0x10);
      if ((((lVar41 != 0) && (*(char *)(lVar41 + 0xcc) != '\0')) &&
          (*(char *)(lVar41 + 0xce) == '\x02')) && (*(longlong *)(lVar41 + 600) != 0)) {
        local_5f0 = lVar41;
        if (((local_630.Data <= (FScriptContainerElement *)&local_5f0) &&
            ((FScriptContainerElement *)&local_5f0 < local_630.Data + (longlong)local_628._4_4_ * 8)
            ) && (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar22)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar24 = (uint)local_628;
        if ((uint)local_628 == local_628._4_4_) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_630,(int *)((longlong)&local_628 + 4));
        }
        local_628 = CONCAT44(local_628._4_4_,iVar24 + 1);
        *(longlong *)(local_630.Data + (longlong)iVar24 * 8) = local_5f0;
      }
      uStack_450 = CONCAT44(uStack_450._4_4_,(uint)uStack_450 & ~uStack_45c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_468 + 8));
      bVar22 = TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_468,&local_2a8);
    } while (bVar22);
  }
  local_4f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
  local_4f8._padding_._0_4_ = 0;
  local_4f8._padding_._4_4_ = 1;
  local_4f8.UnvisitedBitMask = 0xffffffff;
  local_4f8.CurrentBitIndex = 0;
  local_4f8.BaseBitIndex = 0;
  if (local_100 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4f8);
  }
  TStack_490._padding_ = CONCAT44(local_4f8._padding_._4_4_,(undefined4)local_4f8._padding_);
  local_498 = (longlong *)local_128;
  TStack_490.CurrentBitIndex = local_4f8.CurrentBitIndex;
  TStack_490.UnvisitedBitMask = local_4f8.UnvisitedBitMask;
  TStack_490._28_4_ = local_4f8._28_4_;
  TStack_490.BaseBitIndex = local_4f8.BaseBitIndex;
  local_358 = local_128._8_4_ - local_f4;
  local_380._16_8_ = local_4f8.Array;
  uStack_470 = CONCAT44(uStack_354,local_358);
  TStack_490.Array = local_4f8.Array;
  local_380._0_8_ = local_498;
  local_380._8_8_ = TStack_490._padding_;
  local_380._24_8_ = TStack_490._16_8_;
  local_380._32_8_ = TStack_490._24_8_;
  pTVar27 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_380,
                       (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),local_100);
  uStack_5d8 = pTVar27->_padding_;
  pTVar55 = pTVar27->Array;
  uVar12._0_4_ = pTVar27->UnvisitedBitMask;
  uVar12._4_4_ = pTVar27->CurrentBitIndex;
  uStack_5c0._0_4_ = pTVar27->BaseBitIndex;
  uStack_5c0._4_4_ = *(undefined4 *)&pTVar27->field_0x1c;
  pTStack_5d0 = pTVar55;
  uStack_5c8 = uVar12;
  while( true ) {
    plVar48 = local_498;
    if ((int)local_498[1] - *(int *)((longlong)local_498 + 0x34) != (int)uStack_470) {
      local_620 = 0;
      `TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_620);
    }
    if (((TStack_490.CurrentBitIndex == uVar12._4_4_) && (TStack_490.Array == pTVar55)) &&
       (plVar48 == (longlong *)local_128)) break;
    lVar41 = *(longlong *)(*plVar48 + (longlong)TStack_490.CurrentBitIndex * 0x10);
    if (((lVar41 != 0) && (*(char *)(lVar41 + 0xcc) != '\0')) &&
       ((*(char *)(lVar41 + 0xce) == '\x02' && (*(longlong *)(lVar41 + 600) != 0)))) {
      local_5e8 = lVar41;
      if (((local_630.Data <= (FScriptContainerElement *)&local_5e8) &&
          ((FScriptContainerElement *)&local_5e8 < local_630.Data + (longlong)local_628._4_4_ * 8))
         && (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar22)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar24 = (uint)local_628;
      if ((uint)local_628 == local_628._4_4_) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_630,(int *)((longlong)&local_628 + 4));
      }
      local_628 = CONCAT44(local_628._4_4_,iVar24 + 1);
      *(longlong *)(local_630.Data + (longlong)iVar24 * 8) = local_5e8;
    }
    TStack_490.UnvisitedBitMask = TStack_490.UnvisitedBitMask & ~TStack_490._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_490);
  }
  local_e0 = 0;
  if (local_e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_128);
  local_130 = 0;
  if (local_138 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_138);
  }
  TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_178);
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((uint)local_628 != 0) {
    local_1c8.Elements._0_8_ = 0;
    local_1c8.Elements._8_8_ = 0;
    local_1c8.Elements._32_8_ = 0;
    local_1c8.Elements._40_4_ = 0;
    local_1c8.Elements._44_4_ = 0x80;
    local_1c8.Elements._48_4_ = 0xffffffff;
    local_1c8.Elements._52_4_ = 0;
    local_1c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_1c8.HashSize = 0;
    bVar21 = -1 < CpuChannel->Enabled;
    if (bVar21) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1242,"FindVirtualTextureComponents",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                 ,0x4da);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1242);
    }
    local_5a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5a0.ArrayNum = 0;
    local_5a0.ArrayMax = 0;
    pUVar28 = Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister();
    GetObjectsOfClass(pUVar28,&local_5a0,false,RF_ClassDefaultObject,Garbage);
    pFVar16 = local_588;
    iVar24 = local_5a0.ArrayNum;
    pFVar31 = local_5a0.AllocatorInstance.Data + (longlong)local_5a0.ArrayNum * 8;
    FVar53.Data = local_5a0.AllocatorInstance.Data;
    while( true ) {
      if (local_5a0.ArrayNum != iVar24) {
        local_61f = 0;
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_61f);
      }
      if (FVar53.Data == pFVar31) break;
      plVar48 = *(longlong **)FVar53.Data;
      if ((plVar48 == (longlong *)0x0) ||
         (pUVar5 = pFVar16->World, pUVar29 = (UWorld *)(**(code **)(*plVar48 + 0x180))(plVar48),
         pUVar29 != pUVar5)) {
LAB_149f68e5b:
        FVar53.Data = FVar53.Data + 8;
      }
      else {
        pUVar28 = Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister();
        iVar25 = (int)pUVar28->_padding_;
        if ((*(int *)(plVar48[2] + 0x38) < iVar25) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(plVar48[2] + 0x30) + (longlong)iVar25 * 8) !=
            &pUVar28->_padding_)) {
          local_5f8 = (longlong *)0x0;
          FVar53.Data = FVar53.Data + 8;
        }
        else {
          pUVar35 = (UObject *)plVar48[0x50];
          local_5f8 = plVar48;
          if (pUVar35 == (UObject *)0x0) goto LAB_149f68e5b;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar35);
          }
          local_568.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FStack_570.ComparisonIndex.Value = 0;
          FStack_570.Number = 0;
          local_578.ComparisonIndex.Value = 0;
          local_578.Number = 0;
          local_568.Data.ArrayNum = 0;
          local_568.Data.ArrayMax = 0;
          local_580 = (undefined1  [8])0x0;
          local_558 = 0;
          FUtf8String::Reset(&local_568,0);
          local_4c0 = pUVar35;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar35);
          }
          FSoftObjectPtr::operator=((FSoftObjectPtr *)local_580,(FObjectPtr)&local_4c0);
          local_348.AssetPath.PackageName = local_578;
          local_348.AssetPath.AssetName = FStack_570;
          local_350 = local_580;
          local_348.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TArray<char8_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<char8_t,int>
                    (&local_348.SubPathString.Data,(uchar *)local_568.Data.AllocatorInstance.Data,
                     local_568.Data.ArrayNum,0);
          uVar43 = ::GetTypeHash(&local_348);
          if (local_348.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_348.SubPathString.Data.AllocatorInstance.Data);
          }
          pTVar30 = TMapBase<TSoftObjectPtr<URuntimeVirtualTexture>,TArray<URuntimeVirtualTextureComponent_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<URuntimeVirtualTexture>,TArray<URuntimeVirtualTextureComponent_*,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindOrAddImpl<TSoftObjectPtr<URuntimeVirtualTexture>_>
                              ((TMapBase<TSoftObjectPtr<URuntimeVirtualTexture>,TArray<URuntimeVirtualTextureComponent_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<URuntimeVirtualTexture>,TArray<URuntimeVirtualTextureComponent_*,TSizedDefaultAllocator<32>_>,0>_>
                                *)&local_1c8,uVar43,
                               (TSoftObjectPtr<URuntimeVirtualTexture> *)local_580);
          if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_568.Data.AllocatorInstance.Data);
          }
          pFVar6 = (pTVar30->AllocatorInstance).Data;
          if (((pFVar6 <= (FScriptContainerElement *)&local_5f8) &&
              ((FScriptContainerElement *)&local_5f8 < pFVar6 + (longlong)pTVar30->ArrayMax * 8)) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar22)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar25 = pTVar30->ArrayNum;
          if (iVar25 == pTVar30->ArrayMax) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar30->AllocatorInstance,&pTVar30->ArrayMax);
          }
          pTVar30->ArrayNum = iVar25 + 1;
          FVar53.Data = FVar53.Data + 8;
          *(longlong **)((pTVar30->AllocatorInstance).Data + (longlong)iVar25 * 8) = local_5f8;
        }
      }
    }
    if (local_5a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a0.AllocatorInstance.Data);
    }
    if (bVar21) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    fVar14 = __real_3ca3d70a;
    dVar13 = __real_3fe0000000000000;
    if (local_1c8.Elements._8_4_ != local_1c8.Elements._52_4_) {
      uVar38 = (ulonglong)(int)(uint)local_628;
      local_4c8 = local_630.Data + uVar38 * 8;
      local_5a8 = (uint)local_628;
      uVar40 = uVar38;
      FVar53.Data = local_630.Data;
      fVar57 = __real_3dcccccd;
      while( true ) {
        pFVar31 = local_4c8;
        local_520 = FVar53.Data;
        if ((int)uVar38 != (int)uVar40) {
          local_61e = 0;
          `TCheckedPointerIterator<UPCGComponent_const_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_61e);
        }
        if (FVar53.Data == pFVar31) break;
        pUVar50 = *(UPCGComponent **)FVar53.Data;
        bVar21 = -1 < CpuChannel->Enabled;
        local_590 = pUVar50;
        if (bVar21) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId1271,"RequestVirtualTexturePrimingForComponent",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                     ,0x4f7);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1271);
        }
        if ((pUVar50 == (UPCGComponent *)0x0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("OriginalComponent",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                                ,0x4f8,L""), bVar22)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_610.Data = (FScriptContainerElement *)0x0;
        local_608 = 0;
        bVar22 = -1 < CpuChannel->Enabled;
        if (bVar22) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId1279,"PollVirtualTexturePrimingInfos",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                     ,0x4ff);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1279);
        }
        pUVar7 = (pUVar50->GraphInstance).field0_0x0.DebugPtr;
        if (((pUVar7 != (UPCGGraphInstance *)0x0) &&
            (pFVar31 = (FScriptContainerElement *)(**(code **)(pUVar7->_padding_ + 0x2c0))(),
            local_618 = pFVar31, pFVar31 != (FScriptContainerElement *)0x0)) &&
           (pUVar32 = FInstancedPropertyBag::GetPropertyBagStruct((FInstancedPropertyBag *)pFVar31),
           pUVar32 != (UPropertyBag *)0x0)) {
          iVar24 = (pUVar32->PropertyDescs).ArrayNum;
          pFVar47 = (FPropertyBagPropertyDesc *)(pUVar32->PropertyDescs).AllocatorInstance.Data;
          if ((iVar24 < 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar23)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar49 = pFVar47 + iVar24;
          pUVar34 = Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.OuterSingleton;
          for (; pFVar47 != pFVar49; pFVar47 = pFVar47 + 1) {
            if (pFVar47->ValueType == Struct) {
              if (pUVar34 == (UScriptStruct *)0x0) {
                pUVar33 = Z_Construct_UPackage__Script_PCG();
                pUVar34 = GetStaticStruct(Z_Construct_UScriptStruct_FPCGVirtualTexturePrimingInfo,
                                          (UObject *)pUVar33,L"PCGVirtualTexturePrimingInfo");
                Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.OuterSingleton =
                     pUVar34;
              }
              pUVar8 = (UScriptStruct *)(pFVar47->ValueTypeObject).field0_0x0.DebugPtr;
              if (pUVar8 == (UScriptStruct *)0x0) {
                bVar23 = pUVar34 == (UScriptStruct *)0x0;
              }
              else {
                bVar23 = pUVar8 == pUVar34;
              }
              if (bVar23) {
                if (pUVar34 == (UScriptStruct *)0x0) {
                  pUVar33 = Z_Construct_UPackage__Script_PCG();
                  pUVar34 = GetStaticStruct(Z_Construct_UScriptStruct_FPCGVirtualTexturePrimingInfo,
                                            (UObject *)pUVar33,L"PCGVirtualTexturePrimingInfo");
                  Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.OuterSingleton =
                       pUVar34;
                }
                FInstancedPropertyBag::GetValueStruct
                          ((FInstancedPropertyBag *)pFVar31,&local_1e8,pFVar47,pUVar34);
                uVar40 = (ulonglong)local_1e8.Variant.TypeIndex;
                if ((2 < local_1e8.Variant.TypeIndex) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                        ,0x12f,L""), bVar23)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                if (*(char *)((longlong)
                              &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                               ::__l2::bIsSameType + uVar40 + 4) == '\0') {
                  if ((local_1e8.Variant.TypeIndex != 1) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index == TypeIndex",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                          ,0x97,L""), bVar23)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  local_1f8 = (uchar *)CONCAT71(local_1f8._1_7_,
                                                (undefined1)local_1e8.Variant._padding_);
LAB_149f692ce:
                  local_1f0 = '\x01';
                  ppbVar39 = (bool **)((longlong)
                                       &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FPCGVirtualTexturePrimingInfo*___ptr64,FPCGVirtualTexturePrimingInfo*___ptr64,TValueOrError<FPCGVirtualTexturePrimingInfo*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FPCGVirtualTexturePrimingInfo*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                                        ::__l2::bIsSameType + 1);
                }
                else {
                  if ((local_1e8.Variant.TypeIndex != 0) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index == TypeIndex",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                          ,0x97,L""), bVar23)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  lVar41 = local_1e8.Variant._padding_;
                  pUVar34 = (UScriptStruct *)
                            CONCAT71(local_1e8.Variant._padding_._1_7_,
                                     (undefined1)local_1e8.Variant._padding_);
                  if (((uchar *)local_1e8.Variant._padding_ == (uchar *)0x0) ||
                     (pUVar34 == (UScriptStruct *)0x0)) {
LAB_149f692b3:
                    local_4b0 = (uchar *)0x0;
                    local_600 = 1;
                    local_1f8 = (uchar *)CONCAT71(local_1f8._1_7_,1);
                    pFVar31 = local_618;
                    goto LAB_149f692ce;
                  }
                  if (Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.OuterSingleton
                      == (UScriptStruct *)0x0) {
                    pUVar33 = Z_Construct_UPackage__Script_PCG();
                    Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.OuterSingleton =
                         GetStaticStruct(Z_Construct_UScriptStruct_FPCGVirtualTexturePrimingInfo,
                                         (UObject *)pUVar33,L"PCGVirtualTexturePrimingInfo");
                  }
                  if (pUVar34 !=
                      Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.OuterSingleton
                     ) {
                    if (Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.
                        OuterSingleton == (UScriptStruct *)0x0) {
                      pUVar33 = Z_Construct_UPackage__Script_PCG();
                      Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.OuterSingleton
                           = GetStaticStruct(Z_Construct_UScriptStruct_FPCGVirtualTexturePrimingInfo
                                             ,(UObject *)pUVar33,L"PCGVirtualTexturePrimingInfo");
                      if (Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.
                          OuterSingleton == (UScriptStruct *)0x0) goto LAB_149f692b3;
                    }
                    iVar24 = (int)(Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.
                                  OuterSingleton)->_padding_;
                    if (((int)pUVar34->_padding_ < iVar24) ||
                       ((longlong *)*(undefined1 **)(pUVar34->_padding_ + (longlong)iVar24 * 8) !=
                        &(Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.
                         OuterSingleton)->_padding_)) {
                      bVar23 = false;
                    }
                    else {
                      bVar23 = true;
                    }
                    if (!bVar23) goto LAB_149f692b3;
                  }
                  local_4b0 = (uchar *)lVar41;
                  ppbVar39 = &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FPCGVirtualTexturePrimingInfo*___ptr64,FPCGVirtualTexturePrimingInfo*___ptr64,TValueOrError<FPCGVirtualTexturePrimingInfo*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FPCGVirtualTexturePrimingInfo*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                              ::__l2::bIsSameType;
                  local_1f8 = (uchar *)lVar41;
                  local_1f0 = '\0';
                  pFVar31 = local_618;
                }
                pUVar34 = Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.
                          OuterSingleton;
                if (*(char *)ppbVar39 != '\0') {
                  if ((local_1f0 != '\0') &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index == TypeIndex",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                          ,0x97,L""), bVar23)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pUVar34 = Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.
                            OuterSingleton;
                  if (local_1f8 != (uchar *)0x0) {
                    if ((local_1f0 != '\0') &&
                       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Index == TypeIndex",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                            ,0x97,L""), bVar23)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    if (((local_610.Data <= (FScriptContainerElement *)&local_1f8) &&
                        ((FScriptContainerElement *)&local_1f8 <
                         local_610.Data + (longlong)local_608._4_4_ * 8)) &&
                       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar23)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    iVar24 = (uint)local_608;
                    if ((uint)local_608 == local_608._4_4_) {
                      iVar24 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x808,&local_610,(int *)((longlong)&local_608 + 4));
                    }
                    local_608 = CONCAT44(local_608._4_4_,iVar24 + 1);
                    *(uchar **)(local_610.Data + (longlong)iVar24 * 8) = local_1f8;
                    pUVar34 = Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.
                              OuterSingleton;
                  }
                }
              }
            }
          }
          if (bVar22) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          pUVar50 = local_590;
          UPCGComponent::GetGridBounds(local_590,(TBox<double> *)&local_230._s_0);
          uVar40 = (ulonglong)(int)(uint)local_608;
          local_5ac = (uint)local_608;
          local_618 = local_610.Data + uVar40 * 8;
          pFVar31 = local_618;
          FVar53.Data = local_610.Data;
LAB_149f6944c:
          do {
            local_528 = FVar53.Data;
            if ((uint)local_608 != (int)uVar40) {
              local_61d = 0;
              `TCheckedPointerIterator<FPCGVirtualTexturePrimingInfo_*,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_61d);
            }
            if (FVar53.Data == pFVar31) goto LAB_149f69c43;
            pTVar51 = *(TPersistentObjectPtr<FSoftObjectPath> **)FVar53.Data;
            local_538 = pTVar51;
            if ((pTVar51 != (TPersistentObjectPtr<FSoftObjectPath> *)0x0) &&
               (pUVar35 = TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar51), pFVar31 = local_618,
               pUVar35 != (UObject *)0x0)) {
              pUVar28 = Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
              iVar24 = (int)pUVar28->_padding_;
              pFVar31 = local_618;
              if ((iVar24 <= *(int *)(*(longlong *)&pUVar35->field_0x10 + 0x38)) &&
                 (((longlong *)
                   *(undefined1 **)
                    (*(longlong *)(*(longlong *)&pUVar35->field_0x10 + 0x30) + (longlong)iVar24 * 8)
                   == &pUVar28->_padding_ &&
                  (piVar1 = &pTVar51[1].WeakPtr.ObjectSerialNumber,
                  fVar57 < (float)*piVar1 || fVar57 == (float)*piVar1)))) {
                local_328 = pTVar51->WeakPtr;
                FSoftObjectPath::FSoftObjectPath(&local_320,&pTVar51->ObjectID);
                local_408 = local_328;
                FSoftObjectPath::FSoftObjectPath(&local_400,&local_320);
                local_278 = local_408;
                FSoftObjectPath::FSoftObjectPath(&local_270,&local_400);
                uVar43 = ::GetTypeHash(&local_270);
                if (local_270.SubPathString.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_270.SubPathString.Data.AllocatorInstance.Data);
                }
                iVar24 = TSet<TTuple<TSoftObjectPtr<URuntimeVirtualTexture>,TArray<URuntimeVirtualTextureComponent_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<URuntimeVirtualTexture>,TArray<URuntimeVirtualTextureComponent_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                         ::FindIndexByHash<TSoftObjectPtr<URuntimeVirtualTexture_const_>_>
                                   (&local_1c8,uVar43,
                                    (TSoftObjectPtr<URuntimeVirtualTexture_const_> *)&local_408);
                if (iVar24 == -1) {
                  if (local_400.SubPathString.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_400.SubPathString.Data.AllocatorInstance.Data);
                  }
                }
                else {
                  lVar41 = (longlong)iVar24 * 0x40 + local_1c8.Elements._0_8_;
                  if (local_400.SubPathString.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_400.SubPathString.Data.AllocatorInstance.Data);
                  }
                  if (lVar41 != 0) {
                    plVar48 = (longlong *)(lVar41 + 0x28);
                    local_4d0 = plVar48;
                    if (local_320.SubPathString.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_320.SubPathString.Data.AllocatorInstance.Data);
                    }
                    pFVar31 = local_618;
                    if (plVar48 != (longlong *)0x0) {
                      local_5b0 = *(uint *)(lVar41 + 0x30);
                      uVar40 = (ulonglong)(int)local_5b0;
                      plVar42 = (longlong *)*plVar48;
                      local_530 = plVar42 + uVar40;
LAB_149f695c5:
                      pTVar18 = local_548;
                      local_540 = plVar42;
                      if ((int)plVar48[1] != (int)uVar40) {
                        local_61c = 0;
                        `TCheckedPointerIterator<URuntimeVirtualTextureComponent_*,int,0>::
                        operator!='::__l2::<lambda_1>::operator()(&local_61c);
                      }
                      pFVar31 = local_618;
                      fVar57 = __real_3dcccccd;
                      if (plVar42 != local_530) {
                        local_4a0 = (URuntimeVirtualTextureComponent *)*plVar42;
                        if ((local_4a0 == (URuntimeVirtualTextureComponent *)0x0) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("VirtualTextureComponent",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                                                ,0x52c,L""), bVar22)) {
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                        EVar4 = pTVar51[1].WeakPtr.ObjectIndex;
                        uVar43 = PCGHiGenGrid::GridToGridSize(EVar4);
                        dVar11 = UPCGComponent::GetGenerationRadiusFromGrid(pUVar50,EVar4);
                        iVar24 = *(int *)&(pTVar18->Elements).field_0x28;
                        pTStack_5d0 = (TBitArray<FDefaultBitArrayAllocator> *)
                                      &(pTVar18->Elements).field_0x10;
                        iVar25 = 0;
                        uVar26 = 1;
                        dVar11 = dVar11 + (double)uVar43;
                        uStack_5c0._0_4_ = 0;
                        uStack_5c8._4_4_ = 0;
                        if (iVar24 != 0) {
                          puVar9 = *(uint **)&(pTVar18->Elements).field_0x20;
                          puVar46 = (uint *)pTStack_5d0;
                          if (puVar9 != (uint *)0x0) {
                            puVar46 = puVar9;
                          }
                          uVar43 = *puVar46;
                          uStack_5c0._0_4_ = 0;
                          while (uVar43 == 0) {
                            iVar25 = iVar25 + 1;
                            uStack_5c0._0_4_ = (int)uStack_5c0 + 0x20;
                            uStack_5c8._4_4_ = iVar24;
                            if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25)
                            goto LAB_149f696d6;
                            uVar43 = puVar46[iVar25];
                          }
                          uVar26 = ~(uVar43 - 1) & uVar43;
                          uVar40 = (ulonglong)uVar26 * 2 + 1;
                          lVar41 = 0x3f;
                          if (uVar40 != 0) {
                            for (; uVar40 >> lVar41 == 0; lVar41 = lVar41 + -1) {
                            }
                          }
                          local_4d8 = (int)lVar41;
                          uStack_5c8._4_4_ = (int)uStack_5c0 + -1 + local_4d8;
                          if (iVar24 < uStack_5c8._4_4_) {
                            uStack_5c8._4_4_ = iVar24;
                          }
                        }
LAB_149f696d6:
                        uVar43 = *(uint *)&(pTVar18->Elements).field_0x28;
                        local_5b8 = *(int *)&(pTVar18->Elements).field_0x8 -
                                    *(int *)&(pTVar18->Elements).field_0x34;
                        local_5e0 = pTVar18;
                        uVar52 = uVar43 & 0xffffffe0;
                        uStack_5d8 = CONCAT44(uVar26,iVar25);
                        uStack_5c8._0_4_ = 0xffffffff;
                        uStack_5c0._4_4_ = local_234;
                        local_438 = pTVar18;
                        TStack_430._padding_ = uStack_5d8;
                        iVar25 = (int)uVar43 >> 5;
                        uStack_410 = CONCAT44(uStack_5b4,local_5b8);
                        TStack_430.UnvisitedBitMask = 0xffffffff;
                        TStack_430.CurrentBitIndex = uStack_5c8._4_4_;
                        TStack_430.BaseBitIndex = (int)uStack_5c0;
                        TStack_430._28_4_ = local_234;
                        local_550 = (ForElementType<unsigned_int>)pTStack_5d0;
                        TStack_430.Array = pTStack_5d0;
                        if ((((int)uVar43 < 0) || (iVar24 < (int)uVar43)) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                                ,0x7af,L""), bVar22)) {
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                        this_00 = local_4a0;
                        FVar17 = local_550;
                        uVar26 = *(int *)((longlong)local_550 + 0x18);
                        if (uVar43 != uVar26) {
                          FVar45 = local_550;
                          if (*(ForElementType<unsigned_int> *)((longlong)local_550 + 0x10) !=
                              (ForElementType<unsigned_int>)0x0) {
                            FVar45 = *(ForElementType<unsigned_int> *)((longlong)local_550 + 0x10);
                          }
                          uVar43 = -1 << ((byte)uVar43 & 0x1f) &
                                   *(uint *)((longlong)FVar45 + (longlong)iVar25 * 4);
                          while (uVar43 == 0) {
                            iVar25 = iVar25 + 1;
                            uVar52 = uVar52 + 0x20;
                            uVar43 = uVar26;
                            if ((int)(((int)(uVar26 - 1) >> 0x1f & 0x1fU) + (uVar26 - 1)) >> 5 <
                                iVar25) goto LAB_149f69800;
                            uVar43 = *(uint *)((longlong)FVar45 + (longlong)iVar25 * 4);
                          }
                          uVar40 = (ulonglong)(~(uVar43 - 1) & uVar43) * 2 + 1;
                          lVar41 = 0x3f;
                          if (uVar40 != 0) {
                            for (; uVar40 >> lVar41 == 0; lVar41 = lVar41 + -1) {
                            }
                          }
                          local_4d4 = (int)lVar41;
                          uVar43 = (uVar52 - 1) + local_4d4;
                          if ((int)uVar26 < (int)uVar43) {
                            uVar43 = uVar26;
                          }
                        }
LAB_149f69800:
                        do {
                          pTVar18 = local_438;
                          if (*(int *)&(local_438->Elements).field_0x8 -
                              *(int *)&(local_438->Elements).field_0x34 != (int)uStack_410) {
                            local_61b[0] = 0;
                            `TSparseArray<TSparseSetElement<IPCGGenSourceBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()
                                      (local_61b);
                          }
                          if (((TStack_430.CurrentBitIndex == uVar43) &&
                              ((ForElementType<unsigned_int>)TStack_430.Array == FVar17)) &&
                             (pTVar18 == local_548)) goto LAB_149f69bc0;
                          plVar48 = *(longlong **)
                                     (*(longlong *)&pTVar18->Elements +
                                     (longlong)TStack_430.CurrentBitIndex * 0x10);
                          (**(code **)(*plVar48 + 0x18))(plVar48,&local_300);
                          pTVar55 = local_2f0;
                          dVar20 = dStack_2f8;
                          dVar19 = local_300;
                          if (local_2e8 != '\0') {
                            pTStack_5d0 = local_2f0;
                            bVar22 = UPCGComponent::Use2DGrid(local_590);
                            if (bVar22) {
                              pTVar55 = (TBitArray<FDefaultBitArrayAllocator> *)
                                        ((local_230._s_0.Z + local_208) * dVar13);
                              pTStack_5d0 = pTVar55;
                            }
                            if (((local_230._s_0.X <= dVar19 + dVar11) &&
                                (dVar19 - dVar11 <= local_218)) &&
                               ((local_230._s_0.Y <= dVar20 + dVar11 &&
                                (((dVar20 - dVar11 <= local_210 &&
                                  (local_230._s_0.Z <= (double)pTStack_5d0 + dVar11)) &&
                                 ((double)pTStack_5d0 - dVar11 <= local_208)))))) {
                              bVar22 = -1 < CpuChannel->Enabled;
                              if (bVar22) {
                                FCpuProfilerTrace::GetOrCreateSpecId
                                          (&__CpuProfilerEventSpecId1348,
                                           "RequestVirtualTexturePreload",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                                           ,0x544);
                                FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1348);
                              }
                              pTVar51 = local_538;
                              dVar2 = (double)this_00->_padding_;
                              uVar56 = SUB84(dVar2,0);
                              uVar58 = (undefined4)((ulonglong)dVar2 >> 0x20);
                              dVar3 = (double)this_00->_padding_;
                              if (dVar2 <= dVar3) {
                                uVar56 = SUB84(dVar3,0);
                                uVar58 = (undefined4)((ulonglong)dVar3 >> 0x20);
                              }
                              pUVar35 = TPersistentObjectPtr<FSoftObjectPath>::Get(local_538);
                              if (pUVar35 == (UObject *)0x0) {
LAB_149f699d4:
                                pUVar35 = (UObject *)0x0;
                              }
                              else {
                                pUVar28 = Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
                                iVar24 = (int)pUVar28->_padding_;
                                if ((*(int *)(*(longlong *)&pUVar35->field_0x10 + 0x38) < iVar24) ||
                                   ((longlong *)
                                    *(undefined1 **)
                                     (*(longlong *)(*(longlong *)&pUVar35->field_0x10 + 0x30) +
                                     (longlong)iVar24 * 8) != &pUVar28->_padding_))
                                goto LAB_149f699d4;
                              }
                              iVar24 = *(int *)(pUVar35 + 1);
                              iVar25 = URuntimeVirtualTexture::GetMaxTileCountLog2
                                                 ((bool)pUVar35[1].field_0x14);
                              if (iVar24 < iVar25) {
                                iVar25 = iVar24;
                              }
                              iVar37 = *(int *)&pUVar35[1].field_0x4 + 6;
                              iVar24 = 10;
                              if (iVar37 < 10) {
                                iVar24 = iVar37;
                              }
                              iVar37 = 6;
                              if (6 < iVar24) {
                                iVar37 = iVar24;
                              }
                              iVar24 = 0;
                              dVar2 = (double)CONCAT44(uVar58,uVar56) /
                                      (double)(float)pTVar51[1].WeakPtr.ObjectSerialNumber;
                              bVar36 = 0;
                              if (0 < iVar25) {
                                bVar36 = (byte)iVar25;
                              }
                              uVar26 = (1 << ((byte)iVar37 & 0x1f)) << (bVar36 & 0x1f);
                              local_2e0._s_0.X = dVar19;
                              local_2e0._s_0.Y = dVar20;
                              if (dVar2 <= __real_3ff0000000000000) {
                                dVar2 = __real_3ff0000000000000;
                              }
                              local_2c8._8_4_ = SUB84(dVar11,0);
                              local_2c8._0_8_ = dVar11;
                              local_2c8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
                              uVar52 = (uint)dVar2;
                              local_4a8 = 0x1f;
                              if (uVar52 != 0) {
                                for (; uVar52 >> local_4a8 == 0; local_4a8 = local_4a8 + -1) {
                                }
                              }
                              iVar25 = iVar24;
                              if (uVar52 != 0) {
                                iVar25 = local_4a8;
                              }
                              if ((int)uVar26 < 1) {
                                uVar26 = 1;
                              }
                              local_4b8 = 0x1f;
                              if (uVar26 != 0) {
                                for (; uVar26 >> local_4b8 == 0; local_4b8 = local_4b8 + -1) {
                                }
                              }
                              iVar37 = iVar24;
                              if (uVar26 != 0) {
                                iVar37 = local_4b8;
                              }
                              iVar44 = iVar37 - iVar25;
                              if (iVar37 - iVar25 < 0) {
                                iVar44 = iVar24;
                              }
                              local_2e0._16_8_ = pTVar55;
                              local_2b8 = dVar11;
                              local_2b0 = dVar11;
                              URuntimeVirtualTextureComponent::RequestPreload
                                        (this_00,(TBoxSphereBounds<double,double> *)&local_2e0._s_0,
                                         iVar44);
                              pTVar15 = PCGRuntimeGenSchedulerHelpers::
                                        CVarDebugDrawTexturePrimingBounds.Ref;
                              PCGRuntimeGenSchedulerHelpers::Stats.VTPreloadCounter =
                                   PCGRuntimeGenSchedulerHelpers::Stats.VTPreloadCounter + 1;
                              bVar23 = IsInParallelGameThread();
                              if (bVar23) {
LAB_149f69ac6:
                                lVar41 = 0;
                              }
                              else {
                                bVar23 = IsInGameThread();
                                lVar41 = 1;
                                if (bVar23) goto LAB_149f69ac6;
                              }
                              pFVar16 = local_588;
                              if (pTVar15->ShadowedValue[lVar41] != false) {
                                if ((local_588->World == (UWorld *)0x0) &&
                                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("World",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                                                  ,0x555,L""), bVar23)) {
                                  pcVar10 = (code *)swi(3);
                                  (*pcVar10)();
                                  return;
                                }
                                local_3e0._s_0.Z = local_208;
                                local_3e0._s_0.X = dVar19;
                                local_3e0._s_0.Y = dVar20;
                                local_3c8._s_0.X = dVar19;
                                local_3c8._s_0.Y = dVar20;
                                local_3c8._s_0.Z = local_230._s_0.Z;
                                DrawDebugCylinder(pFVar16->World,(TVector<double> *)&local_3c8._s_0,
                                                  (TVector<double> *)&local_3e0._s_0,(float)dVar11,8
                                                  ,&FColor::Red,false,fVar14,'\0',0.0);
                              }
                              if (bVar22) {
                                FCpuProfilerTrace::OutputEndEvent();
                              }
                            }
                          }
                          TStack_430.UnvisitedBitMask =
                               TStack_430.UnvisitedBitMask & ~TStack_430._padding_._4_4_;
                          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                                    (&TStack_430);
                        } while( true );
                      }
                    }
                    goto LAB_149f69c2a;
                  }
                }
                pFVar31 = local_618;
                if (local_320.SubPathString.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_320.SubPathString.Data.AllocatorInstance.Data);
                  FVar53.Data = local_528 + 8;
                  uVar40 = (ulonglong)local_5ac;
                  pFVar31 = local_618;
                  goto LAB_149f6944c;
                }
              }
            }
LAB_149f69c2a:
            uVar40 = (ulonglong)local_5ac;
            FVar53.Data = local_528 + 8;
          } while( true );
        }
        if (bVar22) {
          FCpuProfilerTrace::OutputEndEvent();
        }
LAB_149f69c43:
        if (local_610.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_610.Data);
        }
        if (bVar21) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        uVar38 = local_628 & 0xffffffff;
        FVar53.Data = local_520 + 8;
        uVar40 = (ulonglong)local_5a8;
      }
    }
    local_1c8.HashSize = 0;
    if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1c8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<URuntimeVirtualTexture>,TArray<URuntimeVirtualTextureComponent_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<URuntimeVirtualTexture>,TArray<URuntimeVirtualTextureComponent_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1c8.Elements);
  }
  if (local_630.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_630.Data);
  }
  if (bVar54) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
LAB_149f69bc0:
  plVar42 = local_540 + 1;
  uVar40 = (ulonglong)local_5b0;
  plVar48 = local_4d0;
  pUVar50 = local_590;
  pTVar51 = local_538;
  goto LAB_149f695c5;
}

// TickScheduleGeneration @ 149f69d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
FPCGRuntimeGenScheduler::TickScheduleGeneration
          (FPCGRuntimeGenScheduler *this,
          TMap<FPCGRuntimeGenScheduler::FGridGenerationKey,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>_>
          *param_1)

{
  int iVar1;
  UPCGSubsystem *this_00;
  FPCGActorAndComponentMapping *pFVar2;
  FPCGActorAndComponentMapping *pFVar3;
  void *pvVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  TConsoleVariableData<bool> *pTVar8;
  TConsoleVariableData<bool> *pTVar9;
  uchar *puVar10;
  APCGPartitionActor *pAVar11;
  bool bVar12;
  bool bVar13;
  EPCGHiGenGrid EVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  UObject *pUVar18;
  longlong lVar19;
  ulonglong uVar20;
  UPCGComponent *pUVar21;
  UClass *pUVar22;
  APCGPartitionActor *this_01;
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  *this_02;
  UPCGGraph *pUVar23;
  byte bVar24;
  FWeakObjectPtr *this_03;
  ForAnyElementType FVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  FGridGenerationKey *pFVar29;
  longlong lVar30;
  ulonglong uVar31;
  ForElementType<unsigned_int> FVar32;
  uint *puVar33;
  TBitArray<FDefaultBitArrayAllocator> *pTVar34;
  bool *pbVar35;
  FPCGRuntimeGenScheduler *pFVar36;
  bool bVar37;
  undefined1 auStackY_398 [32];
  int local_344;
  undefined1 local_340 [8];
  UPCGComponent *local_338;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_330;
  ulong64 local_320;
  FPCGRuntimeGenScheduler *local_318;
  TIntVector3<int>_u_0 local_310;
  TKeyInitializer<UPCGComponent_*_&> local_300;
  APCGPartitionActor *local_2f8;
  uchar *local_2f0;
  FPCGGridDescriptor local_2e8;
  FPCGRuntimeGenScheduler *local_2d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c8;
  int local_2a8;
  uint uStack_2a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2a0;
  undefined4 local_298;
  undefined8 uStack_294;
  undefined4 uStack_28c;
  FWeakObjectPtr local_288;
  FWeakObjectPtr local_280;
  FWeakObjectPtr local_278;
  bool *local_270;
  FPCGRuntimeGenScheduler *local_268;
  undefined8 uStack_260;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_258;
  uint uStack_250;
  int iStack_24c;
  int iStack_248;
  undefined4 uStack_244;
  int local_240;
  undefined4 uStack_23c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_238;
  FString local_218;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_208;
  FString local_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1e8;
  longlong *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c0;
  int local_1a0;
  UPCGComponent **local_198;
  int local_190;
  undefined1 local_18c [8];
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined4 local_174;
  ulonglong local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  TPairInitializer<FPCGRuntimeGenScheduler::FGridGenerationKey_const_&,double_const_&> local_15c;
  FName local_14c;
  UPCGComponent *local_140;
  undefined4 local_138;
  FPCGRuntimeGenScheduler *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  longlong local_100;
  longlong local_f8;
  FString local_f0;
  FString local_e0 [2];
  undefined4 local_b4;
  undefined1 local_a8 [24];
  uchar auStack_90 [8];
  ForElementType<unsigned_int> local_88;
  undefined8 local_80;
  int local_78;
  int local_74;
  uchar local_70 [2] [4];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_398;
  bVar37 = -1 < CpuChannel->Enabled;
  local_318 = (FPCGRuntimeGenScheduler *)param_1;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId997,"FPCGRuntimeGenScheduler::TickScheduleGeneration",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
               ,0x3e5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId997);
  }
  if (((this->Subsystem == (UPCGSubsystem *)0x0) ||
      (this->ActorAndComponentMapping == (FPCGActorAndComponentMapping *)0x0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Subsystem && ActorAndComponentMapping",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                          ,999,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_344 = 0;
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1005,
               "FPCGRuntimeGenScheduler::TickScheduleGeneration::CountingCurrentlyGenerating",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
               ,0x3ed);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1005);
  }
  pTVar34 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->GeneratedComponents).Elements.field_0x10
  ;
  local_1e8._padding_._0_4_ = 0;
  local_1e8._padding_._4_4_ = 1;
  local_1e8.UnvisitedBitMask = 0xffffffff;
  local_1e8.CurrentBitIndex = 0;
  local_1e8.BaseBitIndex = 0;
  local_1e8.Array = pTVar34;
  if (*(int *)&(this->GeneratedComponents).Elements.field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1e8);
  }
  uVar27 = *(uint *)&(this->GeneratedComponents).Elements.field_0x28;
  uStack_260 = CONCAT44(local_1e8._padding_._4_4_,(undefined4)local_1e8._padding_);
  bVar24 = (byte)uVar27 & 0x1f;
  local_240 = *(int *)&(this->GeneratedComponents).Elements.field_0x8 -
              *(int *)&(this->GeneratedComponents).Elements.field_0x34;
  iStack_24c = local_1e8.CurrentBitIndex;
  uStack_250 = local_1e8.UnvisitedBitMask;
  uStack_244 = local_1e8._28_4_;
  iStack_248 = local_1e8.BaseBitIndex;
  local_238._padding_._0_4_ = (int)uVar27 >> 5;
  local_238._padding_._4_4_ = 1 << bVar24;
  local_238.UnvisitedBitMask = -1 << bVar24;
  pTStack_258 = local_1e8.Array;
  local_238.BaseBitIndex = uVar27 & 0xffffffe0;
  uStack_108 = CONCAT44(uStack_23c,local_240);
  TStack_128.Array = local_1e8.Array;
  local_268 = this;
  local_238.Array = pTVar34;
  local_238.CurrentBitIndex = uVar27;
  local_130 = this;
  TStack_128._padding_ = uStack_260;
  TStack_128._16_8_ = _uStack_250;
  TStack_128._24_8_ = _iStack_248;
  if (((int)uVar27 < 0) ||
     (uVar28 = *(uint *)&(this->GeneratedComponents).Elements.field_0x28, (int)uVar28 < (int)uVar27)
     ) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar28 = *(uint *)&(this->GeneratedComponents).Elements.field_0x28;
  }
  if (uVar27 != uVar28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_238);
    pTVar34 = local_238.Array;
    uVar27 = local_238.CurrentBitIndex;
  }
  while( true ) {
    pFVar36 = local_130;
    if (*(int *)&(local_130->GeneratedComponents).Elements.field_0x8 -
        *(int *)&(local_130->GeneratedComponents).Elements.field_0x34 != (int)uStack_108) {
      local_340[0] = 0;
      `TSparseArray<TSparseSetElement<FPCGRuntimeGenScheduler::FGridGenerationKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_340);
    }
    if (((TStack_128.CurrentBitIndex == uVar27) && (TStack_128.Array == pTVar34)) &&
       (pFVar36 == this)) break;
    lVar19 = *(longlong *)&(pFVar36->GeneratedComponents).Elements;
    lVar30 = (longlong)TStack_128.CurrentBitIndex * 0x2c;
    local_288.ObjectIndex = *(int *)(lVar30 + 0x14 + lVar19);
    local_288.ObjectSerialNumber = *(int *)(lVar30 + 0x18 + lVar19);
    pUVar18 = FWeakObjectPtr::Get(&local_288);
    if (pUVar18 != (UObject *)0x0) {
      uVar28 = *(uint *)(lVar30 + 4 + lVar19);
      local_174 = 0;
      uStack_17c = 0;
      local_184 = (ulonglong)CONCAT15(1,CONCAT14(*(undefined1 *)(lVar30 + lVar19),uVar28));
      EVar14 = PCGHiGenGrid::GridSizeToGrid(uVar28);
      if (EVar14 == Unbounded) {
        local_280.ObjectIndex = *(int *)(lVar30 + 0x14 + lVar19);
        this_03 = &local_280;
        local_280.ObjectSerialNumber = *(int *)(lVar30 + 0x18 + lVar19);
      }
      else {
        this_03 = (FWeakObjectPtr *)(lVar19 + 0x1c + lVar30);
      }
      pUVar18 = FWeakObjectPtr::Get(this_03);
      if ((pUVar18 != (UObject *)0x0) && (*(longlong *)(pUVar18 + 0x16) != -1)) {
        local_344 = local_344 + 1;
      }
    }
    TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pTVar7 = PCGRuntimeGenSchedulerHelpers::CVarNumGeneratingComponentsAtSameTime.Ref;
  bVar12 = IsInParallelGameThread();
  if ((bVar12) || (bVar12 = IsInGameThread(), bVar12)) {
    lVar19 = 0;
  }
  else {
    lVar19 = 4;
  }
  pFVar36 = local_318;
  iVar17 = *(int *)((longlong)pTVar7->ShadowedValue + lVar19);
  if (iVar17 < 1) {
    iVar17 = 1;
  }
  iVar16 = iVar17 - local_344;
  if (iVar17 - local_344 < 0) {
    iVar16 = 0;
  }
  local_300.Key._4_4_ = iVar17;
  if (iVar16 == 0) goto LAB_149f6af32;
  iVar15 = *(int *)&(this->GeneratedComponents).Elements.field_0x8;
  uVar27 = ((*(int *)&(local_318->GeneratedComponents).Elements.field_0x8 -
            *(int *)&(this->GeneratedComponents).Elements.field_0x34) -
           *(int *)&(local_318->GeneratedComponents).Elements.field_0x34) + iVar15;
  if ((uint)(iVar15 - *(int *)&(this->GeneratedComponents).Elements.field_0x34) < uVar27) {
    if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar27);
    }
    TSparseArrayBase<44,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<44,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,uVar27);
    if (uVar27 < 4) {
      iVar15 = 1;
    }
    else {
      uVar26 = (ulonglong)((uVar27 >> 1) + 7) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_15c.Value._4_4_ = (undefined4)lVar19;
      iVar15 = 1 << ((byte)lVar19 & 0x1f);
    }
    iVar1 = (this->GeneratedComponents).HashSize;
    if ((iVar1 == 0) || (iVar1 < iVar15)) {
      (this->GeneratedComponents).HashSize = iVar15;
      TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
      ::Rehash(&this->GeneratedComponents);
    }
  }
  uVar27 = (*(int *)&(pFVar36->GeneratedComponents).Elements.field_0x8 -
           *(int *)&(pFVar36->GeneratedComponents).Elements.field_0x34) - iVar16;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  if ((int)uVar27 < 0) {
    uVar27 = 0;
  }
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  if (uVar27 != 0) {
    if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar27);
    }
    TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_a8,uVar27);
    uVar28 = 1;
    if (3 < uVar27) {
      uVar26 = (ulonglong)((uVar27 >> 1) + 7) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_138 = (undefined4)lVar19;
      uVar28 = 1 << ((byte)lVar19 & 0x1f);
    }
    if ((local_60 == 0) || ((int)local_60 < (int)uVar28)) {
      local_60 = uVar28;
      if ((ForElementType<FSetElementId>)local_68.Data != (ForElementType<FSetElementId>)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
      }
      if (uVar28 != 0) {
        uVar27 = uVar28;
        if (uVar28 < 2) {
          if ((ForElementType<FSetElementId>)local_68.Data != (ForElementType<FSetElementId>)0x0) {
            uVar27 = 0;
            goto LAB_149f6a232;
          }
        }
        else {
LAB_149f6a232:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar27,4)
          ;
        }
        if (0 < (int)uVar28) {
          uVar31 = (ulonglong)uVar28;
          uVar26 = 0;
          do {
            FVar25.Data = (FScriptContainerElement *)local_70;
            if ((ForElementType<FSetElementId>)local_68.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar25.Data = local_68.Data;
            }
            uVar20 = uVar26 & (longlong)(int)uVar28 - 1U;
            uVar26 = uVar26 + 1;
            *(undefined4 *)((longlong)FVar25.Data + uVar20 * 4) = 0xffffffff;
            uVar31 = uVar31 - 1;
          } while (uVar31 != 0);
        }
      }
      if (local_60 != 0) {
        pTStack_2a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
        uVar27 = 0;
        local_2a8 = 0;
        uStack_2a4 = 1;
        uStack_294 = 0;
        if ((int)local_80 != 0) {
          FVar32 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
          if (local_88 != (ForElementType<unsigned_int>)0x0) {
            FVar32 = local_88;
          }
          uVar28 = *(uint *)FVar32;
          local_2a8 = 0;
          while (uVar28 == 0) {
            uVar27 = uVar27 + 0x20;
            lVar19 = (longlong)local_2a8;
            local_2a8 = local_2a8 + 1;
            uStack_294 = (ulonglong)uVar27 << 0x20;
            iVar16 = (int)local_80;
            if ((int)((int)local_80 + -1 + ((int)local_80 + -1 >> 0x1f & 0x1fU)) >> 5 < local_2a8)
            goto LAB_149f6a357;
            uVar28 = ((uint *)((longlong)FVar32 + 4))[lVar19];
          }
          uStack_294._4_4_ = (uint)((ulonglong)uStack_294 >> 0x20);
          uStack_2a4 = ~(uVar28 - 1) & uVar28;
          uVar26 = (ulonglong)uStack_2a4 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_1a0 = (int)lVar19;
          iVar16 = local_1a0 + -1 + uVar27;
          uVar27 = uStack_294._4_4_;
          if ((int)local_80 < iVar16) {
            iVar16 = (int)local_80;
          }
LAB_149f6a357:
          uStack_294._4_4_ = uVar27;
          uStack_294 = CONCAT44(uStack_294._4_4_,iVar16);
        }
        local_298 = 0xffffffff;
        local_1c8 = (longlong *)local_a8;
        local_1c0._padding_ = CONCAT44(uStack_2a4,local_2a8);
        local_1c0.UnvisitedBitMask = 0xffffffff;
        local_1c0.CurrentBitIndex = (int)uStack_294;
        local_1c0.BaseBitIndex = uStack_294._4_4_;
        local_1c0._28_4_ = uStack_28c;
        local_1c0.Array = pTStack_2a0;
        if ((int)uStack_294 < (int)local_80) {
          do {
            iVar16 = local_1c0.CurrentBitIndex;
            pFVar29 = (FGridGenerationKey *)
                      ((longlong)local_1c0.CurrentBitIndex * 0x38 + *local_1c8);
            uVar27 = ::GetTypeHash(pFVar29);
            uVar27 = local_60 - 1 & uVar27;
            pFVar29[1].GridCoords.field0_0x0._s_0.Z = uVar27;
            FVar25.Data = (FScriptContainerElement *)local_70;
            if ((ForElementType<FSetElementId>)local_68.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar25.Data = local_68.Data;
            }
            lVar19 = (longlong)(int)(local_60 - 1 & uVar27);
            pFVar29[1].GridCoords.field0_0x0._s_0.Y = *(int *)((longlong)FVar25.Data + lVar19 * 4);
            *(int *)((longlong)FVar25.Data + lVar19 * 4) = iVar16;
            local_1c0.UnvisitedBitMask = local_1c0.UnvisitedBitMask & ~local_1c0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c0);
          } while (local_1c0.CurrentBitIndex < (local_1c0.Array)->NumBits);
        }
      }
    }
  }
  iVar16 = *(int *)&(pFVar36->GeneratedComponents).Elements.field_0x28;
  TStack_2c8.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar36->GeneratedComponents).Elements.field_0x10;
  iVar15 = 0;
  uVar27 = 1;
  iStack_248 = 0;
  TStack_2c8.CurrentBitIndex = iVar15;
  if (iVar16 != 0) {
    puVar33 = *(uint **)&(pFVar36->GeneratedComponents).Elements.field_0x20;
    if (puVar33 == (uint *)0x0) {
      puVar33 = (uint *)TStack_2c8.Array;
    }
    uVar28 = *puVar33;
    iVar15 = 0;
    iStack_248 = 0;
    while (uVar28 == 0) {
      iVar15 = iVar15 + 1;
      iStack_248 = iStack_248 + 0x20;
      TStack_2c8.CurrentBitIndex = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_149f6a4b9;
      uVar28 = puVar33[iVar15];
    }
    uVar27 = ~(uVar28 - 1) & uVar28;
    uVar26 = (ulonglong)uVar27 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_190 = (int)lVar19;
    TStack_2c8.CurrentBitIndex = local_190 + -1 + iStack_248;
    if (iVar16 < TStack_2c8.CurrentBitIndex) {
      TStack_2c8.CurrentBitIndex = iVar16;
    }
  }
LAB_149f6a4b9:
  iStack_24c = TStack_2c8.CurrentBitIndex;
  uStack_250 = 0xffffffff;
  local_268 = pFVar36;
  TStack_2c8.UnvisitedBitMask = 0xffffffff;
  uStack_260 = CONCAT44(uVar27,iVar15);
  uStack_244 = local_b4;
  local_2d0 = pFVar36;
  TStack_2c8._padding_ = uStack_260;
  TStack_2c8.BaseBitIndex = iStack_248;
  TStack_2c8._28_4_ = local_b4;
  iVar16 = local_344;
  local_2f0 = (uchar *)TStack_2c8.Array;
  pTStack_258 = TStack_2c8.Array;
  if (TStack_2c8.CurrentBitIndex < *(int *)&(pFVar36->GeneratedComponents).Elements.field_0x28) {
    do {
      if (iVar17 <= iVar16) {
        pFVar36 = local_318;
        if (TStack_2c8.CurrentBitIndex < (TStack_2c8.Array)->NumBits) {
          do {
            local_100 = *(longlong *)&(local_2d0->GeneratedComponents).Elements +
                        (longlong)TStack_2c8.CurrentBitIndex * 0x38;
            local_f8 = local_100 + 0x28;
            TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<FPCGRuntimeGenScheduler::FGridGenerationKey_const_&,double_const_&>_>
                      ((TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>
                        *)local_a8,&local_15c,(bool *)&local_100);
            TStack_2c8.UnvisitedBitMask = TStack_2c8.UnvisitedBitMask & ~TStack_2c8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c8);
            pFVar36 = local_318;
          } while (TStack_2c8.CurrentBitIndex < (TStack_2c8.Array)->NumBits);
        }
        break;
      }
      uStack_168 = 0;
      pbVar35 = (bool *)((longlong)TStack_2c8.CurrentBitIndex * 0x38 +
                        *(longlong *)&(local_2d0->GeneratedComponents).Elements);
      local_160 = 0;
      local_2e8.bIs2DGrid = *pbVar35;
      local_2e8.GridSize = *(uint *)(pbVar35 + 4);
      local_170 = (ulonglong)CONCAT24(CONCAT11(1,local_2e8.bIs2DGrid),local_2e8.GridSize);
      local_2e8.bIsRuntime = true;
      local_2e8.RuntimeHash = 0;
      local_2e8.Hash.bIsSet = false;
      local_270 = pbVar35;
      EVar14 = PCGHiGenGrid::GridSizeToGrid(local_2e8.GridSize);
      local_310._0_8_ = *(undefined8 *)(pbVar35 + 8);
      local_310._s_0.Z = *(undefined4 *)(pbVar35 + 0x10);
      local_278.ObjectIndex = *(int *)(pbVar35 + 0x14);
      local_278.ObjectSerialNumber = *(int *)(pbVar35 + 0x18);
      local_338 = (UPCGComponent *)FWeakObjectPtr::Get(&local_278);
      pTVar8 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnableDebugging.Ref;
      if (local_338 == (UPCGComponent *)0x0) {
        if (5 < (byte)LogPCG._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        }
      }
      else {
        if (EVar14 == Unbounded) {
          if (local_338->CurrentGenerationTask == 0xffffffffffffffff) {
            bVar12 = IsInParallelGameThread();
            if (bVar12) {
LAB_149f6a621:
              lVar19 = 0;
            }
            else {
              bVar12 = IsInGameThread();
              if (bVar12) goto LAB_149f6a621;
              lVar19 = 1;
            }
            if (((pTVar8->ShadowedValue[lVar19] != false) &&
                (lVar19 = local_338->_padding_, lVar19 != 0)) && (2 < (byte)LogPCG._0_1_)) {
              if (*(int *)(lVar19 + 0x1f0) < 2) {
                local_15c._4_8_ = *(undefined8 *)(lVar19 + 0x18);
                ::FName::ToString((FName *)((longlong)&local_15c.Key + 4),&local_218);
              }
              else {
                ::FString::FString(&local_218,(FString *)(lVar19 + 0x1e8));
              }
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_218.Data.AllocatorInstance.Data);
              }
            }
            PCGRuntimeGenSchedulerHelpers::Stats.GenerateCallCounter =
                 PCGRuntimeGenSchedulerHelpers::Stats.GenerateCallCounter + 1;
            local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_208.ArrayNum = 0;
            local_208.ArrayMax = 0;
            UPCGComponent::GenerateLocal(local_338,GenerateAtRuntime,true,Unbounded,&local_208);
            if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_208.AllocatorInstance.Data);
            }
          }
        }
        else {
          pUVar21 = FPCGActorAndComponentMapping::GetLocalComponent
                              (this->ActorAndComponentMapping,&local_2e8,
                               (TIntVector3<int> *)&local_310._s_0,local_338);
          if ((pUVar21 == (UPCGComponent *)0x0) ||
             (this_01 = (APCGPartitionActor *)pUVar21->_padding_,
             this_01 == (APCGPartitionActor *)0x0)) {
LAB_149f6a772:
            this_01 = (APCGPartitionActor *)0x0;
          }
          else {
            pUVar22 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
            iVar15 = (int)pUVar22->_padding_;
            if ((*(int *)(this_01->_padding_ + 0x38) < iVar15) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
                &pUVar22->_padding_)) goto LAB_149f6a772;
          }
          local_2f8 = this_01;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (APCGPartitionActor *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          if (pUVar21 == (UPCGComponent *)0x0) {
LAB_149f6a7c9:
            pTVar8 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnablePooling.Ref;
            bVar12 = IsInParallelGameThread();
            if (bVar12) {
LAB_149f6a7ee:
              lVar19 = 0;
            }
            else {
              bVar12 = IsInGameThread();
              if (bVar12) goto LAB_149f6a7ee;
              lVar19 = 1;
            }
            pTVar9 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnableDebugging.Ref;
            lVar30 = 0;
            if (pTVar8->ShadowedValue[lVar19] == false) {
              bVar12 = IsInParallelGameThread();
              if (bVar12) {
LAB_149f6a929:
                lVar19 = lVar30;
              }
              else {
                bVar12 = IsInGameThread();
                lVar19 = 1;
                if (bVar12) goto LAB_149f6a929;
              }
              if ((pTVar9->ShadowedValue[lVar19] != false) && (2 < (byte)LogPCG._0_1_)) {
                APCGPartitionActor::GetPCGPartitionActorName
                          (local_e0,&local_2e8,(TIntVector3<int> *)&local_310._s_0);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                if (local_e0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_e0[0].Data.AllocatorInstance.Data);
                }
              }
              pTVar8 = PCGRuntimeGenSchedulerHelpers::CVarHideActorsFromOutliner.Ref;
              this_00 = this->Subsystem;
              bVar12 = IsInParallelGameThread();
              if (bVar12) {
LAB_149f6a9b2:
                lVar19 = lVar30;
              }
              else {
                bVar12 = IsInGameThread();
                lVar19 = 1;
                if (bVar12) goto LAB_149f6a9b2;
              }
              this_01 = UPCGSubsystem::FindOrCreatePCGPartitionActor
                                  (this_00,&local_2e8,(TIntVector3<int> *)&local_310._s_0,true,
                                   pTVar8->ShadowedValue[lVar19]);
              pAVar11 = this_01;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (this_01 != (APCGPartitionActor *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)this_01);
              }
            }
            else {
              this_01 = GetPartitionActorFromPool
                                  (this,&local_2e8,(TIntVector3<int> *)&local_310._s_0);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (this_01 != (APCGPartitionActor *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)this_01);
              }
              pTVar8 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnableDebugging.Ref;
              local_2f8 = this_01;
              bVar12 = IsInParallelGameThread();
              if (bVar12) {
LAB_149f6a84e:
                lVar19 = lVar30;
              }
              else {
                bVar12 = IsInGameThread();
                lVar19 = 1;
                if (bVar12) goto LAB_149f6a84e;
              }
              pAVar11 = local_2f8;
              if ((pTVar8->ShadowedValue[lVar19] != false) && (2 < (byte)LogPCG._0_1_)) {
                APCGPartitionActor::GetPCGPartitionActorName
                          (&local_f0,&local_2e8,(TIntVector3<int> *)&local_310._s_0);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                iVar16 = local_344;
                pAVar11 = local_2f8;
                if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_f0.Data.AllocatorInstance.Data);
                  pAVar11 = local_2f8;
                }
              }
            }
            local_2f8 = pAVar11;
            if (this_01 == (APCGPartitionActor *)0x0) {
              bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<4830013997950436451>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                                  ,0x463,"PartitionActor");
              if (bVar12) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              goto LAB_149f6ad5d;
            }
            pFVar2 = this->ActorAndComponentMapping;
            AcquireSRWLockExclusive((PSRWLOCK)&pFVar2->ComponentToPartitionActorsMapLock);
            pUVar21 = local_338;
            pFVar3 = this->ActorAndComponentMapping;
            this_02 = TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
                      ::Find((TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
                              *)&pFVar3->ComponentToPartitionActorsMap,local_338);
            if (this_02 ==
                (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                 *)0x0) {
              local_198 = &local_338;
              TSet<TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              ::Emplace<TKeyInitializer<UPCGComponent_*_&>_>
                        ((TSet<TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                          *)&pFVar3->ComponentToPartitionActorsMap,&local_300,(bool *)&local_198);
              this_02 = (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                         *)(*(longlong *)&pFVar3->ComponentToPartitionActorsMap +
                           (longlong)(int)local_300.Key * 0x60 + 8);
              pUVar21 = local_338;
            }
            this->OriginalComponentBeingGenerated = pUVar21;
            APCGPartitionActor::AddGraphInstance(this_01,pUVar21);
            this->OriginalComponentBeingGenerated = (UPCGComponent *)0x0;
            TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
            ::Emplace<TObjectPtr<APCGPartitionActor>_const_&>
                      (this_02,(TObjectPtr<APCGPartitionActor> *)local_18c,(bool *)&local_2f8);
            ReleaseSRWLockExclusive((PSRWLOCK)&pFVar2->ComponentToPartitionActorsMapLock);
            pUVar21 = APCGPartitionActor::GetLocalComponent(this_01,local_338);
            pbVar35 = local_270;
            iVar16 = local_344;
            if (pUVar21 == (UPCGComponent *)0x0) {
              bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<4830013997950436481>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                                  ,0x481,"LocalComponent");
              if (bVar12) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              goto LAB_149f6ad3b;
            }
          }
          else if (this_01 == (APCGPartitionActor *)0x0) {
            bVar12 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4830013997950436417>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGRuntimeGenScheduler.cpp"
                                ,0x441,"PartitionActor");
            if (bVar12) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            goto LAB_149f6a7c9;
          }
          pTVar8 = PCGRuntimeGenSchedulerHelpers::CVarRuntimeGenerationEnableDebugging.Ref;
          if (pUVar21->CurrentGenerationTask == 0xffffffffffffffff) {
            bVar12 = IsInParallelGameThread();
            if (bVar12) {
LAB_149f6ab33:
              lVar19 = 0;
            }
            else {
              bVar12 = IsInGameThread();
              if (bVar12) goto LAB_149f6ab33;
              lVar19 = 1;
            }
            if ((pTVar8->ShadowedValue[lVar19] != false) && (2 < (byte)LogPCG._0_1_)) {
              if ((int)this_01->_padding_ < 2) {
                local_14c = (FName)this_01->_padding_;
                ::FName::ToString(&local_14c,&local_1f8);
              }
              else {
                ::FString::FString(&local_1f8,(FString *)&this_01->_padding_);
              }
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
              }
            }
            local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_330.ArrayNum = 0;
            local_330.ArrayMax = 0;
            if (local_338->CurrentGenerationTask != 0xffffffffffffffff) {
              pUVar23 = UPCGComponent::GetGraph(local_338);
              if (pUVar23 != (UPCGGraph *)0x0) {
                pUVar23 = UPCGComponent::GetGraph(local_338);
                if ((pUVar23->bUseHierarchicalGeneration != false) &&
                   (local_320 = local_338->CurrentGenerationTask, local_320 != 0xffffffffffffffff))
                {
                  if ((local_330.AllocatorInstance.Data <= (FScriptContainerElement *)&local_320) &&
                     ((FScriptContainerElement *)&local_320 <
                      local_330.AllocatorInstance.Data + (longlong)local_330.ArrayMax * 8)) {
                    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       );
                    if (bVar12) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                  }
                  iVar17 = local_330.ArrayNum;
                  if (local_330.ArrayNum == local_330.ArrayMax) {
                    iVar17 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&local_330.AllocatorInstance,&local_330.ArrayMax);
                  }
                  local_330.ArrayNum = iVar17 + 1;
                  *(ulong64 *)(local_330.AllocatorInstance.Data + (longlong)iVar17 * 8) = local_320;
                }
              }
            }
            PCGRuntimeGenSchedulerHelpers::Stats.GenerateCallCounter =
                 PCGRuntimeGenSchedulerHelpers::Stats.GenerateCallCounter + 1;
            EVar14 = UPCGComponent::GetGenerationGrid(pUVar21);
            UPCGComponent::GenerateLocal(pUVar21,GenerateAtRuntime,true,EVar14,&local_330);
            local_140 = pUVar21;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar21);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(pbVar35 + 0x1c),(FObjectPtr)&local_140);
            iVar16 = local_344;
            if (local_330.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_330.AllocatorInstance.Data);
            }
          }
        }
LAB_149f6ad3b:
        TSet<FPCGRuntimeGenScheduler::FGridGenerationKey,DefaultKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,0>,FDefaultSetAllocator>
        ::Emplace<FPCGRuntimeGenScheduler::FGridGenerationKey_const_&>
                  (&this->GeneratedComponents,(FGridGenerationKey *)(local_18c + 4),local_270);
        iVar16 = iVar16 + 1;
        local_344 = iVar16;
        iVar17 = local_300.Key._4_4_;
      }
LAB_149f6ad5d:
      TStack_2c8.UnvisitedBitMask = TStack_2c8.UnvisitedBitMask & ~TStack_2c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c8);
      pFVar36 = local_318;
    } while (TStack_2c8.CurrentBitIndex < (TStack_2c8.Array)->NumBits);
  }
  puVar10 = local_2f0;
  if (pFVar36 != (FPCGRuntimeGenScheduler *)local_a8) {
    pvVar4 = *(void **)&(pFVar36->GeneratedComponents).Elements;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    *(undefined8 *)&(pFVar36->GeneratedComponents).Elements = local_a8._0_8_;
    *(undefined4 *)&(pFVar36->GeneratedComponents).Elements.field_0x8 = local_a8._8_4_;
    *(undefined4 *)&(pFVar36->GeneratedComponents).Elements.field_0xc = local_a8._12_4_;
    local_a8._0_8_ = (FScriptContainerElement *)0x0;
    local_a8._8_8_ = 0;
    if (puVar10 != local_a8 + 0x10) {
      if (local_88 == (ForElementType<unsigned_int>)0x0) {
        *(undefined8 *)puVar10 = local_a8._16_8_;
        *(uchar (*) [8])(puVar10 + 8) = auStack_90;
      }
      if (*(void **)(puVar10 + 0x10) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar10 + 0x10));
      }
      *(ForElementType<unsigned_int> *)(puVar10 + 0x10) = local_88;
      *(int *)(puVar10 + 0x18) = (int)local_80;
      *(int *)(puVar10 + 0x1c) = local_80._4_4_;
      local_80._0_4_ = 0;
      local_80._4_4_ = 0;
      local_88 = (ForElementType<unsigned_int>)0x0;
    }
    *(int *)&(pFVar36->GeneratedComponents).Elements.field_0x30 = local_78;
    *(int *)&(pFVar36->GeneratedComponents).Elements.field_0x34 = local_74;
    local_74 = 0;
    local_78 = -1;
    if ((ForElementType<FSetElementId>)local_68.Data == (ForElementType<FSetElementId>)0x0) {
      *&(pFVar36->GeneratedComponents).Hash.InlineData = local_70[0];
    }
    FVar5 = (pFVar36->GeneratedComponents).Hash.SecondaryData;
    if (FVar5 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    (pFVar36->GeneratedComponents).Hash.SecondaryData = (ForElementType<FSetElementId>)local_68.Data
    ;
    (pFVar36->GeneratedComponents).HashSize = local_60;
    local_68.Data = (FScriptContainerElement *)0x0;
  }
  local_60 = 0;
  PCGRuntimeGenSchedulerHelpers::Stats.NumGeneratingComponents = iVar16;
  if ((ForElementType<FSetElementId>)local_68.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_68.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
LAB_149f6af32:
  if (bVar37) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

