// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 13

// FScopedPreAnimatedCaptureSource @ 146181f00

FScopedPreAnimatedCaptureSource * __thiscall
FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
          (FScopedPreAnimatedCaptureSource *this,FMovieScenePreAnimatedState *param_1,
          FMovieSceneEvaluationKey *param_2,bool param_3)

{
  uint uVar1;
  FRootInstanceHandle FVar2;
  longlong lVar3;
  uint uVar4;
  void *pvVar5;
  ulonglong uVar6;
  UObject *local_res8;
  
  uVar1 = param_2->SectionIndex;
  uVar4 = (param_2->TrackIdentifier).Value;
  FVar2 = param_1->InstanceHandle;
  *(uint *)&(this->Variant)._padding_ = (param_2->SequenceID).Value;
  *(uint *)((longlong)&(this->Variant)._padding_ + 4) = uVar4;
  *(uint *)&(this->Variant)._padding_ = uVar1;
  *(FRootInstanceHandle *)((longlong)&(this->Variant)._padding_ + 4) = FVar2;
  (this->Variant).TypeIndex = '\0';
  this->RootInstanceHandle = param_1->InstanceHandle;
  local_res8 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  (this->WeakLinker).WeakPtr = (FWeakObjectPtr)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->WeakLinker).WeakPtr,(FObjectPtr)&local_res8);
  pvVar5 = ThreadLocalStoragePointer;
  uVar6 = (ulonglong)_tls_index;
  this->bWantsRestoreState = param_3;
  lVar3 = *(longlong *)((longlong)pvVar5 + uVar6 * 8);
  this->PrevCaptureSource = *(FScopedPreAnimatedCaptureSource **)(lVar3 + 0xee8);
  *(FScopedPreAnimatedCaptureSource **)(lVar3 + 0xee8) = this;
  return this;
}

// FScopedPreAnimatedCaptureSource @ 146181fe0

FScopedPreAnimatedCaptureSource * __thiscall
FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
          (FScopedPreAnimatedCaptureSource *this,FMovieScenePreAnimatedState *param_1,
          UObject *param_2,FMovieSceneSequenceID param_3,bool param_4)

{
  FRootInstanceHandle FVar1;
  longlong lVar2;
  FWeakObjectPtr FVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  iVar6 = 0;
  iVar4 = 0;
  if (param_2 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(param_2);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    iVar6 = local_res8.ObjectIndex;
    iVar4 = local_res8.ObjectSerialNumber;
  }
  FVar1 = param_1->InstanceHandle;
  *(int *)&(this->Variant)._padding_ = iVar6;
  *(int *)((longlong)&(this->Variant)._padding_ + 4) = iVar4;
  *(FRootInstanceHandle *)&(this->Variant)._padding_ = FVar1;
  *(uint *)((longlong)&(this->Variant)._padding_ + 4) = param_3.Value;
  (this->Variant).TypeIndex = '\x01';
  this->RootInstanceHandle = param_1->InstanceHandle;
  FVar3 = (FWeakObjectPtr)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar3);
  }
  (this->WeakLinker).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = FVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar3);
  }
  FWeakObjectPtr::operator=(&(this->WeakLinker).WeakPtr,(FObjectPtr)&local_res8);
  uVar5 = (ulonglong)_tls_index;
  this->bWantsRestoreState = param_4;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8);
  this->PrevCaptureSource = *(FScopedPreAnimatedCaptureSource **)(lVar2 + 0xee8);
  *(FScopedPreAnimatedCaptureSource **)(lVar2 + 0xee8) = this;
  return this;
}

// FScopedPreAnimatedCaptureSource @ 146182110

/* WARNING: Enum "Type": Some values do not have unique names */

FScopedPreAnimatedCaptureSource * __thiscall
FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
          (FScopedPreAnimatedCaptureSource *this,UMovieSceneEntitySystemLinker *param_1,
          FMovieSceneTrackInstanceInput *param_2)

