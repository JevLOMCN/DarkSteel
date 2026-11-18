// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 16

// StaticClass @ 14a379850

UClass * __cdecl UMovieSceneControlRigParameterEvaluatorSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneControlRigParameterEvaluatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"MovieSceneControlRigParameterEvaluatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneControlRigParameterEvaluatorSystem.
                InnerSingleton,StaticRegisterNativesUMovieSceneControlRigParameterEvaluatorSystem,
               0x250,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneControlRigParameterEvaluatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneControlRigParameterEvaluatorSystem>,
               local_res8,UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneControlRigParameterEvaluatorSystem.InnerSingleton;
}

// UMovieSceneControlRigParameterEvaluatorSystem @ 14a3b8ff0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneControlRigParameterEvaluatorSystem * __thiscall
UMovieSceneControlRigParameterEvaluatorSystem::UMovieSceneControlRigParameterEvaluatorSystem
          (UMovieSceneControlRigParameterEvaluatorSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneControlRigParameterEvaluatorSystem__6B_;
  UE::MovieScene::
  TOverlappingEntityTracker_NoGarbage<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
  ::
  TOverlappingEntityTracker_NoGarbage<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
            (&this->ControlRigParameterTracker);
  *(undefined8 *)&(this->AccumulatedValues).ParameterValuesByTrack = 0;
  *(undefined8 *)&(this->AccumulatedValues).ParameterValuesByTrack.field_0x8 = 0;
  *(undefined8 *)&(this->AccumulatedValues).ParameterValuesByTrack.field_0x20 = 0;
  *(undefined4 *)&(this->AccumulatedValues).ParameterValuesByTrack.field_0x28 = 0;
  *(undefined4 *)&(this->AccumulatedValues).ParameterValuesByTrack.field_0x2c = 0x80;
  *(undefined4 *)&(this->AccumulatedValues).ParameterValuesByTrack.field_0x34 = 0;
  *(undefined4 *)&(this->AccumulatedValues).ParameterValuesByTrack.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AccumulatedValues).ParameterValuesByTrack.field_0x40 = 0;
  *(undefined4 *)&(this->AccumulatedValues).ParameterValuesByTrack.field_0x48 = 0;
  (this->AccumulatedValues).ValuesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccumulatedValues).ValuesArray.ArrayNum = 0;
  (this->AccumulatedValues).ValuesArray.ArrayMax = 0;
  (this->AccumulatedValues).NextValidIndex = 0;
  (this->ControlRigParameterStorage).Object = (FPreAnimatedControlRigParameterStorage *)0x0;
  (this->ControlRigParameterStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ControlRigStorage).Object = (FPreAnimatedControlRigStorage *)0x0;
  (this->ControlRigStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DoubleBlenderSystem).field0_0x0.DebugPtr = (UMovieScenePiecewiseDoubleBlenderSystem *)0x0;
  (this->ParameterGroupingKey).Index = -1;
  return this;
}

// UMovieSceneControlRigParameterEvaluatorSystem @ 14a3b90b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneControlRigParameterEvaluatorSystem * __thiscall
UMovieSceneControlRigParameterEvaluatorSystem::UMovieSceneControlRigParameterEvaluatorSystem
          (UMovieSceneControlRigParameterEvaluatorSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  code *pcVar2;
  bool bVar3;
  FBuiltInComponentTypes *pFVar4;
  FMovieSceneTracksComponentTypes *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FBuiltInComponentTypes *pFVar7;
  FControlRigComponentTypes *pFVar8;
  FMovieSceneTracksComponentTypes *pFVar9;
  UMovieSceneControlRigParameterEvaluatorSystem *pUVar10;
  uint uVar11;
  TReferenceControllerBase<1> *pTVar12;
  TComponentTypeID<double> *pTVar13;
  undefined1 auStack_3d8 [32];
  FControlRigComponentTypes *local_3b8;
  UObject *local_3b0;
  UObject *local_3a8;
  UObject *local_3a0;
  UObject *local_398;
  UClass *local_390;
  UObject *local_388;
  UClass *local_380;
  UObject *local_378;
  UObject *local_370;
  UClass *local_368;
  UObject *local_360;
  UClass *local_358;
  UClass *local_350;
  UObject *local_348;
  UClass *local_340;
  UObject *local_338;
  UObject *local_330;
  UClass *local_328;
  TSharedPtr<UE::MovieScene::IInitialValueProcessor,1> local_320;
  TSharedPtr<UE::MovieScene::IInitialValueProcessor,1> local_310;
  TSharedPtr<UE::MovieScene::IInitialValueProcessor,1> local_300;
  TSharedPtr<UE::MovieScene::IInitialValueProcessor,1> local_2f0;
  TSharedPtr<UE::MovieScene::IInitialValueProcessor,1> local_2e0;
  FEntityComponentFilter local_2c8;
  FEntityComponentFilter local_248;
  FEntityComponentFilter local_1c8;
  FEntityComponentFilter local_148;
  FEntityComponentFilter local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3d8;
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneControlRigParameterEvaluatorSystem__6B_;
  UE::MovieScene::
  TOverlappingEntityTracker_NoGarbage<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
  ::
  TOverlappingEntityTracker_NoGarbage<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
            (&this->ControlRigParameterTracker);
  uVar11 = 0;
  *(undefined8 *)&(this->AccumulatedValues).ParameterValuesByTrack = 0;
  *(undefined8 *)&(this->AccumulatedValues).ParameterValuesByTrack.field_0x8 = 0;
  *(undefined8 *)&(this->AccumulatedValues).ParameterValuesByTrack.field_0x20 = 0;
  *(undefined4 *)&(this->AccumulatedValues).ParameterValuesByTrack.field_0x28 = 0;
  *(undefined4 *)&(this->AccumulatedValues).ParameterValuesByTrack.field_0x2c = 0x80;
  *(undefined4 *)&(this->AccumulatedValues).ParameterValuesByTrack.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AccumulatedValues).ParameterValuesByTrack.field_0x34 = 0;
  *(undefined8 *)&(this->AccumulatedValues).ParameterValuesByTrack.field_0x40 = 0;
  *(undefined4 *)&(this->AccumulatedValues).ParameterValuesByTrack.field_0x48 = 0;
  (this->AccumulatedValues).ValuesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccumulatedValues).ValuesArray.ArrayNum = 0;
  (this->AccumulatedValues).ValuesArray.ArrayMax = 0;
  (this->AccumulatedValues).NextValidIndex = 0;
  (this->ControlRigParameterStorage).Object = (FPreAnimatedControlRigParameterStorage *)0x0;
  (this->ControlRigParameterStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ControlRigStorage).Object = (FPreAnimatedControlRigStorage *)0x0;
  (this->ControlRigStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ParameterGroupingKey).Index = -1;
  (this->DoubleBlenderSystem).field0_0x0.DebugPtr = (UMovieScenePiecewiseDoubleBlenderSystem *)0x0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0xc;
  if ((this->_padding_ & 0x10) != 0) {
    pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_3b8 = UE::MovieScene::FControlRigComponentTypes::Get();
    pFVar5 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    pTVar6 = ::operator_new(0x50);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFControlRigInitialValueProcessor_MovieScene_UE___00_SharedPointerInternals__6B_
      ;
      pTVar6[1]._padding_ = (longlong)&___7FControlRigInitialValueProcessor_MovieScene_UE__6B_;
      pFVar7 = UE::MovieScene::FBuiltInComponentTypes::Get();
      *(FBuiltInComponentTypes **)&pTVar6[1].SharedReferenceCount = pFVar7;
      pFVar8 = UE::MovieScene::FControlRigComponentTypes::Get();
      pTVar6[2]._padding_ = (longlong)pFVar8;
      pFVar9 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
      pTVar12 = pTVar6 + 1;
      *(FMovieSceneTracksComponentTypes **)&pTVar6[2].SharedReferenceCount = pFVar9;
      pTVar6[3]._padding_ = 0;
      pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[4]._padding_ = 0;
      pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
      if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar10 = (UMovieSceneControlRigParameterEvaluatorSystem *)(*pcVar2)();
          return pUVar10;
        }
      }
    }
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    local_2c8.NoneMask.Bits.NumBits = 0;
    local_2c8.NoneMask.Bits.MaxBits = 0x180;
    local_2c8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c8.ComplexMasks.ArrayNum = 0;
    local_2c8.ComplexMasks.ArrayMax = 0;
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    local_2c8.AllMask.Bits.NumBits = 0;
    local_2c8.AllMask.Bits.MaxBits = 0x180;
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_2c8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_2c8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_320.Object = (IInitialValueProcessor *)pTVar12;
    local_320.SharedReferenceCount.ReferenceController = pTVar6;
    UMovieSceneInitialValueSystem::RegisterProcessor
              ((FComponentTypeID)*(ushort *)&(pFVar5->Parameters).Scalar.InitialValue,&local_320,
               &local_2c8);
    if (local_2c8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.ComplexMasks.AllocatorInstance.Data);
    }
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    local_248.NoneMask.Bits.NumBits = 0;
    local_248.NoneMask.Bits.MaxBits = 0x180;
    local_248.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_248.ComplexMasks.ArrayNum = 0;
    local_248.ComplexMasks.ArrayMax = 0;
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    local_248.AllMask.Bits.NumBits = 0;
    local_248.AllMask.Bits.MaxBits = 0x180;
    local_248.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_248.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_248.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_310.Object = (IInitialValueProcessor *)pTVar12;
    local_310.SharedReferenceCount.ReferenceController = pTVar6;
    UMovieSceneInitialValueSystem::RegisterProcessor
              ((FComponentTypeID)*(ushort *)&(pFVar5->Parameters).Vector2.InitialValue,&local_310,
               &local_248);
    if (local_248.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.ComplexMasks.AllocatorInstance.Data);
    }
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    local_1c8.NoneMask.Bits.NumBits = 0;
    local_1c8.NoneMask.Bits.MaxBits = 0x180;
    local_1c8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.ComplexMasks.ArrayNum = 0;
    local_1c8.ComplexMasks.ArrayMax = 0;
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    local_1c8.AllMask.Bits.NumBits = 0;
    local_1c8.AllMask.Bits.MaxBits = 0x180;
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_1c8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_1c8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_300.Object = (IInitialValueProcessor *)pTVar12;
    local_300.SharedReferenceCount.ReferenceController = pTVar6;
    UMovieSceneInitialValueSystem::RegisterProcessor
              ((FComponentTypeID)*(ushort *)&(pFVar5->Parameters).Vector3.InitialValue,&local_300,
               &local_1c8);
    if (local_1c8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.ComplexMasks.AllocatorInstance.Data);
    }
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    local_148.NoneMask.Bits.NumBits = 0;
    local_148.NoneMask.Bits.MaxBits = 0x180;
    local_148.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.ComplexMasks.ArrayNum = 0;
    local_148.ComplexMasks.ArrayMax = 0;
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    local_148.AllMask.Bits.NumBits = 0;
    local_148.AllMask.Bits.MaxBits = 0x180;
    local_148.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_148.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_148.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2f0.Object = (IInitialValueProcessor *)pTVar12;
    local_2f0.SharedReferenceCount.ReferenceController = pTVar6;
    UMovieSceneInitialValueSystem::RegisterProcessor
              ((FComponentTypeID)*(ushort *)&(pFVar5->Parameters).Color.InitialValue,&local_2f0,
               &local_148);
    if (local_148.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.ComplexMasks.AllocatorInstance.Data);
    }
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    local_c8.NoneMask.Bits.NumBits = 0;
    local_c8.NoneMask.Bits.MaxBits = 0x180;
    local_c8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ComplexMasks.ArrayNum = 0;
    local_c8.ComplexMasks.ArrayMax = 0;
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    local_c8.AllMask.Bits.NumBits = 0;
    local_c8.AllMask.Bits.MaxBits = 0x180;
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_c8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_c8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2e0.Object = (IInitialValueProcessor *)pTVar12;
    local_2e0.SharedReferenceCount.ReferenceController = pTVar6;
    UMovieSceneInitialValueSystem::RegisterProcessor
              ((FComponentTypeID)*(ushort *)&(pFVar5->Parameters).Transform.InitialValue,&local_2e0,
               &local_c8);
    if (local_c8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.ComplexMasks.AllocatorInstance.Data);
    }
    local_3b0 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&local_3b8->ControlRigSource;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_3b0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_3b0);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_3b0,FVar1);
    local_3a8 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar4->HierarchicalBlendTarget;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_3a8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_3a8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_3a8,FVar1);
    local_3a0 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar4->BoundObject;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_3a0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_3a0);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_3a0,FVar1);
    local_398 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_398 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_398);
    }
    local_390 = Z_Construct_UClass_UFloatChannelEvaluatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_390 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_390);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_390,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_398);
    local_388 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_388 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_388);
    }
    local_380 = Z_Construct_UClass_UDoubleChannelEvaluatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_380 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_380);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_380,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_388);
    pTVar13 = pFVar4->DoubleResult;
    do {
      local_378 = (UObject *)this->_padding_;
      FVar1.Value = *(ushort *)pTVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_378 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_378);
      }
      UMovieSceneEntitySystem::DefineComponentConsumer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_378,FVar1);
      uVar11 = uVar11 + 1;
      pTVar13 = pTVar13 + 1;
    } while (uVar11 < 9);
    local_370 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_370 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_370);
    }
    local_368 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_368 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_368);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_368,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_370);
    local_360 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_360 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_360);
    }
    local_358 = Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_358 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_358);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_358,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_360);
    local_350 = Z_Construct_UClass_UMovieSceneInitialValueSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_350 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_350);
    }
    local_348 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_348 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_348);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_348,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_350);
    local_340 = Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_340 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_340);
    }
    local_338 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_338 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_338);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_338,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_340);
    local_330 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_330 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_330);
    }
    local_328 = Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_328 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_328);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_328,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_330);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// operator() @ 14a3c1070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`UMovieSceneControlRigParameterEvaluatorSystem::OnInstantiation'::__l2::<lambda_4>::operator()
          (void *this,FEntityAllocationProxy *param_1,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FRootInstanceHandle> param_3,
          TRead<UE::MovieScene::FControlRigSourceData> param_4,TRead<FName> param_5,bool param_6)

