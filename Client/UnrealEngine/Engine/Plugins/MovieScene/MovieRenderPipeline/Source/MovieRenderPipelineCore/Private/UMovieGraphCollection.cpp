// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 21

// StaticClass @ 14dc9b180

UClass * __cdecl UMovieGraphCollection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphCollection",
               &Z_Registration_Info_UClass_UMovieGraphCollection.InnerSingleton,
               StaticRegisterNativesUMovieGraphCollection,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphCollection>,
               InternalVTableHelperCtorCaller<UMovieGraphCollection>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphCollection.InnerSingleton;
}

// UMovieGraphCollection @ 14dcaf050

UMovieGraphCollection * __thiscall
UMovieGraphCollection::UMovieGraphCollection(UMovieGraphCollection *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphCollection__6B_;
  (this->CollectionName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollectionName).Data.ArrayNum = 0;
  (this->CollectionName).Data.ArrayMax = 0;
  (this->ConditionGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConditionGroups).ArrayNum = 0;
  (this->ConditionGroups).ArrayMax = 0;
  return this;
}

// ~UMovieGraphCollection @ 14dcb2740

void __thiscall UMovieGraphCollection::~UMovieGraphCollection(UMovieGraphCollection *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphCollection__6B_;
  pFVar1 = (this->ConditionGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollectionName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddConditionGroup @ 14dcb8d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphConditionGroup * __thiscall
UMovieGraphCollection::AddConditionGroup(UMovieGraphCollection *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UMovieGraphConditionGroup *pUVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  UMovieGraphConditionGroup **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  UMovieGraphConditionGroup *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_a0 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = UMovieGraphConditionGroup::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  pUVar7 = (UMovieGraphConditionGroup *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar8 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  local_a8 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UMovieGraphConditionGroup *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pFVar2 = (this->ConditionGroups).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_a8) &&
     (lVar9 = (longlong)(this->ConditionGroups).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar2 + lVar9 * 8)) {
    local_c0 = (longlong)(this->ConditionGroups).ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar2;
    local_c8 = lVar9;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UMovieGraphConditionGroup *)(*pcVar3)();
      return pUVar7;
    }
  }
  iVar5 = (this->ConditionGroups).ArrayNum;
  piVar1 = &(this->ConditionGroups).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ConditionGroups).AllocatorInstance,piVar1);
  }
  (this->ConditionGroups).ArrayNum = iVar5 + 1;
  *(UMovieGraphConditionGroup **)
   ((this->ConditionGroups).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_a8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a8 != (UMovieGraphConditionGroup *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8);
  }
  return pUVar7;
}

