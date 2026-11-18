// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 12

// StaticClass @ 1467cd560

UClass * __cdecl UMovieScenePiecewiseDoubleBlenderSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePiecewiseDoubleBlenderSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePiecewiseDoubleBlenderSystem",
               &Z_Registration_Info_UClass_UMovieScenePiecewiseDoubleBlenderSystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePiecewiseDoubleBlenderSystem,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePiecewiseDoubleBlenderSystem>
               ,InternalVTableHelperCtorCaller<UMovieScenePiecewiseDoubleBlenderSystem>,local_res8,
               UMovieSceneBlenderSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePiecewiseDoubleBlenderSystem.InnerSingleton;
}

// UMovieScenePiecewiseDoubleBlenderSystem @ 14680a520

UMovieScenePiecewiseDoubleBlenderSystem * __thiscall
UMovieScenePiecewiseDoubleBlenderSystem::UMovieScenePiecewiseDoubleBlenderSystem
          (UMovieScenePiecewiseDoubleBlenderSystem *this,FVTableHelper *param_1)

{
  UMovieSceneBlenderSystem::UMovieSceneBlenderSystem((UMovieSceneBlenderSystem *)this,param_1);
  (this->BlendedResultMask).Bits.MaxBits = 0x180;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneBlenderSystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneValueDecomposer__;
  (this->AccumulationBuffers).Absolute.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->AccumulationBuffers).Absolute.Pairs.ArrayNum = 0;
  (this->AccumulationBuffers).Absolute.Pairs.ArrayMax = 0;
  (this->AccumulationBuffers).Relative.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->AccumulationBuffers).Relative.Pairs.ArrayNum = 0;
  (this->AccumulationBuffers).Relative.Pairs.ArrayMax = 0;
  (this->AccumulationBuffers).Additive.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->AccumulationBuffers).Additive.Pairs.ArrayNum = 0;
  (this->AccumulationBuffers).Additive.Pairs.ArrayMax = 0;
  (this->AccumulationBuffers).AdditiveFromBase.Pairs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AccumulationBuffers).AdditiveFromBase.Pairs.ArrayNum = 0;
  (this->AccumulationBuffers).AdditiveFromBase.Pairs.ArrayMax = 0;
  (this->AccumulationBuffers).AdditiveAndOverrides.Pairs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AccumulationBuffers).AdditiveAndOverrides.Pairs.ArrayNum = 0;
  (this->AccumulationBuffers).AdditiveAndOverrides.Pairs.ArrayMax = 0;
  (this->BlendedResultMask).Bits.NumBits = 0;
  (this->BlendedPropertyMask).Bits.NumBits = 0;
  (this->ChannelRelevancyCache).LastSystemVersion = 0;
  (this->CachedRelevantProperties).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->BlendedPropertyMask).Bits.MaxBits = 0x180;
  (this->CachedRelevantProperties).NumBits = 0;
  (this->CachedRelevantProperties).MaxBits = 0x80;
  this->bContainsNonPropertyBlends = false;
  return this;
}

// UMovieScenePiecewiseDoubleBlenderSystem @ 14680a5e0

UMovieScenePiecewiseDoubleBlenderSystem * __thiscall
UMovieScenePiecewiseDoubleBlenderSystem::UMovieScenePiecewiseDoubleBlenderSystem
          (UMovieScenePiecewiseDoubleBlenderSystem *this,FObjectInitializer *param_1)

{
  UObject *local_res8 [2];
  UClass *local_res18 [2];
  
  UMovieSceneBlenderSystem::UMovieSceneBlenderSystem((UMovieSceneBlenderSystem *)this,param_1);
  (this->BlendedResultMask).Bits.MaxBits = 0x180;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneBlenderSystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneValueDecomposer__;
  (this->AccumulationBuffers).Absolute.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->AccumulationBuffers).Absolute.Pairs.ArrayNum = 0;
  (this->AccumulationBuffers).Absolute.Pairs.ArrayMax = 0;
  (this->AccumulationBuffers).Relative.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->AccumulationBuffers).Relative.Pairs.ArrayNum = 0;
  (this->AccumulationBuffers).Relative.Pairs.ArrayMax = 0;
  (this->AccumulationBuffers).Additive.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->AccumulationBuffers).Additive.Pairs.ArrayNum = 0;
  (this->AccumulationBuffers).Additive.Pairs.ArrayMax = 0;
  (this->AccumulationBuffers).AdditiveFromBase.Pairs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AccumulationBuffers).AdditiveFromBase.Pairs.ArrayNum = 0;
  (this->AccumulationBuffers).AdditiveFromBase.Pairs.ArrayMax = 0;
  (this->AccumulationBuffers).AdditiveAndOverrides.Pairs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AccumulationBuffers).AdditiveAndOverrides.Pairs.ArrayNum = 0;
  (this->AccumulationBuffers).AdditiveAndOverrides.Pairs.ArrayMax = 0;
  (this->BlendedResultMask).Bits.NumBits = 0;
  (this->BlendedPropertyMask).Bits.NumBits = 0;
  (this->ChannelRelevancyCache).LastSystemVersion = 0;
  (this->CachedRelevantProperties).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->BlendedPropertyMask).Bits.MaxBits = 0x180;
  (this->CachedRelevantProperties).NumBits = 0;
  (this->CachedRelevantProperties).MaxBits = 0x80;
  this->bContainsNonPropertyBlends = false;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 8;
  if ((this->_padding_ & 0x10) != 0) {
    local_res8[0] = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8[0]);
    }
    local_res18[0] = Z_Construct_UClass_UFloatChannelEvaluatorSystem_NoRegister();
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
    local_res18[0] = Z_Construct_UClass_UDoubleChannelEvaluatorSystem_NoRegister();
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
    local_res18[0] = Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_NoRegister();
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
    local_res18[0] = UMovieSceneQuaternionInterpolationRotationSystem::StaticClass();
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

// ~UMovieScenePiecewiseDoubleBlenderSystem @ 14680f8f0

void __thiscall
UMovieScenePiecewiseDoubleBlenderSystem::~UMovieScenePiecewiseDoubleBlenderSystem
          (UMovieScenePiecewiseDoubleBlenderSystem *this)

{
  ForElementType<unsigned_int> FVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneBlenderSystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneValueDecomposer__;
  FVar1 = (this->CachedRelevantProperties).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  UE::MovieScene::FAccumulationBuffers::~FAccumulationBuffers(&this->AccumulationBuffers);
  this->_padding_ = (longlong)&___7IMovieSceneValueDecomposer__6B_;
  UMovieSceneBlenderSystem::~UMovieSceneBlenderSystem((UMovieSceneBlenderSystem *)this);
  return;
}

// DispatchDecomposeTask @ 1468273d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UMovieScenePiecewiseDoubleBlenderSystem::DispatchDecomposeTask
          (UMovieScenePiecewiseDoubleBlenderSystem *this,FValueDecompositionParams *param_1,
          FAlignedDecomposedValue *param_2)

{
  undefined2 uVar1;
  FComponentTypeID FVar2;
  FBuiltInComponentTypes *this_00;
  undefined6 extraout_var;
  ushort uVar3;
  TRefCountPtr<FBaseGraphTask> *pTVar4;
  FSystemSubsequentTasks *pFVar5;
  undefined1 auStackY_2c8 [32];
  undefined4 local_288;
  undefined4 local_284;
  undefined8 local_278;
  TStatIdData *pTStack_270;
  byte local_268;
  undefined7 uStack_267;
  undefined4 uStack_260;
  uint uStack_25c;
  initializer_list<UE::MovieScene::FComponentTypeID> local_258;
  TComponentTypeID<UE::MovieScene::FMovieSceneEntityID> local_248;
  TComponentTypeID<FMovieSceneBlendChannelID> TStack_246;
  undefined2 uStack_244;
  TComponentTypeID<int> TStack_242;
  undefined2 uStack_240;
  uint uStack_23e;
  undefined2 uStack_23a;
  undefined2 uStack_238;
  undefined6 uStack_236;
  undefined8 uStack_230;
  TStatIdData *pTStack_228;
  ulonglong local_220;
  undefined8 uStack_218;
  FSystemSubsequentTasks local_210;
  FSystemSubsequentTasks *local_1d0;
  int local_1c8;
  undefined4 local_1c4;
  TRefCountPtr<FBaseGraphTask> local_1c0 [4];
  TRefCountPtr<FBaseGraphTask> *local_1a0;
  int local_198;
  undefined4 local_194;
  undefined1 local_188 [4];
  FComponentAccess aFStack_184 [10];
  undefined8 uStack_170;
  TStatIdData *local_168;
  ulonglong uStack_160;
  undefined8 local_158;
  FEntityComponentFilter local_150;
  int local_a0;
  int local_9c;
  int local_68;
  int local_64;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if ((short)(param_2->Value).AllDecomposedOverrides.ArrayMax == -1) {
    (param_1->Query).Entities.DataPtr = (FMovieSceneEntityID *)0x0;
  }
  else {
    this_00 = UE::MovieScene::FBuiltInComponentTypes::Get();
    uVar1 = (undefined2)(param_2->Value).AllDecomposedOverrides.ArrayMax;
    FVar2 = UE::MovieScene::FBuiltInComponentTypes::GetBaseValueComponentType
                      (this_00,(FComponentTypeID *)&local_288);
    uVar3 = (this_00->Tags).ExternalBlending.Value;
    if (uVar3 == 0xffff) {
      uVar3 = 0x7fff;
    }
    pTStack_270 = &TStatId::TStatId_NAME_None;
    uStack_25c = uStack_25c & 0xffffff00;
    uStack_260 = 0x6ff;
    local_220 = CONCAT71(uStack_267,local_268) & 0xffffffffffffffe0;
    uStack_218._4_4_ = uStack_25c;
    uStack_218._0_4_ = 0x6ff;
    local_278 = 0;
    local_150.AllMask.Bits.NumBits = 0;
    uStack_230 = 0;
    pTStack_228 = &TStatId::TStatId_NAME_None;
    local_150.AllMask.Bits.MaxBits = 0x180;
    local_150.NoneMask.Bits.NumBits = 0;
    local_150.NoneMask.Bits.MaxBits = 0x180;
    local_150.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.ComplexMasks.ArrayNum = 0;
    local_150.ComplexMasks.ArrayMax = 0;
    local_a0 = 0;
    local_9c = 0x180;
    local_68 = 0;
    local_64 = 0x180;
    uStack_244 = uVar1;
    uStack_160 = local_220;
    local_158 = uStack_218;
    if (*(char *)&(param_2->Value).Result.Additive == '\0') {
      TStack_246 = this_00->BlendChannelInput;
      TStack_242 = this_00->BlendingOrder;
      local_288 = CONCAT22(uVar3,this_00->WeightAndEasingResult) & 0x7fffffff;
      uStack_240 = 0x7fff;
      local_284 = CONCAT22(0x7fff,*(undefined2 *)CONCAT62(extraout_var,FVar2.Value));
      uStack_23e = local_284;
      uStack_23a = (undefined2)local_288;
      uStack_238 = (undefined2)(local_288 >> 0x10);
      local_188._2_2_ = TStack_246;
      local_188._0_2_ = local_248;
      unique0x10000401 = uVar1;
      unique0x10000403 = TStack_242;
      aFStack_184._6_4_ = local_284;
      aFStack_184[2].ComponentType.Value = 0x7fff;
      aFStack_184[5].ComponentType.Value = uStack_23a;
      aFStack_184._14_6_ = uStack_236;
      aFStack_184[6].ComponentType.Value = uStack_238;
      local_288 = CONCAT22(*(undefined2 *)&this[-1].field_0x166,
                           *(undefined2 *)
                            ((longlong)&(param_2->Value).AllDecomposedOverrides.ArrayMax + 2));
      uStack_170 = 0;
      local_168 = &TStatId::TStatId_NAME_None;
      local_268 = local_268 & 0xe0;
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_188 + 2),&local_150);
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_188 + 4),&local_150);
      local_258._First = (FComponentTypeID *)&local_288;
      local_258._Last = (FComponentTypeID *)&local_284;
      UE::MovieScene::FComponentMask::SetAll(&local_150.AllMask,&local_258);
      local_1d0 = (FSystemSubsequentTasks *)0x0;
      local_1c8 = 0;
      local_1c4 = 4;
      local_1a0 = (TRefCountPtr<FBaseGraphTask> *)0x0;
      local_198 = 0;
      local_194 = 4;
      UE::MovieScene::
      TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
      ::
      Dispatch_PerAllocation<_UMovieScenePiecewiseDoubleBlenderSystem::DispatchDecomposeTask_::__l2::FChannelResultTask,UE::MovieScene::FValueDecompositionParams_const_&,UE::MovieScene::FAlignedDecomposedValue_*_&>
                ((TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)local_188,(FEntityManager *)param_1,
                 (FSystemTaskPrerequisites *)
                 (*(longlong *)(this[-1].BlendedPropertyMask.Bits.AllocatorInstance.InlineData + 8)
                 + 0x28),&local_210,(FValueDecompositionParams *)0x0,
                 (FAlignedDecomposedValue **)param_2);
    }
    else {
      local_248 = this_00->ParentEntity;
      TStack_246 = this_00->BlendChannelInput;
      TStack_242 = this_00->BlendingOrder;
      uStack_240 = 0x7fff;
      local_288 = CONCAT22(0x7fff,*(undefined2 *)CONCAT62(extraout_var,FVar2.Value));
      uStack_23e = local_288;
      local_284 = CONCAT22(uVar3,this_00->WeightAndEasingResult) & 0x7fffffff;
      uStack_23a = (undefined2)local_284;
      uStack_238 = (undefined2)(local_284 >> 0x10);
      local_188._2_2_ = TStack_246;
      local_188._0_2_ = local_248;
      unique0x100003ef = uVar1;
      unique0x100003f1 = TStack_242;
      aFStack_184._6_4_ = local_288;
      aFStack_184[2].ComponentType.Value = 0x7fff;
      aFStack_184[5].ComponentType.Value = uStack_23a;
      aFStack_184._14_6_ = uStack_236;
      aFStack_184[6].ComponentType.Value = uStack_238;
      local_288 = CONCAT22(*(undefined2 *)&this[-1].field_0x166,
                           *(undefined2 *)
                            ((longlong)&(param_2->Value).AllDecomposedOverrides.ArrayMax + 2));
      uStack_170 = 0;
      local_168 = &TStatId::TStatId_NAME_None;
      local_268 = local_268 & 0xe0;
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_188,&local_150);
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_188 + 2),&local_150);
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_188 + 4),&local_150);
      local_258._First = (FComponentTypeID *)&local_288;
      local_258._Last = (FComponentTypeID *)&local_284;
      UE::MovieScene::FComponentMask::SetAll(&local_150.AllMask,&local_258);
      local_1d0 = (FSystemSubsequentTasks *)0x0;
      local_1c8 = 0;
      local_1c4 = 4;
      local_1a0 = (TRefCountPtr<FBaseGraphTask> *)0x0;
      local_198 = 0;
      local_194 = 4;
      UE::MovieScene::
      TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
      ::
      Dispatch_PerAllocation<_UMovieScenePiecewiseDoubleBlenderSystem::DispatchDecomposeTask_::__l2::FChannelResultTask,UE::MovieScene::FValueDecompositionParams_const_&,UE::MovieScene::FAlignedDecomposedValue_*_&>
                ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)local_188,(FEntityManager *)param_1,
                 (FSystemTaskPrerequisites *)
                 (*(longlong *)(this[-1].BlendedPropertyMask.Bits.AllocatorInstance.InlineData + 8)
                 + 0x28),&local_210,(FValueDecompositionParams *)0x0,
                 (FAlignedDecomposedValue **)param_2);
    }
    pTVar4 = local_1c0;
    if (local_1a0 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
      pTVar4 = local_1a0;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar4,local_198);
    if (local_1a0 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
      FMemory::Free(local_1a0);
    }
    pFVar5 = &local_210;
    if (local_1d0 != (FSystemSubsequentTasks *)0x0) {
      pFVar5 = local_1d0;
    }
    DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
              ((FPrerequisite *)pFVar5,local_1c8);
    if (local_1d0 != (FSystemSubsequentTasks *)0x0) {
      FMemory::Free(local_1d0);
    }
    if (local_150.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.ComplexMasks.AllocatorInstance.Data);
    }
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// GetPrivateStaticClass @ 1468364e0

UClass * __cdecl UMovieScenePiecewiseDoubleBlenderSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePiecewiseDoubleBlenderSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePiecewiseDoubleBlenderSystem",
               &Z_Registration_Info_UClass_UMovieScenePiecewiseDoubleBlenderSystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePiecewiseDoubleBlenderSystem,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePiecewiseDoubleBlenderSystem>
               ,InternalVTableHelperCtorCaller<UMovieScenePiecewiseDoubleBlenderSystem>,local_res8,
               UMovieSceneBlenderSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePiecewiseDoubleBlenderSystem.InnerSingleton;
}

