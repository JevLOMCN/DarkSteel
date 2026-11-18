// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 11

// StaticClass @ 1467cf950

UClass * __cdecl UMovieScenePiecewiseIntegerBlenderSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePiecewiseIntegerBlenderSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePiecewiseIntegerBlenderSystem",
               &Z_Registration_Info_UClass_UMovieScenePiecewiseIntegerBlenderSystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePiecewiseIntegerBlenderSystem,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieScenePiecewiseIntegerBlenderSystem>,
               InternalVTableHelperCtorCaller<UMovieScenePiecewiseIntegerBlenderSystem>,local_res8,
               UMovieSceneBlenderSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePiecewiseIntegerBlenderSystem.InnerSingleton;
}

// UMovieScenePiecewiseIntegerBlenderSystem @ 14680a950

UMovieScenePiecewiseIntegerBlenderSystem * __thiscall
UMovieScenePiecewiseIntegerBlenderSystem::UMovieScenePiecewiseIntegerBlenderSystem
          (UMovieScenePiecewiseIntegerBlenderSystem *this,FVTableHelper *param_1)

{
  UMovieSceneBlenderSystem::UMovieSceneBlenderSystem((UMovieSceneBlenderSystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieScenePiecewiseIntegerBlenderSystem__6B_;
  (this->AccumulationBuffers).Absolute.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccumulationBuffers).Absolute.ArrayNum = 0;
  (this->AccumulationBuffers).Absolute.ArrayMax = 0;
  (this->AccumulationBuffers).Relative.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccumulationBuffers).Relative.ArrayNum = 0;
  (this->AccumulationBuffers).Relative.ArrayMax = 0;
  (this->AccumulationBuffers).Additive.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccumulationBuffers).Additive.ArrayNum = 0;
  (this->AccumulationBuffers).Additive.ArrayMax = 0;
  (this->AccumulationBuffers).AdditiveFromBase.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AccumulationBuffers).AdditiveFromBase.ArrayNum = 0;
  (this->AccumulationBuffers).AdditiveFromBase.ArrayMax = 0;
  (this->ChannelRelevancyCache).LastSystemVersion = 0;
  return this;
}

// UMovieScenePiecewiseIntegerBlenderSystem @ 14680a9c0

UMovieScenePiecewiseIntegerBlenderSystem * __thiscall
UMovieScenePiecewiseIntegerBlenderSystem::UMovieScenePiecewiseIntegerBlenderSystem
          (UMovieScenePiecewiseIntegerBlenderSystem *this,FObjectInitializer *param_1)

{
  UObject *local_res8 [2];
  UClass *local_res18 [2];
  
  UMovieSceneBlenderSystem::UMovieSceneBlenderSystem((UMovieSceneBlenderSystem *)this,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 8;
  this->_padding_ = (longlong)&___7UMovieScenePiecewiseIntegerBlenderSystem__6B_;
  (this->AccumulationBuffers).Absolute.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccumulationBuffers).Absolute.ArrayNum = 0;
  (this->AccumulationBuffers).Absolute.ArrayMax = 0;
  (this->AccumulationBuffers).Relative.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccumulationBuffers).Relative.ArrayNum = 0;
  (this->AccumulationBuffers).Relative.ArrayMax = 0;
  (this->AccumulationBuffers).Additive.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccumulationBuffers).Additive.ArrayNum = 0;
  (this->AccumulationBuffers).Additive.ArrayMax = 0;
  (this->AccumulationBuffers).AdditiveFromBase.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AccumulationBuffers).AdditiveFromBase.ArrayNum = 0;
  (this->AccumulationBuffers).AdditiveFromBase.ArrayMax = 0;
  (this->ChannelRelevancyCache).LastSystemVersion = 0;
  if ((this->_padding_ & 0x10) != 0) {
    local_res8[0] = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8[0]);
    }
    local_res18[0] = Z_Construct_UClass_UIntegerChannelEvaluatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)local_res8);
    local_res8[0] = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8[0]);
    }
    local_res18[0] = Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)local_res8);
  }
  return this;
}

// ~UMovieScenePiecewiseIntegerBlenderSystem @ 14680f990

void __thiscall
UMovieScenePiecewiseIntegerBlenderSystem::~UMovieScenePiecewiseIntegerBlenderSystem
          (UMovieScenePiecewiseIntegerBlenderSystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieScenePiecewiseIntegerBlenderSystem__6B_;
  pFVar1 = (this->AccumulationBuffers).AdditiveFromBase.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AccumulationBuffers).Additive.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AccumulationBuffers).Relative.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AccumulationBuffers).Absolute.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneBlenderSystem::~UMovieSceneBlenderSystem((UMovieSceneBlenderSystem *)this);
  return;
}

// GetPrivateStaticClass @ 146836660

UClass * __cdecl UMovieScenePiecewiseIntegerBlenderSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePiecewiseIntegerBlenderSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePiecewiseIntegerBlenderSystem",
               &Z_Registration_Info_UClass_UMovieScenePiecewiseIntegerBlenderSystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePiecewiseIntegerBlenderSystem,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieScenePiecewiseIntegerBlenderSystem>,
               InternalVTableHelperCtorCaller<UMovieScenePiecewiseIntegerBlenderSystem>,local_res8,
               UMovieSceneBlenderSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePiecewiseIntegerBlenderSystem.InnerSingleton;
}

// OnLink @ 146842ef0

void __thiscall
UMovieScenePiecewiseIntegerBlenderSystem::OnLink(UMovieScenePiecewiseIntegerBlenderSystem *this)

{
  return;
}

