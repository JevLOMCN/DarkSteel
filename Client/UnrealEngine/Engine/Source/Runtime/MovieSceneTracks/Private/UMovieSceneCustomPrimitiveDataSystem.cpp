// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 12

// StaticClass @ 1467214e0

UClass * __cdecl UMovieSceneCustomPrimitiveDataSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCustomPrimitiveDataSystem",
               &Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneCustomPrimitiveDataSystem,0x1e0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCustomPrimitiveDataSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneCustomPrimitiveDataSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataSystem.InnerSingleton;
}

// UMovieSceneCustomPrimitiveDataSystem @ 146763c00

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneCustomPrimitiveDataSystem * __thiscall
UMovieSceneCustomPrimitiveDataSystem::UMovieSceneCustomPrimitiveDataSystem
          (UMovieSceneCustomPrimitiveDataSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneCustomPrimitiveDataSystem__6B_;
  UE::MovieScene::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
  ::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
            (&this->ScalarParameterTracker);
  (this->GroupingKey).Index = -1;
  (this->ScalarParameterStorage).Object = (FPreAnimatedCustomPrimitiveDataEntryStorage *)0x0;
  (this->ScalarParameterStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DoubleBlenderSystem).field0_0x0.DebugPtr = (UMovieScenePiecewiseDoubleBlenderSystem *)0x0;
  return this;
}

// UMovieSceneCustomPrimitiveDataSystem @ 146763c60

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneCustomPrimitiveDataSystem * __thiscall
UMovieSceneCustomPrimitiveDataSystem::UMovieSceneCustomPrimitiveDataSystem
          (UMovieSceneCustomPrimitiveDataSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FBuiltInComponentTypes *pFVar2;
  FMovieSceneTracksComponentTypes *pFVar3;
  TComponentTypeID<double> *pTVar4;
  uint uVar5;
  UClass *local_res8;
  UClass *local_res18 [2];
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneCustomPrimitiveDataSystem__6B_;
  UE::MovieScene::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
  ::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
            (&this->ScalarParameterTracker);
  uVar5 = 0;
  (this->GroupingKey).Index = -1;
  (this->ScalarParameterStorage).Object = (FPreAnimatedCustomPrimitiveDataEntryStorage *)0x0;
  (this->ScalarParameterStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DoubleBlenderSystem).field0_0x0.DebugPtr = (UMovieScenePiecewiseDoubleBlenderSystem *)0x0;
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar3 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  *(ushort *)&this->_padding_ = (pFVar3->Tags).CustomPrimitiveData.Value;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0xc;
  if ((this->_padding_ & 0x10) != 0) {
    local_res8 = (UClass *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar2->BoundObject;
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
    local_res18[0] = UFloatChannelEvaluatorSystem::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18[0] = UDoubleChannelEvaluatorSystem::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    pTVar4 = pFVar2->DoubleResult;
    do {
      local_res8 = (UClass *)this->_padding_;
      FVar1.Value = *(ushort *)pTVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentConsumer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
      uVar5 = uVar5 + 1;
      pTVar4 = pTVar4 + 1;
    } while (uVar5 < 9);
    local_res8 = (UClass *)this->_padding_;
    FVar1.Value = (pFVar3->Tags).CustomPrimitiveData.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18[0] = Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_NoRegister()
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18[0] = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = Z_Construct_UClass_UMovieSceneInitialValueSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18[0] = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  }
  return this;
}

// ~UMovieSceneCustomPrimitiveDataSystem @ 14676a360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneCustomPrimitiveDataSystem::~UMovieSceneCustomPrimitiveDataSystem
          (UMovieSceneCustomPrimitiveDataSystem *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneCustomPrimitiveDataSystem__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ScalarParameterStorage).SharedReferenceCount.ReferenceController);
  UE::MovieScene::
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
  ::
  ~TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
            (&this->ScalarParameterTracker);
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 1467986e0

UClass * __cdecl UMovieSceneCustomPrimitiveDataSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCustomPrimitiveDataSystem",
               &Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneCustomPrimitiveDataSystem,0x1e0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCustomPrimitiveDataSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneCustomPrimitiveDataSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataSystem.InnerSingleton;
}

