// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 67

// StaticClass @ 14dad9d30

UClass * __cdecl AChaosCacheManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AChaosCacheManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCaching",L"ChaosCacheManager",
               &Z_Registration_Info_UClass_AChaosCacheManager.InnerSingleton,
               StaticRegisterNativesAChaosCacheManager,0x378,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AChaosCacheManager>,
               InternalVTableHelperCtorCaller<AChaosCacheManager>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AChaosCacheManager.InnerSingleton;
}

// AChaosCacheManager @ 14dae6080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AChaosCacheManager * __thiscall
AChaosCacheManager::AChaosCacheManager(AChaosCacheManager *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AChaosCacheManager__6B_;
  (this->CacheCollection).field0_0x0.DebugPtr = (UChaosCacheCollection *)0x0;
  (this->ObservedComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObservedComponents).ArrayNum = 0;
  (this->ObservedComponents).ArrayMax = 0;
  (this->ActiveAdapters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveAdapters).ArrayNum = 0;
  (this->ActiveAdapters).ArrayMax = 0;
  *(undefined8 *)&this->PerSolverData = 0;
  *(undefined8 *)&(this->PerSolverData).field_0x8 = 0;
  *(undefined8 *)&(this->PerSolverData).field_0x20 = 0;
  this->bCreateNewCacheCollectionAssetOnRecord = false;
  *(undefined4 *)&(this->PerSolverData).field_0x28 = 0;
  *(undefined4 *)&(this->PerSolverData).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerSolverData).field_0x34 = 0;
  *(undefined4 *)&(this->PerSolverData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PerSolverData).field_0x40 = 0;
  *(undefined4 *)&(this->PerSolverData).field_0x48 = 0;
  (this->OpenRecordCaches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenRecordCaches).ArrayNum = 0;
  (this->OpenRecordCaches).ArrayMax = 0;
  (this->OpenPlaybackCaches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenPlaybackCaches).ArrayNum = 0;
  (this->OpenPlaybackCaches).ArrayMax = 0;
  this->bRestartSimulation = false;
  this->RestartTimeStart = 3.4028235e+38;
  this->RestartTimeEnd = -3.4028235e+38;
  return this;
}

// AChaosCacheManager @ 14dae6150

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AChaosCacheManager * __thiscall
AChaosCacheManager::AChaosCacheManager(AChaosCacheManager *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->bCreateNewCacheCollectionAssetOnRecord = false;
  this->CacheMode = Record;
  this->_padding_ = (longlong)&___7AChaosCacheManager__6B_;
  this->bStartOnBeginPlay = true;
  this->bCanRecord = true;
  (this->CacheCollection).field0_0x0.DebugPtr = (UChaosCacheCollection *)0x0;
  (this->ObservedComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObservedComponents).ArrayNum = 0;
  (this->ObservedComponents).ArrayMax = 0;
  (this->ActiveAdapters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveAdapters).ArrayNum = 0;
  (this->ActiveAdapters).ArrayMax = 0;
  *(undefined8 *)&this->PerSolverData = 0;
  *(undefined8 *)&(this->PerSolverData).field_0x8 = 0;
  *(undefined8 *)&(this->PerSolverData).field_0x20 = 0;
  this->StartMode = Timed;
  this->bIsSimulating = false;
  *(undefined4 *)&(this->PerSolverData).field_0x28 = 0;
  *(undefined4 *)&(this->PerSolverData).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerSolverData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PerSolverData).field_0x34 = 0;
  *(undefined8 *)&(this->PerSolverData).field_0x40 = 0;
  *(undefined4 *)&(this->PerSolverData).field_0x48 = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  (this->OpenRecordCaches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenRecordCaches).ArrayNum = 0;
  (this->OpenRecordCaches).ArrayMax = 0;
  (this->OpenPlaybackCaches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenPlaybackCaches).ArrayNum = 0;
  (this->OpenPlaybackCaches).ArrayMax = 0;
  this->StartTimeAtBeginPlay = 0.0;
  this->bRestartSimulation = false;
  this->RestartTimeStart = 3.4028235e+38;
  this->RestartTimeEnd = -3.4028235e+38;
  pFVar3 = ::FName::FName(&local_res8,L"Root");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  this->_padding_ = (longlong)pUVar5;
  (**(code **)(*(longlong *)pUVar5 + 0x5f8))(pUVar5,0);
  return this;
}