{
  UMovieSceneSection *pUVar1;
  longlong lVar2;
  EMovieSceneCompletionMode EVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  ulonglong uVar6;
  UMovieSceneEntitySystemLinker *local_res8;
  
  pUVar1 = (param_2->Section).field0_0x0.DebugPtr;
  (this->Variant)._padding_ = (longlong)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMovieSceneSection *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(FInstanceHandle *)&(this->Variant)._padding_ = param_2->InstanceHandle;
  *(bool *)((longlong)&(this->Variant)._padding_ + 4) = param_2->bInputHasBeenProcessed;
  (this->Variant).TypeIndex = '\x03';
  this->RootInstanceHandle = (FRootInstanceHandle)0xffff;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMovieSceneEntitySystemLinker *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->WeakLinker).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMovieSceneEntitySystemLinker *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakLinker).WeakPtr,(FObjectPtr)&local_res8);
  pUVar1 = (param_2->Section).field0_0x0.DebugPtr;
  EVar3 = (pUVar1->EvalOptions).CompletionMode;
  if (EVar3 == ProjectDefault) {
    pUVar4 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
    pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar1,pUVar4);
    EVar3 = pUVar5[2].field_0x18;
  }
  uVar6 = (ulonglong)_tls_index;
  this->bWantsRestoreState = EVar3 == RestoreState;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar6 * 8);
  this->PrevCaptureSource = *(FScopedPreAnimatedCaptureSource **)(lVar2 + 0xee8);
  *(FScopedPreAnimatedCaptureSource **)(lVar2 + 0xee8) = this;
  return this;
}

// FScopedPreAnimatedCaptureSource @ 146182210

/* WARNING: Enum "Type": Some values do not have unique names */

FScopedPreAnimatedCaptureSource * __thiscall
FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
          (FScopedPreAnimatedCaptureSource *this,UMovieSceneEntitySystemLinker *param_1,
          UMovieSceneTrackInstance *param_2,bool param_3)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  UMovieSceneEntitySystemLinker *local_res8;
  
  (this->Variant)._padding_ = (longlong)param_2;
  (this->Variant).TypeIndex = '\x02';
  this->RootInstanceHandle = (FRootInstanceHandle)0xffff;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMovieSceneEntitySystemLinker *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->WeakLinker).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMovieSceneEntitySystemLinker *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakLinker).WeakPtr,(FObjectPtr)&local_res8);
  pvVar2 = ThreadLocalStoragePointer;
  uVar3 = (ulonglong)_tls_index;
  this->bWantsRestoreState = param_3;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  this->PrevCaptureSource = *(FScopedPreAnimatedCaptureSource **)(lVar1 + 0xee8);
  *(FScopedPreAnimatedCaptureSource **)(lVar1 + 0xee8) = this;
  return this;
}

// FScopedPreAnimatedCaptureSource @ 1461822d0

FScopedPreAnimatedCaptureSource * __thiscall
FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
          (FScopedPreAnimatedCaptureSource *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          FMovieSceneEvaluationKey *param_2,bool param_3)

{
  uint uVar1;
  FRootInstanceHandle FVar2;
  longlong lVar3;
  uint uVar4;
  void *pvVar5;
  ulonglong uVar6;
  UObject *local_res8;
  
  uVar1 = param_2->SectionIndex;
  uVar4 = (param_2->TrackIdentifier).Value;
  FVar2 = param_1->Object->RootInstanceHandle;
  *(uint *)&(this->Variant)._padding_ = (param_2->SequenceID).Value;
  *(uint *)((longlong)&(this->Variant)._padding_ + 4) = uVar4;
  *(uint *)&(this->Variant)._padding_ = uVar1;
  *(FRootInstanceHandle *)((longlong)&(this->Variant)._padding_ + 4) = FVar2;
  (this->Variant).TypeIndex = '\0';
  this->RootInstanceHandle = param_1->Object->RootInstanceHandle;
  local_res8 = FWeakObjectPtr::Get(&(param_1->Object->WeakLinker).WeakPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  (this->WeakLinker).WeakPtr = (FWeakObjectPtr)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->WeakLinker).WeakPtr,(FObjectPtr)&local_res8);
  pvVar5 = ThreadLocalStoragePointer;
  uVar6 = (ulonglong)_tls_index;
  this->bWantsRestoreState = param_3;
  lVar3 = *(longlong *)((longlong)pvVar5 + uVar6 * 8);
  this->PrevCaptureSource = *(FScopedPreAnimatedCaptureSource **)(lVar3 + 0xee8);
  *(FScopedPreAnimatedCaptureSource **)(lVar3 + 0xee8) = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// FScopedPreAnimatedCaptureSource @ 1461823c0

