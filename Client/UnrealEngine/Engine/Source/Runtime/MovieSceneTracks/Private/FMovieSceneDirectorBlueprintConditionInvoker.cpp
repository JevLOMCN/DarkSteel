// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// EvaluateDirectorBlueprintCondition @ 146669740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
FMovieSceneDirectorBlueprintConditionInvoker::EvaluateDirectorBlueprintCondition
          (FGuid *param_1,FMovieSceneSequenceID param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3,
          FMovieSceneDirectorBlueprintConditionData *param_4)

{
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedPlaybackState *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FSequenceDirectorPlaybackCapability *this;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar10;
  UObject *pUVar11;
  UObject *pUVar12;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *pTVar13;
  FWeakObjectPtr *pFVar14;
  UFunction *pUVar15;
  FMovieSceneSequenceID local_res10 [2];
  undefined1 local_168 [8];
  ForAnyElementType local_160;
  undefined8 local_158;
  TObjectPtr<UObject>_u_0 local_150;
  byte local_148;
  FWeakObjectPtr local_140;
  FString local_138;
  FPlaybackCapabilityPtr local_128;
  FSharedPlaybackState *local_118;
  TReferenceControllerBase<1> *local_110;
  UFunction *local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  TObjectPtr<UObject>_u_0 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  UMovieSceneSequence *local_88;
  ForAnyElementType local_80;
  int local_78;
  int local_74;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_70;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_60;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_50;
  
  pUVar15 = (param_4->Function).field0_0x0.DebugPtr;
  local_res10[0].Value = param_2.Value;
  local_108 = pUVar15;
  if (pUVar15 == (UFunction *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    return true;
  }
  this = UE::MovieScene::FSharedPlaybackState::
         FindCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability>(param_3->Object);
  if (this == (FSequenceDirectorPlaybackCapability *)0x0) {
    pTVar2 = (param_3->SharedReferenceCount).ReferenceController;
    pFVar3 = param_3->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = IsInGameThread();
    if (!bVar7) {
      local_168[0] = bVar7;
      `UE::MovieScene::FSharedPlaybackState::
      AddCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability>'::__l2::<lambda_1>::
      operator()(local_168);
    }
    UE::MovieScene::FSequenceDirectorPlaybackCapability::GetPlaybackCapabilityID();
    UE::MovieScene::FPlaybackCapabilitiesImpl::
    AddCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability,UE::MovieScene::FSequenceDirectorPlaybackCapability>
              ((FPlaybackCapabilitiesImpl *)&pFVar3->Capabilities,&local_128,1 << (local_148 & 0x1f)
              );
    if ((local_128.Ptr == (FSequenceDirectorPlaybackCapability *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x3a,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    this = local_128.Ptr;
    if (local_128.StorageMode != Inline) {
      if ((local_128.StorageMode == RawPointer) || (local_128.StorageMode == SharedPointer)) {
        this = *(FSequenceDirectorPlaybackCapability **)local_128.Ptr;
      }
      else {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x44,L"Unexpected playback capability storage mode");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
    }
    local_140 = *(FWeakObjectPtr *)(this->_padding_ + 8);
    pTVar10 = TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1>::AsShared
                        ((TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1> *)pFVar3,&local_70
                        );
    pTVar4 = (pTVar10->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar10->Object;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_118 = pFVar3;
    local_110 = pTVar4;
    (*(code *)local_140)(this,&local_118);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pUVar15 = local_108;
  }
  local_60.Object = param_3->Object;
  local_60.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_60.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pUVar11 = UE::MovieScene::FSequenceDirectorPlaybackCapability::GetOrCreateDirectorInstance
                      (this,&local_60,local_res10);
  if (pUVar11 == (UObject *)0x0) {
    if (2 < (byte)LogMovieScene._0_1_) {
      local_100 = (FName)pUVar15->_padding_;
      ::FName::ToString(&local_100,&local_d0);
      pUVar11 = FWeakObjectPtr::Get(&(param_3->Object->WeakRootSequence).WeakPtr);
      local_f8.ComparisonIndex.Value = *(uint *)&pUVar11->field_0x18;
      local_f8.Number = *(uint *)&pUVar11->field_0x1c;
      ::FName::ToString(&local_f8,&local_e0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    bVar7 = true;
  }
  else {
    if (6 < (byte)LogMovieScene._0_1_) {
      local_f0 = (FName)pUVar15->_padding_;
      ::FName::ToString(&local_f0,&local_b0);
      local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.Data.ArrayNum = 0;
      local_138.Data.ArrayMax = 0;
      FGuid::AppendString(param_1,&local_138,Digits);
      pUVar12 = FWeakObjectPtr::Get(&(param_3->Object->WeakRootSequence).WeakPtr);
      local_e8.ComparisonIndex.Value = *(uint *)&pUVar12->field_0x18;
      local_e8.Number = *(uint *)&pUVar12->field_0x1c;
      ::FName::ToString(&local_e8,&local_c0);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
    }
    local_160.Data = (FScriptContainerElement *)0x0;
    local_158 = 0;
    pTVar13 = UE::MovieScene::FSharedPlaybackState::FindBoundObjects
                        (param_3->Object,&local_50,param_1,local_res10);
    pFVar14 = &pTVar13->DataPtr->WeakPtr;
    pTVar1 = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)(pFVar14 + pTVar13->ArrayNum);
    for (; pFVar14 != (FWeakObjectPtr *)pTVar1; pFVar14 = pFVar14 + 1) {
      local_140 = *pFVar14;
      local_150.DebugPtr = FWeakObjectPtr::Get(&local_140);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_150.DebugPtr != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_150.DebugPtr);
      }
      if (((local_160.Data <= &local_150) &&
          (&local_150 < (TObjectPtr<UObject>_u_0 *)(local_160.Data + (longlong)local_158._4_4_ * 8))
          ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar9 = (int)local_158;
      if ((int)local_158 == local_158._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_160,(int *)((longlong)&local_158 + 4));
      }
      local_158 = CONCAT44(local_158._4_4_,iVar9 + 1);
      ((TObjectPtr<UObject>_u_0 *)(local_160.Data + (longlong)iVar9 * 8))->DebugPtr =
           (UObject *)local_150;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_150.DebugPtr != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_150.DebugPtr);
      }
    }
    local_a0.DebugPtr = FWeakObjectPtr::Get(&(param_3->Object->WeakPlaybackContext).WeakPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_a0.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_a0.DebugPtr);
    }
    local_88 = UE::MovieScene::FSharedPlaybackState::GetSequence(param_3->Object,local_res10);
    local_98._0_4_ = param_1->A;
    local_98._4_4_ = param_1->B;
    uStack_90._0_4_ = param_1->C;
    uStack_90._4_4_ = param_1->D;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_88 != (UMovieSceneSequence *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_88);
    }
    FVar6.Data = local_160.Data;
    iVar9 = (int)local_158;
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78 = (int)local_158;
    if ((int)local_158 == 0) {
      local_74 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(int)local_158,0,&local_80,(int)local_158,&local_74);
      ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                (local_80.Data,(TObjectPtr<UObject> *)FVar6.Data,iVar9);
    }
    bVar7 = InvokeDirectorBlueprintCondition
                      (pUVar11,param_4,(FMovieSceneConditionContext *)&local_a0.ObjectPtr);
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
    if ((TObjectPtr<UObject>_u_0 *)local_160.Data != (TObjectPtr<UObject>_u_0 *)0x0) {
      FMemory::Free(local_160.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
  }
  return bVar7;
}

// InvokeDirectorBlueprintCondition @ 1466a5460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
FMovieSceneDirectorBlueprintConditionInvoker::InvokeDirectorBlueprintCondition
          (UObject *param_1,FMovieSceneDirectorBlueprintConditionData *param_2,
          FMovieSceneConditionContext *param_3)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  TObjectPtr<UFunction>_u_0 TVar4;
  code *pcVar5;
  FProperty *this;
  longlong *plVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  FFieldClass *pFVar12;
  FField *pFVar13;
  longlong lVar14;
  ulonglong uVar15;
  FMovieSceneConditionContext *_Dst;
  undefined1 *_Src;
  undefined1 *puVar16;
  FProperty *pFVar17;
  void *_Dst_00;
  undefined1 auStackY_98 [32];
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66 [6];
  TObjectPtr<UFunction>_u_0 local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  TObjectPtr<UFunction>_u_0 local_48;
  FProperty *local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_30;
  
  puVar16 = auStackY_98;
  local_30 = __security_cookie.value ^ (ulonglong)&local_68;
  TVar4 = (TObjectPtr<UFunction>_u_0)(param_2->Function).field0_0x0.DebugPtr;
  local_68 = 0;
  if (TVar4.DebugPtr == (UFunction *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4339347059925581756>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Conditions\\MovieSceneDirectorBlueprintCondition.cpp"
                       ,0x44,"ConditionFunc");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    goto LAB_1466a5904;
  }
  sVar1 = *(short *)((longlong)&(TVar4.DebugPtr)->_padding_ + 4);
  uVar2 = (TVar4.DebugPtr)->ParmsSize;
  iVar10 = (int)sVar1 + (uint)uVar2;
  if (iVar10 == 0) {
    lVar14 = 0;
    puVar16 = auStackY_98;
  }
  else {
    uVar15 = (ulonglong)(iVar10 + 0xf);
    uVar11 = uVar15 + 0xf;
    if (uVar11 <= uVar15) {
      uVar11 = 0xffffffffffffff0;
    }
    puVar16 = auStackY_98 + -(uVar11 & 0xfffffffffffffff0);
    lVar14 = (longlong)&local_60 + -(uVar11 & 0xfffffffffffffff0);
  }
  _Dst_00 = (void *)((longlong)sVar1 + -1 + lVar14 & ~((longlong)sVar1 - 1U));
  *(undefined8 *)(puVar16 + -8) = 0x1466a5540;
  memset(_Dst_00,0,(ulonglong)uVar2);
  local_40 = (FProperty *)(TVar4.DebugPtr)->_padding_;
  pFVar17 = (FProperty *)0x0;
  local_38 = 0xffffffff;
  local_34 = 0x101;
  local_32 = 0;
  local_48 = TVar4;
  *(undefined8 *)(puVar16 + -8) = 0x1466a5568;
  TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_48.ObjectPtr);
  this = local_40;
  while (local_40 = this, this != (FProperty *)0x0) {
    if (((this->PropertyFlags >> 9 & 1) == 0) && ((this->PropertyFlags >> 7 & 1) != 0)) {
      *(undefined8 *)(puVar16 + -8) = 0x1466a5592;
      FProperty::InitializeValue_InContainer(this,_Dst_00);
    }
    if (((uint)(int)this->PropertyFlags >> 10 & 1) != 0) {
      if (pFVar17 != (FProperty *)0x0) {
        local_67 = 0;
        *(undefined8 *)(puVar16 + -8) = 0x1466a55ae;
        `FMovieSceneDirectorBlueprintConditionInvoker::InvokeDirectorBlueprintCondition'::__l14::
        <lambda_1>::operator()(&local_67);
      }
      pFVar17 = this;
      if ((*(uint *)(this->_padding_ + 0x18) >> 0x11 & 1) == 0) {
        *(FProperty **)(puVar16 + 0x20) = this;
        *(undefined8 *)(puVar16 + -8) = 0x1466a55ea;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x472,L"CastFieldChecked failed with 0x%016llx");
        pFVar17 = (FProperty *)0x0;
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
    }
    local_40 = (FProperty *)this->_padding_;
    *(undefined8 *)(puVar16 + -8) = 0x1466a5605;
    TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_48.ObjectPtr);
    this = local_40;
  }
  *(undefined8 *)(puVar16 + -8) = 0x1466a5617;
  pFVar12 = FProperty::StaticClass();
  *(undefined8 *)(puVar16 + -8) = 0x1466a5626;
  pFVar13 = FFieldPath::GetTyped
                      ((FFieldPath *)&param_2->ConditionContextProperty,pFVar12,(UStruct *)0x0);
  if (pFVar13 != (FField *)0x0) {
    pcVar5 = *(code **)(pFVar13->_padding_ + 0x70);
    *(undefined8 *)(puVar16 + -8) = 0x1466a563e;
    cVar9 = (*pcVar5)(pFVar13);
    if (cVar9 == '\0') {
      iVar10 = (int)pFVar13[1]._padding_;
      if (iVar10 < 1) {
        *(int *)(puVar16 + 0x28) = iVar10;
        *(undefined4 *)(puVar16 + 0x20) = 0;
        *(undefined8 *)(puVar16 + -8) = 0x1466a5679;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      if (_Dst_00 == (void *)0x0) {
        *(undefined8 *)(puVar16 + -8) = 0x1466a56a4;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      _Dst = (FMovieSceneConditionContext *)
             ((longlong)*(int *)((longlong)&pFVar13[1].Owner.Container + 4) + (longlong)_Dst_00);
      if (_Dst != param_3) {
        if ((*(uint *)&pFVar13[1].ClassPrivate >> 0x1e & 1) == 0) {
          lVar14 = pFVar13[1]._padding_;
          pcVar5 = *(code **)(pFVar13->_padding_ + 0xf0);
          *(undefined8 *)(puVar16 + -8) = 0x1466a56ec;
          (*pcVar5)(pFVar13,_Dst,param_3,(int)lVar14);
        }
        else {
          iVar10 = *(int *)((longlong)&pFVar13[1]._padding_ + 4);
          lVar14 = pFVar13[1]._padding_;
          *(undefined8 *)(puVar16 + -8) = 0x1466a56d4;
          memcpy(_Dst,param_3,(longlong)iVar10 * (longlong)(int)lVar14);
        }
      }
    }
    else {
      pcVar5 = *(code **)(pFVar13->_padding_ + 0x88);
      *(undefined8 *)(puVar16 + -8) = 0x1466a5700;
      (*pcVar5)(pFVar13,_Dst_00,param_3);
    }
  }
  if (pFVar17 == (FProperty *)0x0) {
    local_66[0] = 0;
    *(undefined8 *)(puVar16 + -8) = 0x1466a5712;
    bVar7 = `FMovieSceneDirectorBlueprintConditionInvoker::InvokeDirectorBlueprintCondition'::__l18
            ::<lambda_2>::operator()(local_66);
    if (bVar7) goto LAB_1466a571a;
  }
  else {
LAB_1466a571a:
    pcVar5 = *(code **)(*(longlong *)param_1 + 0x260);
    *(undefined8 *)(puVar16 + -8) = 0x1466a572d;
    (*pcVar5)(param_1,TVar4.DebugPtr,_Dst_00);
    pcVar5 = *(code **)(pFVar17->_padding_ + 0x78);
    *(undefined8 *)(puVar16 + -8) = 0x1466a5736;
    cVar9 = (*pcVar5)(pFVar17);
    if (cVar9 == '\0') {
      if (pFVar17->ArrayDim < 1) {
        *(int *)(puVar16 + 0x28) = pFVar17->ArrayDim;
        *(undefined4 *)(puVar16 + 0x20) = 0;
        *(undefined8 *)(puVar16 + -8) = 0x1466a5771;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      if (_Dst_00 == (void *)0x0) {
        *(undefined8 *)(puVar16 + -8) = 0x1466a579c;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      _Src = (undefined1 *)((longlong)pFVar17->Offset_Internal + (longlong)_Dst_00);
      if (&local_68 != _Src) {
        if (((uint)(int)pFVar17->PropertyFlags >> 0x1e & 1) == 0) {
          iVar10 = pFVar17->ArrayDim;
          pcVar5 = *(code **)(pFVar17->_padding_ + 0xf0);
          *(undefined8 *)(puVar16 + -8) = 0x1466a57ed;
          (*pcVar5)(pFVar17,&local_68,_Src,iVar10);
        }
        else {
          iVar10 = pFVar17->ElementSize;
          iVar3 = pFVar17->ArrayDim;
          *(undefined8 *)(puVar16 + -8) = 0x1466a57d4;
          memcpy(&local_68,_Src,(longlong)iVar10 * (longlong)iVar3);
        }
      }
    }
    else {
      pcVar5 = *(code **)(pFVar17->_padding_ + 0x90);
      *(undefined8 *)(puVar16 + -8) = 0x1466a5802;
      (*pcVar5)(pFVar17,_Dst_00,&local_68);
    }
  }
  local_58 = (longlong *)(TVar4.DebugPtr)->_padding_;
  local_50 = 0xffffffff;
  local_4c = 0x101;
  local_4a = 0;
  local_60 = TVar4;
  *(undefined8 *)(puVar16 + -8) = 0x1466a5828;
  TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_60.ObjectPtr);
  plVar6 = local_58;
  while (plVar6 != (longlong *)0x0) {
    if (((char)plVar6[7] < '\0') && ((~(byte)((ulonglong)plVar6[7] >> 0x24) & 1) != 0)) {
      pcVar5 = *(code **)(*plVar6 + 0x138);
      local_58 = plVar6;
      if ((int)plVar6[6] < 1) {
        *(int *)(puVar16 + 0x28) = (int)plVar6[6];
        *(undefined4 *)(puVar16 + 0x20) = 0;
        *(undefined8 *)(puVar16 + -8) = 0x1466a58a1;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      if (_Dst_00 == (void *)0x0) {
        *(undefined8 *)(puVar16 + -8) = 0x1466a58d0;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      iVar10 = *(int *)((longlong)plVar6 + 0x44);
      *(undefined8 *)(puVar16 + -8) = 0x1466a58e6;
      (*pcVar5)(plVar6,(longlong)iVar10 + (longlong)_Dst_00);
    }
    local_58 = (longlong *)plVar6[3];
    *(undefined8 *)(puVar16 + -8) = 0x1466a58f7;
    TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_60.ObjectPtr);
    plVar6 = local_58;
  }
LAB_1466a5904:
  *(undefined8 *)(puVar16 + -8) = 0x1466a5914;
  return (bool)local_68;
}

// operator() @ 1504f2230

bool __thiscall
`FMovieSceneDirectorBlueprintConditionInvoker::InvokeDirectorBlueprintCondition'::__l14::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4339347059925581720>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4339347059925581720>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f2a50

bool __thiscall
`FMovieSceneDirectorBlueprintConditionInvoker::InvokeDirectorBlueprintCondition'::__l18::<lambda_2>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4339347059925581703>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4339347059925581703>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