// ~AChaosCacheManager @ 14dae86b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosCacheManager::~AChaosCacheManager(AChaosCacheManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7AChaosCacheManager__6B_;
  pFVar1 = (this->OpenPlaybackCaches).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OpenRecordCaches).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PerSolverData).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PerSolverData).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsSolverEvents_*,FPerSolverData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsSolverEvents_*,FPerSolverData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsSolverEvents_*,FPerSolverData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerSolverData);
  pFVar1 = (this->ActiveAdapters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FObservedComponent,int>
            ((FObservedComponent *)(this->ObservedComponents).AllocatorInstance.Data,
             (this->ObservedComponents).ArrayNum);
  pFVar1 = (this->ObservedComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// operator() @ 14dae9e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
`AChaosCacheManager::HandlePostSolve'::__l2::<lambda_2>::operator()
          (void *this,UChaosCache *param_1,FObservedComponent *param_2,
          FComponentCacheAdapter *param_3)

{
  TNode *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UActorComponent *pUVar5;
  UClass *pUVar6;
  TNode *pTVar7;
  TQueue<FPendingFrameWrite,0> *pTVar8;
  undefined1 auStackY_198 [32];
  FPendingFrameWrite local_168;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pUVar5 = FSoftComponentReference::GetComponent(&param_2->SoftComponentRef,*(AActor **)this);
  if (pUVar5 != (UActorComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if (((iVar2 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8)
         == &pUVar6->_padding_)) && (param_1 != (UChaosCache *)0x0)) {
      if (param_2->TimeSinceTrigger <= (double)param_1->RecordedDuration) {
        return;
      }
      FPendingFrameWrite::FPendingFrameWrite(&local_168);
      local_168.Time = (float)param_2->TimeSinceTrigger;
      if (*(char *)(*(longlong *)this + 0x36c) != '\0') {
        local_168.Time = local_168.Time + *(float *)(*(longlong *)this + 0x370);
      }
      (**(code **)(param_3->_padding_ + 0x78))
                (param_3,pUVar5,&(param_2->TickRecord).SpaceTransform,&local_168);
      pTVar8 = &param_1->PendingWrites;
      pTVar7 = ::operator_new(0x130);
      if (pTVar7 != (TNode *)0x0) {
        pTVar7->NextNode = (TNode *)0x0;
        FPendingFrameWrite::FPendingFrameWrite(&pTVar7->Item,&local_168);
        if (((ulonglong)pTVar8 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        pTVar1 = pTVar8->Head;
        pTVar8->Head = pTVar7;
        UNLOCK();
        if (((ulonglong)pTVar1 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        pTVar1->NextNode = pTVar7;
        UNLOCK();
      }
      FPendingFrameWrite::~FPendingFrameWrite(&local_168);
      return;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_265275798884187353>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheManagerActor.cpp"
                     ,0x327,"Comp && InCache");
  if (!bVar4) {
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// operator() @ 14daea030

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
`AChaosCacheManager::HandlePreSolve'::__l2::<lambda_2>::operator()
          (void *this,UChaosCache *param_1,FObservedComponent *param_2,
          FComponentCacheAdapter *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UActorComponent *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = FSoftComponentReference::GetComponent(&param_2->SoftComponentRef,*(AActor **)this);
  if (pUVar4 != (UActorComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      (**(code **)(param_3->_padding_ + 0x80))
                (param_3,pUVar4,param_1,param_2->TimeSinceTrigger,&param_2->TickRecord,
                 *(longlong *)((longlong)this + 8) + 0x50);
      return;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_265275798884187403>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheManagerActor.cpp"
                     ,0x2f5,"Comp");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// AddNewObservedComponent @ 14daeb210

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FObservedComponent * __thiscall
AChaosCacheManager::AddNewObservedComponent(AChaosCacheManager *this,UPrimitiveComponent *param_1)

{
  int *piVar1;
  longlong *plVar2;
  TArray<FObservedComponent,TSizedDefaultAllocator<32>_> *pTVar3;
  AChaosCacheManager *pAVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FObservedComponent *pFVar9;
  FString *pFVar10;
  FName FVar11;
  UClass *pUVar12;
  uint uVar13;
  AChaosCacheManager *local_res18 [2];
  FString local_48;
  
  pTVar3 = &this->ObservedComponents;
  iVar7 = (this->ObservedComponents).ArrayNum;
  piVar1 = &(this->ObservedComponents).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (400,0x10,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->ObservedComponents).ArrayNum = iVar7 + 1;
  DefaultConstructItems<FObservedComponent,int>
            ((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 400,1);
  iVar7 = (this->ObservedComponents).ArrayNum;
  uVar13 = iVar7 - 1;
  uVar8 = 0;
  if ((int)uVar13 < iVar7) {
    uVar8 = ~uVar13 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FObservedComponent *)(*pcVar5)();
      return pFVar9;
    }
  }
  pAVar4 = *(AChaosCacheManager **)&param_1->field_0xa8;
  pFVar9 = (FObservedComponent *)
           ((pTVar3->AllocatorInstance).Data +
           (longlong)(this->ObservedComponents).ArrayNum * 400 + -400);
  pFVar10 = UObjectBaseUtility::GetPathName
                      ((UObjectBaseUtility *)param_1,&local_48,(UObject *)pAVar4);
  plVar2 = &(pFVar9->SoftComponentRef)._padding_;
  if ((FString *)plVar2 != pFVar10) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = (longlong)(pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&(pFVar9->SoftComponentRef)._padding_ = (pFVar10->Data).ArrayNum;
    *(int *)((longlong)&(pFVar9->SoftComponentRef)._padding_ + 4) = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_res18[0] = pAVar4;
  if (pAVar4 == this) {
    local_res18[0] = (AChaosCacheManager *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0] != (AChaosCacheManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  FSoftObjectPtr::operator=
            (&(pFVar9->SoftComponentRef).OtherActor.SoftObjectPtr,(FObjectPtr)local_res18);
  FVar11 = (FName)UChaosCache::StaticClass();
  FVar11 = MakeUniqueObjectName
                     ((UObject *)(local_res18 + 1),
                      (UClass *)(this->CacheCollection).field0_0x0.DebugPtr,FVar11,None);
  pFVar9->CacheName = *(FName *)FVar11;
  bVar6 = (bool)(**(code **)(*(longlong *)param_1 + 0x4f8))(param_1,0);
  pFVar9->bIsSimulating = bVar6;
  pFVar9->bHasNotifyBreaks = false;
  pUVar12 = Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
  iVar7 = (int)pUVar12->_padding_;
  if (((iVar7 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
      ((longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar7 * 8) ==
       &pUVar12->_padding_)) && (param_1 != (UPrimitiveComponent *)0x0)) {
    pFVar9->bHasNotifyBreaks = (bool)param_1[1].field_0x280;
  }
  EnsureObservedComponentsNotifierRegistration(this);
  return pFVar9;
}

// BeginEvaluate @ 14daeb500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosCacheManager::BeginEvaluate(AChaosCacheManager *this)

{
  int *piVar1;
  TMap<Chaos::FPhysicsSolverEvents_*,FPerSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>_>
  *this_00;
  TArray<TTuple<FCacheUserToken,UChaosCache_*>,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  UChaosCacheCollection *pUVar4;
  longlong *plVar5;
  code *pcVar6;
  double dVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  IModularFeatures *this_01;
  UPrimitiveComponent *pUVar15;
  UClass *pUVar16;
  FComponentCacheAdapter *pFVar17;
  FPerSolverData *pFVar18;
  undefined8 *puVar19;
  ulong64 uVar20;
  FDelegateHandle FVar21;
  FName *pFVar22;
  FName FVar23;
  FName FVar24;
  UChaosCache *pUVar25;
  TTransform<double> *pTVar26;
  ulonglong uVar27;
  uint uVar28;
  ForAnyElementType FVar29;
  FScriptContainerElement *pFVar30;
  FScriptContainerElement *pFVar31;
  longlong lVar32;
  TTransform<double> *pTVar33;
  TArray<Chaos::FComponentCacheAdapter_*,TSizedDefaultAllocator<32>_> *pTVar34;
  FIdentityFunctor local_res8;
  undefined1 local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  undefined1 local_308 [72];
  FComponentCacheAdapter *local_2c0;
  double local_2b8;
  undefined1 local_2b0 [8];
  UChaosCache *local_2a8;
  FName local_2a0;
  undefined2 local_298;
  FName local_290;
  FName local_288;
  FCacheUserToken local_280;
  TArray<Chaos::FComponentCacheAdapter_*,TSizedDefaultAllocator<32>_> local_270;
  TKeyInitializer<Chaos::FPhysicsSolverEvents_*_const_&> local_260;
  double local_258;
  FName local_250;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_248;
  FDelegateAllocation local_240;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_230;
  FDelegateAllocation local_228;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_218;
  FDelegateAllocation local_210;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_200;
  FDelegateAllocation local_1f8;
  AChaosCacheManager *local_1e8;
  AChaosCacheManager *local_1e0;
  longlong *local_1d8;
  FName local_1d0;
  FName local_1c8;
  FName local_1c0;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FName local_168;
  FName local_160;
  undefined8 *local_158;
  AChaosCacheManager *local_150;
  AChaosCacheManager *local_148;
  FDestructionSentinel local_140;
  FDelegateAllocation *local_128;
  FDestructionSentinel local_120;
  FDelegateAllocation *local_108;
  FDestructionSentinel local_100;
  FDelegateAllocation *local_e8;
  FDestructionSentinel local_e0;
  FDelegateAllocation *local_c8;
  undefined1 local_c0 [24];
  undefined1 local_a8 [8];
  FString local_a0;
  FName local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  FString local_68;
  undefined1 local_58 [24];
  
  EndEvaluate(this);
  pUVar4 = (this->CacheCollection).field0_0x0.DebugPtr;
  this->bIsSimulating = this->CacheMode != None;
  if (pUVar4 == (UChaosCacheCollection *)0x0) {
    if (2 < (byte)LogChaosCache._0_1_) {
      local_168 = (FName)this->_padding_;
      ::FName::ToString(&local_168,&local_1b8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCache);
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(this->_padding_ + 0x4a8))(this,0);
    return;
  }
  (**(code **)(this->_padding_ + 0x4a8))(this,1);
  this_01 = IModularFeatures::Get();
  IModularFeatures::GetModularFeatureImplementations<Chaos::FComponentCacheAdapter>
            (this_01,&local_270,Chaos::FComponentCacheAdapter::FeatureName);
  iVar14 = local_270.ArrayNum;
  uVar27 = (ulonglong)local_270.ArrayNum;
  pFVar31 = local_270.AllocatorInstance.Data + uVar27 * 8;
  FVar29.Data = local_270.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar27 != iVar14) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::FComponentCacheAdapter_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    if (FVar29.Data == pFVar31) break;
    (**(code **)((*(FComponentCacheAdapter **)FVar29.Data)->_padding_ + 0x30))();
    uVar27 = (ulonglong)(uint)local_270.ArrayNum;
    FVar29.Data = FVar29.Data + 8;
  }
  if (((this->ActiveAdapters).ArrayNum != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActiveAdapters.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheManagerActor.cpp"
                          ,0x1d1,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_260.Key._4_4_ = (this->ObservedComponents).ArrayNum;
  local_res20 = 0;
  local_308._0_4_ = 0;
  if (0 < local_260.Key._4_4_) {
    local_res8 = SUB81(this,0);
    pTVar34 = &this->ActiveAdapters;
    local_308._64_8_ = pTVar34;
    do {
      uVar8 = local_308._0_4_;
      uVar13 = 0;
      if ((int)local_308._0_4_ < (this->ObservedComponents).ArrayNum) {
        uVar13 = (uint)~local_308._0_4_ >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_308._56_8_ =
           (this->ObservedComponents).AllocatorInstance.Data + (longlong)(int)uVar8 * 400;
      pUVar15 = (UPrimitiveComponent *)
                FSoftComponentReference::GetComponent
                          ((FSoftComponentReference *)(local_308._56_8_ + 0x30),(AActor *)this);
      local_308._8_8_ = pUVar15;
      if (pUVar15 == (UPrimitiveComponent *)0x0) {
LAB_14daec9fc:
        if (2 < (byte)LogChaosCache._0_1_) {
          local_1c8 = (FName)this->_padding_;
          ::FName::ToString(&local_1c8,&local_178);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCache);
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
        }
        pFVar31 = (pTVar34->AllocatorInstance).Data;
        local_2b8 = 0.0;
        if (((pFVar31 <= (FScriptContainerElement *)&local_2b8) &&
            ((FScriptContainerElement *)&local_2b8 < pFVar31 + (longlong)pTVar34->ArrayMax * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar14 = pTVar34->ArrayNum;
        if (iVar14 == pTVar34->ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar34->AllocatorInstance,&pTVar34->ArrayMax);
        }
        pTVar34->ArrayNum = iVar14 + 1;
        *(double *)((pTVar34->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_2b8;
      }
      else {
        pUVar16 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        lVar32 = *(longlong *)&pUVar15->field_0x10;
        iVar14 = (int)pUVar16->_padding_;
        if ((*(int *)(lVar32 + 0x38) < iVar14) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar32 + 0x30) + (longlong)iVar14 * 8) !=
            &pUVar16->_padding_)) goto LAB_14daec9fc;
        local_308._40_8_ = (FScriptContainerElement *)0x0;
        local_308._48_8_ = 0.0;
        pFVar31 = local_270.AllocatorInstance.Data + (longlong)local_270.ArrayNum * 8;
        for (FVar29.Data = local_270.AllocatorInstance.Data; FVar29.Data != pFVar31;
            FVar29.Data = FVar29.Data + 8) {
          if ((*(FComponentCacheAdapter **)FVar29.Data != (FComponentCacheAdapter *)0x0) &&
             (cVar11 = (**(code **)((*(FComponentCacheAdapter **)FVar29.Data)->_padding_ + 8))(),
             cVar11 == '\x01')) {
            if (((ulonglong)local_308._40_8_ <= FVar29.Data) &&
               ((FVar29.Data <
                 (FScriptContainerElement *)(local_308._40_8_ + (longlong)(int)local_308._52_4_ * 8)
                && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)))) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar14 = local_308._48_4_;
            if (local_308._48_4_ == local_308._52_4_) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,(ForAnyElementType *)(local_308 + 0x28),
                                  (int *)(local_308 + 0x34));
            }
            local_308._48_4_ = iVar14 + 1;
            *(FComponentCacheAdapter **)(local_308._40_8_ + (longlong)iVar14 * 8) =
                 *(FComponentCacheAdapter **)FVar29.Data;
          }
        }
        local_308._24_8_ = (FScriptContainerElement *)0x0;
        local_308._32_8_ = 0.0;
        pFVar31 = local_270.AllocatorInstance.Data + (longlong)local_270.ArrayNum * 8;
        for (pFVar30 = local_270.AllocatorInstance.Data; pFVar30 != pFVar31; pFVar30 = pFVar30 + 8)
        {
          pFVar17 = *(FComponentCacheAdapter **)pFVar30;
          if ((pFVar17 != (FComponentCacheAdapter *)0x0) &&
             (cVar11 = (**(code **)(pFVar17->_padding_ + 8))(pFVar17,lVar32), cVar11 == '\x02')) {
            if (((ulonglong)local_308._24_8_ <= pFVar30) &&
               ((pFVar30 < (FScriptContainerElement *)
                           (local_308._24_8_ + (longlong)(int)local_308._36_4_ * 8) &&
                (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)))) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar14 = local_308._32_4_;
            if (local_308._32_4_ == local_308._36_4_) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,(ForAnyElementType *)(local_308 + 0x18),
                                  (int *)(local_308 + 0x24));
            }
            local_308._32_4_ = iVar14 + 1;
            *(FComponentCacheAdapter **)(local_308._24_8_ + (longlong)iVar14 * 8) =
                 *(FComponentCacheAdapter **)pFVar30;
          }
        }
        AlgoImpl::
        IntroSortInternal<Chaos::FComponentCacheAdapter_*,int,FIdentityFunctor,_AChaosCacheManager::BeginEvaluate_::__l38::<lambda_1>_>
                  ((FComponentCacheAdapter **)local_308._40_8_,local_308._48_4_,local_res8,
                   (<lambda_1>)local_res8);
        AlgoImpl::
        IntroSortInternal<Chaos::FComponentCacheAdapter_*,int,FIdentityFunctor,_AChaosCacheManager::BeginEvaluate_::__l38::<lambda_1>_>
                  ((FComponentCacheAdapter **)local_308._24_8_,local_308._32_4_,local_res8,
                   (<lambda_1>)local_res8);
        if (local_308._48_4_ == 0) {
          if (local_308._32_4_ != 0) {
LAB_14daebae3:
            pFVar31 = (FScriptContainerElement *)local_308._24_8_;
            if (((int)local_308._32_4_ < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               pFVar31 = (FScriptContainerElement *)local_308._24_8_, bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            goto LAB_14daebb1e;
          }
          if (2 < (byte)LogChaosCache._0_1_) {
            local_160 = (FName)this->_padding_;
            ::FName::ToString(&local_160,&local_1a8);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCache);
            if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
            }
          }
          local_2c0 = (FComponentCacheAdapter *)0x0;
          pFVar31 = (this->ActiveAdapters).AllocatorInstance.Data;
          if (((pFVar31 <= (FScriptContainerElement *)&local_2c0) &&
              ((FScriptContainerElement *)&local_2c0 <
               pFVar31 + (longlong)(this->ActiveAdapters).ArrayMax * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar14 = (this->ActiveAdapters).ArrayNum;
          piVar1 = &(this->ActiveAdapters).ArrayMax;
          if (iVar14 == *piVar1) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&(this->ActiveAdapters).AllocatorInstance,piVar1);
          }
          (this->ActiveAdapters).ArrayNum = iVar14 + 1;
          pFVar17 = local_2c0;
        }
        else {
          if ((int)local_308._48_4_ < 1) goto LAB_14daebae3;
          pFVar31 = (FScriptContainerElement *)local_308._40_8_;
          if (((int)local_308._48_4_ < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             pFVar31 = (FScriptContainerElement *)local_308._40_8_, bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
LAB_14daebb1e:
          pFVar30 = (this->ActiveAdapters).AllocatorInstance.Data;
          if (((pFVar30 <= pFVar31) &&
              (pFVar31 < pFVar30 + (longlong)(this->ActiveAdapters).ArrayMax * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar14 = (this->ActiveAdapters).ArrayNum;
          piVar1 = &(this->ActiveAdapters).ArrayMax;
          if (iVar14 == *piVar1) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&(this->ActiveAdapters).AllocatorInstance,piVar1);
          }
          (this->ActiveAdapters).ArrayNum = iVar14 + 1;
          pFVar17 = *(FComponentCacheAdapter **)pFVar31;
        }
        uVar9 = local_308._56_8_;
        pTVar34 = &this->ActiveAdapters;
        *(FComponentCacheAdapter **)((pTVar34->AllocatorInstance).Data + (longlong)iVar14 * 8) =
             pFVar17;
        *(bool *)((longlong)&(((FName *)(local_308._56_8_ + 0x90))->ComparisonIndex).Value + 1) =
             this->StartMode == Timed;
        ((FName *)(local_308._56_8_ + 0xa8))->ComparisonIndex = 0;
        ((FName *)(local_308._56_8_ + 0xa8))->Number = 0;
        ((FName *)(local_308._56_8_ + 0xb0))->Number = 0;
        ((FName *)(local_308._56_8_ + 0x98))->ComparisonIndex = 0;
        ((FName *)(local_308._56_8_ + 0x98))->Number = 0;
        ((FName *)(local_308._56_8_ + 0xa0))->ComparisonIndex = 0;
        ((FName *)(local_308._56_8_ + 0xa0))->Number = 0;
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
                  ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    *)(local_308._56_8_ + 0xb8));
        if ((this->CacheMode == Record) ||
           (*(char *)((longlong)&(((FName *)(uVar9 + 0x78))->ComparisonIndex).Value + 1) != '\0')) {
          lVar32 = (longlong)(int)local_308._0_4_;
          local_res10 = 0;
          uVar13 = 0;
          if ((int)local_308._0_4_ < (this->ActiveAdapters).ArrayNum) {
            uVar13 = (uint)~local_308._0_4_ >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          plVar5 = *(longlong **)((pTVar34->AllocatorInstance).Data + lVar32 * 8);
          local_1d8 = plVar5;
          if ((plVar5 == (longlong *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrAdapter",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheManagerActor.cpp"
                                  ,0x210,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          cVar11 = (**(code **)(*plVar5 + 0xa0))(plVar5);
          if (cVar11 != '\0') {
            *(bool *)(plVar5 + 1) = this->bRestartSimulation;
            fVar3 = this->RestartTimeStart;
            *(float *)(plVar5 + 2) = this->RestartTimeEnd;
            *(float *)((longlong)plVar5 + 0xc) = fVar3;
          }
          if ((this->CacheMode != None) &&
             (local_308._16_8_ = (**(code **)(*plVar5 + 0x28))(plVar5,local_308._8_8_),
             (FPhysicsSolverEvents *)local_308._16_8_ != (FPhysicsSolverEvents *)0x0)) {
            this_00 = &this->PerSolverData;
            pFVar18 = TMapBase<Chaos::FPhysicsSolverEvents_*,FPerSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>_>
                      ::Find((TMapBase<Chaos::FPhysicsSolverEvents_*,FPerSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>_>
                              *)this_00,(FPhysicsSolverEvents *)local_308._16_8_);
            if (pFVar18 == (FPerSolverData *)0x0) {
              local_158 = (undefined8 *)(local_308 + 0x10);
              TSet<TTuple<Chaos::FPhysicsSolverEvents_*,FPerSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>,FDefaultSetAllocator>
              ::Emplace<TKeyInitializer<Chaos::FPhysicsSolverEvents_*_const_&>_>
                        ((TSet<TTuple<Chaos::FPhysicsSolverEvents_*,FPerSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>,FDefaultSetAllocator>
                          *)this_00,&local_260,(bool *)&local_158);
              local_230.AccessDetector.State =
                   (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
              local_228.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              pFVar18 = (FPerSolverData *)
                        (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_260.Key * 0x70 + 8)
              ;
              local_228.DelegateSize = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_230,(FWriteAccessScope *)&local_120);
              local_108 = &local_228;
              puVar19 = UE::Core::Private::DelegateAllocate(0x28,&local_228);
              if (puVar19 != (undefined8 *)0x0) {
                *puVar19 = &
                           ___7__TCommonDelegateInstanceState___A6AXN_ZUFDefaultDelegateUserPolicy__PEAVFPhysicsSolverEvents_Chaos____6B_
                ;
                puVar19[1] = local_308._16_8_;
                uVar20 = FDelegateHandle::GenerateNewID();
                puVar19[2] = uVar20;
                *puVar19 = &
                           ___7__TBaseUObjectMethodDelegateInstance__0A_VAChaosCacheManager____A6AXN_ZUFDefaultDelegateUserPolicy__PEAVFPhysicsSolverEvents_Chaos____6B_
                ;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                puVar19[3] = 0;
                local_150 = this;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar19 + 3),(FObjectPtr)&local_150);
                puVar19[4] = HandlePreSolve;
              }
              if (local_120.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
              }
              FVar21 = Chaos::FPhysicsSolverEvents::AddPreAdvanceCallback
                                 ((FPhysicsSolverEvents *)local_308._16_8_,
                                  (TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy> *)
                                  local_a8);
              local_248.AccessDetector.State =
                   (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
              local_240.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_240.DelegateSize = 0;
                    /* WARNING: Load size is inaccurate */
              (pFVar18->PreSolveHandle).ID = *FVar21.ID;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_248,(FWriteAccessScope *)&local_100);
              local_e8 = &local_240;
              puVar19 = UE::Core::Private::DelegateAllocate(0x28,&local_240);
              if (puVar19 != (undefined8 *)0x0) {
                *puVar19 = &
                           ___7__TCommonDelegateInstanceState___A6AXN_ZUFDefaultDelegateUserPolicy__PEAVFPhysicsSolverEvents_Chaos____6B_
                ;
                puVar19[1] = local_308._16_8_;
                uVar20 = FDelegateHandle::GenerateNewID();
                puVar19[2] = uVar20;
                *puVar19 = &
                           ___7__TBaseUObjectMethodDelegateInstance__0A_VAChaosCacheManager____A6AXN_ZUFDefaultDelegateUserPolicy__PEAVFPhysicsSolverEvents_Chaos____6B_
                ;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                puVar19[3] = 0;
                local_148 = this;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar19 + 3),(FObjectPtr)&local_148);
                puVar19[4] = HandlePreBuffer;
              }
              if (local_100.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
              }
              FVar21 = Chaos::FPhysicsSolverEvents::AddPreBufferCallback
                                 ((FPhysicsSolverEvents *)local_308._16_8_,
                                  (TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy> *)
                                  local_c0);
              local_218.AccessDetector.State =
                   (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
              local_210.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_210.DelegateSize = 0;
                    /* WARNING: Load size is inaccurate */
              (pFVar18->PreBufferHandle).ID = *FVar21.ID;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_218,(FWriteAccessScope *)&local_e0);
              local_c8 = &local_210;
              puVar19 = UE::Core::Private::DelegateAllocate(0x28,&local_210);
              if (puVar19 != (undefined8 *)0x0) {
                *puVar19 = &
                           ___7__TCommonDelegateInstanceState___A6AXN_ZUFDefaultDelegateUserPolicy__PEAVFPhysicsSolverEvents_Chaos____6B_
                ;
                puVar19[1] = local_308._16_8_;
                uVar20 = FDelegateHandle::GenerateNewID();
                puVar19[2] = uVar20;
                *puVar19 = &
                           ___7__TBaseUObjectMethodDelegateInstance__0A_VAChaosCacheManager____A6AXN_ZUFDefaultDelegateUserPolicy__PEAVFPhysicsSolverEvents_Chaos____6B_
                ;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                puVar19[3] = 0;
                local_1e8 = this;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar19 + 3),(FObjectPtr)&local_1e8);
                puVar19[4] = HandlePostSolve;
              }
              if (local_e0.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
              }
              FVar21 = Chaos::FPhysicsSolverEvents::AddPostAdvanceCallback
                                 ((FPhysicsSolverEvents *)local_308._16_8_,
                                  (TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy> *)
                                  (local_78 + 8));
              local_200.AccessDetector.State =
                   (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
              local_1f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_1f8.DelegateSize = 0;
                    /* WARNING: Load size is inaccurate */
              (pFVar18->PostSolveHandle).ID = *FVar21.ID;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_200,(FWriteAccessScope *)&local_140);
              local_128 = &local_1f8;
              puVar19 = UE::Core::Private::DelegateAllocate(0x28,&local_1f8);
              if (puVar19 != (undefined8 *)0x0) {
                *puVar19 = &
                           ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAVFPhysicsSolverEvents_Chaos____6B_
                ;
                puVar19[1] = local_308._16_8_;
                uVar20 = FDelegateHandle::GenerateNewID();
                puVar19[2] = uVar20;
                *puVar19 = &
                           ___7__TBaseUObjectMethodDelegateInstance__0A_VAChaosCacheManager____A6AXXZUFDefaultDelegateUserPolicy__PEAVFPhysicsSolverEvents_Chaos____6B_
                ;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                puVar19[3] = 0;
                local_1e0 = this;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar19 + 3),(FObjectPtr)&local_1e0);
                puVar19[4] = HandleTeardown;
              }
              if (local_140.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
              }
              FVar21 = Chaos::FPhysicsSolverEvents::AddTeardownCallback
                                 ((FPhysicsSolverEvents *)local_308._16_8_,
                                  (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                                  local_78);
                    /* WARNING: Load size is inaccurate */
              (pFVar18->TeardownHandle).ID = *FVar21.ID;
            }
            if ((this->CacheMode == Play) || (this->bCanRecord == false)) {
              FVar24 = (FName)UChaosCacheCollection::FindCache
                                        ((this->CacheCollection).field0_0x0.DebugPtr,
                                         (FName *)local_308._56_8_);
              if (FVar24 == (FName)0x0) {
                pTVar34 = (TArray<Chaos::FComponentCacheAdapter_*,TSizedDefaultAllocator<32>_> *)
                          local_308._64_8_;
                if (4 < (byte)LogChaosCache._0_1_) {
                  local_1c0 = *(FName *)(local_308._8_8_ + 0x18);
                  ::FName::ToString(&local_1c0,&local_188);
                  UE::Logging::Private::BasicLog<5>
                            (&::LOG_Static,(FLogCategoryBase *)&LogChaosCache);
                  pTVar34 = (TArray<Chaos::FComponentCacheAdapter_*,TSizedDefaultAllocator<32>_> *)
                            local_308._64_8_;
                  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_188.Data.AllocatorInstance.Data);
                    pTVar34 = (TArray<Chaos::FComponentCacheAdapter_*,TSizedDefaultAllocator<32>_> *
                              )local_308._64_8_;
                  }
                }
              }
              else {
                LOCK();
                *(atomic<int> *)((longlong)FVar24 + 0x324) =
                     (atomic<int>)((int)*(atomic<int> *)((longlong)FVar24 + 0x324) + 1);
                UNLOCK();
                if (*(atomic<int> *)((longlong)FVar24 + 800) == (atomic<int>)0x0) {
                  cVar11 = (**(code **)(*plVar5 + 0x90))(plVar5,local_308._8_8_);
                  if (cVar11 == '\0') {
                    if (2 < (byte)LogChaosCache._0_1_) {
                      UObjectBaseUtility::GetPathName
                                ((UObjectBaseUtility *)local_308._8_8_,&local_68,(UObject *)0x0);
                      UE::Logging::Private::BasicLog<3>
                                (&::LOG_Static,(FLogCategoryBase *)&LogChaosCache);
                      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_68.Data.AllocatorInstance.Data);
                      }
                    }
                    LOCK();
                    *(atomic<int> *)((longlong)FVar24 + 0x324) =
                         (atomic<int>)((int)*(atomic<int> *)((longlong)FVar24 + 0x324) + -1);
                    UNLOCK();
                    local_res20 = local_res20 + 1;
                    pTVar34 = (TArray<Chaos::FComponentCacheAdapter_*,TSizedDefaultAllocator<32>_> *
                              )local_308._64_8_;
                  }
                  else {
                    pTVar34 = (TArray<Chaos::FComponentCacheAdapter_*,TSizedDefaultAllocator<32>_> *
                              )local_308._64_8_;
                    if (this->CacheMode == Play) {
                      pFVar31 = (pFVar18->PlaybackIndices).AllocatorInstance.Data;
                      if (((pFVar31 <= (FScriptContainerElement *)local_308) &&
                          ((FScriptContainerElement *)local_308 <
                           pFVar31 + (longlong)(pFVar18->PlaybackIndices).ArrayMax * 4)) &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar10)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      iVar14 = (pFVar18->PlaybackIndices).ArrayNum;
                      piVar1 = &(pFVar18->PlaybackIndices).ArrayMax;
                      if (iVar14 == *piVar1) {
                        iVar14 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,&(pFVar18->PlaybackIndices).AllocatorInstance,
                                            piVar1);
                      }
                      (pFVar18->PlaybackIndices).ArrayNum = iVar14 + 1;
                      piVar1 = &(pFVar18->PlaybackTickRecords).ArrayMax;
                      *(undefined4 *)
                       ((pFVar18->PlaybackIndices).AllocatorInstance.Data + (longlong)iVar14 * 4) =
                           local_308._0_4_;
                      iVar14 = (pFVar18->PlaybackTickRecords).ArrayNum;
                      if (iVar14 == *piVar1) {
                        iVar14 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x10c0,&(pFVar18->PlaybackTickRecords).AllocatorInstance
                                            ,piVar1);
                      }
                      (pFVar18->PlaybackTickRecords).ArrayNum = iVar14 + 1;
                      DefaultConstructItems<FPlaybackTickRecord,int>
                                ((pFVar18->PlaybackTickRecords).AllocatorInstance.Data +
                                 (longlong)iVar14 * 0xc0,1);
                      iVar14 = (pFVar18->PlaybackTickRecords).ArrayNum;
                      uVar28 = iVar14 - 1;
                      uVar13 = 0;
                      if ((int)uVar28 < iVar14) {
                        uVar13 = ~uVar28 >> 0x1f;
                      }
                      if ((uVar13 == 0) &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar10)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      pFVar31 = (pFVar18->PlaybackTickRecords).AllocatorInstance.Data;
                      lVar32 = (longlong)(pFVar18->PlaybackTickRecords).ArrayNum * 0xc0;
                      if (this->_padding_ == 0) {
                        pTVar33 = &UE::Math::TTransform<double>::Identity;
                      }
                      else {
                        pTVar33 = (TTransform<double> *)(this->_padding_ + 0x1f0);
                      }
                      dVar7 = (pTVar33->Rotation).XY.m128d_f64[1];
                      *(double *)(pFVar31 + lVar32 + -0x60) = (pTVar33->Rotation).XY.m128d_f64[0];
                      *(double *)(pFVar31 + lVar32 + -0x60 + 8) = dVar7;
                      dVar7 = (pTVar33->Rotation).ZW.m128d_f64[1];
                      *(double *)(pFVar31 + lVar32 + -0x50) = (pTVar33->Rotation).ZW.m128d_f64[0];
                      *(double *)(pFVar31 + lVar32 + -0x50 + 8) = dVar7;
                      dVar7 = (pTVar33->Translation).XY.m128d_f64[1];
                      *(double *)(pFVar31 + lVar32 + -0x40) = (pTVar33->Translation).XY.m128d_f64[0]
                      ;
                      *(double *)(pFVar31 + lVar32 + -0x40 + 8) = dVar7;
                      dVar7 = (pTVar33->Translation).ZW.m128d_f64[1];
                      *(double *)(pFVar31 + lVar32 + -0x30) = (pTVar33->Translation).ZW.m128d_f64[0]
                      ;
                      *(double *)(pFVar31 + lVar32 + -0x30 + 8) = dVar7;
                      dVar7 = (pTVar33->Scale3D).XY.m128d_f64[1];
                      *(double *)(pFVar31 + lVar32 + -0x20) = (pTVar33->Scale3D).XY.m128d_f64[0];
                      *(double *)(pFVar31 + lVar32 + -0x20 + 8) = dVar7;
                      dVar7 = (pTVar33->Scale3D).ZW.m128d_f64[1];
                      *(double *)(pFVar31 + lVar32 + -0x10) = (pTVar33->Scale3D).ZW.m128d_f64[0];
                      *(double *)(pFVar31 + lVar32 + -0x10 + 8) = dVar7;
                      *(FName *)(local_308._56_8_ + 0xa8) = FVar24;
                      if (this->_padding_ == 0) {
                        pTVar33 = &UE::Math::TTransform<double>::Identity;
                      }
                      else {
                        pTVar33 = (TTransform<double> *)(this->_padding_ + 0x1f0);
                      }
                      FVar23 = *(FName *)((pTVar33->Rotation).XY.m128d_f64 + 1);
                      pTVar2 = &this->OpenPlaybackCaches;
                      *(double *)(local_308._56_8_ + 0x110) = (pTVar33->Rotation).XY.m128d_f64[0];
                      *(FName *)(local_308._56_8_ + 0x118) = FVar23;
                      local_298 = 1;
                      FVar23 = *(FName *)((pTVar33->Rotation).ZW.m128d_f64 + 1);
                      *(double *)(local_308._56_8_ + 0x120) = (pTVar33->Rotation).ZW.m128d_f64[0];
                      *(FName *)(local_308._56_8_ + 0x128) = FVar23;
                      FVar23 = *(FName *)((pTVar33->Translation).XY.m128d_f64 + 1);
                      *(double *)(local_308._56_8_ + 0x130) = (pTVar33->Translation).XY.m128d_f64[0]
                      ;
                      *(FName *)(local_308._56_8_ + 0x138) = FVar23;
                      FVar23 = *(FName *)((pTVar33->Translation).ZW.m128d_f64 + 1);
                      *(double *)(local_308._56_8_ + 0x140) = (pTVar33->Translation).ZW.m128d_f64[0]
                      ;
                      *(FName *)(local_308._56_8_ + 0x148) = FVar23;
                      FVar23 = *(FName *)((pTVar33->Scale3D).XY.m128d_f64 + 1);
                      *(double *)(local_308._56_8_ + 0x150) = (pTVar33->Scale3D).XY.m128d_f64[0];
                      *(FName *)(local_308._56_8_ + 0x158) = FVar23;
                      FVar23 = *(FName *)((pTVar33->Scale3D).ZW.m128d_f64 + 1);
                      *(double *)(local_308._56_8_ + 0x160) = (pTVar33->Scale3D).ZW.m128d_f64[0];
                      *(FName *)(local_308._56_8_ + 0x168) = FVar23;
                      ((FName *)(local_308._56_8_ + 0xb0))->Number = (uint)this->StartTime;
                      pFVar31 = (pTVar2->AllocatorInstance).Data;
                      local_290 = FVar24;
                      local_288 = FVar24;
                      if (((pFVar31 <= (FScriptContainerElement *)&local_298) &&
                          ((FScriptContainerElement *)&local_298 <
                           pFVar31 + (longlong)(this->OpenPlaybackCaches).ArrayMax * 0x18)) &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar10)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      iVar14 = (this->OpenPlaybackCaches).ArrayNum;
                      piVar1 = &(this->OpenPlaybackCaches).ArrayMax;
                      if (iVar14 == *piVar1) {
                        iVar14 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x818,&pTVar2->AllocatorInstance,piVar1);
                      }
                      (this->OpenPlaybackCaches).ArrayNum = iVar14 + 1;
                      pFVar31 = (pTVar2->AllocatorInstance).Data;
                      lVar32 = (longlong)iVar14;
                      pFVar31[lVar32 * 0x18] = local_298._0_1_;
                      pFVar31[lVar32 * 0x18 + 1] = local_298._1_1_;
                      *(FName *)(pFVar31 + lVar32 * 0x18 + 8) = local_290;
                      local_298 = 0;
                      local_290 = (FName)0x0;
                      *(FName *)(pFVar31 + lVar32 * 0x18 + 0x10) = local_288;
                      (**(code **)(*plVar5 + 0x60))
                                (plVar5,local_308._8_8_,local_308._56_8_,this->StartTime);
                      goto LAB_14daec4b2;
                    }
                  }
                }
                else {
                  LOCK();
                  *(atomic<int> *)((longlong)FVar24 + 0x324) =
                       (atomic<int>)((int)*(atomic<int> *)((longlong)FVar24 + 0x324) + -1);
                  UNLOCK();
                  if (2 < (byte)LogChaosCache._0_1_) {
                    UObjectBaseUtility::GetPathName
                              ((UObjectBaseUtility *)FVar24,&local_a0,(UObject *)0x0);
                    local_1d0 = *(FName *)(local_308._8_8_ + 0x18);
                    ::FName::ToString(&local_1d0,&local_198);
                    UE::Logging::Private::BasicLog<3>
                              (&::LOG_Static,(FLogCategoryBase *)&LogChaosCache);
                    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_198.Data.AllocatorInstance.Data);
                    }
                    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
                    }
                  }
                  local_res20 = local_res20 + 1;
                  pTVar34 = (TArray<Chaos::FComponentCacheAdapter_*,TSizedDefaultAllocator<32>_> *)
                            local_308._64_8_;
                }
              }
            }
            else {
              local_258 = 0.0;
              FVar24 = *(FName *)local_308._56_8_;
              FVar23 = FVar24;
              if (FVar24 == (FName)0x0) {
                pFVar22 = ::FName::FName(&local_90,"Cache");
                FVar24 = *pFVar22;
                FVar23 = (FName)UChaosCache::StaticClass();
                FVar24 = MakeUniqueObjectName
                                   ((UObject *)local_88,
                                    (UClass *)(this->CacheCollection).field0_0x0.DebugPtr,FVar23,
                                    FVar24.ComparisonIndex.Value.Value);
                FVar24 = *(FName *)FVar24;
                FVar23 = (FName)local_88._8_8_;
              }
              local_88._8_8_ = FVar23;
              local_250 = FVar24;
              pUVar25 = UChaosCacheCollection::FindOrAddCache
                                  ((this->CacheCollection).field0_0x0.DebugPtr,&local_250);
              pTVar33 = (TTransform<double> *)(this->_padding_ + 0x1f0);
              if (this->_padding_ == 0) {
                pTVar33 = &UE::Math::TTransform<double>::Identity;
              }
              puVar19 = (undefined8 *)(**(code **)(*plVar5 + 0x88))(plVar5,local_58);
              local_c0._8_8_ = *puVar19;
              local_c0._16_8_ = puVar19[1];
              UChaosCache::BeginRecord
                        (pUVar25,&local_280,(UPrimitiveComponent *)local_308._8_8_,
                         (FGuid *)(local_c0 + 8),pTVar33);
              pUVar25 = local_280.Owner;
              bVar10 = local_280.bIsOpen;
              pTVar34 = (TArray<Chaos::FComponentCacheAdapter_*,TSizedDefaultAllocator<32>_> *)
                        local_308._64_8_;
              if ((local_280.bIsOpen != false) && (local_280.Owner != (UChaosCache *)0x0)) {
                pFVar31 = (pFVar18->RecordIndices).AllocatorInstance.Data;
                if ((pFVar31 <= (FScriptContainerElement *)local_308) &&
                   ((FScriptContainerElement *)local_308 <
                    pFVar31 + (longlong)(pFVar18->RecordIndices).ArrayMax * 4)) {
                  pTVar33 = (TTransform<double> *)local_308;
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
                iVar14 = (pFVar18->RecordIndices).ArrayNum;
                piVar1 = &(pFVar18->RecordIndices).ArrayMax;
                if (iVar14 == *piVar1) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&(pFVar18->RecordIndices).AllocatorInstance,piVar1);
                }
                (pFVar18->RecordIndices).ArrayNum = iVar14 + 1;
                *(undefined4 *)
                 ((pFVar18->RecordIndices).AllocatorInstance.Data + (longlong)iVar14 * 4) =
                     local_308._0_4_;
                FVar24 = (FName)UChaosCacheCollection::FindOrAddCache
                                          ((this->CacheCollection).field0_0x0.DebugPtr,&local_250);
                *(FName *)(local_308._56_8_ + 0xa8) = FVar24;
                if (this->_padding_ == 0) {
                  pTVar26 = &UE::Math::TTransform<double>::Identity;
                }
                else {
                  pTVar26 = (TTransform<double> *)(this->_padding_ + 0x1f0);
                }
                FVar24 = *(FName *)((pTVar26->Rotation).XY.m128d_f64 + 1);
                pTVar2 = &this->OpenRecordCaches;
                *(double *)(local_308._56_8_ + 0x110) = (pTVar26->Rotation).XY.m128d_f64[0];
                *(FName *)(local_308._56_8_ + 0x118) = FVar24;
                local_2a8 = pUVar25;
                FVar24 = *(FName *)((pTVar26->Rotation).ZW.m128d_f64 + 1);
                *(double *)(local_308._56_8_ + 0x120) = (pTVar26->Rotation).ZW.m128d_f64[0];
                *(FName *)(local_308._56_8_ + 0x128) = FVar24;
                FVar24 = *(FName *)((pTVar26->Translation).XY.m128d_f64 + 1);
                *(double *)(local_308._56_8_ + 0x130) = (pTVar26->Translation).XY.m128d_f64[0];
                *(FName *)(local_308._56_8_ + 0x138) = FVar24;
                local_280.Owner = (UChaosCache *)0x0;
                FVar24 = *(FName *)((pTVar26->Translation).ZW.m128d_f64 + 1);
                *(double *)(local_308._56_8_ + 0x140) = (pTVar26->Translation).ZW.m128d_f64[0];
                *(FName *)(local_308._56_8_ + 0x148) = FVar24;
                FVar24 = *(FName *)((pTVar26->Scale3D).XY.m128d_f64 + 1);
                *(double *)(local_308._56_8_ + 0x150) = (pTVar26->Scale3D).XY.m128d_f64[0];
                *(FName *)(local_308._56_8_ + 0x158) = FVar24;
                FVar24 = *(FName *)((pTVar26->Scale3D).ZW.m128d_f64 + 1);
                local_2b0._0_2_ = CONCAT11(local_280.bIsRecord,bVar10);
                *(double *)(local_308._56_8_ + 0x160) = (pTVar26->Scale3D).ZW.m128d_f64[0];
                *(FName *)(local_308._56_8_ + 0x168) = FVar24;
                local_2a0 = *(FName *)(local_308._56_8_ + 0xa8);
                pFVar31 = (pTVar2->AllocatorInstance).Data;
                local_280.bIsOpen = false;
                local_280.bIsRecord = false;
                if ((pFVar31 <= (FScriptContainerElement *)local_2b0) &&
                   ((FScriptContainerElement *)local_2b0 <
                    pFVar31 + (longlong)(this->OpenRecordCaches).ArrayMax * 0x18)) {
                  pTVar33 = (TTransform<double> *)local_2b0;
                  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  if (bVar10) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                iVar14 = (this->OpenRecordCaches).ArrayNum;
                piVar1 = &(this->OpenRecordCaches).ArrayMax;
                if (iVar14 == *piVar1) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&pTVar2->AllocatorInstance,piVar1);
                }
                pFVar31 = (pTVar2->AllocatorInstance).Data;
                lVar32 = (longlong)iVar14;
                (this->OpenRecordCaches).ArrayNum = iVar14 + 1;
                pFVar31[lVar32 * 0x18] = local_2b0[0];
                pFVar31[lVar32 * 0x18 + 1] = local_2b0[1];
                *(UChaosCache **)(pFVar31 + lVar32 * 0x18 + 8) = local_2a8;
                local_2b0._0_2_ = 0;
                local_2a8 = (UChaosCache *)0x0;
                *(FName *)(pFVar31 + lVar32 * 0x18 + 0x10) = local_2a0;
                (**(code **)(*local_1d8 + 0x50))
                          (local_1d8,local_308._8_8_,local_308._56_8_,pFVar31,pTVar33);
                local_res10 = 1;