// OnEvaluation @ 1467a8790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneCustomPrimitiveDataSystem::OnEvaluation
          (UMovieSceneCustomPrimitiveDataSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  FComponentTypeID *pFVar1;
  int iVar2;
  TComponentTypeID<FName> TVar3;
  undefined8 uVar4;
  FBuiltInComponentTypes *pFVar5;
  FMovieSceneTracksComponentTypes *pFVar6;
  FComponentMask *pFVar7;
  byte bVar8;
  undefined1 auStack_208 [32];
  FSystemSubsequentTasks *local_1e8;
  FComponentTypeID local_1d8;
  FComponentTypeID local_1d6;
  FComponentTypeID local_1d4;
  FComponentTypeID aFStack_1d2 [5];
  undefined1 local_1c8 [24];
  undefined8 local_1b0;
  TStatIdData *pTStack_1a8;
  byte local_1a0;
  undefined7 uStack_19f;
  undefined4 uStack_198;
  uint uStack_194;
  TComponentTypeID<UObject_*> local_190;
  TComponentTypeID<FName> TStack_18e;
  TComponentTypeID<double> TStack_18c;
  undefined2 uStack_18a;
  uchar auStack_188 [8];
  TStatIdData *pTStack_180;
  ForElementType<unsigned_int> FStack_178;
  int iStack_170;
  uint uStack_16c;
  undefined1 local_168 [4];
  FComponentAccess aFStack_164 [2];
  undefined8 uStack_160;
  TStatIdData *local_158;
  ForElementType<unsigned_int> FStack_150;
  int local_148;
  uint uStack_144;
  FEntityComponentFilter local_140;
  int local_90;
  int local_8c;
  int local_58;
  int local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar6 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  TVar3 = pFVar6->ScalarParameterName;
  pFVar7 = UE::MovieScene::FEntityManager::GetAccumulatedMask
                     ((FEntityManager *)(this->_padding_ + 0x28));
  if (((TVar3 != (TComponentTypeID<FName>)0xffff) &&
      ((int)(uint)(ushort)TVar3 < (pFVar7->Bits).NumBits)) &&
     ((*(uint *)(pFVar7->Bits).AllocatorInstance.InlineData[(ushort)TVar3 >> 5].Pad >>
       ((ushort)TVar3 & 0x1f) & 1) != 0)) {
    pTStack_1a8 = &TStatId::TStatId_NAME_None;
    local_190 = pFVar5->BoundObject;
    TStack_18e = pFVar6->ScalarParameterName;
    TStack_18c = pFVar5->DoubleResult[0];
    local_1b0 = 0;
    uStack_194 = uStack_194 & 0xffffff00;
    local_1d8.Value = (pFVar6->Tags).CustomPrimitiveData.Value;
    auStack_188[0] = '\0';
    auStack_188[1] = '\0';
    auStack_188[2] = '\0';
    auStack_188[3] = '\0';
    auStack_188[4] = '\0';
    auStack_188[5] = '\0';
    auStack_188[6] = '\0';
    auStack_188[7] = '\0';
    pTStack_180 = &TStatId::TStatId_NAME_None;
    local_140.AllMask.Bits.NumBits = 0;
    local_168._2_2_ = TStack_18e;
    local_168._0_2_ = local_190;
    unique0x1000026f = TStack_18c;
    unique0x10000271 = uStack_18a;
    local_140.NoneMask.Bits.NumBits = 0;
    local_140.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.ComplexMasks.ArrayNum = 0;
    local_140.ComplexMasks.ArrayMax = 0;
    local_90 = 0;
    local_58 = 0;
    uStack_198 = 0x6ff;
    FStack_178 = (ForElementType<unsigned_int>)(CONCAT71(uStack_19f,local_1a0) & 0xffffffffffffffe0)
    ;
    local_148 = 0x6ff;
    uStack_144 = uStack_194;
    uStack_160 = 0;
    local_140.AllMask.Bits.MaxBits = 0x180;
    local_140.NoneMask.Bits.MaxBits = 0x180;
    local_158 = &TStatId::TStatId_NAME_None;
    local_8c = 0x180;
    local_54 = 0x180;
    local_1a0 = local_1a0 & 0xe0;
    FStack_150 = FStack_178;
    iStack_170 = local_148;
    uStack_16c = uStack_144;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_168,&local_140);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_168 + 2),&local_140);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_168 + 4),&local_140);
    local_1c8._0_8_ = &local_1d8;
    local_1c8._8_8_ = &local_1d6;
    UE::MovieScene::FComponentMask::SetAll
              (&local_140.AllMask,(initializer_list<UE::MovieScene::FComponentTypeID> *)local_1c8);
    local_1d4.Value = *(ushort *)&pFVar5->BlendChannelInput;
    local_1c8._0_8_ = &local_1d4;
    local_1c8._8_8_ = aFStack_1d2;
    UE::MovieScene::FComponentMask::SetAll
              (&local_140.NoneMask,(initializer_list<UE::MovieScene::FComponentTypeID> *)local_1c8);
    local_148 = *(int *)(this->_padding_ + 0x2cc);
    if ((local_148 == 1) || (local_148 == 0x101)) {
      bVar8 = 1;
    }
    else {
      bVar8 = 0;
    }
    FStack_150._0_1_ = FStack_150._0_1_ & 0xfe | bVar8;
    local_1e8 = param_2;
    UE::MovieScene::
    TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
    ::Dispatch_PerAllocation<UE::MovieScene::FApplyCustomPrimitiveDataParameters>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
                *)local_168,(FEntityManager *)local_1c8,
               (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),
               (FSystemSubsequentTasks *)param_1);
    uVar4 = local_1c8._0_8_;
    if ((FComponentTypeID *)local_1c8._0_8_ != (FComponentTypeID *)0x0) {
      LOCK();
      pFVar1 = (FComponentTypeID *)(local_1c8._0_8_ + 0x30);
      iVar2 = *(int *)pFVar1;
      *(int *)pFVar1 = *(int *)pFVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)uVar4)(uVar4,1);
      }
    }
    if (local_140.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.ComplexMasks.AllocatorInstance.Data);
    }
  }
  return;
}

