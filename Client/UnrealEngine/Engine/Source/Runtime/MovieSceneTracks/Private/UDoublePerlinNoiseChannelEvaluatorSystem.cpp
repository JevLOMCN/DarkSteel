// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// StaticClass @ 146726d90

UClass * __cdecl UDoublePerlinNoiseChannelEvaluatorSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDoublePerlinNoiseChannelEvaluatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"DoublePerlinNoiseChannelEvaluatorSystem",
               &Z_Registration_Info_UClass_UDoublePerlinNoiseChannelEvaluatorSystem.InnerSingleton,
               StaticRegisterNativesUDoublePerlinNoiseChannelEvaluatorSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UDoublePerlinNoiseChannelEvaluatorSystem>,
               InternalVTableHelperCtorCaller<UDoublePerlinNoiseChannelEvaluatorSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDoublePerlinNoiseChannelEvaluatorSystem.InnerSingleton;
}

// UDoublePerlinNoiseChannelEvaluatorSystem @ 146760f20

/* WARNING: Enum "Type": Some values do not have unique names */

UDoublePerlinNoiseChannelEvaluatorSystem * __thiscall
UDoublePerlinNoiseChannelEvaluatorSystem::UDoublePerlinNoiseChannelEvaluatorSystem
          (UDoublePerlinNoiseChannelEvaluatorSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined ***)this = &___7UDoublePerlinNoiseChannelEvaluatorSystem__6B_;
  return this;
}

// UDoublePerlinNoiseChannelEvaluatorSystem @ 146760f50

/* WARNING: Enum "Type": Some values do not have unique names */