LAB_14daec4b2:
                pTVar34 = &this->ActiveAdapters;
              }
            }
          }
          (**(code **)(this->_padding_ + 0x4a8))(this,local_res10);
          if ((FScriptContainerElement *)local_308._24_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_308._24_8_);
          }
          if ((FScriptContainerElement *)local_308._40_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_308._40_8_);
          }
        }
        else {
          if ((FScriptContainerElement *)local_308._24_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_308._24_8_);
          }
          if ((FScriptContainerElement *)local_308._40_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_308._40_8_);
          }
        }
      }
      local_308._0_4_ = local_308._0_4_ + 1;
    } while ((int)local_308._0_4_ < local_260.Key._4_4_);
    if (0 < local_res20) {
      if (2 < (byte)LogChaosCache._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCache);
      }
      goto LAB_14daecb1b;
    }
  }
  if (this->CacheMode != Record) {
    OnStartFrameChanged(this,(double)this->StartTime);
  }
LAB_14daecb1b:
  if (local_270.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.AllocatorInstance.Data);
  }
  return;
}

// BeginPlay @ 14daecb60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosCacheManager::BeginPlay(AChaosCacheManager *this)

{
  AActor::BeginPlay((AActor *)this);
  this->StartTimeAtBeginPlay = this->StartTime;
  if (this->bStartOnBeginPlay != false) {
    Start(this,this->StartTime);
    return;
  }
  return;
}

// ClearObservedComponents @ 14daed330

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosCacheManager::ClearObservedComponents(AChaosCacheManager *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  UActorComponent *pUVar4;
  UClass *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FDelegateAllocation *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  AChaosCacheManager *local_res8;
  undefined1 local_res10 [8];
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  if (param_1) {
    UnregisterObservedComponentsNotifiers(this);
    iVar2 = (this->ObservedComponents).ArrayNum;
    pFVar10 = (this->ObservedComponents).AllocatorInstance.Data;
    pFVar9 = pFVar10 + (longlong)iVar2 * 400;
    while( true ) {
      if ((this->ObservedComponents).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar10 == pFVar9) break;
      pUVar4 = FSoftComponentReference::GetComponent
                         ((FSoftComponentReference *)(pFVar10 + 0x30),(AActor *)this);
      if (pUVar4 == (UActorComponent *)0x0) {
LAB_14daed3cf:
        pUVar4 = (UActorComponent *)0x0;
      }
      else {
        pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        iVar3 = (int)pUVar5->_padding_;
        if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar3) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar5->_padding_)) goto LAB_14daed3cf;
      }
      (**(code **)(pUVar4->_padding_ + 0x4a0))(pUVar4,0);
      pFVar10 = pFVar10 + 400;
    }
  }
  UnregisterObservedComponentsNotifiers(this);
  pFVar10 = (this->ObservedComponents).AllocatorInstance.Data;
  iVar2 = (this->ObservedComponents).ArrayNum;
  pFVar8 = (FDelegateAllocation *)(pFVar10 + 0x180);
  while( true ) {
    if ((this->ObservedComponents).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 + -0x18 == (FDelegateAllocation *)(pFVar10 + (longlong)iVar2 * 400)) break;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar8[-1].DelegateSize,
               (FWriteAccessScope *)&local_58);
    local_40 = pFVar8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,pFVar8);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFObservedComponent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VAChaosCacheManager____A6AXAEBUFObservedComponent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (AChaosCacheManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_res8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (AChaosCacheManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
      puVar6[4] = OnObservedComponentDestroyed;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    pFVar8 = pFVar8 + 0x19;
  }
  DestructItems<FObservedComponent,int>
            ((FObservedComponent *)(this->ObservedComponents).AllocatorInstance.Data,
             (this->ObservedComponents).ArrayNum);
  piVar1 = &(this->ObservedComponents).ArrayMax;
  (this->ObservedComponents).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (400,0x10,0,&(this->ObservedComponents).AllocatorInstance,0,piVar1);
  }
  return;
}

// CreateAndSetNewCacheAsset @ 14daee0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AChaosCacheManager::CreateAndSetNewCacheAsset(AChaosCacheManager *this)

