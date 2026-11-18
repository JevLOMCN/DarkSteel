// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 1467cd420

UClass * __cdecl UMovieSceneMaterialParameterCollectionSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneMaterialParameterCollectionSystem",
               &Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionSystem.
                InnerSingleton,StaticRegisterNativesUMovieSceneMaterialParameterCollectionSystem,
               0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneMaterialParameterCollectionSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneMaterialParameterCollectionSystem>,
               local_res8,UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionSystem.InnerSingleton;
}

// UMovieSceneMaterialParameterCollectionSystem @ 146809ba0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneMaterialParameterCollectionSystem * __thiscall
UMovieSceneMaterialParameterCollectionSystem::UMovieSceneMaterialParameterCollectionSystem
          (UMovieSceneMaterialParameterCollectionSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneMaterialParameterCollectionSystem__6B_;
  (this->ScalarParameterStorage).Object = (FPreAnimatedScalarMaterialParameterStorage *)0x0;
  (this->ScalarParameterStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VectorParameterStorage).Object = (FPreAnimatedVectorMaterialParameterStorage *)0x0;
  (this->VectorParameterStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GroupingKey).Index = -1;
  return this;
}

// UMovieSceneMaterialParameterCollectionSystem @ 146809be0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneMaterialParameterCollectionSystem * __thiscall
UMovieSceneMaterialParameterCollectionSystem::UMovieSceneMaterialParameterCollectionSystem
          (UMovieSceneMaterialParameterCollectionSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FBuiltInComponentTypes *pFVar2;
  FMovieSceneTracksComponentTypes *pFVar3;
  UObject *local_res8;
  UClass *local_res18;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneMaterialParameterCollectionSystem__6B_;
  (this->ScalarParameterStorage).Object = (FPreAnimatedScalarMaterialParameterStorage *)0x0;
  (this->ScalarParameterStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VectorParameterStorage).Object = (FPreAnimatedVectorMaterialParameterStorage *)0x0;
  (this->VectorParameterStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GroupingKey).Index = -1;
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar3 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  *(TComponentTypeID<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_> *)
   &this->_padding_ = pFVar3->MPC;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 4;
  if ((this->_padding_ & 0x10) != 0) {
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = (pFVar2->Tags).Root.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar3->BoundMaterial;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    local_res18 = Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    local_res18 = Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  }
  return this;
}

// ~UMovieSceneMaterialParameterCollectionSystem @ 14680f730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneMaterialParameterCollectionSystem::~UMovieSceneMaterialParameterCollectionSystem
          (UMovieSceneMaterialParameterCollectionSystem *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneMaterialParameterCollectionSystem__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VectorParameterStorage).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ScalarParameterStorage).SharedReferenceCount.ReferenceController);
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 146835fa0

UClass * __cdecl UMovieSceneMaterialParameterCollectionSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneMaterialParameterCollectionSystem",
               &Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionSystem.
                InnerSingleton,StaticRegisterNativesUMovieSceneMaterialParameterCollectionSystem,
               0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneMaterialParameterCollectionSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneMaterialParameterCollectionSystem>,
               local_res8,UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionSystem.InnerSingleton;
}

// OnLink @ 146842c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneMaterialParameterCollectionSystem::OnLink
          (UMovieSceneMaterialParameterCollectionSystem *this)