FScopedPreAnimatedCaptureSource * __thiscall
FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
          (FScopedPreAnimatedCaptureSource *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,UObject *param_2,
          FMovieSceneSequenceID param_3,bool param_4)

{
  FRootInstanceHandle FVar1;
  longlong lVar2;
  FWeakObjectPtr FVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  iVar6 = 0;
  iVar5 = 0;
  if (param_2 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(param_2);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    iVar6 = local_res8.ObjectIndex;
    iVar5 = local_res8.ObjectSerialNumber;
  }
  FVar1 = param_1->Object->RootInstanceHandle;
  *(int *)&(this->Variant)._padding_ = iVar6;
  *(int *)((longlong)&(this->Variant)._padding_ + 4) = iVar5;
  *(FRootInstanceHandle *)&(this->Variant)._padding_ = FVar1;
  *(uint *)((longlong)&(this->Variant)._padding_ + 4) = param_3.Value;
  (this->Variant).TypeIndex = '\x01';
  this->RootInstanceHandle = param_1->Object->RootInstanceHandle;
  FVar3 = (FWeakObjectPtr)FWeakObjectPtr::Get(&(param_1->Object->WeakLinker).WeakPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar3);
  }
  (this->WeakLinker).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = FVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar3);
  }
  FWeakObjectPtr::operator=(&(this->WeakLinker).WeakPtr,(FObjectPtr)&local_res8);
  uVar4 = (ulonglong)_tls_index;
  this->bWantsRestoreState = param_4;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8);
  this->PrevCaptureSource = *(FScopedPreAnimatedCaptureSource **)(lVar2 + 0xee8);
  *(FScopedPreAnimatedCaptureSource **)(lVar2 + 0xee8) = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FScopedPreAnimatedCaptureSource @ 146185a50

void __thiscall
FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource
          (FScopedPreAnimatedCaptureSource *this)

{
  *(FScopedPreAnimatedCaptureSource **)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xee8) =
       this->PrevCaptureSource;
  return;
}

// BeginTracking @ 1461949f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FScopedPreAnimatedCaptureSource::BeginTracking
          (FScopedPreAnimatedCaptureSource *this,FPreAnimatedStateMetaData *param_1,
          UMovieSceneEntitySystemLinker *param_2)