// Evaluate @ 14dcc3460

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
UMovieGraphCollection::Evaluate
          (UMovieGraphCollection *this,
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

// EvaluateActorsAndComponents @ 14dcc4480

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
UMovieGraphCollection::EvaluateActorsAndComponents
          (UMovieGraphCollection *this,FMovieGraphEvaluationResult *__return_storage_ptr__,
          UWorld *param_1)

{
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *this_00;
  char cVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  FMovieGraphEvaluationResult *pFVar7;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar8;
  TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator> *pTVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStackY_3a8 [32];
  undefined1 local_368 [32];
  void *local_348;
  undefined4 local_340;
  uint local_33c;
  undefined4 local_338;
  undefined4 local_334;
  ForElementType<FSetElementId> local_328;
  int local_320;
  undefined1 local_318 [32];
  void *local_2f8;
  undefined4 local_2f0;
  uint local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  ForElementType<FSetElementId> local_2d8;
  int local_2d0;
  FMovieGraphEvaluationResult local_2c8;
  TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator> local_228;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  local_1d8;
  FMovieGraphEvaluationResult local_188;
  FMovieGraphEvaluationResult local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3450,"UMovieGraphCollection::EvaluateActorsAndComponents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphRenderLayerSubsystem.cpp"
               ,0xd7a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3450);
  }
  uVar10 = 0;
  this_00 = &__return_storage_ptr__->MatchingComponents;
  *(undefined8 *)&(__return_storage_ptr__->MatchingActors).Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x34 = 0;
  (__return_storage_ptr__->MatchingActors).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (__return_storage_ptr__->MatchingActors).HashSize = 0;
  *(undefined8 *)&this_00->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x34 = 0;
  (__return_storage_ptr__->MatchingComponents).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (__return_storage_ptr__->MatchingComponents).HashSize = 0;
  uVar12 = uVar10;
  if (0 < (this->ConditionGroups).ArrayNum) {
    do {
      uVar11 = (uint)uVar12;
      uVar6 = 0;
      if ((int)uVar11 < (this->ConditionGroups).ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMovieGraphEvaluationResult *)(*pcVar3)();
        return pFVar7;
      }
      pFVar2 = (this->ConditionGroups).AllocatorInstance.Data;
      if (*(longlong *)(pFVar2 + uVar10) != 0) {
        if (((uVar11 == 0) && (*(char *)(*(longlong *)(pFVar2 + uVar10) + 0x38) != (char)uVar12)) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<7043781043005951369>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphRenderLayerSubsystem.cpp"
                               ,0xd89,
                               "ConditionGroup->GetOperationType() == EMovieGraphConditionGroupOpType::Add"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FMovieGraphEvaluationResult *)(*pcVar3)();
          return pFVar7;
        }
        UMovieGraphConditionGroup::EvaluateActorsAndComponents
                  (*(UMovieGraphConditionGroup **)(pFVar2 + uVar10),&local_2c8,param_1);
        cVar1 = *(char *)(*(longlong *)(pFVar2 + uVar10) + 0x38);
        if (cVar1 == '\0') {
          pTVar8 = TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                   ::Union(this_00,&local_1d8,&local_2c8.MatchingComponents);
          pTVar9 = TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>
                   ::Union(&__return_storage_ptr__->MatchingActors,&local_228,
                           &local_2c8.MatchingActors);
          local_33c = 0x80;
          local_368._0_8_ = (FScriptContainerElement *)0x0;
          local_368._8_8_ = 0;
          local_348 = (void *)0x0;
          local_340 = 0;
          local_334 = 0;
          local_328 = (ForElementType<FSetElementId>)0x0;
          local_320 = 0;
          local_338 = 0xffffffff;
          TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
          Move<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>
                    ((TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>
                      *)local_368,pTVar9);
          local_2ec = 0x80;
          local_318._0_8_ = (FScriptContainerElement *)0x0;
          local_318._8_8_ = 0;
          local_2f8 = (void *)0x0;
          local_2f0 = 0;
          local_2e4 = 0;
          local_2d8 = (ForElementType<FSetElementId>)0x0;
          local_2d0 = 0;
          local_2e8 = 0xffffffff;
          TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
          ::
          Move<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>
                    ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                      *)local_318,pTVar8);
          local_228.HashSize = 0;
          if (local_228.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_228.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_228.Elements);
          local_1d8.HashSize = 0;
          if (local_1d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_1d8.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_1d8.Elements);
          if (__return_storage_ptr__ != (FMovieGraphEvaluationResult *)local_368) {
            TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
            Move<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>
                      (&__return_storage_ptr__->MatchingActors,
                       (TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>
                        *)local_368);
          }
          if (this_00 !=
              (TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
               *)local_318) {
            TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
            ::
            Move<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>
                      (this_00,(TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                                *)local_318);
          }
          local_2d0 = 0;
          if (local_2d8 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_2d8);
          }
          iVar4 = SUB84(local_318._8_8_,4);
          local_318._8_8_ = local_318._8_8_ & 0xffffffff00000000;
          if (iVar4 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)local_318,0,(int *)(local_318 + 0xc));
          }
          local_2e8 = 0xffffffff;
          local_2e4 = 0;
          local_2f0 = 0;
          if (0x80 < local_2ec) {
            local_2ec = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_318 + 0x10),0);
          }
          if (local_2f8 != (void *)0x0) {
            FMemory::Free(local_2f8);
          }
          if ((FScriptContainerElement *)local_318._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_318._0_8_);
          }
          local_320 = 0;
          if (local_328 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_328);
          }
          iVar4 = SUB84(local_368._8_8_,4);
          local_368._8_8_ = local_368._8_8_ & 0xffffffff00000000;
          if (iVar4 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)local_368,0,(int *)(local_368 + 0xc));
          }
          local_338 = 0xffffffff;
          local_334 = 0;
          local_340 = 0;
          if (0x80 < local_33c) {
            local_33c = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_368 + 0x10),0);
          }
          if (local_348 != (void *)0x0) {
            FMemory::Free(local_348);
          }
          if ((FScriptContainerElement *)local_368._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_368._0_8_);
          }
        }
        else if (cVar1 == '\x01') {
          pFVar7 = FMovieGraphEvaluationResult::Difference
                             (__return_storage_ptr__,&local_e8,&local_2c8);
          if (__return_storage_ptr__ != pFVar7) {
            TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
            Move<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>
                      (&__return_storage_ptr__->MatchingActors,&pFVar7->MatchingActors);
          }
          if (this_00 != &pFVar7->MatchingComponents) {
            TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
            ::
            Move<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>
                      (this_00,&pFVar7->MatchingComponents);
          }
          local_e8.MatchingComponents.HashSize = 0;
          if (local_e8.MatchingComponents.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
          {
            FMemory::Free((void *)local_e8.MatchingComponents.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_e8.MatchingComponents.Elements);
          local_e8.MatchingActors.HashSize = 0;
          if (local_e8.MatchingActors.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_e8.MatchingActors.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&local_e8);
        }
        else if (cVar1 == '\x02') {
          pFVar7 = FMovieGraphEvaluationResult::Intersect
                             (__return_storage_ptr__,&local_188,&local_2c8);
          if (__return_storage_ptr__ != pFVar7) {
            TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
            Move<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>
                      (&__return_storage_ptr__->MatchingActors,&pFVar7->MatchingActors);
          }
          if (this_00 != &pFVar7->MatchingComponents) {
            TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
            ::
            Move<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>
                      (this_00,&pFVar7->MatchingComponents);
          }
          local_188.MatchingComponents.HashSize = 0;
          if (local_188.MatchingComponents.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
          {
            FMemory::Free((void *)local_188.MatchingComponents.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_188.MatchingComponents.Elements);
          local_188.MatchingActors.HashSize = 0;
          if (local_188.MatchingActors.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_188.MatchingActors.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&local_188);
        }
        local_2c8.MatchingComponents.HashSize = 0;
        if (local_2c8.MatchingComponents.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_2c8.MatchingComponents.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_2c8.MatchingComponents.Elements);
        local_2c8.MatchingActors.HashSize = 0;
        if (local_2c8.MatchingActors.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_2c8.MatchingActors.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&local_2c8);
      }
      uVar10 = uVar10 + 8;
      uVar12 = (ulonglong)(uVar11 + 1);
    } while ((int)(uVar11 + 1) < (this->ConditionGroups).ArrayNum);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// GetCollectionName @ 14dccbd30

FString * __thiscall UMovieGraphCollection::GetCollectionName(UMovieGraphCollection *this)

{
  return &this->CollectionName;
}

// GetConditionGroups @ 14dccbde0

TArray<UMovieGraphConditionGroup_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphCollection::GetConditionGroups(UMovieGraphCollection *this)

{
  return (TArray<UMovieGraphConditionGroup_*,TSizedDefaultAllocator<32>_> *)&this->ConditionGroups;
}

// GetPrivateStaticClass @ 14dcd18b0

UClass * __cdecl UMovieGraphCollection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphCollection",
               &Z_Registration_Info_UClass_UMovieGraphCollection.InnerSingleton,
               StaticRegisterNativesUMovieGraphCollection,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphCollection>,
               InternalVTableHelperCtorCaller<UMovieGraphCollection>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphCollection.InnerSingleton;
}

// MoveConditionGroupToIndex @ 14dcd8200

bool __thiscall
UMovieGraphCollection::MoveConditionGroupToIndex
          (UMovieGraphCollection *this,UMovieGraphConditionGroup *param_1,int param_2)

{
  TArray<TObjectPtr<UMovieGraphConditionGroup>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UMovieGraphConditionGroup *pUVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  UMovieGraphConditionGroup *local_48;
  UMovieGraphConditionGroup *local_40;
  
  if (param_1 != (UMovieGraphConditionGroup *)0x0) {
    pTVar1 = &this->ConditionGroups;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar9 = (pTVar1->AllocatorInstance).Data;
    for (pFVar8 = pFVar9; pFVar8 != pFVar9 + (longlong)(this->ConditionGroups).ArrayNum * 8;
        pFVar8 = pFVar8 + 8) {
      if (*(UMovieGraphConditionGroup **)pFVar8 == param_1) {
        iVar6 = (int)((longlong)pFVar8 - (longlong)pFVar9 >> 3);
        if (iVar6 == -1) {
          return false;
        }
        iVar11 = param_2 + -1;
        if (param_2 <= iVar6) {
          iVar11 = param_2;
        }
        local_48 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        pFVar9 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar9 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 <
             pFVar9 + (longlong)(this->ConditionGroups).ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar6 = (this->ConditionGroups).ArrayNum;
        if (iVar6 != 0) {
          iVar14 = 0;
          pFVar9 = (pTVar1->AllocatorInstance).Data;
          bVar4 = *(UMovieGraphConditionGroup **)pFVar9 != local_48;
          lVar10 = 0;
          pUVar7 = local_48;
          iVar12 = 0;
          do {
            iVar13 = iVar12;
            do {
              lVar10 = lVar10 + 1;
              iVar13 = iVar13 + 1;
              if (iVar6 <= lVar10) break;
            } while (bVar4 == (*(UMovieGraphConditionGroup **)(pFVar9 + lVar10 * 8) != pUVar7));
            if (bVar4 != false) {
              if (iVar14 != iVar12) {
                memmove(pFVar9 + (longlong)iVar14 * 8,pFVar9 + (longlong)iVar12 * 8,
                        (longlong)(iVar13 - iVar12) << 3);
                pUVar7 = local_48;
              }
              iVar14 = iVar14 + (iVar13 - iVar12);
            }
            bVar4 = (bool)(bVar4 ^ 1);
            iVar12 = iVar13;
          } while (lVar10 < iVar6);
          (this->ConditionGroups).ArrayNum = iVar14;
        }
        local_40 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        pFVar9 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar9 <= (FScriptContainerElement *)&local_40) &&
            ((FScriptContainerElement *)&local_40 <
             pFVar9 + (longlong)(this->ConditionGroups).ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar6 = (this->ConditionGroups).ArrayNum;
        piVar2 = &(this->ConditionGroups).ArrayMax;
        if (iVar6 == *piVar2) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar1->AllocatorInstance,piVar2);
        }
        pFVar9 = (pTVar1->AllocatorInstance).Data;
        (this->ConditionGroups).ArrayNum = iVar6 + 1;
        pFVar9 = pFVar9 + (longlong)iVar11 * 8;
        memmove(pFVar9 + 8,pFVar9,(longlong)(iVar6 - iVar11) << 3);
        *(UMovieGraphConditionGroup **)((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 8) =
             local_40;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_40 != (UMovieGraphConditionGroup *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_40);
        }
        param_1->OpType = Add;
        return true;
      }
    }
  }
  return false;
}