// OnRun @ 146848670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePiecewiseIntegerBlenderSystem::OnRun
          (UMovieScenePiecewiseIntegerBlenderSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  undefined1 *puVar1;
  FSharedReferencer<1> *pFVar2;
  int iVar3;
  ECachedEntityManagerState EVar4;
  FBuiltInComponentTypes *pFVar5;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
  *this_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar6;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar7;
  undefined1 auStackY_2a8 [32];
  FComponentTypeID local_278;
  undefined2 uStack_276;
  FComponentTypeID local_274;
  FComponentTypeID local_272;
  undefined1 local_270 [8];
  initializer_list<UE::MovieScene::FComponentTypeID> local_268;
  undefined8 local_250;
  TStatIdData *pTStack_248;
  byte local_240;
  undefined7 uStack_23f;
  undefined4 uStack_238;
  uint uStack_234;
  TComponentTypeID<FMovieSceneBlendChannelID> local_230;
  TComponentTypeID<__int64> TStack_22e;
  TComponentTypeID<double> TStack_22c;
  TComponentTypeID<double> TStack_22a;
  undefined2 uStack_228;
  undefined6 uStack_226;
  ForElementType<unsigned_int> FStack_220;
  TStatIdData *pTStack_218;
  undefined1 auStack_210 [16];
  undefined1 local_200 [8];
  initializer_list<UE::MovieScene::FComponentTypeID> local_1f8;
  undefined1 local_1e8 [6];
  FComponentAccess aFStack_1e2 [5];
  TStatIdData *local_1d8;
  ulonglong uStack_1d0;
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [120];
  ForAnyElementType local_148;
  TTypeCompatibleBytes<unsigned_int> local_110;
  TTypeCompatibleBytes<unsigned_int> local_10c;
  TTypeCompatibleBytes<unsigned_int> local_d8;
  TTypeCompatibleBytes<unsigned_int> local_d4;
  FSystemTaskPrerequisites local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_200 = (undefined1  [8])param_2;
  UMovieSceneBlenderSystem::CompactBlendChannels((UMovieSceneBlenderSystem *)this);
  if ((int)this->_padding_ != 0) {
    EVar4 = UE::MovieScene::FCachedEntityManagerState::Update
                      (&this->ChannelRelevancyCache,(FEntityManager *)(this->_padding_ + 0x28));
    if (EVar4 == Stale) {
      ReinitializeAccumulationBuffers(this);
    }
    else {
      ZeroAccumulationBuffers(this);
    }
    if (((((this->AccumulationBuffers).Absolute.ArrayNum != 0) ||
         ((this->AccumulationBuffers).Relative.ArrayNum != 0)) ||
        ((this->AccumulationBuffers).Additive.ArrayNum != 0)) ||
       ((this->AccumulationBuffers).AdditiveFromBase.ArrayNum != 0)) {
      pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
      local_1f8._First = (FComponentTypeID *)UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
      local_c8.Prereqs.AllocatorInstance.SecondaryData =
           (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0;
      local_c8.Prereqs.ArrayNum._0_1_ = '\0';
      local_c8.Prereqs.ArrayNum._1_1_ = '\0';
      local_c8.Prereqs.ArrayNum._2_1_ = '\0';
      local_c8.Prereqs.ArrayNum._3_1_ = '\0';
      local_c8.Prereqs.ArrayMax._0_1_ = '\x04';
      local_c8.Prereqs.ArrayMax._1_1_ = '\0';
      local_c8.Prereqs.ArrayMax._2_1_ = '\0';
      local_c8.Prereqs.ArrayMax._3_1_ = '\0';
      local_c8.AllTasks.AllocatorInstance.SecondaryData =
           (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_c8.AllTasks.ArrayNum._0_1_ = '\0';
      local_c8.AllTasks.ArrayNum._1_1_ = '\0';
      local_c8.AllTasks.ArrayNum._2_1_ = '\0';
      local_c8.AllTasks.ArrayNum._3_1_ = '\0';
      local_c8.AllTasks.ArrayMax._0_1_ = '\x04';
      local_c8.AllTasks.ArrayMax._1_1_ = '\0';
      local_c8.AllTasks.ArrayMax._2_1_ = '\0';
      local_c8.AllTasks.ArrayMax._3_1_ = '\0';
      if ((this->AccumulationBuffers).Absolute.ArrayNum != 0) {
        pTStack_248 = &TStatId::TStatId_NAME_None;
        TStack_22c = pFVar5->WeightAndEasingResult;
        local_230 = pFVar5->BlendChannelInput;
        TStack_22e = pFVar5->IntegerResult;
        TStack_22a = (TComponentTypeID<double>)0x7fff;
        local_250 = 0;
        uStack_238 = 0x6ff;
        uStack_234 = uStack_234 & 0xffffff00;
        pTStack_218 = (TStatIdData *)(CONCAT71(uStack_23f,local_240) & 0xffffffffffffffe0);
        auStack_210._4_4_ = uStack_234;
        auStack_210._0_4_ = 0x6ff;
        _local_278 = CONCAT22(*(undefined2 *)((longlong)&this->_padding_ + 6),
                              (pFVar5->Tags).AbsoluteBlend.Value);
        uStack_228 = 0;
        uStack_226 = 0;
        FStack_220 = (ForElementType<unsigned_int>)&TStatId::TStatId_NAME_None;
        local_1c0[0x30] = '\0';
        local_1c0[0x31] = '\0';
        local_1c0[0x32] = '\0';
        local_1c0[0x33] = '\0';
        local_1e8._2_2_ = TStack_22e;
        local_1e8._0_2_ = local_230;
        local_1e8._4_2_ = TStack_22c;
        unique0x10000987 = 0x7fff;
        aFStack_1e2._2_8_ = 0;
        local_1c0[0x34] = 0x80;
        local_1c0[0x35] = '\x01';
        local_1c0[0x36] = '\0';
        local_1c0[0x37] = '\0';
        local_1c0[0x68] = '\0';
        local_1c0[0x69] = '\0';
        local_1c0[0x6a] = '\0';
        local_1c0[0x6b] = '\0';
        local_1c0[0x6c] = 0x80;
        local_1c0[0x6d] = '\x01';
        local_1c0[0x6e] = '\0';
        local_1c0[0x6f] = '\0';
        local_1d8 = &TStatId::TStatId_NAME_None;
        local_1c0._112_8_ = (FScriptContainerElement *)0x0;
        local_148.Data = (FScriptContainerElement *)0x0;
        local_110.Pad[0] = '\0';
        local_110.Pad[1] = '\0';
        local_110.Pad[2] = '\0';
        local_110.Pad[3] = '\0';
        local_10c.Pad[0] = 0x80;
        local_10c.Pad[1] = '\x01';
        local_10c.Pad[2] = '\0';
        local_10c.Pad[3] = '\0';
        local_d8.Pad[0] = '\0';
        local_d8.Pad[1] = '\0';
        local_d8.Pad[2] = '\0';
        local_d8.Pad[3] = '\0';
        local_d4.Pad[0] = 0x80;
        local_d4.Pad[1] = '\x01';
        local_d4.Pad[2] = '\0';
        local_d4.Pad[3] = '\0';
        local_240 = local_240 & 0xe0;
        uStack_1d0 = (ulonglong)pTStack_218;
        local_1c8 = (undefined1  [8])auStack_210._0_8_;
        UE::MovieScene::AddAccessorToFilter
                  ((FComponentAccess *)local_1e8,(FEntityComponentFilter *)local_1c0);
        UE::MovieScene::AddAccessorToFilter
                  ((FComponentAccess *)(local_1e8 + 2),(FEntityComponentFilter *)local_1c0);
        local_268._First = &local_278;
        local_268._Last = &local_274;
        UE::MovieScene::FComponentMask::SetAll((FComponentMask *)local_1c0,&local_268);
        local_274.Value = (pFVar5->Tags).Ignored.Value;
        local_268._First = &local_274;
        local_268._Last = &local_272;
        UE::MovieScene::FComponentMask::SetAll((FComponentMask *)(local_1c0 + 0x38),&local_268);
        local_268._First = (FComponentTypeID *)&this->AccumulationBuffers;
        UE::MovieScene::
        TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
        ::
        Dispatch_PerAllocation<UE::MovieScene::FIntegerAccumulationTask,TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_>_*>
                  ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
                    *)local_1e8,(FEntityManager *)local_270,
                   (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),
                   (FSystemSubsequentTasks *)param_1,
                   (TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_> **)0x0);
        if ((FScriptContainerElement *)local_1c0._112_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1c0._112_8_);
        }
        if ((local_270 != (undefined1  [8])0x0) &&
           (UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
                      (&local_c8,(FComponentTypeID)0xffff,(TRefCountPtr<FBaseGraphTask> *)local_270)
           , local_270 != (undefined1  [8])0x0)) {
          LOCK();
          puVar1 = (undefined1 *)((longlong)local_270 + 0x30);
          iVar3 = *(int *)puVar1;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          UNLOCK();
          if ((iVar3 == 1) && (local_270 != (undefined1  [8])0x0)) {
            (*(code *)**(undefined8 **)local_270)(local_270,1);
          }
        }
      }
      if ((this->AccumulationBuffers).Relative.ArrayNum != 0) {
        pTStack_248 = &TStatId::TStatId_NAME_None;
        TStack_22c = pFVar5->WeightAndEasingResult;
        local_230 = pFVar5->BlendChannelInput;
        TStack_22e = pFVar5->IntegerResult;
        TStack_22a = (TComponentTypeID<double>)0x7fff;
        local_250 = 0;
        uStack_238 = 0x6ff;
        uStack_234 = uStack_234 & 0xffffff00;
        pTStack_218 = (TStatIdData *)(CONCAT71(uStack_23f,local_240) & 0xffffffffffffffe0);
        auStack_210._4_4_ = uStack_234;
        auStack_210._0_4_ = 0x6ff;
        _local_278 = CONCAT22(*(undefined2 *)((longlong)&this->_padding_ + 6),
                              (pFVar5->Tags).RelativeBlend.Value);
        uStack_228 = 0;
        uStack_226 = 0;
        FStack_220 = (ForElementType<unsigned_int>)&TStatId::TStatId_NAME_None;
        local_1c0[0x30] = '\0';
        local_1c0[0x31] = '\0';
        local_1c0[0x32] = '\0';
        local_1c0[0x33] = '\0';
        local_1e8._2_2_ = TStack_22e;
        local_1e8._0_2_ = local_230;
        local_1e8._4_2_ = TStack_22c;
        unique0x10000999 = 0x7fff;
        aFStack_1e2._2_8_ = 0;
        local_1c0[0x34] = 0x80;
        local_1c0[0x35] = '\x01';
        local_1c0[0x36] = '\0';
        local_1c0[0x37] = '\0';
        local_1c0[0x68] = '\0';
        local_1c0[0x69] = '\0';
        local_1c0[0x6a] = '\0';
        local_1c0[0x6b] = '\0';
        local_1c0[0x6c] = 0x80;
        local_1c0[0x6d] = '\x01';
        local_1c0[0x6e] = '\0';
        local_1c0[0x6f] = '\0';
        local_1d8 = &TStatId::TStatId_NAME_None;
        local_1c0._112_8_ = (FScriptContainerElement *)0x0;
        local_148.Data = (FScriptContainerElement *)0x0;
        local_110.Pad[0] = '\0';
        local_110.Pad[1] = '\0';
        local_110.Pad[2] = '\0';
        local_110.Pad[3] = '\0';
        local_10c.Pad[0] = 0x80;
        local_10c.Pad[1] = '\x01';
        local_10c.Pad[2] = '\0';
        local_10c.Pad[3] = '\0';
        local_d8.Pad[0] = '\0';
        local_d8.Pad[1] = '\0';
        local_d8.Pad[2] = '\0';
        local_d8.Pad[3] = '\0';
        local_d4.Pad[0] = 0x80;
        local_d4.Pad[1] = '\x01';
        local_d4.Pad[2] = '\0';
        local_d4.Pad[3] = '\0';
        local_240 = local_240 & 0xe0;
        uStack_1d0 = (ulonglong)pTStack_218;
        local_1c8 = (undefined1  [8])auStack_210._0_8_;
        UE::MovieScene::AddAccessorToFilter
                  ((FComponentAccess *)local_1e8,(FEntityComponentFilter *)local_1c0);
        UE::MovieScene::AddAccessorToFilter
                  ((FComponentAccess *)(local_1e8 + 2),(FEntityComponentFilter *)local_1c0);
        local_268._First = &local_278;
        local_268._Last = &local_274;
        UE::MovieScene::FComponentMask::SetAll((FComponentMask *)local_1c0,&local_268);
        local_274.Value = (pFVar5->Tags).Ignored.Value;
        local_268._First = &local_274;
        local_268._Last = &local_272;
        UE::MovieScene::FComponentMask::SetAll((FComponentMask *)(local_1c0 + 0x38),&local_268);
        local_268._First = (FComponentTypeID *)&(this->AccumulationBuffers).Relative;
        UE::MovieScene::
        TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
        ::
        Dispatch_PerAllocation<UE::MovieScene::FIntegerAccumulationTask,TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_>_*>
                  ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
                    *)local_1e8,(FEntityManager *)local_270,
                   (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),
                   (FSystemSubsequentTasks *)param_1,
                   (TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_> **)0x0);
        if ((FScriptContainerElement *)local_1c0._112_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1c0._112_8_);
        }
        if ((local_270 != (undefined1  [8])0x0) &&
           (UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
                      (&local_c8,(FComponentTypeID)0xffff,(TRefCountPtr<FBaseGraphTask> *)local_270)
           , local_270 != (undefined1  [8])0x0)) {
          LOCK();
          puVar1 = (undefined1 *)((longlong)local_270 + 0x30);
          iVar3 = *(int *)puVar1;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          UNLOCK();
          if ((iVar3 == 1) && (local_270 != (undefined1  [8])0x0)) {
            (*(code *)**(undefined8 **)local_270)(local_270,1);
          }
        }
      }
      if ((this->AccumulationBuffers).Additive.ArrayNum != 0) {
        pTStack_248 = &TStatId::TStatId_NAME_None;
        TStack_22c = pFVar5->WeightAndEasingResult;
        local_230 = pFVar5->BlendChannelInput;
        TStack_22e = pFVar5->IntegerResult;
        TStack_22a = (TComponentTypeID<double>)0x7fff;
        local_250 = 0;
        uStack_238 = 0x6ff;
        uStack_234 = uStack_234 & 0xffffff00;
        pTStack_218 = (TStatIdData *)(CONCAT71(uStack_23f,local_240) & 0xffffffffffffffe0);
        auStack_210._4_4_ = uStack_234;
        auStack_210._0_4_ = 0x6ff;
        _local_278 = CONCAT22(*(undefined2 *)((longlong)&this->_padding_ + 6),
                              (pFVar5->Tags).AdditiveBlend.Value);
        uStack_228 = 0;
        uStack_226 = 0;
        FStack_220 = (ForElementType<unsigned_int>)&TStatId::TStatId_NAME_None;
        local_1c0[0x30] = '\0';
        local_1c0[0x31] = '\0';
        local_1c0[0x32] = '\0';
        local_1c0[0x33] = '\0';
        local_1e8._2_2_ = TStack_22e;
        local_1e8._0_2_ = local_230;
        local_1e8._4_2_ = TStack_22c;
        unique0x100009ab = 0x7fff;
        aFStack_1e2._2_8_ = 0;
        local_1c0[0x34] = 0x80;
        local_1c0[0x35] = '\x01';
        local_1c0[0x36] = '\0';
        local_1c0[0x37] = '\0';
        local_1c0[0x68] = '\0';
        local_1c0[0x69] = '\0';
        local_1c0[0x6a] = '\0';
        local_1c0[0x6b] = '\0';
        local_1c0[0x6c] = 0x80;
        local_1c0[0x6d] = '\x01';
        local_1c0[0x6e] = '\0';
        local_1c0[0x6f] = '\0';
        local_1d8 = &TStatId::TStatId_NAME_None;
        local_1c0._112_8_ = (FScriptContainerElement *)0x0;
        local_148.Data = (FScriptContainerElement *)0x0;
        local_110.Pad[0] = '\0';
        local_110.Pad[1] = '\0';
        local_110.Pad[2] = '\0';
        local_110.Pad[3] = '\0';
        local_10c.Pad[0] = 0x80;
        local_10c.Pad[1] = '\x01';
        local_10c.Pad[2] = '\0';
        local_10c.Pad[3] = '\0';
        local_d8.Pad[0] = '\0';
        local_d8.Pad[1] = '\0';
        local_d8.Pad[2] = '\0';
        local_d8.Pad[3] = '\0';
        local_d4.Pad[0] = 0x80;
        local_d4.Pad[1] = '\x01';
        local_d4.Pad[2] = '\0';
        local_d4.Pad[3] = '\0';
        local_240 = local_240 & 0xe0;
        uStack_1d0 = (ulonglong)pTStack_218;
        local_1c8 = (undefined1  [8])auStack_210._0_8_;
        UE::MovieScene::AddAccessorToFilter
                  ((FComponentAccess *)local_1e8,(FEntityComponentFilter *)local_1c0);
        UE::MovieScene::AddAccessorToFilter
                  ((FComponentAccess *)(local_1e8 + 2),(FEntityComponentFilter *)local_1c0);
        local_268._First = &local_278;
        local_268._Last = &local_274;
        UE::MovieScene::FComponentMask::SetAll((FComponentMask *)local_1c0,&local_268);
        local_274.Value = (pFVar5->Tags).Ignored.Value;
        local_268._First = &local_274;
        local_268._Last = &local_272;
        UE::MovieScene::FComponentMask::SetAll((FComponentMask *)(local_1c0 + 0x38),&local_268);
        local_268._First = (FComponentTypeID *)&(this->AccumulationBuffers).Additive;
        UE::MovieScene::
        TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
        ::
        Dispatch_PerAllocation<UE::MovieScene::FIntegerAccumulationTask,TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_>_*>
                  ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
                    *)local_1e8,(FEntityManager *)local_270,
                   (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),
                   (FSystemSubsequentTasks *)param_1,
                   (TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_> **)0x0);
        if ((FScriptContainerElement *)local_1c0._112_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1c0._112_8_);
        }
        if ((local_270 != (undefined1  [8])0x0) &&
           (UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
                      (&local_c8,(FComponentTypeID)0xffff,(TRefCountPtr<FBaseGraphTask> *)local_270)
           , local_270 != (undefined1  [8])0x0)) {
          LOCK();
          puVar1 = (undefined1 *)((longlong)local_270 + 0x30);
          iVar3 = *(int *)puVar1;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          UNLOCK();
          if ((iVar3 == 1) && (local_270 != (undefined1  [8])0x0)) {
            (*(code *)**(undefined8 **)local_270)(local_270,1);
          }
        }
      }
      if ((this->AccumulationBuffers).AdditiveFromBase.ArrayNum != 0) {
        pTStack_248 = &TStatId::TStatId_NAME_None;
        TStack_22a = pFVar5->WeightAndEasingResult;
        local_250 = 0;
        local_230 = pFVar5->BlendChannelInput;
        TStack_22e = pFVar5->IntegerResult;
        TStack_22c = *(TComponentTypeID<double> *)&pFVar5->BaseInteger;
        uStack_228 = 0x7fff;
        _local_278 = CONCAT22(*(undefined2 *)((longlong)&this->_padding_ + 6),
                              (pFVar5->Tags).AdditiveFromBaseBlend.Value);
        local_268._First = &local_278;
        local_268._Last = &local_274;
        uStack_238 = 0x6ff;
        uStack_234 = uStack_234 & 0xffffff00;
        auStack_210._0_8_ = CONCAT71(uStack_23f,local_240) & 0xffffffffffffffe0;
        auStack_210._12_4_ = uStack_234;
        auStack_210._8_4_ = 0x6ff;
        FStack_220 = (ForElementType<unsigned_int>)0x0;
        pTStack_218 = &TStatId::TStatId_NAME_None;
        local_240 = local_240 & 0xe0;
        this_00 = UE::MovieScene::
                  TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
                  ::FilterAll((TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
                               *)&local_230,
                              (TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
                               *)local_1e8,&local_268);
        local_274.Value = (pFVar5->Tags).Ignored.Value;
        local_268._First = &local_274;
        local_268._Last = &local_272;
        UE::MovieScene::FComponentMask::SetAll(&(this_00->Filter).NoneMask,&local_268);
        local_268._First = (FComponentTypeID *)&(this->AccumulationBuffers).AdditiveFromBase;
        UE::MovieScene::
        TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
        ::
        Dispatch_PerAllocation<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask,TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_>_*>
                  (this_00,(FEntityManager *)local_270,
                   (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),
                   (FSystemSubsequentTasks *)param_1,
                   (TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_> **)0x0);
        if (local_148.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data);
        }
        if ((local_270 != (undefined1  [8])0x0) &&
           (UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
                      (&local_c8,(FComponentTypeID)0xffff,(TRefCountPtr<FBaseGraphTask> *)local_270)
           , local_270 != (undefined1  [8])0x0)) {
          LOCK();
          puVar1 = (undefined1 *)((longlong)local_270 + 0x30);
          iVar3 = *(int *)puVar1;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          UNLOCK();
          if ((iVar3 == 1) && (local_270 != (undefined1  [8])0x0)) {
            (*(code *)**(undefined8 **)local_270)(local_270,1);
          }
        }
      }
      pTStack_248 = &TStatId::TStatId_NAME_None;
      local_250 = 0;
      uStack_234 = uStack_234 & 0xffffff00;
      TStack_22e = ((TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
                     *)((longlong)local_1f8._First + 0x48))->InitialValue;
      _local_278 = CONCAT22(0x7fff,TStack_22e);
      local_230 = pFVar5->BlendChannelOutput;
      TStack_22c = (TComponentTypeID<double>)0x7fff;
      TStack_22a = *(TComponentTypeID<double> *)&pFVar5->IntegerResult;
      local_274.Value = *(ushort *)((longlong)&this->_padding_ + 6);
      uStack_228 = 0;
      uStack_226 = 0;
      FStack_220 = (ForElementType<unsigned_int>)&TStatId::TStatId_NAME_None;
      local_1c0[0x30] = '\0';
      local_1c0[0x31] = '\0';
      local_1c0[0x32] = '\0';
      local_1c0[0x33] = '\0';
      local_1e8._2_2_ = TStack_22e;
      local_1e8._0_2_ = local_230;
      local_1e8._4_2_ = 0x7fff;
      unique0x100009bd = TStack_22a;
      aFStack_1e2._2_8_ = 0;
      local_1c0[0x68] = '\0';
      local_1c0[0x69] = '\0';
      local_1c0[0x6a] = '\0';
      local_1c0[0x6b] = '\0';
      local_1c0._112_8_ = (FScriptContainerElement *)0x0;
      local_148.Data = (FScriptContainerElement *)0x0;
      local_110.Pad[0] = '\0';
      local_110.Pad[1] = '\0';
      local_110.Pad[2] = '\0';
      local_110.Pad[3] = '\0';
      local_d8.Pad[0] = '\0';
      local_d8.Pad[1] = '\0';
      local_d8.Pad[2] = '\0';
      local_d8.Pad[3] = '\0';
      uStack_238 = 0x6ff;
      pTStack_218 = (TStatIdData *)(CONCAT71(uStack_23f,local_240) & 0xffffffffffffffe0);
      auStack_210._4_4_ = uStack_234;
      auStack_210._0_4_ = 0x6ff;
      local_1c0[0x34] = 0x80;
      local_1c0[0x35] = '\x01';
      local_1c0[0x36] = '\0';
      local_1c0[0x37] = '\0';
      local_1c0[0x6c] = 0x80;
      local_1c0[0x6d] = '\x01';
      local_1c0[0x6e] = '\0';
      local_1c0[0x6f] = '\0';
      local_1d8 = &TStatId::TStatId_NAME_None;
      local_10c.Pad[0] = 0x80;
      local_10c.Pad[1] = '\x01';
      local_10c.Pad[2] = '\0';
      local_10c.Pad[3] = '\0';
      local_d4.Pad[0] = 0x80;
      local_d4.Pad[1] = '\x01';
      local_d4.Pad[2] = '\0';
      local_d4.Pad[3] = '\0';
      local_240 = local_240 & 0xe0;
      uStack_1d0 = (ulonglong)pTStack_218;
      local_1c8 = (undefined1  [8])auStack_210._0_8_;
      UE::MovieScene::AddAccessorToFilter
                ((FComponentAccess *)local_1e8,(FEntityComponentFilter *)local_1c0);
      UE::MovieScene::AddAccessorToFilter
                ((FComponentAccess *)(local_1e8 + 6),(FEntityComponentFilter *)local_1c0);
      local_1f8._First = &local_274;
      local_1f8._Last = &local_272;
      UE::MovieScene::FComponentMask::SetAll((FComponentMask *)local_1c0,&local_1f8);
      local_1f8._First = (FComponentTypeID *)&this->AccumulationBuffers;
      UE::MovieScene::
      TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
      ::
      Dispatch_PerAllocation<UE::MovieScene::FIntegerCombineBlends,UE::MovieScene::FIntegerAccumulationBuffers_*>
                ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
                  *)local_1e8,(FEntityManager *)local_200,
                 (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),
                 (FSystemSubsequentTasks *)&local_c8,(FIntegerAccumulationBuffers **)local_200);
      if (local_200 != (undefined1  [8])0x0) {
        LOCK();
        pFVar2 = &(((FSystemSubsequentTasks *)((longlong)local_200 + 0x28))->Subsequents).
                  SharedReferenceCount;
        iVar3 = *(int *)&pFVar2->ReferenceController;
        *(int *)&pFVar2->ReferenceController = *(int *)&pFVar2->ReferenceController + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(((TSharedPtr<UE::MovieScene::FSystemTaskPrerequisites,1> *)local_200)->Object
                      ->Prereqs).AllocatorInstance.InlineData)(local_200,1);
        }
      }
      if ((FScriptContainerElement *)local_1c0._112_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1c0._112_8_);
      }
      FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_c8.AllTasks;
      if (local_c8.AllTasks.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar6 = local_c8.AllTasks.AllocatorInstance.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar6,local_c8.AllTasks.ArrayNum);
      if (local_c8.AllTasks.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_c8.AllTasks.AllocatorInstance.SecondaryData);
      }
      FVar7 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)&local_c8;
      if (local_c8.Prereqs.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
        FVar7 = local_c8.Prereqs.AllocatorInstance.SecondaryData;
      }
      DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
                ((FPrerequisite *)FVar7,local_c8.Prereqs.ArrayNum);
      if (local_c8.Prereqs.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
        FMemory::Free((void *)local_c8.Prereqs.AllocatorInstance.SecondaryData);
      }
    }
  }
  return;
}