// OnRun @ 146847330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePiecewiseDoubleBlenderSystem::OnRun
          (UMovieScenePiecewiseDoubleBlenderSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
  *pTVar3;
  TTypeCompatibleBytes<unsigned_int> *pTVar4;
  int iVar5;
  ushort uVar6;
  FComponentTypeID FVar7;
  FComponentTypeID FVar8;
  int iVar9;
  code *pcVar10;
  uchar auVar11 [4];
  ForElementType<unsigned_int> FVar12;
  bool bVar13;
  ECachedEntityManagerState EVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_MovieSceneEval_BlendDoubleValues> FVar17;
  FBuiltInComponentTypes *pFVar18;
  FComponentMask *pFVar19;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar20;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar21;
  uint uVar22;
  ulonglong uVar23;
  FSystemTaskPrerequisites *pFVar24;
  FThreadSafeStaticStat<FStat_MovieSceneEval_BlendCombineDoubleValues> FVar25;
  ForElementType<unsigned_int> FVar26;
  undefined2 uVar27;
  uint uVar28;
  ForElementType<unsigned_int> FVar29;
  FSystemSubsequentTasks *pFVar30;
  undefined1 auStackY_de8 [32];
  undefined1 local_d88 [4];
  FComponentTypeID local_d84;
  FScriptContainerElement local_d82 [2];
  FComponentTypeID local_d80;
  FComponentTypeID local_d7e;
  FComponentTypeID local_d7c;
  FComponentTypeID local_d7a;
  FComponentTypeID local_d78;
  FComponentTypeID local_d76;
  FComponentTypeID local_d74;
  FComponentTypeID local_d72;
  FComponentTypeID local_d70;
  FComponentTypeID local_d6e;
  FComponentTypeID local_d6c;
  FComponentTypeID local_d6a;
  FComponentTypeID local_d68;
  FComponentTypeID local_d66;
  <lambda_1> local_d64;
  <lambda_1> local_d63 [3];
  FComponentTypeID local_d60;
  undefined2 local_d5e;
  undefined1 local_d5c [4];
  FComponentTypeID local_d58;
  undefined2 local_d56;
  FComponentTypeID local_d54;
  undefined2 local_d52;
  FThreadSafeStaticStat<FStat_MovieSceneEval_BlendCombineDoubleValues> local_d50;
  uint local_d48;
  uint local_d44;
  uint local_d40;
  undefined4 local_d3c;
  TComponentTypeID<double> local_d38;
  undefined2 uStack_d36;
  FSystemSubsequentTasks *local_d30;
  FSystemTaskPrerequisites *local_d28;
  uint local_d20;
  uint local_d1c;
  undefined1 local_d18 [8];
  undefined1 local_d10 [8];
  undefined1 local_d08 [8];
  undefined1 local_d00 [16];
  undefined1 local_cf0 [16];
  FAccumulationBuffers *local_ce0;
  TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
  *local_cd8;
  TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
  *local_cd0;
  ForElementType<unsigned_int> local_cc8;
  ForElementType<unsigned_int> local_cc0;
  ForElementType<unsigned_int> local_cb8;
  ForElementType<unsigned_int> local_cb0;
  FEntityAllocationWriteContext local_ca8;
  undefined1 local_ca0 [8];
  FEntityAllocationWriteContext local_c98;
  undefined1 local_c90 [32];
  byte local_c70;
  undefined7 uStack_c6f;
  undefined1 auStack_c68 [16];
  undefined1 local_c58 [16];
  byte local_c48;
  undefined7 uStack_c47;
  undefined1 auStack_c40 [24];
  TStatIdData *pTStack_c28;
  byte local_c20;
  undefined7 uStack_c1f;
  undefined4 uStack_c18;
  uint uStack_c14;
  undefined1 local_c08 [16];
  byte local_bf8;
  undefined7 uStack_bf7;
  undefined1 auStack_bf0 [24];
  TStatIdData *pTStack_bd8;
  byte local_bd0;
  undefined7 uStack_bcf;
  TTypeCompatibleBytes<unsigned_int> TStack_bc8;
  TTypeCompatibleBytes<unsigned_int> TStack_bc4;
  undefined1 local_bb8 [16];
  byte local_ba8;
  undefined7 uStack_ba7;
  int iStack_ba0;
  TTypeCompatibleBytes<unsigned_int> TStack_b9c;
  undefined8 local_b90;
  TStatIdData *pTStack_b88;
  byte local_b80;
  undefined7 uStack_b7f;
  TTypeCompatibleBytes<unsigned_int> TStack_b78;
  TTypeCompatibleBytes<unsigned_int> TStack_b74;
  FComponentTypeID *local_b68;
  FComponentTypeID *pFStack_b60;
  FComponentTypeID *local_b58;
  FComponentTypeID *pFStack_b50;
  FComponentTypeID *local_b48;
  FComponentTypeID *pFStack_b40;
  FComponentTypeID *local_b38;
  FComponentTypeID *pFStack_b30;
  FComponentTypeID *local_b28;
  FComponentTypeID *pFStack_b20;
  FComponentTypeID *local_b18;
  FThreadSafeStaticStat<FStat_MovieSceneEval_BlendCombineDoubleValues> *pFStack_b10;
  FComponentTypeID *local_b08;
  FComponentTypeID *pFStack_b00;
  FComponentTypeID *local_af8;
  FComponentTypeID *pFStack_af0;
  FComponentTypeID *local_ae8;
  FComponentTypeID *pFStack_ae0;
  FComponentTypeID *local_ad8;
  FComponentTypeID *pFStack_ad0;
  ForAnyElementType local_ac8;
  ForAnyElementType FStack_ac0;
  ForAnyElementType local_ab8;
  ForAnyElementType FStack_ab0;
  TComponentTypeID<FMovieSceneBlendChannelID> local_aa8;
  TComponentTypeID<int> TStack_aa6;
  TTypeCompatibleBytes<unsigned_int> TStack_aa4;
  ForAnyElementType FStack_aa0;
  TStatIdData *pTStack_a98;
  FComponentRegistry *pFStack_a90;
  ForAnyElementType FStack_a88;
  TComponentTypeID<FMovieSceneBlendChannelID> local_a80;
  uint uStack_a7e;
  uchar auStack_a7a [2];
  bool *pbStack_a78;
  TStatIdData *pTStack_a70;
  bool *pbStack_a68;
  TTypeCompatibleBytes<unsigned_int> aTStack_a60 [2];
  TComponentTypeID<FMovieSceneBlendChannelID> local_a58;
  uint uStack_a56;
  undefined2 uStack_a52;
  ForAnyElementType FStack_a50;
  TStatIdData *pTStack_a48;
  ForAnyElementType FStack_a40;
  ForAnyElementType FStack_a38;
  TComponentTypeID<FMovieSceneBlendChannelID> local_a30;
  uint uStack_a2e;
  undefined2 uStack_a2a;
  ForAnyElementType FStack_a28;
  TStatIdData *pTStack_a20;
  bool *pbStack_a18;
  ulong64 uStack_a10;
  TComponentTypeID<FMovieSceneBlendChannelID> local_a08;
  undefined4 uStack_a06;
  undefined2 uStack_a02;
  undefined8 uStack_a00;
  TStatIdData *pTStack_9f8;
  ulonglong uStack_9f0;
  undefined8 uStack_9e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_9d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_9c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_9b8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_9a8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_998;
  initializer_list<UE::MovieScene::FComponentTypeID> local_988;
  initializer_list<UE::MovieScene::FComponentTypeID> local_978;
  initializer_list<UE::MovieScene::FComponentTypeID> local_968;
  FEntityAllocationWriteContext local_958;
  FName local_950;
  FName local_948;
  FEntityAllocationWriteContext local_940;
  initializer_list<UE::MovieScene::FComponentTypeID> local_938;
  initializer_list<UE::MovieScene::FComponentTypeID> local_928;
  initializer_list<UE::MovieScene::FComponentTypeID> local_918;
  initializer_list<UE::MovieScene::FComponentTypeID> local_908;
  TComponentTypeID<FMovieSceneBlendChannelID> local_8f8;
  undefined6 uStack_8f6;
  undefined8 uStack_8f0;
  TStatIdData *pTStack_8e8;
  ulonglong uStack_8e0;
  undefined8 uStack_8d8;
  TComponentTypeID<FMovieSceneBlendChannelID> local_8d0;
  undefined6 uStack_8ce;
  undefined8 uStack_8c8;
  TStatIdData *pTStack_8c0;
  ulonglong uStack_8b8;
  undefined8 uStack_8b0;
  FSystemTaskPrerequisites local_8a8;
  undefined1 local_828 [8];
  undefined8 uStack_820;
  FThreadSafeStaticStat<FStat_MovieSceneEval_BlendDoubleValues> local_818;
  FComponentRegistry *pFStack_810;
  FScriptContainerElement *local_808;
  FEntityComponentFilter local_800;
  TBitArray<TFixedAllocator<12>_> local_780;
  int local_718;
  int local_714;
  undefined1 local_708 [24];
  FScriptContainerElement *pFStack_6f0;
  FScriptContainerElement *local_6e8;
  FEntityComponentFilter local_6e0;
  int local_630;
  int local_62c;
  int local_5f8;
  int local_5f4;
  undefined1 local_5e8 [24];
  bool *pbStack_5d0;
  ulong64 local_5c8;
  FEntityComponentFilter local_5c0;
  int local_510;
  int local_50c;
  int local_4d8;
  int local_4d4;
  undefined1 local_4c8 [24];
  bool *pbStack_4b0;
  TTypeCompatibleBytes<unsigned_int> local_4a8 [2];
  FEntityComponentFilter local_4a0;
  int local_3f0;
  int local_3ec;
  int local_3b8;
  int local_3b4;
  undefined1 local_3a8 [24];
  ulonglong uStack_390;
  undefined8 local_388;
  FEntityComponentFilter local_380;
  int local_2d0;
  int local_2cc;
  int local_298;
  int local_294;
  undefined1 local_288 [24];
  ulonglong uStack_270;
  undefined8 local_268;
  FEntityComponentFilter local_260;
  int local_1b0;
  int local_1ac;
  int local_178;
  int local_174;
  undefined1 local_168 [24];
  ulonglong uStack_150;
  undefined8 local_148;
  FEntityComponentFilter local_140;
  int local_90;
  int local_8c;
  int local_58;
  int local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_de8;
  local_d30 = param_2;
  local_d28 = param_1;
  UMovieSceneBlenderSystem::CompactBlendChannels((UMovieSceneBlenderSystem *)this);
  FVar26 = (ForElementType<unsigned_int>)(this->_padding_ + 0x28);
  local_d00._8_8_ = StatPtr_MovieSceneEval_BlendDoubleValues;
  FVar17 = StatPtr_MovieSceneEval_BlendDoubleValues;
  local_cc0 = FVar26;
  if (StatPtr_MovieSceneEval_BlendDoubleValues ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_BlendDoubleValues>)0x0) {
    pFVar16 = ::FName::FName(&local_948,"MovieSceneEval_BlendDoubleValues");
    FVar17 = (FThreadSafeStaticStat<FStat_MovieSceneEval_BlendDoubleValues>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_BlendDoubleValues,
                        *pFVar16,L"Blend double values","STATGROUP_MovieSceneECS","STATCAT_Advanced"
                        ,L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid
                       );
  }
  local_d50 = StatPtr_MovieSceneEval_BlendCombineDoubleValues;
  local_d00._8_8_ = FVar17;
  if (StatPtr_MovieSceneEval_BlendCombineDoubleValues ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_BlendCombineDoubleValues>)0x0) {
    pFVar16 = ::FName::FName(&local_950,"MovieSceneEval_BlendCombineDoubleValues");
    local_d50 = (FThreadSafeStaticStat<FStat_MovieSceneEval_BlendCombineDoubleValues>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &StatPtr_MovieSceneEval_BlendCombineDoubleValues,*pFVar16,
                           L"Default combine blended double values","STATGROUP_MovieSceneECS",
                           "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,
                           true,false,MCR_Invalid);
  }
  if ((int)this->_padding_ != 0) {
    EVar14 = UE::MovieScene::FCachedEntityManagerState::Update
                       (&this->ChannelRelevancyCache,(FEntityManager *)FVar26);
    if (EVar14 == Stale) {
      ReinitializeAccumulationBuffers(this);
    }
    else {
      ZeroAccumulationBuffers(this);
    }
    if (((((this->AccumulationBuffers).Absolute.Pairs.ArrayNum != 0) ||
         ((this->AccumulationBuffers).Relative.Pairs.ArrayNum != 0)) ||
        ((this->AccumulationBuffers).Additive.Pairs.ArrayNum != 0)) ||
       (((this->AccumulationBuffers).AdditiveFromBase.Pairs.ArrayNum != 0 ||
        ((this->AccumulationBuffers).AdditiveAndOverrides.Pairs.ArrayNum != 0)))) {
      pFVar18 = UE::MovieScene::FBuiltInComponentTypes::Get();
      uVar6 = (pFVar18->Tags).ExternalBlending.Value;
      if (uVar6 == 0xffff) {
        uVar28 = 0x7fff;
      }
      else {
        uVar28 = (uint)uVar6;
      }
      local_8a8.Prereqs.ArrayMax = 4;
      uVar27 = (undefined2)uVar28;
      uVar28 = uVar28 & 0xffff7fff;
      local_8a8.Prereqs.AllocatorInstance.SecondaryData =
           (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0;
      local_8a8.Prereqs.ArrayNum = 0;
      local_8a8.AllTasks.AllocatorInstance.SecondaryData =
           (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_8a8.AllTasks.ArrayNum = 0;
      local_8a8.AllTasks.ArrayMax = 4;
      pFVar24 = local_d28;
      local_d1c = uVar28;
      local_cf0._8_8_ = pFVar18;
      if ((this->AccumulationBuffers).Absolute.Pairs.ArrayNum != 0) {
        pTStack_c28 = &TStatId::TStatId_NAME_None;
        local_a58 = pFVar18->BlendChannelInput;
        auStack_c40._16_8_ = 0;
        uStack_c14 = uStack_c14 & 0xffffff00;
        local_6e0.AllMask.Bits.NumBits = 0;
        FStack_a50.Data = (FScriptContainerElement *)0x0;
        pTStack_a48 = &TStatId::TStatId_NAME_None;
        local_6e0.NoneMask.Bits.NumBits = 0;
        local_6e0.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_6e0.ComplexMasks.ArrayNum = 0;
        local_6e0.ComplexMasks.ArrayMax = 0;
        local_630 = 0;
        local_5f8 = 0;
        uVar22 = CONCAT22(uVar27,pFVar18->WeightAndEasingResult);
        local_d48 = uVar22 & 0x7fffffff;
        uStack_a56 = local_d48;
        local_d60.Value = (pFVar18->Tags).AbsoluteBlend.Value;
        local_708._0_8_ = CONCAT26(uStack_a52,CONCAT42(uVar22,local_a58)) & 0xffff7fffffffffff;
        local_d5e = *(undefined2 *)((longlong)&this->_padding_ + 6);
        local_ad8 = &local_d60;
        pFStack_ad0 = (FComponentTypeID *)local_d5c;
        uStack_c18 = 0x6ff;
        FStack_a40.Data =
             (FScriptContainerElement *)(CONCAT71(uStack_c1f,local_c20) & 0xffffffffffffffe0);
        FStack_a38.Data = (FScriptContainerElement *)CONCAT44(uStack_c14,0x6ff);
        local_708._8_8_ = 0;
        local_6e0.AllMask.Bits.MaxBits = 0x180;
        local_6e0.NoneMask.Bits.MaxBits = 0x180;
        local_708._16_8_ = &TStatId::TStatId_NAME_None;
        local_62c = 0x180;
        local_5f4 = 0x180;
        local_c20 = local_c20 & 0xe0;
        pFStack_6f0 = FStack_a40.Data;
        local_6e8 = FStack_a38.Data;
        UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_708,&local_6e0);
        local_938._First = local_ad8;
        local_938._Last = pFStack_ad0;
        UE::MovieScene::FComponentMask::SetAll(&local_6e0.AllMask,&local_938);
        UE::MovieScene::FEntityComponentFilter::Complex
                  (&local_6e0,&this->BlendedResultMask,OneOrMoreOf);
        local_d84.Value = (pFVar18->Tags).Ignored.Value;
        local_ac8.Data = (FScriptContainerElement *)&local_d84;
        FStack_ac0.Data = local_d82;
        local_928._First = (FComponentTypeID *)local_ac8.Data;
        local_928._Last = (FComponentTypeID *)FStack_ac0.Data;
        UE::MovieScene::FComponentMask::SetAll(&local_6e0.NoneMask,&local_928);
        pFVar24 = local_d28;
        local_ce0 = &this->AccumulationBuffers;
        local_708._16_8_ = FVar17;
        UE::MovieScene::
        TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
        ::
        Dispatch_PerAllocation<UE::MovieScene::FAccumulationTask,TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>_*>
                  ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
                    *)local_708,(FEntityManager *)local_d18,(FSystemTaskPrerequisites *)FVar26,
                   (FSystemSubsequentTasks *)local_d28,
                   (TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                    **)0x0);
        if (local_6e0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6e0.ComplexMasks.AllocatorInstance.Data);
        }
        if ((local_d18 != (undefined1  [8])0x0) &&
           (UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
                      (&local_8a8,(FComponentTypeID)0xffff,(TRefCountPtr<FBaseGraphTask> *)local_d18
                      ), local_d18 != (undefined1  [8])0x0)) {
          LOCK();
          puVar1 = (undefined1 *)((longlong)local_d18 + 0x30);
          iVar5 = *(int *)puVar1;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          UNLOCK();
          if ((iVar5 == 1) && (local_d18 != (undefined1  [8])0x0)) {
            (*(code *)**(undefined8 **)local_d18)(local_d18,1);
          }
        }
      }
      if ((this->AccumulationBuffers).Relative.Pairs.ArrayNum != 0) {
        local_c58._8_8_ = &TStatId::TStatId_NAME_None;
        local_a30 = pFVar18->BlendChannelInput;
        local_c58._0_8_ = 0;
        local_5c0.AllMask.Bits.NumBits = 0;
        local_5c0.NoneMask.Bits.NumBits = 0;
        FStack_a28.Data = (FScriptContainerElement *)0x0;
        pTStack_a20 = &TStatId::TStatId_NAME_None;
        local_5c0.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_510 = 0;
        local_4d8 = 0;
        uVar22 = CONCAT22(uVar27,pFVar18->WeightAndEasingResult);
        local_d44 = uVar22 & 0x7fffffff;
        uStack_a2e = local_d44;
        local_d5c._0_2_ = (pFVar18->Tags).RelativeBlend.Value;
        local_5e8._0_8_ = CONCAT26(uStack_a2a,CONCAT42(uVar22,local_a30)) & 0xffff7fffffffffff;
        local_d5c._2_2_ = *(undefined2 *)((longlong)&this->_padding_ + 6);
        local_ab8.Data = (FScriptContainerElement *)local_d5c;
        FStack_ab0.Data = (FScriptContainerElement *)&local_d58;
        auStack_c40._0_4_ = 0x6ff;
        auStack_c40._4_4_ = auStack_c40._4_4_ & 0xffffff00;
        pbStack_a18 = (bool *)(CONCAT71(uStack_c47,local_c48) & 0xffffffffffffffe0);
        uStack_a10 = CONCAT44(auStack_c40._4_4_,0x6ff);
        local_5e8._8_8_ = 0;
        local_5c0.AllMask.Bits.MaxBits = 0x180;
        local_5c0.NoneMask.Bits.MaxBits = 0x180;
        local_5e8._16_8_ = &TStatId::TStatId_NAME_None;
        local_5c0.ComplexMasks.ArrayNum = 0;
        local_5c0.ComplexMasks.ArrayMax = 0;
        local_50c = 0x180;
        local_4d4 = 0x180;
        local_c48 = local_c48 & 0xe0;
        pbStack_5d0 = pbStack_a18;
        local_5c8 = uStack_a10;
        UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_5e8,&local_5c0);
        local_918._First = (FComponentTypeID *)local_ab8.Data;
        local_918._Last = (FComponentTypeID *)FStack_ab0.Data;
        UE::MovieScene::FComponentMask::SetAll(&local_5c0.AllMask,&local_918);
        UE::MovieScene::FEntityComponentFilter::Complex
                  (&local_5c0,&this->BlendedResultMask,OneOrMoreOf);
        local_d80.Value = (pFVar18->Tags).Ignored.Value;
        local_b68 = &local_d80;
        pFStack_b60 = &local_d7e;
        local_9d8._First = local_b68;
        local_9d8._Last = pFStack_b60;
        UE::MovieScene::FComponentMask::SetAll(&local_5c0.NoneMask,&local_9d8);
        local_cd8 = &(this->AccumulationBuffers).Relative;
        local_5e8._16_8_ = FVar17;
        UE::MovieScene::
        TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
        ::
        Dispatch_PerAllocation<UE::MovieScene::FAccumulationTask,TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>_*>
                  ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
                    *)local_5e8,(FEntityManager *)local_d10,(FSystemTaskPrerequisites *)FVar26,
                   (FSystemSubsequentTasks *)pFVar24,
                   (TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                    **)0x0);
        if (local_5c0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5c0.ComplexMasks.AllocatorInstance.Data);
        }
        if ((local_d10 != (undefined1  [8])0x0) &&
           (UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
                      (&local_8a8,(FComponentTypeID)0xffff,(TRefCountPtr<FBaseGraphTask> *)local_d10
                      ), local_d10 != (undefined1  [8])0x0)) {
          LOCK();
          puVar1 = (undefined1 *)((longlong)local_d10 + 0x30);
          iVar5 = *(int *)puVar1;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          UNLOCK();
          if ((iVar5 == 1) && (local_d10 != (undefined1  [8])0x0)) {
            (*(code *)**(undefined8 **)local_d10)(local_d10,1);
          }
        }
      }
      if ((this->AccumulationBuffers).Additive.Pairs.ArrayNum != 0) {
        local_c90._24_8_ = &TStatId::TStatId_NAME_None;
        local_a80 = pFVar18->BlendChannelInput;
        local_c90._16_8_ = 0;
        auStack_c68._4_4_ = auStack_c68._4_4_ & 0xffffff00;
        local_4a0.AllMask.Bits.NumBits = 0;
        pbStack_a78 = (bool *)0x0;
        pTStack_a70 = &TStatId::TStatId_NAME_None;
        local_4a0.NoneMask.Bits.NumBits = 0;
        local_4a0.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4a0.ComplexMasks.ArrayNum = 0;
        local_4a0.ComplexMasks.ArrayMax = 0;
        local_3f0 = 0;
        local_3b8 = 0;
        uVar22 = CONCAT22(uVar27,pFVar18->WeightAndEasingResult);
        local_d40 = uVar22 & 0x7fffffff;
        uStack_a7e = local_d40;
        local_d58.Value = (pFVar18->Tags).AdditiveBlend.Value;
        local_4c8._0_8_ = CONCAT26(auStack_a7a,CONCAT42(uVar22,local_a80)) & 0xffff7fffffffffff;
        local_d56 = *(undefined2 *)((longlong)&this->_padding_ + 6);
        local_b58 = &local_d58;
        pFStack_b50 = &local_d54;
        auStack_c68._0_4_ = 0x6ff;
        pbStack_a68 = (bool *)(CONCAT71(uStack_c6f,local_c70) & 0xffffffffffffffe0);
        aTStack_a60[1].Pad[0] = auStack_c68[4];
        aTStack_a60[1].Pad[1] = auStack_c68[5];
        aTStack_a60[1].Pad[2] = auStack_c68[6];
        aTStack_a60[1].Pad[3] = auStack_c68[7];
        aTStack_a60[0].Pad[0] = 0xff;
        aTStack_a60[0].Pad[1] = '\x06';
        aTStack_a60[0].Pad[2] = '\0';
        aTStack_a60[0].Pad[3] = '\0';
        local_4c8._8_8_ = 0;
        local_4a0.AllMask.Bits.MaxBits = 0x180;
        local_4a0.NoneMask.Bits.MaxBits = 0x180;
        local_4c8._16_8_ = &TStatId::TStatId_NAME_None;
        local_3ec = 0x180;
        local_3b4 = 0x180;
        local_c70 = local_c70 & 0xe0;
        pbStack_4b0 = pbStack_a68;
        local_4a8 = aTStack_a60;
        UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_4c8,&local_4a0);
        local_9c8._First = local_b58;
        local_9c8._Last = pFStack_b50;
        UE::MovieScene::FComponentMask::SetAll(&local_4a0.AllMask,&local_9c8);
        UE::MovieScene::FEntityComponentFilter::Complex
                  (&local_4a0,&this->BlendedResultMask,OneOrMoreOf);
        local_d7c.Value = (pFVar18->Tags).Ignored.Value;
        local_b48 = &local_d7c;
        pFStack_b40 = &local_d7a;
        local_9b8._First = local_b48;
        local_9b8._Last = pFStack_b40;
        UE::MovieScene::FComponentMask::SetAll(&local_4a0.NoneMask,&local_9b8);
        local_cd0 = &(this->AccumulationBuffers).Additive;
        local_4c8._16_8_ = FVar17;
        UE::MovieScene::
        TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
        ::
        Dispatch_PerAllocation<UE::MovieScene::FAccumulationTask,TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>_*>
                  ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
                    *)local_4c8,(FEntityManager *)local_d08,(FSystemTaskPrerequisites *)FVar26,
                   (FSystemSubsequentTasks *)pFVar24,
                   (TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                    **)0x0);
        if (local_4a0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4a0.ComplexMasks.AllocatorInstance.Data);
        }
        if ((local_d08 != (undefined1  [8])0x0) &&
           (UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
                      (&local_8a8,(FComponentTypeID)0xffff,(TRefCountPtr<FBaseGraphTask> *)local_d08
                      ), local_d08 != (undefined1  [8])0x0)) {
          LOCK();
          puVar1 = (undefined1 *)((longlong)local_d08 + 0x30);
          iVar5 = *(int *)puVar1;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          UNLOCK();
          if ((iVar5 == 1) && (local_d08 != (undefined1  [8])0x0)) {
            (*(code *)**(undefined8 **)local_d08)(local_d08,1);
          }
        }
      }
      if ((this->AccumulationBuffers).AdditiveAndOverrides.Pairs.ArrayNum != 0) {
        pTVar3 = &(this->AccumulationBuffers).AdditiveAndOverrides;
        local_d20 = (this->AccumulationBuffers).AdditiveAndOverrides.Pairs.ArrayNum;
        uVar23 = (ulonglong)(int)local_d20;
        FVar29 = (ForElementType<unsigned_int>)(pTVar3->Pairs).AllocatorInstance.Data;
        local_cb8 = (ForElementType<unsigned_int>)((longlong)FVar29 + uVar23 * 0x18);
        while( true ) {
          FVar12 = local_cb8;
          if ((this->AccumulationBuffers).AdditiveAndOverrides.Pairs.ArrayNum != (int)uVar23) {
            local_d88[0] = 0;
            `TCheckedPointerIterator<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_d88);
          }
          uVar28 = local_d1c;
          if (FVar29 == FVar12) break;
          local_c08._8_8_ = &TStatId::TStatId_NAME_None;
          local_d3c._0_2_ = pFVar18->WeightAndEasingResult;
          local_d3c._2_1_ = 0xff;
          local_d3c._3_1_ = '\x7f';
          auVar11 = local_d3c;
          local_aa8 = pFVar18->BlendChannelInput;
          TStack_aa6 = pFVar18->BlendingOrder;
          TStack_aa4.Pad[0] = (uchar)local_d3c;
          TStack_aa4.Pad[1] = local_d3c._1_1_;
          TStack_aa4.Pad[2] = 0xff;
          TStack_aa4.Pad[3] = '\x7f';
          local_d78.Value = *(ushort *)((longlong)&this->_padding_ + 6);
          local_c08._0_8_ = 0;
          auStack_bf0._4_4_ = auStack_bf0._4_4_ & 0xffffff00;
          local_b38 = &local_d78;
          FStack_aa0.Data = (FScriptContainerElement *)0x0;
          pTStack_a98 = &TStatId::TStatId_NAME_None;
          pFStack_b30 = &local_d76;
          local_828._2_2_ = TStack_aa6;
          local_828._0_2_ = local_aa8;
          local_828[4] = (uchar)local_d3c;
          local_828[5] = local_d3c._1_1_;
          local_828[6] = 0xff;
          local_828[7] = '\x7f';
          local_800.AllMask.Bits.NumBits = 0;
          local_800.NoneMask.Bits.NumBits = 0;
          local_800.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_800.ComplexMasks.ArrayNum = 0;
          local_800.ComplexMasks.ArrayMax = 0;
          local_780.NumBits = 0;
          local_718 = 0;
          auStack_bf0._0_4_ = 0x6ff;
          pFStack_a90 = (FComponentRegistry *)(CONCAT71(uStack_bf7,local_bf8) & 0xffffffffffffffe0);
          FStack_a88.Data = (FScriptContainerElement *)CONCAT44(auStack_bf0._4_4_,0x6ff);
          uStack_820 = 0;
          local_800.AllMask.Bits.MaxBits = 0x180;
          local_800.NoneMask.Bits.MaxBits = 0x180;
          local_818 = (FThreadSafeStaticStat<FStat_MovieSceneEval_BlendDoubleValues>)
                      &TStatId::TStatId_NAME_None;
          local_780.MaxBits = 0x180;
          local_714 = 0x180;
          local_d3c = auVar11;
          local_bf8 = local_bf8 & 0xe0;
          pFStack_810 = pFStack_a90;
          local_808 = FStack_a88.Data;
          UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_828,&local_800);
          UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_828 + 2),&local_800);
          local_9a8._First = local_b38;
          local_9a8._Last = pFStack_b30;
          UE::MovieScene::FComponentMask::SetAll(&local_800.AllMask,&local_9a8);
          FVar7.Value = (pFVar18->Tags).AdditiveBlend.Value;
          FVar8.Value = (pFVar18->Tags).OverrideBlend.Value;
          if ((FVar7.Value == 0xffff) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("B.Value != INVALID",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                                  ,0xeb,L""), bVar13)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          UE::MovieScene::FComponentMask::Set(&this->BlendedResultMask,FVar7);
          if ((FVar8.Value == 0xffff) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("B.Value != INVALID",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                                  ,0xeb,L""), bVar13)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          UE::MovieScene::FComponentMask::Set(&this->BlendedResultMask,FVar8);
          UE::MovieScene::FEntityComponentFilter::Complex
                    (&local_800,&this->BlendedResultMask,OneOrMoreOf);
          local_d74.Value = (((<unnamed_type_Tags> *)(local_cf0._8_8_ + 0x120))->Ignored).Value;
          local_b28 = &local_d74;
          pFStack_b20 = &local_d72;
          local_998._First = local_b28;
          local_998._Last = pFStack_b20;
          UE::MovieScene::FComponentMask::SetAll(&local_800.NoneMask,&local_998);
          UE::Core::Private::
          BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                    (&(this->BlendedResultMask).Bits,&local_780,MaxSize,&local_d64);
          FVar26 = local_cc0;
          local_818 = (FThreadSafeStaticStat<FStat_MovieSceneEval_BlendDoubleValues>)local_d00._8_8_
          ;
          local_cc8 = (ForElementType<unsigned_int>)pTVar3;
          UE::MovieScene::
          TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
          ::
          Dispatch_PerAllocation<UE::MovieScene::FAdditiveAndOverridesTask,TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>_*>
                    ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
                      *)local_828,(FEntityManager *)local_d00,(FSystemTaskPrerequisites *)local_cc0,
                     (FSystemSubsequentTasks *)local_d28,
                     (TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                      **)0x0);
          if (local_800.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_800.ComplexMasks.AllocatorInstance.Data);
          }
          if (((FBaseGraphTask *)local_d00._0_8_ != (FBaseGraphTask *)0x0) &&
             (UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
                        (&local_8a8,(FComponentTypeID)0xffff,
                         (TRefCountPtr<FBaseGraphTask> *)local_d00),
             (FBaseGraphTask *)local_d00._0_8_ != (FBaseGraphTask *)0x0)) {
            LOCK();
            puVar1 = (undefined1 *)(local_d00._0_8_ + 0x30);
            iVar5 = *(int *)puVar1;
            *(int *)puVar1 = *(int *)puVar1 + -1;
            UNLOCK();
            if ((iVar5 == 1) && ((FBaseGraphTask *)local_d00._0_8_ != (FBaseGraphTask *)0x0)) {
              (*(code *)**(undefined8 **)local_d00._0_8_)(local_d00._0_8_,1);
            }
          }
          FVar29 = (ForElementType<unsigned_int>)((longlong)FVar29 + 0x18);
          uVar23 = (ulonglong)local_d20;
          pFVar18 = (FBuiltInComponentTypes *)local_cf0._8_8_;
        }
      }
      uVar23 = 0;
      if ((this->AccumulationBuffers).AdditiveFromBase.Pairs.ArrayNum != 0) {
        local_a08 = pFVar18->BlendChannelInput;
        uStack_d36 = (short)uVar28;
        local_d38 = pFVar18->WeightAndEasingResult;
        uStack_a06 = _local_d38;
        local_d54.Value = (pFVar18->Tags).AdditiveFromBaseBlend.Value;
        local_d52 = *(undefined2 *)((longlong)&this->_padding_ + 6);
        local_b18 = &local_d54;
        pFStack_b10 = &local_d50;
        auStack_bf0._16_8_ = 0;
        pTStack_bd8 = &TStatId::TStatId_NAME_None;
        TStack_bc8.Pad[0] = 0xff;
        TStack_bc8.Pad[1] = '\x06';
        TStack_bc8.Pad[2] = '\0';
        TStack_bc8.Pad[3] = '\0';
        TStack_bc4.Pad = TStack_bc4.Pad & 0xffffff00;
        uStack_9f0 = CONCAT71(uStack_bcf,local_bd0) & 0xffffffffffffffe0;
        uStack_9e8._4_1_ = TStack_bc4.Pad[0];
        uStack_9e8._5_1_ = TStack_bc4.Pad[1];
        uStack_9e8._6_1_ = TStack_bc4.Pad[2];
        uStack_9e8._7_1_ = TStack_bc4.Pad[3];
        uStack_9e8._0_4_ = 0x6ff;
        uStack_a00._0_4_ = 0;
        uStack_a00._4_4_ = 0;
        pTStack_9f8 = &TStatId::TStatId_NAME_None;
        local_380.AllMask.Bits.NumBits = 0;
        local_3a8._2_4_ = _local_d38;
        local_3a8._0_2_ = local_a08;
        local_3a8._6_2_ = uStack_a02;
        local_380.AllMask.Bits.MaxBits = 0x180;
        local_380.NoneMask.Bits.NumBits = 0;
        local_380.NoneMask.Bits.MaxBits = 0x180;
        local_3a8._8_8_ = 0;
        local_3a8._16_8_ = &TStatId::TStatId_NAME_None;
        local_380.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_380.ComplexMasks.ArrayNum = 0;
        local_380.ComplexMasks.ArrayMax = 0;
        local_2d0 = 0;
        local_2cc = 0x180;
        local_298 = 0;
        local_294 = 0x180;
        local_bd0 = local_bd0 & 0xe0;
        uStack_390 = uStack_9f0;
        local_388 = uStack_9e8;
        UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_3a8,&local_380);
        local_988._First = local_b18;
        local_988._Last = (FComponentTypeID *)pFStack_b10;
        UE::MovieScene::FComponentMask::SetAll(&local_380.AllMask,&local_988);
        UE::MovieScene::FEntityComponentFilter::Complex
                  (&local_380,&this->BlendedResultMask,OneOrMoreOf);
        local_d70.Value = (pFVar18->Tags).Ignored.Value;
        local_b08 = &local_d70;
        pFStack_b00 = &local_d6e;
        local_978._First = local_b08;
        local_978._Last = pFStack_b00;
        UE::MovieScene::FComponentMask::SetAll(&local_380.NoneMask,&local_978);
        local_3a8._16_8_ = local_d00._8_8_;
        local_cb0 = (ForElementType<unsigned_int>)&(this->AccumulationBuffers).AdditiveFromBase;
        UE::MovieScene::
        TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
        ::
        Dispatch_PerAllocation<UE::MovieScene::FAdditiveFromBaseBlendTask,TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>_*>
                  ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
                    *)local_3a8,(FEntityManager *)local_cf0,(FSystemTaskPrerequisites *)FVar26,
                   (FSystemSubsequentTasks *)local_d28,
                   (TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                    **)0x0);
        if (local_380.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_380.ComplexMasks.AllocatorInstance.Data);
        }
        if (((FBaseGraphTask *)local_cf0._0_8_ != (FBaseGraphTask *)0x0) &&
           (UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
                      (&local_8a8,(FComponentTypeID)0xffff,(TRefCountPtr<FBaseGraphTask> *)local_cf0
                      ), (FBaseGraphTask *)local_cf0._0_8_ != (FBaseGraphTask *)0x0)) {
          LOCK();
          puVar1 = (undefined1 *)(local_cf0._0_8_ + 0x30);
          iVar5 = *(int *)puVar1;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          UNLOCK();
          if ((iVar5 == 1) && ((FBaseGraphTask *)local_cf0._0_8_ != (FBaseGraphTask *)0x0)) {
            (*(code *)**(undefined8 **)local_cf0._0_8_)(local_cf0._0_8_,1);
          }
        }
      }
      iVar5 = (this->BlendedPropertyMask).Bits.NumBits;
      uVar28 = iVar5 + 0x1f;
      FVar25 = local_d50;
      pFVar30 = local_d30;
      if (uVar28 >> 5 != 0) {
        pFVar19 = &this->BlendedPropertyMask;
LAB_146848196:
        if (*(int *)(pFVar19->Bits).AllocatorInstance.InlineData[0].Pad == 0)
        goto code_r0x00014684819f;
        pTVar4 = (this->BlendedPropertyMask).Bits.AllocatorInstance.InlineData + uVar23;
        iVar9 = 0;
        bVar13 = *(int *)pTVar4->Pad != 0;
        if (bVar13) {
          for (; (*(uint *)pTVar4->Pad >> iVar9 & 1) == 0; iVar9 = iVar9 + 1) {
          }
        }
        iVar15 = 0x20;
        if (bVar13) {
          iVar15 = iVar9;
        }
        iVar15 = iVar15 + (int)uVar23 * 0x20;
        if ((iVar15 < iVar5) && (iVar15 != -1)) {
          local_8f8 = pFVar18->BlendChannelOutput;
          local_d6c.Value = *(ushort *)((longlong)&this->_padding_ + 6);
          local_ae8 = &local_d6c;
          pFStack_ae0 = &local_d6a;
          local_bb8._0_8_ = 0;
          local_bb8._8_8_ = &TStatId::TStatId_NAME_None;
          iStack_ba0 = 0x6ff;
          TStack_b9c.Pad = TStack_b9c.Pad & 0xffffff00;
          uStack_8e0 = CONCAT71(uStack_ba7,local_ba8) & 0xffffffffffffffe0;
          uStack_8d8._4_1_ = TStack_b9c.Pad[0];
          uStack_8d8._5_1_ = TStack_b9c.Pad[1];
          uStack_8d8._6_1_ = TStack_b9c.Pad[2];
          uStack_8d8._7_1_ = TStack_b9c.Pad[3];
          uStack_8d8._0_4_ = 0x6ff;
          uStack_8f0 = 0;
          pTStack_8e8 = &TStatId::TStatId_NAME_None;
          local_140.AllMask.Bits.NumBits = 0;
          local_168._2_6_ = uStack_8f6;
          local_168._0_2_ = local_8f8;
          local_140.AllMask.Bits.MaxBits = 0x180;
          local_140.NoneMask.Bits.NumBits = 0;
          local_140.NoneMask.Bits.MaxBits = 0x180;
          local_168._8_8_ = 0;
          local_168._16_8_ = &TStatId::TStatId_NAME_None;
          local_140.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_140.ComplexMasks.ArrayNum = 0;
          local_140.ComplexMasks.ArrayMax = 0;
          local_90 = 0;
          local_8c = 0x180;
          local_58 = 0;
          local_54 = 0x180;
          local_ba8 = local_ba8 & 0xe0;
          uStack_150 = uStack_8e0;
          local_148 = uStack_8d8;
          UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_168,&local_140);
          local_968._First = local_ae8;
          local_968._Last = pFStack_ae0;
          UE::MovieScene::FComponentMask::SetAll(&local_140.AllMask,&local_968);
          UE::MovieScene::FEntityComponentFilter::Complex
                    (&local_140,&this->BlendedPropertyMask,OneOrMoreOf);
          FVar25 = local_d50;
          local_168._16_8_ = local_d50;
          UE::MovieScene::FEntityAllocationWriteContext::FEntityAllocationWriteContext
                    (&local_958,(FEntityManager *)FVar26);
          pFVar30 = local_d30;
          local_ca8.SystemSerial = (ulong64)&this->AccumulationBuffers;
          UE::MovieScene::
          TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>::
          Dispatch_PerAllocation<UE::MovieScene::FLegacyCombineBlendsForProperties,TBitArray<FDefaultBitArrayAllocator>_&,UE::MovieScene::FAccumulationBuffers_*,UE::MovieScene::FEntityAllocationWriteContext>
                    ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_> *
                     )local_168,(FEntityManager *)local_ca0,(FSystemTaskPrerequisites *)FVar26,
                     (FSystemSubsequentTasks *)&local_8a8,
                     (TBitArray<FDefaultBitArrayAllocator> *)local_d30,
                     (FAccumulationBuffers **)&this->CachedRelevantProperties,&local_ca8);
          if ((ForElementType<unsigned_int>)local_ca0 != (ForElementType<unsigned_int>)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)local_ca0 + 0x30);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (*(code *)**(undefined8 **)local_ca0)(local_ca0,1);
            }
          }
          if (local_140.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.ComplexMasks.AllocatorInstance.Data);
          }
        }
      }
LAB_1468481b1:
      if (this->bContainsNonPropertyBlends != false) {
        pTStack_b88 = &TStatId::TStatId_NAME_None;
        local_8d0 = pFVar18->BlendChannelOutput;
        local_d68.Value = *(ushort *)((longlong)&this->_padding_ + 6);
        local_af8 = &local_d68;
        pFStack_af0 = &local_d66;
        local_b90 = 0;
        TStack_b78.Pad[0] = 0xff;
        TStack_b78.Pad[1] = '\x06';
        TStack_b78.Pad[2] = '\0';
        TStack_b78.Pad[3] = '\0';
        TStack_b74.Pad = TStack_b74.Pad & 0xffffff00;
        uStack_8b8 = CONCAT71(uStack_b7f,local_b80) & 0xffffffffffffffe0;
        uStack_8b0._4_1_ = TStack_b74.Pad[0];
        uStack_8b0._5_1_ = TStack_b74.Pad[1];
        uStack_8b0._6_1_ = TStack_b74.Pad[2];
        uStack_8b0._7_1_ = TStack_b74.Pad[3];
        uStack_8b0._0_4_ = 0x6ff;
        uStack_8c8 = 0;
        pTStack_8c0 = &TStatId::TStatId_NAME_None;
        local_260.AllMask.Bits.NumBits = 0;
        local_288._2_6_ = uStack_8ce;
        local_288._0_2_ = local_8d0;
        local_260.AllMask.Bits.MaxBits = 0x180;
        local_260.NoneMask.Bits.NumBits = 0;
        local_260.NoneMask.Bits.MaxBits = 0x180;
        local_288._8_8_ = 0;
        local_288._16_8_ = &TStatId::TStatId_NAME_None;
        local_260.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_260.ComplexMasks.ArrayNum = 0;
        local_260.ComplexMasks.ArrayMax = 0;
        local_1b0 = 0;
        local_1ac = 0x180;
        local_178 = 0;
        local_174 = 0x180;
        local_b80 = local_b80 & 0xe0;
        uStack_270 = uStack_8b8;
        local_268 = uStack_8b0;
        UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_288,&local_260);
        local_908._First = local_af8;
        local_908._Last = pFStack_af0;
        UE::MovieScene::FComponentMask::SetAll(&local_260.AllMask,&local_908);
        UE::MovieScene::FEntityComponentFilter::Complex
                  (&local_260,&this->BlendedResultMask,OneOrMoreOf);
        UE::Core::Private::
        BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                  (&(this->BlendedPropertyMask).Bits,&local_260.NoneMask.Bits,MaxSize,local_d63);
        local_288._16_8_ = FVar25;
        UE::MovieScene::FEntityAllocationWriteContext::FEntityAllocationWriteContext
                  (&local_940,(FEntityManager *)FVar26);
        local_c98.SystemSerial = (ulong64)&this->AccumulationBuffers;
        UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>
        ::
        Dispatch_PerAllocation<UE::MovieScene::FCombineBlends,UE::MovieScene::FAccumulationBuffers_*,UE::MovieScene::FEntityAllocationWriteContext>
                  ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_> *)
                   local_288,(FEntityManager *)local_c90,(FSystemTaskPrerequisites *)FVar26,
                   (FSystemSubsequentTasks *)&local_8a8,(FAccumulationBuffers **)pFVar30,&local_c98)
        ;
        if ((undefined8 *)local_c90._0_8_ != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(local_c90._0_8_ + 0x30);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (*(code *)**(undefined8 **)local_c90._0_8_)(local_c90._0_8_,1);
          }
        }
        if (local_260.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_260.ComplexMasks.AllocatorInstance.Data);
        }
      }
      FVar20 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_8a8.AllTasks;
      if (local_8a8.AllTasks.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar20 = local_8a8.AllTasks.AllocatorInstance.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar20,local_8a8.AllTasks.ArrayNum);
      if (local_8a8.AllTasks.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_8a8.AllTasks.AllocatorInstance.SecondaryData);
      }
      FVar21 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)&local_8a8;
      if (local_8a8.Prereqs.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
        FVar21 = local_8a8.Prereqs.AllocatorInstance.SecondaryData;
      }
      DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
                ((FPrerequisite *)FVar21,local_8a8.Prereqs.ArrayNum);
      if (local_8a8.Prereqs.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
        FMemory::Free((void *)local_8a8.Prereqs.AllocatorInstance.SecondaryData);
      }
    }
  }
  return;
code_r0x00014684819f:
  uVar22 = (int)uVar23 + 1;
  uVar23 = (ulonglong)uVar22;
  pFVar19 = (FComponentMask *)((pFVar19->Bits).AllocatorInstance.InlineData + 1);
  if ((int)(uVar28 >> 5) <= (int)uVar22) goto LAB_1468481b1;
  goto LAB_146848196;
}

// OnSchedulePersistentTasks @ 14684d090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePiecewiseDoubleBlenderSystem::OnSchedulePersistentTasks
          (UMovieScenePiecewiseDoubleBlenderSystem *this,IEntitySystemScheduler *param_1)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  FComponentTypeID FVar2;
  FComponentTypeID FVar3;
  TComponentTypeID<double> TVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  FName *pFVar8;
  FBuiltInComponentTypes *pFVar9;
  FComponentMask *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  TReferenceControllerBase<1> *pTVar18;
  TComponentTypeID<double> *pTVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  ForElementType<unsigned_int> FVar23;
  ForElementType<unsigned_int> FVar24;
  int iVar25;
  ushort uVar26;
  FEntityManager *pFVar27;
  FThreadSafeStaticStat<FStat_MovieSceneEval_BlendDoubleValues> FVar28;
  undefined1 auStackY_f38 [32];
  undefined1 local_ed0;
  undefined1 local_ecf;
  undefined1 local_ece [2];
  FTaskID local_ecc;
  FComponentTypeID local_ec8;
  FComponentTypeID local_ec6;
  undefined2 local_ec4;
  FComponentTypeID local_ec2;
  FTaskID local_ec0;
  uint local_ebc;
  FComponentTypeID local_eb8;
  FComponentTypeID local_eb6;
  FComponentTypeID local_eb4;
  FComponentTypeID local_eb2;
  FComponentTypeID local_eb0;
  FComponentTypeID local_eae;
  FComponentTypeID local_eac;
  FComponentTypeID local_eaa;
  FComponentTypeID local_ea8;
  FComponentTypeID local_ea6;
  FComponentTypeID local_ea4;
  FComponentTypeID local_ea2;
  FComponentTypeID local_ea0;
  FComponentTypeID local_e9e [3];
  FThreadSafeStaticStat<FStat_MovieSceneEval_BlendDoubleValues> local_e98;
  <lambda_1> local_e90;
  <lambda_1> local_e8f;
  <lambda_1> local_e8e;
  <lambda_1> local_e8d;
  <lambda_1> local_e8c;
  <lambda_1> local_e8b [3];
  FComponentTypeID local_e88;
  undefined2 local_e86;
  FComponentTypeID local_e84;
  undefined2 local_e82;
  FComponentTypeID local_e80;
  undefined2 local_e7e;
  FComponentTypeID local_e7c;
  undefined2 local_e7a;
  FComponentTypeID local_e78 [4];
  FEntityManager *local_e70;
  uint local_e68;
  uint local_e64;
  uint local_e60;
  uint local_e5c;
  undefined4 local_e58;
  undefined4 local_e54;
  FTaskID local_e50;
  FTaskID local_e4c;
  FTaskID local_e48;
  FTaskID local_e44;
  FTaskID local_e40;
  FTaskID local_e3c;
  FTaskID local_e38;
  ulonglong local_e30;
  FThreadSafeStaticStat<FStat_MovieSceneEval_BlendCombineDoubleValues> local_e28;
  longlong local_e20;
  FScriptContainerElement *local_e18;
  FComponentTypeID *pFStack_e10;
  FEntityAllocationWriteContext local_e08;
  undefined1 auStack_e00 [8];
  int local_df8;
  int local_df4;
  int local_df0;
  ForElementType<unsigned_int> local_de8;
  FScriptContainerElement *local_de0;
  FScriptContainerElement *local_dd8;
  TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
  *local_dd0;
  TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
  *local_dc8;
  FScriptContainerElement *local_dc0;
  FPropertyDefinition *local_db8;
  FEntityManager *local_db0;
  FTaskParams *local_da8;
  FEntityAllocationWriteContext local_da0;
  undefined1 local_d98 [16];
  TSharedPtr<UE::MovieScene::ITaskContext,1> local_d88;
  byte local_d78;
  undefined1 local_d70 [16];
  ulonglong local_d60;
  undefined1 local_d58 [16];
  ulonglong local_d48;
  undefined1 local_d40 [16];
  ulonglong local_d30;
  undefined1 local_d28 [16];
  ulonglong local_d18;
  undefined1 local_d10 [16];
  ulonglong local_d00;
  undefined1 local_cf8 [16];
  ulonglong local_ce8;
  undefined1 local_ce0 [16];
  ulonglong local_cd0;
  undefined8 local_cc0;
  TStatIdData *pTStack_cb8;
  byte local_cb0;
  undefined7 uStack_caf;
  TTypeCompatibleBytes<unsigned_int> TStack_ca8;
  TTypeCompatibleBytes<unsigned_int> TStack_ca4;
  undefined8 local_c98;
  TStatIdData *pTStack_c90;
  byte local_c88;
  TTypeCompatibleBytes<unsigned_int> TStack_c87;
  TTypeCompatibleBytes<unsigned_int> TStack_c80;
  TTypeCompatibleBytes<unsigned_int> TStack_c7c;
  undefined8 local_c70;
  TStatIdData *pTStack_c68;
  byte local_c60;
  TTypeCompatibleBytes<unsigned_int> TStack_c5f;
  TTypeCompatibleBytes<unsigned_int> TStack_c58;
  TTypeCompatibleBytes<unsigned_int> TStack_c54;
  undefined8 local_c48;
  TStatIdData *pTStack_c40;
  byte local_c38;
  TTypeCompatibleBytes<unsigned_int> TStack_c37;
  TTypeCompatibleBytes<unsigned_int> TStack_c30;
  TTypeCompatibleBytes<unsigned_int> TStack_c2c;
  undefined8 local_c20;
  TStatIdData *pTStack_c18;
  byte local_c10;
  TTypeCompatibleBytes<unsigned_int> TStack_c0f;
  TTypeCompatibleBytes<unsigned_int> TStack_c08;
  TTypeCompatibleBytes<unsigned_int> TStack_c04;
  ForAnyElementType local_bf8;
  ForAnyElementType FStack_bf0;
  byte local_be8;
  undefined7 uStack_be7;
  int iStack_be0;
  uint uStack_bdc;
  ForAnyElementType local_bd0;
  TStatIdData *pTStack_bc8;
  byte local_bc0;
  undefined7 uStack_bbf;
  uint uStack_bb8;
  FEntitySystemMaybeAtomicInt32 FStack_bb4;
  FComponentTypeID *local_ba8;
  FComponentTypeID *pFStack_ba0;
  FComponentTypeID *local_b98;
  FComponentTypeID *pFStack_b90;
  TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
  *local_b88;
  undefined1 local_b80;
  FComponentTypeID *local_b78;
  FComponentTypeID *pFStack_b70;
  FEntityManager *local_b68;
  undefined1 local_b60;
  FComponentTypeID *local_b58;
  FComponentTypeID *pFStack_b50;
  FAccumulationBuffers *local_b48;
  undefined1 local_b40;
  code *local_b38;
  undefined1 local_b30;
  FComponentTypeID *local_b28;
  FComponentTypeID *pFStack_b20;
  FComponentTypeID *local_b18;
  FComponentTypeID *pFStack_b10;
  TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *local_b08;
  undefined1 local_b00;
  FComponentTypeID *local_af8;
  FComponentTypeID *pFStack_af0;
  FComponentTypeID *local_ae8;
  FComponentTypeID *pFStack_ae0;
  TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *local_ad8;
  undefined1 local_ad0;
  FComponentTypeID *local_ac8;
  FComponentTypeID *pFStack_ac0;
  FComponentTypeID *local_ab8;
  FComponentTypeID *pFStack_ab0;
  TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *local_aa8;
  undefined1 local_aa0;
  FComponentTypeID *local_a98;
  FComponentTypeID *pFStack_a90;
  FComponentTypeID *local_a88;
  FComponentTypeID *pFStack_a80;
  TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
  *local_a78;
  undefined1 local_a70;
  undefined1 local_a68 [16];
  undefined2 local_a58;
  TComponentTypeID<FMovieSceneBlendChannelID> TStack_a56;
  uint uStack_a54;
  undefined8 uStack_a50;
  TStatIdData *pTStack_a48;
  ulonglong uStack_a40;
  undefined8 uStack_a38;
  undefined2 local_a30;
  TComponentTypeID<FMovieSceneBlendChannelID> TStack_a2e;
  uint uStack_a2c;
  undefined8 uStack_a28;
  TStatIdData *pTStack_a20;
  ulonglong uStack_a18;
  undefined8 uStack_a10;
  undefined2 local_a08;
  TComponentTypeID<FMovieSceneBlendChannelID> TStack_a06;
  uint uStack_a04;
  undefined8 uStack_a00;
  TStatIdData *pTStack_9f8;
  ulonglong uStack_9f0;
  undefined8 uStack_9e8;
  TComponentTypeID<FMovieSceneBlendChannelID> local_9e0;
  TComponentTypeID<int> TStack_9de;
  undefined4 uStack_9dc;
  undefined8 uStack_9d8;
  TStatIdData *pTStack_9d0;
  ulonglong uStack_9c8;
  undefined8 uStack_9c0;
  TComponentTypeID<FMovieSceneBlendChannelID> local_9b8;
  uint uStack_9b6;
  undefined2 uStack_9b2;
  undefined8 uStack_9b0;
  TStatIdData *pTStack_9a8;
  ulonglong uStack_9a0;
  undefined8 uStack_998;
  TComponentTypeID<FMovieSceneBlendChannelID> local_990;
  undefined4 uStack_98e;
  undefined2 uStack_98a;
  undefined8 uStack_988;
  TStatIdData *pTStack_980;
  ulonglong uStack_978;
  undefined8 uStack_970;
  initializer_list<UE::MovieScene::FComponentTypeID> local_968;
  initializer_list<UE::MovieScene::FComponentTypeID> local_958;
  initializer_list<UE::MovieScene::FComponentTypeID> local_948;
  initializer_list<UE::MovieScene::FComponentTypeID> local_938;
  initializer_list<UE::MovieScene::FComponentTypeID> local_928;
  initializer_list<UE::MovieScene::FComponentTypeID> local_918;
  initializer_list<UE::MovieScene::FComponentTypeID> local_908;
  initializer_list<UE::MovieScene::FComponentTypeID> local_8f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_8e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_8d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_8c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_8b8;
  FName local_8a8;
  FName local_8a0;
  TComponentTypeID<FMovieSceneBlendChannelID> local_898;
  undefined6 uStack_896;
  undefined8 uStack_890;
  TStatIdData *pTStack_888;
  ulonglong uStack_880;
  undefined8 uStack_878;
  TBitArray<TFixedAllocator<12>_> local_870;
  undefined1 local_838 [8];
  undefined8 uStack_830;
  FThreadSafeStaticStat<FStat_MovieSceneEval_BlendCombineDoubleValues> local_828;
  ulonglong uStack_820;
  undefined8 local_818;
  FEntityComponentFilter local_810;
  int local_760;
  int local_75c;
  TBitArray<TFixedAllocator<12>_> local_758;
  undefined1 local_718 [24];
  ulonglong uStack_700;
  undefined8 local_6f8;
  FEntityComponentFilter local_6f0;
  int local_640;
  int local_63c;
  TBitArray<TFixedAllocator<12>_> local_638;
  undefined1 local_5f8 [8];
  undefined8 uStack_5f0;
  FThreadSafeStaticStat<FStat_MovieSceneEval_BlendDoubleValues> local_5e8;
  ulonglong uStack_5e0;
  undefined8 local_5d8;
  FEntityComponentFilter local_5d0;
  TBitArray<TFixedAllocator<12>_> local_550;
  int local_4e8;
  int local_4e4;
  undefined1 local_4d8 [8];
  undefined8 uStack_4d0;
  FThreadSafeStaticStat<FStat_MovieSceneEval_BlendDoubleValues> local_4c8;
  ulonglong uStack_4c0;
  undefined8 local_4b8;
  FEntityComponentFilter local_4b0;
  TBitArray<TFixedAllocator<12>_> local_430;
  int local_3c8;
  int local_3c4;
  undefined1 local_3b8 [8];
  undefined8 uStack_3b0;
  FThreadSafeStaticStat<FStat_MovieSceneEval_BlendDoubleValues> local_3a8;
  ulonglong uStack_3a0;
  undefined8 local_398;
  FEntityComponentFilter local_390;
  TBitArray<TFixedAllocator<12>_> local_310;
  int local_2a8;
  int local_2a4;
  undefined1 local_298 [8];
  undefined8 uStack_290;
  FThreadSafeStaticStat<FStat_MovieSceneEval_BlendDoubleValues> local_288;
  ulonglong uStack_280;
  undefined8 local_278;
  FEntityComponentFilter local_270;
  TBitArray<TFixedAllocator<12>_> local_1f0;
  int local_188;
  int local_184;
  undefined1 local_178 [24];
  ulonglong uStack_160;
  undefined8 local_158;
  FEntityComponentFilter local_150;
  TBitArray<TFixedAllocator<12>_> local_d0;
  int local_68;
  int local_64;
  ulonglong local_58;
  ulonglong uVar14;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_f38;
  local_da8 = (FTaskParams *)param_1;
  UMovieSceneBlenderSystem::CompactBlendChannels((UMovieSceneBlenderSystem *)this);
  local_e70 = (FEntityManager *)(this->_padding_ + 0x28);
  pTVar18 = (TReferenceControllerBase<1> *)0x0;
  local_e98 = StatPtr_MovieSceneEval_BlendDoubleValues;
  if (StatPtr_MovieSceneEval_BlendDoubleValues ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_BlendDoubleValues>)0x0) {
    pFVar8 = ::FName::FName(&local_8a0,"MovieSceneEval_BlendDoubleValues");
    local_e98 = (FThreadSafeStaticStat<FStat_MovieSceneEval_BlendDoubleValues>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_BlendDoubleValues,
                           *pFVar8,L"Blend double values","STATGROUP_MovieSceneECS",
                           "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,
                           true,false,MCR_Invalid);
  }
  local_e28 = StatPtr_MovieSceneEval_BlendCombineDoubleValues;
  if (StatPtr_MovieSceneEval_BlendCombineDoubleValues ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_BlendCombineDoubleValues>)0x0) {
    pFVar8 = ::FName::FName(&local_8a8,"MovieSceneEval_BlendCombineDoubleValues");
    local_e28 = (FThreadSafeStaticStat<FStat_MovieSceneEval_BlendCombineDoubleValues>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &StatPtr_MovieSceneEval_BlendCombineDoubleValues,*pFVar8,
                           L"Default combine blended double values","STATGROUP_MovieSceneECS",
                           "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,
                           true,false,MCR_Invalid);
  }
  if (((int)this->_padding_ != 0) &&
     ((((ReinitializeAccumulationBuffers(this),
        (this->AccumulationBuffers).Absolute.Pairs.ArrayNum != 0 ||
        ((this->AccumulationBuffers).Relative.Pairs.ArrayNum != 0)) ||
       ((this->AccumulationBuffers).Additive.Pairs.ArrayNum != 0)) ||
      (((this->AccumulationBuffers).AdditiveFromBase.Pairs.ArrayNum != 0 ||
       ((this->AccumulationBuffers).AdditiveAndOverrides.Pairs.ArrayNum != 0)))))) {
    pFVar9 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_d78 = local_d78 & 0xe0;
    local_d88.Object = (ITaskContext *)0x15133c1e8;
    local_d88.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)&TStatId::TStatId_NAME_None;
    local_e08.SystemSerial = (ulong64)ZeroAccumulationBuffers;
    auStack_e00._4_4_ = local_a68._12_4_;
    local_b38 = UE::MovieScene::TMemberFunctionTaskWrapper<UMovieScenePiecewiseDoubleBlenderSystem>
                ::Execute;
    auStack_e00._0_4_ = 0;
    local_b30 = 0;
    local_d98._8_8_ = ::operator_new(0x30);
    if ((TReferenceControllerBase<1> *)local_d98._8_8_ == (TReferenceControllerBase<1> *)0x0) {
      local_d98._0_8_ = ___xmm_00000000000000000000000000000010;
      local_d98._8_8_ = _UNK_150651568;
    }
    else {
      ((TReferenceControllerBase<1> *)local_d98._8_8_)->SharedReferenceCount = (atomic<int>)0x1;
      ((TReferenceControllerBase<1> *)local_d98._8_8_)->WeakReferenceCount = (atomic<int>)0x1;
      ((TReferenceControllerBase<1> *)local_d98._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_U__TMemberFunctionTaskWrapper_VUMovieScenePiecewiseDoubleBlenderSystem___MovieScene_UE___00_SharedPointerInternals__6B_
      ;
      ((TReferenceControllerBase<1> *)(local_d98._8_8_ + 0x10))->_padding_ =
           (longlong)
           &
           ___7__TMemberFunctionTaskWrapper_VUMovieScenePiecewiseDoubleBlenderSystem___MovieScene_UE__6B_
      ;
      *(UMovieScenePiecewiseDoubleBlenderSystem **)
       &((TReferenceControllerBase<1> *)(local_d98._8_8_ + 0x10))->SharedReferenceCount = this;
      ((TReferenceControllerBase<1> *)(local_d98._8_8_ + 0x20))->_padding_ = local_e08.SystemSerial;
      ((TReferenceControllerBase<1> *)(local_d98._8_8_ + 0x20))->SharedReferenceCount =
           (atomic<int>)auStack_e00._0_4_;
      ((TReferenceControllerBase<1> *)(local_d98._8_8_ + 0x20))->WeakReferenceCount =
           (atomic<int>)auStack_e00._4_4_;
      if (((TReferenceControllerBase<1> *)(local_d98._8_8_ + 0x10) ==
           (TReferenceControllerBase<1> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      LOCK();
      ((TReferenceControllerBase<1> *)local_d98._8_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_d98._8_8_)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar18 = (TReferenceControllerBase<1> *)local_d98._8_8_;
      local_d98._0_8_ = (TReferenceControllerBase<1> *)(local_d98._8_8_ + 0x10);
    }
    UE::MovieScene::IEntitySystemScheduler::AddTask
              (param_1,(FTaskParams *)&local_ec0,&local_d88,
               (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                *)local_d98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    UE::MovieScene::IEntitySystemScheduler::AddNullTask(param_1);
    uVar26 = (pFVar9->Tags).ExternalBlending.Value;
    if (uVar26 == 0xffff) {
      uVar26 = 0x7fff;
    }
    if ((this->AccumulationBuffers).Absolute.Pairs.ArrayNum != 0) {
      iVar21 = (this->AccumulationBuffers).Absolute.Pairs.ArrayNum;
      pFVar16 = (this->AccumulationBuffers).Absolute.Pairs.AllocatorInstance.Data;
      pFVar11 = pFVar16 + (longlong)iVar21 * 0x18;
      while( true ) {
        if ((this->AccumulationBuffers).Absolute.Pairs.ArrayNum != iVar21) {
          local_ed0 = 0;
          `TCheckedPointerIterator<TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_ed0);
        }
        if (pFVar16 == pFVar11) break;
        pTStack_c90 = &TStatId::TStatId_NAME_None;
        local_a58 = *(undefined2 *)pFVar16;
        TStack_a56 = pFVar9->BlendChannelInput;
        local_c98._0_1_ = '\0';
        local_c98._1_1_ = '\0';
        local_c98._2_1_ = '\0';
        local_c98._3_1_ = '\0';
        local_c98._4_1_ = '\0';
        local_c98._5_1_ = '\0';
        local_c98._6_1_ = '\0';
        local_c98._7_1_ = '\0';
        TStack_c7c.Pad = TStack_c7c.Pad & 0xffffff00;
        local_5d0.AllMask.Bits.NumBits = 0;
        uStack_a50 = 0;
        pTStack_a48 = &TStatId::TStatId_NAME_None;
        local_5d0.NoneMask.Bits.NumBits = 0;
        local_5d0.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5d0.ComplexMasks.ArrayNum = 0;
        local_5d0.ComplexMasks.ArrayMax = 0;
        local_550.NumBits = 0;
        local_4e8 = 0;
        uVar13 = CONCAT22(uVar26,pFVar9->WeightAndEasingResult);
        local_e68 = uVar13 & 0x7fffffff;
        uStack_a54 = local_e68;
        local_e88.Value = (pFVar9->Tags).AbsoluteBlend.Value;
        local_5f8 = (undefined1  [8])
                    (CONCAT44(uVar13,CONCAT22(TStack_a56,local_a58)) & 0x7fffffffffffffff);
        local_e86 = *(undefined2 *)((longlong)&this->_padding_ + 6);
        local_b28 = &local_e88;
        pFStack_b20 = &local_e84;
        TStack_c80.Pad[0] = 0xff;
        TStack_c80.Pad[1] = '\x06';
        TStack_c80.Pad[2] = '\0';
        TStack_c80.Pad[3] = '\0';
        uStack_a40 = CONCAT71(_TStack_c87,local_c88) & 0xffffffffffffffe0;
        uStack_a38._4_1_ = TStack_c7c.Pad[0];
        uStack_a38._5_1_ = TStack_c7c.Pad[1];
        uStack_a38._6_1_ = TStack_c7c.Pad[2];
        uStack_a38._7_1_ = TStack_c7c.Pad[3];
        uStack_a38._0_4_ = 0x6ff;
        uStack_5f0 = 0;
        local_5d0.AllMask.Bits.MaxBits = 0x180;
        local_5d0.NoneMask.Bits.MaxBits = 0x180;
        local_5e8 = (FThreadSafeStaticStat<FStat_MovieSceneEval_BlendDoubleValues>)
                    &TStatId::TStatId_NAME_None;
        local_550.MaxBits = 0x180;
        local_4e4 = 0x180;
        local_c88 = local_c88 & 0xe0;
        uStack_5e0 = uStack_a40;
        local_5d8 = uStack_a38;
        UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_5f8,&local_5d0);
        UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_5f8 + 2),&local_5d0);
        local_968._First = local_b28;
        local_968._Last = pFStack_b20;
        UE::MovieScene::FComponentMask::SetAll(&local_5d0.AllMask,&local_968);
        UE::MovieScene::FEntityComponentFilter::Complex
                  (&local_5d0,&this->BlendedResultMask,OneOrMoreOf);
        local_eb4.Value = (pFVar9->Tags).Ignored.Value;
        local_b18 = &local_eb4;
        pFStack_b10 = &local_eb2;
        local_958._First = local_b18;
        local_958._Last = pFStack_b10;
        UE::MovieScene::FComponentMask::SetAll(&local_5d0.NoneMask,&local_958);
        UE::Core::Private::
        BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                  (&(this->BlendedResultMask).Bits,&local_550,MaxSize,&local_e90);
        local_5e8 = local_e98;
        local_de8 = (ForElementType<unsigned_int>)((longlong)pFVar16 + 8);
        local_d60 = uStack_5e0 | 2;
        local_d70._8_8_ = local_e98;
        local_d70._0_8_ = L"struct UE::MovieScene::FForkedAccumulationTask";
        local_b08 = (TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *)
                    UE::MovieScene::
                    TScheduledEntityTask<UE::MovieScene::FForkedAccumulationTask,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
                    ::ScheduledRun_PerAllocation;
        local_b00 = 3;
        UE::MovieScene::
        TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
        ::
        ScheduleImpl<UE::MovieScene::FForkedAccumulationTask,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_*>
                  ((TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
                    *)local_5f8,(FEntityManager *)&local_e3c,(IEntitySystemScheduler *)local_e70,
                   (FTaskParams *)param_1,
                   (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                    *)local_d70,&local_b08);
        if (local_5d0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5d0.ComplexMasks.AllocatorInstance.Data);
        }
        UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_ec0,local_e3c);
        UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_e3c,local_ecc);
        pFVar16 = pFVar16 + 0x18;
      }
    }
    if ((this->AccumulationBuffers).Relative.Pairs.ArrayNum != 0) {
      iVar21 = (this->AccumulationBuffers).Relative.Pairs.ArrayNum;
      pFVar16 = (this->AccumulationBuffers).Relative.Pairs.AllocatorInstance.Data;
      pFVar11 = pFVar16 + (longlong)iVar21 * 0x18;
      while( true ) {
        if ((this->AccumulationBuffers).Relative.Pairs.ArrayNum != iVar21) {
          local_ecf = 0;
          `TCheckedPointerIterator<TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_ecf);
        }
        if (pFVar16 == pFVar11) break;
        pTStack_c68 = &TStatId::TStatId_NAME_None;
        local_a30 = *(undefined2 *)pFVar16;
        TStack_a2e = pFVar9->BlendChannelInput;
        local_c70._0_1_ = '\0';
        local_c70._1_1_ = '\0';
        local_c70._2_1_ = '\0';
        local_c70._3_1_ = '\0';
        local_c70._4_1_ = '\0';
        local_c70._5_1_ = '\0';
        local_c70._6_1_ = '\0';
        local_c70._7_1_ = '\0';
        TStack_c54.Pad = TStack_c54.Pad & 0xffffff00;
        local_4b0.AllMask.Bits.NumBits = 0;
        uStack_a28 = 0;
        pTStack_a20 = &TStatId::TStatId_NAME_None;
        local_4b0.NoneMask.Bits.NumBits = 0;
        local_4b0.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4b0.ComplexMasks.ArrayNum = 0;
        local_4b0.ComplexMasks.ArrayMax = 0;
        local_430.NumBits = 0;
        local_3c8 = 0;
        uVar13 = CONCAT22(uVar26,pFVar9->WeightAndEasingResult);
        local_e64 = uVar13 & 0x7fffffff;
        uStack_a2c = local_e64;
        local_e84.Value = (pFVar9->Tags).RelativeBlend.Value;
        local_4d8 = (undefined1  [8])
                    (CONCAT44(uVar13,CONCAT22(TStack_a2e,local_a30)) & 0x7fffffffffffffff);
        local_e82 = *(undefined2 *)((longlong)&this->_padding_ + 6);
        local_af8 = &local_e84;
        pFStack_af0 = &local_e80;
        TStack_c58.Pad[0] = 0xff;
        TStack_c58.Pad[1] = '\x06';
        TStack_c58.Pad[2] = '\0';
        TStack_c58.Pad[3] = '\0';
        uStack_a18 = CONCAT71(_TStack_c5f,local_c60) & 0xffffffffffffffe0;
        uStack_a10._4_1_ = TStack_c54.Pad[0];
        uStack_a10._5_1_ = TStack_c54.Pad[1];
        uStack_a10._6_1_ = TStack_c54.Pad[2];
        uStack_a10._7_1_ = TStack_c54.Pad[3];
        uStack_a10._0_4_ = 0x6ff;
        uStack_4d0 = 0;
        local_4b0.AllMask.Bits.MaxBits = 0x180;
        local_4b0.NoneMask.Bits.MaxBits = 0x180;
        local_4c8 = (FThreadSafeStaticStat<FStat_MovieSceneEval_BlendDoubleValues>)
                    &TStatId::TStatId_NAME_None;
        local_430.MaxBits = 0x180;
        local_3c4 = 0x180;
        local_c60 = local_c60 & 0xe0;
        uStack_4c0 = uStack_a18;
        local_4b8 = uStack_a10;
        UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_4d8,&local_4b0);
        UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_4d8 + 2),&local_4b0);
        local_948._First = local_af8;
        local_948._Last = pFStack_af0;
        UE::MovieScene::FComponentMask::SetAll(&local_4b0.AllMask,&local_948);
        UE::MovieScene::FEntityComponentFilter::Complex
                  (&local_4b0,&this->BlendedResultMask,OneOrMoreOf);
        local_eb0.Value = (pFVar9->Tags).Ignored.Value;
        local_ae8 = &local_eb0;
        pFStack_ae0 = &local_eae;
        local_938._First = local_ae8;
        local_938._Last = pFStack_ae0;
        UE::MovieScene::FComponentMask::SetAll(&local_4b0.NoneMask,&local_938);
        UE::Core::Private::
        BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                  (&(this->BlendedResultMask).Bits,&local_430,MaxSize,&local_e8f);
        local_4c8 = local_e98;
        local_de0 = pFVar16 + 8;
        local_d48 = uStack_4c0 | 2;
        local_d58._8_8_ = local_e98;
        local_d58._0_8_ = L"struct UE::MovieScene::FForkedAccumulationTask";
        local_ad8 = (TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *)
                    UE::MovieScene::
                    TScheduledEntityTask<UE::MovieScene::FForkedAccumulationTask,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
                    ::ScheduledRun_PerAllocation;
        local_ad0 = 3;
        UE::MovieScene::
        TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
        ::
        ScheduleImpl<UE::MovieScene::FForkedAccumulationTask,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_*>
                  ((TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
                    *)local_4d8,(FEntityManager *)&local_e38,(IEntitySystemScheduler *)local_e70,
                   (FTaskParams *)param_1,
                   (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                    *)local_d58,&local_ad8);
        if (local_4b0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4b0.ComplexMasks.AllocatorInstance.Data);
        }
        UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_ec0,local_e38);
        UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_e38,local_ecc);
        pFVar16 = pFVar16 + 0x18;
      }
    }
    if ((this->AccumulationBuffers).Additive.Pairs.ArrayNum != 0) {
      iVar21 = (this->AccumulationBuffers).Additive.Pairs.ArrayNum;
      pFVar16 = (this->AccumulationBuffers).Additive.Pairs.AllocatorInstance.Data;
      pFVar11 = pFVar16 + (longlong)iVar21 * 0x18;
      while( true ) {
        if ((this->AccumulationBuffers).Additive.Pairs.ArrayNum != iVar21) {
          local_ece[0] = 0;
          `TCheckedPointerIterator<TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_ece);
        }
        if (pFVar16 == pFVar11) break;
        pTStack_c40 = &TStatId::TStatId_NAME_None;
        local_a08 = *(undefined2 *)pFVar16;
        TStack_a06 = pFVar9->BlendChannelInput;
        local_c48._0_1_ = '\0';
        local_c48._1_1_ = '\0';
        local_c48._2_1_ = '\0';
        local_c48._3_1_ = '\0';
        local_c48._4_1_ = '\0';
        local_c48._5_1_ = '\0';
        local_c48._6_1_ = '\0';
        local_c48._7_1_ = '\0';
        TStack_c2c.Pad = TStack_c2c.Pad & 0xffffff00;
        local_390.AllMask.Bits.NumBits = 0;
        uStack_a00 = 0;
        pTStack_9f8 = &TStatId::TStatId_NAME_None;
        local_390.NoneMask.Bits.NumBits = 0;
        local_390.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_390.ComplexMasks.ArrayNum = 0;
        local_390.ComplexMasks.ArrayMax = 0;
        local_310.NumBits = 0;
        local_2a8 = 0;
        uVar13 = CONCAT22(uVar26,pFVar9->WeightAndEasingResult);
        local_e60 = uVar13 & 0x7fffffff;
        uStack_a04 = local_e60;
        local_e80.Value = (pFVar9->Tags).AdditiveBlend.Value;
        local_3b8 = (undefined1  [8])
                    (CONCAT44(uVar13,CONCAT22(TStack_a06,local_a08)) & 0x7fffffffffffffff);
        local_e7e = *(undefined2 *)((longlong)&this->_padding_ + 6);
        local_ac8 = &local_e80;
        pFStack_ac0 = &local_e7c;
        TStack_c30.Pad[0] = 0xff;
        TStack_c30.Pad[1] = '\x06';
        TStack_c30.Pad[2] = '\0';
        TStack_c30.Pad[3] = '\0';
        uStack_9f0 = CONCAT71(_TStack_c37,local_c38) & 0xffffffffffffffe0;
        uStack_9e8._4_1_ = TStack_c2c.Pad[0];
        uStack_9e8._5_1_ = TStack_c2c.Pad[1];
        uStack_9e8._6_1_ = TStack_c2c.Pad[2];
        uStack_9e8._7_1_ = TStack_c2c.Pad[3];
        uStack_9e8._0_4_ = 0x6ff;
        uStack_3b0 = 0;
        local_390.AllMask.Bits.MaxBits = 0x180;
        local_390.NoneMask.Bits.MaxBits = 0x180;
        local_3a8 = (FThreadSafeStaticStat<FStat_MovieSceneEval_BlendDoubleValues>)
                    &TStatId::TStatId_NAME_None;
        local_310.MaxBits = 0x180;
        local_2a4 = 0x180;
        local_c38 = local_c38 & 0xe0;
        uStack_3a0 = uStack_9f0;
        local_398 = uStack_9e8;
        UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_3b8,&local_390);
        UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_3b8 + 2),&local_390);
        local_928._First = local_ac8;
        local_928._Last = pFStack_ac0;
        UE::MovieScene::FComponentMask::SetAll(&local_390.AllMask,&local_928);
        UE::MovieScene::FEntityComponentFilter::Complex
                  (&local_390,&this->BlendedResultMask,OneOrMoreOf);
        local_eac.Value = (pFVar9->Tags).Ignored.Value;
        local_ab8 = &local_eac;
        pFStack_ab0 = &local_eaa;
        local_918._First = local_ab8;
        local_918._Last = pFStack_ab0;
        UE::MovieScene::FComponentMask::SetAll(&local_390.NoneMask,&local_918);
        UE::Core::Private::
        BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                  (&(this->BlendedResultMask).Bits,&local_310,MaxSize,&local_e8e);
        local_3a8 = local_e98;
        local_dd8 = pFVar16 + 8;
        local_d30 = uStack_3a0 | 2;
        local_d40._8_8_ = local_e98;
        local_d40._0_8_ = L"struct UE::MovieScene::FForkedAccumulationTask";
        local_aa8 = (TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *)
                    UE::MovieScene::
                    TScheduledEntityTask<UE::MovieScene::FForkedAccumulationTask,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
                    ::ScheduledRun_PerAllocation;
        local_aa0 = 3;
        UE::MovieScene::
        TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
        ::
        ScheduleImpl<UE::MovieScene::FForkedAccumulationTask,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_*>
                  ((TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
                    *)local_3b8,(FEntityManager *)&local_e50,(IEntitySystemScheduler *)local_e70,
                   (FTaskParams *)param_1,
                   (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                    *)local_d40,&local_aa8);
        if (local_390.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_390.ComplexMasks.AllocatorInstance.Data);
        }
        UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_ec0,local_e50);
        UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_e50,local_ecc);
        pFVar16 = pFVar16 + 0x18;
      }
    }
    pFVar27 = local_e70;
    FVar28 = local_e98;
    if ((this->AccumulationBuffers).AdditiveFromBase.Pairs.ArrayNum != 0) {
      local_9b8 = pFVar9->BlendChannelInput;
      uVar13 = CONCAT22(uVar26,pFVar9->WeightAndEasingResult);
      local_e5c = uVar13 & 0x7fffffff;
      uStack_9b6 = local_e5c;
      local_e7c.Value = (pFVar9->Tags).AdditiveFromBaseBlend.Value;
      local_e7a = *(undefined2 *)((longlong)&this->_padding_ + 6);
      local_a98 = &local_e7c;
      pFStack_a90 = local_e78;
      local_c20._0_1_ = '\0';
      local_c20._1_1_ = '\0';
      local_c20._2_1_ = '\0';
      local_c20._3_1_ = '\0';
      local_c20._4_1_ = '\0';
      local_c20._5_1_ = '\0';
      local_c20._6_1_ = '\0';
      local_c20._7_1_ = '\0';
      pTStack_c18 = &TStatId::TStatId_NAME_None;
      TStack_c08.Pad[0] = 0xff;
      TStack_c08.Pad[1] = '\x06';
      TStack_c08.Pad[2] = '\0';
      TStack_c08.Pad[3] = '\0';
      TStack_c04.Pad = TStack_c04.Pad & 0xffffff00;
      uStack_9a0 = CONCAT71(_TStack_c0f,local_c10) & 0xffffffffffffffe0;
      uStack_998._4_1_ = TStack_c04.Pad[0];
      uStack_998._5_1_ = TStack_c04.Pad[1];
      uStack_998._6_1_ = TStack_c04.Pad[2];
      uStack_998._7_1_ = TStack_c04.Pad[3];
      uStack_998._0_4_ = 0x6ff;
      uStack_9b0 = 0;
      pTStack_9a8 = &TStatId::TStatId_NAME_None;
      local_150.AllMask.Bits.NumBits = 0;
      local_178._0_8_ = CONCAT26(uStack_9b2,CONCAT42(uVar13,local_9b8)) & 0xffff7fffffffffff;
      local_150.AllMask.Bits.MaxBits = 0x180;
      local_150.NoneMask.Bits.NumBits = 0;
      local_150.NoneMask.Bits.MaxBits = 0x180;
      local_178._8_8_ = 0;
      local_178._16_8_ = &TStatId::TStatId_NAME_None;
      local_150.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.ComplexMasks.ArrayNum = 0;
      local_150.ComplexMasks.ArrayMax = 0;
      local_d0.NumBits = 0;
      local_d0.MaxBits = 0x180;
      local_68 = 0;
      local_64 = 0x180;
      local_c10 = local_c10 & 0xe0;
      uStack_160 = uStack_9a0;
      local_158 = uStack_998;
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_178,&local_150);
      local_908._First = local_a98;
      local_908._Last = pFStack_a90;
      UE::MovieScene::FComponentMask::SetAll(&local_150.AllMask,&local_908);
      UE::MovieScene::FEntityComponentFilter::Complex
                (&local_150,&this->BlendedResultMask,OneOrMoreOf);
      local_ea8.Value = (pFVar9->Tags).Ignored.Value;
      local_a88 = &local_ea8;
      pFStack_a80 = &local_ea6;
      local_8f8._First = local_a88;
      local_8f8._Last = pFStack_a80;
      UE::MovieScene::FComponentMask::SetAll(&local_150.NoneMask,&local_8f8);
      UE::Core::Private::
      BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                (&(this->BlendedResultMask).Bits,&local_d0,MaxSize,&local_e8d);
      pFVar27 = local_e70;
      FVar28 = local_e98;
      local_dd0 = &(this->AccumulationBuffers).AdditiveFromBase;
      local_178._16_8_ = local_e98;
      local_d18 = uStack_160 | 2;
      local_d28._8_8_ = local_e98;
      local_d28._0_8_ = L"struct UE::MovieScene::FAdditiveFromBaseBlendTask";
      local_a70 = 3;
      local_a78 = (TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                   *)UE::MovieScene::
                     TScheduledEntityTask<UE::MovieScene::FAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
                     ::ScheduledRun_PerAllocation;
      UE::MovieScene::
      TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
      ::
      ScheduleImpl<UE::MovieScene::FAdditiveFromBaseBlendTask,TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>_*>
                ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)local_178,(FEntityManager *)&local_e4c,(IEntitySystemScheduler *)local_e70,
                 (FTaskParams *)param_1,
                 (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                  *)local_d28,&local_a78);
      if (local_150.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.ComplexMasks.AllocatorInstance.Data);
      }
      UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_ec0,local_e4c);
      UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_e4c,local_ecc);
    }
    if ((this->AccumulationBuffers).AdditiveAndOverrides.Pairs.ArrayNum != 0) {
      local_e58 = CONCAT22(0x7fff,pFVar9->WeightAndEasingResult);
      local_9e0 = pFVar9->BlendChannelInput;
      TStack_9de = pFVar9->BlendingOrder;
      uStack_9dc = local_e58;
      local_ea4.Value = *(ushort *)((longlong)&this->_padding_ + 6);
      local_ba8 = &local_ea4;
      pFStack_ba0 = &local_ea2;
      local_bf8.Data = (FScriptContainerElement *)0x0;
      FStack_bf0.Data = (FScriptContainerElement *)&TStatId::TStatId_NAME_None;
      iStack_be0 = 0x6ff;
      uStack_bdc = uStack_bdc & 0xffffff00;
      uStack_9c8 = CONCAT71(uStack_be7,local_be8) & 0xffffffffffffffe0;
      uStack_9c0._4_4_ = uStack_bdc;
      uStack_9c0._0_4_ = 0x6ff;
      uStack_9d8 = 0;
      pTStack_9d0 = &TStatId::TStatId_NAME_None;
      local_270.AllMask.Bits.NumBits = 0;
      local_298._2_2_ = TStack_9de;
      local_298._0_2_ = local_9e0;
      local_298._4_4_ = local_e58;
      local_270.AllMask.Bits.MaxBits = 0x180;
      local_270.NoneMask.Bits.NumBits = 0;
      local_270.NoneMask.Bits.MaxBits = 0x180;
      uStack_290 = 0;
      local_288 = (FThreadSafeStaticStat<FStat_MovieSceneEval_BlendDoubleValues>)
                  &TStatId::TStatId_NAME_None;
      local_270.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_270.ComplexMasks.ArrayNum = 0;
      local_270.ComplexMasks.ArrayMax = 0;
      local_1f0.NumBits = 0;
      local_1f0.MaxBits = 0x180;
      local_188 = 0;
      local_184 = 0x180;
      local_be8 = local_be8 & 0xe0;
      uStack_280 = uStack_9c8;
      local_278 = uStack_9c0;
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_298,&local_270);
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_298 + 2),&local_270);
      local_8e8._First = local_ba8;
      local_8e8._Last = pFStack_ba0;
      UE::MovieScene::FComponentMask::SetAll(&local_270.AllMask,&local_8e8);
      FVar2.Value = (pFVar9->Tags).OverrideBlend.Value;
      FVar3.Value = (pFVar9->Tags).AdditiveBlend.Value;
      if ((FVar3.Value == 0xffff) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("B.Value != INVALID",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UE::MovieScene::FComponentMask::Set(&this->BlendedResultMask,FVar3);
      if ((FVar2.Value == 0xffff) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("B.Value != INVALID",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UE::MovieScene::FComponentMask::Set(&this->BlendedResultMask,FVar2);
      UE::MovieScene::FEntityComponentFilter::Complex
                (&local_270,&this->BlendedResultMask,OneOrMoreOf);
      local_ea0.Value = (pFVar9->Tags).Ignored.Value;
      local_b98 = &local_ea0;
      pFStack_b90 = local_e9e;
      local_8d8._First = local_b98;
      local_8d8._Last = pFStack_b90;
      UE::MovieScene::FComponentMask::SetAll(&local_270.NoneMask,&local_8d8);
      UE::Core::Private::
      BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                (&(this->BlendedResultMask).Bits,&local_1f0,MaxSize,(<lambda_1> *)local_e78);
      local_dc8 = &(this->AccumulationBuffers).AdditiveAndOverrides;
      local_d00 = uStack_280 | 2;
      local_d10._0_8_ = L"struct UE::MovieScene::FAdditiveAndOverridesTask";
      local_b88 = (TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                   *)UE::MovieScene::
                     TScheduledEntityTask<UE::MovieScene::FAdditiveAndOverridesTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
                     ::ScheduledRun_PerAllocation;
      local_b80 = 3;
      local_d10._8_8_ = FVar28;
      local_288 = FVar28;
      UE::MovieScene::
      TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
      ::
      ScheduleImpl<UE::MovieScene::FAdditiveAndOverridesTask,TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>_*>
                ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)local_298,(FEntityManager *)&local_e48,(IEntitySystemScheduler *)pFVar27,
                 (FTaskParams *)param_1,
                 (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                  *)local_d10,&local_b88);
      if (local_270.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.ComplexMasks.AllocatorInstance.Data);
      }
      UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_ec0,local_e48);
      UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_e48,local_ecc);
    }
    iVar21 = (this->BlendedPropertyMask).Bits.NumBits;
    uVar20 = 0;
    uVar13 = iVar21 + 0x1f;
    if (uVar13 >> 5 != 0) {
      pFVar10 = &this->BlendedPropertyMask;
      uVar14 = uVar20;
LAB_14684e270:
      if (*(int *)(pFVar10->Bits).AllocatorInstance.InlineData[0].Pad == 0)
      goto code_r0x00014684e279;
      pTVar1 = (this->BlendedPropertyMask).Bits.AllocatorInstance.InlineData + uVar14;
      local_df0 = 0;
      bVar7 = *(int *)pTVar1->Pad != 0;
      if (bVar7) {
        for (; (*(uint *)pTVar1->Pad >> local_df0 & 1) == 0; local_df0 = local_df0 + 1) {
        }
      }
      iVar25 = 0x20;
      if (bVar7) {
        iVar25 = local_df0;
      }
      iVar25 = iVar25 + (int)uVar14 * 0x20;
      if ((iVar25 < iVar21) && (iVar25 != -1)) {
        local_e30 = CONCAT44(local_e30._4_4_,1);
        uVar13 = (this->CachedRelevantProperties).NumBits;
        uVar15 = uVar20;
        uVar14 = uVar20;
        if (uVar13 != 0) {
          FVar23 = (this->CachedRelevantProperties).AllocatorInstance.SecondaryData;
          uVar15 = (ulonglong)uVar13;
          if (FVar23 == (ForElementType<unsigned_int>)0x0) {
            FVar23 = (ForElementType<unsigned_int>)&this->CachedRelevantProperties;
          }
          for (uVar12 = *(uint *)FVar23; uVar12 == 0;
              uVar12 = *(uint *)((longlong)FVar23 + (longlong)(int)uVar12 * 4)) {
            uVar12 = (int)uVar20 + 1;
            uVar20 = (ulonglong)uVar12;
            uVar14 = (ulonglong)((int)uVar14 + 0x20);
            if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
            goto LAB_14684e648;
          }
          local_e30 = (ulonglong)(-uVar12 & uVar12);
          uVar15 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
          lVar5 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          local_df8 = (int)lVar5;
          uVar12 = local_df8 + -1 + (int)uVar14;
          if ((int)uVar13 < (int)uVar12) {
            uVar12 = uVar13;
          }
          uVar15 = (ulonglong)uVar12;
        }
LAB_14684e648:
        local_ebc = 0xffffffff;
        if ((int)uVar15 < (this->CachedRelevantProperties).NumBits) {
          local_e18 = (FScriptContainerElement *)&local_ec4;
          pFStack_e10 = &local_ec2;
          do {
            uVar13 = local_ebc;
            uVar17 = (uint)uVar15;
            uVar12 = 0;
            if ((int)uVar17 < (pFVar9->PropertyRegistry).Properties.ArrayNum) {
              uVar12 = ~uVar17 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar21 = 0;
            pFVar16 = (pFVar9->PropertyRegistry).Properties.AllocatorInstance.Data +
                      (longlong)(int)uVar17 * 0x70;
            pFVar11 = (pFVar9->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data +
                      (ulonglong)*(ushort *)&pFVar16[0x24].field_0x0 * 4;
            uVar12 = CONCAT22(0,*(ushort *)&pFVar16[0x26].field_0x0);
            local_e98._0_4_ = uVar12;
            local_870.NumBits = 0;
            local_870.MaxBits = 0x180;
            local_e18 = pFVar16;
            if (uVar12 != 0) {
              local_e20 = 0;
              uVar17 = 1;
              iVar25 = iVar21;
              do {
                if ((*(uint *)(pFVar16 + 0x20) & uVar17) != 0) {
                  uVar26 = *(ushort *)pFVar11;
                  iVar22 = ((uint)uVar26 - iVar21) + 1;
                  if (0 < iVar22) {
                    TBitArray<TFixedAllocator<12>_>::Add(&local_870,false,iVar22);
                    iVar21 = local_870.NumBits;
                  }
                  if ((iVar21 <= (int)(uint)uVar26) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index>=0 && Index<NumBits",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                         ,0x5be,L""), bVar7)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pTVar1 = local_870.AllocatorInstance.InlineData + (uVar26 >> 5);
                  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar26 & 0x1f);
                  pFVar16 = local_e18;
                  uVar12 = local_e98._0_4_;
                  iVar21 = local_870.NumBits;
                }
                local_e20 = local_e20 + 1;
                uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
                iVar25 = iVar25 + 1;
                pFVar11 = pFVar11 + 4;
                uVar13 = local_ebc;
              } while (iVar25 < (int)uVar12);
            }
            pTStack_bc8 = &TStatId::TStatId_NAME_None;
            local_e54 = CONCAT22(0x7fff,*(undefined2 *)&pFVar16[0x2a].field_0x0);
            local_990 = pFVar9->BlendChannelOutput;
            uStack_98e = local_e54;
            local_ec8.Value = *(ushort *)((longlong)&this->_padding_ + 6);
            local_b78 = &local_ec8;
            local_bd0.Data = (FScriptContainerElement *)0x0;
            pFStack_b70 = &local_ec6;
            uStack_bb8 = 0x6ff;
            uStack_988 = 0;
            pTStack_980 = &TStatId::TStatId_NAME_None;
            FStack_bb4.Payload = FStack_bb4.Payload & 0xffffff00;
            uStack_978 = CONCAT71(uStack_bbf,local_bc0) & 0xffffffffffffffe0;
            uStack_970._4_4_ = FStack_bb4.Payload;
            uStack_970._0_4_ = 0x6ff;
            local_838._2_4_ = local_e54;
            local_838._0_2_ = local_990;
            local_838._6_2_ = uStack_98a;
            local_810.AllMask.Bits.NumBits = 0;
            local_810.AllMask.Bits.MaxBits = 0x180;
            local_810.NoneMask.Bits.NumBits = 0;
            uStack_830 = 0;
            local_828 = (FThreadSafeStaticStat<FStat_MovieSceneEval_BlendCombineDoubleValues>)
                        &TStatId::TStatId_NAME_None;
            local_810.NoneMask.Bits.MaxBits = 0x180;
            local_810.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_810.ComplexMasks.ArrayNum = 0;
            local_810.ComplexMasks.ArrayMax = 0;
            local_760 = 0;
            local_75c = 0x180;
            local_758.NumBits = 0;
            local_758.MaxBits = 0x180;
            local_bc0 = local_bc0 & 0xe0;
            uStack_820 = uStack_978;
            local_818 = uStack_970;
            UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_838,&local_810);
            UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_838 + 2),&local_810);
            local_8c8._First = local_b78;
            local_8c8._Last = pFStack_b70;
            UE::MovieScene::FComponentMask::SetAll(&local_810.AllMask,&local_8c8);
            local_ec4 = *(undefined2 *)&pFVar16[0x28].field_0x0;
            iVar21 = local_810.ComplexMasks.ArrayNum;
            if (local_810.ComplexMasks.ArrayNum == local_810.ComplexMasks.ArrayMax) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x43c,&local_810.ComplexMasks.AllocatorInstance,
                                  &local_810.ComplexMasks.ArrayMax);
            }
            local_810.ComplexMasks.ArrayNum = iVar21 + 1;
            pFVar11 = local_810.ComplexMasks.AllocatorInstance.Data + (longlong)iVar21 * 0x3c;
            *(int *)(pFVar11 + 0x30) = 0;
            *(int *)(pFVar11 + 0x34) = 0x180;
            pFVar11[0x38] = (FScriptContainerElement)0x2;
            local_8b8._First = (FComponentTypeID *)&local_ec4;
            local_8b8._Last = &local_ec2;
            UE::MovieScene::FComponentMask::SetAll((FComponentMask *)pFVar11,&local_8b8);
            UE::Core::Private::
            BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                      (&local_870,&local_758,MaxSize,local_e8b);
            param_1 = (IEntitySystemScheduler *)local_da8;
            local_828 = local_e28;
            local_db8 = (FPropertyDefinition *)&this->AccumulationBuffers;
            local_db0 = local_e70;
            local_ce8 = uStack_820 & 0xfffffffffffffffd;
            local_cf8._8_8_ = local_e28;
            local_cf8._0_8_ = L"struct UE::MovieScene::FScheduleCombineBlendsForProperties";
            local_b68 = (FEntityManager *)
                        UE::MovieScene::
                        TScheduledEntityTask<UE::MovieScene::FScheduleCombineBlendsForProperties,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::FErasedOptionalReadAccess>
                        ::ScheduledRun_PerAllocation;
            local_b60 = 3;
            local_dc0 = pFVar16;
            UE::MovieScene::
            TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::FErasedOptionalReadAccess>
            ::
            ScheduleImpl<UE::MovieScene::FScheduleCombineBlendsForProperties,UE::MovieScene::FEntityManager_*,UE::MovieScene::FAccumulationBuffers_*,UE::MovieScene::FPropertyDefinition_const_*>
                      ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::FErasedOptionalReadAccess>
                        *)local_838,(FEntityManager *)&local_e44,(IEntitySystemScheduler *)local_e70
                       ,local_da8,
                       (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                        *)local_cf8,&local_b68,(FAccumulationBuffers **)&local_db0,&local_db8);
            if (local_810.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_810.ComplexMasks.AllocatorInstance.Data);
            }
            UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_ecc,local_e44);
            uVar12 = (this->CachedRelevantProperties).NumBits;
            local_ebc = uVar13 & ~(uint)local_e30;
            FVar23 = (this->CachedRelevantProperties).AllocatorInstance.SecondaryData;
            FVar24 = (ForElementType<unsigned_int>)&this->CachedRelevantProperties;
            if (FVar23 != (ForElementType<unsigned_int>)0x0) {
              FVar24 = FVar23;
            }
            uVar13 = local_ebc & *(uint *)((longlong)FVar24 + (longlong)(int)uVar20 * 4);
            while (uVar13 == 0) {
              uVar17 = (int)uVar20 + 1;
              uVar20 = (ulonglong)uVar17;
              uVar14 = (ulonglong)((int)uVar14 + 0x20);
              uVar13 = uVar12;
              if ((int)(((int)(uVar12 - 1) >> 0x1f & 0x1fU) + (uVar12 - 1)) >> 5 < (int)uVar17)
              goto LAB_14684eb24;
              local_ebc = 0xffffffff;
              uVar13 = *(uint *)((longlong)FVar24 + (longlong)(int)uVar17 * 4);
            }
            local_e30 = CONCAT44(local_e30._4_4_,-uVar13 & uVar13);
            uVar15 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
            lVar5 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            local_df4 = (int)lVar5;
            uVar13 = (int)uVar14 + -1 + local_df4;
            if ((int)uVar12 < (int)uVar13) {
              uVar13 = uVar12;
            }