{
  FName local_res10 [3];
  FString local_18;
  
  if (1 < (byte)LogChaosCache._0_1_) {
    local_res10[0] = (FName)this->_padding_;
    ::FName::ToString(local_res10,&local_18);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCache);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Destroyed @ 14daefa70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosCacheManager::Destroyed(AChaosCacheManager *this)

{
  int *piVar1;
  TArray<FObservedComponent,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateAllocation *pFVar7;
  AChaosCacheManager *local_res8;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  UnregisterObservedComponentsNotifiers(this);
  pTVar2 = &this->ObservedComponents;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  iVar3 = (this->ObservedComponents).ArrayNum;
  pFVar7 = (FDelegateAllocation *)(pFVar4 + 0x180);
  while( true ) {
    if ((this->ObservedComponents).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar7 + -0x18 == (FDelegateAllocation *)(pFVar4 + (longlong)iVar3 * 400)) break;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar7[-1].DelegateSize,
               (FWriteAccessScope *)&local_48);
    local_30 = pFVar7;
    puVar5 = UE::Core::Private::DelegateAllocate(0x28,pFVar7);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFObservedComponent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VAChaosCacheManager____A6AXAEBUFObservedComponent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (AChaosCacheManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar5[3] = 0;
      local_res8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (AChaosCacheManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res8);
      puVar5[4] = OnObservedComponentDestroyed;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    pFVar7 = pFVar7 + 0x19;
  }
  DestructItems<FObservedComponent,int>
            ((FObservedComponent *)(pTVar2->AllocatorInstance).Data,
             (this->ObservedComponents).ArrayNum);
  piVar1 = &(this->ObservedComponents).ArrayMax;
  (this->ObservedComponents).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (400,0x10,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  AActor::Destroyed((AActor *)this);
  return;
}

// EnablePlayback @ 14daf00b0

void __thiscall
AChaosCacheManager::EnablePlayback(AChaosCacheManager *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((-1 < param_1) && (param_1 < (this->ObservedComponents).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->ObservedComponents).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->ObservedComponents).AllocatorInstance.Data[(longlong)param_1 * 400 + 0x79] =
         (FScriptContainerElement)param_2;
  }
  return;
}

// EnablePlaybackByCache @ 14daf0150

void __thiscall
AChaosCacheManager::EnablePlaybackByCache(AChaosCacheManager *this,FName param_1,bool param_2)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ObservedComponents).ArrayNum;
  pFVar3 = (FName *)(this->ObservedComponents).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x32;
  while( true ) {
    if ((this->ObservedComponents).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*pFVar3 == param_1) {
      *(bool *)((longlong)&pFVar3[0xf].ComparisonIndex.Value + 1) = param_2;
      return;
    }
    pFVar3 = pFVar3 + 0x32;
  }
  return;
}

// EndEvaluate @ 14daf01e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosCacheManager::EndEvaluate(AChaosCacheManager *this)

{
  FScriptContainerElement *pFVar1;
  TMap<Chaos::FPhysicsSolverEvents_*,FPerSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>_>
  *this_00;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  FScriptContainerElement *pFVar9;
  UChaosCache *this_01;
  code *pcVar10;
  TMap<Chaos::FPhysicsSolverEvents_*,FPerSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>_>
  *pTVar11;
  FPhysicsSolverEvents *this_02;
  bool bVar12;
  FChaosSolversModule *pFVar13;
  UActorComponent *pUVar14;
  UClass *pUVar15;
  IModularFeatures *this_03;
  ulonglong uVar16;
  FStaticBasicLogRecord *pFVar17;
  uint uVar18;
  int iVar19;
  ForAnyElementType FVar20;
  FParticleTransformTrack *this_04;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  undefined1 *puVar23;
  uint *puVar24;
  longlong lVar25;
  FParticleTransformTrack *pFVar26;
  longlong lVar27;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_158;
  undefined1 local_157 [7];
  TArray<Chaos::FComponentCacheAdapter_*,TSizedDefaultAllocator<32>_> local_150;
  int local_140;
  int local_13c;
  TMap<Chaos::FPhysicsSolverEvents_*,FPerSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>_>
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
  TMap<Chaos::FPhysicsSolverEvents_*,FPerSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>_>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  FPhysicsSolverEvents *local_d8;
  FPerSolverData local_d0;
  undefined4 local_4c;
  
  this->bIsSimulating = false;
  pFVar13 = FChaosSolversModule::GetModule();
  if ((pFVar13 == (FChaosSolversModule *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Module",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheManagerActor.cpp"
                          ,0x2aa,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  WaitForObservedComponentSolverTasks(this);
  iVar4 = (this->ActiveAdapters).ArrayNum;
  if (((iVar4 != 0) && ((this->ObservedComponents).ArrayNum != iVar4)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActiveAdapters.IsEmpty() || ObservedComponents.Num() == ActiveAdapters.Num()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheManagerActor.cpp"
                          ,0x2ae,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar18 = 0;
  if (0 < (this->ActiveAdapters).ArrayNum) {
    lVar25 = 0;
    lVar27 = 0;
    do {
      uVar22 = 0;
      if ((int)uVar18 < (this->ActiveAdapters).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      plVar6 = *(longlong **)((this->ActiveAdapters).AllocatorInstance.Data + lVar27);
      if (plVar6 != (longlong *)0x0) {
        uVar22 = 0;
        if ((int)uVar18 < (this->ObservedComponents).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar21 = (this->ObservedComponents).AllocatorInstance.Data;
        uVar7 = *(undefined8 *)(pFVar21 + lVar25 + 0xa8);
        pcVar10 = *(code **)(*plVar6 + 0x70);
        pUVar14 = FSoftComponentReference::GetComponent
                            ((FSoftComponentReference *)(pFVar21 + lVar25 + 0x30),(AActor *)this);
        if (pUVar14 == (UActorComponent *)0x0) {
LAB_14daf038f:
          pUVar14 = (UActorComponent *)0x0;
        }
        else {
          pUVar15 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
          iVar4 = (int)pUVar15->_padding_;
          if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar4) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
              &pUVar15->_padding_)) goto LAB_14daf038f;
        }
        (*pcVar10)(plVar6,pUVar14,uVar7);
      }
      uVar18 = uVar18 + 1;
      lVar27 = lVar27 + 8;
      lVar25 = lVar25 + 400;
    } while ((int)uVar18 < (this->ActiveAdapters).ArrayNum);
  }
  this_03 = IModularFeatures::Get();
  IModularFeatures::GetModularFeatureImplementations<Chaos::FComponentCacheAdapter>
            (this_03,&local_150,Chaos::FComponentCacheAdapter::FeatureName);
  iVar4 = local_150.ArrayNum;
  uVar16 = (ulonglong)local_150.ArrayNum;
  pFVar21 = local_150.AllocatorInstance.Data + uVar16 * 8;
  FVar20.Data = local_150.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar16 != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::FComponentCacheAdapter_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (FVar20.Data == pFVar21) break;
    (**(code **)(**(longlong **)FVar20.Data + 0x38))();
    uVar16 = (ulonglong)(uint)local_150.ArrayNum;
    FVar20.Data = FVar20.Data + 8;
  }
  this_00 = &this->PerSolverData;
  iStack_130 = 0;
  iVar4 = *(int *)&(this->PerSolverData).field_0x28;
  puVar3 = &(this->PerSolverData).field_0x10;
  local_118 = 0;
  uStack_12c = 1;
  iStack_11c = 0;
  if (iVar4 != 0) {
    puVar24 = *(uint **)&(this->PerSolverData).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)puVar3;
    }
    uVar18 = *puVar24;
    while (uVar18 == 0) {
      iStack_130 = iStack_130 + 1;
      local_118 = local_118 + 0x20;
      iStack_11c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_130) goto LAB_14daf049c;
      uVar18 = puVar24[iStack_130];
    }
    uStack_12c = -uVar18 & uVar18;
    uVar16 = (ulonglong)uStack_12c * 2 + 1;
    lVar25 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_140 = (int)lVar25;
    iStack_11c = local_140 + -1 + local_118;
    if (iVar4 < iStack_11c) {
      iStack_11c = iVar4;
    }
  }
LAB_14daf049c:
  uVar18 = *(uint *)&(this->PerSolverData).field_0x28;
  uStack_114 = local_4c;
  uVar22 = uVar18 & 0xffffffe0;
  iStack_110 = *(int *)&(this->PerSolverData).field_0x8 - *(int *)&(this->PerSolverData).field_0x34;
  uStack_120 = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uStack_12c,iStack_130);
  TStack_100.CurrentBitIndex = iStack_11c;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar18 >> 5;
  TStack_100._28_4_ = local_4c;
  TStack_100.BaseBitIndex = local_118;
  uStack_e0 = CONCAT44(uStack_10c,iStack_110);
  local_138 = this_00;
  local_128 = puVar3;
  local_108 = this_00;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar5 = *(uint *)&(this->PerSolverData).field_0x28;
  if (uVar18 != uVar5) {
    puVar8 = *(undefined1 **)&(this->PerSolverData).field_0x20;
    puVar23 = puVar3;
    if (puVar8 != (undefined1 *)0x0) {
      puVar23 = puVar8;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar19 * 4);
    while (uVar18 == 0) {
      iVar19 = iVar19 + 1;
      uVar22 = uVar22 + 0x20;
      uVar18 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar19) goto LAB_14daf05c0;
      uVar18 = *(uint *)(puVar23 + (longlong)iVar19 * 4);
    }
    uVar16 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_13c = (int)lVar25;
    uVar18 = local_13c + -1 + uVar22;
    if ((int)uVar5 < (int)uVar18) {
      uVar18 = uVar5;
    }
  }
LAB_14daf05c0:
  while( true ) {
    pTVar11 = local_108;
    if (*(int *)(&local_108->field_0x0 + 8) - *(int *)(&local_108->field_0x0 + 0x34) !=
        (int)uStack_e0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsSolverEvents_*,FPerSolverData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_100.CurrentBitIndex == uVar18) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
       (pTVar11 == this_00)) break;
    lVar25 = *(longlong *)&pTVar11->field_0x0;
    local_d8 = *(FPhysicsSolverEvents **)((longlong)TStack_100.CurrentBitIndex * 0x70 + lVar25);
    FPerSolverData::FPerSolverData
              (&local_d0,
               (FPerSolverData *)((longlong)TStack_100.CurrentBitIndex * 0x70 + lVar25 + 8));
    this_02 = local_d8;
    if (local_d8 == (FPhysicsSolverEvents *)0x0) {
      bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_265275798884187450>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheManagerActor.cpp"
                          ,0x2c6,"CurrSolver");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    else {
      bVar12 = Chaos::FPhysicsSolverEvents::RemovePostAdvanceCallback
                         (local_d8,local_d0.PostSolveHandle);
      if ((!bVar12) &&
         (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_265275798884187448>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheManagerActor.cpp"
                              ,0x2c8,
                              "CurrSolver->RemovePostAdvanceCallback(CurrData.PostSolveHandle)"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      bVar12 = Chaos::FPhysicsSolverEvents::RemovePreBufferCallback
                         (this_02,local_d0.PreBufferHandle);
      if ((!bVar12) &&
         (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_265275798884187447>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheManagerActor.cpp"
                              ,0x2c9,"CurrSolver->RemovePreBufferCallback(CurrData.PreBufferHandle)"
                             ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      bVar12 = Chaos::FPhysicsSolverEvents::RemovePreAdvanceCallback
                         (this_02,local_d0.PreSolveHandle);
      if ((!bVar12) &&
         (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_265275798884187446>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheManagerActor.cpp"
                              ,0x2ca,"CurrSolver->RemovePreAdvanceCallback(CurrData.PreSolveHandle)"
                             ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      bVar12 = Chaos::FPhysicsSolverEvents::RemoveTeardownCallback(this_02,local_d0.TeardownHandle);
      if ((!bVar12) &&
         (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_265275798884187445>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheManagerActor.cpp"
                              ,0x2cb,"CurrSolver->RemoveTeardownCallback(CurrData.TeardownHandle)"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_d0.PostSolveHandle.ID = 0;
      local_d0.PreSolveHandle.ID = 0;
      local_d0.PreBufferHandle.ID = 0;
      local_d0.TeardownHandle.ID = 0;
    }
    if (local_d0.PendingKinematicUpdates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.PendingKinematicUpdates.AllocatorInstance.Data);
    }
    if (local_d0.RecordIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.RecordIndices.AllocatorInstance.Data);
    }
    if (local_d0.PlaybackIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.PlaybackIndices.AllocatorInstance.Data);
    }
    DestructItems<FPlaybackTickRecord,int>
              ((FPlaybackTickRecord *)local_d0.PlaybackTickRecords.AllocatorInstance.Data,
               local_d0.PlaybackTickRecords.ArrayNum);
    if ((FPlaybackTickRecord *)local_d0.PlaybackTickRecords.AllocatorInstance.Data !=
        (FPlaybackTickRecord *)0x0) {
      FMemory::Free(local_d0.PlaybackTickRecords.AllocatorInstance.Data);
    }
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  TSet<TTuple<Chaos::FPhysicsSolverEvents_*,FPerSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<Chaos::FPhysicsSolverEvents_*,FPerSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>,FDefaultSetAllocator>
           *)this_00);
  (this->ActiveAdapters).ArrayNum = 0;
  if ((this->ActiveAdapters).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ActiveAdapters).AllocatorInstance,0,&(this->ActiveAdapters).ArrayMax);
  }
  pFVar9 = (this->OpenRecordCaches).AllocatorInstance.Data;
  iVar4 = (this->OpenRecordCaches).ArrayNum;
  pFVar21 = pFVar9 + 8;
  while( true ) {
    if ((this->OpenRecordCaches).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TTuple<FCacheUserToken,UChaosCache_*>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    pFVar1 = pFVar21 + -8;
    if (pFVar1 == pFVar9 + (longlong)iVar4 * 0x18) break;
    this_01 = *(UChaosCache **)(pFVar21 + 8);
    if (((*pFVar1 == (FScriptContainerElement)0x0) ||
        (*(UChaosCache **)pFVar21 == (UChaosCache *)0x0)) || (*(UChaosCache **)pFVar21 != this_01))
    {
      if (*(longlong *)pFVar21 == 0) {
        if (2 < (byte)LogChaosCache._0_1_) {
          pFVar17 = &::LOG_Static;
          goto LAB_14daf0887;
        }
      }
      else if (2 < (byte)LogChaosCache._0_1_) {
        pFVar17 = &::LOG_Static;
LAB_14daf0887:
        UE::Logging::Private::BasicLog<3>(pFVar17,(FLogCategoryBase *)&LogChaosCache);
      }
    }
    else {
      UChaosCache::FlushPendingFrames(this_01);
      *pFVar1 = (FScriptContainerElement)0x0;
      *(longlong *)pFVar21 = 0;
      LOCK();
      this_01->CurrentRecordCount = (atomic<int>)((int)this_01->CurrentRecordCount + -1);
      UNLOCK();
      this_01->Version = 1;
    }
    if (this_01->bCompressChannels != false) {
      UChaosCache::CompressChannelsData
                (this_01,this_01->ChannelsCompressionErrorThreshold,
                 this_01->ChannelsCompressionSampleRate);
    }
    if (bChaosCacheCompressTracksAfterRecording != false) {
      iVar19 = (this_01->ParticleTracks).ArrayNum;
      this_04 = (FParticleTransformTrack *)(this_01->ParticleTracks).AllocatorInstance.Data;
      pFVar26 = (FParticleTransformTrack *)((longlong)this_04 + (longlong)iVar19 * 0x98);
      while( true ) {
        if ((this_01->ParticleTracks).ArrayNum != iVar19) {
          `TCheckedPointerIterator<FPerParticleCacheData,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_158);
        }
        if (this_04 == pFVar26) break;
        FParticleTransformTrack::Compress(this_04);
        this_04 = (FParticleTransformTrack *)&this_04[2].RawTransformTrack.PosKeys.ArrayNum;
      }
    }
    pFVar21 = pFVar21 + 0x18;
  }
  (this->OpenRecordCaches).ArrayNum = 0;
  if ((this->OpenRecordCaches).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->OpenRecordCaches).AllocatorInstance,0,
               &(this->OpenRecordCaches).ArrayMax);
  }
  pFVar9 = (this->OpenPlaybackCaches).AllocatorInstance.Data;
  iVar4 = (this->OpenPlaybackCaches).ArrayNum;
  pFVar21 = pFVar9 + 8;
  do {
    while( true ) {
      if ((this->OpenPlaybackCaches).ArrayNum != iVar4) {
        `TCheckedPointerIterator<TTuple<FCacheUserToken,UChaosCache_*>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_157);
      }
      pFVar1 = pFVar21 + -8;
      if (pFVar1 == pFVar9 + (longlong)iVar4 * 0x18) {
        (this->OpenPlaybackCaches).ArrayNum = 0;
        if ((this->OpenPlaybackCaches).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,&(this->OpenPlaybackCaches).AllocatorInstance,0,
                     &(this->OpenPlaybackCaches).ArrayMax);
        }
        if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.AllocatorInstance.Data);
        }
        return;
      }
      if (((*pFVar1 == (FScriptContainerElement)0x0) || (*(longlong *)pFVar21 == 0)) ||
         (*(longlong *)pFVar21 != *(longlong *)(pFVar21 + 8))) break;
      *(longlong *)pFVar21 = 0;
      *pFVar1 = (FScriptContainerElement)0x0;
      LOCK();
      piVar2 = (int *)(*(longlong *)(pFVar21 + 8) + 0x324);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      pFVar21 = pFVar21 + 0x18;
    }
    if (*(longlong *)pFVar21 == 0) {
      if (2 < (byte)LogChaosCache._0_1_) {
        pFVar17 = &::LOG_Static;
        goto LAB_14daf09c3;
      }
    }
    else if (2 < (byte)LogChaosCache._0_1_) {
      pFVar17 = &::LOG_Static;
LAB_14daf09c3:
      UE::Logging::Private::BasicLog<3>(pFVar17,(FLogCategoryBase *)&LogChaosCache);
    }
    pFVar21 = pFVar21 + 0x18;
  } while( true );
}

// EndPlay @ 14daf0a40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosCacheManager::EndPlay(AChaosCacheManager *this,Type param_1)

{
  float fVar1;
  
  AActor::EndPlay((AActor *)this,param_1);
  EndEvaluate(this);
  fVar1 = this->StartTimeAtBeginPlay;
  if ((fVar1 != this->StartTime) && (this->StartTime = fVar1, this->CacheMode != Record)) {
    OnStartFrameChanged(this,(double)fVar1);
    return;
  }
  return;
}

// EnsureObservedComponentsNotifierRegistration @ 14daf0c20

void __thiscall
AChaosCacheManager::EnsureObservedComponentsNotifierRegistration(AChaosCacheManager *this)