{
  FMovieSceneEntityID FVar1;
  FRootInstanceHandle FVar2;
  longlong lVar3;
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits> *this_00;
  code *pcVar4;
  bool bVar5;
  FEntityAllocation *pFVar6;
  longlong lVar7;
  UControlRig *pUVar8;
  FBuiltInComponentTypes *pFVar9;
  FPreAnimatedEntityCaptureSource *this_01;
  longlong lVar10;
  undefined1 auStack_158 [32];
  FComponentTypeID local_128;
  FComponentTypeID local_126 [3];
  longlong *local_120;
  FName local_118;
  UControlRig *local_110;
  ulonglong local_108;
  initializer_list<UE::MovieScene::FComponentTypeID> local_f8;
  FPreAnimatedStateEntry local_e8;
  FComponentMask local_d8;
  undefined4 local_70;
  undefined4 local_6c;
  void *local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  lVar7 = *(longlong *)this;
  local_120 = this;
  if ((*(longlong *)(lVar7 + 0x220) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((**(int **)(*(longlong *)(lVar7 + 0x220) + 0xb0) != 0) || (param_6)) {
    pFVar6 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(param_1);
    local_108 = (ulonglong)pFVar6->Size;
    if (local_108 != 0) {
      lVar10 = 0;
      lVar7 = (longlong)param_4 - (longlong)param_5;
      do {
        pUVar8 = UMovieSceneControlRigParameterEvaluatorSystem::GetRigFromTrack
                           (*(UMovieSceneControlRigParameterEvaluatorSystem **)this,
                            *(UMovieSceneControlRigParameterTrack **)((longlong)param_5 + lVar7));
        if (pUVar8 != (UControlRig *)0x0) {
          lVar3 = *(longlong *)this;
          if ((*(longlong *)(lVar3 + 0x220) == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this_00 = *(TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits>
                      **)(lVar3 + 0x220);
          local_118 = *(FName *)param_5;
          FVar2 = *(FRootInstanceHandle *)((longlong)param_3 + lVar10 * 4);
          FVar1.Value = *(ushort *)((longlong)param_2 + lVar10 * 2);
          local_110 = pUVar8;
          if ((this_00->ParentExtension->NumRequestsForGlobalState != 0) ||
             (this = local_120, param_6)) {
            local_d8.Bits.MaxBits = 0x180;
            local_d8.Bits.NumBits = 0;
            local_70 = 0;
            local_68 = (void *)0x0;
            local_60 = 0;
            local_58 = 0;
            local_6c = 0x180;
            pFVar9 = UE::MovieScene::FBuiltInComponentTypes::Get();
            local_128.Value = (pFVar9->Tags).NeedsLink.Value;
            local_f8._First = &local_128;
            local_f8._Last = local_126;
            UE::MovieScene::FComponentMask::SetAll(&local_d8,&local_f8);
            UE::MovieScene::
            TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits>::
            MakeEntry<UControlRig_*_&,FName_&>(this_00,&local_e8,&local_110,&local_118);
            this_01 = UE::MovieScene::FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                                (this_00->ParentExtension);
            UE::MovieScene::FPreAnimatedEntityCaptureSource::BeginTrackingEntity
                      (this_01,&local_e8,FVar1,FVar2,param_6);
            this = local_120;
            if (local_68 != (void *)0x0) {
              FMemory::Free(local_68);
              this = local_120;
            }
          }
        }
        lVar10 = lVar10 + 1;
        param_5 = (TRead<FName>)((longlong)param_5 + 8);
      } while (lVar10 < (longlong)local_108);
    }
  }
  return;
}

// FindParameters @ 14a40cda0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FControlRigParameterBuffer * __thiscall
UMovieSceneControlRigParameterEvaluatorSystem::FindParameters
          (UMovieSceneControlRigParameterEvaluatorSystem *this,
          UMovieSceneControlRigParameterTrack *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  FControlRigParameterBuffer *pFVar5;
  uint uVar6;
  FWeakObjectPtr local_res8;
  FObjectKey local_res10;
  UMovieSceneControlRigParameterTrack *local_res18 [2];
  
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if (param_1 != (UMovieSceneControlRigParameterTrack *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    local_res10.ObjectIndex = local_res8.ObjectIndex;
    local_res10.ObjectSerialNumber = local_res8.ObjectSerialNumber;
  }
  puVar4 = (uint *)TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
                   ::Find((TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
                           *)&this->AccumulatedValues,&local_res10);
  if (puVar4 != (uint *)0x0) {
    uVar1 = *puVar4;
    uVar6 = 0;
    if ((int)uVar1 < (this->AccumulatedValues).ValuesArray.ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FControlRigParameterBuffer *)(*pcVar2)();
        return pFVar5;
      }
    }
    return (FControlRigParameterBuffer *)
           ((this->AccumulatedValues).ValuesArray.AllocatorInstance.Data +
           (longlong)(int)uVar1 * 0x88);
  }
  return (FControlRigParameterBuffer *)0x0;
}

// GetPrivateStaticClass @ 14a417070

UClass * __cdecl UMovieSceneControlRigParameterEvaluatorSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneControlRigParameterEvaluatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"MovieSceneControlRigParameterEvaluatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneControlRigParameterEvaluatorSystem.
                InnerSingleton,StaticRegisterNativesUMovieSceneControlRigParameterEvaluatorSystem,
               0x250,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneControlRigParameterEvaluatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneControlRigParameterEvaluatorSystem>,
               local_res8,UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneControlRigParameterEvaluatorSystem.InnerSingleton;
}

// GetRigFromTrack @ 14a417760

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRig * __thiscall
UMovieSceneControlRigParameterEvaluatorSystem::GetRigFromTrack
          (UMovieSceneControlRigParameterEvaluatorSystem *this,
          UMovieSceneControlRigParameterTrack *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  UControlRig *pUVar5;
  uint uVar6;
  FWeakObjectPtr local_res8;
  FObjectKey local_res10;
  UMovieSceneControlRigParameterTrack *local_res18 [2];
  
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if (param_1 != (UMovieSceneControlRigParameterTrack *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    local_res10.ObjectIndex = local_res8.ObjectIndex;
    local_res10.ObjectSerialNumber = local_res8.ObjectSerialNumber;
  }
  puVar4 = (uint *)TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
                   ::Find((TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
                           *)&this->AccumulatedValues,&local_res10);
  if (puVar4 != (uint *)0x0) {
    uVar1 = *puVar4;
    uVar6 = 0;
    if ((int)uVar1 < (this->AccumulatedValues).ValuesArray.ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UControlRig *)(*pcVar2)();
        return pUVar5;
      }
    }
    pUVar5 = (UControlRig *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((this->AccumulatedValues).ValuesArray.AllocatorInstance.Data +
                                 (longlong)(int)uVar1 * 0x88));
    return pUVar5;
  }
  return (UControlRig *)0x0;
}

// InitializeBaseRigComponent @ 14a421ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
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
UMovieSceneControlRigParameterEvaluatorSystem::InitializeBaseRigComponent
          (UMovieSceneControlRigParameterEvaluatorSystem *this,UObject *param_1,
          FMovieSceneEntityID param_2,FRootInstanceHandle param_3,bool param_4,bool param_5,
          FControlRigSourceData param_6,FBaseControlRigEvalData *param_7,
          TMap<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*,0>_>
          *param_8)

{
  FName *pFVar1;
  undefined1 uVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IControlRigObjectBinding *pIVar5;
  code *pcVar6;
  uint uVar7;
  UMovieSceneControlRigParameterEvaluatorSystem *pUVar8;
  TSet<TTuple<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*>,TDefaultMapHashableKeyFuncs<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar9;
  longlong lVar10;
  UWorld *pUVar11;
  UClass *pUVar12;
  FBuiltInComponentTypes *pFVar13;
  FPreAnimatedEntityCaptureSource *this_01;
  TSharedRef<FControlRigObjectBinding,1> *pTVar14;
  UObject *pUVar15;
  UObject *pUVar16;
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits> *this_02;
  FBaseControlRigEvalData **ppFVar17;
  ulonglong uVar18;
  FName *pFVar19;
  FName *pFVar20;
  FName *pFVar21;
  TObjectPtr<UControlRig>_u_0 TVar22;
  undefined1 auStack_1c8 [32];
  TObjectPtr<UControlRig>_u_0 local_198;
  FComponentTypeID local_190;
  FComponentTypeID local_18e;
  undefined1 local_18c [4];
  TPairInitializer<UControlRig_*_const_&,UE::MovieScene::FBaseControlRigEvalData_*_&&> local_188;
  uint local_178;
  TObjectPtr<UControlRig>_u_0 local_170;
  TObjectPtr<UControlRig>_u_0 local_168;
  UMovieSceneControlRigParameterEvaluatorSystem *local_160;
  TSet<TTuple<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*>,TDefaultMapHashableKeyFuncs<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*,0>,FDefaultSetAllocator>
  *local_158;
  FBaseControlRigEvalData *local_150;
  FName *local_148;
  uint local_140;
  FComponentTypeID *local_138;
  FComponentTypeID *pFStack_130;
  TSharedPtr<IControlRigObjectBinding,1> local_128;
  TObjectPtr<UControlRig>_u_0 *local_118;
  FBaseControlRigEvalData **local_110;
  FPreAnimatedStateEntry local_108;
  initializer_list<UE::MovieScene::FComponentTypeID> local_f8;
  TSharedRef<FControlRigObjectBinding,1> local_e8;
  FComponentMask local_d8;
  undefined4 local_70;
  undefined4 local_6c;
  void *local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_158 = (TSet<TTuple<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*>,TDefaultMapHashableKeyFuncs<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*,0>,FDefaultSetAllocator>
               *)param_8;
  if (param_6.Track == (UMovieSceneControlRigParameterTrack *)0x0) {
    return;
  }
  if (param_1 == (UObject *)0x0) {
    return;
  }
  local_160 = this;
  lVar10 = (**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  if (lVar10 != 0) {
    pUVar11 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    bVar9 = UWorld::IsGameWorld(pUVar11);
    if (bVar9) {
      pUVar11 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
      goto LAB_14a421b5e;
    }
  }
  pUVar11 = (UWorld *)0x0;
LAB_14a421b5e:
  pUVar12 = Z_Construct_UClass_UControlRig_NoRegister();
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar3) ||
     (local_198 = (TObjectPtr<UControlRig>_u_0)param_1,
     (longlong *)
     *(undefined1 **)(*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar3 * 8)
     != &pUVar12->_padding_)) {
    if (pUVar11 == (UWorld *)0x0) {
      local_198 = (TObjectPtr<UControlRig>_u_0)((param_6.Track)->ControlRig).field0_0x0.DebugPtr;
    }
    else {
      local_198.DebugPtr =
           UMovieSceneControlRigParameterTrack::GetGameWorldControlRig(param_6.Track,pUVar11);
    }
    if (local_198.DebugPtr == (UControlRig *)0x0) {
      return;
    }
  }
  local_188.Key =
       (UControlRig **)
       TSharedPtr<UE::MovieScene::FPreAnimatedControlRigStorage,1>::operator->
                 (&this->ControlRigStorage);
  local_170.DebugPtr = local_198.DebugPtr;
  if ((((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits> *)local_188.Key)->
       ParentExtension->NumRequestsForGlobalState != 0) || (param_4)) {
    local_d8.Bits.MaxBits = 0x180;
    local_d8.Bits.NumBits = 0;
    local_70 = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_58 = 0;
    local_6c = 0x180;
    pFVar13 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_190.Value = (pFVar13->Tags).NeedsLink.Value;
    local_138 = &local_190;
    pFStack_130 = &local_18e;
    local_f8._First = local_138;
    local_f8._Last = pFStack_130;
    UE::MovieScene::FComponentMask::SetAll(&local_d8,&local_f8);
    UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::
    MakeEntry<UControlRig_*_&>
              ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits> *)
               local_188.Key,&local_108,&local_170.DebugPtr);
    this_01 = UE::MovieScene::FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                        (*(FPreAnimatedStateExtension **)((longlong)local_188.Key + 0xb0));
    UE::MovieScene::FPreAnimatedEntityCaptureSource::BeginTrackingEntity
              (this_01,&local_108,param_2,param_3,param_4);
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
  }
  pTVar4 = ((local_198.DebugPtr)->ObjectBinding).SharedReferenceCount.ReferenceController;
  pIVar5 = ((local_198.DebugPtr)->ObjectBinding).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (pIVar5 == (IControlRigObjectBinding *)0x0) {
    pTVar14 = MakeShared<FControlRigObjectBinding,1>(&local_e8);
    local_128.Object = (IControlRigObjectBinding *)pTVar14->Object;
    local_128.SharedReferenceCount.ReferenceController =
         (pTVar14->SharedReferenceCount).ReferenceController;
    if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UControlRig::SetObjectBinding(local_198.DebugPtr,&local_128);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
  }
  pTVar4 = ((local_198.DebugPtr)->ObjectBinding).SharedReferenceCount.ReferenceController;
  pIVar5 = ((local_198.DebugPtr)->ObjectBinding).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pIVar5 == (IControlRigObjectBinding *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar15 = (UObject *)(**(code **)((longlong)*pIVar5 + 0x28))(pIVar5);
  pUVar16 = FControlRigObjectBinding::GetBindableObject(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (pUVar15 != pUVar16) {
    pTVar4 = ((local_198.DebugPtr)->ObjectBinding).SharedReferenceCount.ReferenceController;
    pIVar5 = ((local_198.DebugPtr)->ObjectBinding).Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar5 == (IControlRigObjectBinding *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (**(code **)*pIVar5)(pIVar5,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    (**(code **)((local_198.DebugPtr)->_padding_ + 0x438))(local_198.DebugPtr,&local_188.Value);
    (**(code **)((local_198.DebugPtr)->_padding_ + 0x2c0))(local_198.DebugPtr,1);
    pUVar15 = FControlRigObjectBinding::GetBindableObject(param_1);
    if (pUVar15 != (UObject *)0x0) {
      pUVar12 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar3 = (int)pUVar12->_padding_;
      if ((iVar3 <= *(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar12->_padding_)) {
        (**(code **)((local_198.DebugPtr)->_padding_ + 0x318))();
        (**(code **)((local_198.DebugPtr)->_padding_ + 0x468))(local_198.DebugPtr,pUVar15,1);
        (**(code **)((local_198.DebugPtr)->_padding_ + 0x2d0))();
      }
    }
    if ((pUVar11 == (UWorld *)0x0) &&
       (bVar9 = UObjectBaseUtility::IsA<UFKControlRig>((UObjectBaseUtility *)local_198.DebugPtr),
       bVar9)) {
      UMovieSceneControlRigParameterTrack::ReplaceControlRig(param_6.Track,local_198.DebugPtr,true);
    }
    (**(code **)((local_198.DebugPtr)->_padding_ + 0x438))(local_198.DebugPtr,&local_148);
    pFVar19 = local_148;
    pFVar21 = (FName *)local_188.Value;
    if (((local_178 != local_140) ||
        (bVar9 = CompareItems<FName,int>((FName *)local_188.Value,local_148,local_178), !bVar9)) &&
       (local_198.DebugPtr != (UControlRig *)0x0)) {
      (**(code **)((local_198.DebugPtr)->_padding_ + 0x430))(local_198.DebugPtr,0);
      uVar7 = local_178;
      uVar18 = (ulonglong)(int)local_178;
      pFVar1 = (FName *)(local_188.Value + uVar18);
      pFVar20 = (FName *)local_188.Value;
      while( true ) {
        if ((uint)uVar18 != uVar7) {
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_18c);
        }
        pFVar19 = local_148;
        pFVar21 = (FName *)local_188.Value;
        if (pFVar20 == pFVar1) break;
        (**(code **)((local_198.DebugPtr)->_padding_ + 0x428))(local_198.DebugPtr,pFVar20,1,0);
        uVar18 = (ulonglong)local_178;
        pFVar20 = pFVar20 + 1;
      }
    }
    if (pFVar19 != (FName *)0x0) {
      FMemory::Free(pFVar19);
      pFVar21 = (FName *)local_188.Value;
    }
    if (pFVar21 != (FName *)0x0) {
      FMemory::Free(pFVar21);
    }
  }
  local_198.DebugPtr = UE::MovieScene::GetControlRig(param_6.Track,param_1);
  if (local_198.DebugPtr == (UControlRig *)0x0) {
    return;
  }
  local_168.DebugPtr = local_198.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)local_198.DebugPtr);
  }
  FWeakObjectPtr::operator=(&(param_7->WeakControlRig).WeakPtr,(FObjectPtr)&local_168);
  pUVar8 = local_160;
  this_02 = (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits> *)
            TSharedPtr<UE::MovieScene::FPreAnimatedControlRigStorage,1>::operator->
                      (&local_160->ControlRigStorage);
  UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::
  CacheTrackedPreAnimatedValue<UControlRig_*>(this_02,CacheIfTracked,local_198.DebugPtr);
  this_00 = local_158;
  TVar22 = local_198;
  ppFVar17 = TMapBase<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*,0>_>
             ::Find((TMapBase<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*,0>_>
                     *)local_158,local_198.DebugPtr);
  if (ppFVar17 == (FBaseControlRigEvalData **)0x0) {
    param_7->bIsActive = '\x01';
    local_118 = &local_198;
    local_110 = &local_150;
    local_150 = param_7;
    TSet<TTuple<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*>,TDefaultMapHashableKeyFuncs<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UControlRig_*_const_&,UE::MovieScene::FBaseControlRigEvalData_*_&&>_>
              (this_00,&local_188,(bool *)&local_118);
    TVar22 = local_198;
  }
  else {
    uVar2 = (*ppFVar17)->field_0x10;
    if ((*ppFVar17)->bHasWeight != '\0') {
      return;
    }
    if (param_5) {
      (*ppFVar17)->field_0x10 = uVar2 & 0xfe;
      param_7->bIsActive = '\x01';
      *ppFVar17 = param_7;
      return;
    }
  }
  FControlRigBindingHelper::BindToSequencerInstance(TVar22.DebugPtr);
  UE::MovieScene::FAccumulatedControlRigValues::InitializeRig
            (&pUVar8->AccumulatedValues,param_6.Track,local_198.DebugPtr);
  return;
}