LAB_14684eb24:
            uVar15 = (ulonglong)uVar13;
          } while ((int)uVar13 < (this->CachedRelevantProperties).NumBits);
        }
      }
    }
LAB_14684e288:
    if (this->bContainsNonPropertyBlends != false) {
      pTStack_cb8 = &TStatId::TStatId_NAME_None;
      local_898 = pFVar9->BlendChannelOutput;
      local_eb8.Value = *(ushort *)((longlong)&this->_padding_ + 6);
      local_b58 = &local_eb8;
      local_cc0 = 0;
      pFStack_b50 = &local_eb6;
      TStack_ca8.Pad[0] = 0xff;
      TStack_ca8.Pad[1] = '\x06';
      TStack_ca8.Pad[2] = '\0';
      TStack_ca8.Pad[3] = '\0';
      uStack_890 = 0;
      pTStack_888 = &TStatId::TStatId_NAME_None;
      TStack_ca4.Pad = TStack_ca4.Pad & 0xffffff00;
      uStack_880 = CONCAT71(uStack_caf,local_cb0) & 0xffffffffffffffe0;
      uStack_878._4_1_ = TStack_ca4.Pad[0];
      uStack_878._5_1_ = TStack_ca4.Pad[1];
      uStack_878._6_1_ = TStack_ca4.Pad[2];
      uStack_878._7_1_ = TStack_ca4.Pad[3];
      uStack_878._0_4_ = 0x6ff;
      local_718._2_6_ = uStack_896;
      local_718._0_2_ = local_898;
      local_6f0.AllMask.Bits.NumBits = 0;
      local_6f0.AllMask.Bits.MaxBits = 0x180;
      local_6f0.NoneMask.Bits.NumBits = 0;
      local_718._8_8_ = 0;
      local_718._16_8_ = &TStatId::TStatId_NAME_None;
      local_6f0.NoneMask.Bits.MaxBits = 0x180;
      local_6f0.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6f0.ComplexMasks.ArrayNum = 0;
      local_6f0.ComplexMasks.ArrayMax = 0;
      local_640 = 0;
      local_63c = 0x180;
      local_638.NumBits = 0;
      local_638.MaxBits = 0x180;
      local_cb0 = local_cb0 & 0xe0;
      uStack_700 = uStack_880;
      local_6f8 = uStack_878;
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_718,&local_6f0);
      local_a68._0_8_ = local_b58;
      local_a68._8_8_ = pFStack_b50;
      UE::MovieScene::FComponentMask::SetAll
                (&local_6f0.AllMask,(initializer_list<UE::MovieScene::FComponentTypeID> *)local_a68)
      ;
      UE::MovieScene::FEntityComponentFilter::Complex
                (&local_6f0,&this->BlendedResultMask,OneOrMoreOf);
      UE::Core::Private::
      BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                (&(this->BlendedPropertyMask).Bits,&local_6f0.NoneMask.Bits,MaxSize,&local_e8c);
      pFVar9 = UE::MovieScene::FBuiltInComponentTypes::Get();
      for (pTVar19 = pFVar9->DoubleResult; pTVar19 != pFVar9->BaseDouble; pTVar19 = pTVar19 + 1) {
        TVar4 = *pTVar19;
        iVar21 = ((uint)(ushort)TVar4 - local_638.NumBits) + 1;
        if (0 < iVar21) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_638,false,iVar21);
        }
        if ((local_638.NumBits <= (int)(uint)(ushort)TVar4) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar1 = local_638.AllocatorInstance.InlineData + ((ushort)TVar4 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << (TVar4._0_1_ & 0x1f);
      }
      local_718._16_8_ = local_e28;
      UE::MovieScene::FEntityAllocationWriteContext::FEntityAllocationWriteContext
                (&local_e08,local_e70);
      local_da0.SystemSerial = (ulong64)&this->AccumulationBuffers;
      local_cd0 = uStack_700 & 0xfffffffffffffffd;
      local_ce0._8_8_ = local_718._16_8_;
      local_ce0._0_8_ = L"struct UE::MovieScene::FCombineBlends";
      local_b48 = (FAccumulationBuffers *)
                  UE::MovieScene::
                  TScheduledEntityTask<UE::MovieScene::FCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>
                  ::ScheduledRun_PerAllocation;
      local_b40 = 3;
      UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>::
      ScheduleImpl<UE::MovieScene::FCombineBlends,UE::MovieScene::FAccumulationBuffers_*,UE::MovieScene::FEntityAllocationWriteContext>
                ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_> *)
                 local_718,(FEntityManager *)&local_e40,(IEntitySystemScheduler *)local_e70,
                 (FTaskParams *)param_1,
                 (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                  *)local_ce0,&local_b48,&local_da0);
      if (local_6f0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6f0.ComplexMasks.AllocatorInstance.Data);
      }
      UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_ecc,local_e40);
    }
  }
  return;
