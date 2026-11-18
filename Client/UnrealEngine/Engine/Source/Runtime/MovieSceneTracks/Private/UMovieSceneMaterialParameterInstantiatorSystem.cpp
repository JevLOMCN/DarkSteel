// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 1467cd1a0

UClass * __cdecl UMovieSceneMaterialParameterInstantiatorSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMaterialParameterInstantiatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneMaterialParameterInstantiatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneMaterialParameterInstantiatorSystem.
                InnerSingleton,StaticRegisterNativesUMovieSceneMaterialParameterInstantiatorSystem,
               0x360,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneMaterialParameterInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneMaterialParameterInstantiatorSystem>,
               local_res8,UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMaterialParameterInstantiatorSystem.InnerSingleton;
}

// UMovieSceneMaterialParameterInstantiatorSystem @ 146809ec0

UMovieSceneMaterialParameterInstantiatorSystem * __thiscall
UMovieSceneMaterialParameterInstantiatorSystem::UMovieSceneMaterialParameterInstantiatorSystem
          (UMovieSceneMaterialParameterInstantiatorSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneMaterialParameterInstantiatorSystem__6B_;
  UE::MovieScene::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
  ::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
            (&this->ScalarParameterTracker);
  UE::MovieScene::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
  ::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
            (&this->VectorParameterTracker);
  (this->ScalarParameterStorage).Object = (FPreAnimatedScalarMaterialParameterStorage *)0x0;
  (this->ScalarParameterStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VectorParameterStorage).Object = (FPreAnimatedVectorMaterialParameterStorage *)0x0;
  (this->VectorParameterStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DoubleBlenderSystem).field0_0x0.DebugPtr = (UMovieScenePiecewiseDoubleBlenderSystem *)0x0;
  return this;
}

// UMovieSceneMaterialParameterInstantiatorSystem @ 146809f30

UMovieSceneMaterialParameterInstantiatorSystem * __thiscall
UMovieSceneMaterialParameterInstantiatorSystem::UMovieSceneMaterialParameterInstantiatorSystem
          (UMovieSceneMaterialParameterInstantiatorSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FBuiltInComponentTypes *pFVar2;
  FMovieSceneTracksComponentTypes *pFVar3;
  UClass *local_res8;
  UClass *local_res18;
  
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneMaterialParameterInstantiatorSystem__6B_;
  UE::MovieScene::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
  ::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
            (&this->ScalarParameterTracker);
  UE::MovieScene::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
  ::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
            (&this->VectorParameterTracker);
  (this->ScalarParameterStorage).Object = (FPreAnimatedScalarMaterialParameterStorage *)0x0;
  (this->ScalarParameterStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VectorParameterStorage).Object = (FPreAnimatedVectorMaterialParameterStorage *)0x0;
  (this->VectorParameterStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DoubleBlenderSystem).field0_0x0.DebugPtr = (UMovieScenePiecewiseDoubleBlenderSystem *)0x0;
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar3 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  *(TComponentTypeID<UE::MovieScene::FObjectComponent> *)&this->_padding_ = pFVar3->BoundMaterial;
  if ((this->_padding_ & 0x10) != 0) {
    local_res8 = (UClass *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar3->BoundMaterial;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UClass *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar2->HierarchicalBlendTarget;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18 = Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = Z_Construct_UClass_UMovieSceneInitialValueSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18 = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  }
  return this;
}

// ~UMovieSceneMaterialParameterInstantiatorSystem @ 14680f790

void __thiscall
UMovieSceneMaterialParameterInstantiatorSystem::~UMovieSceneMaterialParameterInstantiatorSystem
          (UMovieSceneMaterialParameterInstantiatorSystem *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneMaterialParameterInstantiatorSystem__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VectorParameterStorage).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ScalarParameterStorage).SharedReferenceCount.ReferenceController);
  UE::MovieScene::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
  ::
  ~TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
            (&this->VectorParameterTracker);
  UE::MovieScene::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
  ::
  ~TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
            (&this->ScalarParameterTracker);
  UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this);
  return;
}

// GetPrivateStaticClass @ 146836120

UClass * __cdecl UMovieSceneMaterialParameterInstantiatorSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMaterialParameterInstantiatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneMaterialParameterInstantiatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneMaterialParameterInstantiatorSystem.
                InnerSingleton,StaticRegisterNativesUMovieSceneMaterialParameterInstantiatorSystem,
               0x360,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneMaterialParameterInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneMaterialParameterInstantiatorSystem>,
               local_res8,UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMaterialParameterInstantiatorSystem.InnerSingleton;
}

// OnLink @ 146842e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneMaterialParameterInstantiatorSystem::OnLink
          (UMovieSceneMaterialParameterInstantiatorSystem *this)