// RemoveConditionGroup @ 14dcdf040

bool __thiscall
UMovieGraphCollection::RemoveConditionGroup
          (UMovieGraphCollection *this,UMovieGraphConditionGroup *param_1)

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
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieGraphConditionGroup *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (this->ConditionGroups).AllocatorInstance.Data;
  iVar2 = (this->ConditionGroups).ArrayNum;
  pFVar9 = pFVar3;
  do {
    if (pFVar9 == pFVar3 + (longlong)iVar2 * 8) {
LAB_14dcdf092:
      bVar10 = false;
LAB_14dcdf095:
      iVar2 = (this->ConditionGroups).ArrayNum;
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
        pUVar4 = *(UObject **)(this->ConditionGroups).AllocatorInstance.Data;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        if (pUVar4[1].field_0x10 != '\0') {
          pUVar4[1].field_0x10 = 0;
          return bVar10;
        }
      }
      return bVar10;
    }
    if (*(UMovieGraphConditionGroup **)pFVar9 == param_1) {
      iVar8 = (int)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
      if (iVar8 != -1) {
        memmove(pFVar3 + (longlong)iVar8 * 8,pFVar3 + (longlong)iVar8 * 8 + 8,
                (longlong)((iVar2 - iVar8) + -1) << 3);
        piVar1 = &(this->ConditionGroups).ArrayNum;
        *piVar1 = *piVar1 + -1;
        bVar10 = true;
        goto LAB_14dcdf095;
      }
      goto LAB_14dcdf092;
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// SetCollectionName @ 14dce2f20

void __thiscall
UMovieGraphCollection::SetCollectionName(UMovieGraphCollection *this,FString *param_1)

{
  ::FString::operator=(&this->CollectionName,param_1);
  return;
}

// StaticRegisterNativesUMovieGraphCollection @ 14dce6330

void __cdecl UMovieGraphCollection::StaticRegisterNativesUMovieGraphCollection(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphCollection_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddConditionGroup @ 14dceed30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UMovieGraphCollection::execAddConditionGroup(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject **ppUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  undefined1 auStack_108 [32];
  UObject **local_e8;
  UObject **local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  UObject *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_b0 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = UMovieGraphConditionGroup::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar5);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_Transactional;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = param_1;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  local_b8 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  ppUVar1 = *(UObject ***)&param_1[1].field_0x10;
  if ((ppUVar1 <= &local_b8) && (&local_b8 < ppUVar1 + *(int *)&param_1[1].field_0x1c)) {
    local_d0 = (longlong)*(int *)&param_1[1].field_0x18;
    local_c8 = 8;
    local_e8 = &local_b8;
    local_e0 = ppUVar1;
    local_d8 = (longlong)*(int *)&param_1[1].field_0x1c;
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
  iVar4 = *(int *)&param_1[1].field_0x18;
  if (iVar4 == *(int *)&param_1[1].field_0x1c) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1[1].field_0x10,
                       (int *)&param_1[1].field_0x1c);
  }
  *(int *)&param_1[1].field_0x18 = iVar4 + 1;
  *(UObject **)(*(longlong *)&param_1[1].field_0x10 + (longlong)iVar4 * 8) = local_b8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_b8);
  }
  *(UObject **)param_3 = pUVar6;
  return;
}