UDoublePerlinNoiseChannelEvaluatorSystem * __thiscall
UDoublePerlinNoiseChannelEvaluatorSystem::UDoublePerlinNoiseChannelEvaluatorSystem
          (UDoublePerlinNoiseChannelEvaluatorSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FBuiltInComponentTypes *pFVar2;
  FMovieSceneTracksComponentTypes *pFVar3;
  uint uVar4;
  TComponentTypeID<double> *pTVar5;
  UClass *local_res8;
  UClass *local_res18 [2];
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined4 *)&this->field_0x38 = 4;
  *(undefined ***)this = &___7UDoublePerlinNoiseChannelEvaluatorSystem__6B_;
  this->field_0x32 = 0xc;
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar3 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  *(TComponentTypeID<FPerlinNoiseParams> *)&this->field_0x30 = pFVar3->DoublePerlinNoiseChannel;
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    uVar4 = 0;
    pTVar5 = pFVar2->DoubleResult;
    do {
      FVar1.Value = *(ushort *)pTVar5;
      local_res8 = GetPrivateStaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentProducer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
      uVar4 = uVar4 + 1;
      pTVar5 = pTVar5 + 1;
    } while (uVar4 < 9);
    local_res8 = *(UClass **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18[0] = Z_Construct_UClass_UMovieSceneEvalTimeSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = *(UClass **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18[0] = UMovieSceneBaseValueEvaluatorSystem::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18[0] = *(UClass **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  }
  return this;
}

// ~UDoublePerlinNoiseChannelEvaluatorSystem @ 146769c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDoublePerlinNoiseChannelEvaluatorSystem::~UDoublePerlinNoiseChannelEvaluatorSystem
          (UDoublePerlinNoiseChannelEvaluatorSystem *this)

{
  *(undefined ***)this = &___7UDoublePerlinNoiseChannelEvaluatorSystem__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 146797120

UClass * __cdecl UDoublePerlinNoiseChannelEvaluatorSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDoublePerlinNoiseChannelEvaluatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"DoublePerlinNoiseChannelEvaluatorSystem",
               &Z_Registration_Info_UClass_UDoublePerlinNoiseChannelEvaluatorSystem.InnerSingleton,
               StaticRegisterNativesUDoublePerlinNoiseChannelEvaluatorSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UDoublePerlinNoiseChannelEvaluatorSystem>,
               InternalVTableHelperCtorCaller<UDoublePerlinNoiseChannelEvaluatorSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDoublePerlinNoiseChannelEvaluatorSystem.InnerSingleton;
}

// OnRun @ 1467ac310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDoublePerlinNoiseChannelEvaluatorSystem::OnRun
          (UDoublePerlinNoiseChannelEvaluatorSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  FComponentTypeID *pFVar1;
  int iVar2;
  FBuiltInComponentTypes *pFVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateDoublePerlinNoiseChannelTask> FVar5;
  TComponentTypeID<double> *pTVar6;
  uint uVar7;
  FEntityManager *pFVar8;
  undefined1 auStackY_3a8 [32];
  FComponentTypeID local_348;
  FComponentTypeID local_346;
  FComponentTypeID local_344;
  FComponentTypeID local_342;
  FEvaluateDoublePerlinNoiseChannels local_340 [16];
  undefined8 local_330;
  TStatIdData *pTStack_328;
  byte local_320;
  undefined7 uStack_31f;
  undefined4 uStack_318;
  uint uStack_314;
  FMovieSceneTracksComponentTypes *local_310;
  TComponentTypeID<double> local_308;
  TComponentTypeID<FPerlinNoiseParams> TStack_306;
  TComponentTypeID<double> TStack_304;
  undefined2 uStack_302;
  undefined8 uStack_300;
  TStatIdData *pTStack_2f8;
  ulonglong uStack_2f0;
  undefined1 auStack_2e8 [16];
  initializer_list<UE::MovieScene::FComponentTypeID> local_2d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_2c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_2b8;
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_2a8;
  undefined1 local_298 [2];
  FComponentAccess FStack_296;
  FComponentAccess aFStack_294 [2];
  undefined8 uStack_290;
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateDoublePerlinNoiseChannelTask> local_288;
  ulonglong uStack_280;
  undefined1 local_278 [8];
  FEntityComponentFilter local_270;
  int local_1c0;
  int local_1bc;
  int local_188;
  int local_184;
  TEntityTaskBase<UE::MovieScene::FEvaluateDoublePerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
  local_178;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_310 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  UMovieSceneEntitySystemLinker::GetRunner
            (*(UMovieSceneEntitySystemLinker **)&this->field_0x28,&local_2a8);
  if ((local_2a8.Object)->CurrentPhase == Instantiation) {
    uVar7 = 0;
    pTVar6 = pFVar3->BaseDouble;
    do {
      local_308 = pFVar3->BaseValueEvalSeconds;
      local_330 = 0;
      pTStack_328 = &TStatId::TStatId_NAME_None;
      TStack_306 = local_310->DoublePerlinNoiseChannel;
      TStack_304 = *pTVar6;
      local_344.Value = (pFVar3->Tags).NeedsLink.Value;
      uStack_300 = 0;
      pTStack_2f8 = &TStatId::TStatId_NAME_None;
      uStack_318 = 0x6ff;
      FStack_296.ComponentType.Value = (FComponentTypeID)(FComponentTypeID)TStack_306;
      local_298 = (undefined1  [2])local_308;
      aFStack_294[0].ComponentType.Value = (FComponentTypeID)(FComponentTypeID)TStack_304;
      unique0x100004d9 = uStack_302;
      uStack_314 = uStack_314 & 0xffffff00;
      uStack_2f0 = CONCAT71(uStack_31f,local_320) & 0xffffffffffffffe0;
      auStack_2e8._4_4_ = uStack_314;
      auStack_2e8._0_4_ = 0x6ff;
      uStack_290 = 0;
      local_270.AllMask.Bits.NumBits = 0;
      local_270.AllMask.Bits.MaxBits = 0x180;
      local_288 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateDoublePerlinNoiseChannelTask>)
                  &TStatId::TStatId_NAME_None;
      local_270.NoneMask.Bits.NumBits = 0;
      local_270.NoneMask.Bits.MaxBits = 0x180;
      local_270.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_270.ComplexMasks.ArrayNum = 0;
      local_270.ComplexMasks.ArrayMax = 0;
      local_1c0 = 0;
      local_1bc = 0x180;
      local_188 = 0;
      local_184 = 0x180;
      local_320 = local_320 & 0xe0;
      uStack_280 = uStack_2f0;
      local_278 = (undefined1  [8])auStack_2e8._0_8_;
      UE::MovieScene::AddAccessorToFilter
                ((FComponentAccess *)local_298,(FEntityComponentFilter *)(local_278 + 8));
      UE::MovieScene::AddAccessorToFilter
                ((FComponentAccess *)(local_298 + 2),(FEntityComponentFilter *)(local_278 + 8));
      UE::MovieScene::AddAccessorToFilter
                ((FComponentAccess *)(local_298 + 4),(FEntityComponentFilter *)(local_278 + 8));
      local_2c8._First = &local_344;
      local_2c8._Last = &local_342;
      UE::MovieScene::FComponentMask::SetAll((FComponentMask *)(local_278 + 8),&local_2c8);
      local_348.Value = (pFVar3->Tags).Ignored.Value;
      local_2d8._First = &local_348;
      local_2d8._Last = &local_346;
      UE::MovieScene::FComponentMask::SetAll(&local_270.NoneMask,&local_2d8);
      pFVar8 = (FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28);
      if (local_298 != (undefined1  [2])0xffff &&
          (aFStack_294[0].ComponentType.Value != 0xffff && FStack_296.ComponentType.Value != 0xffff)
         ) {
        UE::MovieScene::
        TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
        ::
        TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
                  (&local_178.FilteredTask,
                   (TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
                    *)local_298);
        local_178.EntityManager = pFVar8;
        UE::MovieScene::FEntityAllocationWriteContext::FEntityAllocationWriteContext
                  (&local_178.WriteContext,pFVar8);
        UE::MovieScene::
        TEntityTaskBase<UE::MovieScene::FEvaluateDoublePerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
        ::Run(&local_178,local_340);
        if (local_178.FilteredTask.Filter.ComplexMasks.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.FilteredTask.Filter.ComplexMasks.AllocatorInstance.Data);
        }
      }
      if (local_270.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.ComplexMasks.AllocatorInstance.Data);
      }
      uVar7 = uVar7 + 1;
      pTVar6 = pTVar6 + 1;
    } while (uVar7 < 9);
  }
  else if ((local_2a8.Object)->CurrentPhase == Evaluation) {
    uVar7 = 0;
    pTVar6 = pFVar3->DoubleResult;
    do {
      pTStack_328 = &TStatId::TStatId_NAME_None;
      local_308 = pFVar3->EvalSeconds;
      local_330 = 0;
      uStack_318 = 0x6ff;
      TStack_306 = local_310->DoublePerlinNoiseChannel;
      TStack_304 = *pTVar6;
      local_348.Value = (pFVar3->Tags).Ignored.Value;
      uStack_300 = 0;
      pTStack_2f8 = &TStatId::TStatId_NAME_None;
      uStack_314 = uStack_314 & 0xffffff00;
      uStack_2f0 = CONCAT71(uStack_31f,local_320) & 0xffffffffffffffe0;
      auStack_2e8._4_4_ = uStack_314;
      auStack_2e8._0_4_ = 0x6ff;
      FStack_296.ComponentType.Value = (FComponentTypeID)(FComponentTypeID)TStack_306;
      local_298 = (undefined1  [2])local_308;
      aFStack_294[0].ComponentType.Value = (FComponentTypeID)(FComponentTypeID)TStack_304;
      unique0x100004eb = uStack_302;
      local_270.AllMask.Bits.NumBits = 0;
      local_270.AllMask.Bits.MaxBits = 0x180;
      local_270.NoneMask.Bits.NumBits = 0;
      uStack_290 = 0;
      local_288 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateDoublePerlinNoiseChannelTask>)
                  &TStatId::TStatId_NAME_None;
      local_270.NoneMask.Bits.MaxBits = 0x180;
      local_270.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_270.ComplexMasks.ArrayNum = 0;
      local_270.ComplexMasks.ArrayMax = 0;
      local_1c0 = 0;
      local_1bc = 0x180;
      local_188 = 0;
      local_184 = 0x180;
      local_320 = local_320 & 0xe0;
      uStack_280 = uStack_2f0;
      local_278 = (undefined1  [8])auStack_2e8._0_8_;
      UE::MovieScene::AddAccessorToFilter
                ((FComponentAccess *)local_298,(FEntityComponentFilter *)(local_278 + 8));
      UE::MovieScene::AddAccessorToFilter
                ((FComponentAccess *)(local_298 + 2),(FEntityComponentFilter *)(local_278 + 8));
      UE::MovieScene::AddAccessorToFilter
                ((FComponentAccess *)(local_298 + 4),(FEntityComponentFilter *)(local_278 + 8));
      local_2b8._First = &local_348;
      local_2b8._Last = &local_346;
      UE::MovieScene::FComponentMask::SetAll(&local_270.NoneMask,&local_2b8);
      FVar5 = StatPtr_MovieSceneEval_EvaluateDoublePerlinNoiseChannelTask;
      if (StatPtr_MovieSceneEval_EvaluateDoublePerlinNoiseChannelTask ==
          (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateDoublePerlinNoiseChannelTask>)0x0) {
        pFVar4 = ::FName::FName((FName *)&local_2c8,
                                "MovieSceneEval_EvaluateDoublePerlinNoiseChannelTask");
        FVar5 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateDoublePerlinNoiseChannelTask>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &StatPtr_MovieSceneEval_EvaluateDoublePerlinNoiseChannelTask,*pFVar4,
                           L"MovieScene: Evaluate Double Perlin Noise channels",
                           "STATGROUP_MovieSceneECS","STATCAT_Advanced",
                           L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,
                           MCR_Invalid);
      }
      local_288 = FVar5;
      UE::MovieScene::
      TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
      ::Dispatch_PerEntity<UE::MovieScene::FEvaluateDoublePerlinNoiseChannels>
                ((TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
                  *)local_298,(FEntityManager *)&local_2d8,
                 (FSystemTaskPrerequisites *)(*(longlong *)&this->field_0x28 + 0x28),
                 (FSystemSubsequentTasks *)param_1);
      if (local_2d8._First != (FComponentTypeID *)0x0) {
        LOCK();
        pFVar1 = local_2d8._First + 0x18;
        iVar2 = *(int *)pFVar1;
        *(int *)pFVar1 = *(int *)pFVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (*(code *)**(undefined8 **)local_2d8._First)(local_2d8._First,1);
        }
      }
      if (local_270.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.ComplexMasks.AllocatorInstance.Data);
      }
      uVar7 = uVar7 + 1;
      pTVar6 = pTVar6 + 1;
    } while (uVar7 < 9);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8.SharedReferenceCount.ReferenceController);
  return;
}