{
  TUniquePtr<UE::MovieScene::FPreAnimatedTemplateCaptureSources,TDefaultDelete<UE::MovieScene::FPreAnimatedTemplateCaptureSources>_>
  *pTVar1;
  TUniquePtr<UE::MovieScene::FPreAnimatedEvaluationHookCaptureSources,TDefaultDelete<UE::MovieScene::FPreAnimatedEvaluationHookCaptureSources>_>
  *pTVar2;
  TUniquePtr<UE::MovieScene::FPreAnimatedTrackInstanceCaptureSources,TDefaultDelete<UE::MovieScene::FPreAnimatedTrackInstanceCaptureSources>_>
  *pTVar3;
  TUniquePtr<UE::MovieScene::FPreAnimatedTrackInstanceInputCaptureSources,TDefaultDelete<UE::MovieScene::FPreAnimatedTrackInstanceInputCaptureSources>_>
  *pTVar4;
  uchar uVar5;
  undefined4 uVar6;
  TPreAnimatedCaptureSources<UE::MovieScene::FPreAnimatedEvaluationKeyType> *this_00;
  TPreAnimatedCaptureSources<UE::MovieScene::FPreAnimatedEvalHookKeyType> *this_01;
  TPreAnimatedCaptureSources<FObjectKey> *this_02;
  UObject *pUVar7;
  bool bVar8;
  UMovieSceneEntitySystemLinker *pUVar9;
  FPreAnimatedTemplateCaptureSources *pFVar10;
  FPreAnimatedTemplateCaptureSources *pFVar11;
  undefined8 *puVar12;
  FPreAnimatedTemplateCaptureSources *pFVar13;
  FWeakObjectPtr local_res8;
  FObjectKey local_res20;
  UObject *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28 [2];
  
  bVar8 = FWeakObjectPtr::IsValid(&(this->WeakLinker).WeakPtr);
  if ((bVar8) &&
     (pUVar9 = (UMovieSceneEntitySystemLinker *)FWeakObjectPtr::Get(&(this->WeakLinker).WeakPtr),
     pUVar9 != param_2)) {
    `FScopedPreAnimatedCaptureSource::BeginTracking'::__l2::<lambda_1>::operator()(&local_res8);
  }
  uVar5 = (this->Variant).TypeIndex;
  pFVar13 = (FPreAnimatedTemplateCaptureSources *)0x0;
  pFVar11 = (FPreAnimatedTemplateCaptureSources *)this;
  if (uVar5 != '\0') {
    pFVar11 = pFVar13;
  }
  if (pFVar11 == (FPreAnimatedTemplateCaptureSources *)0x0) {
    pFVar11 = (FPreAnimatedTemplateCaptureSources *)this;
    if (uVar5 != '\x01') {
      pFVar11 = pFVar13;
    }
    if (pFVar11 == (FPreAnimatedTemplateCaptureSources *)0x0) {
      pFVar11 = (FPreAnimatedTemplateCaptureSources *)this;
      if (uVar5 != '\x02') {
        pFVar11 = pFVar13;
      }
      if (pFVar11 == (FPreAnimatedTemplateCaptureSources *)0x0) {
        if (uVar5 != '\x03') {
          this = (FScopedPreAnimatedCaptureSource *)pFVar13;
        }
        if ((FPreAnimatedTemplateCaptureSources *)this == (FPreAnimatedTemplateCaptureSources *)0x0)
        {
          return;
        }
        pTVar4 = &(param_2->PreAnimatedState).TrackInstanceInputCaptureSource;
        if ((param_2->PreAnimatedState).TrackInstanceInputCaptureSource.Ptr ==
            (FPreAnimatedTrackInstanceInputCaptureSources *)0x0) {
          pFVar11 = ::operator_new(0x60);
          if (pFVar11 != (FPreAnimatedTemplateCaptureSources *)0x0) {
            *(longlong *)&pFVar11->field_0x8 = 0;
            *(undefined8 *)&pFVar11->field_0x10 = 0;
            *(FScopedPreAnimatedCaptureSource **)&pFVar11->field_0x28 =
                 (FScopedPreAnimatedCaptureSource *)0x0;
            *(undefined4 *)&pFVar11->field_0x30 = 0;
            *(undefined4 *)&pFVar11->field_0x34 = 0x80;
            *(undefined4 *)&pFVar11->field_0x38 = 0xffffffff;
            *(undefined4 *)&pFVar11->field_0x3c = 0;
            *(undefined8 *)&pFVar11->field_0x48 = 0;
            *(undefined4 *)&pFVar11->field_0x50 = 0;
            *(FPreAnimatedStateExtension **)&pFVar11->field_0x58 = &param_2->PreAnimatedState;
            *(undefined ***)pFVar11 =
                 &___7FPreAnimatedTrackInstanceInputCaptureSources_MovieScene_UE__6B_;
            pFVar13 = pFVar11;
          }
          if (pTVar4 == (TUniquePtr<UE::MovieScene::FPreAnimatedTrackInstanceInputCaptureSources,TDefaultDelete<UE::MovieScene::FPreAnimatedTrackInstanceInputCaptureSources>_>
                         *)local_28) {
            if (pFVar13 == (FPreAnimatedTemplateCaptureSources *)0x0) goto LAB_146194d97;
            puVar12 = *(undefined8 **)pFVar13;
          }
          else {
            pFVar11 = (FPreAnimatedTemplateCaptureSources *)pTVar4->Ptr;
            pTVar4->Ptr = (FPreAnimatedTrackInstanceInputCaptureSources *)pFVar13;
            if (pFVar11 == (FPreAnimatedTemplateCaptureSources *)0x0) goto LAB_146194d97;
            puVar12 = *(undefined8 **)pFVar11;
            pFVar13 = pFVar11;
          }
          (*(code *)*puVar12)(pFVar13,1);
        }
LAB_146194d97:
        UE::MovieScene::TPreAnimatedCaptureSources<FMovieSceneTrackInstanceInput>::
        BeginTrackingCaptureSource
                  ((TPreAnimatedCaptureSources<FMovieSceneTrackInstanceInput> *)pTVar4->Ptr,
                   (FMovieSceneTrackInstanceInput *)this,param_1);
        return;
      }
      pTVar3 = &(param_2->PreAnimatedState).TrackInstanceCaptureSource;
      if ((param_2->PreAnimatedState).TrackInstanceCaptureSource.Ptr ==
          (FPreAnimatedTrackInstanceCaptureSources *)0x0) {
        pFVar10 = ::operator_new(0x60);
        if (pFVar10 != (FPreAnimatedTemplateCaptureSources *)0x0) {
          *(longlong *)&pFVar10->field_0x8 = 0;
          *(undefined8 *)&pFVar10->field_0x10 = 0;
          *(FScopedPreAnimatedCaptureSource **)&pFVar10->field_0x28 =
               (FScopedPreAnimatedCaptureSource *)0x0;
          *(undefined4 *)&pFVar10->field_0x30 = 0;
          *(undefined4 *)&pFVar10->field_0x34 = 0x80;
          *(undefined4 *)&pFVar10->field_0x38 = 0xffffffff;
          *(undefined4 *)&pFVar10->field_0x3c = 0;
          *(undefined8 *)&pFVar10->field_0x48 = 0;
          *(undefined4 *)&pFVar10->field_0x50 = 0;
          *(FPreAnimatedStateExtension **)&pFVar10->field_0x58 = &param_2->PreAnimatedState;
          *(undefined ***)pFVar10 = &___7FPreAnimatedTrackInstanceCaptureSources_MovieScene_UE__6B_;
          pFVar13 = pFVar10;
        }
        if (pTVar3 == (TUniquePtr<UE::MovieScene::FPreAnimatedTrackInstanceCaptureSources,TDefaultDelete<UE::MovieScene::FPreAnimatedTrackInstanceCaptureSources>_>
                       *)&local_30) {
          if (pFVar13 == (FPreAnimatedTemplateCaptureSources *)0x0) goto LAB_146194c85;
          puVar12 = *(undefined8 **)pFVar13;
        }
        else {
          pFVar10 = (FPreAnimatedTemplateCaptureSources *)pTVar3->Ptr;
          pTVar3->Ptr = (FPreAnimatedTrackInstanceCaptureSources *)pFVar13;
          if (pFVar10 == (FPreAnimatedTemplateCaptureSources *)0x0) goto LAB_146194c85;
          puVar12 = *(undefined8 **)pFVar10;
          pFVar13 = pFVar10;
        }
        (*(code *)*puVar12)(pFVar13,1);
      }
LAB_146194c85:
      this_02 = (TPreAnimatedCaptureSources<FObjectKey> *)pTVar3->Ptr;
      pUVar7 = *(UObject **)pFVar11;
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      if (pUVar7 != (UObject *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_48 = pUVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_48);
        local_res20.ObjectIndex = local_res8.ObjectIndex;
        local_res20.ObjectSerialNumber = local_res8.ObjectSerialNumber;
      }
      UE::MovieScene::TPreAnimatedCaptureSources<FObjectKey>::BeginTrackingCaptureSource
                (this_02,&local_res20,param_1);
      return;
    }
    pTVar2 = &(param_2->PreAnimatedState).EvaluationHookCaptureSource;
    if ((param_2->PreAnimatedState).EvaluationHookCaptureSource.Ptr ==
        (FPreAnimatedEvaluationHookCaptureSources *)0x0) {
      pFVar10 = ::operator_new(0x60);
      if (pFVar10 != (FPreAnimatedTemplateCaptureSources *)0x0) {
        *(longlong *)&pFVar10->field_0x8 = 0;
        *(undefined8 *)&pFVar10->field_0x10 = 0;
        *(FScopedPreAnimatedCaptureSource **)&pFVar10->field_0x28 =
             (FScopedPreAnimatedCaptureSource *)0x0;
        *(undefined4 *)&pFVar10->field_0x30 = 0;
        *(undefined4 *)&pFVar10->field_0x34 = 0x80;
        *(undefined4 *)&pFVar10->field_0x38 = 0xffffffff;
        *(undefined4 *)&pFVar10->field_0x3c = 0;
        *(undefined8 *)&pFVar10->field_0x48 = 0;
        *(undefined4 *)&pFVar10->field_0x50 = 0;
        *(FPreAnimatedStateExtension **)&pFVar10->field_0x58 = &param_2->PreAnimatedState;
        *(undefined ***)pFVar10 = &___7FPreAnimatedEvaluationHookCaptureSources_MovieScene_UE__6B_;
        pFVar13 = pFVar10;
      }
      if (pTVar2 == (TUniquePtr<UE::MovieScene::FPreAnimatedEvaluationHookCaptureSources,TDefaultDelete<UE::MovieScene::FPreAnimatedEvaluationHookCaptureSources>_>
                     *)&local_38) {
        if (pFVar13 == (FPreAnimatedTemplateCaptureSources *)0x0) goto LAB_146194bad;
        puVar12 = *(undefined8 **)pFVar13;
      }
      else {
        pFVar10 = (FPreAnimatedTemplateCaptureSources *)pTVar2->Ptr;
        pTVar2->Ptr = (FPreAnimatedEvaluationHookCaptureSources *)pFVar13;
        if (pFVar10 == (FPreAnimatedTemplateCaptureSources *)0x0) goto LAB_146194bad;
        puVar12 = *(undefined8 **)pFVar10;
        pFVar13 = pFVar10;
      }
      (*(code *)*puVar12)(pFVar13,1);
    }
LAB_146194bad:
    uVar6 = (undefined4)*(longlong *)&pFVar11->field_0x8;
    this_01 = (TPreAnimatedCaptureSources<UE::MovieScene::FPreAnimatedEvalHookKeyType> *)pTVar2->Ptr
    ;
    if (((short)uVar6 != SUB42(param_1->RootInstanceHandle,0)) ||
       ((short)((uint)uVar6 >> 0x10) != SUB42(param_1->RootInstanceHandle,2))) {
      `FScopedPreAnimatedCaptureSource::BeginTracking'::__l9::<lambda_3>::operator()(&local_res8);
    }
    UE::MovieScene::TPreAnimatedCaptureSources<UE::MovieScene::FPreAnimatedEvalHookKeyType>::
    BeginTrackingCaptureSource(this_01,(FPreAnimatedEvalHookKeyType *)pFVar11,param_1);
    return;
  }
  pTVar1 = &(param_2->PreAnimatedState).TemplateCaptureSource;
  if ((param_2->PreAnimatedState).TemplateCaptureSource.Ptr ==
      (FPreAnimatedTemplateCaptureSources *)0x0) {
    pFVar10 = ::operator_new(0x60);
    if (pFVar10 != (FPreAnimatedTemplateCaptureSources *)0x0) {
      *(longlong *)&pFVar10->field_0x8 = 0;
      *(undefined8 *)&pFVar10->field_0x10 = 0;
      *(FScopedPreAnimatedCaptureSource **)&pFVar10->field_0x28 =
           (FScopedPreAnimatedCaptureSource *)0x0;
      *(undefined4 *)&pFVar10->field_0x30 = 0;
      *(undefined4 *)&pFVar10->field_0x34 = 0x80;
      *(undefined4 *)&pFVar10->field_0x38 = 0xffffffff;
      *(undefined4 *)&pFVar10->field_0x3c = 0;
      *(undefined8 *)&pFVar10->field_0x48 = 0;
      *(undefined4 *)&pFVar10->field_0x50 = 0;
      *(FPreAnimatedStateExtension **)&pFVar10->field_0x58 = &param_2->PreAnimatedState;
      *(undefined ***)pFVar10 = &___7FPreAnimatedTemplateCaptureSources_MovieScene_UE__6B_;
      pFVar13 = pFVar10;
    }
    if (pTVar1 == (TUniquePtr<UE::MovieScene::FPreAnimatedTemplateCaptureSources,TDefaultDelete<UE::MovieScene::FPreAnimatedTemplateCaptureSources>_>
                   *)&local_40) {
      if (pFVar13 == (FPreAnimatedTemplateCaptureSources *)0x0) goto LAB_146194ad5;
      puVar12 = *(undefined8 **)pFVar13;
    }
    else {
      pFVar10 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar13;
      if (pFVar10 == (FPreAnimatedTemplateCaptureSources *)0x0) goto LAB_146194ad5;
      puVar12 = *(undefined8 **)pFVar10;
      pFVar13 = pFVar10;
    }
    (*(code *)*puVar12)(pFVar13,1);
  }