{
  int iVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDelegateAllocation *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  AChaosCacheManager *local_res8;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  UnregisterObservedComponentsNotifiers(this);
  pFVar5 = (this->ObservedComponents).AllocatorInstance.Data;
  iVar1 = (this->ObservedComponents).ArrayNum;
  pFVar4 = (FDelegateAllocation *)(pFVar5 + 0x180);
  pFVar6 = pFVar5 + (longlong)iVar1 * 400;
  while( true ) {
    if ((this->ObservedComponents).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar5 == pFVar6) break;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar4[-1].DelegateSize,
               (FWriteAccessScope *)&local_48);
    local_30 = pFVar4;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,pFVar4);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFObservedComponent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VAChaosCacheManager____A6AXAEBUFObservedComponent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (AChaosCacheManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (AChaosCacheManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
      puVar2[4] = OnObservedComponentDestroyed;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    pFVar5 = pFVar5 + 400;
    pFVar4 = pFVar4 + 0x19;
  }
  return;
}

// FindObservedComponent @ 14daf5530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FObservedComponent * __thiscall
AChaosCacheManager::FindObservedComponent(AChaosCacheManager *this,UPrimitiveComponent *param_1)

{
  int iVar1;
  int iVar2;
  UPrimitiveComponent *pUVar3;
  UClass *pUVar4;
  FObservedComponent *pFVar5;
  FObservedComponent *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ObservedComponents).ArrayNum;
  pFVar5 = (FObservedComponent *)(this->ObservedComponents).AllocatorInstance.Data;
  pFVar6 = pFVar5 + iVar1;
  do {
    if ((this->ObservedComponents).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar6) {
      return (FObservedComponent *)0x0;
    }
    pUVar3 = (UPrimitiveComponent *)
             FSoftComponentReference::GetComponent(&pFVar5->SoftComponentRef,(AActor *)this);
    if (pUVar3 == (UPrimitiveComponent *)0x0) {
LAB_14daf55b5:
      pUVar3 = (UPrimitiveComponent *)0x0;
    }
    else {
      pUVar4 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar4->_padding_)) goto LAB_14daf55b5;
    }
    if (pUVar3 == param_1) {
      return pFVar5;
    }
    pFVar5 = pFVar5 + 1;
  } while( true );
}

// FindOrAddObservedComponent @ 14daf58d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AChaosCacheManager::FindOrAddObservedComponent
          (AChaosCacheManager *this,UPrimitiveComponent *param_1,FName *param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  UPrimitiveComponent *pUVar4;
  UClass *pUVar5;
  FObservedComponent *pFVar6;
  FObservedComponent *pFVar7;
  undefined1 local_res10 [8];
  
  if ((param_1 == (UPrimitiveComponent *)0x0) || ((*(uint *)&param_1->field_0x8 >> 6 & 1) != 0)) {
    return;
  }
  pFVar6 = (FObservedComponent *)(this->ObservedComponents).AllocatorInstance.Data;
  iVar1 = (this->ObservedComponents).ArrayNum;
  pFVar7 = pFVar6 + iVar1;
  do {
    if ((this->ObservedComponents).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar7) goto LAB_14daf5992;
    pUVar4 = (UPrimitiveComponent *)
             FSoftComponentReference::GetComponent(&pFVar6->SoftComponentRef,(AActor *)this);
    if (pUVar4 != (UPrimitiveComponent *)0x0) {
      pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar2 = (int)pUVar5->_padding_;
      if (((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
           &pUVar5->_padding_)) && (pUVar4 == param_1)) {
        if (pFVar6 == (FObservedComponent *)0x0) {
LAB_14daf5992:
          pFVar6 = AddNewObservedComponent(this,param_1);
          if (pFVar6 == (FObservedComponent *)0x0) {
            return;
          }
        }
        if (param_3) {
          bVar3 = (bool)((byte)(param_1->BodyInstance)._padding_ & 1);
        }
        else {
          bVar3 = false;
        }
        pFVar6->bIsSimulating = bVar3;
        pUVar5 = Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
        iVar1 = (int)pUVar5->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar5->_padding_)) {
          pFVar6->bHasNotifyBreaks = (bool)param_1[1].field_0x280;
        }
        bVar3 = ::FName::Equals(*param_2,L"");
        if (bVar3) {
          return;
        }
        pFVar6->CacheName = *param_2;
        return;
      }
    }
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// GetPrivateStaticClass @ 14daf8300

UClass * __cdecl AChaosCacheManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AChaosCacheManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCaching",L"ChaosCacheManager",
               &Z_Registration_Info_UClass_AChaosCacheManager.InnerSingleton,
               StaticRegisterNativesAChaosCacheManager,0x378,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AChaosCacheManager>,
               InternalVTableHelperCtorCaller<AChaosCacheManager>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AChaosCacheManager.InnerSingleton;
}

// HandlePostSolve @ 14daf9250

void __thiscall
AChaosCacheManager::HandlePostSolve
          (AChaosCacheManager *this,double param_1,FPhysicsSolverEvents *param_2)