// execEvaluate @ 14dcefaa0

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

void __cdecl UMovieGraphCollection::execEvaluate(UObject *param_1,FFrame *param_2,void *param_3)

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
  pFVar3 = EvaluateActorsAndComponents((UMovieGraphCollection *)param_1,&local_d8,local_138[0]);
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

// execEvaluateActorsAndComponents @ 14dcf0060

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
UMovieGraphCollection::execEvaluateActorsAndComponents
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
  pFVar2 = EvaluateActorsAndComponents((UMovieGraphCollection *)param_1,&local_c8,local_d8[0]);
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

// execGetCollectionName @ 14dcf07c0

void __cdecl
UMovieGraphCollection::execGetCollectionName(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::operator=(param_3,(FString *)(param_1 + 1));
  return;
}

// execGetConditionGroups @ 14dcf08e0

void __cdecl
UMovieGraphCollection::execGetConditionGroups(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_3 != &param_1[1].field_0x10) {
    iVar1 = *(int *)&param_1[1].field_0x18;
    _Src = *(void **)&param_1[1].field_0x10;
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

// execMoveConditionGroupToIndex @ 14dcf2460

void __cdecl
UMovieGraphCollection::execMoveConditionGroupToIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  int iVar7;
  longlong *plVar8;
  void *_Src;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int local_res10 [2];
  undefined1 *local_res18;
  int local_res20;
  UObject *local_58;
  UObject *local_50;
  UObject *local_48;
  UObject *local_40;
  
  local_48 = (UObject *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
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
  pUVar6 = local_48;
  iVar5 = local_res10[0];
  local_40 = local_48;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_48 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_48);
    }
    plVar2 = *(longlong **)&param_1[1].field_0x10;
    for (plVar8 = plVar2; plVar8 != plVar2 + *(int *)&param_1[1].field_0x18; plVar8 = plVar8 + 1) {
      if ((UObject *)*plVar8 == pUVar6) {
        iVar7 = (int)((longlong)plVar8 - (longlong)plVar2 >> 3);
        if (iVar7 != -1) {
          iVar11 = iVar5 + -1;
          if (iVar5 <= iVar7) {
            iVar11 = iVar5;
          }
          local_58 = pUVar6;
          local_res20 = iVar11;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          if (((*(UObject ***)&param_1[1].field_0x10 <= &local_58) &&
              (&local_58 < *(UObject ***)&param_1[1].field_0x10 + *(int *)&param_1[1].field_0x1c))
             && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = *(int *)&param_1[1].field_0x18;
          if (iVar5 != 0) {
            plVar2 = *(longlong **)&param_1[1].field_0x10;
            iVar11 = 0;
            bVar4 = (UObject *)*plVar2 != local_58;
            lVar9 = 0;
            pUVar6 = local_58;
            iVar7 = 0;
            do {
              iVar10 = iVar7;
              do {
                lVar9 = lVar9 + 1;
                iVar10 = iVar10 + 1;
                if (iVar5 <= lVar9) break;
              } while (bVar4 == ((UObject *)plVar2[lVar9] != pUVar6));
              if (bVar4 != false) {
                if (iVar11 != iVar7) {
                  memmove(plVar2 + iVar11,plVar2 + iVar7,(longlong)(iVar10 - iVar7) << 3);
                  pUVar6 = local_58;
                }
                iVar11 = iVar11 + (iVar10 - iVar7);
              }
              bVar4 = (bool)(bVar4 ^ 1);
              iVar7 = iVar10;
            } while (lVar9 < iVar5);
            *(int *)&param_1[1].field_0x18 = iVar11;
            pUVar6 = local_40;
            param_3 = local_res18;
            iVar11 = local_res20;
          }
          local_50 = pUVar6;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          if (((*(UObject ***)&param_1[1].field_0x10 <= &local_50) &&
              (&local_50 < *(UObject ***)&param_1[1].field_0x10 + *(int *)&param_1[1].field_0x1c))
             && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = *(int *)&param_1[1].field_0x18;
          if (iVar5 == *(int *)&param_1[1].field_0x1c) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)&param_1[1].field_0x10,
                               (int *)&param_1[1].field_0x1c);
          }
          *(int *)&param_1[1].field_0x18 = iVar5 + 1;
          _Src = (void *)(*(longlong *)&param_1[1].field_0x10 + (longlong)iVar11 * 8);
          memmove((void *)((longlong)_Src + 8),_Src,(longlong)(iVar5 - iVar11) << 3);
          *(UObject **)((longlong)iVar11 * 8 + *(longlong *)&param_1[1].field_0x10) = local_50;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_50 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_50);
          }
          pUVar6[1].field_0x10 = 0;
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