// OnInstantiation @ 1467a8dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneCustomPrimitiveDataSystem::OnInstantiation(UMovieSceneCustomPrimitiveDataSystem *this)

{
  TComponentTypeID<UObject_*> TVar1;
  TComponentTypeID<FName> TVar2;
  longlong lVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  int iVar6;
  ulonglong uVar7;
  EEntityThreadingModel EVar8;
  bool bVar9;
  FBuiltInComponentTypes *pFVar10;
  FMovieSceneTracksComponentTypes *pFVar11;
  FEntityAllocation *pFVar12;
  FEntityAllocation *pFVar13;
  FBuiltInComponentTypes *pFVar14;
  FEntityManager *this_00;
  undefined1 auStackY_6a8 [32];
  FComponentTypeID local_668;
  FComponentTypeID local_666;
  FComponentTypeID local_664;
  FComponentTypeID local_662;
  FComponentTypeID local_660;
  FComponentTypeID local_65e;
  FComponentTypeID local_65c;
  ushort local_65a;
  FComponentTypeID local_658;
  ushort local_656;
  FComponentTypeID local_654;
  ushort local_652;
  <lambda_2> local_650;
  FEntityAllocationIteratorProxy local_648;
  FEntityAllocationProxy local_638;
  FEntityAllocationIterator local_628;
  undefined8 local_610;
  undefined8 uStack_608;
  TStatIdData *local_600;
  byte bStack_5f8;
  undefined7 uStack_5f7;
  undefined4 local_5f0;
  uint uStack_5ec;
  undefined8 local_5e0;
  TStatIdData *pTStack_5d8;
  byte local_5d0;
  undefined7 uStack_5cf;
  undefined4 uStack_5c8;
  uint uStack_5c4;
  undefined8 local_5b8;
  TStatIdData *pTStack_5b0;
  byte local_5a8;
  undefined7 uStack_5a7;
  undefined4 uStack_5a0;
  uint uStack_59c;
  initializer_list<UE::MovieScene::FComponentTypeID> local_598;
  initializer_list<UE::MovieScene::FComponentTypeID> local_588;
  initializer_list<UE::MovieScene::FComponentTypeID> local_578;
  TOverlappingCustomPrimitiveDataHandler<UE::MovieScene::FCustomPrimitiveDataMixin> local_568;
  initializer_list<UE::MovieScene::FComponentTypeID> local_558;
  initializer_list<UE::MovieScene::FComponentTypeID> local_548;
  initializer_list<UE::MovieScene::FComponentTypeID> local_538;
  undefined2 local_528;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TStack_526;
  TComponentTypeID<UObject_*> TStack_524;
  TComponentTypeID<FName> TStack_522;
  undefined8 uStack_520;
  TStatIdData *pTStack_518;
  ulonglong uStack_510;
  undefined8 uStack_508;
  FEntityAllocationIterator local_500;
  TComponentTypeID<UObject_*> local_4e8;
  TComponentTypeID<FName> TStack_4e6;
  undefined4 uStack_4e4;
  undefined8 uStack_4e0;
  TStatIdData *pTStack_4d8;
  ulonglong uStack_4d0;
  undefined8 uStack_4c8;
  FEntityAllocationWriteContext local_4c0;
  TBitArray<TFixedAllocator<12>_> local_4b8;
  TBitArray<TFixedAllocator<12>_> local_480;
  ForAnyElementType local_448;
  undefined8 local_440;
  EPreAnimatedCaptureSourceTracking local_438;
  <lambda_1> local_428;
  undefined1 local_398 [4];
  FComponentAccess FStack_394;
  FComponentAccess FStack_392;
  wchar_t *pwStack_390;
  TStatIdData *local_388;
  ulonglong uStack_380;
  undefined8 local_378;
  FEntityComponentFilter local_370;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_288;
  undefined4 local_284;
  undefined1 local_278 [8];
  wchar_t *pwStack_270;
  TStatIdData *local_268;
  ulonglong uStack_260;
  undefined8 local_258;
  FEntityComponentFilter local_250;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_168;
  undefined4 local_164;
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
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_6a8;
  pFVar10 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar11 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_4e8 = pFVar10->BoundObject;
  TStack_4e6 = pFVar11->ScalarParameterName;
  local_65c.Value = (pFVar10->Tags).NeedsLink.Value;
  local_65a = (pFVar11->Tags).CustomPrimitiveData.Value;
  local_5e0 = 0;
  pTStack_5d8 = &TStatId::TStatId_NAME_None;
  uStack_5c4 = uStack_5c4 & 0xffffff00;
  uStack_5c8 = 0x6ff;
  uStack_4d0 = CONCAT71(uStack_5cf,local_5d0) & 0xffffffffffffffe0;
  uStack_4c8._4_4_ = uStack_5c4;
  uStack_4c8._0_4_ = AnyHiPriThreadHiPriTask;
  uStack_4e0 = 0;
  pTStack_4d8 = &TStatId::TStatId_NAME_None;
  local_278._2_2_ = TStack_4e6;
  local_278._0_2_ = local_4e8;
  local_278._4_4_ = uStack_4e4;
  local_250.AllMask.Bits.NumBits = 0;
  local_250.AllMask.Bits.MaxBits = 0x180;
  local_250.NoneMask.Bits.NumBits = 0;
  pwStack_270 = (wchar_t *)0x0;
  local_268 = &TStatId::TStatId_NAME_None;
  local_250.NoneMask.Bits.MaxBits = 0x180;
  local_250.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.ComplexMasks.ArrayNum = 0;
  local_250.ComplexMasks.ArrayMax = 0;
  local_1a0 = 0;
  local_19c = 0x180;
  local_168 = 0;
  local_164 = 0x180;
  local_650.__this = this;
  local_5d0 = local_5d0 & 0xe0;
  uStack_260 = uStack_4d0;
  local_258 = uStack_4c8;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_278,&local_250);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_278 + 2),&local_250);
  local_598._First = &local_65c;
  local_598._Last = &local_658;
  UE::MovieScene::FComponentMask::SetAll(&local_250.AllMask,&local_598);
  local_668.Value = (pFVar10->Tags).NeedsUnlink.Value;
  local_588._First = &local_668;
  local_588._Last = &local_666;
  UE::MovieScene::FComponentMask::SetAll(&local_250.NoneMask,&local_588);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>_>
  ::
  Iterate_PerAllocationImpl<_UMovieSceneCustomPrimitiveDataSystem::OnInstantiation_::__l2::<lambda_2>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>_>
              *)local_278,(FEntityManager *)(this->_padding_ + 0x28),&local_250,&local_650);
  if (local_250.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.ComplexMasks.AllocatorInstance.Data);
  }
  local_658.Value = (pFVar10->Tags).NeedsUnlink.Value;
  local_656 = (pFVar11->Tags).CustomPrimitiveData.Value;
  local_578._First = &local_658;
  local_578._Last = &local_654;
  uStack_608 = 0;
  local_600 = &TStatId::TStatId_NAME_None;
  uStack_140 = CONCAT71(uStack_5f7,bStack_5f8) & 0xffffffffffffffe0;
  local_5f0 = 0x6ff;
  local_158 = local_610;
  uStack_150 = 0;
  uStack_5ec = uStack_5ec & 0xffffff00;
  local_138 = CONCAT44(uStack_5ec,0x6ff);
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
  bStack_5f8 = bStack_5f8 & 0xe0;
  UE::MovieScene::FComponentMask::SetAll(&local_130.AllMask,&local_578);
  this_00 = (FEntityManager *)(this->_padding_ + 0x28);
  UE::MovieScene::FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_4c0,this_00);
  EVar8 = UE::MovieScene::FEntityManager::GetThreadingModel(this_00);
  UE::MovieScene::FEntityManager::Iterate(this_00,&local_648,&local_130);
  UE::MovieScene::FEntityAllocationIterator::FEntityAllocationIterator
            (&local_628,local_648.Manager,local_648.Filter);
  UE::MovieScene::FEntityAllocationIterator::FEntityAllocationIterator(&local_500,local_648.Manager)
  ;
  bVar9 = UE::MovieScene::FEntityAllocationIterator::operator!=(&local_628,&local_500);
  if (bVar9) {
    do {
      UE::MovieScene::FEntityAllocationIterator::operator*(&local_628,&local_638);
      pFVar12 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_638);
      if (EVar8 == NoThreading) {
        pFVar12->LockMode = LockFree;
        pFVar13 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_638);
        UE::MovieScene::
        TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
        ::VisitUnlinkedAllocationImpl
                  ((TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
                    *)&this->ScalarParameterTracker,pFVar13);
        if (pFVar12 != (FEntityAllocation *)0x0) {
          pFVar12->LockMode = Mutex;
        }
      }
      else {
        pFVar12 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_638);
        UE::MovieScene::
        TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
        ::VisitUnlinkedAllocationImpl
                  ((TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
                    *)&this->ScalarParameterTracker,pFVar12);
      }
      UE::MovieScene::FEntityAllocationIterator::operator++(&local_628);
      bVar9 = UE::MovieScene::FEntityAllocationIterator::operator!=(&local_628,&local_500);
    } while (bVar9);
  }
  UE::MovieScene::FEntityAllocationIterator::~FEntityAllocationIterator(&local_500);
  UE::MovieScene::FEntityAllocationIterator::~FEntityAllocationIterator(&local_628);
  if (local_130.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.ComplexMasks.AllocatorInstance.Data);
  }
  local_568.Linker = (UMovieSceneEntitySystemLinker *)this->_padding_;
  local_568.System = this;
  UE::MovieScene::
  TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::
  ProcessInvalidatedOutputs<UE::MovieScene::TOverlappingCustomPrimitiveDataHandler<UE::MovieScene::FCustomPrimitiveDataMixin>_&>
            ((TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
              *)&this->ScalarParameterTracker,local_568.Linker,&local_568);
  local_4b8.NumBits = 0;
  local_4b8.MaxBits = 0x180;
  local_480.NumBits = 0;
  local_480.MaxBits = 0x180;
  local_448.Data = (FScriptContainerElement *)0x0;
  local_440 = 0;
  local_438 = CacheIfTracked;
  pFVar14 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_664.Value = (pFVar14->Tags).NeedsLink.Value;
  local_558._First = &local_664;
  local_558._Last = &local_662;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)&local_4b8,&local_558);
  uVar7 = local_440;
  local_4b8.NumBits = 0;
  local_480.NumBits = 0;
  local_440 = local_440 & 0xffffffff00000000;
  if ((longlong)uVar7 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x3c,4,0,&local_448,0,(int *)((longlong)&local_440 + 4));
  }
  local_660.Value = *(ushort *)&pFVar10->BlendChannelOutput;
  local_548._First = &local_660;
  local_548._Last = &local_65e;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)&local_480,&local_548);
  local_654.Value = (pFVar10->Tags).NeedsLink.Value;
  local_652 = (pFVar11->Tags).CustomPrimitiveData.Value;
  local_538._First = &local_654;
  local_538._Last = (FComponentTypeID *)&local_650;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)&local_4b8,&local_538);
  if (((this->ScalarParameterStorage).Object == (FPreAnimatedCustomPrimitiveDataEntryStorage *)0x0)
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_428.__this =
       (TPreAnimatedStateStorage<UE::MovieScene::FCustomPrimitiveDataEntryTraits> *)
       (this->ScalarParameterStorage).Object;
  TVar1 = pFVar10->BoundObject;
  TVar2 = pFVar11->ScalarParameterName;
  lVar3 = this->_padding_;
  local_428.InParams.AdditionalFilter.AllMask.Bits.NumBits = 0;
  local_428.InParams.AdditionalFilter.AllMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            ((TBitArray<TFixedAllocator<12>_> *)&local_428.InParams,&local_4b8);
  local_428.InParams.AdditionalFilter.NoneMask.Bits.NumBits = 0;
  local_428.InParams.AdditionalFilter.NoneMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&local_428.InParams.AdditionalFilter.NoneMask.Bits,&local_480);
  FVar5.Data = local_448.Data;
  iVar6 = (int)local_440;
  local_428.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_428.InParams.AdditionalFilter.ComplexMasks.ArrayNum = (int)local_440;
  if ((int)local_440 == 0) {
    local_428.InParams.AdditionalFilter.ComplexMasks.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x3c,4,(int)local_440,0,
               &local_428.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance,(int)local_440,
               &local_428.InParams.AdditionalFilter.ComplexMasks.ArrayMax);
    ConstructItems<UE::MovieScene::FEntityComponentFilter::FComplexMask,UE::MovieScene::FEntityComponentFilter::FComplexMask,int>
              (local_428.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data,
               (FComplexMask *)FVar5.Data,iVar6);
  }
  local_428.InParams.TrackingMode = local_438;
  pFVar10 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pTStack_5b0 = &TStatId::TStatId_NAME_None;
  local_5b8 = 0;
  TStack_526 = pFVar10->RootInstanceHandle;
  uStack_520 = 0;
  pTStack_518 = &TStatId::TStatId_NAME_None;
  uStack_5a0 = 0x6ff;
  uStack_59c = uStack_59c & 0xffffff00;
  uStack_510 = CONCAT71(uStack_5a7,local_5a8) & 0xffffffffffffffe0;
  uStack_508._4_4_ = uStack_59c;
  uStack_508._0_4_ = AnyHiPriThreadHiPriTask;
  local_398._2_2_ = TStack_526;
  local_398._0_2_ = local_528;
  unique0x1000074b = TVar1;
  unique0x1000074d = TVar2;
  local_370.AllMask.Bits.NumBits = 0;
  local_370.AllMask.Bits.MaxBits = 0;
  pwStack_390 = (wchar_t *)0x0;
  local_388 = &TStatId::TStatId_NAME_None;
  local_5a8 = local_5a8 & 0xe0;
  TStack_524 = TVar1;
  TStack_522 = TVar2;
  uStack_380 = uStack_510;
  local_378 = uStack_508;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            ((TBitArray<TFixedAllocator<12>_> *)&local_370,&local_4b8);
  local_370.NoneMask.Bits.NumBits = 0;
  local_370.NoneMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_370.NoneMask.Bits,&local_480)
  ;
  FVar5.Data = local_448.Data;
  iVar6 = (int)local_440;
  local_370.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_370.ComplexMasks.ArrayNum = (int)local_440;
  if ((int)local_440 == 0) {
    local_370.ComplexMasks.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x3c,4,(int)local_440,0,&local_370.ComplexMasks.AllocatorInstance,(int)local_440,
               &local_370.ComplexMasks.ArrayMax);
    ConstructItems<UE::MovieScene::FEntityComponentFilter::FComplexMask,UE::MovieScene::FEntityComponentFilter::FComplexMask,int>
              (local_370.ComplexMasks.AllocatorInstance.Data,(FComplexMask *)FVar5.Data,iVar6);
  }
  local_2c0 = 0;
  local_2bc = 0x180;
  local_288 = 0;
  local_284 = 0x180;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_398 + 2),&local_370);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_398 + 4),&local_370);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_398 + 6),&local_370);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>_>
  ::
  Iterate_PerAllocationImpl<_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FCustomPrimitiveDataEntryTraits>::BeginTrackingAndCachePreAnimatedValuesTask<UE::MovieScene::TPreAnimatedStateTaskParams<FObjectKey,FName>,UObject_*,FName>_::__l2::<lambda_1>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>_>
              *)local_398,(FEntityManager *)(lVar3 + 0x28),&local_370,&local_428);
  if (local_370.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.ComplexMasks.AllocatorInstance.Data);
  }
  if (local_428.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data);
  }
  if ((FComplexMask *)local_448.Data != (FComplexMask *)0x0) {
    FMemory::Free(local_448.Data);
  }
  return;
}