// OnSchedulePersistentTasks @ 14684eb50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePiecewiseIntegerBlenderSystem::OnSchedulePersistentTasks
          (UMovieScenePiecewiseIntegerBlenderSystem *this,IEntitySystemScheduler *param_1)

{
  code *pcVar1;
  bool bVar2;
  FBuiltInComponentTypes *pFVar3;
  FMovieSceneTracksComponentTypes *pFVar4;
  ForElementType<unsigned_int> FVar5;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
  *this_00;
  undefined1 auStackY_9d8 [32];
  FComponentTypeID local_998;
  FComponentTypeID local_996;
  FComponentTypeID local_994;
  FComponentTypeID local_992;
  FComponentTypeID local_990;
  FScriptContainerElement local_98e [2];
  FComponentTypeID local_98c;
  FComponentTypeID local_98a;
  FComponentTypeID local_988;
  FComponentTypeID local_986;
  FTaskID local_984;
  FTaskID local_980;
  FComponentTypeID local_97c;
  undefined2 local_97a;
  FComponentTypeID local_978;
  undefined2 local_976;
  undefined1 local_974 [4];
  FComponentTypeID local_970 [2];
  undefined4 local_96c;
  undefined4 local_968;
  TComponentTypeID<double> local_964;
  undefined2 uStack_962;
  TComponentTypeID<double> local_960;
  undefined2 uStack_95e;
  TComponentTypeID<__int64> local_95c;
  undefined2 uStack_95a;
  FTaskID local_958;
  FTaskID local_954;
  FTaskID local_950;
  FTaskID local_94c;
  FTaskID local_948;
  FMovieSceneTracksComponentTypes *local_940;
  FIntegerAccumulationBuffers *local_938;
  TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_> *local_930;
  TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_> *local_928;
  TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_> *local_920;
  FIntegerAccumulationBuffers *local_918;
  undefined1 local_910 [16];
  undefined1 local_900 [16];
  ulonglong local_8f0;
  TSharedPtr<UE::MovieScene::ITaskContext,1> local_8e8;
  byte local_8d8;
  undefined1 local_8d0 [16];
  ulonglong local_8c0;
  undefined1 local_8b8 [16];
  ulonglong local_8a8;
  undefined1 local_8a0 [16];
  ulonglong local_890;
  undefined1 local_888 [16];
  ulonglong local_878;
  undefined8 local_868;
  TStatIdData *pTStack_860;
  byte local_858;
  undefined7 uStack_857;
  undefined4 uStack_850;
  uint uStack_84c;
  undefined8 local_840;
  TStatIdData *pTStack_838;
  byte local_830;
  undefined7 uStack_82f;
  undefined1 auStack_828 [32];
  byte local_808;
  undefined7 uStack_807;
  undefined1 auStack_800 [24];
  TStatIdData *pTStack_7e8;
  byte local_7e0;
  TTypeCompatibleBytes<unsigned_int> TStack_7df;
  TTypeCompatibleBytes<unsigned_int> TStack_7d8;
  TTypeCompatibleBytes<unsigned_int> TStack_7d4;
  undefined8 local_7c8;
  TStatIdData *pTStack_7c0;
  byte local_7b8;
  undefined7 uStack_7b7;
  TTypeCompatibleBytes<unsigned_int> TStack_7b0;
  TTypeCompatibleBytes<unsigned_int> TStack_7ac;
  initializer_list<UE::MovieScene::FComponentTypeID> local_7a8;
  TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_> *local_798;
  uchar local_790;
  initializer_list<UE::MovieScene::FComponentTypeID> local_788;
  FIntegerAccumulationBuffers *local_778;
  uchar local_770;
  code *local_768;
  uchar local_760;
  initializer_list<UE::MovieScene::FComponentTypeID> local_758;
  initializer_list<UE::MovieScene::FComponentTypeID> local_748;
  TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_> *local_738;
  uchar local_730;
  initializer_list<UE::MovieScene::FComponentTypeID> local_728;
  initializer_list<UE::MovieScene::FComponentTypeID> local_718;
  TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_> *local_708;
  undefined1 local_700;
  initializer_list<UE::MovieScene::FComponentTypeID> local_6f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_6e8;
  TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_> *local_6d8;
  undefined1 local_6d0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_6c8;
  TComponentTypeID<FMovieSceneBlendChannelID> local_6b8;
  TComponentTypeID<__int64> TStack_6b6;
  FEntitySystemMaybeAtomicInt32 FStack_6b4;
  undefined8 uStack_6b0;
  TStatIdData *pTStack_6a8;
  ulonglong uStack_6a0;
  undefined8 uStack_698;
  TComponentTypeID<FMovieSceneBlendChannelID> local_690;
  TComponentTypeID<__int64> TStack_68e;
  int iStack_68c;
  undefined8 uStack_688;
  TStatIdData *pTStack_680;
  ulonglong uStack_678;
  undefined8 uStack_670;
  TComponentTypeID<FMovieSceneBlendChannelID> local_668;
  TComponentTypeID<__int64> TStack_666;
  undefined1 auStack_664 [20];
  ulonglong uStack_650;
  undefined8 uStack_648;
  TComponentTypeID<FMovieSceneBlendChannelID> local_640;
  undefined4 uStack_63e;
  TComponentTypeID<__int64> TStack_63a;
  undefined8 uStack_638;
  TStatIdData *pTStack_630;
  ulonglong uStack_628;
  undefined8 uStack_620;
  TComponentTypeID<FMovieSceneBlendChannelID> local_618;
  TComponentTypeID<__int64> local_616;
  TComponentTypeID<__int64> local_614;
  undefined4 local_612;
  undefined8 local_608;
  TStatIdData *pTStack_600;
  ulonglong local_5f8;
  undefined8 uStack_5f0;
  undefined1 local_5e8 [8];
  undefined8 uStack_5e0;
  TStatIdData *local_5d8;
  ulonglong uStack_5d0;
  undefined8 local_5c8;
  FEntityComponentFilter local_5c0;
  int local_510;
  int local_50c;
  int local_4d8;
  int local_4d4;
  undefined1 local_4c8 [8];
  undefined8 uStack_4c0;
  TStatIdData *local_4b8;
  ulonglong uStack_4b0;
  undefined8 local_4a8;
  FEntityComponentFilter local_4a0;
  int local_3f0;
  int local_3ec;
  int local_3b8;
  int local_3b4;
  undefined1 local_3a8 [8];
  undefined8 uStack_3a0;
  TStatIdData *local_398;
  ulonglong uStack_390;
  undefined8 local_388;
  FEntityComponentFilter local_380;
  int local_2d0;
  int local_2cc;
  int local_298;
  int local_294;
  undefined1 local_288 [8];
  undefined8 uStack_280;
  TStatIdData *local_278;
  ulonglong uStack_270;
  undefined8 local_268;
  FEntityComponentFilter local_260;
  int local_1b0;
  int local_1ac;
  int local_178;
  int local_174;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
  local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_9d8;
  UMovieSceneBlenderSystem::CompactBlendChannels((UMovieSceneBlenderSystem *)this);
  if ((int)this->_padding_ != 0) {
    ReinitializeAccumulationBuffers(this);
    if (((((this->AccumulationBuffers).Absolute.ArrayNum != 0) ||
         ((this->AccumulationBuffers).Relative.ArrayNum != 0)) ||
        ((this->AccumulationBuffers).Additive.ArrayNum != 0)) ||
       ((this->AccumulationBuffers).AdditiveFromBase.ArrayNum != 0)) {
      pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
      pFVar4 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
      local_8d8 = local_8d8 & 0xe0;
      local_760 = '\0';
      local_8e8.Object = (ITaskContext *)0x15133c7c0;
      local_8e8.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)&TStatId::TStatId_NAME_None;
      local_768 = UE::MovieScene::
                  TMemberFunctionTaskWrapper<UMovieScenePiecewiseIntegerBlenderSystem>::Execute;
      local_940 = pFVar4;
      FVar5 = (ForElementType<unsigned_int>)::operator_new(0x28);
      if (FVar5 == (ForElementType<unsigned_int>)0x0) {
        FVar5 = (ForElementType<unsigned_int>)0x0;
        local_910._0_8_ = ___xmm_00000000000000000000000000000010;
        local_910._8_8_ = _UNK_150651568;
      }
      else {
        *(atomic<int> *)((longlong)FVar5 + 8) = (atomic<int>)0x1;
        *(atomic<int> *)((longlong)FVar5 + 0xc) = (atomic<int>)0x1;
        *(undefined ***)FVar5 =
             &
             ___7__TIntrusiveReferenceController_U__TMemberFunctionTaskWrapper_VUMovieScenePiecewiseIntegerBlenderSystem___MovieScene_UE___00_SharedPointerInternals__6B_
        ;
        ((TReferenceControllerBase<1> *)((longlong)FVar5 + 0x10))->_padding_ =
             (longlong)
             &
             ___7__TMemberFunctionTaskWrapper_VUMovieScenePiecewiseIntegerBlenderSystem___MovieScene_UE__6B_
        ;
        ((TReferenceControllerBase<1> *)((longlong)FVar5 + 0x20))->_padding_ =
             (longlong)ZeroAccumulationBuffers;
        *(UMovieScenePiecewiseIntegerBlenderSystem **)((longlong)FVar5 + 0x18) = this;
        if (((TReferenceControllerBase<1> *)((longlong)FVar5 + 0x10) ==
             (TReferenceControllerBase<1> *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        LOCK();
        *(atomic<int> *)((longlong)FVar5 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)FVar5 + 8) + 1);
        UNLOCK();
        pFVar4 = local_940;
        local_910._0_8_ = (TReferenceControllerBase<1> *)((longlong)FVar5 + 0x10);
        local_910._8_8_ = FVar5;
      }
      UE::MovieScene::IEntitySystemScheduler::AddTask
                (param_1,(FTaskParams *)&local_980,&local_8e8,
                 (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                  *)local_910);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar5);
      UE::MovieScene::IEntitySystemScheduler::AddNullTask(param_1);
      if ((this->AccumulationBuffers).Absolute.ArrayNum != 0) {
        pTStack_860 = &TStatId::TStatId_NAME_None;
        local_6b8 = pFVar3->BlendChannelInput;
        TStack_6b6 = pFVar3->IntegerResult;
        local_96c = CONCAT22(0x7fff,pFVar3->WeightAndEasingResult);
        FStack_6b4.Payload = local_96c;
        local_97c.Value = (pFVar3->Tags).AbsoluteBlend.Value;
        local_97a = *(undefined2 *)((longlong)&this->_padding_ + 6);
        local_868 = 0;
        uStack_850 = 0x6ff;
        uStack_84c = uStack_84c & 0xffffff00;
        uStack_6a0 = CONCAT71(uStack_857,local_858) & 0xffffffffffffffe0;
        uStack_698._4_4_ = uStack_84c;
        uStack_698._0_4_ = 0x6ff;
        uStack_6b0._0_1_ = false;
        uStack_6b0._1_1_ = false;
        uStack_6b0._2_2_ = 0;
        uStack_6b0._4_4_ = 0;
        pTStack_6a8 = &TStatId::TStatId_NAME_None;
        local_5c0.AllMask.Bits.NumBits = 0;
        local_5e8._2_2_ = TStack_6b6;
        local_5e8._0_2_ = local_6b8;
        local_5e8._4_4_ = local_96c;
        local_5c0.AllMask.Bits.MaxBits = 0x180;
        local_5c0.NoneMask.Bits.NumBits = 0;
        local_5c0.NoneMask.Bits.MaxBits = 0x180;
        uStack_5e0 = 0;
        local_5d8 = &TStatId::TStatId_NAME_None;
        local_5c0.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5c0.ComplexMasks.ArrayNum = 0;
        local_5c0.ComplexMasks.ArrayMax = 0;
        local_510 = 0;
        local_50c = 0x180;
        local_4d8 = 0;
        local_4d4 = 0x180;
        local_858 = local_858 & 0xe0;
        uStack_5d0 = uStack_6a0;
        local_5c8 = uStack_698;
        UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_5e8,&local_5c0);
        UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_5e8 + 2),&local_5c0);
        local_758._First = &local_97c;
        local_758._Last = &local_978;
        UE::MovieScene::FComponentMask::SetAll(&local_5c0.AllMask,&local_758);
        local_998.Value = (pFVar3->Tags).Ignored.Value;
        local_748._First = &local_998;
        local_748._Last = &local_996;
        UE::MovieScene::FComponentMask::SetAll(&local_5c0.NoneMask,&local_748);
        local_8c0 = uStack_5d0 | 2;
        local_738 = (TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_> *)
                    UE::MovieScene::
                    TScheduledEntityTask<UE::MovieScene::FIntegerAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
                    ::ScheduledRun_PerAllocation;
        local_8d0._8_8_ = local_5d8;
        local_8d0._0_8_ = L"struct UE::MovieScene::FIntegerAccumulationTask";
        local_730 = '\x03';
        local_938 = &this->AccumulationBuffers;
        UE::MovieScene::
        TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
        ::
        ScheduleImpl<UE::MovieScene::FIntegerAccumulationTask,TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_>_*>
                  ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
                    *)local_5e8,(FEntityManager *)&local_958,
                   (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
                   (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                    *)local_8d0,&local_738);
        if (local_5c0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5c0.ComplexMasks.AllocatorInstance.Data);
        }
        UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_980,local_958);
        UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_958,local_984);
      }
      if ((this->AccumulationBuffers).Relative.ArrayNum != 0) {
        pTStack_838 = &TStatId::TStatId_NAME_None;
        local_690 = pFVar3->BlendChannelInput;
        TStack_68e = pFVar3->IntegerResult;
        local_968 = CONCAT22(0x7fff,pFVar3->WeightAndEasingResult);
        iStack_68c = local_968;
        local_978.Value = (pFVar3->Tags).RelativeBlend.Value;
        local_976 = *(undefined2 *)((longlong)&this->_padding_ + 6);
        local_840 = 0;
        auStack_828._0_4_ = 0x6ff;
        auStack_828._4_4_ = auStack_828._4_4_ & 0xffffff00;
        uStack_678 = CONCAT71(uStack_82f,local_830) & 0xffffffffffffffe0;
        uStack_670._4_4_ = auStack_828._4_4_;
        uStack_670._0_4_ = 0x6ff;
        uStack_688 = 0;
        pTStack_680 = &TStatId::TStatId_NAME_None;
        local_4a0.AllMask.Bits.NumBits = 0;
        local_4c8._2_2_ = TStack_68e;
        local_4c8._0_2_ = local_690;
        local_4c8._4_4_ = local_968;
        local_4a0.AllMask.Bits.MaxBits = 0x180;
        local_4a0.NoneMask.Bits.NumBits = 0;
        local_4a0.NoneMask.Bits.MaxBits = 0x180;
        uStack_4c0 = 0;
        local_4b8 = &TStatId::TStatId_NAME_None;
        local_4a0.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4a0.ComplexMasks.ArrayNum = 0;
        local_4a0.ComplexMasks.ArrayMax = 0;
        local_3f0 = 0;
        local_3ec = 0x180;
        local_3b8 = 0;
        local_3b4 = 0x180;
        local_830 = local_830 & 0xe0;
        uStack_4b0 = uStack_678;
        local_4a8 = uStack_670;
        UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_4c8,&local_4a0);
        UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_4c8 + 2),&local_4a0);
        local_728._First = &local_978;
        local_728._Last = (FComponentTypeID *)local_974;
        UE::MovieScene::FComponentMask::SetAll(&local_4a0.AllMask,&local_728);
        local_994.Value = (pFVar3->Tags).Ignored.Value;
        local_718._First = &local_994;
        local_718._Last = &local_992;
        UE::MovieScene::FComponentMask::SetAll(&local_4a0.NoneMask,&local_718);
        local_8a8 = uStack_4b0 | 2;
        local_8b8._8_8_ = local_4b8;
        local_8b8._0_8_ = L"struct UE::MovieScene::FIntegerAccumulationTask";
        local_708 = (TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_> *)
                    UE::MovieScene::
                    TScheduledEntityTask<UE::MovieScene::FIntegerAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
                    ::ScheduledRun_PerAllocation;
        local_700 = 3;
        local_930 = &(this->AccumulationBuffers).Relative;
        UE::MovieScene::
        TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
        ::
        ScheduleImpl<UE::MovieScene::FIntegerAccumulationTask,TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_>_*>
                  ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
                    *)local_4c8,(FEntityManager *)&local_954,
                   (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
                   (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                    *)local_8b8,&local_708);
        if (local_4a0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4a0.ComplexMasks.AllocatorInstance.Data);
        }
        UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_980,local_954);
        UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_954,local_984);
      }
      if ((this->AccumulationBuffers).Additive.ArrayNum != 0) {
        auStack_828._24_8_ = &TStatId::TStatId_NAME_None;
        uStack_962 = 0x7fff;
        local_964 = pFVar3->WeightAndEasingResult;
        local_668 = pFVar3->BlendChannelInput;
        TStack_666 = pFVar3->IntegerResult;
        auStack_664._0_4_ = _local_964;
        local_974._0_2_ = (pFVar3->Tags).AdditiveBlend.Value;
        local_974._2_2_ = *(undefined2 *)((longlong)&this->_padding_ + 6);
        auStack_828._16_8_ = 0;
        auStack_800._0_4_ = 0x6ff;
        auStack_800._4_4_ = auStack_800._4_4_ & 0xffffff00;
        uStack_650 = CONCAT71(uStack_807,local_808) & 0xffffffffffffffe0;
        uStack_648._4_4_ = auStack_800._4_4_;
        uStack_648._0_4_ = 0x6ff;
        auStack_664._4_8_ = 0;
        auStack_664._12_8_ = &TStatId::TStatId_NAME_None;
        local_380.AllMask.Bits.NumBits = 0;
        local_3a8._2_2_ = TStack_666;
        local_3a8._0_2_ = local_668;
        local_3a8._4_4_ = _local_964;
        local_380.AllMask.Bits.MaxBits = 0x180;
        local_380.NoneMask.Bits.NumBits = 0;
        local_380.NoneMask.Bits.MaxBits = 0x180;
        uStack_3a0 = 0;
        local_398 = &TStatId::TStatId_NAME_None;
        local_380.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_380.ComplexMasks.ArrayNum = 0;
        local_380.ComplexMasks.ArrayMax = 0;
        local_2d0 = 0;
        local_2cc = 0x180;
        local_298 = 0;
        local_294 = 0x180;
        local_808 = local_808 & 0xe0;
        uStack_390 = uStack_650;
        local_388 = uStack_648;
        UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_3a8,&local_380);
        UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_3a8 + 2),&local_380);
        local_6f8._First = (FComponentTypeID *)local_974;
        local_6f8._Last = local_970;
        UE::MovieScene::FComponentMask::SetAll(&local_380.AllMask,&local_6f8);
        local_990.Value = (pFVar3->Tags).Ignored.Value;
        local_6e8._First = &local_990;
        local_6e8._Last = (FComponentTypeID *)local_98e;
        UE::MovieScene::FComponentMask::SetAll(&local_380.NoneMask,&local_6e8);
        local_890 = uStack_390 | 2;
        local_8a0._8_8_ = local_398;
        local_8a0._0_8_ = L"struct UE::MovieScene::FIntegerAccumulationTask";
        local_6d8 = (TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_> *)
                    UE::MovieScene::
                    TScheduledEntityTask<UE::MovieScene::FIntegerAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
                    ::ScheduledRun_PerAllocation;
        local_6d0 = 3;
        local_928 = &(this->AccumulationBuffers).Additive;
        UE::MovieScene::
        TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
        ::
        ScheduleImpl<UE::MovieScene::FIntegerAccumulationTask,TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_>_*>
                  ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
                    *)local_3a8,(FEntityManager *)&local_950,
                   (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
                   (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                    *)local_8a0,&local_6d8);
        if (local_380.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_380.ComplexMasks.AllocatorInstance.Data);
        }
        UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_980,local_950);
        UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_950,local_984);
      }
      if ((this->AccumulationBuffers).AdditiveFromBase.ArrayNum != 0) {
        pTStack_7e8 = &TStatId::TStatId_NAME_None;
        auStack_800._16_8_ = 0;
        uStack_95e = 0x7fff;
        local_960 = pFVar3->WeightAndEasingResult;
        local_618 = pFVar3->BlendChannelInput;
        local_616 = pFVar3->IntegerResult;
        local_614 = pFVar3->BaseInteger;
        local_612 = _local_960;
        local_970[0].Value = (pFVar3->Tags).AdditiveFromBaseBlend.Value;
        local_970[1].Value = *(undefined2 *)((longlong)&this->_padding_ + 6);
        local_6c8._First = local_970;
        local_6c8._Last = (FComponentTypeID *)&local_96c;
        TStack_7d8.Pad[0] = 0xff;
        TStack_7d8.Pad[1] = '\x06';
        TStack_7d8.Pad[2] = '\0';
        TStack_7d8.Pad[3] = '\0';
        TStack_7d4.Pad = TStack_7d4.Pad & 0xffffff00;
        local_5f8 = CONCAT71(_TStack_7df,local_7e0) & 0xffffffffffffffe0;
        uStack_5f0._4_1_ = TStack_7d4.Pad[0];
        uStack_5f0._5_1_ = TStack_7d4.Pad[1];
        uStack_5f0._6_1_ = TStack_7d4.Pad[2];
        uStack_5f0._7_1_ = TStack_7d4.Pad[3];
        uStack_5f0._0_4_ = 0x6ff;
        local_608 = 0;
        pTStack_600 = &TStatId::TStatId_NAME_None;
        local_7e0 = local_7e0 & 0xe0;
        this_00 = UE::MovieScene::
                  TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
                  ::FilterAll((TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
                               *)&local_618,&local_168,&local_6c8);
        local_98c.Value = (pFVar3->Tags).Ignored.Value;
        local_7a8._First = &local_98c;
        local_7a8._Last = &local_98a;
        UE::MovieScene::FComponentMask::SetAll(&(this_00->Filter).NoneMask,&local_7a8);
        local_900._8_8_ = *(undefined8 *)&(this_00->Components).field_0x18;
        local_900._0_8_ = L"struct UE::MovieScene::FIntegerAdditiveFromBaseBlendTask";
        local_8f0 = *(ulonglong *)&(this_00->Components).field_0x20 | 2;
        local_798 = (TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_> *)
                    UE::MovieScene::
                    TScheduledEntityTask<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
                    ::ScheduledRun_PerAllocation;
        local_790 = '\x03';
        local_920 = &(this->AccumulationBuffers).AdditiveFromBase;
        UE::MovieScene::
        TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
        ::
        ScheduleImpl<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask,TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_>_*>
                  (this_00,(FEntityManager *)&local_94c,
                   (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
                   (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                    *)local_900,&local_798);
        if (local_168.Filter.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_168.Filter.ComplexMasks.AllocatorInstance.Data);
        }
        UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_980,local_94c);
        UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_94c,local_984);
      }
      pTStack_7c0 = &TStatId::TStatId_NAME_None;
      uStack_95a = 0x7fff;
      local_95c = (pFVar4->Integer).InitialValue;
      local_640 = pFVar3->BlendChannelOutput;
      uStack_63e = _local_95c;
      TStack_63a = pFVar3->IntegerResult;
      local_7c8._0_1_ = '\0';
      local_7c8._1_1_ = '\0';
      local_7c8._2_1_ = '\0';
      local_7c8._3_1_ = '\0';
      local_7c8._4_1_ = '\0';
      local_7c8._5_1_ = '\0';
      local_7c8._6_1_ = '\0';
      local_7c8._7_1_ = '\0';
      TStack_7ac.Pad = TStack_7ac.Pad & 0xffffff00;
      local_988.Value = *(ushort *)((longlong)&this->_padding_ + 6);
      uStack_638 = 0;
      pTStack_630 = &TStatId::TStatId_NAME_None;
      local_260.AllMask.Bits.NumBits = 0;
      local_288._2_4_ = _local_95c;
      local_288._0_2_ = local_640;
      local_288._6_2_ = TStack_63a;
      local_260.NoneMask.Bits.NumBits = 0;
      local_260.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_260.ComplexMasks.ArrayNum = 0;
      local_260.ComplexMasks.ArrayMax = 0;
      local_1b0 = 0;
      local_178 = 0;
      TStack_7b0.Pad[0] = 0xff;
      TStack_7b0.Pad[1] = '\x06';
      TStack_7b0.Pad[2] = '\0';
      TStack_7b0.Pad[3] = '\0';
      uStack_628 = CONCAT71(uStack_7b7,local_7b8) & 0xffffffffffffffe0;
      uStack_620._4_1_ = TStack_7ac.Pad[0];
      uStack_620._5_1_ = TStack_7ac.Pad[1];
      uStack_620._6_1_ = TStack_7ac.Pad[2];
      uStack_620._7_1_ = TStack_7ac.Pad[3];
      uStack_620._0_4_ = 0x6ff;
      uStack_280 = 0;
      local_260.AllMask.Bits.MaxBits = 0x180;
      local_260.NoneMask.Bits.MaxBits = 0x180;
      local_278 = &TStatId::TStatId_NAME_None;
      local_1ac = 0x180;
      local_174 = 0x180;
      local_7b8 = local_7b8 & 0xe0;
      uStack_270 = uStack_628;
      local_268 = uStack_620;
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_288,&local_260);
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_288 + 6),&local_260);
      local_788._First = &local_988;
      local_788._Last = &local_986;
      UE::MovieScene::FComponentMask::SetAll(&local_260.AllMask,&local_788);
      local_878 = uStack_270 & 0xfffffffffffffffd;
      local_888._8_8_ = local_278;
      local_888._0_8_ = L"struct UE::MovieScene::FIntegerCombineBlends";
      local_778 = (FIntegerAccumulationBuffers *)
                  UE::MovieScene::
                  TScheduledEntityTask<UE::MovieScene::FIntegerCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
                  ::ScheduledRun_PerAllocation;
      local_770 = '\x03';
      local_918 = &this->AccumulationBuffers;
      UE::MovieScene::
      TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
      ::
      ScheduleImpl<UE::MovieScene::FIntegerCombineBlends,UE::MovieScene::FIntegerAccumulationBuffers_*>
                ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
                  *)local_288,(FEntityManager *)&local_948,
                 (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
                 (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                  *)local_888,&local_778);
      if (local_260.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.ComplexMasks.AllocatorInstance.Data);
      }
      UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_984,local_948);
    }
  }
  return;
}