{
  TSharedPtr<UE::MovieScene::FPreAnimatedScalarMaterialParameterStorage,1> local_28;
  TSharedPtr<UE::MovieScene::FPreAnimatedVectorMaterialParameterStorage,1> local_18;
  
  UE::MovieScene::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
  ::Initialize(&this->ScalarParameterTracker,(UMovieSceneEntitySystem *)this);
  UE::MovieScene::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
  ::Initialize(&this->VectorParameterTracker,(UMovieSceneEntitySystem *)this);
  UE::MovieScene::FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedScalarMaterialParameterStorage>
            ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468),&local_28,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedScalarMaterialParameterStorage>)
             UE::MovieScene::FPreAnimatedScalarMaterialParameterStorage::StorageID);
  if (&this->ScalarParameterStorage != &local_28) {
    (this->ScalarParameterStorage).Object = local_28.Object;
    local_28.Object = (FPreAnimatedScalarMaterialParameterStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ScalarParameterStorage).SharedReferenceCount,&local_28.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  UE::MovieScene::FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedVectorMaterialParameterStorage>
            ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468),&local_18,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedVectorMaterialParameterStorage>)
             UE::MovieScene::FPreAnimatedVectorMaterialParameterStorage::StorageID);
  if (&this->VectorParameterStorage != &local_18) {
    (this->VectorParameterStorage).Object = local_18.Object;
    local_18.Object = (FPreAnimatedVectorMaterialParameterStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VectorParameterStorage).SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// OnRun @ 146846430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneMaterialParameterInstantiatorSystem::OnRun
          (UMovieSceneMaterialParameterInstantiatorSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  TComponentTypeID<FMaterialParameterInfo> TVar1;
  TComponentTypeID<UE::MovieScene::FObjectComponent> TVar2;
  TComponentTypeID<FName> TVar3;
  longlong lVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  EEntityThreadingModel EVar7;
  bool bVar8;
  int iVar9;
  FBuiltInComponentTypes *pFVar10;
  FMovieSceneTracksComponentTypes *pFVar11;
  FEntityAllocation *pFVar12;
  FEntityAllocation *pFVar13;
  FBuiltInComponentTypes *pFVar14;
  FScriptContainerElement *pFVar15;
  FEntityManager *this_00;
  undefined1 auStackY_908 [32];
  FComponentTypeID local_8c8;
  FComponentTypeID local_8c6;
  FComponentTypeID local_8c4;
  FComponentTypeID local_8c2;
  FComponentTypeID local_8c0;
  FComponentTypeID local_8be;
  FComponentTypeID local_8bc;
  ushort local_8ba;
  FComponentTypeID local_8b8;
  TComponentTypeID<FMovieSceneBlendChannelID> local_8b6;
  FComponentTypeID local_8b4 [2];
  undefined8 local_8b0;
  <lambda_2> local_8a8;
  FEntityAllocationIterator local_8a0;
  FEntityAllocationIteratorProxy local_888;
  FEntityAllocationProxy local_878;
  undefined8 local_868;
  undefined8 uStack_860;
  TStatIdData *local_858;
  byte bStack_850;
  undefined7 uStack_84f;
  undefined4 local_848;
  uint uStack_844;
  undefined8 local_838;
  TStatIdData *pTStack_830;
  byte local_828;
  undefined7 uStack_827;
  undefined4 uStack_820;
  uint uStack_81c;
  undefined8 local_810;
  TStatIdData *pTStack_808;
  byte local_800;
  undefined7 uStack_7ff;
  undefined4 uStack_7f8;
  uint uStack_7f4;
  undefined8 local_7e8;
  TStatIdData *pTStack_7e0;
  byte local_7d8;
  undefined7 uStack_7d7;
  undefined4 uStack_7d0;
  uint uStack_7cc;
  TOverlappingMaterialParameterHandler<UE::MovieScene::FVectorMixin> local_7c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_7b8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_7a8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_798;
  initializer_list<UE::MovieScene::FComponentTypeID> local_788;
  initializer_list<UE::MovieScene::FComponentTypeID> local_778;
  initializer_list<UE::MovieScene::FComponentTypeID> local_768;
  TOverlappingMaterialParameterHandler<UE::MovieScene::FScalarMixin> local_758;
  undefined2 local_748;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TStack_746;
  TComponentTypeID<UE::MovieScene::FObjectComponent> TStack_744;
  TComponentTypeID<FMaterialParameterInfo> TStack_742;
  undefined8 uStack_740;
  TStatIdData *pTStack_738;
  ulonglong uStack_730;
  undefined8 uStack_728;
  undefined2 local_720;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TStack_71e;
  TComponentTypeID<UE::MovieScene::FObjectComponent> TStack_71c;
  TComponentTypeID<FName> TStack_71a;
  undefined8 uStack_718;
  TStatIdData *pTStack_710;
  ulonglong uStack_708;
  undefined8 uStack_700;
  FEntityAllocationIterator local_6f8;
  FEntityAllocationWriteContext local_6e0;
  TComponentTypeID<FMaterialParameterInfo> local_6d8;
  undefined2 uStack_6d6;
  TComponentTypeID<FMaterialParameterInfo> TStack_6d4;
  undefined2 uStack_6d2;
  TComponentTypeID<FMaterialParameterInfo> TStack_6d0;
  undefined2 uStack_6ce;
  TComponentTypeID<FName> TStack_6cc;
  undefined2 uStack_6ca;
  TComponentTypeID<FName> local_6c8;
  undefined2 uStack_6c6;
  TComponentTypeID<FName> TStack_6c4;
  undefined2 uStack_6c2;
  TPreAnimatedStateTaskParams<UE::MovieScene::FObjectComponent,FMaterialParameterInfo> local_6b8;
  <lambda_1> local_628;
  <lambda_1> local_598;
  TComponentTypeID<UE::MovieScene::FObjectComponent> local_508;
  undefined6 uStack_506;
  undefined2 uStack_500;
  undefined6 uStack_4fe;
  undefined2 uStack_4f8;
  undefined6 uStack_4f6;
  undefined2 uStack_4f0;
  undefined6 uStack_4ee;
  undefined8 local_4e8;
  TStatIdData *pTStack_4e0;
  ulonglong local_4d8;
  undefined8 uStack_4d0;
  undefined1 local_4c8 [4];
  FComponentAccess FStack_4c4;
  FComponentAccess FStack_4c2;
  wchar_t *pwStack_4c0;
  TStatIdData *local_4b8;
  ulonglong uStack_4b0;
  undefined8 local_4a8;
  FEntityComponentFilter local_4a0;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined1 local_3a8 [4];
  FComponentAccess FStack_3a4;
  FComponentAccess FStack_3a2;
  wchar_t *pwStack_3a0;
  TStatIdData *local_398;
  ulonglong uStack_390;
  undefined8 local_388;
  FEntityComponentFilter local_380;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_298;
  undefined4 local_294;
  undefined1 local_288 [32];
  wchar_t *local_268;
  TStatIdData *pTStack_260;
  ulonglong local_258;
  undefined8 uStack_250;
  FEntityComponentFilter local_248;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  TStatIdData *local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  FEntityComponentFilter local_130;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_908;
  pFVar10 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_8b0 = pFVar10;
  pFVar11 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  if (UE::MovieScene::GMaterialParameterBlending != false) {
    local_6d8 = pFVar11->ScalarMaterialParameterInfo;
    TStack_6d4 = pFVar11->VectorMaterialParameterInfo;
    TStack_6d0 = pFVar11->ColorMaterialParameterInfo;
    TStack_6cc = pFVar11->ScalarParameterName;
    local_6c8 = pFVar11->VectorParameterName;
    TStack_6c4 = pFVar11->ColorParameterName;
    local_508 = pFVar11->BoundMaterial;
    local_8bc.Value = (pFVar10->Tags).NeedsLink.Value;
    uStack_6d6 = 0x7fff;
    uStack_6d2 = 0x7fff;
    uStack_6ce = 0x7fff;
    uStack_6ca = 0x7fff;
    uStack_506 = CONCAT24(TStack_6d4,CONCAT22(0x7fff,local_6d8));
    uStack_4fe = CONCAT24(TStack_6cc,CONCAT22(0x7fff,TStack_6d0));
    uStack_6c6 = 0x7fff;
    uStack_6c2 = 0x7fff;
    uStack_4f6 = CONCAT24(TStack_6c4,CONCAT22(0x7fff,local_6c8));
    uStack_500 = 0x7fff;
    uStack_4f8 = 0x7fff;
    local_288._2_6_ = uStack_506;
    local_288._0_2_ = local_508;
    local_288._10_6_ = uStack_4fe;
    local_288._8_2_ = 0x7fff;
    local_8ba = (pFVar11->Tags).BoundMaterialChanged.Value;
    uStack_4f0 = 0x7fff;
    local_288._18_6_ = uStack_4f6;
    local_288._16_2_ = 0x7fff;
    local_288._26_6_ = uStack_4ee;
    local_288._24_2_ = 0x7fff;
    local_838 = 0;
    pTStack_830 = &TStatId::TStatId_NAME_None;
    uStack_820 = 0x6ff;
    uStack_81c = uStack_81c & 0xffffff00;
    local_4d8 = CONCAT71(uStack_827,local_828) & 0xffffffffffffffe0;
    uStack_4d0._4_4_ = uStack_81c;
    uStack_4d0._0_4_ = AnyHiPriThreadHiPriTask;
    local_4e8 = 0;
    pTStack_4e0 = &TStatId::TStatId_NAME_None;
    local_268 = (wchar_t *)0x0;
    pTStack_260 = &TStatId::TStatId_NAME_None;
    local_248.AllMask.Bits.NumBits = 0;
    local_248.AllMask.Bits.MaxBits = 0x180;
    local_248.NoneMask.Bits.NumBits = 0;
    local_248.NoneMask.Bits.MaxBits = 0x180;
    local_248.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_248.ComplexMasks.ArrayNum = 0;
    local_248.ComplexMasks.ArrayMax = 0;
    local_198 = 0;
    local_194 = 0x180;
    local_160 = 0;
    local_15c = 0x180;
    local_8a8.__this = this;
    local_828 = local_828 & 0xe0;
    local_258 = local_4d8;
    uStack_250 = uStack_4d0;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_288,&local_248);
    UE::MovieScene::
    AddAccessorToFilter<FMaterialParameterInfo,FMaterialParameterInfo,FMaterialParameterInfo,FName,FName,FName>
              ((TReadOneOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FMaterialParameterInfo,FName,FName,FName>
                *)(local_288 + 2),&local_248);
    iVar9 = local_248.ComplexMasks.ArrayNum;
    if (local_248.ComplexMasks.ArrayNum == local_248.ComplexMasks.ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x43c,&local_248.ComplexMasks.AllocatorInstance,
                         &local_248.ComplexMasks.ArrayMax);
    }
    local_248.ComplexMasks.ArrayNum = iVar9 + 1;
    local_788._First = &local_8bc;
    pFVar15 = local_248.ComplexMasks.AllocatorInstance.Data + (longlong)iVar9 * 0x3c;
    local_788._Last = &local_8b8;
    *(int *)(pFVar15 + 0x30) = 0;
    *(int *)(pFVar15 + 0x34) = 0x180;
    pFVar15[0x38] = (FScriptContainerElement)0x2;
    UE::MovieScene::FComponentMask::SetAll((FComponentMask *)pFVar15,&local_788);
    local_8c8.Value = (pFVar10->Tags).NeedsUnlink.Value;
    local_778._First = &local_8c8;
    local_778._Last = &local_8c6;
    UE::MovieScene::FComponentMask::SetAll(&local_248.NoneMask,&local_778);
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FMaterialParameterInfo,FName,FName,FName>_>
    ::
    Iterate_PerAllocationImpl<_UMovieSceneMaterialParameterInstantiatorSystem::OnRun_::__l5::<lambda_2>_&>
              ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FMaterialParameterInfo,FName,FName,FName>_>
                *)local_288,(FEntityManager *)(this->_padding_ + 0x28),&local_248,&local_8a8);
    if (local_248.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.ComplexMasks.AllocatorInstance.Data);
    }
    local_8c4.Value = (pFVar10->Tags).NeedsUnlink.Value;
    local_768._First = &local_8c4;
    local_768._Last = &local_8c2;
    uStack_860 = 0;
    local_858 = &TStatId::TStatId_NAME_None;
    uStack_140 = CONCAT71(uStack_84f,bStack_850) & 0xffffffffffffffe0;
    local_848 = 0x6ff;
    local_158 = local_868;
    uStack_150 = 0;
    uStack_844 = uStack_844 & 0xffffff00;
    local_138 = CONCAT44(uStack_844,0x6ff);
    local_148 = &TStatId::TStatId_NAME_None;
    local_130.AllMask.Bits.NumBits = 0;
    local_130.AllMask.Bits.MaxBits = 0x180;
    local_130.NoneMask.Bits.NumBits = 0;
    local_130.NoneMask.Bits.MaxBits = 0x180;
    local_130.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.ComplexMasks.ArrayNum = 0;
    local_130.ComplexMasks.ArrayMax = 0;
    local_80 = 0;
    local_7c = 0x180;
    local_48 = 0;
    local_44 = 0x180;
    bStack_850 = bStack_850 & 0xe0;
    UE::MovieScene::FComponentMask::SetAll(&local_130.AllMask,&local_768);
    this_00 = (FEntityManager *)(this->_padding_ + 0x28);
    UE::MovieScene::FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_6e0,this_00)
    ;
    EVar7 = UE::MovieScene::FEntityManager::GetThreadingModel(this_00);
    UE::MovieScene::FEntityManager::Iterate(this_00,&local_888,&local_130);
    UE::MovieScene::FEntityAllocationIterator::FEntityAllocationIterator
              (&local_8a0,local_888.Manager,local_888.Filter);
    UE::MovieScene::FEntityAllocationIterator::FEntityAllocationIterator
              (&local_6f8,local_888.Manager);
    bVar8 = UE::MovieScene::FEntityAllocationIterator::operator!=(&local_8a0,&local_6f8);
    if (bVar8) {
      do {
        UE::MovieScene::FEntityAllocationIterator::operator*(&local_8a0,&local_878);
        pFVar12 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_878);
        if (EVar7 == NoThreading) {
          pFVar12->LockMode = LockFree;
          pFVar13 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_878);
          UE::MovieScene::
          TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
          ::VisitUnlinkedAllocationImpl
                    ((TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
                      *)&this->ScalarParameterTracker,pFVar13);
          UE::MovieScene::
          TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
          ::VisitUnlinkedAllocationImpl
                    ((TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
                      *)&this->VectorParameterTracker,pFVar13);
          if (pFVar12 != (FEntityAllocation *)0x0) {
            pFVar12->LockMode = Mutex;
          }
        }
        else {
          pFVar12 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_878);
          UE::MovieScene::
          TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
          ::VisitUnlinkedAllocationImpl
                    ((TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
                      *)&this->ScalarParameterTracker,pFVar12);
          UE::MovieScene::
          TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
          ::VisitUnlinkedAllocationImpl
                    ((TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
                      *)&this->VectorParameterTracker,pFVar12);
        }
        UE::MovieScene::FEntityAllocationIterator::operator++(&local_8a0);
        bVar8 = UE::MovieScene::FEntityAllocationIterator::operator!=(&local_8a0,&local_6f8);
        pFVar10 = local_8b0;
      } while (bVar8);
    }
    UE::MovieScene::FEntityAllocationIterator::~FEntityAllocationIterator(&local_6f8);
    UE::MovieScene::FEntityAllocationIterator::~FEntityAllocationIterator(&local_8a0);
    if (local_130.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.ComplexMasks.AllocatorInstance.Data);
    }
    local_758.Linker = (UMovieSceneEntitySystemLinker *)this->_padding_;
    local_758.System = this;
    UE::MovieScene::
    TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
    ::
    ProcessInvalidatedOutputs<UE::MovieScene::TOverlappingMaterialParameterHandler<UE::MovieScene::FScalarMixin>_&>
              ((TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
                *)&this->ScalarParameterTracker,local_758.Linker,&local_758);
    local_7c8.Linker = (UMovieSceneEntitySystemLinker *)this->_padding_;
    local_7c8.System = this;
    UE::MovieScene::
    TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
    ::
    ProcessInvalidatedOutputs<UE::MovieScene::TOverlappingMaterialParameterHandler<UE::MovieScene::FVectorMixin>_&>
              ((TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
                *)&this->VectorParameterTracker,local_7c8.Linker,&local_7c8);
    local_6b8.AdditionalFilter.AllMask.Bits.NumBits = 0;
    local_6b8.AdditionalFilter.AllMask.Bits.MaxBits = 0x180;
    local_6b8.AdditionalFilter.NoneMask.Bits.NumBits = 0;
    local_6b8.AdditionalFilter.NoneMask.Bits.MaxBits = 0x180;
    local_6b8.AdditionalFilter.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6b8.AdditionalFilter.ComplexMasks.ArrayNum = 0;
    local_6b8.AdditionalFilter.ComplexMasks.ArrayMax = 0;
    local_6b8.TrackingMode = CacheIfTracked;
    pFVar14 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_8c0.Value = (pFVar14->Tags).NeedsLink.Value;
    local_7b8._First = &local_8c0;
    local_7b8._Last = &local_8be;
    UE::MovieScene::FComponentMask::SetAll((FComponentMask *)&local_6b8,&local_7b8);
    bVar8 = (longlong)local_6b8.AdditionalFilter.ComplexMasks._8_8_ < 0;
    local_6b8.AdditionalFilter.AllMask.Bits.NumBits = 0;
    local_6b8.AdditionalFilter.NoneMask.Bits.NumBits = 0;
    local_6b8.AdditionalFilter.ComplexMasks._8_8_ =
         local_6b8.AdditionalFilter.ComplexMasks._8_8_ & 0xffffffff00000000;
    if (bVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x3c,4,0,&local_6b8.AdditionalFilter.ComplexMasks.AllocatorInstance,0,
                 &local_6b8.AdditionalFilter.ComplexMasks.ArrayMax);
    }
    local_8b8.Value = *(ushort *)&pFVar11->MPC;
    local_8b6 = pFVar10->BlendChannelOutput;
    local_7a8._First = &local_8b8;
    local_7a8._Last = local_8b4;
    UE::MovieScene::FComponentMask::SetAll(&local_6b8.AdditionalFilter.NoneMask,&local_7a8);
    local_8b0._0_4_ =
         CONCAT22((pFVar11->Tags).BoundMaterialChanged.Value,(pFVar10->Tags).NeedsLink.Value);
    iVar9 = local_6b8.AdditionalFilter.ComplexMasks.ArrayNum;
    if (local_6b8.AdditionalFilter.ComplexMasks.ArrayNum ==
        local_6b8.AdditionalFilter.ComplexMasks.ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x43c,&local_6b8.AdditionalFilter.ComplexMasks.AllocatorInstance,
                         &local_6b8.AdditionalFilter.ComplexMasks.ArrayMax);
    }
    local_6b8.AdditionalFilter.ComplexMasks.ArrayNum = iVar9 + 1;
    local_798._First = (FComponentTypeID *)&local_8b0;
    pFVar15 = local_6b8.AdditionalFilter.ComplexMasks.AllocatorInstance.Data +
              (longlong)iVar9 * 0x3c;
    local_798._Last = (FComponentTypeID *)((longlong)&local_8b0 + 4);
    *(int *)&pFVar15[0x30].field_0x0 = 0;
    *(int *)&pFVar15[0x34].field_0x0 = 0x180;
    pFVar15[0x38] = (FScriptContainerElement)0x2;
    UE::MovieScene::FComponentMask::SetAll((FComponentMask *)pFVar15,&local_798);
    if (((this->ScalarParameterStorage).Object == (FPreAnimatedScalarMaterialParameterStorage *)0x0)
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_628.__this =
         (TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionScalarTraits> *)
         (this->ScalarParameterStorage).Object;
    TVar1 = pFVar11->ScalarMaterialParameterInfo;
    TVar2 = pFVar11->BoundMaterial;
    lVar4 = this->_padding_;
    local_628.InParams.AdditionalFilter.AllMask.Bits.NumBits = 0;
    local_628.InParams.AdditionalFilter.AllMask.Bits.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              ((TBitArray<TFixedAllocator<12>_> *)&local_628.InParams,
               (TBitArray<TFixedAllocator<12>_> *)&local_6b8);
    local_628.InParams.AdditionalFilter.NoneMask.Bits.NumBits = 0;
    local_628.InParams.AdditionalFilter.NoneMask.Bits.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              (&local_628.InParams.AdditionalFilter.NoneMask.Bits,
               &local_6b8.AdditionalFilter.NoneMask.Bits);
    FVar6.Data = local_6b8.AdditionalFilter.ComplexMasks.AllocatorInstance.Data;
    local_628.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    iVar9 = local_6b8.AdditionalFilter.ComplexMasks.ArrayNum;
    local_628.InParams.AdditionalFilter.ComplexMasks.ArrayNum =
         local_6b8.AdditionalFilter.ComplexMasks.ArrayNum;
    if (local_6b8.AdditionalFilter.ComplexMasks.ArrayNum == 0) {
      local_628.InParams.AdditionalFilter.ComplexMasks.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x3c,4,local_6b8.AdditionalFilter.ComplexMasks.ArrayNum,0,
                 &local_628.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance,
                 local_6b8.AdditionalFilter.ComplexMasks.ArrayNum,
                 &local_628.InParams.AdditionalFilter.ComplexMasks.ArrayMax);
      ConstructItems<UE::MovieScene::FEntityComponentFilter::FComplexMask,UE::MovieScene::FEntityComponentFilter::FComplexMask,int>
                (local_628.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data,
                 (FComplexMask *)FVar6.Data,iVar9);
    }
    local_628.InParams.TrackingMode = local_6b8.TrackingMode;
    pFVar10 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pTStack_808 = &TStatId::TStatId_NAME_None;
    local_810 = 0;
    TStack_746 = pFVar10->RootInstanceHandle;
    uStack_740 = 0;
    pTStack_738 = &TStatId::TStatId_NAME_None;
    uStack_7f8 = 0x6ff;
    uStack_7f4 = uStack_7f4 & 0xffffff00;
    uStack_730 = CONCAT71(uStack_7ff,local_800) & 0xffffffffffffffe0;
    uStack_728._4_4_ = uStack_7f4;
    uStack_728._0_4_ = AnyHiPriThreadHiPriTask;
    local_4c8._2_2_ = TStack_746;
    local_4c8._0_2_ = local_748;
    unique0x10000bbc = TVar2;
    unique0x10000bbe = TVar1;
    local_4a0.AllMask.Bits.NumBits = 0;
    local_4a0.AllMask.Bits.MaxBits = 0;
    pwStack_4c0 = (wchar_t *)0x0;
    local_4b8 = &TStatId::TStatId_NAME_None;
    local_800 = local_800 & 0xe0;
    TStack_744 = TVar2;
    TStack_742 = TVar1;
    uStack_4b0 = uStack_730;
    local_4a8 = uStack_728;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              ((TBitArray<TFixedAllocator<12>_> *)&local_4a0,
               (TBitArray<TFixedAllocator<12>_> *)&local_6b8);
    local_4a0.NoneMask.Bits.NumBits = 0;
    local_4a0.NoneMask.Bits.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              (&local_4a0.NoneMask.Bits,&local_6b8.AdditionalFilter.NoneMask.Bits);
    FVar6.Data = local_6b8.AdditionalFilter.ComplexMasks.AllocatorInstance.Data;
    iVar9 = local_6b8.AdditionalFilter.ComplexMasks.ArrayNum;
    local_4a0.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4a0.ComplexMasks.ArrayNum = local_6b8.AdditionalFilter.ComplexMasks.ArrayNum;
    if (local_6b8.AdditionalFilter.ComplexMasks.ArrayNum == 0) {
      local_4a0.ComplexMasks.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x3c,4,local_6b8.AdditionalFilter.ComplexMasks.ArrayNum,0,
                 &local_4a0.ComplexMasks.AllocatorInstance,
                 local_6b8.AdditionalFilter.ComplexMasks.ArrayNum,&local_4a0.ComplexMasks.ArrayMax);
      ConstructItems<UE::MovieScene::FEntityComponentFilter::FComplexMask,UE::MovieScene::FEntityComponentFilter::FComplexMask,int>
                (local_4a0.ComplexMasks.AllocatorInstance.Data,(FComplexMask *)FVar6.Data,iVar9);
    }
    local_3f0 = 0;
    local_3ec = 0x180;
    local_3b8 = 0;
    local_3b4 = 0x180;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_4c8 + 2),&local_4a0);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_4c8 + 4),&local_4a0);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_4c8 + 6),&local_4a0);
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadAccess<FMaterialParameterInfo>_>
    ::
    Iterate_PerAllocationImpl<_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionScalarTraits>::BeginTrackingAndCachePreAnimatedValuesTask<UE::MovieScene::TPreAnimatedStateTaskParams<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>_::__l2::<lambda_1>_&>
              ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadAccess<FMaterialParameterInfo>_>
                *)local_4c8,(FEntityManager *)(lVar4 + 0x28),&local_4a0,&local_628);
    if (local_4a0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a0.ComplexMasks.AllocatorInstance.Data);
    }
    if (local_628.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_628.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data);
    }
    if (((this->ScalarParameterStorage).Object == (FPreAnimatedScalarMaterialParameterStorage *)0x0)
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_598.__this =
         (TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionScalarTraits> *)
         (this->ScalarParameterStorage).Object;
    TVar3 = pFVar11->ScalarParameterName;
    TVar2 = pFVar11->BoundMaterial;
    lVar4 = this->_padding_;
    local_598.InParams.AdditionalFilter.AllMask.Bits.NumBits = 0;
    local_598.InParams.AdditionalFilter.AllMask.Bits.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              ((TBitArray<TFixedAllocator<12>_> *)&local_598.InParams,
               (TBitArray<TFixedAllocator<12>_> *)&local_6b8);
    local_598.InParams.AdditionalFilter.NoneMask.Bits.NumBits = 0;
    local_598.InParams.AdditionalFilter.NoneMask.Bits.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              (&local_598.InParams.AdditionalFilter.NoneMask.Bits,
               &local_6b8.AdditionalFilter.NoneMask.Bits);
    FVar6.Data = local_6b8.AdditionalFilter.ComplexMasks.AllocatorInstance.Data;
    local_598.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    iVar9 = local_6b8.AdditionalFilter.ComplexMasks.ArrayNum;
    local_598.InParams.AdditionalFilter.ComplexMasks.ArrayNum =
         local_6b8.AdditionalFilter.ComplexMasks.ArrayNum;
    if (local_6b8.AdditionalFilter.ComplexMasks.ArrayNum == 0) {
      local_598.InParams.AdditionalFilter.ComplexMasks.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x3c,4,local_6b8.AdditionalFilter.ComplexMasks.ArrayNum,0,
                 &local_598.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance,
                 local_6b8.AdditionalFilter.ComplexMasks.ArrayNum,
                 &local_598.InParams.AdditionalFilter.ComplexMasks.ArrayMax);
      ConstructItems<UE::MovieScene::FEntityComponentFilter::FComplexMask,UE::MovieScene::FEntityComponentFilter::FComplexMask,int>
                (local_598.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data,
                 (FComplexMask *)FVar6.Data,iVar9);
    }
    local_598.InParams.TrackingMode = local_6b8.TrackingMode;
    pFVar10 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pTStack_7e0 = &TStatId::TStatId_NAME_None;
    local_7e8 = 0;
    TStack_71e = pFVar10->RootInstanceHandle;
    uStack_718 = 0;
    pTStack_710 = &TStatId::TStatId_NAME_None;
    uStack_7d0 = 0x6ff;
    uStack_7cc = uStack_7cc & 0xffffff00;
    uStack_708 = CONCAT71(uStack_7d7,local_7d8) & 0xffffffffffffffe0;
    uStack_700._4_4_ = uStack_7cc;
    uStack_700._0_4_ = AnyHiPriThreadHiPriTask;
    local_3a8._2_2_ = TStack_71e;
    local_3a8._0_2_ = local_720;
    unique0x10000bce = TVar2;
    unique0x10000bd0 = TVar3;
    local_380.AllMask.Bits.NumBits = 0;
    local_380.AllMask.Bits.MaxBits = 0;
    pwStack_3a0 = (wchar_t *)0x0;
    local_398 = &TStatId::TStatId_NAME_None;
    local_7d8 = local_7d8 & 0xe0;
    TStack_71c = TVar2;
    TStack_71a = TVar3;
    uStack_390 = uStack_708;
    local_388 = uStack_700;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              ((TBitArray<TFixedAllocator<12>_> *)&local_380,
               (TBitArray<TFixedAllocator<12>_> *)&local_6b8);
    local_380.NoneMask.Bits.NumBits = 0;
    local_380.NoneMask.Bits.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              (&local_380.NoneMask.Bits,&local_6b8.AdditionalFilter.NoneMask.Bits);
    FVar6.Data = local_6b8.AdditionalFilter.ComplexMasks.AllocatorInstance.Data;
    iVar9 = local_6b8.AdditionalFilter.ComplexMasks.ArrayNum;
    local_380.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_380.ComplexMasks.ArrayNum = local_6b8.AdditionalFilter.ComplexMasks.ArrayNum;
    if (local_6b8.AdditionalFilter.ComplexMasks.ArrayNum == 0) {
      local_380.ComplexMasks.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x3c,4,local_6b8.AdditionalFilter.ComplexMasks.ArrayNum,0,
                 &local_380.ComplexMasks.AllocatorInstance,
                 local_6b8.AdditionalFilter.ComplexMasks.ArrayNum,&local_380.ComplexMasks.ArrayMax);
      ConstructItems<UE::MovieScene::FEntityComponentFilter::FComplexMask,UE::MovieScene::FEntityComponentFilter::FComplexMask,int>
                (local_380.ComplexMasks.AllocatorInstance.Data,(FComplexMask *)FVar6.Data,iVar9);
    }
    local_2d0 = 0;
    local_2cc = 0x180;
    local_298 = 0;
    local_294 = 0x180;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_3a8 + 2),&local_380);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_3a8 + 4),&local_380);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_3a8 + 6),&local_380);
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadAccess<FName>_>
    ::
    Iterate_PerAllocationImpl<_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionScalarTraits>::BeginTrackingAndCachePreAnimatedValuesTask<UE::MovieScene::TPreAnimatedStateTaskParams<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,UE::MovieScene::FObjectComponent,FName>_::__l2::<lambda_1>_&>
              ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadAccess<FName>_>
                *)local_3a8,(FEntityManager *)(lVar4 + 0x28),&local_380,&local_598);
    if (local_380.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_380.ComplexMasks.AllocatorInstance.Data);
    }
    if (local_598.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data);
    }
    if (((this->VectorParameterStorage).Object == (FPreAnimatedVectorMaterialParameterStorage *)0x0)
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UE::MovieScene::
    TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionVectorTraits>::
    BeginTrackingAndCachePreAnimatedValuesTask<UE::MovieScene::TPreAnimatedStateTaskParams<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
              ((TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionVectorTraits> *
               )(this->VectorParameterStorage).Object,
               (UMovieSceneEntitySystemLinker *)this->_padding_,&local_6b8,pFVar11->BoundMaterial,
               pFVar11->VectorMaterialParameterInfo);
    if (((this->VectorParameterStorage).Object == (FPreAnimatedVectorMaterialParameterStorage *)0x0)
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UE::MovieScene::
    TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionVectorTraits>::
    BeginTrackingAndCachePreAnimatedValuesTask<UE::MovieScene::TPreAnimatedStateTaskParams<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
              ((TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionVectorTraits> *
               )(this->VectorParameterStorage).Object,
               (UMovieSceneEntitySystemLinker *)this->_padding_,&local_6b8,pFVar11->BoundMaterial,
               pFVar11->ColorMaterialParameterInfo);
    if (((this->VectorParameterStorage).Object == (FPreAnimatedVectorMaterialParameterStorage *)0x0)
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UE::MovieScene::
    TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionVectorTraits>::
    BeginTrackingAndCachePreAnimatedValuesTask<UE::MovieScene::TPreAnimatedStateTaskParams<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,UE::MovieScene::FObjectComponent,FName>
              ((TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionVectorTraits> *
               )(this->VectorParameterStorage).Object,
               (UMovieSceneEntitySystemLinker *)this->_padding_,&local_6b8,pFVar11->BoundMaterial,
               pFVar11->VectorParameterName);
    if (((this->VectorParameterStorage).Object == (FPreAnimatedVectorMaterialParameterStorage *)0x0)
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UE::MovieScene::
    TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionVectorTraits>::
    BeginTrackingAndCachePreAnimatedValuesTask<UE::MovieScene::TPreAnimatedStateTaskParams<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,UE::MovieScene::FObjectComponent,FName>
              ((TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionVectorTraits> *
               )(this->VectorParameterStorage).Object,
               (UMovieSceneEntitySystemLinker *)this->_padding_,&local_6b8,pFVar11->BoundMaterial,
               pFVar11->ColorParameterName);
    if ((FComplexMask *)local_6b8.AdditionalFilter.ComplexMasks.AllocatorInstance.Data !=
        (FComplexMask *)0x0) {
      FMemory::Free(local_6b8.AdditionalFilter.ComplexMasks.AllocatorInstance.Data);
    }
  }
  return;
}

// OnUnlink @ 146851a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneMaterialParameterInstantiatorSystem::OnUnlink
          (UMovieSceneMaterialParameterInstantiatorSystem *this)

{
  TOverlappingMaterialParameterHandler<UE::MovieScene::FScalarMixin> local_18;
  
  (this->DoubleBlenderSystem).field0_0x0.DebugPtr = (UMovieScenePiecewiseDoubleBlenderSystem *)0x0;
  local_18.Linker = (UMovieSceneEntitySystemLinker *)this->_padding_;
  local_18.System = this;
  UE::MovieScene::
  TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
  ::Destroy<UE::MovieScene::TOverlappingMaterialParameterHandler<UE::MovieScene::FScalarMixin>_>
            ((TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
              *)&this->ScalarParameterTracker,&local_18);
  local_18.Linker = (UMovieSceneEntitySystemLinker *)this->_padding_;
  local_18.System = this;
  UE::MovieScene::
  TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
  ::Destroy<UE::MovieScene::TOverlappingMaterialParameterHandler<UE::MovieScene::FVectorMixin>_>
            ((TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
              *)&this->VectorParameterTracker,
             (TOverlappingMaterialParameterHandler<UE::MovieScene::FVectorMixin> *)&local_18);
  return;
}

// StaticRegisterNativesUMovieSceneMaterialParameterInstantiatorSystem @ 14686cb30

void __cdecl
UMovieSceneMaterialParameterInstantiatorSystem::
StaticRegisterNativesUMovieSceneMaterialParameterInstantiatorSystem(void)

{
  return;
}