// OnLink @ 1467a9fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneCustomPrimitiveDataSystem::OnLink(UMovieSceneCustomPrimitiveDataSystem *this)

{
  TComponentTypeID<FName> TVar1;
  TComponentTypeID<UObject_*> TVar2;
  int iVar3;
  FBuiltInComponentTypes *pFVar4;
  FMovieSceneTracksComponentTypes *pFVar5;
  UMovieSceneEntityGroupingSystem *pUVar6;
  TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *this_00;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [4];
  FComponentTypeID aFStack_e4 [2];
  FCustomPrimitiveDataGroupingPolicy local_e0 [8];
  TComponentTypeID<FName> local_d8 [4];
  TSharedPtr<UE::MovieScene::FPreAnimatedCustomPrimitiveDataEntryStorage,1> local_d0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_b8;
  FEntityComponentFilter local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar5 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  if ((char)(this->ScalarParameterTracker)._padding_ == '\0') {
    *(undefined1 *)&(this->ScalarParameterTracker)._padding_ = 1;
    _local_e8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UMovieSceneCustomPrimitiveDataSystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=
              (&(this->ScalarParameterTracker).WeakOwningSystem.WeakPtr,(FObjectPtr)local_e8);
    TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
    ::
    AddRaw<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>_>
              ((TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
                *)(this->_padding_ + 0x698),
               (TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
                *)local_e8,(pmf_15ec5eb3)&this->ScalarParameterTracker);
    TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
    ::
    AddRaw<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>_>
              ((TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
                *)(this->_padding_ + 0x6b8),
               (TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
                *)local_e8,(pmf_15ec5eb3)&this->ScalarParameterTracker);
    TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
    ::
    AddRaw<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>_>
              ((TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
                *)(this->_padding_ + 0x6d8),
               (TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
                *)local_e8,(pmf_cf5c7f27)&this->ScalarParameterTracker);
  }
  UE::MovieScene::FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedCustomPrimitiveDataEntryStorage>
            ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468),&local_d0,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedCustomPrimitiveDataEntryStorage>)
             UE::MovieScene::FPreAnimatedCustomPrimitiveDataEntryStorage::StorageID);
  if (&this->ScalarParameterStorage != &local_d0) {
    (this->ScalarParameterStorage).Object = local_d0.Object;
    local_d0.Object = (FPreAnimatedCustomPrimitiveDataEntryStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ScalarParameterStorage).SharedReferenceCount,&local_d0.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d0.SharedReferenceCount.ReferenceController);
  pUVar6 = UMovieSceneEntitySystemLinker::LinkSystem<UMovieSceneEntityGroupingSystem>
                     ((UMovieSceneEntitySystemLinker *)this->_padding_);
  TVar1 = pFVar5->ScalarParameterName;
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_a8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_a8.ComplexMasks.ArrayNum = 0;
  local_a8.ComplexMasks.ArrayMax = 0;
  TVar2 = pFVar4->BoundObject;
  local_a8.AllMask.Bits.NumBits = 0;
  local_a8.AllMask.Bits.MaxBits = 0x180;
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_a8.NoneMask.Bits.NumBits = 0;
  local_a8.NoneMask.Bits.MaxBits = 0x180;
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_d8[0] = TVar1;
  local_e8._0_2_ = TVar2;
  iVar3 = TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
          ::Emplace<>(&pUVar6->GroupHandlers);
  this_00 = (TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *)
            (*(longlong *)&pUVar6->GroupHandlers + (longlong)iVar3 * 0x188);
  TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8>::
  Emplace<UE::MovieScene::TEntityGroupingHandler<UE::MovieScene::FCustomPrimitiveDataGroupingPolicy,UObject_*,FName>,UE::MovieScene::FCustomPrimitiveDataGroupingPolicy,UE::MovieScene::TComponentTypeID<UObject_*>_&,UE::MovieScene::TComponentTypeID<FName>_&>
            (this_00,local_e0,(TComponentTypeID<UObject_*> *)local_e8,local_d8);
  UE::MovieScene::FEntityComponentFilter::operator=
            ((FEntityComponentFilter *)(this_00 + 1),&local_a8);
  local_b8._First = (FComponentTypeID *)local_e8;
  local_b8._Last = (FComponentTypeID *)(local_e8 + 4);
  local_e8 = (undefined1  [4])CONCAT22(TVar1,TVar2);
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)(this_00 + 1),&local_b8);
  if (local_a8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ComplexMasks.AllocatorInstance.Data);
  }
  (this->GroupingKey).Index = iVar3;
  return;
}