{
  FPerSolverData *pFVar1;
  undefined1 local_res8 [32];
  code *local_48 [2];
  undefined **local_38;
  AChaosCacheManager *local_30;
  undefined8 local_20;
  
  if ((this->CacheCollection).field0_0x0.DebugPtr != (UChaosCacheCollection *)0x0) {
    pFVar1 = TMapBase<Chaos::FPhysicsSolverEvents_*,FPerSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>_>
             ::Find((TMapBase<Chaos::FPhysicsSolverEvents_*,FPerSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>_>
                     *)&this->PerSolverData,param_2);
    if (pFVar1 == (FPerSolverData *)0x0) {
      `AChaosCacheManager::HandlePostSolve'::__l8::<lambda_1>::operator()(local_res8);
      return;
    }
    local_20 = 0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`AChaosCacheManager::HandlePostSolve'::`2'::<lambda_2>,1,0>::
                _vftable_;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`AChaosCacheManager::HandlePostSolve'::__l2::<lambda_2>,void,UChaosCache_*,FObservedComponent_&,Chaos::FComponentCacheAdapter_*>
                  ::Call;
    local_30 = this;
    TickObservedComponents
              (this,&pFVar1->RecordIndices,param_1,
               (TUniqueFunction<void___cdecl(UChaosCache_*,FObservedComponent_&,Chaos::FComponentCacheAdapter_*)>
                *)local_48);
  }
  return;
}

// HandlePreBuffer @ 14daf92e0

void __thiscall
AChaosCacheManager::HandlePreBuffer
          (AChaosCacheManager *this,double param_1,FPhysicsSolverEvents *param_2)

{
  undefined1 *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  bool bVar4;
  FPerSolverData *pFVar5;
  FScriptContainerElement *pFVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  undefined1 local_res8 [8];
  
  if ((this->CacheCollection).field0_0x0.DebugPtr != (UChaosCacheCollection *)0x0) {
    pFVar5 = TMapBase<Chaos::FPhysicsSolverEvents_*,FPerSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>_>
             ::Find((TMapBase<Chaos::FPhysicsSolverEvents_*,FPerSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>_>
                     *)&this->PerSolverData,param_2);
    if (pFVar5 == (FPerSolverData *)0x0) {
      `AChaosCacheManager::HandlePreBuffer'::__l8::<lambda_1>::operator()(local_res8);
      return;
    }
    iVar2 = (pFVar5->PendingKinematicUpdates).ArrayNum;
    if (0 < iVar2) {
      pFVar6 = (pFVar5->PendingKinematicUpdates).AllocatorInstance.Data;
      pFVar1 = pFVar6 + (longlong)iVar2 * 8;
      while( true ) {
        if ((pFVar5->PendingKinematicUpdates).ArrayNum != iVar2) {
          `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar6 == pFVar1) break;
        pTVar3 = *(TGeometryParticleHandleImp<double,3,1> **)pFVar6;
        this_00 = &param_2[8].EventTeardown.field_0x10;
        pTVar7 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar3->_padding_ + 4)) {
          pTVar7 = pTVar3;
        }
        if (((pTVar7 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
            (bVar4 = Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::
                     Contains((TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> *)
                              &param_2[0xc].EventPreBuffer.field_0x18,
                              (TPBDRigidParticleHandleImp<double,3,1> *)pTVar7), !bVar4)) &&
           (bVar4 = Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::
                    Contains((TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> *)
                             (param_2 + 0xe),(TPBDRigidParticleHandleImp<double,3,1> *)pTVar7),
           !bVar4)) {
          Chaos::FPBDRigidsSOAs::
          AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                    ((FPBDRigidsSOAs *)this_00,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar7,
                     (TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> *)
                     &param_2[0xd].EventPreSolve.field_0x18);
          if (Chaos::CVars::bChaosSolverCheckParticleViews != false) {
            Chaos::FPBDRigidsSOAs::CheckParticleViewMaskImpl((FPBDRigidsSOAs *)this_00,pTVar3);
          }
          Chaos::FPBDRigidsSOAs::UpdateViews((FPBDRigidsSOAs *)this_00);
        }
        pFVar6 = pFVar6 + 8;
      }
      (pFVar5->PendingKinematicUpdates).ArrayNum = 0;
      if ((pFVar5->PendingKinematicUpdates).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(pFVar5->PendingKinematicUpdates).AllocatorInstance,0,
                   &(pFVar5->PendingKinematicUpdates).ArrayMax);
      }
    }
  }
  return;
}

// HandlePreSolve @ 14daf9450

void __thiscall
AChaosCacheManager::HandlePreSolve
          (AChaosCacheManager *this,double param_1,FPhysicsSolverEvents *param_2)

{
  undefined1 local_res8 [32];
  code *local_48 [2];
  undefined **local_38;
  AChaosCacheManager *local_30;
  FPerSolverData *local_28;
  undefined8 local_20;
  
  if ((this->CacheCollection).field0_0x0.DebugPtr != (UChaosCacheCollection *)0x0) {
    local_28 = TMapBase<Chaos::FPhysicsSolverEvents_*,FPerSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>_>
               ::Find((TMapBase<Chaos::FPhysicsSolverEvents_*,FPerSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>_>
                       *)&this->PerSolverData,param_2);
    if (local_28 == (FPerSolverData *)0x0) {
      `AChaosCacheManager::HandlePreSolve'::__l8::<lambda_1>::operator()(local_res8);
      return;
    }
    local_20 = 0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`AChaosCacheManager::HandlePreSolve'::`2'::<lambda_2>,1,0>::
                _vftable_;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`AChaosCacheManager::HandlePreSolve'::__l2::<lambda_2>,void,UChaosCache_*,FObservedComponent_&,Chaos::FComponentCacheAdapter_*>
                  ::Call;
    local_30 = this;
    TickObservedComponents
              (this,&local_28->PlaybackIndices,param_1,
               (TUniqueFunction<void___cdecl(UChaosCache_*,FObservedComponent_&,Chaos::FComponentCacheAdapter_*)>
                *)local_48);
  }
  return;
}

// HandleTeardown @ 14daf94f0

void __thiscall
AChaosCacheManager::HandleTeardown(AChaosCacheManager *this,FPhysicsSolverEvents *param_1)

{
  uint uVar1;
  FPhysicsSolverEvents *local_res8 [4];
  
  if (*(int *)&(this->PerSolverData).field_0x8 != *(int *)&(this->PerSolverData).field_0x34) {
    uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    local_res8[0] = param_1;
    TSet<TTuple<Chaos::FPhysicsSolverEvents_*,FPerSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>,FDefaultSetAllocator>
    ::RemoveImpl<Chaos::FPhysicsSolverEvents_const_*>
              ((TSet<TTuple<Chaos::FPhysicsSolverEvents_*,FPerSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>,FDefaultSetAllocator>
                *)&this->PerSolverData,uVar1 >> 0x10 ^ uVar1,local_res8);
  }
  return;
}

// IsRecording @ 14dafa790

bool __thiscall AChaosCacheManager::IsRecording(AChaosCacheManager *this)

{
  return this->CacheMode == Record;
}

// OnObservedComponentDestroyed @ 14dafafe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
AChaosCacheManager::OnObservedComponentDestroyed
          (AChaosCacheManager *this,FObservedComponent *param_1)

{
  int iVar1;
  UGeometryCollectionComponent *this_00;
  UClass *pUVar2;
  
  this_00 = (UGeometryCollectionComponent *)
            FSoftComponentReference::GetComponent(&param_1->SoftComponentRef,(AActor *)this);
  if (this_00 != (UGeometryCollectionComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      this_00->field_0x398 =
           (this_00->field_0x398 ^ param_1->bIsSimulating) & 1 ^ this_00->field_0x398;
      pUVar2 = Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        UGeometryCollectionComponent::SetNotifyBreaks(this_00,param_1->bHasNotifyBreaks);
      }
    }
  }
  return;
}

// OnStartFrameChanged @ 14dafb080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosCacheManager::OnStartFrameChanged(AChaosCacheManager *this,double param_1)

{
  atomic<int> *paVar1;
  int iVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  UActorComponent *pUVar8;
  UClass *pUVar9;
  FName FVar10;
  FName *pFVar11;
  TTransform<double> *pTVar12;
  longlong lVar13;
  uint uVar14;
  UObject *local_res8;
  
  if (((this->bIsSimulating == false) &&
      ((this->CacheCollection).field0_0x0.DebugPtr != (UChaosCacheCollection *)0x0)) &&
     (uVar14 = 0, 0 < (this->ObservedComponents).ArrayNum)) {
    lVar13 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar14 < (this->ObservedComponents).ArrayNum) {
        uVar7 = ~uVar14 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar11 = (FName *)((this->ObservedComponents).AllocatorInstance.Data + lVar13);
      pUVar8 = FSoftComponentReference::GetComponent
                         ((FSoftComponentReference *)(pFVar11 + 6),(AActor *)this);
      if (pUVar8 != (UActorComponent *)0x0) {
        pUVar9 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        pUVar3 = (UObject *)pUVar8->_padding_;
        iVar2 = (int)pUVar9->_padding_;
        if ((iVar2 <= *(int *)&pUVar3[1].field_0x10) &&
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar3[1].field_0x8 + (longlong)iVar2 * 8) ==
            &pUVar9->_padding_)) {
          if (pFVar11[0x2e] == (FName)0x0) {
            local_res8 = pUVar3;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar3);
            }
            FVar10 = (FName)Chaos::FAdapterUtil::GetBestAdapterForClass
                                      ((TSubclassOf<UPrimitiveComponent>)&local_res8,false);
            pFVar11[0x2e] = FVar10;
          }
          FVar10 = pFVar11[0x15];
          if (FVar10 == (FName)0x0) {
            FVar10 = (FName)UChaosCacheCollection::FindCache
                                      ((this->CacheCollection).field0_0x0.DebugPtr,pFVar11);
            pFVar11[0x15] = FVar10;
            if (FVar10 == (FName)0x0) goto LAB_14dafb2e4;
          }
          if ((pFVar11[0x2e] != (FName)0x0) &&
             ((this->CacheMode == Record ||
              (*(char *)((longlong)&pFVar11[0xf].ComparisonIndex.Value + 1) != '\0')))) {
            LOCK();
            *(atomic<int> *)((longlong)FVar10 + 0x324) =
                 (atomic<int>)((int)*(atomic<int> *)((longlong)FVar10 + 0x324) + 1);
            UNLOCK();
            if (*(atomic<int> *)((longlong)FVar10 + 800) == (atomic<int>)0x0) {
              bVar5 = true;
            }
            else {
              LOCK();
              *(atomic<int> *)((longlong)FVar10 + 0x324) =
                   (atomic<int>)((int)*(atomic<int> *)((longlong)FVar10 + 0x324) + -1);
              UNLOCK();
              bVar5 = false;
              cVar6 = (**(code **)(*(longlong *)pFVar11[0x2e] + 0x98))();
              if (cVar6 == '\0') goto LAB_14dafb2e4;
            }
            cVar6 = (**(code **)(*(longlong *)pFVar11[0x2e] + 0x90))
                              (pFVar11[0x2e],pUVar8,pFVar11[0x15]);
            if (cVar6 != '\0') {
              (**(code **)(*(longlong *)pFVar11[0x2e] + 0x48))(pFVar11[0x2e],pUVar8,pFVar11);
              if (this->_padding_ == 0) {
                pTVar12 = &UE::Math::TTransform<double>::Identity;
              }
              else {
                pTVar12 = (TTransform<double> *)(this->_padding_ + 0x1f0);
              }
              (**(code **)(*(longlong *)pFVar11[0x2e] + 0x40))
                        (pFVar11[0x2e],pUVar8,pFVar11[0x15],pTVar12,param_1);
            }
            if (bVar5) {
              if (FVar10 == pFVar11[0x15]) {
                LOCK();
                paVar1 = (atomic<int> *)((longlong)pFVar11[0x15] + 0x324);
                *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                UNLOCK();
              }
              else if (2 < (byte)LogChaosCache._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCache);
              }
            }
          }
        }
      }
LAB_14dafb2e4:
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 400;
    } while ((int)uVar14 < (this->ObservedComponents).ArrayNum);
  }
  return;
}

// ReadRestartData @ 14daff490

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosCacheManager::ReadRestartData(AChaosCacheManager *this)

{
  atomic<int> *paVar1;
  int iVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  UActorComponent *pUVar8;
  UClass *pUVar9;
  FName FVar10;
  FName *pFVar11;
  uint uVar12;
  TTransform<double> *pTVar13;
  longlong lVar14;
  UObject *local_res8;
  
  if (((this->CacheCollection).field0_0x0.DebugPtr != (UChaosCacheCollection *)0x0) &&
     (uVar12 = 0, 0 < (this->ObservedComponents).ArrayNum)) {
    lVar14 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar12 < (this->ObservedComponents).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar11 = (FName *)((this->ObservedComponents).AllocatorInstance.Data + lVar14);
      pUVar8 = FSoftComponentReference::GetComponent
                         ((FSoftComponentReference *)(pFVar11 + 6),(AActor *)this);
      if (pUVar8 != (UActorComponent *)0x0) {
        pUVar9 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        pUVar3 = (UObject *)pUVar8->_padding_;
        iVar2 = (int)pUVar9->_padding_;
        if ((iVar2 <= *(int *)&pUVar3[1].field_0x10) &&
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar3[1].field_0x8 + (longlong)iVar2 * 8) ==
            &pUVar9->_padding_)) {
          if (pFVar11[0x2e] == (FName)0x0) {
            local_res8 = pUVar3;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar3);
            }
            FVar10 = (FName)Chaos::FAdapterUtil::GetBestAdapterForClass
                                      ((TSubclassOf<UPrimitiveComponent>)&local_res8,false);
            pFVar11[0x2e] = FVar10;
          }
          FVar10 = pFVar11[0x15];
          if (FVar10 == (FName)0x0) {
            FVar10 = (FName)UChaosCacheCollection::FindCache
                                      ((this->CacheCollection).field0_0x0.DebugPtr,pFVar11);
            pFVar11[0x15] = FVar10;
            if (FVar10 == (FName)0x0) goto LAB_14daff6cd;
          }
          if (pFVar11[0x2e] != (FName)0x0) {
            LOCK();
            *(atomic<int> *)((longlong)FVar10 + 0x324) =
                 (atomic<int>)((int)*(atomic<int> *)((longlong)FVar10 + 0x324) + 1);
            UNLOCK();
            if (*(atomic<int> *)((longlong)FVar10 + 800) == (atomic<int>)0x0) {
              bVar5 = true;
            }
            else {
              LOCK();
              *(atomic<int> *)((longlong)FVar10 + 0x324) =
                   (atomic<int>)((int)*(atomic<int> *)((longlong)FVar10 + 0x324) + -1);
              UNLOCK();
              bVar5 = false;
              cVar6 = (**(code **)(*(longlong *)pFVar11[0x2e] + 0x98))();
              if (cVar6 == '\0') goto LAB_14daff6cd;
            }
            cVar6 = (**(code **)(*(longlong *)pFVar11[0x2e] + 0x90))
                              (pFVar11[0x2e],pUVar8,pFVar11[0x15]);
            if (cVar6 != '\0') {
              (**(code **)(*(longlong *)pFVar11[0x2e] + 0x48))(pFVar11[0x2e],pUVar8,pFVar11);
              if (this->_padding_ == 0) {
                pTVar13 = &UE::Math::TTransform<double>::Identity;
              }
              else {
                pTVar13 = (TTransform<double> *)(this->_padding_ + 0x1f0);
              }
              (**(code **)(*(longlong *)pFVar11[0x2e] + 0x40))
                        (pFVar11[0x2e],pUVar8,pFVar11[0x15],pTVar13,(double)this->RestartTimeStart);
            }
            if (bVar5) {
              if (FVar10 == pFVar11[0x15]) {
                LOCK();
                paVar1 = (atomic<int> *)((longlong)pFVar11[0x15] + 0x324);
                *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                UNLOCK();
              }
              else if (2 < (byte)LogChaosCache._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCache);
              }
            }
          }
        }
      }
LAB_14daff6cd:
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 400;
    } while ((int)uVar12 < (this->ObservedComponents).ArrayNum);
  }
  return;
}

// RegisterObservedComponentsNotifiers @ 14db01d70

void __thiscall AChaosCacheManager::RegisterObservedComponentsNotifiers(AChaosCacheManager *this)

{
  int iVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDelegateAllocation *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  AChaosCacheManager *local_res8;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  pFVar5 = (this->ObservedComponents).AllocatorInstance.Data;
  iVar1 = (this->ObservedComponents).ArrayNum;
  pFVar4 = (FDelegateAllocation *)(pFVar5 + 0x180);
  pFVar6 = pFVar5 + (longlong)iVar1 * 400;
  while( true ) {
    if ((this->ObservedComponents).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar5 == pFVar6) break;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar4[-1].DelegateSize,
               (FWriteAccessScope *)&local_48);
    local_30 = pFVar4;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,pFVar4);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFObservedComponent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VAChaosCacheManager____A6AXAEBUFObservedComponent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (AChaosCacheManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (AChaosCacheManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
      puVar2[4] = OnObservedComponentDestroyed;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    pFVar5 = pFVar5 + 400;
    pFVar4 = pFVar4 + 0x19;
  }
  return;
}

// RemoveObservedComponent @ 14db03180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AChaosCacheManager::RemoveObservedComponent(AChaosCacheManager *this,UPrimitiveComponent *param_1)

{
  <lambda_1> local_18;
  
  EnsureObservedComponentsNotifierRegistration(this);
  local_18.__this = this;
  local_18.ToTest = param_1;
  TArray<FObservedComponent,TSizedDefaultAllocator<32>_>::
  RemoveAll<_AChaosCacheManager::RemoveObservedComponent_::__l2::<lambda_1>_>
            (&this->ObservedComponents,&local_18);
  return;
}

// ResetAllComponentTransforms @ 14db03830

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosCacheManager::ResetAllComponentTransforms(AChaosCacheManager *this)

{
  int iVar1;
  int iVar2;
  USceneComponent *this_00;
  UClass *pUVar3;
  UChaosCache *pUVar4;
  FName *pFVar5;
  FName *pFVar6;
  undefined1 local_res8 [8];
  
  if ((this->CacheCollection).field0_0x0.DebugPtr != (UChaosCacheCollection *)0x0) {
    pFVar5 = (FName *)(this->ObservedComponents).AllocatorInstance.Data;
    iVar1 = (this->ObservedComponents).ArrayNum;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x32;
    while( true ) {
      if ((this->ObservedComponents).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar6) break;
      this_00 = (USceneComponent *)
                FSoftComponentReference::GetComponent
                          ((FSoftComponentReference *)(pFVar5 + 6),(AActor *)this);
      if (this_00 != (USceneComponent *)0x0) {
        pUVar3 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        iVar2 = (int)pUVar3->_padding_;
        if (((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
             &pUVar3->_padding_)) &&
           (pUVar4 = UChaosCacheCollection::FindCache
                               ((this->CacheCollection).field0_0x0.DebugPtr,pFVar5),
           pUVar4 != (UChaosCache *)0x0)) {
          USceneComponent::SetWorldTransform
                    (this_00,&(pUVar4->Spawnable).InitialTransform,false,(FHitResult *)0x0,None);
        }
      }
      pFVar5 = pFVar5 + 0x32;
    }
  }
  return;
}

// ResetSingleTransform @ 14db03960

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosCacheManager::ResetSingleTransform(AChaosCacheManager *this,int param_1)

{
  int iVar1;
  USceneComponent *this_00;
  UClass *pUVar2;
  UChaosCache *pUVar3;
  FName *pFVar4;
  
  if ((((this->CacheCollection).field0_0x0.DebugPtr != (UChaosCacheCollection *)0x0) &&
      (-1 < param_1)) && (param_1 < (this->ObservedComponents).ArrayNum)) {
    pFVar4 = (FName *)((this->ObservedComponents).AllocatorInstance.Data + (longlong)param_1 * 400);
    this_00 = (USceneComponent *)
              FSoftComponentReference::GetComponent
                        ((FSoftComponentReference *)(pFVar4 + 6),(AActor *)this);
    if (this_00 != (USceneComponent *)0x0) {
      pUVar2 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if (((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar2->_padding_)) &&
         (pUVar3 = UChaosCacheCollection::FindCache
                             ((this->CacheCollection).field0_0x0.DebugPtr,pFVar4),
         pUVar3 != (UChaosCache *)0x0)) {
        USceneComponent::SetWorldTransform
                  (this_00,&(pUVar3->Spawnable).InitialTransform,false,(FHitResult *)0x0,None);
      }
    }
  }
  return;
}

// Serialize @ 14db03cb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosCacheManager::Serialize(AChaosCacheManager *this,FArchive *param_1)

{
  int iVar1;
  bool bVar2;
  FWeakObjectPtr *this_00;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  AChaosCacheManager *local_res8;
  undefined1 local_68 [8];
  FSoftObjectPath local_60;
  
  AActor::Serialize((AActor *)this,param_1);
  pFVar3 = (this->ObservedComponents).AllocatorInstance.Data;
  iVar1 = (this->ObservedComponents).ArrayNum;
  this_00 = (FWeakObjectPtr *)(pFVar3 + 0x28);
  pFVar5 = pFVar3 + (longlong)iVar1 * 400;
  while( true ) {
    if ((this->ObservedComponents).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar3 == pFVar5) break;
    if ((param_1->field_0x28 & 1) != 0) {
      bVar2 = FWeakObjectPtr::IsValid(this_00);
      if (bVar2) {
        local_res8 = (AChaosCacheManager *)FWeakObjectPtr::Get(this_00);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res8 != (AChaosCacheManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res8);
        }
        FSoftObjectPtr::operator=((FSoftObjectPtr *)(this_00 + 5),(FObjectPtr)&local_res8);
        this_00[1] = this_00[-4];
        this_00[4] = this_00[-1];
        iVar4 = this_00[-2].ObjectIndex + -1;
        if (this_00[-2].ObjectIndex == 0) {
          iVar4 = 0;
        }
        ::FString::AssignRange((FString *)(this_00 + 2),(wchar_t *)this_00[-3],iVar4);
      }
      if ((param_1->field_0x28 & 1) != 0) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (AChaosCacheManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        local_60.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_60.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_60.AssetPath.AssetName.Number = 0;
        local_60.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_60.AssetPath.PackageName.Number = 0;
        local_60.SubPathString.Data.ArrayNum = 0;
        local_60.SubPathString.Data.ArrayMax = 0;
        local_68 = (undefined1  [8])0x0;
        FUtf8String::Reset(&local_60.SubPathString,0);
        local_res8 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (AChaosCacheManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FSoftObjectPtr::operator=((FSoftObjectPtr *)local_68,(FObjectPtr)&local_res8);
        bVar2 = FSoftObjectPath::operator==((FSoftObjectPath *)(this_00 + 6),&local_60);
        if (local_60.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.SubPathString.Data.AllocatorInstance.Data);
        }
        if (bVar2) {
          local_res8 = (AChaosCacheManager *)0x0;
          FSoftObjectPtr::operator=((FSoftObjectPtr *)(this_00 + 5),(FObjectPtr)&local_res8);
        }
      }
    }
    pFVar3 = pFVar3 + 400;
    this_00 = this_00 + 0x32;
  }
  return;
}

// Serialize @ 14db03e80

void __thiscall
AChaosCacheManager::Serialize(AChaosCacheManager *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetCacheCollection @ 14db04050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AChaosCacheManager::SetCacheCollection(AChaosCacheManager *this,UChaosCacheCollection *param_1)

{
  int iVar1;
  UChaosCacheCollection *pUVar2;
  UChaosCacheCollection *pUVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  FName local_res8;
  FString local_28;
  
  iVar1 = (this->ObservedComponents).ArrayNum;
  pFVar4 = (this->ObservedComponents).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 400;
  while( true ) {
    if ((this->ObservedComponents).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (pFVar4[0x91] != (FScriptContainerElement)0x0) {
      if (2 < (byte)LogChaosCache._0_1_) {
        local_res8 = (FName)this->_padding_;
        ::FName::ToString(&local_res8,&local_28);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCache);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
    pFVar4 = pFVar4 + 400;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UChaosCacheCollection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->CacheCollection).field0_0x0.DebugPtr = param_1;
  iVar1 = (this->ObservedComponents).ArrayNum;
  pFVar4 = (this->ObservedComponents).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 400;
  while( true ) {
    if ((this->ObservedComponents).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (*(longlong *)(pFVar4 + 0xa8) != 0) {
      pUVar2 = (this->CacheCollection).field0_0x0.DebugPtr;
      pUVar3 = *(UChaosCacheCollection **)(*(longlong *)(pFVar4 + 0xa8) + 0x20);
      if (pUVar2 == (UChaosCacheCollection *)0x0) {
        bVar6 = pUVar3 == (UChaosCacheCollection *)0x0;
      }
      else {
        bVar6 = pUVar2 == pUVar3;
      }
      if (!bVar6) {
        *(undefined8 *)(pFVar4 + 0xa8) = 0;
      }
    }
    pFVar4 = pFVar4 + 400;
  }
  this->StartTime = 0.0;
  if (this->CacheMode == Record) {
    return;
  }
  OnStartFrameChanged(this,0.0);
  return;
}

// SetCacheMode @ 14db041d0

void __thiscall AChaosCacheManager::SetCacheMode(AChaosCacheManager *this,ECacheMode param_1)

{
  float fVar1;
  
  this->CacheMode = param_1;
  if (param_1 == Record) {
    if (this->bCanRecord != false) {
      this->StartTime = 0.0;
      return;
    }
    this->CacheMode = None;
  }
  fVar1 = this->StartTime;
  this->StartTime = fVar1;
  OnStartFrameChanged(this,(double)fVar1);
  return;
}

// SetCurrentTime @ 14db04220

void __thiscall AChaosCacheManager::SetCurrentTime(AChaosCacheManager *this,float param_1)

{
  this->StartTime = param_1;
  if (this->CacheMode != Record) {
    OnStartFrameChanged(this,(double)param_1);
    return;
  }
  return;
}

// SetStartTime @ 14db04ec0

void __thiscall AChaosCacheManager::SetStartTime(AChaosCacheManager *this,float param_1)

{
  this->StartTime = param_1;
  if (this->CacheMode != Record) {
    OnStartFrameChanged(this,(double)param_1);
    return;
  }
  return;
}

// Start @ 14db05270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AChaosCacheManager::Start(AChaosCacheManager *this,float param_1)

{
  FName local_res8 [4];
  FString local_28 [2];
  
  EndEvaluate(this);
  if (this->CacheMode == Record) {
    if ((this->bCreateNewCacheCollectionAssetOnRecord != false) && (1 < (byte)LogChaosCache._0_1_))
    {
      local_res8[0] = (FName)this->_padding_;
      ::FName::ToString(local_res8,local_28);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCache);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
    }
    if (this->CacheMode == Record) goto LAB_14db0530d;
  }
  this->StartTime = param_1;
  OnStartFrameChanged(this,(double)param_1);
LAB_14db0530d:
  BeginEvaluate(this);
  return;
}

// StaticRegisterNativesAChaosCacheManager @ 14db05330

void __cdecl AChaosCacheManager::StaticRegisterNativesAChaosCacheManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x10;
  local_18.DataPtr = Z_Construct_UClass_AChaosCacheManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Stop @ 14db053e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosCacheManager::Stop(AChaosCacheManager *this)

{
  FScriptContainerElement *pFVar1;
  TMap<Chaos::FPhysicsSolverEvents_*,FPerSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>_>
  *this_00;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  FScriptContainerElement *pFVar9;
  UChaosCache *this_01;
  code *pcVar10;
  TMap<Chaos::FPhysicsSolverEvents_*,FPerSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>_>
  *pTVar11;
  FPhysicsSolverEvents *this_02;
  bool bVar12;
  FChaosSolversModule *pFVar13;
  UActorComponent *pUVar14;
  UClass *pUVar15;
  IModularFeatures *this_03;
  ulonglong uVar16;
  FStaticBasicLogRecord *pFVar17;
  uint uVar18;
  int iVar19;
  ForAnyElementType FVar20;
  FParticleTransformTrack *this_04;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  undefined1 *puVar23;
  uint *puVar24;
  longlong lVar25;
  FParticleTransformTrack *pFVar26;
  longlong lVar27;
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  undefined1 uStack_158;
  undefined1 auStack_157 [7];
  TArray<Chaos::FComponentCacheAdapter_*,TSizedDefaultAllocator<32>_> TStack_150;
  int iStack_140;
  int iStack_13c;
  TMap<Chaos::FPhysicsSolverEvents_*,FPerSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>_>
  *pTStack_138;
  int iStack_130;
  uint uStack_12c;
  undefined1 *puStack_128;
  undefined4 uStack_120;
  int iStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  TMap<Chaos::FPhysicsSolverEvents_*,FPerSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>_>
  *pTStack_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  FPhysicsSolverEvents *pFStack_d8;
  FPerSolverData FStack_d0;
  undefined4 uStack_4c;
  
  this->bIsSimulating = false;
  pFVar13 = FChaosSolversModule::GetModule();
  if ((pFVar13 == (FChaosSolversModule *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Module",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheManagerActor.cpp"
                          ,0x2aa,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  WaitForObservedComponentSolverTasks(this);
  iVar4 = (this->ActiveAdapters).ArrayNum;
  if (((iVar4 != 0) && ((this->ObservedComponents).ArrayNum != iVar4)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActiveAdapters.IsEmpty() || ObservedComponents.Num() == ActiveAdapters.Num()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheManagerActor.cpp"
                          ,0x2ae,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar18 = 0;
  if (0 < (this->ActiveAdapters).ArrayNum) {
    lVar25 = 0;
    lVar27 = 0;
    do {
      uVar22 = 0;
      if ((int)uVar18 < (this->ActiveAdapters).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      plVar6 = *(longlong **)((this->ActiveAdapters).AllocatorInstance.Data + lVar27);
      if (plVar6 != (longlong *)0x0) {
        uVar22 = 0;
        if ((int)uVar18 < (this->ObservedComponents).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar21 = (this->ObservedComponents).AllocatorInstance.Data;
        uVar7 = *(undefined8 *)(pFVar21 + lVar25 + 0xa8);
        pcVar10 = *(code **)(*plVar6 + 0x70);
        pUVar14 = FSoftComponentReference::GetComponent
                            ((FSoftComponentReference *)(pFVar21 + lVar25 + 0x30),(AActor *)this);
        if (pUVar14 == (UActorComponent *)0x0) {
LAB_14daf038f:
          pUVar14 = (UActorComponent *)0x0;
        }
        else {
          pUVar15 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
          iVar4 = (int)pUVar15->_padding_;
          if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar4) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
              &pUVar15->_padding_)) goto LAB_14daf038f;
        }
        (*pcVar10)(plVar6,pUVar14,uVar7);
      }
      uVar18 = uVar18 + 1;
      lVar27 = lVar27 + 8;
      lVar25 = lVar25 + 400;
    } while ((int)uVar18 < (this->ActiveAdapters).ArrayNum);
  }
  this_03 = IModularFeatures::Get();
  IModularFeatures::GetModularFeatureImplementations<Chaos::FComponentCacheAdapter>
            (this_03,&TStack_150,Chaos::FComponentCacheAdapter::FeatureName);
  iVar4 = TStack_150.ArrayNum;
  uVar16 = (ulonglong)TStack_150.ArrayNum;
  pFVar21 = TStack_150.AllocatorInstance.Data + uVar16 * 8;
  FVar20.Data = TStack_150.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar16 != iVar4) {
      auStackX_10[0] = 0;
      `TCheckedPointerIterator<Chaos::FComponentCacheAdapter_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(auStackX_10);
    }
    if (FVar20.Data == pFVar21) break;
    (**(code **)(**(longlong **)FVar20.Data + 0x38))();
    uVar16 = (ulonglong)(uint)TStack_150.ArrayNum;
    FVar20.Data = FVar20.Data + 8;
  }
  this_00 = &this->PerSolverData;
  iStack_130 = 0;
  iVar4 = *(int *)&(this->PerSolverData).field_0x28;
  puVar3 = &(this->PerSolverData).field_0x10;
  iStack_118 = 0;
  uStack_12c = 1;
  iStack_11c = 0;
  if (iVar4 != 0) {
    puVar24 = *(uint **)&(this->PerSolverData).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)puVar3;
    }
    uVar18 = *puVar24;
    while (uVar18 == 0) {
      iStack_130 = iStack_130 + 1;
      iStack_118 = iStack_118 + 0x20;
      iStack_11c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_130) goto LAB_14daf049c;
      uVar18 = puVar24[iStack_130];
    }
    uStack_12c = -uVar18 & uVar18;
    uVar16 = (ulonglong)uStack_12c * 2 + 1;
    lVar25 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    iStack_140 = (int)lVar25;
    iStack_11c = iStack_140 + -1 + iStack_118;
    if (iVar4 < iStack_11c) {
      iStack_11c = iVar4;
    }
  }