// ReinitializeAccumulationBuffers @ 14685d550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMovieScenePiecewiseIntegerBlenderSystem::ReinitializeAccumulationBuffers
          (UMovieScenePiecewiseIntegerBlenderSystem *this)

{
  int *piVar1;
  TComponentTypeID<__int64> TVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStackY_118 [32];
  initializer_list<UE::MovieScene::FComponentTypeID> local_d8;
  FBuiltInComponentTypes *local_c8;
  FComponentTypeID local_c0;
  TComponentTypeID<__int64> local_be;
  TComponentTypeID<FMovieSceneBlendChannelID> local_bc;
  ushort local_ba;
  FEntityComponentFilter local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  iVar4 = (int)this->_padding_;
  local_c8 = UE::MovieScene::FBuiltInComponentTypes::Get();
  iVar3 = (this->AccumulationBuffers).Absolute.ArrayMax;
  (this->AccumulationBuffers).Absolute.ArrayNum = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&this->AccumulationBuffers,0,
               &(this->AccumulationBuffers).Absolute.ArrayMax);
  }
  piVar1 = &(this->AccumulationBuffers).Relative.ArrayMax;
  iVar3 = *piVar1;
  (this->AccumulationBuffers).Relative.ArrayNum = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->AccumulationBuffers).Relative.AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->AccumulationBuffers).Additive.ArrayMax;
  iVar3 = *piVar1;
  (this->AccumulationBuffers).Additive.ArrayNum = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->AccumulationBuffers).Additive.AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->AccumulationBuffers).AdditiveFromBase.ArrayMax;
  iVar3 = *piVar1;
  (this->AccumulationBuffers).AdditiveFromBase.ArrayNum = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->AccumulationBuffers).AdditiveFromBase.AllocatorInstance,0,piVar1);
  }
  local_c0.Value = *(ushort *)((longlong)&this->_padding_ + 6);
  lVar5 = this->_padding_;
  local_bc = local_c8->BlendChannelInput;
  TVar2 = local_c8->IntegerResult;
  local_ba = (local_c8->Tags).AbsoluteBlend.Value;
  local_d8._First = &local_c0;
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_d8._Last = (FComponentTypeID *)&local_b8;
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_b8.AllMask.Bits.NumBits = 0;
  local_b8.AllMask.Bits.MaxBits = 0x180;
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_b8.NoneMask.Bits.NumBits = 0;
  local_b8.NoneMask.Bits.MaxBits = 0x180;
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_b8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_b8.ComplexMasks.ArrayNum = 0;
  local_b8.ComplexMasks.ArrayMax = 0;
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_be = TVar2;
  UE::MovieScene::FComponentMask::SetAll(&local_b8.AllMask,&local_d8);
  bVar6 = UE::MovieScene::FEntityManager::Contains((FEntityManager *)(lVar5 + 0x28),&local_b8);
  if (local_b8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ComplexMasks.AllocatorInstance.Data);
  }
  lVar5 = this->_padding_;
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_b8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ComplexMasks.ArrayNum = 0;
  local_b8.ComplexMasks.ArrayMax = 0;
  local_c0.Value = *(ushort *)((longlong)&this->_padding_ + 6);
  local_bc = local_c8->BlendChannelInput;
  local_ba = (local_c8->Tags).RelativeBlend.Value;
  local_d8._First = &local_c0;
  local_d8._Last = (FComponentTypeID *)&local_b8;
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_b8.AllMask.Bits.NumBits = 0;
  local_b8.AllMask.Bits.MaxBits = 0x180;
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_b8.NoneMask.Bits.NumBits = 0;
  local_b8.NoneMask.Bits.MaxBits = 0x180;
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_be = TVar2;
  UE::MovieScene::FComponentMask::SetAll(&local_b8.AllMask,&local_d8);
  bVar7 = UE::MovieScene::FEntityManager::Contains((FEntityManager *)(lVar5 + 0x28),&local_b8);
  if (local_b8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ComplexMasks.AllocatorInstance.Data);
  }
  lVar5 = this->_padding_;
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_b8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ComplexMasks.ArrayNum = 0;
  local_b8.ComplexMasks.ArrayMax = 0;
  local_c0.Value = *(ushort *)((longlong)&this->_padding_ + 6);
  local_bc = local_c8->BlendChannelInput;
  local_ba = (local_c8->Tags).AdditiveBlend.Value;
  local_d8._First = &local_c0;
  local_d8._Last = (FComponentTypeID *)&local_b8;
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_b8.AllMask.Bits.NumBits = 0;
  local_b8.AllMask.Bits.MaxBits = 0x180;
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_b8.NoneMask.Bits.NumBits = 0;
  local_b8.NoneMask.Bits.MaxBits = 0x180;
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_be = TVar2;
  UE::MovieScene::FComponentMask::SetAll(&local_b8.AllMask,&local_d8);
  bVar8 = UE::MovieScene::FEntityManager::Contains((FEntityManager *)(lVar5 + 0x28),&local_b8);
  if (local_b8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ComplexMasks.AllocatorInstance.Data);
  }
  lVar5 = this->_padding_;
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_b8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ComplexMasks.ArrayNum = 0;
  local_b8.ComplexMasks.ArrayMax = 0;
  local_c0.Value = *(ushort *)((longlong)&this->_padding_ + 6);
  local_bc = local_c8->BlendChannelInput;
  local_ba = (local_c8->Tags).AdditiveFromBaseBlend.Value;
  local_d8._First = &local_c0;
  local_d8._Last = (FComponentTypeID *)&local_b8;
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_b8.AllMask.Bits.NumBits = 0;
  local_b8.AllMask.Bits.MaxBits = 0x180;
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_b8.NoneMask.Bits.NumBits = 0;
  local_b8.NoneMask.Bits.MaxBits = 0x180;
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_be = TVar2;
  UE::MovieScene::FComponentMask::SetAll(&local_b8.AllMask,&local_d8);
  bVar9 = UE::MovieScene::FEntityManager::Contains((FEntityManager *)(lVar5 + 0x28),&local_b8);
  if (local_b8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ComplexMasks.AllocatorInstance.Data);
  }
  if (bVar6) {
    TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_>::SetNum
              (&(this->AccumulationBuffers).Absolute,iVar4,Default);
  }
  if (bVar7) {
    TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_>::SetNum
              (&(this->AccumulationBuffers).Relative,iVar4,Default);
  }
  if (bVar8) {
    TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_>::SetNum
              (&(this->AccumulationBuffers).Additive,iVar4,Default);
  }
  if (bVar9) {
    TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_>::SetNum
              (&(this->AccumulationBuffers).AdditiveFromBase,iVar4,Default);
  }
  iVar4 = (this->AccumulationBuffers).Absolute.ArrayNum;
  if (0 < iVar4) {
    memset((this->AccumulationBuffers).Absolute.AllocatorInstance.Data,0,(longlong)iVar4 << 4);
  }
  iVar4 = (this->AccumulationBuffers).Relative.ArrayNum;
  if (0 < iVar4) {
    memset((this->AccumulationBuffers).Relative.AllocatorInstance.Data,0,(longlong)iVar4 << 4);
  }
  iVar4 = (this->AccumulationBuffers).Additive.ArrayNum;
  if (0 < iVar4) {
    memset((this->AccumulationBuffers).Additive.AllocatorInstance.Data,0,(longlong)iVar4 << 4);
  }
  iVar4 = (this->AccumulationBuffers).AdditiveFromBase.ArrayNum;
  if (0 < iVar4) {
    memset((this->AccumulationBuffers).AdditiveFromBase.AllocatorInstance.Data,0,
           (longlong)iVar4 << 4);
  }
  return;
}

