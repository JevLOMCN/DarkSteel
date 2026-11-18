// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 29

// StaticClass @ 14dc9a750

UClass * __cdecl UMovieGraphConditionGroup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroup",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroup.InnerSingleton,
               StaticRegisterNativesUMovieGraphConditionGroup,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphConditionGroup>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroup>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroup.InnerSingleton;
}

// UMovieGraphConditionGroup @ 14dcaf110

UMovieGraphConditionGroup * __thiscall
UMovieGraphConditionGroup::UMovieGraphConditionGroup
          (UMovieGraphConditionGroup *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroup__6B_;
  (this->Id).A = 0;
  (this->Id).B = 0;
  (this->Id).C = 0;
  (this->Id).D = 0;
  (this->Queries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Queries).ArrayNum = 0;
  (this->Queries).ArrayMax = 0;
  *(undefined8 *)&(this->QueryResult).MatchingActors.Elements = 0;
  *(undefined8 *)&(this->QueryResult).MatchingActors.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->QueryResult).MatchingActors.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->QueryResult).MatchingActors.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->QueryResult).MatchingActors.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->QueryResult).MatchingActors.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->QueryResult).MatchingActors.Elements.field_0x30 = 0xffffffff;
  (this->QueryResult).MatchingActors.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->QueryResult).MatchingActors.HashSize = 0;
  *(undefined8 *)&(this->QueryResult).MatchingComponents.Elements = 0;
  *(undefined8 *)&(this->QueryResult).MatchingComponents.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->QueryResult).MatchingComponents.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->QueryResult).MatchingComponents.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->QueryResult).MatchingComponents.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->QueryResult).MatchingComponents.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->QueryResult).MatchingComponents.Elements.field_0x30 = 0xffffffff;
  (this->QueryResult).MatchingComponents.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->QueryResult).MatchingComponents.HashSize = 0;
  *(undefined8 *)&(this->EvaluationResult).MatchingActors.Elements = 0;
  *(undefined8 *)&(this->EvaluationResult).MatchingActors.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EvaluationResult).MatchingActors.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EvaluationResult).MatchingActors.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EvaluationResult).MatchingActors.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EvaluationResult).MatchingActors.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->EvaluationResult).MatchingActors.Elements.field_0x30 = 0xffffffff;
  (this->EvaluationResult).MatchingActors.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EvaluationResult).MatchingActors.HashSize = 0;
  *(undefined8 *)&(this->EvaluationResult).MatchingComponents.Elements = 0;
  *(undefined8 *)&(this->EvaluationResult).MatchingComponents.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EvaluationResult).MatchingComponents.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EvaluationResult).MatchingComponents.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EvaluationResult).MatchingComponents.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EvaluationResult).MatchingComponents.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->EvaluationResult).MatchingComponents.Elements.field_0x30 = 0xffffffff;
  (this->EvaluationResult).MatchingComponents.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->EvaluationResult).MatchingComponents.HashSize = 0;
  return this;
}

// UMovieGraphConditionGroup @ 14dcaf250

UMovieGraphConditionGroup * __thiscall
UMovieGraphConditionGroup::UMovieGraphConditionGroup(UMovieGraphConditionGroup *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroup__6B_;
  (this->Id).A = 0;
  (this->Id).B = 0;
  (this->Id).C = 0;
  (this->Id).D = 0;
  (this->Queries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Queries).ArrayNum = 0;
  (this->Queries).ArrayMax = 0;
  *(undefined8 *)&(this->QueryResult).MatchingActors.Elements = 0;
  *(undefined8 *)&(this->QueryResult).MatchingActors.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->QueryResult).MatchingActors.Elements.field_0x20 = 0;
  this->OpType = Add;
  *(undefined4 *)&(this->QueryResult).MatchingActors.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->QueryResult).MatchingActors.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->QueryResult).MatchingActors.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QueryResult).MatchingActors.Elements.field_0x34 = 0;
  (this->QueryResult).MatchingActors.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->QueryResult).MatchingActors.HashSize = 0;
  *(undefined8 *)&(this->QueryResult).MatchingComponents.Elements = 0;
  *(undefined8 *)&(this->QueryResult).MatchingComponents.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->QueryResult).MatchingComponents.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->QueryResult).MatchingComponents.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->QueryResult).MatchingComponents.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->QueryResult).MatchingComponents.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QueryResult).MatchingComponents.Elements.field_0x34 = 0;
  (this->QueryResult).MatchingComponents.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->QueryResult).MatchingComponents.HashSize = 0;
  *(undefined8 *)&(this->EvaluationResult).MatchingActors.Elements = 0;
  *(undefined8 *)&(this->EvaluationResult).MatchingActors.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EvaluationResult).MatchingActors.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EvaluationResult).MatchingActors.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EvaluationResult).MatchingActors.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EvaluationResult).MatchingActors.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EvaluationResult).MatchingActors.Elements.field_0x34 = 0;
  (this->EvaluationResult).MatchingActors.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EvaluationResult).MatchingActors.HashSize = 0;
  *(undefined8 *)&(this->EvaluationResult).MatchingComponents.Elements = 0;
  *(undefined8 *)&(this->EvaluationResult).MatchingComponents.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EvaluationResult).MatchingComponents.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EvaluationResult).MatchingComponents.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EvaluationResult).MatchingComponents.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EvaluationResult).MatchingComponents.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EvaluationResult).MatchingComponents.Elements.field_0x34 = 0;
  (this->EvaluationResult).MatchingComponents.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->EvaluationResult).MatchingComponents.HashSize = 0;
  if ((this->_padding_ & 0x10) == 0) {
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    (this->Id).A = pFVar4->A;
    (this->Id).B = uVar1;
    (this->Id).C = uVar2;
    (this->Id).D = uVar3;
    return this;
  }
  (this->Id).A = 0;
  (this->Id).B = 0;
  (this->Id).C = 0;
  (this->Id).D = 0;
  return this;
}