{
  TComponentTypeID<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_> TVar1;
  int iVar2;
  UMovieSceneEntityGroupingSystem *pUVar3;
  FBuiltInComponentTypes *pFVar4;
  FMovieSceneTracksComponentTypes *pFVar5;
  TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *this_00;
  undefined1 auStack_108 [32];
  FComponentTypeID local_e8;
  FComponentTypeID local_e6 [3];
  TComponentTypeID<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_> local_e0 [4];
  TSharedPtr<UE::MovieScene::FPreAnimatedScalarMaterialParameterStorage,1> local_d8;
  TSharedPtr<UE::MovieScene::FPreAnimatedVectorMaterialParameterStorage,1> local_c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_b8;
  FEntityComponentFilter local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  UE::MovieScene::FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedScalarMaterialParameterStorage>
            ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468),&local_d8,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedScalarMaterialParameterStorage>)
             UE::MovieScene::FPreAnimatedScalarMaterialParameterStorage::StorageID);
  if (&this->ScalarParameterStorage != &local_d8) {
    (this->ScalarParameterStorage).Object = local_d8.Object;
    local_d8.Object = (FPreAnimatedScalarMaterialParameterStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ScalarParameterStorage).SharedReferenceCount,&local_d8.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  UE::MovieScene::FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedVectorMaterialParameterStorage>
            ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468),&local_c8,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedVectorMaterialParameterStorage>)
             UE::MovieScene::FPreAnimatedVectorMaterialParameterStorage::StorageID);
  if (&this->VectorParameterStorage != &local_c8) {
    (this->VectorParameterStorage).Object = local_c8.Object;
    local_c8.Object = (FPreAnimatedVectorMaterialParameterStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VectorParameterStorage).SharedReferenceCount,&local_c8.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  pUVar3 = UMovieSceneEntitySystemLinker::LinkSystem<UMovieSceneEntityGroupingSystem>
                     ((UMovieSceneEntitySystemLinker *)this->_padding_);
  local_a8.AllMask.Bits.NumBits = 0;
  local_a8.AllMask.Bits.MaxBits = 0x180;
  local_a8.NoneMask.Bits.NumBits = 0;
  local_a8.NoneMask.Bits.MaxBits = 0x180;
  local_a8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ComplexMasks.ArrayNum = 0;
  local_a8.ComplexMasks.ArrayMax = 0;
  pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_e8.Value = (pFVar4->Tags).ImportedEntity.Value;
  local_b8._First = &local_e8;
  local_b8._Last = local_e6;
  UE::MovieScene::FComponentMask::SetAll(&local_a8.NoneMask,&local_b8);
  pFVar5 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  TVar1 = pFVar5->MPC;
  local_e0[0] = TVar1;
  iVar2 = TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
          ::Emplace<>(&pUVar3->GroupHandlers);
  this_00 = (TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *)
            (*(longlong *)&pUVar3->GroupHandlers + (longlong)iVar2 * 0x188);
  TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8>::
  Emplace<UE::MovieScene::TEntityGroupingHandler<UE::MovieScene::FMPCGroupingPolicy,TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>,UE::MovieScene::FMPCGroupingPolicy,UE::MovieScene::TComponentTypeID<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>_&>
            (this_00,(FMPCGroupingPolicy *)&local_e8,local_e0);
  UE::MovieScene::FEntityComponentFilter::operator=
            ((FEntityComponentFilter *)(this_00 + 1),&local_a8);
  local_b8._First = &local_e8;
  local_b8._Last = local_e6;
  local_e8.Value = (ushort)TVar1;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)(this_00 + 1),&local_b8);
  (this->GroupingKey).Index = iVar2;
  if (local_a8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// OnRun @ 1468457f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneMaterialParameterCollectionSystem::OnRun
          (UMovieSceneMaterialParameterCollectionSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  TComponentTypeID<FName> TVar1;
  TComponentTypeID<UE::MovieScene::FObjectComponent> TVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  FBuiltInComponentTypes *pFVar7;
  FMovieSceneTracksComponentTypes *pFVar8;
  FBuiltInComponentTypes *pFVar9;
  undefined1 auStackY_468 [32];
  FComponentTypeID local_428;
  FComponentTypeID local_426;
  FComponentTypeID local_424;
  FComponentTypeID local_422;
  FComponentTypeID local_420;
  FComponentTypeID local_41e;
  FComponentTypeID local_41c;
  FComponentTypeID local_41a [5];
  undefined8 local_410;
  TStatIdData *pTStack_408;
  byte local_400;
  undefined7 uStack_3ff;
  undefined4 uStack_3f8;
  uint uStack_3f4;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3b8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3a8;
  undefined2 local_398;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TStack_396;
  TComponentTypeID<UE::MovieScene::FObjectComponent> TStack_394;
  TComponentTypeID<FName> TStack_392;
  undefined8 uStack_390;
  TStatIdData *pTStack_388;
  ulonglong uStack_380;
  undefined8 uStack_378;
  FComponentTypeID local_370;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_36e;
  ushort local_36c;
  FComponentTypeID local_36a;
  IMovieSceneEntityMutation local_368;
  undefined8 local_360;
  FBuiltInComponentTypes *local_358;
  FMovieSceneTracksComponentTypes *local_350;
  undefined1 local_348 [32];
  void *local_328;
  undefined4 local_320;
  uint local_31c;
  undefined4 local_318;
  undefined4 local_314;
  void *local_308;
  undefined4 local_300;
  TPreAnimatedStateTaskParams<UE::MovieScene::FObjectComponent,FName> local_2f8;
  <lambda_1> local_268;
  undefined1 local_1d8 [4];
  FComponentAccess FStack_1d4;
  FComponentAccess FStack_1d2;
  wchar_t *pwStack_1d0;
  TStatIdData *local_1c8;
  ulonglong uStack_1c0;
  undefined8 local_1b8;
  FEntityComponentFilter local_1b0;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_c8;
  undefined4 local_c4;
  FEntityComponentFilter local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_468;
  pFVar7 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar8 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_b8.AllMask.Bits.MaxBits = 0x180;
  local_b8.AllMask.Bits.NumBits = 0;
  local_b8.NoneMask.Bits.NumBits = 0;
  local_b8.NoneMask.Bits.MaxBits = 0x180;
  local_b8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ComplexMasks.ArrayNum = 0;
  local_b8.ComplexMasks.ArrayMax = 0;
  local_370.Value = *(ushort *)&pFVar8->MPC;
  local_36c = (pFVar7->Tags).NeedsLink.Value;
  local_3e8._First = &local_370;
  local_36e = pFVar7->InstanceHandle;
  local_3e8._Last = &local_36a;
  UE::MovieScene::FComponentMask::SetAll(&local_b8.AllMask,&local_3e8);
  local_428.Value = (pFVar7->Tags).ImportedEntity.Value;
  local_3d8._First = &local_428;
  local_3d8._Last = &local_426;
  UE::MovieScene::FComponentMask::SetAll(&local_b8.NoneMask,&local_3d8);
  lVar3 = this->_padding_;
  local_368 = (IMovieSceneEntityMutation)
              &`UMovieSceneMaterialParameterCollectionSystem::OnRun'::`2'::FAddMPCMutation::
               _vftable_;
  if (*(longlong *)(lVar3 + 0x580) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_360 = *(undefined8 *)(lVar3 + 0x580);
  local_348._0_8_ = (FScriptContainerElement *)0x0;
  local_348._8_8_ = 0;
  local_328 = (void *)0x0;
  local_320 = 0;
  local_31c = 0x80;
  local_318 = 0xffffffff;
  local_314 = 0;
  local_308 = (void *)0x0;
  local_300 = 0;
  local_358 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_350 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  UE::MovieScene::FEntityManager::MutateAll
            ((FEntityManager *)(this->_padding_ + 0x28),&local_b8,&local_368,Mandatory);
  `UMovieSceneMaterialParameterCollectionSystem::OnRun'::__l2::FAddMPCMutation::Cleanup
            (&local_368,(UMovieSceneEntitySystemLinker *)this->_padding_);
  local_2f8.AdditionalFilter.AllMask.Bits.NumBits = 0;
  local_2f8.AdditionalFilter.AllMask.Bits.MaxBits = 0x180;
  local_2f8.AdditionalFilter.NoneMask.Bits.NumBits = 0;
  local_2f8.AdditionalFilter.NoneMask.Bits.MaxBits = 0x180;
  local_2f8.AdditionalFilter.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8.AdditionalFilter.ComplexMasks.ArrayNum = 0;
  local_2f8.AdditionalFilter.ComplexMasks.ArrayMax = 0;
  local_2f8.TrackingMode = CacheIfTracked;
  pFVar9 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_424.Value = (pFVar9->Tags).NeedsLink.Value;
  local_3c8._First = &local_424;
  local_3c8._Last = &local_422;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)&local_2f8,&local_3c8);
  local_420.Value = *(ushort *)&pFVar7->BlendChannelOutput;
  local_3b8._First = &local_420;
  local_3b8._Last = &local_41e;
  UE::MovieScene::FComponentMask::SetAll(&local_2f8.AdditionalFilter.NoneMask,&local_3b8);
  local_41c.Value = *(ushort *)&pFVar8->MPC;
  local_3a8._First = &local_41c;
  local_3a8._Last = local_41a;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)&local_2f8,&local_3a8);
  if ((this->ScalarParameterStorage).Object == (FPreAnimatedScalarMaterialParameterStorage *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_268.__this =
       (TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionScalarTraits> *)
       (this->ScalarParameterStorage).Object;
  TVar1 = pFVar8->ScalarParameterName;
  TVar2 = pFVar8->BoundMaterial;
  lVar3 = this->_padding_;
  local_268.InParams.AdditionalFilter.AllMask.Bits.NumBits = 0;
  local_268.InParams.AdditionalFilter.AllMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            ((TBitArray<TFixedAllocator<12>_> *)&local_268.InParams,
             (TBitArray<TFixedAllocator<12>_> *)&local_2f8);
  local_268.InParams.AdditionalFilter.NoneMask.Bits.NumBits = 0;
  local_268.InParams.AdditionalFilter.NoneMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&local_268.InParams.AdditionalFilter.NoneMask.Bits,
             &local_2f8.AdditionalFilter.NoneMask.Bits);
  iVar5 = local_2f8.AdditionalFilter.ComplexMasks.ArrayNum;
  local_268.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_268.InParams.AdditionalFilter.ComplexMasks.ArrayNum =
       local_2f8.AdditionalFilter.ComplexMasks.ArrayNum;
  if (local_2f8.AdditionalFilter.ComplexMasks.ArrayNum == 0) {
    local_268.InParams.AdditionalFilter.ComplexMasks.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x3c,4,local_2f8.AdditionalFilter.ComplexMasks.ArrayNum,0,
               &local_268.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance,
               local_2f8.AdditionalFilter.ComplexMasks.ArrayNum,
               &local_268.InParams.AdditionalFilter.ComplexMasks.ArrayMax);
    ConstructItems<UE::MovieScene::FEntityComponentFilter::FComplexMask,UE::MovieScene::FEntityComponentFilter::FComplexMask,int>
              (local_268.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data,
               (FComplexMask *)local_2f8.AdditionalFilter.ComplexMasks.AllocatorInstance.Data,iVar5)
    ;
  }
  local_268.InParams.TrackingMode = local_2f8.TrackingMode;
  pFVar7 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pTStack_408 = &TStatId::TStatId_NAME_None;
  local_410 = 0;
  TStack_396 = pFVar7->RootInstanceHandle;
  uStack_390 = 0;
  pTStack_388 = &TStatId::TStatId_NAME_None;
  uStack_3f8 = 0x6ff;
  uStack_3f4 = uStack_3f4 & 0xffffff00;
  uStack_380 = CONCAT71(uStack_3ff,local_400) & 0xffffffffffffffe0;
  uStack_378._4_4_ = uStack_3f4;
  uStack_378._0_4_ = AnyHiPriThreadHiPriTask;
  local_1d8._2_2_ = TStack_396;
  local_1d8._0_2_ = local_398;
  unique0x10000514 = TVar2;
  unique0x10000516 = TVar1;
  local_1b0.AllMask.Bits.NumBits = 0;
  local_1b0.AllMask.Bits.MaxBits = 0;
  pwStack_1d0 = (wchar_t *)0x0;
  local_1c8 = &TStatId::TStatId_NAME_None;
  local_400 = local_400 & 0xe0;
  TStack_394 = TVar2;
  TStack_392 = TVar1;
  uStack_1c0 = uStack_380;
  local_1b8 = uStack_378;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            ((TBitArray<TFixedAllocator<12>_> *)&local_1b0,
             (TBitArray<TFixedAllocator<12>_> *)&local_2f8);
  local_1b0.NoneMask.Bits.NumBits = 0;
  local_1b0.NoneMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&local_1b0.NoneMask.Bits,&local_2f8.AdditionalFilter.NoneMask.Bits);
  iVar5 = local_2f8.AdditionalFilter.ComplexMasks.ArrayNum;
  local_1b0.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.ComplexMasks.ArrayNum = local_2f8.AdditionalFilter.ComplexMasks.ArrayNum;
  if (local_2f8.AdditionalFilter.ComplexMasks.ArrayNum == 0) {
    local_1b0.ComplexMasks.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x3c,4,local_2f8.AdditionalFilter.ComplexMasks.ArrayNum,0,
               &local_1b0.ComplexMasks.AllocatorInstance,
               local_2f8.AdditionalFilter.ComplexMasks.ArrayNum,&local_1b0.ComplexMasks.ArrayMax);
    ConstructItems<UE::MovieScene::FEntityComponentFilter::FComplexMask,UE::MovieScene::FEntityComponentFilter::FComplexMask,int>
              (local_1b0.ComplexMasks.AllocatorInstance.Data,
               (FComplexMask *)local_2f8.AdditionalFilter.ComplexMasks.AllocatorInstance.Data,iVar5)
    ;
  }
  local_100 = 0;
  local_fc = 0x180;
  local_c8 = 0;
  local_c4 = 0x180;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_1d8 + 2),&local_1b0);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_1d8 + 4),&local_1b0);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_1d8 + 6),&local_1b0);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadAccess<FName>_>
  ::
  Iterate_PerAllocationImpl<_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionScalarTraits>::BeginTrackingAndCachePreAnimatedValuesTask<UE::MovieScene::TPreAnimatedStateTaskParams<UE::MovieScene::FObjectComponent,FName>,UE::MovieScene::FObjectComponent,FName>_::__l2::<lambda_1>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadAccess<FName>_>
              *)local_1d8,(FEntityManager *)(lVar3 + 0x28),&local_1b0,&local_268);
  if (local_1b0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.ComplexMasks.AllocatorInstance.Data);
  }
  if (local_268.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data);
  }
  if ((this->VectorParameterStorage).Object == (FPreAnimatedVectorMaterialParameterStorage *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionVectorTraits>
  ::
  BeginTrackingAndCachePreAnimatedValuesTask<UE::MovieScene::TPreAnimatedStateTaskParams<UE::MovieScene::FObjectComponent,FName>,UE::MovieScene::FObjectComponent,FName>
            ((TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionVectorTraits> *)
             (this->VectorParameterStorage).Object,(UMovieSceneEntitySystemLinker *)this->_padding_,
             &local_2f8,pFVar8->BoundMaterial,pFVar8->VectorParameterName);
  if ((this->VectorParameterStorage).Object == (FPreAnimatedVectorMaterialParameterStorage *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionVectorTraits>
  ::
  BeginTrackingAndCachePreAnimatedValuesTask<UE::MovieScene::TPreAnimatedStateTaskParams<UE::MovieScene::FObjectComponent,FName>,UE::MovieScene::FObjectComponent,FName>
            ((TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionVectorTraits> *)
             (this->VectorParameterStorage).Object,(UMovieSceneEntitySystemLinker *)this->_padding_,
             &local_2f8,pFVar8->BoundMaterial,pFVar8->ColorParameterName);
  if ((FComplexMask *)local_2f8.AdditionalFilter.ComplexMasks.AllocatorInstance.Data !=
      (FComplexMask *)0x0) {
    FMemory::Free(local_2f8.AdditionalFilter.ComplexMasks.AllocatorInstance.Data);
  }
  local_300 = 0;
  if (local_308 != (void *)0x0) {
    FMemory::Free(local_308);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_348,0,local_348._8_4_);
  iVar5 = SUB84(local_348._8_8_,4);
  local_348._8_8_ = local_348._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)local_348,0,(int *)(local_348 + 0xc));
  }
  local_318 = 0xffffffff;
  local_314 = 0;
  local_320 = 0;
  if (0x80 < local_31c) {
    local_31c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_348 + 0x10),0);
  }
  if (local_328 != (void *)0x0) {
    FMemory::Free(local_328);
  }
  if ((FScriptContainerElement *)local_348._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_348._0_8_);
  }
  local_368 = (IMovieSceneEntityMutation)&___7IMovieSceneEntityMutation_MovieScene_UE__6B_;
  if (local_b8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// OnUnlink @ 1468519a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneMaterialParameterCollectionSystem::OnUnlink
          (UMovieSceneMaterialParameterCollectionSystem *this)

{
  code *pcVar1;
  bool bVar2;
  UMovieSceneEntityGroupingSystem *this_00;
  
  this_00 = UMovieSceneEntitySystemLinker::FindSystem<UMovieSceneEntityGroupingSystem>
                      ((UMovieSceneEntitySystemLinker *)this->_padding_);
  if (this_00 == (UMovieSceneEntityGroupingSystem *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<805191597883916452>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneMaterialParameterCollectionSystem.cpp"
                       ,0xa4,"GroupingSystem");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    UMovieSceneEntityGroupingSystem::RemoveGrouping
              (this_00,(FEntityGroupingPolicyKey)(this->GroupingKey).Index);
  }
  (this->GroupingKey).Index = -1;
  return;
}

// StaticRegisterNativesUMovieSceneMaterialParameterCollectionSystem @ 14686cb10

void __cdecl
UMovieSceneMaterialParameterCollectionSystem::
StaticRegisterNativesUMovieSceneMaterialParameterCollectionSystem(void)

{
  return;
}