// IsRelevantImpl @ 14a428390

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneControlRigParameterEvaluatorSystem::IsRelevantImpl
          (UMovieSceneControlRigParameterEvaluatorSystem *this,
          UMovieSceneEntitySystemLinker *param_1)

{
  TComponentTypeID<UE::MovieScene::FControlRigSourceData> TVar1;
  FControlRigComponentTypes *pFVar2;
  FComponentMask *pFVar3;
  
  pFVar2 = UE::MovieScene::FControlRigComponentTypes::Get();
  TVar1 = pFVar2->ControlRigSource;
  pFVar3 = UE::MovieScene::FEntityManager::GetAccumulatedMask(&param_1->EntityManager);
  if (((TVar1 != (TComponentTypeID<UE::MovieScene::FControlRigSourceData>)0xffff) &&
      ((int)(uint)(ushort)TVar1 < (pFVar3->Bits).NumBits)) &&
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[(ushort)TVar1 >> 5].Pad >>
       ((ushort)TVar1 & 0x1f) & 1) != 0)) {
    return true;
  }
  return false;
}

// OnEvaluation @ 14a42ec20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterEvaluatorSystem::OnEvaluation
          (UMovieSceneControlRigParameterEvaluatorSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6221458581514880845>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigSystem.cpp"
                     ,0x74d,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnInstantiation @ 14a42ee70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterEvaluatorSystem::OnInstantiation
          (UMovieSceneControlRigParameterEvaluatorSystem *this)

{
  TComponentTypeID<UE::MovieScene::FInterrogationKey> TVar1;
  TComponentTypeID<UE::MovieScene::FControlRigSourceData> TVar2;
  TComponentTypeID<UE::MovieScene::FBaseControlRigEvalData> TVar3;
  TComponentTypeID<FMovieSceneSequenceID> TVar4;
  TComponentTypeID<FGuid> TVar5;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TVar6;
  FComponentTypeID FVar7;
  FComponentTypeID FVar8;
  FComponentTypeID FVar9;
  FPreAnimatedControlRigParameterStorage *pFVar10;
  code *pcVar11;
  FMovieSceneTracksComponentTypes *pFVar12;
  bool bVar13;
  int iVar14;
  FBuiltInComponentTypes *pFVar15;
  FControlRigComponentTypes *pFVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  UControlRig *pUVar19;
  FScriptContainerElement *pFVar20;
  FWeakObjectPtr *this_00;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  FWeakObjectPtr *pFVar23;
  FAccumulatedControlRigValues *this_01;
  undefined1 auStackY_14f8 [32];
  undefined1 local_14c8 [4];
  FComponentTypeID local_14c4;
  FComponentTypeID local_14c2;
  FComponentTypeID local_14c0;
  FComponentTypeID local_14be;
  FComponentTypeID local_14bc;
  FComponentTypeID local_14ba;
  FComponentTypeID local_14b8;
  FComponentTypeID local_14b6;
  FComponentTypeID local_14b4;
  FComponentTypeID local_14b2;
  FComponentTypeID local_14b0;
  FComponentTypeID local_14ae;
  FComponentTypeID local_14ac;
  FComponentTypeID local_14aa;
  FComponentTypeID local_14a8;
  FComponentTypeID local_14a6;
  FComponentTypeID local_14a4;
  FComponentTypeID local_14a2;
  FComponentTypeID local_14a0;
  FComponentTypeID local_149e;
  undefined1 local_149c [4];
  FComponentTypeID local_1498;
  ushort local_1496;
  FComponentTypeID local_1494;
  ushort local_1492;
  FComponentTypeID local_1490;
  ushort local_148e;
  FComponentTypeID local_148c;
  ushort local_148a;
  FComponentTypeID local_1488;
  ushort local_1486;
  FComponentTypeID local_1484 [2];
  FControlRigComponentTypes *local_1480;
  FMovieSceneTracksComponentTypes *local_1478;
  IInterrogationExtension *local_1470;
  <lambda_3> local_1468;
  <lambda_4> local_1460;
  IMovieSceneConditionalEntityMutation local_1458;
  FAccumulatedControlRigValues *local_1450;
  IMovieSceneEntityMutation local_1448;
  FAccumulatedControlRigValues *local_1440;
  IMovieSceneEntityMutation local_1438;
  FAccumulatedControlRigValues *local_1430;
  FPreAnimatedControlRigParameterStorage *local_1428;
  wchar_t *local_1418;
  TStatIdData *pTStack_1410;
  byte local_1408;
  undefined7 uStack_1407;
  Type TStack_1400;
  uint uStack_13fc;
  wchar_t *local_13f0;
  TStatIdData *pTStack_13e8;
  byte local_13e0;
  undefined7 uStack_13df;
  Type TStack_13d8;
  uint uStack_13d4;
  wchar_t *local_13c8;
  TStatIdData *pTStack_13c0;
  byte local_13b8;
  undefined7 uStack_13b7;
  Type TStack_13b0;
  uint uStack_13ac;
  wchar_t *local_13a0;
  TStatIdData *pTStack_1398;
  byte local_1390;
  undefined7 uStack_138f;
  Type TStack_1388;
  uint uStack_1384;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1378;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1368;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1358;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1348;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1338;
  <lambda_2> local_1328;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1318;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1308;
  initializer_list<UE::MovieScene::FComponentTypeID> local_12f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_12e8;
  FOverlappingControlRigParameterHandler local_12d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_12c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_12b8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_12a8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1298;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1288;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1278;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1268;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1258;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1248;
  <lambda_1> local_1238;
  FComponentTypeID local_1220;
  TComponentTypeID<FName> local_121e;
  ushort local_121c;
  FComponentTypeID local_121a;
  FComponentTypeID local_1218;
  ushort local_1216;
  ushort local_1214;
  FComponentTypeID local_1212;
  FComponentTypeID local_1210;
  TComponentTypeID<UE::MovieScene::FAccumulatedControlEntryIndex> local_120e;
  TComponentTypeID<FName> local_120c;
  ushort local_120a;
  ushort local_1208;
  FComponentTypeID local_1206 [7];
  undefined1 local_11f8 [32];
  void *local_11d8;
  undefined4 local_11d0;
  uint local_11cc;
  undefined4 local_11c8;
  undefined4 local_11c4;
  void *local_11b8;
  undefined4 local_11b0;
  FEntityComponentFilter local_11a8;
  undefined1 local_1128 [4];
  TComponentTypeID<UE::MovieScene::FControlRigSourceData> local_1124;
  TComponentTypeID<FName> local_1122;
  FEntityComponentFilter local_1120;
  wchar_t *local_10a0;
  TStatIdData *pTStack_1098;
  undefined8 local_1090;
  undefined8 uStack_1088;
  FEntityComponentFilter local_1078;
  FEntityComponentFilter local_ff8;
  FEntityComponentFilter local_f78;
  FEntityComponentFilter local_ef8;
  FEntityComponentFilter local_e78;
  TComponentTypeID<UE::MovieScene::FEntityGroupID> local_df8;
  FEntityComponentFilter local_df0;
  wchar_t *local_d70;
  TStatIdData *pTStack_d68;
  undefined8 local_d60;
  undefined8 uStack_d58;
  FEntityComponentFilter local_d48;
  FEntityComponentFilter local_cc8;
  TComponentTypeID<FGuid> local_c46;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> local_c44;
  uint local_c42;
  TComponentTypeID<UE::MovieScene::FControlRigSourceData> local_c3e;
  TComponentTypeID<UE::MovieScene::FBaseControlRigEvalData> local_c3c;
  FEntityComponentFilter local_c38;
  wchar_t *local_bb8;
  TStatIdData *pTStack_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  FEntityComponentFilter local_b98;
  FEntityComponentFilter local_b18;
  undefined1 local_a98 [4];
  FComponentTypeID local_a94;
  FComponentTypeID local_a92;
  FEntityComponentFilter local_a90;
  wchar_t *local_a10;
  TStatIdData *pTStack_a08;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  undefined1 local_9e8 [120];
  void *local_970;
  wchar_t *local_960;
  TStatId TStack_958;
  undefined8 local_950;
  Type TStack_948;
  bool bStack_944;
  undefined3 uStack_943;
  FEntityComponentFilter local_940;
  undefined4 local_890;
  undefined4 local_88c;
  undefined4 local_858;
  undefined4 local_854;
  undefined1 local_848 [2];
  FComponentAccess local_846;
  FComponentAccess local_844;
  FComponentAccess local_842;
  FEntityComponentFilter local_840;
  wchar_t *local_7c0;
  TStatId TStack_7b8;
  undefined8 local_7b0;
  Type TStack_7a8;
  bool bStack_7a4;
  undefined3 uStack_7a3;
  FEntityComponentFilter local_7a0;
  undefined4 local_6f0;
  undefined4 local_6ec;
  undefined4 local_6b8;
  undefined4 local_6b4;
  undefined1 local_6a8 [2];
  FComponentAccess local_6a6;
  FComponentAccess local_6a4;
  FComponentAccess local_6a2;
  FEntityComponentFilter local_6a0;
  wchar_t *local_620;
  TStatId TStack_618;
  undefined8 local_610;
  Type TStack_608;
  bool bStack_604;
  undefined3 uStack_603;
  FEntityComponentFilter local_600;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_518;
  undefined4 local_514;
  undefined1 local_508 [4];
  FComponentTypeID local_504;
  uint local_502;
  FComponentTypeID local_4fe;
  FComponentTypeID local_4fc;
  FEntityComponentFilter local_4f8;
  FEntityComponentFilter local_478;
  wchar_t *local_3f8;
  TStatIdData *pTStack_3f0;
  undefined8 local_3e8;
  Type TStack_3e0;
  bool bStack_3dc;
  undefined3 uStack_3db;
  undefined1 local_3d8 [2];
  FComponentAccess local_3d6;
  FComponentAccess local_3d4;
  uint local_3d2;
  FComponentAccess local_3ce;
  FComponentAccess local_3cc [2];
  FEntityComponentFilter local_3c8;
  FEntityComponentFilter local_348;
  wchar_t *local_2c8;
  TStatId TStack_2c0;
  undefined8 local_2b8;
  Type TStack_2b0;
  bool bStack_2ac;
  undefined3 uStack_2ab;
  FEntityComponentFilter local_2a8;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  FEntityComponentFilter local_1b8;
  FEntityComponentFilter local_138;
  FEntityComponentFilter local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_14f8;
  pFVar15 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar16 = UE::MovieScene::FControlRigComponentTypes::Get();
  local_1480 = pFVar16;
  local_1478 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_11a8.AllMask.Bits.MaxBits = 0x180;
  local_11a8.AllMask.Bits.NumBits = 0;
  local_11a8.NoneMask.Bits.NumBits = 0;
  local_11a8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_11a8.ComplexMasks.ArrayNum = 0;
  local_11a8.ComplexMasks.ArrayMax = 0;
  local_11a8.NoneMask.Bits.MaxBits = 0x180;
  local_1498.Value = *(ushort *)&pFVar16->BaseControlRigEvalData;
  local_1496 = (pFVar16->Tags).ControlRigParameter.Value;
  iVar14 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x43c,&local_11a8.ComplexMasks.AllocatorInstance,
                      &local_11a8.ComplexMasks.ArrayMax);
  local_1248._First = &local_1498;
  pFVar20 = local_11a8.ComplexMasks.AllocatorInstance.Data + (longlong)iVar14 * 0x3c;
  local_1248._Last = &local_1494;
  *(int *)(pFVar20 + 0x30) = 0;
  *(int *)(pFVar20 + 0x34) = 0x180;
  pFVar20[0x38] = (FScriptContainerElement)0x2;
  local_11a8.ComplexMasks.ArrayNum = iVar14 + 1;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)pFVar20,&local_1248);
  local_1494.Value = (pFVar15->Tags).NeedsLink.Value;
  local_1492 = (pFVar15->Tags).NeedsUnlink.Value;
  if (local_11a8.ComplexMasks.ArrayNum == local_11a8.ComplexMasks.ArrayMax) {
    local_11a8.ComplexMasks.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x43c,&local_11a8.ComplexMasks.AllocatorInstance,
                    &local_11a8.ComplexMasks.ArrayMax);
  }
  lVar17 = (longlong)local_11a8.ComplexMasks.ArrayNum;
  local_11a8.ComplexMasks.ArrayNum = local_11a8.ComplexMasks.ArrayNum + 1;
  local_1378._First = &local_1494;
  pFVar20 = local_11a8.ComplexMasks.AllocatorInstance.Data + lVar17 * 0x3c;
  local_1378._Last = &local_1490;
  *(int *)(pFVar20 + 0x30) = 0;
  *(int *)(pFVar20 + 0x34) = 0x180;
  pFVar20[0x38] = (FScriptContainerElement)0x2;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)pFVar20,&local_1378);
  bVar13 = UE::MovieScene::FEntityManager::Contains
                     ((FEntityManager *)(this->_padding_ + 0x28),&local_11a8);
  if (bVar13) {
    (this->AccumulatedValues).NextValidIndex = 0;
    pFVar22 = (this->AccumulatedValues).ValuesArray.AllocatorInstance.Data;
    iVar14 = (this->AccumulatedValues).ValuesArray.ArrayNum;
    pFVar20 = pFVar22 + 0x78;
    pFVar21 = pFVar22 + (longlong)iVar14 * 0x88;
    while( true ) {
      if ((this->AccumulatedValues).ValuesArray.ArrayNum != iVar14) {
        local_14c8[0] = 0;
        `TCheckedPointerIterator<UE::MovieScene::FAccumulatedControlRigValues::FEntry,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_14c8);
      }
      if (pFVar22 == pFVar21) break;
      pFVar20[8] = (FScriptContainerElement)0x0;
      for (pFVar18 = pFVar20 + -0x70; pFVar18 != pFVar20; pFVar18 = pFVar18 + 0x10) {
        *(undefined2 *)(pFVar18 + 10) = 0;
      }
      pFVar22 = pFVar22 + 0x88;
      pFVar20 = pFVar20 + 0x88;
    }
    local_11f8._0_8_ = (FScriptContainerElement *)0x0;
    local_11f8._8_8_ = 0;
    local_11d8 = (void *)0x0;
    local_11d0 = 0;
    local_11cc = 0x80;
    local_11c8 = 0xffffffff;
    local_11c4 = 0;
    local_11b8 = (void *)0x0;
    local_11b0 = 0;
    if (((UMovieSceneEntitySystemLinker *)this->_padding_)->Role == Interrogation) {
      local_1470 = UMovieSceneEntitySystemLinker::
                   FindExtension<UE::MovieScene::IInterrogationExtension>
                             ((UMovieSceneEntitySystemLinker *)this->_padding_);
      if ((local_1470 == (IInterrogationExtension *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Interrogation",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigSystem.cpp"
                              ,0x64b,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar16 = local_1480;
      local_13b8 = local_13b8 & 0xe0;
      TVar1 = (pFVar15->Interrogation).InputKey;
      pTStack_13c0 = &TStatId::TStatId_NAME_None;
      local_14c4.Value = *(ushort *)&pFVar15->WeightAndEasingResult;
      TVar2 = local_1480->ControlRigSource;
      TVar3 = local_1480->BaseControlRigEvalData;
      local_12e8._First = &local_14c4;
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
      local_12e8._Last = &local_14c2;
      local_13c8 = (wchar_t *)0x0;
      uStack_13ac = uStack_13ac & 0xffffff00;
      local_1078.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1078.ComplexMasks.ArrayNum = 0;
      local_1078.ComplexMasks.ArrayMax = 0;
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
      TStack_13b0 = AnyHiPriThreadHiPriTask;
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
      local_1078.AllMask.Bits.NumBits = 0;
      local_1078.AllMask.Bits.MaxBits = 0x180;
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
      local_1078.NoneMask.Bits.NumBits = 0;
      local_1078.NoneMask.Bits.MaxBits = 0x180;
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
      local_1078.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
      local_1078.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
      UE::MovieScene::FComponentMask::SetAll(&local_1078.AllMask,&local_12e8);
      UE::MovieScene::FEntityComponentFilter::FEntityComponentFilter(&local_1b8,&local_1078);
      local_a98._2_2_ = TVar1;
      local_a94.Value = (ushort)TVar2;
      local_a92.Value = (ushort)TVar3;
      UE::Core::Private::Tuple::TTupleBaseElement<UE::MovieScene::FFilterMatchPassthrough,4,5>::
      TTupleBaseElement<UE::MovieScene::FFilterMatchPassthrough,4,5><UE::MovieScene::FFilterMatchPassthrough>
                ((TTupleBaseElement<UE::MovieScene::FFilterMatchPassthrough,4,5> *)&local_a90,
                 ForwardingConstructor,(FFilterMatchPassthrough *)&local_1b8);
      local_a00._1_7_ = uStack_13b7;
      local_a00._0_1_ = local_13b8;
      uStack_9f8._4_4_ = uStack_13ac;
      uStack_9f8._0_4_ = TStack_13b0;
      local_a10 = local_13c8;
      pTStack_a08 = pTStack_13c0;
      if (local_1b8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.ComplexMasks.AllocatorInstance.Data);
      }
      local_14c0.Value = (pFVar15->Tags).NeedsUnlink.Value;
      local_6a8[0] = local_a98[0];
      local_6a6.ComponentType.Value = (FComponentTypeID)(FComponentTypeID)local_a98._2_2_;
      local_6a4.ComponentType.Value = (FComponentTypeID)(FComponentTypeID)local_a94.Value;
      local_6a2.ComponentType.Value = (FComponentTypeID)(FComponentTypeID)local_a92.Value;
      UE::MovieScene::FEntityComponentFilter::FEntityComponentFilter(&local_6a0,&local_a90);
      local_600.AllMask.Bits.NumBits = 0;
      local_620 = local_a10;
      TStack_618.StatIdPtr = pTStack_a08;
      local_600.AllMask.Bits.MaxBits = 0x180;
      local_610 = local_a00;
      TStack_608 = (Type)uStack_9f8;
      bStack_604 = uStack_9f8._4_1_;
      uStack_603 = uStack_9f8._5_3_;
      local_600.NoneMask.Bits.NumBits = 0;
      local_600.NoneMask.Bits.MaxBits = 0x180;
      local_600.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_600.ComplexMasks.ArrayNum = 0;
      local_600.ComplexMasks.ArrayMax = 0;
      local_550 = 0;
      local_54c = 0x180;
      local_518 = 0;
      local_514 = 0x180;
      UE::MovieScene::AddAccessorToFilter(&local_6a6,&local_600);
      UE::MovieScene::AddAccessorToFilter(&local_6a4,&local_600);
      UE::MovieScene::AddAccessorToFilter(&local_6a2,&local_600);
      local_1368._First = &local_14c0;
      local_1368._Last = &local_14be;
      UE::MovieScene::FComponentMask::SetAll(&local_600.NoneMask,&local_1368);
      local_1238.Interrogation = local_1470;
      local_1238.EncounteredRigs =
           (TMap<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*,0>_>
            *)local_11f8;
      local_1238.__this = this;
      UE::MovieScene::
      TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::FFilterMatchPassthrough>
      ::
      Iterate_PerEntityImpl<_UMovieSceneControlRigParameterEvaluatorSystem::OnInstantiation_::__l8::<lambda_1>_>
                ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::FFilterMatchPassthrough>
                  *)local_6a8,(FEntityManager *)(this->_padding_ + 0x28),&local_600,&local_1238);
      if (local_600.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_600.ComplexMasks.AllocatorInstance.Data);
      }
      if (local_6a0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6a0.ComplexMasks.AllocatorInstance.Data);
      }
      if (local_a90.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a90.ComplexMasks.AllocatorInstance.Data);
      }
      if (local_1078.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1078.ComplexMasks.AllocatorInstance.Data);
      }
    }
    else {
      TVar4 = pFVar15->SequenceID;
      local_13e0 = local_13e0 & 0xe0;
      TVar5 = pFVar15->GenericObjectBinding;
      TVar2 = local_1480->ControlRigSource;
      TVar3 = local_1480->BaseControlRigEvalData;
      TVar6 = pFVar15->RootInstanceHandle;
      pTStack_13e8 = &TStatId::TStatId_NAME_None;
      local_14bc.Value = (pFVar15->Tags).RestoreState.Value;
      local_1358._First = &local_14bc;
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
      local_1358._Last = &local_14ba;
      local_13f0 = (wchar_t *)0x0;
      local_f78.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
      TStack_13d8 = AnyHiPriThreadHiPriTask;
      uStack_13d4 = uStack_13d4 & 0xffffff00;
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
      local_f78.AllMask.Bits.NumBits = 0;
      local_f78.AllMask.Bits.MaxBits = 0x180;
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
      local_f78.NoneMask.Bits.NumBits = 0;
      local_f78.NoneMask.Bits.MaxBits = 0x180;
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
      local_f78.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
      local_f78.ComplexMasks.ArrayNum = 0;
      local_f78.ComplexMasks.ArrayMax = 0;
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
      local_f78.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
      UE::MovieScene::FComponentMask::SetAll(&local_f78.AllMask,&local_1358);
      UE::MovieScene::FEntityComponentFilter::FEntityComponentFilter(&local_138,&local_f78);
      local_c46 = TVar5;
      local_c44 = TVar6;
      local_c42 = (ushort)TVar4 | 0x7fff0000;
      local_c3e = TVar2;
      local_c3c = TVar3;
      UE::MovieScene::FFilterMatchPassthrough::FFilterMatchPassthrough
                ((FFilterMatchPassthrough *)&local_c38,(FFilterMatchPassthrough *)&local_138);
      local_ba8._1_7_ = uStack_13df;
      local_ba8._0_1_ = local_13e0;
      uStack_ba0._4_4_ = uStack_13d4;
      uStack_ba0._0_4_ = TStack_13d8;
      local_bb8 = local_13f0;
      pTStack_bb0 = pTStack_13e8;
      if (local_138.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.ComplexMasks.AllocatorInstance.Data);
      }
      local_14b8.Value = *(ushort *)&pFVar15->WeightAndEasingResult;
      local_1348._First = &local_14b8;
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
      local_1348._Last = &local_14b6;
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
      local_ff8.AllMask.Bits.NumBits = 0;
      local_ff8.AllMask.Bits.MaxBits = 0x180;
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
      local_ff8.NoneMask.Bits.NumBits = 0;
      local_ff8.NoneMask.Bits.MaxBits = 0x180;
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
      local_ff8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
      local_ff8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
      local_ff8.ComplexMasks.ArrayNum = 0;
      local_ff8.ComplexMasks.ArrayMax = 0;
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
      local_ff8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
      UE::MovieScene::FComponentMask::SetAll(&local_ff8.AllMask,&local_1348);
      UE::MovieScene::FEntityComponentFilter::FEntityComponentFilter(&local_b8,&local_ff8);
      local_508._2_2_ = local_c46;
      local_504.Value = (ushort)local_c44;
      local_502 = local_c42;
      local_4fe.Value = (ushort)local_c3e;
      local_4fc.Value = (ushort)local_c3c;
      UE::MovieScene::FEntityComponentFilter::FEntityComponentFilter(&local_4f8,&local_c38);
      UE::MovieScene::FFilterMatchPassthrough::FFilterMatchPassthrough
                ((FFilterMatchPassthrough *)&local_478,(FFilterMatchPassthrough *)&local_b8);
      local_3f8 = local_bb8;
      pTStack_3f0 = pTStack_bb0;
      local_3e8 = local_ba8;
      TStack_3e0 = (Type)uStack_ba0;
      bStack_3dc = uStack_ba0._4_1_;
      uStack_3db = uStack_ba0._5_3_;
      if (local_b8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.ComplexMasks.AllocatorInstance.Data);
      }
      local_14b4.Value = (pFVar15->Tags).NeedsUnlink.Value;
      local_3d8[0] = local_508[0];
      local_3d6.ComponentType.Value = (FComponentTypeID)(FComponentTypeID)local_508._2_2_;
      local_3d4.ComponentType.Value = (FComponentTypeID)(FComponentTypeID)local_504.Value;
      local_3d2 = local_502;
      local_3ce.ComponentType.Value = (FComponentTypeID)(FComponentTypeID)local_4fe.Value;
      local_3cc[0].ComponentType.Value = (FComponentTypeID)(FComponentTypeID)local_4fc.Value;
      UE::MovieScene::FEntityComponentFilter::FEntityComponentFilter(&local_3c8,&local_4f8);
      UE::MovieScene::FEntityComponentFilter::FEntityComponentFilter(&local_348,&local_478);
      local_2c8 = local_3f8;
      TStack_2c0.StatIdPtr = pTStack_3f0;
      local_2b8 = local_3e8;
      TStack_2b0 = TStack_3e0;
      bStack_2ac = bStack_3dc;
      uStack_2ab = uStack_3db;
      local_2a8.AllMask.Bits.NumBits = 0;
      local_2a8.AllMask.Bits.MaxBits = 0x180;
      local_2a8.NoneMask.Bits.NumBits = 0;
      local_2a8.NoneMask.Bits.MaxBits = 0x180;
      local_2a8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2a8.ComplexMasks.ArrayNum = 0;
      local_2a8.ComplexMasks.ArrayMax = 0;
      local_1f8 = 0;
      local_1f4 = 0x180;
      local_1c0 = 0;
      local_1bc = 0x180;
      UE::MovieScene::AddAccessorToFilter(&local_3d6,&local_2a8);
      UE::MovieScene::AddAccessorToFilter(&local_3d4,&local_2a8);
      UE::MovieScene::AddAccessorToFilter(&local_3ce,&local_2a8);
      UE::MovieScene::AddAccessorToFilter(local_3cc,&local_2a8);
      local_1338._First = &local_14b4;
      local_1338._Last = &local_14b2;
      UE::MovieScene::FComponentMask::SetAll(&local_2a8.NoneMask,&local_1338);
      local_1328.EncounteredRigs =
           (TMap<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*,0>_>
            *)local_11f8;
      local_1328.__this = this;
      UE::MovieScene::
      TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::FFilterMatchPassthrough,UE::MovieScene::FFilterMatchPassthrough>
      ::
      Iterate_PerEntityImpl<_UMovieSceneControlRigParameterEvaluatorSystem::OnInstantiation_::__l17::<lambda_2>_>
                ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::FFilterMatchPassthrough,UE::MovieScene::FFilterMatchPassthrough>
                  *)local_3d8,(FEntityManager *)(this->_padding_ + 0x28),&local_2a8,&local_1328);
      if (local_2a8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.ComplexMasks.AllocatorInstance.Data);
      }
      if (local_348.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_348.ComplexMasks.AllocatorInstance.Data);
      }
      if (local_3c8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c8.ComplexMasks.AllocatorInstance.Data);
      }
      if (local_478.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_478.ComplexMasks.AllocatorInstance.Data);
      }
      if (local_4f8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4f8.ComplexMasks.AllocatorInstance.Data);
      }
      if (local_ff8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ff8.ComplexMasks.AllocatorInstance.Data);
      }
      if (local_c38.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c38.ComplexMasks.AllocatorInstance.Data);
      }
      pFVar16 = local_1480;
      if (local_f78.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f78.ComplexMasks.AllocatorInstance.Data);
        pFVar16 = local_1480;
      }
    }
    this_01 = &this->AccumulatedValues;
    UE::MovieScene::FAccumulatedControlRigValues::Compact(this_01);
    local_14b0.Value = (pFVar15->Tags).NeedsLink.Value;
    local_1408 = local_1408 & 0xe0;
    FVar7.Value = *(ushort *)&pFVar15->Group;
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    local_1318._First = &local_14b0;
    local_1418 = (wchar_t *)0x0;
    local_1318._Last = &local_14ae;
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    pTStack_1410 = &TStatId::TStatId_NAME_None;
    TStack_1400 = AnyHiPriThreadHiPriTask;
    uStack_13fc = uStack_13fc & 0xffffff00;
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_ef8.AllMask.Bits.NumBits = 0;
    local_ef8.AllMask.Bits.MaxBits = 0x180;
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_ef8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    local_ef8.NoneMask.Bits.NumBits = 0;
    local_ef8.NoneMask.Bits.MaxBits = 0x180;
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_ef8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_ef8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    local_ef8.ComplexMasks.ArrayNum = 0;
    local_ef8.ComplexMasks.ArrayMax = 0;
    UE::MovieScene::FComponentMask::SetAll(&local_ef8.AllMask,&local_1318);
    UE::MovieScene::FEntityComponentFilter::FEntityComponentFilter(&local_d48,&local_ef8);
    local_df0.AllMask.Bits.NumBits = local_d48.AllMask.Bits.NumBits;
    local_df0.AllMask.Bits.MaxBits = local_d48.AllMask.Bits.MaxBits;
    local_df0.NoneMask.Bits.NumBits = local_d48.NoneMask.Bits.NumBits;
    local_df0.NoneMask.Bits.MaxBits = local_d48.NoneMask.Bits.MaxBits;
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3];
    local_df0.ComplexMasks.AllocatorInstance.Data = local_d48.ComplexMasks.AllocatorInstance.Data;
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3];
    local_df0.ComplexMasks.ArrayNum = local_d48.ComplexMasks.ArrayNum;
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2];
    local_df0.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] =
         local_d48.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3];
    local_df0.ComplexMasks.ArrayMax = local_d48.ComplexMasks.ArrayMax;
    local_1490.Value = (pFVar15->Tags).NeedsLink.Value;
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3];
    local_148e = (pFVar15->Tags).NeedsUnlink.Value;
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2];
    local_df0.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] =
         local_d48.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3];
    local_d60._1_7_ = uStack_1407;
    local_d60._0_1_ = local_1408;
    uStack_d58._4_4_ = uStack_13fc;
    uStack_d58._0_4_ = TStack_1400;
    local_d70 = local_1418;
    pTStack_d68 = pTStack_1410;
    local_df8 = (TComponentTypeID<UE::MovieScene::FEntityGroupID>)FVar7.Value;
    local_9e8._0_2_ = FVar7.Value;
    UE::MovieScene::FEntityComponentFilter::FEntityComponentFilter
              ((FEntityComponentFilter *)(local_9e8 + 8),&local_df0);
    local_940.AllMask.Bits.NumBits = 0;
    local_940.AllMask.Bits.MaxBits = 0x180;
    local_960 = local_d70;
    TStack_958.StatIdPtr = pTStack_d68;
    local_940.NoneMask.Bits.NumBits = 0;
    local_950 = local_d60;
    TStack_948 = (Type)uStack_d58;
    bStack_944 = uStack_d58._4_1_;
    uStack_943 = uStack_d58._5_3_;
    local_940.NoneMask.Bits.MaxBits = 0x180;
    local_940.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_940.ComplexMasks.ArrayNum = 0;
    local_940.ComplexMasks.ArrayMax = 0;
    local_890 = 0;
    local_88c = 0x180;
    local_858 = 0;
    local_854 = 0x180;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_9e8,&local_940);
    iVar14 = local_940.ComplexMasks.ArrayNum;
    if (local_940.ComplexMasks.ArrayNum == local_940.ComplexMasks.ArrayMax) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x43c,&local_940.ComplexMasks.AllocatorInstance,
                          &local_940.ComplexMasks.ArrayMax);
    }
    local_1308._First = &local_1490;
    pFVar20 = local_940.ComplexMasks.AllocatorInstance.Data + (longlong)iVar14 * 0x3c;
    local_1308._Last = &local_148c;
    *(int *)(pFVar20 + 0x30) = 0;
    *(int *)(pFVar20 + 0x34) = 0x180;
    pFVar20[0x38] = (FScriptContainerElement)0x2;
    local_940.ComplexMasks.ArrayNum = iVar14 + 1;
    UE::MovieScene::FComponentMask::SetAll((FComponentMask *)pFVar20,&local_1308);
    pFVar12 = local_1478;
    local_1218.Value = (local_1478->Parameters).Transform.PropertyTag.Value;
    local_1216 = (local_1478->Parameters).Scalar.PropertyTag.Value;
    local_1214 = (local_1478->Parameters).Vector3.PropertyTag.Value;
    if (local_940.ComplexMasks.ArrayNum == local_940.ComplexMasks.ArrayMax) {
      local_940.ComplexMasks.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x43c,&local_940.ComplexMasks.AllocatorInstance,
                      &local_940.ComplexMasks.ArrayMax);
    }
    lVar17 = (longlong)local_940.ComplexMasks.ArrayNum;
    local_940.ComplexMasks.ArrayNum = local_940.ComplexMasks.ArrayNum + 1;
    local_12f8._First = &local_1218;
    pFVar20 = local_940.ComplexMasks.AllocatorInstance.Data + lVar17 * 0x3c;
    local_12f8._Last = &local_1212;
    *(int *)(pFVar20 + 0x30) = 0;
    *(int *)(pFVar20 + 0x34) = 0x180;
    pFVar20[0x38] = (FScriptContainerElement)0x2;
    UE::MovieScene::FComponentMask::SetAll((FComponentMask *)pFVar20,&local_12f8);
    local_1220.Value = *(ushort *)&pFVar16->ControlRigSource;
    local_121e = pFVar12->GenericParameterName;
    local_121c = (pFVar16->Tags).ControlRigParameter.Value;
    local_1258._First = &local_1220;
    local_1258._Last = &local_121a;
    UE::MovieScene::FComponentMask::SetAll(&local_940.AllMask,&local_1258);
    local_1468.__this = this;
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FEntityGroupID>,UE::MovieScene::FFilterMatchPassthrough>
    ::
    Iterate_PerAllocationImpl<_UMovieSceneControlRigParameterEvaluatorSystem::OnInstantiation_::__l18::<lambda_3>_>
              ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FEntityGroupID>,UE::MovieScene::FFilterMatchPassthrough>
                *)local_9e8,(FEntityManager *)(this->_padding_ + 0x28),&local_940,&local_1468);
    if (local_940.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_940.ComplexMasks.AllocatorInstance.Data);
    }
    if (local_970 != (void *)0x0) {
      FMemory::Free(local_970);
    }
    if (local_df0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_df0.ComplexMasks.AllocatorInstance.Data);
    }
    if (local_ef8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ef8.ComplexMasks.AllocatorInstance.Data);
    }
    local_12d8.Linker = (UMovieSceneEntitySystemLinker *)this->_padding_;
    local_12d8.System = this;
    UE::MovieScene::
    TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
    ::ProcessInvalidatedOutputs<UE::MovieScene::FOverlappingControlRigParameterHandler_&>
              ((TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
                *)&this->ControlRigParameterTracker,local_12d8.Linker,&local_12d8);
    local_14ac.Value = (pFVar15->Tags).RestoreState.Value;
    local_1390 = local_1390 & 0xe0;
    FVar7.Value = *(ushort *)&pFVar16->ControlRigSource;
    local_12c8._First = &local_14ac;
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    pTStack_1398 = &TStatId::TStatId_NAME_None;
    local_12c8._Last = &local_14aa;
    FVar8.Value = *(ushort *)&local_1478->GenericParameterName;
    local_e78.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e78.ComplexMasks.ArrayNum = 0;
    local_e78.ComplexMasks.ArrayMax = 0;
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    local_13a0 = (wchar_t *)0x0;
    FVar9.Value = *(ushort *)&pFVar15->RootInstanceHandle;
    TStack_1388 = AnyHiPriThreadHiPriTask;
    uStack_1384 = uStack_1384 & 0xffffff00;
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_e78.AllMask.Bits.NumBits = 0;
    local_e78.AllMask.Bits.MaxBits = 0x180;
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_e78.NoneMask.Bits.NumBits = 0;
    local_e78.NoneMask.Bits.MaxBits = 0x180;
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_e78.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_e78.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    UE::MovieScene::FComponentMask::SetAll(&local_e78.AllMask,&local_12c8);
    UE::MovieScene::FEntityComponentFilter::FEntityComponentFilter(&local_cc8,&local_e78);
    local_1120.AllMask.Bits.NumBits = local_cc8.AllMask.Bits.NumBits;
    local_1120.AllMask.Bits.MaxBits = local_cc8.AllMask.Bits.MaxBits;
    local_1120.NoneMask.Bits.NumBits = local_cc8.NoneMask.Bits.NumBits;
    local_1120.NoneMask.Bits.MaxBits = local_cc8.NoneMask.Bits.MaxBits;
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3];
    local_1120.ComplexMasks.AllocatorInstance.Data = local_cc8.ComplexMasks.AllocatorInstance.Data;
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3];
    local_1120.ComplexMasks.ArrayNum = local_cc8.ComplexMasks.ArrayNum;
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2];
    local_1120.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] =
         local_cc8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3];
    local_1120.ComplexMasks.ArrayMax = local_cc8.ComplexMasks.ArrayMax;
    local_14a8.Value = (pFVar15->Tags).NeedsLink.Value;
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3];
    local_848[0] = local_1128[0];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2];
    local_1120.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] =
         local_cc8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3];
    local_1090._1_7_ = uStack_138f;
    local_1090._0_1_ = local_1390;
    uStack_1088._4_4_ = uStack_1384;
    uStack_1088._0_4_ = TStack_1388;
    local_10a0 = local_13a0;
    pTStack_1098 = pTStack_1398;
    local_1128._2_2_ = FVar9.Value;
    local_1124 = (TComponentTypeID<UE::MovieScene::FControlRigSourceData>)FVar7.Value;
    local_1122 = (TComponentTypeID<FName>)FVar8.Value;
    local_846.ComponentType.Value = (FComponentTypeID)(FComponentTypeID)FVar9.Value;
    local_844.ComponentType.Value = (FComponentTypeID)(FComponentTypeID)FVar7.Value;
    local_842.ComponentType.Value = (FComponentTypeID)(FComponentTypeID)FVar8.Value;
    UE::MovieScene::FEntityComponentFilter::FEntityComponentFilter(&local_840,&local_1120);
    local_7a0.AllMask.Bits.NumBits = 0;
    local_7c0 = local_10a0;
    TStack_7b8.StatIdPtr = pTStack_1098;
    local_7a0.AllMask.Bits.MaxBits = 0x180;
    local_7b0 = local_1090;
    TStack_7a8 = (Type)uStack_1088;
    bStack_7a4 = uStack_1088._4_1_;
    uStack_7a3 = uStack_1088._5_3_;
    local_7a0.NoneMask.Bits.NumBits = 0;
    local_7a0.NoneMask.Bits.MaxBits = 0x180;
    local_7a0.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7a0.ComplexMasks.ArrayNum = 0;
    local_7a0.ComplexMasks.ArrayMax = 0;
    local_6f0 = 0;
    local_6ec = 0x180;
    local_6b8 = 0;
    local_6b4 = 0x180;
    UE::MovieScene::AddAccessorToFilter(&local_846,&local_7a0);
    UE::MovieScene::AddAccessorToFilter(&local_844,&local_7a0);
    UE::MovieScene::AddAccessorToFilter(&local_842,&local_7a0);
    local_12b8._First = &local_14a8;
    local_12b8._Last = &local_14a6;
    UE::MovieScene::FComponentMask::SetAll(&local_7a0.AllMask,&local_12b8);
    local_14a4.Value = (pFVar15->Tags).Ignored.Value;
    local_12a8._First = &local_14a4;
    local_12a8._Last = &local_14a2;
    UE::MovieScene::FComponentMask::SetAll(&local_7a0.NoneMask,&local_12a8);
    local_1460.__this = this;
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::FFilterMatchPassthrough>
    ::
    Iterate_PerAllocationImpl<_UMovieSceneControlRigParameterEvaluatorSystem::OnInstantiation_::__l2::<lambda_4>_>
              ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::FFilterMatchPassthrough>
                *)local_848,(FEntityManager *)(this->_padding_ + 0x28),&local_7a0,&local_1460);
    if (local_7a0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7a0.ComplexMasks.AllocatorInstance.Data);
    }
    if (local_840.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_840.ComplexMasks.AllocatorInstance.Data);
    }
    if (local_1120.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1120.ComplexMasks.AllocatorInstance.Data);
    }
    if (local_e78.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e78.ComplexMasks.AllocatorInstance.Data);
    }
    local_b98.AllMask.Bits.NumBits = 0;
    local_b98.AllMask.Bits.MaxBits = 0x180;
    local_b98.NoneMask.Bits.NumBits = 0;
    local_148c.Value = *(ushort *)&local_1478->GenericParameterName;
    local_148a = (pFVar16->Tags).ControlRigParameter.Value;
    local_1298._First = &local_148c;
    local_1298._Last = &local_1488;
    local_b98.NoneMask.Bits.MaxBits = 0x180;
    local_b98.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b98.ComplexMasks.ArrayNum = 0;
    local_b98.ComplexMasks.ArrayMax = 0;
    UE::MovieScene::FComponentMask::SetAll(&local_b98.AllMask,&local_1298);
    local_1488.Value = *(ushort *)&pFVar15->BlendChannelInput;
    local_1486 = (pFVar15->Tags).NeedsUnlink.Value;
    local_1288._First = &local_1488;
    local_1288._Last = local_1484;
    UE::MovieScene::FComponentMask::SetAll(&local_b98.NoneMask,&local_1288);
    local_1438 = (IMovieSceneEntityMutation)
                 &___7FControlRigAccumulationEntryIndexMutation_MovieScene_UE__6B_;
    local_1428 = (this->ControlRigParameterStorage).Object;
    local_1430 = this_01;
    UE::MovieScene::FEntityManager::MutateAll
              ((FEntityManager *)(this->_padding_ + 0x28),&local_b98,&local_1438,Mandatory);
    local_1458 = (IMovieSceneConditionalEntityMutation)
                 &___7FRemoveInvalidControlRigAccumulationComponents_MovieScene_UE__6B_;
    local_1450 = this_01;
    UE::MovieScene::FEntityManager::MutateConditional
              ((FEntityManager *)(this->_padding_ + 0x28),&local_b98,&local_1458,Mandatory);
    iVar14 = (this->AccumulatedValues).ValuesArray.ArrayNum;
    this_00 = (FWeakObjectPtr *)(this->AccumulatedValues).ValuesArray.AllocatorInstance.Data;
    pFVar10 = (this->ControlRigParameterStorage).Object;
    pFVar23 = this_00 + (longlong)iVar14 * 0x11;
    while( true ) {
      if ((this->AccumulatedValues).ValuesArray.ArrayNum != iVar14) {
        `TCheckedPointerIterator<UE::MovieScene::FAccumulatedControlRigValues::FEntry,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_149c);
      }
      if (this_00 == pFVar23) break;
      pUVar19 = (UControlRig *)FWeakObjectPtr::Get(this_00);
      if (pUVar19 != (UControlRig *)0x0) {
        UE::MovieScene::FControlRigParameterValues::InitializeParameters
                  ((FControlRigParameterValues *)(this_00 + 1),pUVar19,pFVar10);
      }
      this_00 = this_00 + 0x11;
    }
    local_1458 = (IMovieSceneConditionalEntityMutation)
                 &___7IMovieScenePerEntityMutation_MovieScene_UE__6B_;
    local_1438 = (IMovieSceneEntityMutation)&___7IMovieSceneEntityMutation_MovieScene_UE__6B_;
    if (local_b98.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b98.ComplexMasks.AllocatorInstance.Data);
    }
    local_b18.AllMask.Bits.MaxBits = 0x180;
    local_b18.AllMask.Bits.NumBits = 0;
    local_b18.NoneMask.Bits.NumBits = 0;
    local_1210.Value = *(ushort *)&local_1480->ControlRigSource;
    local_120e = local_1480->AccumulatedControlEntryIndex;
    local_b18.NoneMask.Bits.MaxBits = 0x180;
    local_b18.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b18.ComplexMasks.ArrayNum = 0;
    local_b18.ComplexMasks.ArrayMax = 0;
    local_120c = local_1478->GenericParameterName;
    local_120a = (local_1480->Tags).ControlRigParameter.Value;
    local_1208 = (pFVar15->Tags).NeedsLink.Value;
    local_1278._First = &local_1210;
    local_1278._Last = local_1206;
    UE::MovieScene::FComponentMask::SetAll(&local_b18.AllMask,&local_1278);
    local_14a0.Value = *(ushort *)&pFVar15->BlendChannelInput;
    local_1268._First = &local_14a0;
    local_1268._Last = &local_149e;
    UE::MovieScene::FComponentMask::SetAll(&local_b18.NoneMask,&local_1268);
    local_1448 = (IMovieSceneEntityMutation)
                 &___7FInitialControlRigParameterValueMutation_MovieScene_UE__6B_;
    local_1440 = this_01;
    UE::MovieScene::FEntityManager::MutateAll
              ((FEntityManager *)(this->_padding_ + 0x28),&local_b18,&local_1448,Mandatory);
    local_1448 = (IMovieSceneEntityMutation)&___7IMovieSceneEntityMutation_MovieScene_UE__6B_;
    if (local_b18.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b18.ComplexMasks.AllocatorInstance.Data);
    }
    local_11b0 = 0;
    if (local_11b8 != (void *)0x0) {
      FMemory::Free(local_11b8);
    }
    iVar14 = SUB84(local_11f8._8_8_,4);
    local_11f8._8_8_ = local_11f8._8_8_ & 0xffffffff00000000;
    if (iVar14 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_11f8,0,(int *)(local_11f8 + 0xc));
    }
    local_11c8 = 0xffffffff;
    local_11c4 = 0;
    local_11d0 = 0;
    if (0x80 < local_11cc) {
      local_11cc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_11f8 + 0x10),0);
    }
    if (local_11d8 != (void *)0x0) {
      FMemory::Free(local_11d8);
    }
    if ((FScriptContainerElement *)local_11f8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_11f8._0_8_);
    }
  }
  if (local_11a8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_11a8.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// OnLink @ 14a4309b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterEvaluatorSystem::OnLink
          (UMovieSceneControlRigParameterEvaluatorSystem *this)

{
  int iVar1;
  UMovieSceneEntitySystemLinker *this_00;
  FControlRigComponentTypes *pFVar2;
  UMovieSceneEntityGroupingSystem *this_01;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  TSharedPtr<UE::MovieScene::FPreAnimatedControlRigStorage,1> local_100;
  TSharedPtr<UE::MovieScene::FPreAnimatedControlRigParameterStorage,1> local_f0;
  UClass *local_e0;
  FString local_d8;
  FString local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ForAnyElementType local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  (this->ControlRigParameterTracker).field_0x168 = 1;
  UE::MovieScene::FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedControlRigStorage>
            ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468),&local_100,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedControlRigStorage>)
             UE::MovieScene::FPreAnimatedControlRigStorage::StorageID);
  if (&this->ControlRigStorage != &local_100) {
    (this->ControlRigStorage).Object = local_100.Object;
    local_100.Object = (FPreAnimatedControlRigStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ControlRigStorage).SharedReferenceCount,&local_100.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.SharedReferenceCount.ReferenceController);
  UE::MovieScene::FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedControlRigParameterStorage>
            ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468),&local_f0,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedControlRigParameterStorage>)
             UE::MovieScene::FPreAnimatedControlRigParameterStorage::StorageID);
  if (&this->ControlRigParameterStorage != &local_f0) {
    (this->ControlRigParameterStorage).Object = local_f0.Object;
    local_f0.Object = (FPreAnimatedControlRigParameterStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ControlRigParameterStorage).SharedReferenceCount,
               &local_f0.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.SharedReferenceCount.ReferenceController);
  pFVar2 = UE::MovieScene::FControlRigComponentTypes::Get();
  UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  UE::MovieScene::FBuiltInComponentTypes::Get();
  this_00 = (UMovieSceneEntitySystemLinker *)this->_padding_;
  local_e0 = Z_Construct_UClass_UMovieSceneEntityGroupingSystem_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_e0);
  }
  this_01 = (UMovieSceneEntityGroupingSystem *)
            UMovieSceneEntitySystemLinker::LinkSystem
                      (this_00,(TSubclassOf<UMovieSceneEntitySystem>)&local_e0);
  if (this_01 != (UMovieSceneEntityGroupingSystem *)0x0) {
    pUVar3 = Z_Construct_UClass_UMovieSceneEntityGroupingSystem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      local_58 = 0;
      uStack_80 = 0;
      local_88 = 0x18000000000;
      local_b8._0_1_ = '\0';
      local_b8._1_1_ = '\0';
      local_b8._2_1_ = '\0';
      local_b8._3_1_ = '\0';
      local_b8._4_1_ = '\0';
      local_b8._5_1_ = '\0';
      local_b8._6_1_ = '\0';
      local_b8._7_1_ = '\0';
      uStack_b0._0_1_ = '\0';
      uStack_b0._1_1_ = '\0';
      uStack_b0._2_1_ = '\0';
      uStack_b0._3_1_ = '\0';
      uStack_b0._4_1_ = '\0';
      uStack_b0._5_1_ = '\0';
      uStack_b0._6_1_ = '\0';
      uStack_b0._7_1_ = '\0';
      uStack_50 = 0x18000000000;
      local_a8._0_1_ = '\0';
      local_a8._1_1_ = '\0';
      local_a8._2_1_ = '\0';
      local_a8._3_1_ = '\0';
      local_a8._4_1_ = '\0';
      local_a8._5_1_ = '\0';
      local_a8._6_1_ = '\0';
      local_a8._7_1_ = '\0';
      uStack_a0._0_4_ = 0;
      uStack_a0._4_4_ = 0;
      local_48 = (void *)0x0;
      local_98.Data = (FScriptContainerElement *)0x0;
      uStack_90._0_4_ = 0;
      uStack_90._4_4_ = 0;
      uStack_40 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      UMovieSceneEntityGroupingSystem::
      AddGrouping<UE::MovieScene::FControlRigDataGroupingPolicy,UE::MovieScene::FControlRigSourceData,FName>
                (this_01,(FControlRigDataGroupingPolicy *)(local_108 + 4),
                 (FEntityComponentFilter *)local_108,SUB82(&local_b8,0),
                 *(TComponentTypeID<FName> *)&pFVar2->ControlRigSource);
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      (this->ParameterGroupingKey).Index = local_108._4_4_;
      return;
    }
    pFVar4 = GetTypeName<UMovieSceneEntityGroupingSystem>(&local_d8);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                       (&local_c8,(UMovieSceneEntitySystem *)this_01);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  pFVar4 = GetTypeName<UMovieSceneEntityGroupingSystem>(&local_d8);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// OnRun @ 14a430f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterEvaluatorSystem::OnRun
          (UMovieSceneControlRigParameterEvaluatorSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_18;
  
  UMovieSceneEntitySystemLinker::GetRunner
            ((UMovieSceneEntitySystemLinker *)this->_padding_,&local_18);
  if ((local_18.Object)->CurrentPhase == Instantiation) {
    OnInstantiation(this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_18.Object)->CurrentPhase == Evaluation) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6221458581514880845>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigSystem.cpp"
                       ,0x74d,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// OnSchedulePersistentTasks @ 14a430fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterEvaluatorSystem::OnSchedulePersistentTasks
          (UMovieSceneControlRigParameterEvaluatorSystem *this,IEntitySystemScheduler *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  FBuiltInComponentTypes *pFVar6;
  FMovieSceneTracksComponentTypes *pFVar7;
  FControlRigComponentTypes *pFVar8;
  ForElementType<unsigned_int> FVar9;
  undefined1 auStackY_4b8 [32];
  FComponentTypeID local_478;
  FComponentTypeID local_476;
  FComponentTypeID local_474;
  ushort local_472;
  undefined1 local_470 [4];
  FEntitySystemMaybeAtomicInt32 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  TComponentTypeID<__int64> local_460;
  undefined2 uStack_45e;
  undefined4 local_45c;
  TComponentTypeID<double> local_458;
  undefined2 uStack_456;
  TComponentTypeID<double> local_454;
  undefined2 uStack_452;
  TComponentTypeID<double> local_450;
  undefined2 uStack_44e;
  TComponentTypeID<double> local_44c;
  undefined2 uStack_44a;
  TComponentTypeID<double> local_448;
  undefined2 uStack_446;
  TComponentTypeID<double> local_444;
  undefined2 uStack_442;
  TComponentTypeID<double> local_440;
  undefined2 uStack_43e;
  TComponentTypeID<double> local_43c;
  undefined2 uStack_43a;
  FTaskID local_438;
  FTaskID local_434;
  FTaskID local_430;
  FTaskID local_42c;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> local_428;
  uint local_426;
  TComponentTypeID<FFrameTime> local_422;
  TComponentTypeID<double> local_420;
  uint local_41e;
  TComponentTypeID<UE::MovieScene::FControlRigSourceData> local_41a;
  TComponentTypeID<UE::MovieScene::FBaseControlRigEvalData> local_418;
  undefined8 local_410;
  TStatIdData *pTStack_408;
  byte local_400;
  undefined7 uStack_3ff;
  ulonglong uStack_3f8;
  FAccumulatedControlRigValues *local_3f0;
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [10];
  TComponentTypeID<FName> TStack_3ce;
  int iStack_3cc;
  Type TStack_3c8;
  Type TStack_3c4;
  undefined4 local_3c0;
  ELockdownState EStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined1 local_3a0 [8];
  undefined1 auStack_398 [16];
  ulonglong local_388;
  undefined8 uStack_380;
  undefined1 local_378 [16];
  ulonglong local_368;
  undefined1 local_360 [16];
  ulonglong local_350;
  undefined1 local_348 [16];
  ulonglong local_338;
  TSharedPtr<UE::MovieScene::ITaskContext,1> local_330;
  byte local_320;
  undefined1 local_318 [16];
  ulonglong local_308;
  undefined8 local_2f8;
  TStatIdData *pTStack_2f0;
  byte local_2e8;
  undefined7 uStack_2e7;
  undefined1 auStack_2e0 [32];
  byte local_2c0;
  undefined7 uStack_2bf;
  undefined4 uStack_2b8;
  uint uStack_2b4;
  undefined8 local_2a8;
  TStatIdData *pTStack_2a0;
  byte local_298;
  undefined7 uStack_297;
  TTypeCompatibleBytes<unsigned_int> TStack_290;
  TTypeCompatibleBytes<unsigned_int> TStack_28c;
  undefined8 local_280;
  TStatIdData *pTStack_278;
  byte local_270;
  TTypeCompatibleBytes<unsigned_int> TStack_26f;
  TTypeCompatibleBytes<unsigned_int> TStack_268;
  TTypeCompatibleBytes<unsigned_int> TStack_264;
  initializer_list<UE::MovieScene::FComponentTypeID> local_258;
  initializer_list<UE::MovieScene::FComponentTypeID> local_248;
  FAccumulatedControlRigValues *local_238;
  uchar local_230;
  code *local_228;
  uchar local_220;
  code *local_218;
  uchar local_210;
  FInstanceRegistry *local_208;
  uchar local_200;
  code *local_1f8;
  uchar local_1f0;
  TComponentTypeID<FFrameTime> local_1e8;
  TComponentTypeID<FMovieSceneControlRigSpaceChannel_const_*> local_1e6;
  TComponentTypeID<FMovieSceneControlRigSpaceBaseKey> local_1e4;
  ForAnyElementType local_1e0;
  TStatIdData *pTStack_1d8;
  ForAnyElementType local_1d0;
  ForAnyElementType FStack_1c8;
  TComponentTypeID<UE::MovieScene::FControlRigSourceData> local_1c0;
  TComponentTypeID<UE::MovieScene::FBaseControlRigEvalData> local_1be;
  ulong64 local_1b8;
  TStatIdData *pTStack_1b0;
  bool *local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [56];
  undefined8 uStack_160;
  TStatIdData *local_158;
  ulonglong uStack_150;
  undefined8 local_148;
  FEntityComponentFilter local_140;
  int local_90;
  int local_8c;
  int local_58;
  int local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  pFVar6 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar7 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  pFVar8 = UE::MovieScene::FControlRigComponentTypes::Get();
  uVar4 = auStack_2e0._4_4_;
  lVar2 = this->_padding_;
  pTStack_2f0 = &TStatId::TStatId_NAME_None;
  local_428 = pFVar6->RootInstanceHandle;
  local_2e8 = local_2e8 & 0xe0;
  local_426 = (ushort)pFVar6->SequenceID | 0x7fff0000;
  local_2f8 = 0;
  local_422 = pFVar6->EvalTime;
  local_420 = pFVar6->EvalSeconds;
  local_41e = (ushort)pFVar6->WeightAndEasingResult | 0x7fff0000;
  local_41a = pFVar8->ControlRigSource;
  local_418 = pFVar8->BaseControlRigEvalData;
  auStack_2e0._0_4_ = 0x6ff;
  auStack_2e0._4_4_ = auStack_2e0._4_4_ & 0xffffff00;
  uStack_3ff = uStack_2e7;
  local_410 = 0;
  pTStack_408 = &TStatId::TStatId_NAME_None;
  iVar1 = *(int *)(lVar2 + 0x2c8);
  uStack_3f8 = CONCAT44(uVar4,iVar1) & 0xffffff00ffffffff;
  if ((iVar1 == 1) || (iVar1 == 0x101)) {
    local_400 = 1;
  }
  else {
    local_400 = 0;
  }
  local_400 = local_2e8 | local_400;
  if (*(longlong *)(lVar2 + 0x580) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_3d8._0_8_ = *(undefined8 *)(lVar2 + 0x580);
  local_368 = CONCAT71(uStack_3ff,local_400) | 2;
  local_378._8_8_ = pTStack_408;
  local_378._0_8_ = L"struct UE::MovieScene::FEvaluateBaseControlRigs";
  local_208 = (FInstanceRegistry *)
              UE::MovieScene::
              TScheduledEntityTask<UE::MovieScene::FEvaluateBaseControlRigs,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>
              ::ScheduledRun_PerEntity;
  local_200 = '\x03';
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>
  ::ScheduleImpl<UE::MovieScene::FEvaluateBaseControlRigs,UE::MovieScene::FInstanceRegistry_*>
            ((TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>
              *)&local_428,(FEntityManager *)&local_430,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_378,&local_208);
  local_1e8 = pFVar6->EvalTime;
  local_1e6 = pFVar8->SpaceChannel;
  local_1e4 = pFVar8->SpaceResult;
  auStack_2e0._16_8_ = 0;
  auStack_2e0._24_8_ = &TStatId::TStatId_NAME_None;
  uStack_2b8 = 0x6ff;
  uStack_2b4 = uStack_2b4 & 0xffffff00;
  local_1d0.Data = (FScriptContainerElement *)(CONCAT71(uStack_2bf,local_2c0) & 0xffffffffffffffe0);
  FStack_1c8.Data = (FScriptContainerElement *)CONCAT44(uStack_2b4,0x6ff);
  local_1f0 = '\x03';
  local_360._8_8_ = &TStatId::TStatId_NAME_None;
  local_360._0_8_ = L"struct UE::MovieScene::FEvaluateControlRigSpaceChannels";
  local_1f8 = UE::MovieScene::
              TScheduledEntityTask<UE::MovieScene::FEvaluateControlRigSpaceChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::TWriteAccess<FMovieSceneControlRigSpaceBaseKey>_>
              ::ScheduledRun_PerEntity;
  local_350._1_7_ = (undefined7)((ulonglong)local_1d0.Data >> 8);
  local_350 = CONCAT71(local_350._1_7_,local_2c0) & 0xffffffffffffffe0;
  local_1e0.Data = (FScriptContainerElement *)0x0;
  pTStack_1d8 = &TStatId::TStatId_NAME_None;
  local_2c0 = local_2c0 & 0xe0;
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::TWriteAccess<FMovieSceneControlRigSpaceBaseKey>_>
  ::ScheduleImpl<UE::MovieScene::FEvaluateControlRigSpaceChannels>
            ((TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::TWriteAccess<FMovieSceneControlRigSpaceBaseKey>_>
              *)&local_1e8,(FEntityManager *)&local_434,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_360);
  local_2a8 = 0;
  pTStack_2a0 = &TStatId::TStatId_NAME_None;
  TStack_290.Pad[0] = 0xff;
  TStack_290.Pad[1] = '\x06';
  TStack_290.Pad[2] = '\0';
  TStack_290.Pad[3] = '\0';
  TStack_28c.Pad = TStack_28c.Pad & 0xffffff00;
  uStack_43a = 0x7fff;
  local_43c = pFVar6->DoubleResult[8];
  uStack_43e = 0x7fff;
  local_440 = pFVar6->DoubleResult[7];
  uStack_442 = 0x7fff;
  local_444 = pFVar6->DoubleResult[6];
  uStack_446 = 0x7fff;
  local_448 = pFVar6->DoubleResult[5];
  local_388 = CONCAT71(uStack_297,local_298) & 0xffffffffffffffe0;
  uStack_380._4_1_ = TStack_28c.Pad[0];
  uStack_380._5_1_ = TStack_28c.Pad[1];
  uStack_380._6_1_ = TStack_28c.Pad[2];
  uStack_380._7_1_ = TStack_28c.Pad[3];
  uStack_380._0_4_ = 0x6ff;
  local_3d8._8_2_ = pFVar8->AccumulatedControlEntryIndex;
  TStack_3ce = pFVar7->GenericParameterName;
  auStack_398._0_8_ = 0;
  auStack_398._8_8_ = &TStatId::TStatId_NAME_None;
  local_46c.Payload._2_2_ = 0x7fff;
  local_46c.Payload._0_2_ = pFVar8->SpaceResult;
  iStack_3cc = local_46c.Payload;
  local_468 = CONCAT22(0x7fff,pFVar6->BoolResult);
  TStack_3c8 = local_468;
  local_464 = CONCAT22(0x7fff,pFVar6->ByteResult);
  TStack_3c4 = local_464;
  local_198._2_2_ = TStack_3ce;
  local_198._0_2_ = local_3d8._8_2_;
  local_198._4_4_ = local_46c.Payload;
  local_198._12_4_ = local_464;
  local_198._8_4_ = local_468;
  uStack_45e = 0x7fff;
  local_460 = pFVar6->IntegerResult;
  local_3c0 = _local_460;
  local_45c = CONCAT22(0x7fff,pFVar6->DoubleResult[0]);
  EStack_3bc = local_45c;
  uStack_456 = 0x7fff;
  local_458 = pFVar6->DoubleResult[1];
  uStack_3b8 = _local_458;
  uStack_452 = 0x7fff;
  local_454 = pFVar6->DoubleResult[2];
  uStack_3b4 = _local_454;
  local_198._20_4_ = local_45c;
  local_198._16_4_ = _local_460;
  local_198._28_4_ = _local_454;
  local_198._24_4_ = _local_458;
  uStack_44e = 0x7fff;
  local_450 = pFVar6->DoubleResult[3];
  local_3b0 = _local_450;
  uStack_44a = 0x7fff;
  local_44c = pFVar6->DoubleResult[4];
  uStack_3ac = _local_44c;
  uStack_3a8 = _local_448;
  uStack_3a4 = _local_444;
  local_198._36_4_ = _local_44c;
  local_198._32_4_ = _local_450;
  local_198._44_4_ = _local_444;
  local_198._40_4_ = _local_448;
  local_3a0._0_4_ = _local_440;
  local_3a0._4_4_ = _local_43c;
  local_478.Value = (pFVar8->Tags).ControlRigParameter.Value;
  local_198._52_4_ = _local_43c;
  local_198._48_4_ = _local_440;
  local_140.AllMask.Bits.NumBits = 0;
  local_158 = &TStatId::TStatId_NAME_None;
  uStack_160 = 0;
  local_140.AllMask.Bits.MaxBits = 0x180;
  local_140.NoneMask.Bits.NumBits = 0;
  local_140.NoneMask.Bits.MaxBits = 0x180;
  local_140.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ComplexMasks.ArrayNum = 0;
  local_140.ComplexMasks.ArrayMax = 0;
  local_90 = 0;
  local_8c = 0x180;
  local_58 = 0;
  local_54 = 0x180;
  local_298 = local_298 & 0xe0;
  uStack_150 = local_388;
  local_148 = uStack_380;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_198,&local_140);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_198 + 2),&local_140);
  local_258._First = &local_478;
  local_258._Last = &local_476;
  UE::MovieScene::FComponentMask::SetAll(&local_140.AllMask,&local_258);
  local_474.Value = *(ushort *)&pFVar6->BlendChannelInput;
  local_472 = (pFVar6->Tags).Ignored.Value;
  local_248._First = &local_474;
  local_248._Last = (FComponentTypeID *)local_470;
  UE::MovieScene::FComponentMask::SetAll(&local_140.NoneMask,&local_248);
  local_338 = uStack_150 | 2;
  local_348._8_8_ = local_158;
  local_348._0_8_ = L"struct UE::MovieScene::FGatherControlRigParameterValues";
  local_230 = '\x03';
  local_238 = (FAccumulatedControlRigValues *)
              UE::MovieScene::
              TScheduledEntityTask<UE::MovieScene::FGatherControlRigParameterValues,UE::MovieScene::TReadAccess<UE::MovieScene::FAccumulatedControlEntryIndex>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TOptionalReadAccess<FMovieSceneControlRigSpaceBaseKey>,UE::MovieScene::TOptionalReadAccess<bool>,UE::MovieScene::TOptionalReadAccess<unsigned_char>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              ::ScheduledRun_PerAllocation;
  local_3f0 = &this->AccumulatedValues;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FAccumulatedControlEntryIndex>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TOptionalReadAccess<FMovieSceneControlRigSpaceBaseKey>,UE::MovieScene::TOptionalReadAccess<bool>,UE::MovieScene::TOptionalReadAccess<unsigned_char>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::
  ScheduleImpl<UE::MovieScene::FGatherControlRigParameterValues,UE::MovieScene::FAccumulatedControlRigValues_*>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FAccumulatedControlEntryIndex>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TOptionalReadAccess<FMovieSceneControlRigSpaceBaseKey>,UE::MovieScene::TOptionalReadAccess<bool>,UE::MovieScene::TOptionalReadAccess<unsigned_char>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)local_198,(FEntityManager *)&local_438,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_348,&local_238);
  if (local_140.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.ComplexMasks.AllocatorInstance.Data);
  }
  local_220 = '\0';
  iVar1 = *(int *)(this->_padding_ + 0x748);
  local_330.Object = (ITaskContext *)0x152127f58;
  local_330.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)&TStatId::TStatId_NAME_None;
  local_320 = local_320 & 0xe1 | 1;
  local_228 = UE::MovieScene::TAnonTaskWrapper<UE::MovieScene::FApplyControlRigParameterValuesTask>
              ::Execute;
  FVar9 = (ForElementType<unsigned_int>)::operator_new(0x28);
  if (FVar9 == (ForElementType<unsigned_int>)0x0) {
    FVar9 = (ForElementType<unsigned_int>)0x0;
    local_3e8._0_8_ = ___xmm_00000000000000000000000000000010;
    local_3e8._8_8_ = _UNK_150651568;
  }
  else {
    *(atomic<int> *)((longlong)FVar9 + 8) = (atomic<int>)0x1;
    *(atomic<int> *)((longlong)FVar9 + 0xc) = (atomic<int>)0x1;
    *(FAccumulatedControlRigValues **)((longlong)FVar9 + 0x18) = &this->AccumulatedValues;
    *(undefined ***)FVar9 =
         &
         ___7__TIntrusiveReferenceController_U__TAnonTaskWrapper_UFApplyControlRigParameterValuesTask_MovieScene_UE___MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    *(bool *)&((TReferenceControllerBase<1> *)((longlong)FVar9 + 0x20))->_padding_ = iVar1 != 5;
    ((TReferenceControllerBase<1> *)((longlong)FVar9 + 0x10))->_padding_ =
         (longlong)
         &
         ___7__TAnonTaskWrapper_UFApplyControlRigParameterValuesTask_MovieScene_UE___MovieScene_UE__6B_
    ;
    if ((ForElementType<unsigned_int>)((longlong)FVar9 + 0x10) == (ForElementType<unsigned_int>)0x0)
    {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    *(atomic<int> *)((longlong)FVar9 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)FVar9 + 8) + 1);
    UNLOCK();
    local_3e8._0_8_ = (longlong)FVar9 + 0x10;
    local_3e8._8_8_ = FVar9;
  }
  UE::MovieScene::IEntitySystemScheduler::AddTask
            (param_1,(FTaskParams *)local_470,&local_330,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_3e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar9);
  local_1c0 = pFVar8->ControlRigSource;
  local_1be = pFVar8->BaseControlRigEvalData;
  local_280._0_1_ = '\0';
  local_280._1_1_ = '\0';
  local_280._2_1_ = '\0';
  local_280._3_1_ = '\0';
  local_280._4_1_ = '\0';
  local_280._5_1_ = '\0';
  local_280._6_1_ = '\0';
  local_280._7_1_ = '\0';
  pTStack_278 = &TStatId::TStatId_NAME_None;
  TStack_268.Pad[0] = 0xff;
  TStack_268.Pad[1] = '\x06';
  TStack_268.Pad[2] = '\0';
  TStack_268.Pad[3] = '\0';
  TStack_264.Pad = TStack_264.Pad & 0xffffff00;
  local_1a8 = (bool *)(CONCAT71(_TStack_26f,local_270) & 0xffffffffffffffe0);
  uStack_1a0._4_1_ = TStack_264.Pad[0];
  uStack_1a0._5_1_ = TStack_264.Pad[1];
  uStack_1a0._6_1_ = TStack_264.Pad[2];
  uStack_1a0._7_1_ = TStack_264.Pad[3];
  uStack_1a0._0_4_ = 0x6ff;
  local_210 = '\x03';
  local_318._8_8_ = &TStatId::TStatId_NAME_None;
  local_318._0_8_ = L"struct UE::MovieScene::FResetDoNotKey";
  local_218 = UE::MovieScene::
              TScheduledEntityTask<UE::MovieScene::FResetDoNotKey,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TReadAccess<UE::MovieScene::FBaseControlRigEvalData>_>
              ::ScheduledRun_PerEntity;
  local_308._1_7_ = (undefined7)((ulonglong)local_1a8 >> 8);
  local_308 = CONCAT71(local_308._1_7_,local_270) & 0xffffffffffffffe0;
  local_1b8 = 0;
  pTStack_1b0 = &TStatId::TStatId_NAME_None;
  local_270 = local_270 & 0xe0;
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TReadAccess<UE::MovieScene::FBaseControlRigEvalData>_>
  ::ScheduleImpl<UE::MovieScene::FResetDoNotKey>
            ((TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TReadAccess<UE::MovieScene::FBaseControlRigEvalData>_>
              *)&local_1c0,(FEntityManager *)&local_42c,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_318);
  UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_434,local_438);
  UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_438,(FTaskID)local_470);
  UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_430,(FTaskID)local_470);
  UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,(FTaskID)local_470,local_42c);
  return;
}