LAB_14daf049c:
  uVar18 = *(uint *)&(this->PerSolverData).field_0x28;
  uStack_114 = uStack_4c;
  uVar22 = uVar18 & 0xffffffe0;
  iStack_110 = *(int *)&(this->PerSolverData).field_0x8 - *(int *)&(this->PerSolverData).field_0x34;
  uStack_120 = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uStack_12c,iStack_130);
  TStack_100.CurrentBitIndex = iStack_11c;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar18 >> 5;
  TStack_100._28_4_ = uStack_4c;
  TStack_100.BaseBitIndex = iStack_118;
  uStack_e0 = CONCAT44(uStack_10c,iStack_110);
  pTStack_138 = this_00;
  puStack_128 = puVar3;
  pTStack_108 = this_00;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar5 = *(uint *)&(this->PerSolverData).field_0x28;
  if (uVar18 != uVar5) {
    puVar8 = *(undefined1 **)&(this->PerSolverData).field_0x20;
    puVar23 = puVar3;
    if (puVar8 != (undefined1 *)0x0) {
      puVar23 = puVar8;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar19 * 4);
    while (uVar18 == 0) {
      iVar19 = iVar19 + 1;
      uVar22 = uVar22 + 0x20;
      uVar18 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar19) goto LAB_14daf05c0;
      uVar18 = *(uint *)(puVar23 + (longlong)iVar19 * 4);
    }
    uVar16 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    iStack_13c = (int)lVar25;
    uVar18 = iStack_13c + -1 + uVar22;
    if ((int)uVar5 < (int)uVar18) {
      uVar18 = uVar5;
    }
  }
LAB_14daf05c0:
  while( true ) {
    pTVar11 = pTStack_108;
    if (*(int *)(&pTStack_108->field_0x0 + 8) - *(int *)(&pTStack_108->field_0x0 + 0x34) !=
        (int)uStack_e0) {
      auStackX_18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsSolverEvents_*,FPerSolverData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_18);
    }
    if (((TStack_100.CurrentBitIndex == uVar18) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
       (pTVar11 == this_00)) break;
    lVar25 = *(longlong *)&pTVar11->field_0x0;
    pFStack_d8 = *(FPhysicsSolverEvents **)((longlong)TStack_100.CurrentBitIndex * 0x70 + lVar25);
    FPerSolverData::FPerSolverData
              (&FStack_d0,
               (FPerSolverData *)((longlong)TStack_100.CurrentBitIndex * 0x70 + lVar25 + 8));
    this_02 = pFStack_d8;
    if (pFStack_d8 == (FPhysicsSolverEvents *)0x0) {
      bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_265275798884187450>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheManagerActor.cpp"
                          ,0x2c6,"CurrSolver");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    else {
      bVar12 = Chaos::FPhysicsSolverEvents::RemovePostAdvanceCallback
                         (pFStack_d8,FStack_d0.PostSolveHandle);
      if ((!bVar12) &&
         (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_265275798884187448>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheManagerActor.cpp"
                              ,0x2c8,
                              "CurrSolver->RemovePostAdvanceCallback(CurrData.PostSolveHandle)"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      bVar12 = Chaos::FPhysicsSolverEvents::RemovePreBufferCallback
                         (this_02,FStack_d0.PreBufferHandle);
      if ((!bVar12) &&
         (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_265275798884187447>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheManagerActor.cpp"
                              ,0x2c9,"CurrSolver->RemovePreBufferCallback(CurrData.PreBufferHandle)"
                             ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      bVar12 = Chaos::FPhysicsSolverEvents::RemovePreAdvanceCallback
                         (this_02,FStack_d0.PreSolveHandle);
      if ((!bVar12) &&
         (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_265275798884187446>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheManagerActor.cpp"
                              ,0x2ca,"CurrSolver->RemovePreAdvanceCallback(CurrData.PreSolveHandle)"
                             ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      bVar12 = Chaos::FPhysicsSolverEvents::RemoveTeardownCallback(this_02,FStack_d0.TeardownHandle)
      ;
      if ((!bVar12) &&
         (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_265275798884187445>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheManagerActor.cpp"
                              ,0x2cb,"CurrSolver->RemoveTeardownCallback(CurrData.TeardownHandle)"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FStack_d0.PostSolveHandle.ID = 0;
      FStack_d0.PreSolveHandle.ID = 0;
      FStack_d0.PreBufferHandle.ID = 0;
      FStack_d0.TeardownHandle.ID = 0;
    }
    if (FStack_d0.PendingKinematicUpdates.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(FStack_d0.PendingKinematicUpdates.AllocatorInstance.Data);
    }
    if (FStack_d0.RecordIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_d0.RecordIndices.AllocatorInstance.Data);
    }
    if (FStack_d0.PlaybackIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_d0.PlaybackIndices.AllocatorInstance.Data);
    }
    DestructItems<FPlaybackTickRecord,int>
              ((FPlaybackTickRecord *)FStack_d0.PlaybackTickRecords.AllocatorInstance.Data,
               FStack_d0.PlaybackTickRecords.ArrayNum);
    if ((FPlaybackTickRecord *)FStack_d0.PlaybackTickRecords.AllocatorInstance.Data !=
        (FPlaybackTickRecord *)0x0) {
      FMemory::Free(FStack_d0.PlaybackTickRecords.AllocatorInstance.Data);
    }
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  TSet<TTuple<Chaos::FPhysicsSolverEvents_*,FPerSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<Chaos::FPhysicsSolverEvents_*,FPerSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverEvents_*,FPerSolverData,0>,FDefaultSetAllocator>
           *)this_00);
  (this->ActiveAdapters).ArrayNum = 0;
  if ((this->ActiveAdapters).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ActiveAdapters).AllocatorInstance,0,&(this->ActiveAdapters).ArrayMax);
  }
  pFVar9 = (this->OpenRecordCaches).AllocatorInstance.Data;
  iVar4 = (this->OpenRecordCaches).ArrayNum;
  pFVar21 = pFVar9 + 8;
  while( true ) {
    if ((this->OpenRecordCaches).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TTuple<FCacheUserToken,UChaosCache_*>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_20);
    }
    pFVar1 = pFVar21 + -8;
    if (pFVar1 == pFVar9 + (longlong)iVar4 * 0x18) break;
    this_01 = *(UChaosCache **)(pFVar21 + 8);
    if (((*pFVar1 == (FScriptContainerElement)0x0) ||
        (*(UChaosCache **)pFVar21 == (UChaosCache *)0x0)) || (*(UChaosCache **)pFVar21 != this_01))
    {
      if (*(longlong *)pFVar21 == 0) {
        if (2 < (byte)LogChaosCache._0_1_) {
          pFVar17 = &::LOG_Static;
          goto LAB_14daf0887;
        }
      }
      else if (2 < (byte)LogChaosCache._0_1_) {
        pFVar17 = &::LOG_Static;
LAB_14daf0887:
        UE::Logging::Private::BasicLog<3>(pFVar17,(FLogCategoryBase *)&LogChaosCache);
      }
    }
    else {
      UChaosCache::FlushPendingFrames(this_01);
      *pFVar1 = (FScriptContainerElement)0x0;
      *(longlong *)pFVar21 = 0;
      LOCK();
      this_01->CurrentRecordCount = (atomic<int>)((int)this_01->CurrentRecordCount + -1);
      UNLOCK();
      this_01->Version = 1;
    }
    if (this_01->bCompressChannels != false) {
      UChaosCache::CompressChannelsData
                (this_01,this_01->ChannelsCompressionErrorThreshold,
                 this_01->ChannelsCompressionSampleRate);
    }
    if (bChaosCacheCompressTracksAfterRecording != false) {
      iVar19 = (this_01->ParticleTracks).ArrayNum;
      this_04 = (FParticleTransformTrack *)(this_01->ParticleTracks).AllocatorInstance.Data;
      pFVar26 = (FParticleTransformTrack *)((longlong)this_04 + (longlong)iVar19 * 0x98);
      while( true ) {
        if ((this_01->ParticleTracks).ArrayNum != iVar19) {
          `TCheckedPointerIterator<FPerParticleCacheData,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&uStack_158);
        }
        if (this_04 == pFVar26) break;
        FParticleTransformTrack::Compress(this_04);
        this_04 = (FParticleTransformTrack *)&this_04[2].RawTransformTrack.PosKeys.ArrayNum;
      }
    }
    pFVar21 = pFVar21 + 0x18;
  }
  (this->OpenRecordCaches).ArrayNum = 0;
  if ((this->OpenRecordCaches).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->OpenRecordCaches).AllocatorInstance,0,
               &(this->OpenRecordCaches).ArrayMax);
  }
  pFVar9 = (this->OpenPlaybackCaches).AllocatorInstance.Data;
  iVar4 = (this->OpenPlaybackCaches).ArrayNum;
  pFVar21 = pFVar9 + 8;
  do {
    while( true ) {
      if ((this->OpenPlaybackCaches).ArrayNum != iVar4) {
        `TCheckedPointerIterator<TTuple<FCacheUserToken,UChaosCache_*>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStack_157);
      }
      pFVar1 = pFVar21 + -8;
      if (pFVar1 == pFVar9 + (longlong)iVar4 * 0x18) {
        (this->OpenPlaybackCaches).ArrayNum = 0;
        if ((this->OpenPlaybackCaches).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,&(this->OpenPlaybackCaches).AllocatorInstance,0,
                     &(this->OpenPlaybackCaches).ArrayMax);
        }
        if (TStack_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_150.AllocatorInstance.Data);
        }
        return;
      }
      if (((*pFVar1 == (FScriptContainerElement)0x0) || (*(longlong *)pFVar21 == 0)) ||
         (*(longlong *)pFVar21 != *(longlong *)(pFVar21 + 8))) break;
      *(longlong *)pFVar21 = 0;
      *pFVar1 = (FScriptContainerElement)0x0;
      LOCK();
      piVar2 = (int *)(*(longlong *)(pFVar21 + 8) + 0x324);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      pFVar21 = pFVar21 + 0x18;
    }
    if (*(longlong *)pFVar21 == 0) {
      if (2 < (byte)LogChaosCache._0_1_) {
        pFVar17 = &::LOG_Static;
        goto LAB_14daf09c3;
      }
    }
    else if (2 < (byte)LogChaosCache._0_1_) {
      pFVar17 = &::LOG_Static;
LAB_14daf09c3:
      UE::Logging::Private::BasicLog<3>(pFVar17,(FLogCategoryBase *)&LogChaosCache);
    }
    pFVar21 = pFVar21 + 0x18;
  } while( true );
}

// TickActor @ 14db055d0

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
AChaosCacheManager::TickActor
          (AChaosCacheManager *this,float param_1,ELevelTick param_2,FActorTickFunction *param_3)

{
  TObjectPtr<UChaosCacheCollection>_u_0 local_res8 [4];
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  TObjectPtr<UChaosCacheCollection>_u_0 *local_10;
  
  AActor::TickActor((AActor *)this,param_1,param_2,param_3);
  local_res8[0] = (TObjectPtr<UChaosCacheCollection>_u_0)(this->CacheCollection).field0_0x0.DebugPtr
  ;
  if (local_res8[0].DebugPtr != (UChaosCacheCollection *)0x0) {
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UChaosCacheCollection::FlushAllCacheWrites'::__l2::<lambda_1>,void,int>
               ::Call;
    local_10 = local_res8;
    local_28.DataPtr = (void **)0x0;
    local_28.ArrayNum = 0;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",((local_res8[0].DebugPtr)->Caches).ArrayNum,1,
               (TFunctionRef<void___cdecl(int)> *)&local_18,(<lambda_1>)local_res8[0]._0_1_,None,
               &local_28);
  }
  return;
}

// TickObservedComponents @ 14db05650

void __thiscall
AChaosCacheManager::TickObservedComponents
          (AChaosCacheManager *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,double param_2,
          TUniqueFunction<void___cdecl(UChaosCache_*,FObservedComponent_&,Chaos::FComponentCacheAdapter_*)>
          *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_68 [4];
  uint local_64;
  longlong local_60;
  longlong local_58;
  FScriptContainerElement *local_50;
  
  local_64 = param_1->ArrayNum;
  uVar8 = (ulonglong)(int)local_64;
  pFVar11 = (param_1->AllocatorInstance).Data;
  local_50 = pFVar11 + uVar8 * 4;
  while( true ) {
    pFVar10 = local_50;
    if (param_1->ArrayNum != (int)uVar8) {
      local_68[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_68);
    }
    if (pFVar11 == pFVar10) break;
    uVar1 = *(uint *)pFVar11;
    if ((((int)uVar1 < 0) || (iVar2 = (this->ObservedComponents).ArrayNum, iVar2 <= (int)uVar1)) ||
       (iVar2 != (this->ActiveAdapters).ArrayNum)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObservedComponents.IsValidIndex(Index) && ObservedComponents.Num() == ActiveAdapters.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheManagerActor.cpp"
                         ,0x471,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar6 = 0;
    if ((int)uVar1 < (this->ObservedComponents).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
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
    pFVar10 = (this->ObservedComponents).AllocatorInstance.Data + (longlong)(int)uVar1 * 400;
    uVar6 = 0;
    if ((int)uVar1 < (this->ActiveAdapters).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
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
    lVar3 = *(longlong *)((this->ActiveAdapters).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
    if ((((*(longlong *)(pFVar10 + 0xa8) != 0) &&
         ((this->CacheMode == Record || (pFVar10[0x79] != (FScriptContainerElement)0x0)))) &&
        (*(double *)(pFVar10 + 0x98) = param_2 + *(double *)(pFVar10 + 0x98),
        pFVar10[0x91] != (FScriptContainerElement)0x0)) && (lVar3 != 0)) {
      if (this->CacheMode == Play) {
        *(float *)(pFVar10 + 0xb0) = (float)param_2;
      }
      *(double *)(pFVar10 + 0xa0) = param_2 + *(double *)(pFVar10 + 0xa0);
      local_60 = lVar3;
      local_58 = *(longlong *)(pFVar10 + 0xa8);
      UE::Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar4 = *(code **)param_3;
      plVar9 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar9 = (longlong *)&param_3->field_0x10;
      }
      uVar7 = (**(code **)(*plVar9 + 8))();
      (*pcVar4)(uVar7,&local_58,pFVar10,&local_60);
    }
    uVar8 = (ulonglong)local_64;
    pFVar11 = pFVar11 + 4;
  }
  if (*(longlong *)param_3 != 0) {
    plVar9 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// TriggerAll @ 14db058d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosCacheManager::TriggerAll(AChaosCacheManager *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UActorComponent *pUVar4;
  UClass *pUVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ObservedComponents).AllocatorInstance.Data;
  iVar1 = (this->ObservedComponents).ArrayNum;
  pFVar6 = pFVar3 + 0x79;
  while( true ) {
    if ((this->ObservedComponents).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 + -0x79 == pFVar3 + (longlong)iVar1 * 400) break;
    if (this->StartMode == Triggered) {
      pUVar4 = FSoftComponentReference::GetComponent
                         ((FSoftComponentReference *)(pFVar6 + -0x49),(AActor *)this);
      if (pUVar4 != (UActorComponent *)0x0) {
        pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        iVar2 = (int)pUVar5->_padding_;
        if (((iVar2 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
             &pUVar5->_padding_)) &&
           ((this->CacheMode == Record || (*pFVar6 != (FScriptContainerElement)0x0)))) {
          pFVar6[0x18] = (FScriptContainerElement)0x1;
        }
      }
    }
    pFVar6 = pFVar6 + 400;
  }
  return;
}

// TriggerComponent @ 14db059a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AChaosCacheManager::TriggerComponent(AChaosCacheManager *this,UPrimitiveComponent *param_1)

{
  int iVar1;
  int iVar2;
  UPrimitiveComponent *pUVar3;
  UClass *pUVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ObservedComponents).ArrayNum;
  pFVar5 = (this->ObservedComponents).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 400;
  do {
    if ((this->ObservedComponents).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar6) {
      return;
    }
    pUVar3 = (UPrimitiveComponent *)
             FSoftComponentReference::GetComponent
                       ((FSoftComponentReference *)(pFVar5 + 0x30),(AActor *)this);
    if (pUVar3 == (UPrimitiveComponent *)0x0) {
LAB_14db05a25:
      pUVar3 = (UPrimitiveComponent *)0x0;
    }
    else {
      pUVar4 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar4->_padding_)) goto LAB_14db05a25;
    }
    if ((pUVar3 == param_1) &&
       ((this->CacheMode == Record || (pFVar5[0x79] != (FScriptContainerElement)0x0)))) {
      if ((pFVar5 != (FScriptContainerElement *)0x0) && (this->StartMode == Triggered)) {
        pFVar5[0x91] = (FScriptContainerElement)0x1;
      }
      return;
    }
    pFVar5 = pFVar5 + 400;
  } while( true );
}

// TriggerComponentByCache @ 14db05a80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosCacheManager::TriggerComponentByCache(AChaosCacheManager *this,FName param_1)