// ~UMovieGraphConditionGroup @ 14dcb27d0

void __thiscall
UMovieGraphConditionGroup::~UMovieGraphConditionGroup(UMovieGraphConditionGroup *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroup__6B_;
  (this->EvaluationResult).MatchingComponents.HashSize = 0;
  FVar1 = (this->EvaluationResult).MatchingComponents.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->EvaluationResult).MatchingComponents.Elements);
  (this->EvaluationResult).MatchingActors.HashSize = 0;
  FVar1 = (this->EvaluationResult).MatchingActors.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EvaluationResult);
  (this->QueryResult).MatchingComponents.HashSize = 0;
  FVar1 = (this->QueryResult).MatchingComponents.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->QueryResult).MatchingComponents.Elements);
  (this->QueryResult).MatchingActors.HashSize = 0;
  FVar1 = (this->QueryResult).MatchingActors.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->QueryResult);
  pFVar2 = (this->Queries).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddQuery @ 14dcb9e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphConditionGroupQueryBase * __thiscall
UMovieGraphConditionGroup::AddQuery
          (UMovieGraphConditionGroup *this,TSubclassOf<UMovieGraphConditionGroupQueryBase> *param_1,
          int param_2)

{
  int *piVar1;
  TObjectPtr<UMovieGraphConditionGroupQueryBase>_u_0 *pTVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  TObjectPtr<UMovieGraphConditionGroupQueryBase>_u_0 TVar10;
  UMovieGraphConditionGroupQueryBase *pUVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  UClass *pUVar15;
  undefined1 auStack_128 [32];
  TObjectPtr<UMovieGraphConditionGroupQueryBase>_u_0 *local_108;
  TObjectPtr<UMovieGraphConditionGroupQueryBase>_u_0 *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  TObjectPtr<UMovieGraphConditionGroupQueryBase>_u_0 local_d8;
  FName local_d0;
  TObjectPtr<UMovieGraphConditionGroupQueryBase>_u_0 local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar9 = (param_1->Class).field0_0x0.DebugPtr;
  pUVar15 = (UClass *)0x0;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  if ((pUVar9 != (UClass *)0x0) &&
     (pUVar8 = UMovieGraphConditionGroupQueryBase::StaticClass(), pUVar8 != (UClass *)0x0)) {
    iVar7 = (int)pUVar8->_padding_;
    if (((int)pUVar9->_padding_ < iVar7) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar7 * 8) != &pUVar8->_padding_)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pUVar15 = (param_1->Class).field0_0x0.DebugPtr;
    }
  }
  FVar4 = local_d0;
  if (local_d0 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar9 = UMovieGraphConditionGroupQueryBase::StaticClass();
  CheckIsClassChildOf_Internal(pUVar9,pUVar15);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar15);
  FVar5 = local_d0;
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_d0.ComparisonIndex = FVar4.ComparisonIndex.Value;
  local_d0.Number = FVar4.Number;
  local_b8._16_4_ = local_d0.ComparisonIndex.Value;
  local_b8._20_4_ = local_d0.Number;
  local_b8._24_4_ = RF_Transactional;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_d0 = FVar5;
  local_b8._8_8_ = this;
  TVar10.DebugPtr =
       (UMovieGraphConditionGroupQueryBase *)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar12 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (param_2 < 0) {
    local_d8.DebugPtr = TVar10.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar10.DebugPtr != (UMovieGraphConditionGroupQueryBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar10.DebugPtr);
    }
    pTVar2 = (TObjectPtr<UMovieGraphConditionGroupQueryBase>_u_0 *)
             (this->Queries).AllocatorInstance.Data;
    if ((pTVar2 <= &local_d8) &&
       (lVar13 = (longlong)(this->Queries).ArrayMax, &local_d8 < pTVar2 + lVar13)) {
      local_f0 = (longlong)(this->Queries).ArrayNum;
      local_e8 = 8;
      local_108 = &local_d8;
      local_100 = pTVar2;
      local_f8 = lVar13;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pUVar11 = (UMovieGraphConditionGroupQueryBase *)(*pcVar3)();
        return pUVar11;
      }
    }
    iVar7 = (this->Queries).ArrayNum;
    piVar1 = &(this->Queries).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Queries).AllocatorInstance,piVar1);
    }
    (this->Queries).ArrayNum = iVar7 + 1;
    ((TObjectPtr<UMovieGraphConditionGroupQueryBase>_u_0 *)
    ((this->Queries).AllocatorInstance.Data + (longlong)iVar7 * 8))->DebugPtr =
         (UMovieGraphConditionGroupQueryBase *)local_d8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_d8.DebugPtr != (UMovieGraphConditionGroupQueryBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_d8.DebugPtr);
    }
  }
  else {
    iVar7 = (this->Queries).ArrayNum;
    if (param_2 < iVar7) {
      iVar7 = param_2;
    }
    iVar14 = 0;
    if (0 < iVar7) {
      iVar14 = iVar7;
    }
    local_c8[0].DebugPtr = TVar10.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar10.DebugPtr != (UMovieGraphConditionGroupQueryBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar10.DebugPtr);
    }
    TArray<TObjectPtr<UMovieGraphConditionGroupQueryBase>,TSizedDefaultAllocator<32>_>::Insert
              (&this->Queries,
               (TObjectPtr<UMovieGraphConditionGroupQueryBase> *)&local_c8[0].ObjectPtr,iVar14);
  }
  return (UMovieGraphConditionGroupQueryBase *)TVar10;
}

// DuplicateQuery @ 14dcc2ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMovieGraphConditionGroupQueryBase * __thiscall
UMovieGraphConditionGroup::DuplicateQuery(UMovieGraphConditionGroup *this,int param_1)

