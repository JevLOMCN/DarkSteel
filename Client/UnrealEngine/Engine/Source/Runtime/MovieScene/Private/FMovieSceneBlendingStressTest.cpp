// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 14625a320

EAutomationTestFlags __thiscall
FMovieSceneBlendingStressTest::GetTestFlags(FMovieSceneBlendingStressTest *this)

{
  return EngineFilter|Disabled|EditorContext;
}

// IsStressTest @ 14625a330

bool __thiscall FMovieSceneBlendingStressTest::IsStressTest(FMovieSceneBlendingStressTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14625a340

uint __thiscall
FMovieSceneBlendingStressTest::GetRequiredDeviceNum(FMovieSceneBlendingStressTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14625a350

FString * __thiscall
FMovieSceneBlendingStressTest::GetTestSourceFileName
          (FMovieSceneBlendingStressTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieSceneBlendingTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14625a380

int __thiscall
FMovieSceneBlendingStressTest::GetTestSourceFileLine(FMovieSceneBlendingStressTest *this)

{
  return 0x96;
}

// GetTests @ 14625a390

/* WARNING: Removing unreachable block (ram,0x00014625a47d) */
/* WARNING: Removing unreachable block (ram,0x00014625a548) */

void __thiscall
FMovieSceneBlendingStressTest::GetTests
          (FMovieSceneBlendingStressTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Blending.StressTest");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 14625a570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieSceneBlendingStressTest::RunTest(FMovieSceneBlendingStressTest *this,FString *param_1)

{
  int *piVar1;
  TAlignedBytes<8,8> *pTVar2;
  FMovieSceneBlendingActuatorID FVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FMovieSceneAnimTypeID FVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  FMovieSceneAnimTypeID FVar14;
  FMovieSceneEvaluationRange *pFVar15;
  longlong *plVar16;
  TReferenceControllerBase<1> *pTVar17;
  TMovieSceneBlendingActuator<int> *pTVar18;
  TAlignedBytes<8,8> TVar19;
  byte bVar20;
  ulonglong uVar21;
  uchar auVar22 [8];
  TAlignedBytes<8,8> TVar23;
  ForElementType<FSetElementId> FVar24;
  FMovieSceneBlendingActuatorID *pFVar25;
  uint uVar26;
  longlong lVar27;
  TReferenceControllerBase<1> *pTVar28;
  TReferenceControllerBase<1> *pTVar29;
  uint uVar30;
  undefined1 auStack_538 [32];
  undefined8 *local_518;
  FScriptContainerElement *local_510;
  longlong local_508;
  longlong local_500;
  undefined8 local_4f8;
  ForAnyElementType local_4e8;
  int local_4e0;
  int iStack_4dc;
  undefined8 local_4d8;
  undefined8 local_4d0;
  longlong local_4c8;
  TReferenceControllerBase<1> *local_4c0;
  TReferenceControllerBase<1> *local_4b8;
  FMovieSceneEvaluationKey local_4b0;
  uint uStack_4a4;
  TPairInitializer<FMovieSceneBlendingActuatorID_const_&,TSharedRef<IMovieSceneBlendingActuator,1>_const_&>
  local_4a0;
  TSharedRef<IMovieSceneBlendingActuator,1> **local_490;
  TReferenceControllerBase<1> **local_488;
  FMovieSceneContext local_478;
  undefined1 local_3e8 [16];
  FPersistentEvaluationData local_3d8;
  FMovieSceneEvaluationRange local_3a8;
  TAlignedBytes<8,8> local_380;
  byte local_378;
  FMovieSceneEvaluationKey local_370;
  EMovieSceneCompletionMode EStack_364;
  undefined3 uStack_363;
  int local_360;
  float local_35c;
  EMovieSceneBlendType local_358;
  int local_354;
  TTokenEntry<int> local_350;
  undefined1 local_308 [64];
  ForElementType<FSetElementId> local_2c8;
  int local_2c0;
  undefined1 local_2b8 [64];
  void *local_278;
  undefined4 local_270;
  ForAnyElementType local_268;
  undefined8 local_260;
  IMovieScenePlayer local_258;
  FMovieSceneRootEvaluationTemplateInstance local_68;
  ulonglong local_48;
  TReferenceControllerBase<1> *pTVar31;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_538;
  lVar27 = 100;
  local_4e8.Data = (FScriptContainerElement *)0x0;
  local_4e0 = 0;
  iStack_4dc = 0;
  do {
    FVar14 = FMovieSceneAnimTypeID::Unique();
    local_4d8 = *(undefined8 *)FVar14.ID;
    if ((local_4e8.Data <= (FScriptContainerElement *)&local_4d8) &&
       ((FScriptContainerElement *)&local_4d8 < local_4e8.Data + (longlong)iStack_4dc * 8)) {
      local_500 = (longlong)local_4e0;
      local_4f8 = 8;
      local_518 = &local_4d8;
      local_510 = local_4e8.Data;
      local_508 = (longlong)iStack_4dc;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        uVar12 = (*pcVar4)();
        return (bool)uVar12;
      }
    }
    if (local_4e0 == iStack_4dc) {
      local_4e0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_4e8,&iStack_4dc);
    }
    iVar13 = local_4e0 + 1;
    *(undefined8 *)(local_4e8.Data + (longlong)local_4e0 * 8) = local_4d8;
    lVar27 = lVar27 + -1;
    local_4e0 = iVar13;
  } while (lVar27 != 0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_FMovieSceneBlendingActuatorID___cdecl_FInt32Actuator::GetID(void)'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_FMovieSceneBlendingActuatorID___cdecl_FInt32Actuator::GetID(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_FMovieSceneBlendingActuatorID___cdecl_FInt32Actuator::GetID(void)'::__l2
     ::_thread_safe_static_guard_0__ == -1)) {
    FMovieSceneAnimTypeID::Unique();
    _Init_thread_footer(&`public:_static_struct_FMovieSceneBlendingActuatorID___cdecl_FInt32Actuator::GetID(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_4b0.SequenceID.Value = 0xffffffff;
  local_4b0.TrackIdentifier.Value = 0xffffffff;
  local_4b0.SectionIndex = 0xffffffff;
  uStack_4a4 = uStack_4a4 & 0xffffff00;
  local_4d0 = 0;
  pFVar15 = FMovieSceneEvaluationRange::FMovieSceneEvaluationRange
                      (&local_3a8,(FFrameTime)0x0,(FFrameRate)0x10000ea60);
  local_478._padding_._0_1_ = (pFVar15->EvaluationRange).LowerBound.Type;
  local_478._padding_._1_3_ = *(undefined3 *)&(pFVar15->EvaluationRange).LowerBound.field_0x1;
  local_478._padding_._4_4_ = (pFVar15->EvaluationRange).LowerBound.Value.FrameNumber;
  local_478._padding_ = *(longlong *)&(pFVar15->EvaluationRange).LowerBound.Value.SubFrame;
  local_478._padding_ = *(longlong *)&(pFVar15->EvaluationRange).UpperBound.Value;
  local_478._padding_ = *(longlong *)&pFVar15->CurrentFrameRate;
  local_478._padding_._0_4_ = pFVar15->Direction;
  local_478._padding_._4_4_ = pFVar15->TimeOverride;
  local_478.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
  local_478.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
  local_478.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
  local_478.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_478.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
  local_478.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
  FMovieSceneWarpCounter::FMovieSceneWarpCounter(&local_478.RootToSequenceWarpCounter);
  local_478.bHasPostRollStartTime = false;
  local_478.bHasPreRollEndTime = false;
  local_478.bSectionPostRoll = false;
  local_478.bSectionPreRoll = false;
  local_478.bSilent = false;
  local_478.bHasLooped = false;
  local_478.bHasJumped = false;
  local_478.Status = Stopped;
  local_478.PrePostRollStartEndTime.Value = -0x80000000;
  local_478.HierarchicalBias = 0;
  IMovieScenePlayer::IMovieScenePlayer(&local_258);
  local_258._padding_ = (longlong)&___7FNullPlayer__6B_;
  FMovieSceneRootEvaluationTemplateInstance::FMovieSceneRootEvaluationTemplateInstance(&local_68);
  FPersistentEvaluationData::FPersistentEvaluationData(&local_3d8,&local_258);
  uVar8 = local_4b0._0_8_;
  pvVar7 = ThreadLocalStoragePointer;
  uVar5._4_4_ = uStack_4a4;
  uVar5._0_4_ = local_4b0.SectionIndex;
  local_308._0_8_ = 0;
  local_308._8_8_ = 0;
  local_308._32_8_ = 0;
  local_308._40_4_ = 0;
  local_308._52_4_ = 0;
  local_2c8 = (ForElementType<FSetElementId>)0x0;
  local_2c0 = 0;
  local_2b8._0_8_ = 0;
  local_2b8._8_8_ = 0;
  local_2b8._32_8_ = 0;
  local_2b8._40_4_ = 0;
  local_2b8._52_4_ = 0;
  local_278 = (void *)0x0;
  local_270 = 0;
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260._0_4_ = 0;
  local_260._4_4_ = 0;
  local_4c8 = 1000000;
  local_308._44_4_ = 0x80;
  local_308._48_4_ = 0xffffffff;
  local_2b8._44_4_ = 0x80;
  local_2b8._48_4_ = 0xffffffff;
  do {
    pTVar28 = (TReferenceControllerBase<1> *)0x0;
    pTVar31 = pTVar28;
    do {
      uVar26 = (int)pTVar31 + (int)((ulonglong)pTVar31 / 100) * -100;
      uVar30 = 0;
      if ((int)uVar26 < local_4e0) {
        uVar30 = ~uVar26 >> 0x1f;
      }
      if (uVar30 == 0) {
        local_518 = (undefined8 *)(longlong)(int)uVar26;
        local_510 = (FScriptContainerElement *)(longlong)local_4e0;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          uVar12 = (*pcVar4)();
          return (bool)uVar12;
        }
      }
      FVar3 = *(FMovieSceneBlendingActuatorID *)(local_4e8.Data + (longlong)(int)uVar26 * 8);
      if (local_308._8_4_ != local_308._52_4_) {
        FVar24 = (ForElementType<FSetElementId>)((longlong)local_308 + 0x38);
        if (local_2c8 != (ForElementType<FSetElementId>)0x0) {
          FVar24 = local_2c8;
        }
        iVar13 = *(int *)((longlong)FVar24 +
                         (ulonglong)(local_2c0 - 1U & FVar3._4_4_ * 0x17 + FVar3._0_4_) * 4);
        while (iVar13 != -1) {
          pFVar25 = (FMovieSceneBlendingActuatorID *)((longlong)iVar13 * 0x20 + local_308._0_8_);
          if (*pFVar25 == FVar3) {
            pTVar17 = (TReferenceControllerBase<1> *)(pFVar25 + 1);
            if (pFVar25 == (FMovieSceneBlendingActuatorID *)0x0) {
              pTVar17 = pTVar28;
            }
            if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
              FVar14 = GetBlendingDataType<int>();
              lVar27 = *(longlong *)FVar14.ID;
              plVar16 = (longlong *)
                        (**(code **)(*(longlong *)pTVar17->_padding_ + 8))
                                  ((longlong *)pTVar17->_padding_,local_3e8);
              if ((*plVar16 == lVar27) && (pTVar17->_padding_ != 0)) goto LAB_14625ab0b;
            }
            break;
          }
          iVar13 = *(int *)(pFVar25 + 3);
        }
      }
      pTVar17 = ::operator_new(0x40);
      if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
        pTVar29 = (TReferenceControllerBase<1> *)&DAT_00000010;
        pTVar17 = pTVar28;
LAB_14625aa4d:
        lVar27._0_4_ = pTVar29->SharedReferenceCount;
        lVar27._4_4_ = pTVar29->WeakReferenceCount;
        if (((lVar27 == 0) || (pTVar29[1]._padding_ == 0)) ||
           (*(int *)(pTVar29[1]._padding_ + 8) < 1)) {
          if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
            UNLOCK();
          }
          *(TReferenceControllerBase<1> **)&pTVar29->SharedReferenceCount = pTVar29;
          if (pTVar17 != (TReferenceControllerBase<1> *)pTVar29[1]._padding_) {
            if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
              UNLOCK();
            }
            plVar16 = (longlong *)pTVar29[1]._padding_;
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar16 + 8))(plVar16,1);
              }
            }
            pTVar29[1]._padding_ = (longlong)pTVar17;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar17);
        }
      }
      else {
        uVar21 = (ulonglong)_tls_index;
        pTVar17->SharedReferenceCount = (atomic<int>)0x1;
        pTVar17->WeakReferenceCount = (atomic<int>)0x1;
        pTVar17->_padding_ =
             (longlong)
             &___7__TIntrusiveReferenceController_UFInt32Actuator___00_SharedPointerInternals__6B_;
        if ((*(int *)(*(longlong *)((longlong)pvVar7 + uVar21 * 8) + 0x9d4c) <
             `public:_static_struct_FMovieSceneBlendingActuatorID___cdecl_FInt32Actuator::GetID(void)'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_struct_FMovieSceneBlendingActuatorID___cdecl_FInt32Actuator::GetID(void)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_static_struct_FMovieSceneBlendingActuatorID___cdecl_FInt32Actuator::GetID(void)'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          FMovieSceneAnimTypeID::Unique();
          _Init_thread_footer(&`public:_static_struct_FMovieSceneBlendingActuatorID___cdecl_FInt32Actuator::GetID(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        FVar14.ID = `public:_static_struct_FMovieSceneBlendingActuatorID___cdecl_FInt32Actuator::GetID(void)'
                    ::__l2::TypeID.ID;
        pTVar29 = pTVar17 + 1;
        pTVar17[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar17[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar17[2]._padding_ = 0;
        pTVar17[2].SharedReferenceCount = (atomic<int>)0x0;
        pTVar17[2].WeakReferenceCount = (atomic<int>)0x0;
        pTVar17[3]._padding_ = 0;
        FVar10 = `public:_static_struct_FMovieSceneBlendingActuatorID___cdecl_FInt32Actuator::GetID(void)'
                 ::__l2::TypeID;
        `public:_static_struct_FMovieSceneBlendingActuatorID___cdecl_FInt32Actuator::GetID(void)'::
        __l2::TypeID.ID._0_4_ = (undefined4)FVar14.ID;
        `public:_static_struct_FMovieSceneBlendingActuatorID___cdecl_FInt32Actuator::GetID(void)'::
        __l2::TypeID.ID._4_4_ = SUB84(FVar14.ID,4);
        uVar6 = `public:_static_struct_FMovieSceneBlendingActuatorID___cdecl_FInt32Actuator::GetID(void)'
                ::__l2::TypeID.ID._4_4_;
        pTVar17[3].SharedReferenceCount =
             (atomic<int>)
             (undefined4)
             `public:_static_struct_FMovieSceneBlendingActuatorID___cdecl_FInt32Actuator::GetID(void)'
             ::__l2::TypeID.ID;
        `public:_static_struct_FMovieSceneBlendingActuatorID___cdecl_FInt32Actuator::GetID(void)'::
        __l2::TypeID = FVar10;
        pTVar17[3].WeakReferenceCount = (atomic<int>)uVar6;
        pTVar17[1]._padding_ = (longlong)&___7FInt32Actuator__6B_;
        if (pTVar29 != (TReferenceControllerBase<1> *)0x0) goto LAB_14625aa4d;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L"");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          uVar12 = (*pcVar4)();
          return (bool)uVar12;
        }
      }
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_490 = &local_4a0.Value;
      local_488 = &local_4c0;
      local_4c0 = pTVar29;
      local_4b8 = pTVar17;
      local_4a0.Value = (TSharedRef<IMovieSceneBlendingActuator,1> *)FVar3;
      TSet<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FMovieSceneBlendingActuatorID_const_&,TSharedRef<IMovieSceneBlendingActuator,1>_const_&>_>
                ((TSet<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>,0>,FDefaultSetAllocator>
                  *)local_308,&local_4a0,(bool *)&local_490);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4b8)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
LAB_14625ab0b:
      pTVar18 = FMovieSceneBlendingAccumulator::FindActuator<int>
                          ((FMovieSceneBlendingAccumulator *)local_308,FVar3);
      if ((pTVar18 == (TMovieSceneBlendingActuator<int> *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("FindActuator<ActuatorDataType>(InActuatorTypeID)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendingAccumulator.h"
                              ,0x31,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        uVar12 = (*pcVar4)();
        return (bool)uVar12;
      }
      local_378 = local_378 & 0xfc;
      local_380.Pad = (uchar  [8])FMemory::Malloc(0x10,8);
      auVar22 = (uchar  [8])&local_380;
      if ((local_378 & 2) == 0) {
        auVar22 = local_380.Pad;
      }
      local_378 = local_378 | 1;
      *(undefined ***)auVar22 = &___7__TData_H___TBlendableToken_H__6B_;
      pTVar2 = (TAlignedBytes<8,8> *)((longlong)auVar22 + 8);
      pTVar2->Pad[0] = '\x01';
      pTVar2->Pad[1] = '\0';
      pTVar2->Pad[2] = '\0';
      pTVar2->Pad[3] = '\0';
      if (((local_378 & 1) == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("bIsValid",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                              ,0x97,
                              L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                             ), bVar11)) {
        pcVar4 = (code *)swi(3);
        uVar12 = (*pcVar4)();
        return (bool)uVar12;
      }
      TVar23.Pad = (uchar  [8])&local_380;
      if ((local_378 & 2) == 0) {
        TVar23.Pad = local_380.Pad;
      }
      if (((local_378 & 1) == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("bIsValid",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                              ,0x97,
                              L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                             ), bVar11)) {
        pcVar4 = (code *)swi(3);
        uVar12 = (*pcVar4)();
        return (bool)uVar12;
      }
      TVar19.Pad = (uchar  [8])&local_380;
      if ((local_378 & 2) == 0) {
        TVar19.Pad = local_380.Pad;
      }
      if ((TVar23.Pad != TVar19.Pad) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                              ,0xce,
                              L"TInlineValue cannot operate with multiple inheritance objects."),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        uVar12 = (*pcVar4)();
        return (bool)uVar12;
      }
      uVar9 = local_4b0._0_8_;
      local_360 = local_478.HierarchicalBias;
      local_4b0.SequenceID.Value = (uint)uVar8;
      local_4b0.TrackIdentifier.Value = SUB84(uVar8,4);
      local_370.SequenceID.Value = local_4b0.SequenceID.Value;
      local_370.TrackIdentifier.Value = local_4b0.TrackIdentifier.Value;
      local_35c = 1.0;
      local_358 = Absolute;
      local_354 = -1;
      local_4b0._0_8_ = uVar9;
      unique0x10000c69 = uVar5;
      FVar14 = GetBlendingDataType<int>();
      local_350._padding_ = *(longlong *)FVar14.ID;
      bVar20 = local_350.Token.Value._8_1_ & 0xfe;
      local_350.Token.Value._8_1_ = bVar20 | 2;
      local_350._padding_ = (longlong)&___7__TTokenEntry_H_FMovieSceneAccumulatedBlendState__6B_;
      if ((local_378 & 1) != 0) {
        local_378 = local_378 & 0xfe;
        bVar20 = bVar20 | 3;
        local_350.Token.Value._8_1_ = (bVar20 ^ local_378) & 2 ^ bVar20;
        local_350.Token.Value.Data.Pad[0] = local_380.Pad[0];
        local_350.Token.Value.Data.Pad[1] = local_380.Pad[1];
        local_350.Token.Value.Data.Pad[2] = local_380.Pad[2];
        local_350.Token.Value.Data.Pad[3] = local_380.Pad[3];
        local_350.Token.Value.Data.Pad[4] = local_380.Pad[4];
        local_350.Token.Value.Data.Pad[5] = local_380.Pad[5];
        local_350.Token.Value.Data.Pad[6] = local_380.Pad[6];
        local_350.Token.Value.Data.Pad[7] = local_380.Pad[7];
      }
      local_350.Token.HierarchicalBias = local_360;
      local_350.Token.BlendType = local_358;
      local_350.Token.BlendingOrder = local_354;
      local_350.Token.AnimatingScope.Key.SequenceID.Value = local_370.SequenceID.Value;
      local_350.Token.AnimatingScope.Key.TrackIdentifier.Value = local_370.TrackIdentifier.Value;
      local_350.Token.AnimatingScope.Key.SectionIndex = local_370.SectionIndex;
      local_350.Token.AnimatingScope.CompletionMode = EStack_364;
      local_350.Token.AnimatingScope._13_3_ = uStack_363;
      local_350.Token.Weight = local_35c;
      iVar13 = (int)local_260;
      local_350._padding_ = (longlong)FVar3;
      if ((int)local_260 == local_260._4_4_) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x888,&local_268,(int *)((longlong)&local_260 + 4));
      }
      local_260._0_4_ = iVar13 + 1;
      TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>::
      TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8><FMovieSceneAccumulatedBlendState::TTokenEntry<int>,void>
                ((TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)
                 (local_268.Data + (longlong)iVar13 * 0x88),&local_350);
      if (local_350.Token.Value.bIsValid) {
        TVar23.Pad = (uchar  [8])&local_350.Token;
        if (!local_350.Token.Value.bInline) {
          TVar23.Pad = local_350.Token.Value.Data.Pad;
        }
        local_350.Token.Value.bIsValid = false;
                    /* WARNING: Load size is inaccurate */
        (**(code **)*TVar23.Pad)(TVar23.Pad,0);
        if (!local_350.Token.Value.bInline) {
          FMemory::Free((void *)local_350.Token.Value.Data.Pad);
        }
      }
      local_350._padding_ = (longlong)&___7FTokenEntry_FMovieSceneAccumulatedBlendState__6B_;
      if ((local_378 & 1) != 0) {
        TVar23.Pad = (uchar  [8])&local_380;
        if ((local_378 & 2) == 0) {
          TVar23.Pad = local_380.Pad;
        }
        local_378 = local_378 & 0xfe;
                    /* WARNING: Load size is inaccurate */
        (**(code **)*TVar23.Pad)(TVar23.Pad,0);
        if ((local_378 & 2) == 0) {
          FMemory::Free((void *)local_380.Pad);
        }
      }
      uVar30 = (int)pTVar31 + 1;
      pTVar31 = (TReferenceControllerBase<1> *)(ulonglong)uVar30;
    } while (uVar30 < 100);
    FMovieSceneBlendingAccumulator::Apply
              ((FMovieSceneBlendingAccumulator *)local_308,&local_478,&local_3d8,&local_258);
    local_4c8 = local_4c8 + -1;
    if (local_4c8 == 0) {
      DestructItems<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>,int>
                ((TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)local_268.Data
                 ,(int)local_260);
      if ((TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)local_268.Data !=
          (TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)0x0) {
        FMemory::Free(local_268.Data);
      }
      local_270 = 0;
      if (local_278 != (void *)0x0) {
        FMemory::Free(local_278);
      }
      TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_2b8);
      local_2c0 = 0;
      if (local_2c8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_2c8);
      }
      TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_308);
      FMovieSceneRootEvaluationTemplateInstance::~FMovieSceneRootEvaluationTemplateInstance
                (&local_68);
      IMovieScenePlayer::~IMovieScenePlayer(&local_258);
      FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_478.RootToSequenceWarpCounter);
      DestructItems<FMovieSceneNestedSequenceTransform,int>
                ((FMovieSceneNestedSequenceTransform *)
                 local_478.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
                 local_478.RootToSequenceTransform.NestedTransforms.ArrayNum);
      if ((FMovieSceneNestedSequenceTransform *)
          local_478.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
          (FMovieSceneNestedSequenceTransform *)0x0) {
        FMemory::Free(local_478.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
      }
      if (local_4e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e8.Data);
      }
      return true;
    }
  } while( true );
}

// GetBeautifiedTestName @ 14625af40

FString * __thiscall
FMovieSceneBlendingStressTest::GetBeautifiedTestName
          (FMovieSceneBlendingStressTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Blending.StressTest");
  return __return_storage_ptr__;
}