code_r0x00014684e279:
  uVar12 = (int)uVar14 + 1;
  uVar14 = (ulonglong)uVar12;
  pFVar10 = (FComponentMask *)((pFVar10->Bits).AllocatorInstance.InlineData + 1);
  if ((int)(uVar13 >> 5) <= (int)uVar12) goto LAB_14684e288;
  goto LAB_14684e270;
}

// ReinitializeAccumulationBuffers @ 14685c5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePiecewiseDoubleBlenderSystem::ReinitializeAccumulationBuffers
          (UMovieScenePiecewiseDoubleBlenderSystem *this)

{
  FAccumulationBuffers *pFVar1;
  int *piVar2;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  TTypeCompatibleBytes<unsigned_int> *pTVar3;
  uint *puVar4;
  ushort uVar5;
  ForElementType<unsigned_int> FVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FComponentTypeID FVar12;
  longlong lVar13;
  FEntityManager *this_01;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  FBuiltInComponentTypes *pFVar20;
  FBuiltInComponentTypes *pFVar21;
  TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *pTVar22;
  FAdditiveFromBaseBuffer *pFVar23;
  TArray<UE::MovieScene::FAdditiveAndOverrides,TSizedDefaultAllocator<32>_> *this_02;
  FScriptContainerElement *pFVar24;
  ForElementType<unsigned_int> FVar25;
  UMovieScenePiecewiseDoubleBlenderSystem *pUVar26;
  ulonglong uVar27;
  FComponentMask *pFVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auStackY_318 [32];
  FComponentTypeID local_2d4 [2];
  UMovieScenePiecewiseDoubleBlenderSystem *local_2d0;
  <lambda_1> local_2c8 [4];
  uint local_2c4;
  FComponentTypeID local_2c0;
  TComponentTypeID<FMovieSceneBlendChannelID> local_2be;
  uint local_2bc;
  FBuiltInComponentTypes *local_2b8;
  longlong local_2b0;
  FEntityManager *local_2a8;
  FAccumulationBuffers *local_2a0;
  FBuiltInComponentTypes *local_298;
  FBuiltInComponentTypes *local_290;
  initializer_list<UE::MovieScene::FComponentTypeID> local_288;
  initializer_list<UE::MovieScene::FComponentTypeID> local_278;
  initializer_list<UE::MovieScene::FComponentTypeID> local_268;
  initializer_list<UE::MovieScene::FComponentTypeID> local_258;
  FComponentTypeID local_248;
  undefined2 local_246;
  TComponentTypeID<FMovieSceneBlendChannelID> local_244;
  FComponentTypeID local_242;
  FComponentTypeID local_240;
  TComponentTypeID<FMovieSceneBlendChannelID> local_23e;
  ushort local_23c;
  FComponentTypeID local_23a;
  FComponentTypeID local_238;
  ushort local_236;
  ushort local_234;
  ushort local_232;
  ushort local_230;
  FComponentTypeID local_22e [3];
  FComponentMask local_228;
  FEntityComponentFilter local_1e8;
  FEntityComponentFilter local_168;
  FEntityComponentFilter local_e8;
  TBitArray<TFixedAllocator<12>_> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_2d0 = this;
  pFVar20 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar1 = &this->AccumulationBuffers;
  (this->BlendedResultMask).Bits.NumBits = 0;
  local_2b8 = pFVar20;
  local_2a0 = pFVar1;
  DestructItems<TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>
              *)(pFVar1->Absolute).Pairs.AllocatorInstance.Data,
             (this->AccumulationBuffers).Absolute.Pairs.ArrayNum);
  piVar2 = &(this->AccumulationBuffers).Absolute.Pairs.ArrayMax;
  (this->AccumulationBuffers).Absolute.Pairs.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)pFVar1,0,piVar2);
  }
  DestructItems<TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>
              *)(this->AccumulationBuffers).Relative.Pairs.AllocatorInstance.Data,
             (this->AccumulationBuffers).Relative.Pairs.ArrayNum);
  piVar2 = &(this->AccumulationBuffers).Relative.Pairs.ArrayMax;
  (this->AccumulationBuffers).Relative.Pairs.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&(this->AccumulationBuffers).Relative,0,piVar2);
  }
  DestructItems<TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>
              *)(this->AccumulationBuffers).Additive.Pairs.AllocatorInstance.Data,
             (this->AccumulationBuffers).Additive.Pairs.ArrayNum);
  piVar2 = &(this->AccumulationBuffers).Additive.Pairs.ArrayMax;
  (this->AccumulationBuffers).Additive.Pairs.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&(this->AccumulationBuffers).Additive,0,piVar2);
  }
  DestructItems<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer>,int>
            ((TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer> *)
             (this->AccumulationBuffers).AdditiveFromBase.Pairs.AllocatorInstance.Data,
             (this->AccumulationBuffers).AdditiveFromBase.Pairs.ArrayNum);
  piVar2 = &(this->AccumulationBuffers).AdditiveFromBase.Pairs.ArrayMax;
  (this->AccumulationBuffers).AdditiveFromBase.Pairs.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&(this->AccumulationBuffers).AdditiveFromBase,0,piVar2)
    ;
  }
  DestructItems<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer>,int>
            ((TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer> *)
             (this->AccumulationBuffers).AdditiveAndOverrides.Pairs.AllocatorInstance.Data,
             (this->AccumulationBuffers).AdditiveAndOverrides.Pairs.ArrayNum);
  piVar2 = &(this->AccumulationBuffers).AdditiveAndOverrides.Pairs.ArrayMax;
  (this->AccumulationBuffers).AdditiveAndOverrides.Pairs.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&(this->AccumulationBuffers).AdditiveAndOverrides,0,
               piVar2);
  }
  local_298 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar21 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_290 = pFVar21;
  UE::MovieScene::FBuiltInComponentTypes::Get();
  uVar30 = (uint)this->_padding_;
  local_2a8 = (FEntityManager *)(this->_padding_ + 0x28);
  local_1e8.AllMask.Bits.NumBits = 0;
  local_1e8.AllMask.Bits.MaxBits = 0x180;
  local_1e8.NoneMask.Bits.NumBits = 0;
  local_1e8.NoneMask.Bits.MaxBits = 0x180;
  local_1e8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.ComplexMasks.ArrayNum = 0;
  local_1e8.ComplexMasks.ArrayMax = 0;
  local_228.Bits.NumBits = 0;
  local_228.Bits.MaxBits = 0x180;
  local_2c4 = 0;
  local_2b0 = 0;
  do {
    this_01 = local_2a8;
    lVar13 = local_2b0;
    local_2bc = 0;
    if ((int)local_2c4 < 9) {
      local_2bc = ~local_2c4 >> 0x1f;
    }
    if ((local_2bc == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    bVar15 = (longlong)local_1e8.ComplexMasks._8_8_ < 0;
    local_2d4[0].Value = *(ushort *)(pFVar21->DoubleResult + lVar13);
    local_1e8.AllMask.Bits.NumBits = 0;
    local_1e8.NoneMask.Bits.NumBits = 0;
    local_1e8.ComplexMasks._8_8_ = local_1e8.ComplexMasks._8_8_ & 0xffffffff00000000;
    if (bVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x3c,4,0,&local_1e8.ComplexMasks.AllocatorInstance,0,
                 &local_1e8.ComplexMasks.ArrayMax);
    }
    local_246 = *(undefined2 *)((longlong)&this->_padding_ + 6);
    local_244 = pFVar20->BlendChannelInput;
    local_288._First = &local_248;
    local_288._Last = &local_242;
    local_248.Value = local_2d4[0].Value;
    UE::MovieScene::FComponentMask::SetAll(&local_1e8.AllMask,&local_288);
    local_238.Value = (pFVar20->Tags).AbsoluteBlend.Value;
    local_236 = (pFVar20->Tags).RelativeBlend.Value;
    local_234 = (pFVar20->Tags).AdditiveBlend.Value;
    local_232 = (pFVar20->Tags).OverrideBlend.Value;
    local_230 = (pFVar20->Tags).AdditiveFromBaseBlend.Value;
    iVar17 = local_1e8.ComplexMasks.ArrayNum;
    if (local_1e8.ComplexMasks.ArrayNum == local_1e8.ComplexMasks.ArrayMax) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x43c,&local_1e8.ComplexMasks.AllocatorInstance,
                          &local_1e8.ComplexMasks.ArrayMax);
    }
    local_1e8.ComplexMasks.ArrayNum = iVar17 + 1;
    local_278._First = &local_238;
    pFVar24 = local_1e8.ComplexMasks.AllocatorInstance.Data + (longlong)iVar17 * 0x3c;
    local_278._Last = local_22e;
    *(int *)(pFVar24 + 0x30) = 0;
    *(int *)(pFVar24 + 0x34) = 0x180;
    pFVar24[0x38] = (FScriptContainerElement)0x2;
    UE::MovieScene::FComponentMask::SetAll((FComponentMask *)pFVar24,&local_278);
    local_228.Bits.NumBits = 0;
    UE::MovieScene::FEntityManager::AccumulateMask(this_01,&local_1e8,&local_228);
    pUVar26 = local_2d0;
    FVar12.Value = local_2d4[0].Value;
    uVar5 = (pFVar20->Tags).AbsoluteBlend.Value;
    if (((uVar5 == 0xffff) || (local_228.Bits.NumBits <= (int)(uint)uVar5)) ||
       ((*(uint *)local_228.Bits.AllocatorInstance.InlineData[uVar5 >> 5].Pad >> (uVar5 & 0x1f) & 1)
        == 0)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    uVar5 = (pFVar20->Tags).RelativeBlend.Value;
    if (((uVar5 == 0xffff) || (local_228.Bits.NumBits <= (int)(uint)uVar5)) ||
       ((*(uint *)local_228.Bits.AllocatorInstance.InlineData[uVar5 >> 5].Pad >> (uVar5 & 0x1f) & 1)
        == 0)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    uVar5 = (pFVar20->Tags).AdditiveBlend.Value;
    if (((uVar5 == 0xffff) || (local_228.Bits.NumBits <= (int)(uint)uVar5)) ||
       ((*(uint *)local_228.Bits.AllocatorInstance.InlineData[uVar5 >> 5].Pad >> (uVar5 & 0x1f) & 1)
        == 0)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    uVar5 = (pFVar20->Tags).OverrideBlend.Value;
    if (((uVar5 == 0xffff) || (local_228.Bits.NumBits <= (int)(uint)uVar5)) ||
       (bVar10 = true,
       (*(uint *)local_228.Bits.AllocatorInstance.InlineData[uVar5 >> 5].Pad >> (uVar5 & 0x1f) & 1)
       == 0)) {
      bVar10 = false;
    }
    uVar5 = (pFVar20->Tags).AdditiveFromBaseBlend.Value;
    if (((uVar5 == 0xffff) || (local_228.Bits.NumBits <= (int)(uint)uVar5)) ||
       ((*(uint *)local_228.Bits.AllocatorInstance.InlineData[uVar5 >> 5].Pad >> (uVar5 & 0x1f) & 1)
        == 0)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (((bVar15) || (bVar8)) || ((bVar11 || (this = local_2d0, bVar9)))) {
      pFVar28 = &local_2d0->BlendedResultMask;
      uVar29 = (uint)local_2d4[0].Value;
      iVar17 = (uVar29 - (local_2d0->BlendedResultMask).Bits.NumBits) + 1;
      if (0 < iVar17) {
        TBitArray<TFixedAllocator<12>_>::Add(&pFVar28->Bits,false,iVar17);
      }
      if (((pUVar26->BlendedResultMask).Bits.NumBits <= (int)uVar29) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar16)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar3 = (pFVar28->Bits).AllocatorInstance.InlineData + (FVar12.Value >> 5);
      *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)FVar12.Value & 0x1f);
      if (bVar15) {
        pTVar22 = TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                  ::Emplace<UE::MovieScene::FComponentTypeID_const_&>
                            (&local_2a0->Absolute,local_2d4);
        iVar17 = pTVar22->ArrayNum;
        piVar2 = &pTVar22->ArrayNum;
        if (iVar17 < (int)uVar30) {
          iVar18 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,uVar30 - iVar17,&pTVar22->AllocatorInstance,piVar2,
                              &pTVar22->ArrayMax);
          DefaultConstructItems<UE::MovieScene::FBlendResult,int>
                    ((pTVar22->AllocatorInstance).Data + (longlong)iVar18 * 0x10,uVar30 - iVar17);
        }
        else {
          if ((int)uVar30 < 0) goto LAB_14685d540;
          if ((int)uVar30 < iVar17) {
            uVar29 = iVar17 - uVar30;
            if (((int)(uVar30 | uVar29) < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (uVar29 != 0) {
              pFVar24 = (pTVar22->AllocatorInstance).Data + (longlong)(int)uVar30 * 0x10;
              iVar17 = (*piVar2 - uVar29) - uVar30;
              if (iVar17 != 0) {
                memmove(pFVar24,pFVar24 + (longlong)(int)uVar29 * 0x10,(longlong)iVar17 << 4);
              }
              *piVar2 = *piVar2 - uVar29;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&pTVar22->AllocatorInstance,*piVar2,&pTVar22->ArrayMax);
            }
          }
        }
      }
      pUVar26 = local_2d0;
      if (bVar8) {
        pTVar22 = TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                  ::Emplace<UE::MovieScene::FComponentTypeID_const_&>
                            (&(local_2d0->AccumulationBuffers).Relative,local_2d4);
        iVar17 = pTVar22->ArrayNum;
        piVar2 = &pTVar22->ArrayNum;
        if (iVar17 < (int)uVar30) {
          iVar18 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,uVar30 - iVar17,&pTVar22->AllocatorInstance,piVar2,
                              &pTVar22->ArrayMax);
          DefaultConstructItems<UE::MovieScene::FBlendResult,int>
                    ((pTVar22->AllocatorInstance).Data + (longlong)iVar18 * 0x10,uVar30 - iVar17);
          pUVar26 = local_2d0;
        }
        else {
          if ((int)uVar30 < 0) goto LAB_14685d540;
          if ((int)uVar30 < iVar17) {
            uVar29 = iVar17 - uVar30;
            if (((int)(uVar30 | uVar29) < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pUVar26 = local_2d0;
            if (uVar29 != 0) {
              pFVar24 = (pTVar22->AllocatorInstance).Data + (longlong)(int)uVar30 * 0x10;
              iVar17 = (*piVar2 - uVar29) - uVar30;
              if (iVar17 != 0) {
                memmove(pFVar24,pFVar24 + (longlong)(int)uVar29 * 0x10,(longlong)iVar17 << 4);
              }
              *piVar2 = *piVar2 - uVar29;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&pTVar22->AllocatorInstance,*piVar2,&pTVar22->ArrayMax);
              pUVar26 = local_2d0;
            }
          }
        }
      }
      if ((bVar11) && (!bVar10)) {
        pTVar22 = TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                  ::Emplace<UE::MovieScene::FComponentTypeID_const_&>
                            (&(pUVar26->AccumulationBuffers).Additive,local_2d4);
        iVar17 = pTVar22->ArrayNum;
        piVar2 = &pTVar22->ArrayNum;
        if (iVar17 < (int)uVar30) {
          iVar18 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,uVar30 - iVar17,&pTVar22->AllocatorInstance,piVar2,
                              &pTVar22->ArrayMax);
          DefaultConstructItems<UE::MovieScene::FBlendResult,int>
                    ((pTVar22->AllocatorInstance).Data + (longlong)iVar18 * 0x10,uVar30 - iVar17);
        }
        else {
          if ((int)uVar30 < 0) goto LAB_14685d540;
          if ((int)uVar30 < iVar17) {
            uVar29 = iVar17 - uVar30;
            if (((int)(uVar30 | uVar29) < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (uVar29 != 0) {
              pFVar24 = (pTVar22->AllocatorInstance).Data + (longlong)(int)uVar30 * 0x10;
              iVar17 = (*piVar2 - uVar29) - uVar30;
              if (iVar17 != 0) {
                memmove(pFVar24,pFVar24 + (longlong)(int)uVar29 * 0x10,(longlong)iVar17 << 4);
              }
              *piVar2 = *piVar2 - uVar29;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&pTVar22->AllocatorInstance,*piVar2,&pTVar22->ArrayMax);
            }
          }
        }
      }
      if (bVar9) {
        pFVar23 = TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                  ::Emplace<UE::MovieScene::FComponentTypeID_const_&>
                            (&(local_2d0->AccumulationBuffers).AdditiveFromBase,local_2d4);
        iVar17 = (pFVar23->Buffer).ArrayNum;
        piVar2 = &(pFVar23->Buffer).ArrayNum;
        if (iVar17 < (int)uVar30) {
          iVar18 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,uVar30 - iVar17,(ForAnyElementType *)pFVar23,piVar2,
                              &(pFVar23->Buffer).ArrayMax);
          DefaultConstructItems<UE::MovieScene::FBlendResult,int>
                    ((pFVar23->Buffer).AllocatorInstance.Data + (longlong)iVar18 * 0x10,
                     uVar30 - iVar17);
        }
        else {
          if ((int)uVar30 < 0) goto LAB_14685d540;
          if ((int)uVar30 < iVar17) {
            uVar29 = iVar17 - uVar30;
            if (((int)(uVar30 | uVar29) < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (uVar29 != 0) {
              pFVar24 = (pFVar23->Buffer).AllocatorInstance.Data + (longlong)(int)uVar30 * 0x10;
              iVar17 = (*piVar2 - uVar29) - uVar30;
              if (iVar17 != 0) {
                memmove(pFVar24,pFVar24 + (longlong)(int)uVar29 * 0x10,(longlong)iVar17 << 4);
              }
              *piVar2 = *piVar2 - uVar29;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,(ForAnyElementType *)pFVar23,*piVar2,&(pFVar23->Buffer).ArrayMax);
            }
          }
        }
        if ((local_2bc == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar23->BaseComponent = local_298->BaseDouble[local_2b0];
      }
      this = local_2d0;
      if (bVar10) {
        this_02 = &TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                   ::Emplace<UE::MovieScene::FComponentTypeID_const_&>
                             (&(local_2d0->AccumulationBuffers).AdditiveAndOverrides,local_2d4)->
                   Values;
        iVar17 = this_02->ArrayNum;
        if (iVar17 < (int)uVar30) {
          iVar18 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,uVar30 - iVar17,&this_02->AllocatorInstance,&this_02->ArrayNum,
                              &this_02->ArrayMax);
          DefaultConstructItems<UE::MovieScene::FAdditiveAndOverrides,int>
                    ((this_02->AllocatorInstance).Data + (longlong)iVar18 * 0x10,uVar30 - iVar17);
        }
        else {
          if ((int)uVar30 < 0) {
LAB_14685d540:
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
          }
          if ((int)uVar30 < iVar17) {
            uVar29 = iVar17 - uVar30;
            if (((int)(uVar30 | uVar29) < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (uVar29 != 0) {
              TArray<UE::MovieScene::FAdditiveAndOverrides,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(this_02,uVar30,uVar29);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&this_02->AllocatorInstance,this_02->ArrayNum,&this_02->ArrayMax);
            }
          }
        }
      }
    }
    local_2c4 = local_2c4 + 1;
    local_2b0 = local_2b0 + 1;
    pFVar21 = local_290;
    pFVar20 = local_2b8;
    if (8 < local_2b0) {
      this_00 = &this->CachedRelevantProperties;
      uVar27 = 0;
      iVar17 = (this->CachedRelevantProperties).MaxBits;
      (this->CachedRelevantProperties).NumBits = 0;
      if ((iVar17 < 0) || (0x80 < iVar17)) {
        (this->CachedRelevantProperties).MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(this_00,0);
      }
      if (((((this->AccumulationBuffers).Absolute.Pairs.ArrayNum != 0) ||
           ((this->AccumulationBuffers).Relative.Pairs.ArrayNum != 0)) ||
          ((this->AccumulationBuffers).Additive.Pairs.ArrayNum != 0)) ||
         (((this->AccumulationBuffers).AdditiveFromBase.Pairs.ArrayNum != 0 ||
          ((this->AccumulationBuffers).AdditiveAndOverrides.Pairs.ArrayNum != 0)))) {
        ZeroAccumulationBuffers(this);
        local_68.NumBits = 0;
        local_68.MaxBits = 0x180;
        local_e8.AllMask.Bits.NumBits = 0;
        local_e8.AllMask.Bits.MaxBits = 0x180;
        local_e8.NoneMask.Bits.NumBits = 0;
        local_e8.NoneMask.Bits.MaxBits = 0x180;
        local_e8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.ComplexMasks.ArrayNum = 0;
        local_e8.ComplexMasks.ArrayMax = 0;
        uVar30 = (local_2b8->PropertyRegistry).Properties.ArrayNum;
        pFVar24 = (local_2b8->PropertyRegistry).Properties.AllocatorInstance.Data;
        local_2bc = uVar30;
        if (((int)uVar30 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (0 < (int)uVar30) {
          uVar29 = 1;
          pFVar24 = pFVar24 + 0x28;
          do {
            iVar17 = (int)uVar27;
            if ((iVar17 < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (*(int *)(pFVar24 + -8) != 0) {
              uVar5 = *(ushort *)pFVar24;
              iVar18 = ((uint)uVar5 - local_68.NumBits) + 1;
              if (0 < iVar18) {
                TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,iVar18);
              }
              if ((local_68.NumBits <= (int)(uint)uVar5) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar15)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar14 = local_e8.ComplexMasks._8_8_;
              pTVar3 = local_68.AllocatorInstance.InlineData + (uVar5 >> 5);
              *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)uVar5 & 0x1f);
              local_e8.AllMask.Bits.NumBits = 0;
              local_e8.NoneMask.Bits.NumBits = 0;
              local_e8.ComplexMasks._8_8_ = local_e8.ComplexMasks._8_8_ & 0xffffffff00000000;
              if ((longlong)uVar14 < 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x3c,4,0,&local_e8.ComplexMasks.AllocatorInstance,0,
                           &local_e8.ComplexMasks.ArrayMax);
              }
              local_240.Value = *(ushort *)((longlong)&local_2d0->_padding_ + 6);
              local_23e = local_2b8->BlendChannelOutput;
              local_23c = *(ushort *)pFVar24;
              local_268._First = &local_240;
              local_268._Last = &local_23a;
              UE::MovieScene::FComponentMask::SetAll(&local_e8.AllMask,&local_268);
              bVar15 = UE::MovieScene::FEntityManager::Contains(local_2a8,&local_e8);
              if (bVar15) {
                iVar18 = (iVar17 - (this->CachedRelevantProperties).NumBits) + 1;
                if (0 < iVar18) {
                  iVar19 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,iVar18);
                  TBitArray<FDefaultBitArrayAllocator>::SetRange(this_00,iVar19,iVar18,false);
                }
                if (((this->CachedRelevantProperties).NumBits <= iVar17) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pUVar26 = local_2d0;
                FVar6 = (this->CachedRelevantProperties).AllocatorInstance.SecondaryData;
                FVar25 = (ForElementType<unsigned_int>)this_00;
                if (FVar6 != (ForElementType<unsigned_int>)0x0) {
                  FVar25 = FVar6;
                }
                pFVar28 = &local_2d0->BlendedPropertyMask;
                puVar4 = (uint *)((longlong)FVar25 + (uVar27 >> 5) * 4);
                *puVar4 = *puVar4 | uVar29;
                uVar5 = *(ushort *)pFVar24;
                iVar18 = ((uint)uVar5 - (local_2d0->BlendedPropertyMask).Bits.NumBits) + 1;
                if (0 < iVar18) {
                  TBitArray<TFixedAllocator<12>_>::Add(&pFVar28->Bits,false,iVar18);
                }
                if (((pUVar26->BlendedPropertyMask).Bits.NumBits <= (int)(uint)uVar5) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pTVar3 = (pFVar28->Bits).AllocatorInstance.InlineData + (uVar5 >> 5);
                *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)uVar5 & 0x1f);
                uVar30 = local_2bc;
              }
            }
            uVar27 = (ulonglong)(iVar17 + 1U);
            uVar29 = uVar29 << 1 | (uint)((int)uVar29 < 0);
            pFVar24 = pFVar24 + 0x70;
          } while ((int)(iVar17 + 1U) < (int)uVar30);
        }
        pUVar26 = local_2d0;
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
        local_168.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
        local_168.AllMask.Bits.NumBits = 0;
        local_168.AllMask.Bits.MaxBits = 0x180;
        local_168.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
        local_2c0.Value = *(ushort *)((longlong)&local_2d0->_padding_ + 6);
        local_168.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
        local_168.NoneMask.Bits.NumBits = 0;
        local_168.NoneMask.Bits.MaxBits = 0x180;
        local_168.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
        local_168.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
        local_2be = local_2b8->BlendChannelOutput;
        local_258._First = &local_2c0;
        local_258._Last = (FComponentTypeID *)&local_2bc;
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
        local_168.ComplexMasks.ArrayNum = 0;
        local_168.ComplexMasks.ArrayMax = 0;
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
        local_168.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
        UE::MovieScene::FComponentMask::SetAll(&local_168.AllMask,&local_258);
        UE::Core::Private::
        BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                  (&local_68,&local_168.NoneMask.Bits,MaxSize,local_2c8);
        bVar15 = UE::MovieScene::FEntityManager::Contains(local_2a8,&local_168);
        pUVar26->bContainsNonPropertyBlends = bVar15;
        if (local_168.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.ComplexMasks.AllocatorInstance.Data);
        }
        if (local_e8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.ComplexMasks.AllocatorInstance.Data);
        }
      }
      if (local_1e8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.ComplexMasks.AllocatorInstance.Data);
      }
      return;
    }
  } while( true );
}