// OnSchedulePersistentTasks @ 1467af1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDoublePerlinNoiseChannelEvaluatorSystem::OnSchedulePersistentTasks
          (UDoublePerlinNoiseChannelEvaluatorSystem *this,IEntitySystemScheduler *param_1)

{
  FBuiltInComponentTypes *pFVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateDoublePerlinNoiseChannelTask> FVar4;
  uint uVar5;
  TComponentTypeID<double> *pTVar6;
  undefined1 auStackY_258 [32];
  FComponentTypeID local_1f8;
  FComponentTypeID local_1f6 [3];
  undefined1 local_1f0 [8];
  undefined8 uStack_1e8;
  TStatIdData *pTStack_1e0;
  byte local_1d8;
  undefined7 uStack_1d7;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined1 local_1c8 [16];
  initializer_list<UE::MovieScene::FComponentTypeID> local_1b8;
  code *local_1a8;
  undefined1 local_1a0;
  TComponentTypeID<double> local_198;
  TComponentTypeID<FPerlinNoiseParams> TStack_196;
  TComponentTypeID<double> TStack_194;
  undefined2 uStack_192;
  undefined8 uStack_190;
  TStatIdData *pTStack_188;
  ulonglong uStack_180;
  ForElementType<unsigned_int> FStack_178;
  FName local_170;
  undefined1 local_168 [4];
  FComponentAccess aFStack_164 [2];
  undefined8 uStack_160;
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateDoublePerlinNoiseChannelTask> local_158;
  ulonglong uStack_150;
  ForElementType<unsigned_int> local_148;
  FEntityComponentFilter local_140;
  int local_90;
  int local_8c;
  int local_58;
  int local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  uVar5 = 0;
  pTVar6 = pFVar1->DoubleResult;
  do {
    local_198 = pFVar1->EvalSeconds;
    TStack_196 = pFVar2->DoublePerlinNoiseChannel;
    TStack_194 = *pTVar6;
    pTStack_1e0 = &TStatId::TStatId_NAME_None;
    local_1f8.Value = (pFVar1->Tags).Ignored.Value;
    uStack_1e8._0_1_ = '\0';
    uStack_1e8._1_7_ = 0;
    uStack_1d0 = 0x6ff;
    uStack_1cc = uStack_1cc & 0xffffff00;
    uStack_180 = CONCAT71(uStack_1d7,local_1d8) & 0xffffffffffffffe0;
    FStack_178._4_4_ = uStack_1cc;
    FStack_178._0_4_ = 0x6ff;
    uStack_190 = 0;
    pTStack_188 = &TStatId::TStatId_NAME_None;
    local_140.AllMask.Bits.NumBits = 0;
    local_168._2_2_ = TStack_196;
    local_168._0_2_ = local_198;
    unique0x100002fc = TStack_194;
    unique0x100002fe = uStack_192;
    local_140.AllMask.Bits.MaxBits = 0x180;
    local_140.NoneMask.Bits.NumBits = 0;
    local_140.NoneMask.Bits.MaxBits = 0x180;
    uStack_160 = 0;
    local_158 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateDoublePerlinNoiseChannelTask>)
                &TStatId::TStatId_NAME_None;
    local_140.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.ComplexMasks.ArrayNum = 0;
    local_140.ComplexMasks.ArrayMax = 0;
    local_90 = 0;
    local_8c = 0x180;
    local_58 = 0;
    local_54 = 0x180;
    local_1d8 = local_1d8 & 0xe0;
    uStack_150 = uStack_180;
    local_148 = FStack_178;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_168,&local_140);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_168 + 2),&local_140);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_168 + 4),&local_140);
    local_1b8._First = &local_1f8;
    local_1b8._Last = local_1f6;
    UE::MovieScene::FComponentMask::SetAll(&local_140.NoneMask,&local_1b8);
    FVar4 = StatPtr_MovieSceneEval_EvaluateDoublePerlinNoiseChannelTask;
    if (StatPtr_MovieSceneEval_EvaluateDoublePerlinNoiseChannelTask ==
        (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateDoublePerlinNoiseChannelTask>)0x0) {
      pFVar3 = ::FName::FName(&local_170,"MovieSceneEval_EvaluateDoublePerlinNoiseChannelTask");
      FVar4 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateDoublePerlinNoiseChannelTask>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_MovieSceneEval_EvaluateDoublePerlinNoiseChannelTask,*pFVar3,
                         L"MovieScene: Evaluate Double Perlin Noise channels",
                         "STATGROUP_MovieSceneECS","STATCAT_Advanced",
                         L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid
                        );
    }
    local_1a0 = 3;
    pTStack_1e0 = (TStatIdData *)(uStack_150 & 0xfffffffffffffffd);
    local_1f0 = (undefined1  [8])0x15132e460;
    local_1a8 = UE::MovieScene::
                TScheduledEntityTask<UE::MovieScene::FEvaluateDoublePerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
                ::ScheduledRun_PerEntity;
    uStack_1e8 = FVar4;
    local_158 = FVar4;
    UE::MovieScene::
    TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
    ::ScheduleImpl<UE::MovieScene::FEvaluateDoublePerlinNoiseChannels>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
                *)local_168,(FEntityManager *)local_1c8,
               (IEntitySystemScheduler *)(*(longlong *)&this->field_0x28 + 0x28),
               (FTaskParams *)param_1,
               (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                *)local_1f0);
    if (local_140.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.ComplexMasks.AllocatorInstance.Data);
    }
    uVar5 = uVar5 + 1;
    pTVar6 = pTVar6 + 1;
  } while (uVar5 < 9);
  return;
}

// StaticRegisterNativesUDoublePerlinNoiseChannelEvaluatorSystem @ 1467c25f0

void __cdecl
UDoublePerlinNoiseChannelEvaluatorSystem::
StaticRegisterNativesUDoublePerlinNoiseChannelEvaluatorSystem(void)

{
  return;
}