LAB_146194ad5:
  this_00 = (TPreAnimatedCaptureSources<UE::MovieScene::FPreAnimatedEvaluationKeyType> *)pTVar1->Ptr
  ;
  if (((short)*(undefined4 *)&pFVar11->field_0xc != SUB42(param_1->RootInstanceHandle,0)) ||
     ((short)((uint)*(undefined4 *)&pFVar11->field_0xc >> 0x10) !=
      SUB42(param_1->RootInstanceHandle,2))) {
    `FScopedPreAnimatedCaptureSource::BeginTracking'::__l5::<lambda_2>::operator()(&local_res8);
  }
  UE::MovieScene::TPreAnimatedCaptureSources<UE::MovieScene::FPreAnimatedEvaluationKeyType>::
  BeginTrackingCaptureSource(this_00,(FPreAnimatedEvaluationKeyType *)pFVar11,param_1);
  return;
}

// GetCaptureSourcePtr @ 1461b0660

FScopedPreAnimatedCaptureSource ** __cdecl
FScopedPreAnimatedCaptureSource::GetCaptureSourcePtr(void)

{
  return (FScopedPreAnimatedCaptureSource **)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xee8);
}

// GetRootInstanceHandle @ 1461b3510

/* WARNING: Enum "Type": Some values do not have unique names */

FRootInstanceHandle __thiscall
FScopedPreAnimatedCaptureSource::GetRootInstanceHandle
          (FScopedPreAnimatedCaptureSource *this,UMovieSceneEntitySystemLinker *param_1)

{
  FRootInstanceHandle FVar1;
  FInstanceRegistry *pFVar2;
  UMovieSceneEntitySystemLinker *in_R8;
  
  FVar1 = SUB84(param_1,0);
  if (*(short *)&this->RootInstanceHandle != -1) {
    *(FRootInstanceHandle *)&param_1->_padding_ = this->RootInstanceHandle;
    return FVar1;
  }
  if ((this->Variant).TypeIndex != '\x03') {
    this = (FScopedPreAnimatedCaptureSource *)0x0;
  }
  if (this != (FScopedPreAnimatedCaptureSource *)0x0) {
    pFVar2 = UMovieSceneEntitySystemLinker::GetInstanceRegistry(in_R8);
    *(undefined4 *)&param_1->_padding_ =
         *(undefined4 *)
          ((ulonglong)(ushort)(this->Variant)._padding_ * 0x140 + 0x13a +
          *(longlong *)&pFVar2->Instances);
    return FVar1;
  }
  *(undefined4 *)&param_1->_padding_ = 0xffff;
  return FVar1;
}

// operator() @ 1504e5ee0

bool __thiscall
`FScopedPreAnimatedCaptureSource::BeginTracking'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<743973320185086059>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<743973320185086059>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e63b0

bool __thiscall
`FScopedPreAnimatedCaptureSource::BeginTracking'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<743973320185086066>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<743973320185086066>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e6530

bool __thiscall
`FScopedPreAnimatedCaptureSource::BeginTracking'::__l9::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<743973320185086072>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<743973320185086072>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