{
  TArray<TObjectPtr<UMovieGraphConditionGroupQueryBase>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UMovieGraphConditionGroupQueryBase *pUVar7;
  UClass *pUVar8;
  undefined1 auStackY_118 [32];
  UMovieGraphConditionGroupQueryBase *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  void *local_38;
  undefined4 local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pTVar1 = &this->Queries;
  if ((param_1 < 0) || ((this->Queries).ArrayNum <= param_1)) {
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    return (UMovieGraphConditionGroupQueryBase *)0x0;
  }
  local_c0 = 0;
  InitStaticDuplicateObjectParams
            ((FObjectDuplicationParameters *)local_b8,
             *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)param_1 * 8),(UObject *)this
             ,(FName)0x0,
             RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|RF_HasExternalPackage|
             RF_WillBeLoaded|RF_ImmutableDefaultObject|RF_NonPIEDuplicateTransient|
             RF_StrongRefOnFrame|RF_DuplicateTransient|RF_InheritableComponentTemplate|
             RF_LoadCompleted|RF_TextExportTransient|RF_WasLoaded|RF_DefaultSubObject|
             RF_BeingRegenerated|RF_FinishDestroyed|RF_BeginDestroyed|RF_NewerVersionExists|
             RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|
             RF_NeedInitialization|RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|
             RF_ArchetypeObject|RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone
             |RF_Public,(UClass *)0x0,Normal,
             PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|ClusterRoot|
             ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|AutoRTFMConstructionAborted|
             ReachabilityFlag2|ReachabilityFlag1|ReachabilityFlag0);
  pUVar7 = (UMovieGraphConditionGroupQueryBase *)
           StaticDuplicateObjectEx((FObjectDuplicationParameters *)local_b8);
  if (pUVar7 != (UMovieGraphConditionGroupQueryBase *)0x0) {
    pUVar8 = UMovieGraphConditionGroupQueryBase::StaticClass();
    iVar6 = (int)pUVar8->_padding_;
    if ((iVar6 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar8->_padding_)) {
      local_c8 = pUVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 < pFVar3 + (longlong)(this->Queries).ArrayMax * 8))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UMovieGraphConditionGroupQueryBase *)(*pcVar4)();
        return pUVar7;
      }
      iVar6 = (this->Queries).ArrayNum;
      piVar2 = &(this->Queries).ArrayMax;
      if (iVar6 == *piVar2) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->Queries).ArrayNum = iVar6 + 1;
      *(UMovieGraphConditionGroupQueryBase **)
       ((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_c8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_c8 != (UMovieGraphConditionGroupQueryBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_c8);
      }
      goto LAB_14dcc2c7d;
    }
  }
  pUVar7 = (UMovieGraphConditionGroupQueryBase *)0x0;
  if (2 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
LAB_14dcc2c7d:
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_b8 + 0x40));
  return pUVar7;
}

// Evaluate @ 14dcc3540

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

TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> * __thiscall
UMovieGraphConditionGroup::Evaluate
          (UMovieGraphConditionGroup *this,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *__return_storage_ptr__,
          UWorld *param_1)

{
  FMovieGraphEvaluationResult *pFVar1;
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *pTVar2;
  undefined1 auStack_d8 [32];
  FMovieGraphEvaluationResult local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar1 = EvaluateActorsAndComponents(this,&local_b8,param_1);
  pTVar2 = ObjectPtrDecay<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>,TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>_>
                     (&pFVar1->MatchingActors);
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::operator=
            (__return_storage_ptr__,pTVar2);
  local_b8.MatchingComponents.HashSize = 0;
  if (local_b8.MatchingComponents.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8.MatchingComponents.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_b8.MatchingComponents.Elements);
  local_b8.MatchingActors.HashSize = 0;
  if (local_b8.MatchingActors.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8.MatchingActors.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_b8);
  return __return_storage_ptr__;
}

// EvaluateActorsAndComponents @ 14dcc4a30

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

FMovieGraphEvaluationResult * __thiscall
UMovieGraphConditionGroup::EvaluateActorsAndComponents
          (UMovieGraphConditionGroup *this,FMovieGraphEvaluationResult *__return_storage_ptr__,
          UWorld *param_1)