// execRemoveConditionGroup @ 14dcf2c20

void __cdecl
UMovieGraphCollection::execRemoveConditionGroup(UObject *param_1,FFrame *param_2,void *param_3)

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
  plVar2 = *(longlong **)&param_1[1].field_0x10;
  plVar7 = plVar2;
  do {
    if (plVar7 == plVar2 + *(int *)&param_1[1].field_0x18) {
LAB_14dcf2cd5:
      uVar8 = 0;
LAB_14dcf2cd8:
      if (*(int *)&param_1[1].field_0x18 != 0) {
        if ((*(int *)&param_1[1].field_0x18 < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar3 = (UObject *)**(undefined8 **)&param_1[1].field_0x10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        if (pUVar3[1].field_0x10 != '\0') {
          pUVar3[1].field_0x10 = 0;
        }
      }
      *(undefined1 *)param_3 = uVar8;
      return;
    }
    if ((UObject *)*plVar7 == pUVar3) {
      iVar6 = (int)((longlong)plVar7 - (longlong)plVar2 >> 3);
      if (iVar6 != -1) {
        memmove(plVar2 + iVar6,plVar2 + iVar6 + 1,
                (longlong)((*(int *)&param_1[1].field_0x18 - iVar6) + -1) << 3);
        *(int *)&param_1[1].field_0x18 = *(int *)&param_1[1].field_0x18 + -1;
        uVar8 = 1;
        goto LAB_14dcf2cd8;
      }
      goto LAB_14dcf2cd5;
    }
    plVar7 = plVar7 + 1;
  } while( true );
}

// execSetCollectionName @ 14dcf3410

void __cdecl
UMovieGraphCollection::execSetCollectionName(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  void *_Src;
  int iVar3;
  UObject *pUVar4;
  longlong lVar5;
  void *local_18;
  int local_10;
  
  local_18 = (void *)0x0;
  _local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&stack0xffffffffffffffe8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&stack0xffffffffffffffe8);
  }
  _Src = local_18;
  pUVar4 = param_1 + 1;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pUVar4 != (UObject *)&stack0xffffffffffffffe8) {
    iVar3 = local_10;
    lVar5 = (longlong)local_10;
    puVar1 = &param_1[1].field_0xc;
    *(int *)&param_1[1].field_0x8 = local_10;
    if ((local_10 == 0) && (*(int *)puVar1 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_10,*(int *)puVar1,(ForAnyElementType *)pUVar4,local_10,(int *)puVar1);
      if (iVar3 != 0) {
        memcpy(*(void **)pUVar4,_Src,lVar5 * 2);
      }
    }
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