// OnUnlink @ 14a431810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneControlRigParameterEvaluatorSystem::OnUnlink
          (UMovieSceneControlRigParameterEvaluatorSystem *this)

{
  int iVar1;
  UMovieSceneEntitySystemLinker *this_00;
  code *pcVar2;
  bool bVar3;
  UMovieSceneEntityGroupingSystem *this_01;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  UClass *local_res8;
  FOverlappingControlRigParameterHandler local_38;
  FString local_28;
  FString local_18;
  
  (this->DoubleBlenderSystem).field0_0x0.DebugPtr = (UMovieScenePiecewiseDoubleBlenderSystem *)0x0;
  local_38.Linker = (UMovieSceneEntitySystemLinker *)this->_padding_;
  local_38.System = this;
  UE::MovieScene::
  TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
  ::Destroy<UE::MovieScene::FOverlappingControlRigParameterHandler>
            ((TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedControlRigParameterInfo,UE::MovieScene::FEntityGroupID>
              *)&this->ControlRigParameterTracker,&local_38);
  this_00 = (UMovieSceneEntitySystemLinker *)this->_padding_;
  local_res8 = Z_Construct_UClass_UMovieSceneEntityGroupingSystem_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  this_01 = (UMovieSceneEntityGroupingSystem *)
            UMovieSceneEntitySystemLinker::FindSystem
                      (this_00,(TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  if (this_01 == (UMovieSceneEntityGroupingSystem *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6221458581514880534>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigSystem.cpp"
                       ,0x616,"GroupingSystem");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pUVar4 = Z_Construct_UClass_UMovieSceneEntityGroupingSystem_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pFVar5 = GetTypeName<UMovieSceneEntityGroupingSystem>(&local_28);
      pwVar6 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                         (&local_18,(UMovieSceneEntitySystem *)this_01);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar7);
    }
    UMovieSceneEntityGroupingSystem::RemoveGrouping
              (this_01,(FEntityGroupingPolicyKey)(this->ParameterGroupingKey).Index);
  }
  (this->ParameterGroupingKey).Index = -1;
  return;
}

// StaticRegisterNativesUMovieSceneControlRigParameterEvaluatorSystem @ 14a45c3e0

void __cdecl
UMovieSceneControlRigParameterEvaluatorSystem::
StaticRegisterNativesUMovieSceneControlRigParameterEvaluatorSystem(void)

{
  return;
}