{
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  UClass *pUVar9;
  FMovieGraphEvaluationResult *pFVar10;
  AActor *pAVar11;
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *pTVar12;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar13;
  FMovieGraphEvaluationResult *pFVar14;
  FString *pFVar15;
  wchar_t *pwVar16;
  ulonglong uVar17;
  UMovieGraphConditionGroup *pUVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStackY_298 [32];
  ForAnyElementType local_240;
  undefined8 local_238;
  AActor *local_230;
  UWorld *local_228;
  longlong local_220;
  UMovieGraphConditionGroup *local_218;
  UClass *local_210;
  longlong *local_208;
  FMovieGraphEvaluationResult *local_200;
  TActorIteratorBase<TActorIterator<AActor>_> local_1f8;
  FString local_198;
  FMovieGraphEvaluationResult local_188;
  FMovieGraphEvaluationResult local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  bVar22 = -1 < CpuChannel->Enabled;
  local_228 = param_1;
  local_218 = this;
  local_200 = __return_storage_ptr__;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3257,
               "UMovieGraphConditionGroup::EvaluateActorsAndComponents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphRenderLayerSubsystem.cpp"
               ,0xcb9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3257);
  }
  pFVar10 = &this->EvaluationResult;
  FMovieGraphEvaluationResult::Reset(pFVar10);
  local_240.Data = (FScriptContainerElement *)0x0;
  local_238 = 0;
  pUVar9 = Z_Construct_UClass_AActor_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar9 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
  }
  local_1f8.Flags = OnlyActiveLevels|SkipPendingKill;
  local_1f8.State.bIsSet = false;
  local_210 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  FActorIteratorState::FActorIteratorState
            (&local_1f8.State.TypedValue,param_1,(TSubclassOf<AActor>)&local_210);
  local_1f8.State.bIsSet = true;
  while( true ) {
    TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_1f8);
    if ((local_1f8.State.bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FMovieGraphEvaluationResult *)(*pcVar4)();
      return pFVar10;
    }
    if (local_1f8.State.TypedValue.ReachedEnd != false) {
      if (local_1f8.State.bIsSet != false) {
        UWorld::RemoveOnActorSpawnedHandler
                  (local_1f8.State.TypedValue.CurrentWorld,
                   local_1f8.State.TypedValue.ActorSpawnedDelegateHandle);
        if (local_1f8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
        }
        if (local_1f8.State.TypedValue.ActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.State.TypedValue.ActorArray.AllocatorInstance.Data);
        }
      }
      uVar17 = 0;
      pUVar18 = this;
      uVar21 = uVar17;
      if (0 < (this->Queries).ArrayNum) {
        do {
          uVar20 = (uint)uVar21;
          uVar8 = 0;
          if ((int)uVar20 < (pUVar18->Queries).ArrayNum) {
            uVar8 = ~uVar20 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FMovieGraphEvaluationResult *)(*pcVar4)();
            return pFVar10;
          }
          pFVar19 = (pUVar18->Queries).AllocatorInstance.Data + uVar17;
          lVar2 = *(longlong *)pFVar19;
          if ((lVar2 != 0) && (*(char *)(lVar2 + 0x29) != '\0')) {
            if ((uVar20 == 0) &&
               ((*(char *)(lVar2 + 0x28) != (char)uVar21 &&
                (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<7043781043005951187>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphRenderLayerSubsystem.cpp"
                                    ,0xcd3,
                                    "Query->GetOperationType() == EMovieGraphConditionGroupQueryOpType::Add"
                                   ), bVar5)))) {
              pcVar4 = (code *)swi(3);
              pFVar10 = (FMovieGraphEvaluationResult *)(*pcVar4)();
              return pFVar10;
            }
            pUVar18 = local_218;
            pFVar14 = &local_218->QueryResult;
            FMovieGraphEvaluationResult::Reset(pFVar14);
            cVar6 = (**(code **)(**(longlong **)pFVar19 + 0x2c8))();
            plVar3 = *(longlong **)pFVar19;
            local_220 = *plVar3;
            local_208 = plVar3;
            if (cVar6 == '\0') {
              pTVar12 = UE::Core::Private::Unsafe::
                        Decay<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>,TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>_>
                                  (&pFVar14->MatchingActors);
              (**(code **)(local_220 + 0x2b0))(plVar3,&local_240,local_228,pTVar12);
              UE::Core::Private::
              TMutableViewTraits<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>,TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>_>
              ::Close(pTVar12);
            }
            else {
              pTVar13 = UE::Core::Private::Unsafe::
                        Decay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                                  (&(pUVar18->QueryResult).MatchingComponents);
              pTVar12 = UE::Core::Private::Unsafe::
                        Decay<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>,TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>_>
                                  (&pFVar14->MatchingActors);
              (**(code **)(local_220 + 0x2b8))(local_208,&local_240,local_228,pTVar12);
              UE::Core::Private::
              TMutableViewTraits<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>,TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>_>
              ::Close(pTVar12);
              UE::Core::Private::
              TMutableViewTraits<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
              ::Close(pTVar13);
            }
            cVar6 = *(char *)(*(longlong *)pFVar19 + 0x28);
            if (cVar6 == '\0') {
              TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
              Append<FDefaultSetAllocator>(&pFVar10->MatchingActors,&pFVar14->MatchingActors);
              TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
              ::Append<FDefaultSetAllocator>
                        (&(this->EvaluationResult).MatchingComponents,
                         &(pUVar18->QueryResult).MatchingComponents);
            }
            else if (cVar6 == '\x01') {
              pFVar14 = FMovieGraphEvaluationResult::Difference(pFVar10,&local_e8,pFVar14);
              if (pFVar10 != pFVar14) {
                TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>
                ::
                Move<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>
                          (&pFVar10->MatchingActors,&pFVar14->MatchingActors);
              }
              pTVar1 = &(this->EvaluationResult).MatchingComponents;
              if (pTVar1 != &pFVar14->MatchingComponents) {
                TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                ::
                Move<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>
                          (pTVar1,&pFVar14->MatchingComponents);
              }
              local_e8.MatchingComponents.HashSize = 0;
              if (local_e8.MatchingComponents.Hash.SecondaryData !=
                  (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_e8.MatchingComponents.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_e8.MatchingComponents.Elements);
              local_e8.MatchingActors.HashSize = 0;
              if (local_e8.MatchingActors.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
              {
                FMemory::Free((void *)local_e8.MatchingActors.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)&local_e8);
            }
            else if (cVar6 == '\x02') {
              pFVar14 = FMovieGraphEvaluationResult::Intersect(pFVar10,&local_188,pFVar14);
              if (pFVar10 != pFVar14) {
                TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>
                ::
                Move<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>
                          (&pFVar10->MatchingActors,&pFVar14->MatchingActors);
              }
              pTVar1 = &(this->EvaluationResult).MatchingComponents;
              if (pTVar1 != &pFVar14->MatchingComponents) {
                TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                ::
                Move<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>
                          (pTVar1,&pFVar14->MatchingComponents);
              }
              local_188.MatchingComponents.HashSize = 0;
              if (local_188.MatchingComponents.Hash.SecondaryData !=
                  (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_188.MatchingComponents.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_188.MatchingComponents.Elements);
              local_188.MatchingActors.HashSize = 0;
              if (local_188.MatchingActors.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
              {
                FMemory::Free((void *)local_188.MatchingActors.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)&local_188);
            }
          }
          uVar17 = uVar17 + 8;
          __return_storage_ptr__ = local_200;
          pUVar18 = local_218;
          uVar21 = (ulonglong)(uVar20 + 1);
        } while ((int)(uVar20 + 1) < (local_218->Queries).ArrayNum);
      }
      *(undefined8 *)&(__return_storage_ptr__->MatchingActors).Elements = 0;
      *(undefined8 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x8 = 0;
      *(undefined8 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x20 = 0;
      *(undefined4 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x28 = 0;
      *(undefined4 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x2c = 0x80;
      *(undefined4 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x34 = 0;
      (__return_storage_ptr__->MatchingActors).Hash.SecondaryData =
           (ForElementType<FSetElementId>)0x0;
      (__return_storage_ptr__->MatchingActors).HashSize = 0;
      TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::operator=
                (&__return_storage_ptr__->MatchingActors,&pFVar10->MatchingActors);
      *(undefined8 *)&(__return_storage_ptr__->MatchingComponents).Elements = 0;
      *(undefined8 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x8 = 0;
      *(undefined8 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x20 = 0;
      *(undefined4 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x28 = 0;
      *(undefined4 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x2c = 0x80;
      *(undefined4 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x34 = 0;
      (__return_storage_ptr__->MatchingComponents).Hash.SecondaryData =
           (ForElementType<FSetElementId>)0x0;
      (__return_storage_ptr__->MatchingComponents).HashSize = 0;
      TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
      ::operator=(&__return_storage_ptr__->MatchingComponents,
                  &(this->EvaluationResult).MatchingComponents);
      if (local_240.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data);
      }
      if (bVar22) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return __return_storage_ptr__;
    }
    if ((local_1f8.State.bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FMovieGraphEvaluationResult *)(*pcVar4)();
      return pFVar10;
    }
    pAVar11 = FActorIteratorState::GetActorChecked(&local_1f8.State.TypedValue);
    if (pAVar11 == (AActor *)0x0) {
      pFVar15 = GetTypeName<AActor>(&local_198);
      if ((pFVar15->Data).ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar16);
    }
    local_230 = pAVar11;
    if (((local_240.Data <= (FScriptContainerElement *)&local_230) &&
        ((FScriptContainerElement *)&local_230 < local_240.Data + (longlong)local_238._4_4_ * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar7 = (int)local_238;
    if ((int)local_238 == local_238._4_4_) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_240,(int *)((longlong)&local_238 + 4));
    }
    local_238 = CONCAT44(local_238._4_4_,iVar7 + 1);
    *(AActor **)(local_240.Data + (longlong)iVar7 * 8) = local_230;
  }
  pcVar4 = (code *)swi(3);
  pFVar10 = (FMovieGraphEvaluationResult *)(*pcVar4)();
  return pFVar10;
}

// GetId @ 14dcce2b0

FGuid * __thiscall UMovieGraphConditionGroup::GetId(UMovieGraphConditionGroup *this)

{
  return &this->Id;
}

// GetOperationType @ 14dccf220

EMovieGraphConditionGroupOpType __thiscall
UMovieGraphConditionGroup::GetOperationType(UMovieGraphConditionGroup *this)

{
  return this->OpType;
}

// GetPrivateStaticClass @ 14dcd1a20

UClass * __cdecl UMovieGraphConditionGroup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroup",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroup.InnerSingleton,
               StaticRegisterNativesUMovieGraphConditionGroup,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphConditionGroup>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroup>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroup.InnerSingleton;
}

// GetQueries @ 14dcd35e0

TArray<UMovieGraphConditionGroupQueryBase_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphConditionGroup::GetQueries(UMovieGraphConditionGroup *this)

{
  return (TArray<UMovieGraphConditionGroupQueryBase_*,TSizedDefaultAllocator<32>_> *)&this->Queries;
}

// IsFirstConditionGroup @ 14dcd7250

bool __thiscall UMovieGraphConditionGroup::IsFirstConditionGroup(UMovieGraphConditionGroup *this)

{
  longlong *plVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  longlong *plVar5;
  undefined1 local_res10 [24];
  
  pUVar3 = UMovieGraphCollection::StaticClass();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if ((pUVar4 == (UObject *)0x0) &&
     (bVar2 = `UMovieGraphConditionGroup::IsFirstConditionGroup'::__l3::<lambda_1>::operator()
                        (local_res10), !bVar2)) {
    return false;
  }
  plVar1 = *(longlong **)&pUVar4[1].field_0x10;
  plVar5 = plVar1;
  while( true ) {
    if (plVar5 == plVar1 + *(int *)&pUVar4[1].field_0x18) {
      return false;
    }
    if ((UMovieGraphConditionGroup *)*plVar5 == this) break;
    plVar5 = plVar5 + 1;
  }
  return (int)((longlong)plVar5 - (longlong)plVar1 >> 3) == 0;
}

// MoveQueryToIndex @ 14dcd84f0

bool __thiscall
UMovieGraphConditionGroup::MoveQueryToIndex
          (UMovieGraphConditionGroup *this,UMovieGraphConditionGroupQueryBase *param_1,int param_2)

{
  TArray<TObjectPtr<UMovieGraphConditionGroupQueryBase>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UMovieGraphConditionGroupQueryBase *pUVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  UMovieGraphConditionGroupQueryBase *local_48;
  TObjectPtr<UMovieGraphConditionGroupQueryBase>_u_0 local_40;
  
  if (param_1 != (UMovieGraphConditionGroupQueryBase *)0x0) {
    this_00 = &this->Queries;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar1 = (this_00->AllocatorInstance).Data;
    for (pFVar7 = pFVar1; pFVar7 != pFVar1 + (longlong)(this->Queries).ArrayNum * 8;
        pFVar7 = pFVar7 + 8) {
      if (*(UMovieGraphConditionGroupQueryBase **)pFVar7 == param_1) {
        iVar6 = (int)((longlong)pFVar7 - (longlong)pFVar1 >> 3);
        if (iVar6 == -1) {
          return false;
        }
        iVar9 = param_2 + -1;
        if (param_2 <= iVar6) {
          iVar9 = param_2;
        }
        local_48 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        pFVar1 = (this_00->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)(this->Queries).ArrayMax * 8)
            ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar6 = (this->Queries).ArrayNum;
        if (iVar6 != 0) {
          iVar12 = 0;
          pFVar1 = (this_00->AllocatorInstance).Data;
          bVar3 = *(UMovieGraphConditionGroupQueryBase **)pFVar1 != local_48;
          lVar8 = 0;
          pUVar5 = local_48;
          iVar10 = 0;
          do {
            iVar11 = iVar10;
            do {
              lVar8 = lVar8 + 1;
              iVar11 = iVar11 + 1;
              if (iVar6 <= lVar8) break;
            } while (bVar3 == (*(UMovieGraphConditionGroupQueryBase **)(pFVar1 + lVar8 * 8) !=
                              pUVar5));
            if (bVar3 != false) {
              if (iVar12 != iVar10) {
                memmove(pFVar1 + (longlong)iVar12 * 8,pFVar1 + (longlong)iVar10 * 8,
                        (longlong)(iVar11 - iVar10) << 3);
                pUVar5 = local_48;
              }
              iVar12 = iVar12 + (iVar11 - iVar10);
            }
            bVar3 = (bool)(bVar3 ^ 1);
            iVar10 = iVar11;
          } while (lVar8 < iVar6);
          (this->Queries).ArrayNum = iVar12;
        }
        local_40.DebugPtr = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        TArray<TObjectPtr<UMovieGraphConditionGroupQueryBase>,TSizedDefaultAllocator<32>_>::Insert
                  (this_00,(TObjectPtr<UMovieGraphConditionGroupQueryBase> *)&local_40.ObjectPtr,
                   iVar9);
        param_1->OpType = Add;
        return true;
      }
    }
  }
  return false;
}

// RemoveQuery @ 14dcdf1f0

bool __thiscall
UMovieGraphConditionGroup::RemoveQuery
          (UMovieGraphConditionGroup *this,UMovieGraphConditionGroupQueryBase *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UMovieGraphConditionGroupQueryBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (this->Queries).AllocatorInstance.Data;
  iVar2 = (this->Queries).ArrayNum;
  pFVar9 = pFVar3;
  do {
    if (pFVar9 == pFVar3 + (longlong)iVar2 * 8) {
LAB_14dcdf242:
      bVar10 = false;
LAB_14dcdf245:
      iVar2 = (this->Queries).ArrayNum;
      if (iVar2 != 0) {
        if ((iVar2 < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pUVar4 = *(UObject **)(this->Queries).AllocatorInstance.Data;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        if (*(char *)(pUVar4 + 1) != '\0') {
          *(undefined1 *)(pUVar4 + 1) = 0;
          return bVar10;
        }
      }
      return bVar10;
    }
    if (*(UMovieGraphConditionGroupQueryBase **)pFVar9 == param_1) {
      iVar8 = (int)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
      if (iVar8 != -1) {
        memmove(pFVar3 + (longlong)iVar8 * 8,pFVar3 + (longlong)iVar8 * 8 + 8,
                (longlong)((iVar2 - iVar8) + -1) << 3);
        piVar1 = &(this->Queries).ArrayNum;
        *piVar1 = *piVar1 + -1;
        bVar10 = true;
        goto LAB_14dcdf245;
      }
      goto LAB_14dcdf242;
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// SetOperationType @ 14dce3080

void __thiscall
UMovieGraphConditionGroup::SetOperationType
          (UMovieGraphConditionGroup *this,EMovieGraphConditionGroupOpType param_1)

{
  longlong *plVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  longlong *plVar5;
  undefined1 local_res10 [8];
  
  if (param_1 == Add) {
    this->OpType = Add;
    return;
  }
  pUVar3 = UMovieGraphCollection::StaticClass();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if ((pUVar4 != (UObject *)0x0) ||
     (bVar2 = `UMovieGraphConditionGroup::SetOperationType'::__l6::<lambda_1>::operator()
                        (local_res10), bVar2)) {
    plVar1 = *(longlong **)&pUVar4[1].field_0x10;
    for (plVar5 = plVar1; plVar5 != plVar1 + *(int *)&pUVar4[1].field_0x18; plVar5 = plVar5 + 1) {
      if ((UMovieGraphConditionGroup *)*plVar5 == this) {
        if ((int)((longlong)plVar5 - (longlong)plVar1 >> 3) == 0) {
          return;
        }
        break;
      }
    }
    this->OpType = param_1;
  }
  return;
}

// StaticRegisterNativesUMovieGraphConditionGroup @ 14dce63b0

void __cdecl UMovieGraphConditionGroup::StaticRegisterNativesUMovieGraphConditionGroup(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphConditionGroup_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddQuery @ 14dcef120

void __cdecl UMovieGraphConditionGroup::execAddQuery(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphConditionGroupQueryBase *pUVar2;
  TObjectPtr<UClass>_u_0 *pTVar3;
  int local_res10 [2];
  TObjectPtr<UClass>_u_0 local_res18;
  
  local_res18.DebugPtr = (UClass *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  pTVar3 = &local_res18;
  if ((TObjectPtr<UClass>_u_0 *)param_2->MostRecentPropertyAddress != (TObjectPtr<UClass>_u_0 *)0x0)
  {
    pTVar3 = (TObjectPtr<UClass>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = AddQuery((UMovieGraphConditionGroup *)param_1,
                    (TSubclassOf<UMovieGraphConditionGroupQueryBase> *)&pTVar3->ObjectPtr,
                    local_res10[0]);
  *(UMovieGraphConditionGroupQueryBase **)param_3 = pUVar2;
  return;
}

// execDuplicateQuery @ 14dcef9d0

void __cdecl
UMovieGraphConditionGroup::execDuplicateQuery(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphConditionGroupQueryBase *pUVar2;
  int local_res10 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = DuplicateQuery((UMovieGraphConditionGroup *)param_1,local_res10[0]);
  *(UMovieGraphConditionGroupQueryBase **)param_3 = pUVar2;
  return;
}

// execEvaluate @ 14dcefc70

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

void __cdecl UMovieGraphConditionGroup::execEvaluate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FMovieGraphEvaluationResult *pFVar3;
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *pTVar4;
  undefined1 auStackY_168 [32];
  UWorld *local_138 [2];
  undefined1 local_128 [32];
  void *local_108;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  FMovieGraphEvaluationResult local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_138[0] = (UWorld *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_138);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = EvaluateActorsAndComponents((UMovieGraphConditionGroup *)param_1,&local_d8,local_138[0]);
  pTVar4 = ObjectPtrDecay<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>,TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>_>
                     (&pFVar3->MatchingActors);
  local_128._0_8_ = (FScriptContainerElement *)0x0;
  local_128._8_8_ = 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = (ForElementType<FSetElementId>)0x0;
  local_e0 = 0;
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::operator=
            ((TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *)local_128,pTVar4);
  local_d8.MatchingComponents.HashSize = 0;
  if (local_d8.MatchingComponents.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8.MatchingComponents.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d8.MatchingComponents.Elements);
  local_d8.MatchingActors.HashSize = 0;
  if (local_d8.MatchingActors.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8.MatchingActors.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_d8);
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::operator=
            (param_3,(TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *)local_128);
  local_e0 = 0;
  if (local_e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  iVar2 = SUB84(local_128._8_8_,4);
  local_128._8_8_ = local_128._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
  }
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_100 = 0;
  if (0x80 < local_fc) {
    local_fc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),0);
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  return;
}

// execEvaluateActorsAndComponents @ 14dcf0180

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

void __cdecl
UMovieGraphConditionGroup::execEvaluateActorsAndComponents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMovieGraphEvaluationResult *pFVar2;
  undefined1 auStack_f8 [32];
  UWorld *local_d8 [2];
  FMovieGraphEvaluationResult local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d8[0] = (UWorld *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = EvaluateActorsAndComponents((UMovieGraphConditionGroup *)param_1,&local_c8,local_d8[0]);
  if (param_3 != pFVar2) {
    TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
    Move<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>
              (param_3,&pFVar2->MatchingActors);
  }
  if ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
       *)((longlong)param_3 + 0x50) != &pFVar2->MatchingComponents) {
    TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>
              ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                *)((longlong)param_3 + 0x50),&pFVar2->MatchingComponents);
  }
  local_c8.MatchingComponents.HashSize = 0;
  if (local_c8.MatchingComponents.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8.MatchingComponents.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_c8.MatchingComponents.Elements);
  local_c8.MatchingActors.HashSize = 0;
  if (local_c8.MatchingActors.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8.MatchingActors.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_c8);
  return;
}

// execGetOperationType @ 14dcf1500

void __cdecl
UMovieGraphConditionGroup::execGetOperationType(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[1].field_0x10;
  return;
}

// execGetQueries @ 14dcf1840

void __cdecl
UMovieGraphConditionGroup::execGetQueries(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_3 != &param_1[1].field_0x18) {
    iVar1 = *(int *)&param_1[1].field_0x20;
    _Src = *(void **)&param_1[1].field_0x18;
    *(int *)((longlong)param_3 + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(int *)((longlong)param_3 + 0xc) = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,*(int *)((longlong)param_3 + 0xc),param_3,iVar1,
               (int *)((longlong)param_3 + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)param_3,_Src,(longlong)iVar1 << 3);
    }
  }
  return;
}

// execIsFirstConditionGroup @ 14dcf20d0

void __cdecl
UMovieGraphConditionGroup::execIsFirstConditionGroup(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  longlong *plVar6;
  undefined1 local_res10 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = UMovieGraphCollection::StaticClass();
  pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar4);
  if ((pUVar5 == (UObject *)0x0) &&
     (bVar2 = `UMovieGraphConditionGroup::IsFirstConditionGroup'::__l3::<lambda_1>::operator()
                        (local_res10), !bVar2)) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  plVar1 = *(longlong **)&pUVar5[1].field_0x10;
  plVar6 = plVar1;
  do {
    if (plVar6 == plVar1 + *(int *)&pUVar5[1].field_0x18) {
      iVar3 = -1;
LAB_14dcf2159:
      *(bool *)param_3 = iVar3 == 0;
      return;
    }
    if ((UObject *)*plVar6 == param_1) {
      iVar3 = (int)((longlong)plVar6 - (longlong)plVar1 >> 3);
      goto LAB_14dcf2159;
    }
    plVar6 = plVar6 + 1;
  } while( true );
}

// execMoveQueryToIndex @ 14dcf27f0

void __cdecl
UMovieGraphConditionGroup::execMoveQueryToIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  UMovieGraphConditionGroupQueryBase *pUVar5;
  bool bVar6;
  UMovieGraphConditionGroupQueryBase *pUVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  TArray<TObjectPtr<UMovieGraphConditionGroupQueryBase>,TSizedDefaultAllocator<32>_> *this;
  int iVar12;
  int local_res10 [2];
  undefined1 *local_res18;
  int local_res20;
  UMovieGraphConditionGroupQueryBase *local_58;
  UMovieGraphConditionGroupQueryBase *local_50;
  TArray<TObjectPtr<UMovieGraphConditionGroupQueryBase>,TSizedDefaultAllocator<32>_> *local_48;
  TObjectPtr<UMovieGraphConditionGroupQueryBase>_u_0 local_40;
  
  local_50 = (UMovieGraphConditionGroupQueryBase *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar5 = local_50;
  iVar1 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_50 != (UMovieGraphConditionGroupQueryBase *)0x0) {
    this = (TArray<TObjectPtr<UMovieGraphConditionGroupQueryBase>,TSizedDefaultAllocator<32>_> *)
           &param_1[1].field_0x18;
    local_48 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_50);
    }
    plVar3 = *(longlong **)this;
    for (plVar9 = plVar3; plVar9 != plVar3 + *(int *)&param_1[1].field_0x20; plVar9 = plVar9 + 1) {
      if ((UMovieGraphConditionGroupQueryBase *)*plVar9 == pUVar5) {
        iVar8 = (int)((longlong)plVar9 - (longlong)plVar3 >> 3);
        if (iVar8 != -1) {
          iVar12 = iVar1 + -1;
          if (iVar1 <= iVar8) {
            iVar12 = iVar1;
          }
          local_58 = pUVar5;
          local_res20 = iVar12;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar5);
          }
          if (((*(UMovieGraphConditionGroupQueryBase ***)this <= &local_58) &&
              (&local_58 <
               *(UMovieGraphConditionGroupQueryBase ***)this + *(int *)&param_1[1].field_0x24)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar1 = *(int *)&param_1[1].field_0x20;
          if (iVar1 != 0) {
            plVar3 = *(longlong **)this;
            iVar12 = 0;
            bVar6 = (UMovieGraphConditionGroupQueryBase *)*plVar3 != local_58;
            lVar10 = 0;
            pUVar7 = local_58;
            iVar8 = 0;
            do {
              iVar11 = iVar8;
              do {
                lVar10 = lVar10 + 1;
                iVar11 = iVar11 + 1;
                if (iVar1 <= lVar10) break;
              } while (bVar6 == ((UMovieGraphConditionGroupQueryBase *)plVar3[lVar10] != pUVar7));
              if (bVar6 != false) {
                if (iVar12 != iVar8) {
                  memmove(plVar3 + iVar12,plVar3 + iVar8,(longlong)(iVar11 - iVar8) << 3);
                  pUVar7 = local_58;
                }
                iVar12 = iVar12 + (iVar11 - iVar8);
              }
              bVar6 = (bool)(bVar6 ^ 1);
              iVar8 = iVar11;
            } while (lVar10 < iVar1);
            local_48->ArrayNum = iVar12;
            this = local_48;
            param_3 = local_res18;
            iVar12 = local_res20;
          }
          local_40.DebugPtr = pUVar5;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar5);
          }
          TArray<TObjectPtr<UMovieGraphConditionGroupQueryBase>,TSizedDefaultAllocator<32>_>::Insert
                    (this,(TObjectPtr<UMovieGraphConditionGroupQueryBase> *)&local_40.ObjectPtr,
                     iVar12);
          pUVar5->OpType = Add;
          *(undefined1 *)param_3 = 1;
          return;
        }
        break;
      }
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execRemoveQuery @ 14dcf2f00

void __cdecl
UMovieGraphConditionGroup::execRemoveQuery(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 uVar8;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  plVar2 = *(longlong **)&param_1[1].field_0x18;
  plVar7 = plVar2;
  do {
    if (plVar7 == plVar2 + *(int *)&param_1[1].field_0x20) {
LAB_14dcf2fb5:
      uVar8 = 0;
LAB_14dcf2fb8:
      if (*(int *)&param_1[1].field_0x20 != 0) {
        if ((*(int *)&param_1[1].field_0x20 < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar3 = (UObject *)**(undefined8 **)&param_1[1].field_0x18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        if (*(char *)(pUVar3 + 1) != '\0') {
          *(undefined1 *)(pUVar3 + 1) = 0;
        }
      }
      *(undefined1 *)param_3 = uVar8;
      return;
    }
    if ((UObject *)*plVar7 == pUVar3) {
      iVar6 = (int)((longlong)plVar7 - (longlong)plVar2 >> 3);
      if (iVar6 != -1) {
        memmove(plVar2 + iVar6,plVar2 + iVar6 + 1,
                (longlong)((*(int *)&param_1[1].field_0x20 - iVar6) + -1) << 3);
        *(int *)&param_1[1].field_0x20 = *(int *)&param_1[1].field_0x20 + -1;
        uVar8 = 1;
        goto LAB_14dcf2fb8;
      }
      goto LAB_14dcf2fb5;
    }
    plVar7 = plVar7 + 1;
  } while( true );
}

// execSetOperationType @ 14dcf3a50

void __cdecl
UMovieGraphConditionGroup::execSetOperationType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  char local_res10 [8];
  undefined1 local_res20 [8];
  
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  cVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == '\0') {
    param_1[1].field_0x10 = 0;
    return;
  }
  pUVar5 = UMovieGraphCollection::StaticClass();
  pUVar6 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar5);
  if ((pUVar6 != (UObject *)0x0) ||
     (bVar4 = `UMovieGraphConditionGroup::SetOperationType'::__l6::<lambda_1>::operator()
                        (local_res20), bVar4)) {
    plVar2 = *(longlong **)&pUVar6[1].field_0x10;
    for (plVar7 = plVar2; plVar7 != plVar2 + *(int *)&pUVar6[1].field_0x18; plVar7 = plVar7 + 1) {
      if ((UObject *)*plVar7 == param_1) {
        if ((int)((longlong)plVar7 - (longlong)plVar2 >> 3) == 0) {
          return;
        }
        break;
      }
    }
    param_1[1].field_0x10 = cVar3;
  }
  return;
}

// operator() @ 15058c8c0

bool __thiscall
`UMovieGraphConditionGroup::IsFirstConditionGroup'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7043781043005951299>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7043781043005951299>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058ca70

bool __thiscall
`UMovieGraphConditionGroup::SetOperationType'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7043781043005951140>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7043781043005951140>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