// StaticRegisterNativesUMovieScenePiecewiseDoubleBlenderSystem @ 14686cb80

void __cdecl
UMovieScenePiecewiseDoubleBlenderSystem::
StaticRegisterNativesUMovieScenePiecewiseDoubleBlenderSystem(void)

{
  return;
}

// ZeroAccumulationBuffers @ 1468751e0

void __thiscall
UMovieScenePiecewiseDoubleBlenderSystem::ZeroAccumulationBuffers
          (UMovieScenePiecewiseDoubleBlenderSystem *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AccumulationBuffers).Absolute.Pairs.ArrayNum;
  pFVar2 = (this->AccumulationBuffers).Absolute.Pairs.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x18;
  while( true ) {
    if ((this->AccumulationBuffers).Absolute.Pairs.ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    memset(*(void **)(pFVar2 + 8),0,(longlong)*(int *)(pFVar2 + 0x10) << 4);
    pFVar2 = pFVar2 + 0x18;
  }
  iVar1 = (this->AccumulationBuffers).Relative.Pairs.ArrayNum;
  pFVar2 = (this->AccumulationBuffers).Relative.Pairs.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x18;
  while( true ) {
    if ((this->AccumulationBuffers).Relative.Pairs.ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    memset(*(void **)(pFVar2 + 8),0,(longlong)*(int *)(pFVar2 + 0x10) << 4);
    pFVar2 = pFVar2 + 0x18;
  }
  iVar1 = (this->AccumulationBuffers).Additive.Pairs.ArrayNum;
  pFVar2 = (this->AccumulationBuffers).Additive.Pairs.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x18;
  while( true ) {
    if ((this->AccumulationBuffers).Additive.Pairs.ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    memset(*(void **)(pFVar2 + 8),0,(longlong)*(int *)(pFVar2 + 0x10) << 4);
    pFVar2 = pFVar2 + 0x18;
  }
  iVar1 = (this->AccumulationBuffers).AdditiveFromBase.Pairs.ArrayNum;
  pFVar3 = (this->AccumulationBuffers).AdditiveFromBase.Pairs.AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->AccumulationBuffers).AdditiveFromBase.Pairs.ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    memset(*(void **)(pFVar3 + 8),0,(longlong)*(int *)(pFVar3 + 0x10) << 4);
    pFVar3 = pFVar3 + 0x20;
  }
  return;
}

// _getUObject @ 146875400

UObject * __thiscall
UMovieScenePiecewiseDoubleBlenderSystem::_getUObject(UMovieScenePiecewiseDoubleBlenderSystem *this)

{
  return (UObject *)&this[-1].BlendedResultMask.Bits.NumBits;
}