// StaticRegisterNativesUMovieScenePiecewiseIntegerBlenderSystem @ 14686cba0

void __cdecl
UMovieScenePiecewiseIntegerBlenderSystem::
StaticRegisterNativesUMovieScenePiecewiseIntegerBlenderSystem(void)

{
  return;
}

// ZeroAccumulationBuffers @ 146875340

void __thiscall
UMovieScenePiecewiseIntegerBlenderSystem::ZeroAccumulationBuffers
          (UMovieScenePiecewiseIntegerBlenderSystem *this)

{
  int iVar1;
  
  iVar1 = (this->AccumulationBuffers).Absolute.ArrayNum;
  if (0 < iVar1) {
    memset((this->AccumulationBuffers).Absolute.AllocatorInstance.Data,0,(longlong)iVar1 << 4);
  }
  iVar1 = (this->AccumulationBuffers).Relative.ArrayNum;
  if (0 < iVar1) {
    memset((this->AccumulationBuffers).Relative.AllocatorInstance.Data,0,(longlong)iVar1 << 4);
  }
  iVar1 = (this->AccumulationBuffers).Additive.ArrayNum;
  if (0 < iVar1) {
    memset((this->AccumulationBuffers).Additive.AllocatorInstance.Data,0,(longlong)iVar1 << 4);
  }
  iVar1 = (this->AccumulationBuffers).AdditiveFromBase.ArrayNum;
  if (0 < iVar1) {
    memset((this->AccumulationBuffers).AdditiveFromBase.AllocatorInstance.Data,0,
           (longlong)iVar1 << 4);
    return;
  }
  return;
}