// OnRun @ 1467aea20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneCustomPrimitiveDataSystem::OnRun
          (UMovieSceneCustomPrimitiveDataSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_18;
  
  UMovieSceneEntitySystemLinker::GetRunner
            ((UMovieSceneEntitySystemLinker *)this->_padding_,&local_18);
  if ((local_18.Object)->CurrentPhase == Instantiation) {
    OnInstantiation(this);
  }
  else if ((local_18.Object)->CurrentPhase == Evaluation) {
    OnEvaluation(this,param_1,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// OnSchedulePersistentTasks @ 1467b03d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneCustomPrimitiveDataSystem::OnSchedulePersistentTasks
          (UMovieSceneCustomPrimitiveDataSystem *this,IEntitySystemScheduler *param_1)

{
  undefined1 uVar1;
  FBuiltInComponentTypes *pFVar2;
  FMovieSceneTracksComponentTypes *pFVar3;
  byte bVar4;
  undefined1 auStackY_1f8 [32];
  FComponentTypeID local_1c8;
  FComponentTypeID local_1c6;
  FComponentTypeID local_1c4;
  FComponentTypeID local_1c2 [5];
  initializer_list<UE::MovieScene::FComponentTypeID> local_1b8;
  undefined1 local_1a8 [8];
  undefined8 uStack_1a0;
  TStatIdData *pTStack_198;
  byte local_190;
  undefined7 uStack_18f;
  undefined4 uStack_188;
  uint uStack_184;
  undefined1 local_180 [10];
  TComponentTypeID<FName> TStack_176;
  TComponentTypeID<double> TStack_174;
  undefined2 uStack_172;
  undefined8 uStack_170;
  TStatIdData *pTStack_168;
  ForElementType<unsigned_int> FStack_160;
  int iStack_158;
  uint uStack_154;
  undefined1 local_148 [4];
  FComponentAccess aFStack_144 [2];
  uchar auStack_140 [8];
  TStatIdData *local_138;
  ForElementType<unsigned_int> FStack_130;
  int local_128;
  uint uStack_124;
  FEntityComponentFilter local_120;
  int local_70;
  int local_6c;
  int local_38;
  int local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar3 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  pTStack_198 = &TStatId::TStatId_NAME_None;
  local_180._8_2_ = pFVar2->BoundObject;
  TStack_176 = pFVar3->ScalarParameterName;
  local_1c8.Value = (pFVar3->Tags).CustomPrimitiveData.Value;
  TStack_174 = pFVar2->DoubleResult[0];
  uStack_1a0._0_1_ = '\0';
  uStack_1a0._1_7_ = 0;
  uStack_184 = uStack_184 & 0xffffff00;
  uStack_170 = 0;
  pTStack_168 = &TStatId::TStatId_NAME_None;
  local_120.AllMask.Bits.NumBits = 0;
  local_148._2_2_ = TStack_176;
  local_148._0_2_ = local_180._8_2_;
  unique0x10000288 = TStack_174;
  unique0x1000028a = uStack_172;
  local_120.NoneMask.Bits.NumBits = 0;
  local_120.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ComplexMasks.ArrayNum = 0;
  local_120.ComplexMasks.ArrayMax = 0;
  local_70 = 0;
  local_38 = 0;
  uStack_188 = 0x6ff;
  FStack_160 = (ForElementType<unsigned_int>)(CONCAT71(uStack_18f,local_190) & 0xffffffffffffffe0);
  local_128 = 0x6ff;
  uStack_124 = uStack_184;
  auStack_140[0] = '\0';
  auStack_140[1] = '\0';
  auStack_140[2] = '\0';
  auStack_140[3] = '\0';
  auStack_140[4] = '\0';
  auStack_140[5] = '\0';
  auStack_140[6] = '\0';
  auStack_140[7] = '\0';
  local_120.AllMask.Bits.MaxBits = 0x180;
  local_120.NoneMask.Bits.MaxBits = 0x180;
  local_138 = &TStatId::TStatId_NAME_None;
  local_6c = 0x180;
  local_34 = 0x180;
  local_190 = local_190 & 0xe0;
  FStack_130 = FStack_160;
  iStack_158 = local_128;
  uStack_154 = uStack_124;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_148,&local_120);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_148 + 2),&local_120);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_148 + 4),&local_120);
  local_1b8._First = &local_1c8;
  local_1b8._Last = &local_1c6;
  UE::MovieScene::FComponentMask::SetAll(&local_120.AllMask,&local_1b8);
  local_1c4.Value = *(ushort *)&pFVar2->BlendChannelInput;
  local_1b8._First = &local_1c4;
  local_1b8._Last = local_1c2;
  UE::MovieScene::FComponentMask::SetAll(&local_120.NoneMask,&local_1b8);
  local_128 = *(int *)(this->_padding_ + 0x2cc);
  if ((local_128 == 1) || (local_128 == 0x101)) {
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  uVar1 = FStack_130._0_1_;
  local_1b8._Last = (FComponentTypeID *)CONCAT71(local_1b8._Last._1_7_,3);
  FStack_130._0_1_ = FStack_130._0_1_ & 0xfe | bVar4;
  pTStack_198 = (TStatIdData *)CONCAT71(FStack_130._1_7_,uVar1 & 0xfc | bVar4);
  uStack_1a0 = local_138;
  local_1a8 = (undefined1  [8])0x15132e830;
  local_1b8._First =
       (FComponentTypeID *)
       UE::MovieScene::
       TScheduledEntityTask<UE::MovieScene::FApplyCustomPrimitiveDataParameters,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
       ::ScheduledRun_PerAllocation;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
  ::ScheduleImpl<UE::MovieScene::FApplyCustomPrimitiveDataParameters>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
              *)local_148,(FEntityManager *)local_180,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_1a8);
  if (local_120.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// OnUnlink @ 1467b0e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneCustomPrimitiveDataSystem::OnUnlink(UMovieSceneCustomPrimitiveDataSystem *this)

{
  code *pcVar1;
  bool bVar2;
  UMovieSceneEntityGroupingSystem *this_00;
  TOverlappingCustomPrimitiveDataHandler<UE::MovieScene::FCustomPrimitiveDataMixin> local_18;
  
  (this->DoubleBlenderSystem).field0_0x0.DebugPtr = (UMovieScenePiecewiseDoubleBlenderSystem *)0x0;
  local_18.Linker = (UMovieSceneEntitySystemLinker *)this->_padding_;
  local_18.System = this;
  UE::MovieScene::
  TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::
  Destroy<UE::MovieScene::TOverlappingCustomPrimitiveDataHandler<UE::MovieScene::FCustomPrimitiveDataMixin>_>
            ((TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
              *)&this->ScalarParameterTracker,&local_18);
  this_00 = UMovieSceneEntitySystemLinker::FindSystem<UMovieSceneEntityGroupingSystem>
                      ((UMovieSceneEntitySystemLinker *)this->_padding_);
  if (this_00 == (UMovieSceneEntityGroupingSystem *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5133526537756213685>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneCustomPrimitiveDataSystem.cpp"
                       ,0x1b5,"GroupingSystem");
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

// StaticRegisterNativesUMovieSceneCustomPrimitiveDataSystem @ 1467c2880

void __cdecl
UMovieSceneCustomPrimitiveDataSystem::StaticRegisterNativesUMovieSceneCustomPrimitiveDataSystem
          (void)

{
  return;
}