{
  int iVar1;
  int iVar2;
  UActorComponent *pUVar3;
  UClass *pUVar4;
  FName *pFVar5;
  FName *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ObservedComponents).ArrayNum;
  pFVar5 = (FName *)(this->ObservedComponents).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x32;
  while( true ) {
    if ((this->ObservedComponents).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if ((*pFVar5 == param_1) &&
       (pUVar3 = FSoftComponentReference::GetComponent
                           ((FSoftComponentReference *)(pFVar5 + 6),(AActor *)this),
       pUVar3 != (UActorComponent *)0x0)) {
      pUVar4 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if (((iVar2 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
           &pUVar4->_padding_)) &&
         ((this->CacheMode == Record ||
          (*(char *)((longlong)&pFVar5[0xf].ComparisonIndex.Value + 1) != '\0')))) {
        if (this->StartMode == Triggered) {
          *(undefined1 *)((longlong)&pFVar5[0x12].ComparisonIndex.Value + 1) = 1;
        }
        return;
      }
    }
    pFVar5 = pFVar5 + 0x32;
  }
  return;
}

// UnregisterObservedComponentsNotifiers @ 14db07ae0

void __thiscall AChaosCacheManager::UnregisterObservedComponentsNotifiers(AChaosCacheManager *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FDestructionSentinel local_48;
  
  pFVar3 = (this->ObservedComponents).AllocatorInstance.Data;
  iVar1 = (this->ObservedComponents).ArrayNum;
  pFVar2 = pFVar3 + 0x188;
  pFVar4 = pFVar3 + (longlong)iVar1 * 400;
  while( true ) {
    if ((this->ObservedComponents).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar2 + -0x10),
               (FWriteAccessScope *)&local_48);
    if ((*(int *)pFVar2 != 0) && (*(undefined8 **)(pFVar2 + -8) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(pFVar2 + -8))();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(pFVar2 + -8),0,0,0x10);
      *(int *)pFVar2 = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    pFVar3 = pFVar3 + 400;
    pFVar2 = pFVar2 + 400;
  }
  return;
}

// WaitForObservedComponentSolverTasks @ 14db07da0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosCacheManager::WaitForObservedComponentSolverTasks(AChaosCacheManager *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UActorComponent *pUVar6;
  UClass *pUVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar1 = (this->ActiveAdapters).ArrayNum;
  if (((iVar1 != 0) && ((this->ObservedComponents).ArrayNum != iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveAdapters.IsEmpty() || ObservedComponents.Num() == ActiveAdapters.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheManagerActor.cpp"
                         ,0x490,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar8 = 0;
  if (0 < (this->ActiveAdapters).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->ActiveAdapters).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      plVar2 = *(longlong **)((this->ActiveAdapters).AllocatorInstance.Data + lVar9);
      if (plVar2 != (longlong *)0x0) {
        uVar5 = 0;
        if ((int)uVar8 < (this->ObservedComponents).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = *(code **)(*plVar2 + 0xa8);
        pUVar6 = FSoftComponentReference::GetComponent
                           ((FSoftComponentReference *)
                            ((this->ObservedComponents).AllocatorInstance.Data +
                            (longlong)(int)uVar8 * 400 + 0x30),(AActor *)this);
        if (pUVar6 == (UActorComponent *)0x0) {
LAB_14db07f10:
          pUVar6 = (UActorComponent *)0x0;
        }
        else {
          pUVar7 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
          iVar1 = (int)pUVar7->_padding_;
          if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar7->_padding_)) goto LAB_14db07f10;
        }
        (*pcVar3)(plVar2,pUVar6);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->ActiveAdapters).ArrayNum);
  }
  return;
}

// execClearObservedComponents @ 14db085b0

void __cdecl
AChaosCacheManager::execClearObservedComponents(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearObservedComponents((AChaosCacheManager *)param_1,local_res10[0] != 0);
  return;
}

// execEnablePlayback @ 14db08640

void __cdecl AChaosCacheManager::execEnablePlayback(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  int local_res8 [2];
  uint local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar6 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_res10[0];
  if ((-1 < (int)local_res10[0]) && ((int)local_res10[0] < *(int *)&param_1[0x12].field_0x10)) {
    uVar5 = 0;
    if ((int)local_res10[0] < *(int *)&param_1[0x12].field_0x10) {
      uVar5 = ~local_res10[0] >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(bool *)(lVar4 * 400 + 0x79 + *(longlong *)&param_1[0x12].field_0x8) = bVar6;
  }
  return;
}

// execEnablePlaybackByCache @ 14db08780

void __cdecl
AChaosCacheManager::execEnablePlaybackByCache(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  int local_res10 [2];
  longlong local_res20;
  
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar3 = local_res20;
  bVar6 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[0x12].field_0x10;
  plVar5 = *(longlong **)&param_1[0x12].field_0x8;
  plVar4 = plVar5 + (longlong)iVar1 * 0x32;
  while( true ) {
    if (*(int *)&param_1[0x12].field_0x10 != iVar1) {
      `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (plVar5 == plVar4) break;
    if (*plVar5 == lVar3) {
      *(bool *)((longlong)plVar5 + 0x79) = bVar6;
      return;
    }
    plVar5 = plVar5 + 0x32;
  }
  return;
}

// execFindOrAddObservedComponent @ 14db088a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
AChaosCacheManager::execFindOrAddObservedComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  int iVar3;
  FProperty *pFVar4;
  UPrimitiveComponent *pUVar5;
  UPrimitiveComponent *pUVar6;
  UClass *pUVar7;
  FObservedComponent *pFVar8;
  FName *pFVar9;
  FObservedComponent *pFVar10;
  bool bVar11;
  undefined1 local_res20 [8];
  int local_58 [2];
  FName local_50;
  UPrimitiveComponent *local_48 [2];
  
  local_48[0] = (UPrimitiveComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_58[0] = 0;
  pFVar9 = &local_50;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar9 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  pUVar5 = local_48[0];
  bVar11 = local_58[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_48[0] == (UPrimitiveComponent *)0x0) ||
     ((*(uint *)&local_48[0]->field_0x8 >> 6 & 1) != 0)) {
    return;
  }
  pFVar8 = *(FObservedComponent **)&param_1[0x12].field_0x8;
  iVar2 = *(int *)&param_1[0x12].field_0x10;
  pFVar10 = pFVar8 + iVar2;
  do {
    if (*(int *)&param_1[0x12].field_0x10 != iVar2) {
      `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar8 == pFVar10) goto LAB_14db08a47;
    pUVar6 = (UPrimitiveComponent *)
             FSoftComponentReference::GetComponent(&pFVar8->SoftComponentRef,(AActor *)param_1);
    if (pUVar6 == (UPrimitiveComponent *)0x0) {
LAB_14db08a32:
      pUVar6 = (UPrimitiveComponent *)0x0;
    }
    else {
      pUVar7 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar3 = (int)pUVar7->_padding_;
      if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar3) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar7->_padding_)) goto LAB_14db08a32;
    }
    if (pUVar6 == pUVar5) {
      if (pFVar8 == (FObservedComponent *)0x0) {
LAB_14db08a47:
        pFVar8 = AddNewObservedComponent((AChaosCacheManager *)param_1,pUVar5);
        if (pFVar8 == (FObservedComponent *)0x0) {
          return;
        }
      }
      if (bVar11) {
        bVar11 = false;
      }
      else {
        bVar11 = (bool)((byte)(pUVar5->BodyInstance)._padding_ & 1);
      }
      pFVar8->bIsSimulating = bVar11;
      pUVar7 = Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
      iVar2 = (int)pUVar7->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar7->_padding_)) {
        pFVar8->bHasNotifyBreaks = (bool)pUVar5[1].field_0x280;
      }
      bVar11 = ::FName::Equals(*pFVar9,L"");
      if (bVar11) {
        return;
      }
      pFVar8->CacheName = *pFVar9;
      return;
    }
    pFVar8 = pFVar8 + 1;
  } while( true );
}

// execIsRecording @ 14db08ae0

void __cdecl AChaosCacheManager::execIsRecording(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x11].field_0x21 == '\x02';
  return;
}

// execRemoveObservedComponent @ 14db08b10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
AChaosCacheManager::execRemoveObservedComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPrimitiveComponent *pUVar2;
  UPrimitiveComponent *local_res8;
  <lambda_1> local_18;
  
  local_res8 = (UPrimitiveComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EnsureObservedComponentsNotifierRegistration((AChaosCacheManager *)param_1);
  local_18.ToTest = pUVar2;
  local_18.__this = (AChaosCacheManager *)param_1;
  TArray<FObservedComponent,TSizedDefaultAllocator<32>_>::
  RemoveAll<_AChaosCacheManager::RemoveObservedComponent_::__l2::<lambda_1>_>
            ((TArray<FObservedComponent,TSizedDefaultAllocator<32>_> *)&param_1[0x12].field_0x8,
             &local_18);
  return;
}

// execResetAllComponentTransforms @ 14db08bc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
AChaosCacheManager::execResetAllComponentTransforms(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  USceneComponent *this;
  UClass *pUVar3;
  UChaosCache *pUVar4;
  FName *pFVar5;
  FName *pFVar6;
  undefined1 local_res8 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x11].field_0x18 != 0) {
    pFVar5 = *(FName **)&param_1[0x12].field_0x8;
    iVar1 = *(int *)&param_1[0x12].field_0x10;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x32;
    while( true ) {
      if (*(int *)&param_1[0x12].field_0x10 != iVar1) {
        `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar6) break;
      this = (USceneComponent *)
             FSoftComponentReference::GetComponent
                       ((FSoftComponentReference *)(pFVar5 + 6),(AActor *)param_1);
      if (this != (USceneComponent *)0x0) {
        pUVar3 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        iVar2 = (int)pUVar3->_padding_;
        if (((iVar2 <= *(int *)(this->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
             &pUVar3->_padding_)) &&
           (pUVar4 = UChaosCacheCollection::FindCache
                               (*(UChaosCacheCollection **)&param_1[0x11].field_0x18,pFVar5),
           pUVar4 != (UChaosCache *)0x0)) {
          USceneComponent::SetWorldTransform
                    (this,&(pUVar4->Spawnable).InitialTransform,false,(FHitResult *)0x0,None);
        }
      }
      pFVar5 = pFVar5 + 0x32;
    }
  }
  return;
}

// execResetSingleTransform @ 14db08cd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
AChaosCacheManager::execResetSingleTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  USceneComponent *this;
  UClass *pUVar3;
  UChaosCache *pUVar4;
  FName *pFVar5;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((*(longlong *)&param_1[0x11].field_0x18 != 0) && (-1 < local_res8[0])) &&
     (local_res8[0] < *(int *)&param_1[0x12].field_0x10)) {
    pFVar5 = (FName *)((longlong)local_res8[0] * 400 + *(longlong *)&param_1[0x12].field_0x8);
    this = (USceneComponent *)
           FSoftComponentReference::GetComponent
                     ((FSoftComponentReference *)(pFVar5 + 6),(AActor *)param_1);
    if (this != (USceneComponent *)0x0) {
      pUVar3 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8)
          == &pUVar3->_padding_)) {
        pUVar4 = UChaosCacheCollection::FindCache
                           (*(UChaosCacheCollection **)&param_1[0x11].field_0x18,pFVar5);
        if (pUVar4 != (UChaosCache *)0x0) {
          USceneComponent::SetWorldTransform
                    (this,&(pUVar4->Spawnable).InitialTransform,false,(FHitResult *)0x0,None);
        }
      }
    }
  }
  return;
}

// execSetCacheCollection @ 14db08de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AChaosCacheManager::execSetCacheCollection(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  UObject *pUVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  FName local_res8;
  UObject *local_res10;
  FString local_38;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[0x12].field_0x10;
  lVar5 = *(longlong *)&param_1[0x12].field_0x8;
  lVar6 = (longlong)iVar1 * 400 + lVar5;
  while( true ) {
    if (*(int *)&param_1[0x12].field_0x10 != iVar1) {
      `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (lVar5 == lVar6) break;
    if (*(char *)(lVar5 + 0x91) != '\0') {
      if (2 < (byte)LogChaosCache._0_1_) {
        local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_res8.Number = *(uint *)&param_1->field_0x1c;
        ::FName::ToString(&local_res8,&local_38);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCache);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
          return;
        }
      }
      return;
    }
    lVar5 = lVar5 + 400;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  *(UObject **)&param_1[0x11].field_0x18 = pUVar4;
  iVar1 = *(int *)&param_1[0x12].field_0x10;
  lVar5 = *(longlong *)&param_1[0x12].field_0x8;
  lVar6 = (longlong)iVar1 * 400 + lVar5;
  while( true ) {
    if (*(int *)&param_1[0x12].field_0x10 != iVar1) {
      `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (lVar5 == lVar6) break;
    if (*(longlong *)(lVar5 + 0xa8) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0xa8) + 0x20);
      if (*(longlong *)&param_1[0x11].field_0x18 == 0) {
        bVar7 = lVar3 == 0;
      }
      else {
        bVar7 = *(longlong *)&param_1[0x11].field_0x18 == lVar3;
      }
      if (!bVar7) {
        *(undefined8 *)(lVar5 + 0xa8) = 0;
      }
    }
    lVar5 = lVar5 + 400;
  }
  *(undefined4 *)&param_1[0x11].field_0x24 = 0;
  if (param_1[0x11].field_0x21 == '\x02') {
    return;
  }
  OnStartFrameChanged((AChaosCacheManager *)param_1,0.0);
  return;
}

// execSetCurrentTime @ 14db08fd0

void __cdecl AChaosCacheManager::execSetCurrentTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(float *)&param_1[0x11].field_0x24 = local_res8[0];
  if (param_1[0x11].field_0x21 != '\x02') {
    OnStartFrameChanged((AChaosCacheManager *)param_1,(double)local_res8[0]);
  }
  return;
}

// execSetStartTime @ 14db09070

void __cdecl AChaosCacheManager::execSetStartTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(float *)&param_1[0x11].field_0x24 = local_res8[0];
  if (param_1[0x11].field_0x21 != '\x02') {
    OnStartFrameChanged((AChaosCacheManager *)param_1,(double)local_res8[0]);
  }
  return;
}

// execStart @ 14db09110

void __cdecl AChaosCacheManager::execStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Start((AChaosCacheManager *)param_1,local_res10[0]);
  return;
}

// execStop @ 14db091a0

void __cdecl AChaosCacheManager::execStop(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EndEvaluate((AChaosCacheManager *)param_1);
  return;
}

// execTriggerAll @ 14db091c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl AChaosCacheManager::execTriggerAll(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  UActorComponent *pUVar4;
  UClass *pUVar5;
  char *pcVar6;
  undefined1 local_res8 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = *(longlong *)&param_1[0x12].field_0x8;
  iVar1 = *(int *)&param_1[0x12].field_0x10;
  pcVar6 = (char *)(lVar3 + 0x79);
  while( true ) {
    if (*(int *)&param_1[0x12].field_0x10 != iVar1) {
      `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pcVar6 + -0x79 == (char *)((longlong)iVar1 * 400 + lVar3)) break;
    if (param_1[0x11].field_0x22 == '\x01') {
      pUVar4 = FSoftComponentReference::GetComponent
                         ((FSoftComponentReference *)(pcVar6 + -0x49),(AActor *)param_1);
      if (pUVar4 != (UActorComponent *)0x0) {
        pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        iVar2 = (int)pUVar5->_padding_;
        if (((iVar2 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
             &pUVar5->_padding_)) && ((param_1[0x11].field_0x21 == '\x02' || (*pcVar6 != '\0')))) {
          pcVar6[0x18] = '\x01';
        }
      }
    }
    pcVar6 = pcVar6 + 400;
  }
  return;
}

// execTriggerComponent @ 14db092a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
AChaosCacheManager::execTriggerComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FProperty *pFVar3;
  UActorComponent *pUVar4;
  UActorComponent *pUVar5;
  UClass *pUVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  UActorComponent *local_res10;
  
  local_res10 = (UActorComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[0x12].field_0x10;
  lVar7 = *(longlong *)&param_1[0x12].field_0x8;
  lVar8 = (longlong)iVar1 * 400 + lVar7;
  do {
    if (*(int *)&param_1[0x12].field_0x10 != iVar1) {
      `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (lVar7 == lVar8) {
      return;
    }
    pUVar5 = FSoftComponentReference::GetComponent
                       ((FSoftComponentReference *)(lVar7 + 0x30),(AActor *)param_1);
    if (pUVar5 == (UActorComponent *)0x0) {
LAB_14db0937f:
      pUVar5 = (UActorComponent *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) goto LAB_14db0937f;
    }
    if ((pUVar5 == pUVar4) &&
       ((param_1[0x11].field_0x21 == '\x02' || (*(char *)(lVar7 + 0x79) != '\0')))) {
      if ((lVar7 != 0) && (param_1[0x11].field_0x22 == '\x01')) {
        *(undefined1 *)(lVar7 + 0x91) = 1;
      }
      return;
    }
    lVar7 = lVar7 + 400;
  } while( true );
}

// execTriggerComponentByCache @ 14db093d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
AChaosCacheManager::execTriggerComponentByCache(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  UActorComponent *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[0x12].field_0x10;
  plVar7 = *(longlong **)&param_1[0x12].field_0x8;
  plVar8 = plVar7 + (longlong)iVar1 * 0x32;
  while( true ) {
    if (*(int *)&param_1[0x12].field_0x10 != iVar1) {
      `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (plVar7 == plVar8) break;
    if ((*plVar7 == lVar4) &&
       (pUVar5 = FSoftComponentReference::GetComponent
                           ((FSoftComponentReference *)(plVar7 + 6),(AActor *)param_1),
       pUVar5 != (UActorComponent *)0x0)) {
      pUVar6 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if (((iVar2 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
           &pUVar6->_padding_)) &&
         ((param_1[0x11].field_0x21 == '\x02' || (*(char *)((longlong)plVar7 + 0x79) != '\0')))) {
        if (param_1[0x11].field_0x22 == '\x01') {
          *(undefined1 *)((longlong)plVar7 + 0x91) = 1;
        }
        return;
      }
    }
    plVar7 = plVar7 + 0x32;
  }
  return;
}

// operator() @ 150589fe0

bool __thiscall `AChaosCacheManager::HandlePostSolve'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_265275798884187359>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_265275798884187359>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058a020

bool __thiscall `AChaosCacheManager::HandlePreBuffer'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_265275798884187385>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_265275798884187385>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058a060

bool __thiscall `AChaosCacheManager::HandlePreSolve'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_265275798884187409>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_265275798884187409>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

