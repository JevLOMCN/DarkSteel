// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 25

// FMovieSceneObjectCache @ 14617fd80

FMovieSceneObjectCache * __thiscall
FMovieSceneObjectCache::FMovieSceneObjectCache
          (FMovieSceneObjectCache *this,FMovieSceneObjectCache *param_1)

{
  undefined1 *_Dst;
  undefined1 *_Src;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar1;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar2;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  
  *(undefined8 *)&(this->OnBindingInvalidated).field_0x18 = 2;
  *(undefined8 *)&this->OnBindingInvalidated = 0;
  *(undefined8 *)&(this->OnBindingInvalidated).field_0x8 = 0;
  *(undefined8 *)&(this->OnBindingInvalidated).field_0x10 = 0;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,
             (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)param_1);
  (this->WeakSequence).WeakPtr = (param_1->WeakSequence).WeakPtr;
  (this->SequenceID).Value = (param_1->SequenceID).Value;
  TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
            ((TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
              *)&this->BoundObjects,
             (TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
              *)&param_1->BoundObjects);
  TSet<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FDefaultSetAllocator>
            ((TSet<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FDefaultSetAllocator>
              *)&this->ChildBindings,
             (TSet<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FDefaultSetAllocator>
              *)&param_1->ChildBindings);
  TSet<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
              *)&this->ReverseMappedBindings,
             (TSet<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
              *)&param_1->ReverseMappedBindings);
  pTVar1 = &this->InactiveBindingIds;
  *(undefined8 *)&pTVar1->Elements = 0;
  pTVar2 = &param_1->InactiveBindingIds;
  *(undefined8 *)&(this->InactiveBindingIds).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InactiveBindingIds).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->InactiveBindingIds).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InactiveBindingIds).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InactiveBindingIds).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InactiveBindingIds).Elements.field_0x34 = 0;
  (this->InactiveBindingIds).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InactiveBindingIds).HashSize = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)&pTVar1->Elements = *(undefined8 *)&pTVar2->Elements;
    *(undefined8 *)&pTVar2->Elements = 0;
    _Dst = &(this->InactiveBindingIds).Elements.field_0x10;
    *(undefined4 *)&(this->InactiveBindingIds).Elements.field_0x8 =
         *(undefined4 *)&(param_1->InactiveBindingIds).Elements.field_0x8;
    _Src = &(param_1->InactiveBindingIds).Elements.field_0x10;
    *(undefined4 *)&(this->InactiveBindingIds).Elements.field_0xc =
         *(undefined4 *)&(param_1->InactiveBindingIds).Elements.field_0xc;
    *(undefined8 *)&(param_1->InactiveBindingIds).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->InactiveBindingIds).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->InactiveBindingIds).Elements.field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->InactiveBindingIds).Elements.field_0x20 =
           *(undefined8 *)&(param_1->InactiveBindingIds).Elements.field_0x20;
      *(undefined8 *)&(param_1->InactiveBindingIds).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->InactiveBindingIds).Elements.field_0x28 =
           *(undefined4 *)&(param_1->InactiveBindingIds).Elements.field_0x28;
      *(undefined4 *)&(this->InactiveBindingIds).Elements.field_0x2c =
           *(undefined4 *)&(param_1->InactiveBindingIds).Elements.field_0x2c;
      *(undefined8 *)&(param_1->InactiveBindingIds).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->InactiveBindingIds).Elements.field_0x30 =
         *(undefined4 *)&(param_1->InactiveBindingIds).Elements.field_0x30;
    *(undefined4 *)&(this->InactiveBindingIds).Elements.field_0x34 =
         *(undefined4 *)&(param_1->InactiveBindingIds).Elements.field_0x34;
    *(undefined4 *)&(param_1->InactiveBindingIds).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->InactiveBindingIds).Elements.field_0x34 = 0;
  }
  if ((param_1->InactiveBindingIds).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->InactiveBindingIds).Hash.InlineData =
         *(undefined4 *)(param_1->InactiveBindingIds).Hash.InlineData;
  }
  FVar4 = (this->InactiveBindingIds).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  (this->InactiveBindingIds).Hash.SecondaryData = (param_1->InactiveBindingIds).Hash.SecondaryData;
  (param_1->InactiveBindingIds).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InactiveBindingIds).HashSize = (param_1->InactiveBindingIds).HashSize;
  (param_1->InactiveBindingIds).HashSize = 0;
  this->SerialNumber = param_1->SerialNumber;
  this->bReentrantUpdate = param_1->bReentrantUpdate;
  return this;
}

// ~FMovieSceneObjectCache @ 146185360

void __thiscall FMovieSceneObjectCache::~FMovieSceneObjectCache(FMovieSceneObjectCache *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  (this->InactiveBindingIds).HashSize = 0;
  FVar1 = (this->InactiveBindingIds).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->InactiveBindingIds).Elements);
  *(undefined4 *)&(this->ReverseMappedBindings).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ReverseMappedBindings).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReverseMappedBindings);
  *(undefined4 *)&(this->ChildBindings).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ChildBindings).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChildBindings);
  *(undefined4 *)&(this->BoundObjects).field_0x48 = 0;
  pvVar2 = *(void **)&(this->BoundObjects).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoundObjects);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBindingInvalidated).field_0x8,
             *(int *)&(this->OnBindingInvalidated).field_0x10);
  pvVar2 = *(void **)&(this->OnBindingInvalidated).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// Clear @ 146196bf0

void __thiscall
FMovieSceneObjectCache::Clear(FMovieSceneObjectCache *this,IMovieScenePlayer *param_1)

{
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar1;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_18;
  
  pTVar1 = IMovieScenePlayer::GetSharedPlaybackState(param_1,&local_18);
  local_28.Object = pTVar1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  Clear(this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// Clear @ 146196c50

void __thiscall
FMovieSceneObjectCache::Clear
          (FMovieSceneObjectCache *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  IObjectBindingNotifyPlaybackCapability *pIVar1;
  FGuid local_18;
  
  TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
           *)&this->BoundObjects);
  TSet<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FDefaultSetAllocator>
           *)&this->ChildBindings);
  TSet<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
           *)&this->ReverseMappedBindings);
  this->SerialNumber = this->SerialNumber + 1;
  pIVar1 = UE::MovieScene::FSharedPlaybackState::
           FindCapability<UE::MovieScene::IObjectBindingNotifyPlaybackCapability>(param_1->Object);
  if (pIVar1 != (IObjectBindingNotifyPlaybackCapability *)0x0) {
    (**(code **)*pIVar1)(pIVar1);
  }
  local_18.A = 0;
  local_18.B = 0;
  local_18.C = 0;
  local_18.D = 0;
  TMulticastDelegate<void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnBindingInvalidated,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// FilterObjectBindings @ 1461a64f0

void __thiscall
FMovieSceneObjectCache::FilterObjectBindings
          (FMovieSceneObjectCache *this,UObject *param_1,IMovieScenePlayer *param_2,
          TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *param_3)

{
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar1;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_18;
  
  pTVar1 = IMovieScenePlayer::GetSharedPlaybackState(param_2,&local_18);
  local_28.Object = pTVar1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FilterObjectBindings(this,param_1,&local_28,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// FilterObjectBindings @ 1461a6570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneObjectCache::FilterObjectBindings
          (FMovieSceneObjectCache *this,UObject *param_1,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_2,
          TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *param_3)

{
  FWeakObjectPtr *pFVar1;
  FScriptContainerElement *pFVar2;
  uchar *puVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<FGuid> FVar6;
  code *pcVar7;
  undefined8 uVar8;
  TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
  *pTVar9;
  bool bVar10;
  int iVar11;
  UObject *pUVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  FWeakObjectPtr *pFVar16;
  uint uVar17;
  ForElementType<FGuid> FVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  ForElementType<FGuid> FVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  undefined1 auStack_238 [32];
  ForElementType<FGuid> local_218;
  ForElementType<FGuid> local_210;
  longlong local_208;
  longlong local_200;
  undefined8 local_1f8;
  undefined1 local_1e8;
  undefined1 local_1e7;
  undefined1 local_1e6;
  undefined1 local_1e5 [5];
  TBitArray<FDefaultBitArrayAllocator> *local_1e0;
  FMovieSceneObjectCache *local_1d8;
  UObject *local_1d0;
  TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
  *local_1c8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *local_1c0;
  uchar local_1b8 [8];
  uchar auStack_1b0 [8];
  uint local_1a8;
  uchar auStack_1a4 [12];
  uchar auStack_198 [8];
  uint local_190;
  uchar auStack_18c [4];
  int local_188;
  int local_184;
  FWeakObjectPtr local_180;
  FWeakObjectPtr local_178;
  TMap<FGuid,FMovieSceneObjectCache::FBoundObjects,FDefaultSetAllocator,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>_>
  *local_170;
  int iStack_168;
  uint uStack_164;
  undefined1 *local_160;
  uchar auStack_158 [4];
  int iStack_154;
  int local_150;
  uchar auStack_14c [4];
  int iStack_148;
  uchar auStack_144 [4];
  TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
  *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_110 [2];
  uchar local_e4 [12];
  ForElementType<FGuid> local_d8;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_238;
  local_1d8 = this;
  local_1d0 = param_1;
  local_1c0 = param_2;
  if ((param_3 == (TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutBindings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationState.cpp"
                          ,0x99,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_4c = 8;
  pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->BoundObjects).field_0x10;
  local_d8.SecondaryData = (ForElementType<FGuid>)0x0;
  local_50 = 0;
  local_1c8 = (TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
               *)&this->BoundObjects;
  iVar11 = *(int *)&(this->BoundObjects).field_0x28;
  iStack_168 = 0;
  local_150 = 0;
  uStack_164 = 1;
  iStack_154 = 0;
  if (iVar11 != 0) {
    puVar21 = *(uint **)&(this->BoundObjects).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)pTVar23;
    }
    uVar19 = *puVar21;
    while (uVar19 == 0) {
      lVar13 = (longlong)iStack_168;
      local_150 = local_150 + 0x20;
      iStack_168 = iStack_168 + 1;
      iStack_154 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_168) goto LAB_1461a668d;
      uVar19 = puVar21[lVar13 + 1];
    }
    uStack_164 = -uVar19 & uVar19;
    uVar14 = (ulonglong)uStack_164 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_188 = (int)lVar13;
    iStack_154 = local_150 + -1 + local_188;
    if (iVar11 < iStack_154) {
      iStack_154 = iVar11;
    }
  }
LAB_1461a668d:
  auStack_14c[0] = local_e4[0];
  auStack_14c[1] = local_e4[1];
  auStack_14c[2] = local_e4[2];
  auStack_14c[3] = local_e4[3];
  iStack_148 = *(int *)&(this->BoundObjects).field_0x8 - *(int *)&(this->BoundObjects).field_0x34;
  uVar19 = *(uint *)&(this->BoundObjects).field_0x28;
  auStack_158[0] = 0xff;
  auStack_158[1] = 0xff;
  auStack_158[2] = 0xff;
  auStack_158[3] = 0xff;
  TStack_138._padding_._4_4_ = uStack_164;
  TStack_138._padding_._0_4_ = iStack_168;
  uVar17 = uVar19 & 0xffffffe0;
  TStack_138.CurrentBitIndex = iStack_154;
  TStack_138.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar19 >> 5;
  TStack_138._28_1_ = local_e4[0];
  TStack_138._29_1_ = local_e4[1];
  TStack_138._30_1_ = local_e4[2];
  TStack_138._31_1_ = local_e4[3];
  TStack_138.BaseBitIndex = local_150;
  uStack_118 = CONCAT44(auStack_144,iStack_148);
  local_1e0 = pTVar23;
  local_170 = (TMap<FGuid,FMovieSceneObjectCache::FBoundObjects,FDefaultSetAllocator,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>_>
               *)local_1c8;
  local_160 = (undefined1 *)pTVar23;
  local_140 = local_1c8;
  TStack_138.Array = pTVar23;
  if ((((int)uVar19 < 0) || (iVar11 < (int)uVar19)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&(this->BoundObjects).field_0x28;
  if (uVar19 != uVar4) {
    puVar20 = *(undefined1 **)&(this->BoundObjects).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = (undefined1 *)pTVar23;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar15 * 4);
    while (uVar19 == 0) {
      lVar13 = (longlong)iVar15;
      uVar17 = uVar17 + 0x20;
      iVar15 = iVar15 + 1;
      uVar19 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1461a6790;
      uVar19 = *(uint *)(puVar20 + lVar13 * 4 + 4);
    }
    uVar14 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_184 = (int)lVar13;
    uVar19 = local_184 + -1 + uVar17;
    if ((int)uVar4 < (int)uVar19) {
      uVar19 = uVar4;
    }
  }
LAB_1461a6790:
  while( true ) {
    pTVar9 = local_140;
    if (*(int *)&(local_140->Elements).field_0x8 - *(int *)&(local_140->Elements).field_0x34 !=
        (int)uStack_118) {
      local_1e8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1e8);
    }
    if (((TStack_138.CurrentBitIndex == uVar19) && (TStack_138.Array == pTVar23)) &&
       (pTVar9 == local_1c8)) break;
    FVar18 = (ForElementType<FGuid>)
             ((longlong)TStack_138.CurrentBitIndex * 0x38 + *(longlong *)&pTVar9->Elements);
    if (*(uchar *)((longlong)FVar18 + 0x10) == '\0') {
      FVar22 = (ForElementType<FGuid>)&local_d8;
      if (local_d8.SecondaryData != (ForElementType<FGuid>)0x0) {
        FVar22 = local_d8.SecondaryData;
      }
      if ((ulonglong)FVar22 <= (ulonglong)FVar18) {
        FVar22 = (ForElementType<FGuid>)&local_d8;
        if (local_d8.SecondaryData != (ForElementType<FGuid>)0x0) {
          FVar22 = local_d8.SecondaryData;
        }
        if ((ulonglong)FVar18 < (ulonglong)((longlong)local_4c * 0x10 + (longlong)FVar22)) {
          local_200 = (longlong)local_50;
          local_1f8 = 0x10;
          local_210 = (ForElementType<FGuid>)&local_d8;
          if (local_d8.SecondaryData != (ForElementType<FGuid>)0x0) {
            local_210 = local_d8.SecondaryData;
          }
          local_218 = FVar18;
          local_208 = (longlong)local_4c;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
      }
      if (local_50 == local_4c) {
        local_50 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FGuid>_>
                             (0x410,&local_d8,&local_4c);
      }
      lVar13 = (longlong)local_50;
      FVar22 = (ForElementType<FGuid>)&local_d8;
      if (local_d8.SecondaryData != (ForElementType<FGuid>)0x0) {
        FVar22 = local_d8.SecondaryData;
      }
      local_50 = local_50 + 1;
      uVar8 = *(undefined8 *)((longlong)FVar18 + 8);
      puVar3 = (uchar *)((longlong)FVar22 + lVar13 * 0x10);
      *(undefined8 *)puVar3 = *(undefined8 *)FVar18;
      *(undefined8 *)(puVar3 + 8) = uVar8;
    }
    else {
      iVar11 = *(int *)((longlong)FVar18 + 0x28);
      pFVar16 = *(FWeakObjectPtr **)((longlong)FVar18 + 0x20);
      if (*(FWeakObjectPtr **)((longlong)FVar18 + 0x20) == (FWeakObjectPtr *)0x0) {
        pFVar16 = (FWeakObjectPtr *)((longlong)FVar18 + 0x18);
      }
      pFVar1 = pFVar16 + iVar11;
      while( true ) {
        if (*(int *)((longlong)FVar18 + 0x28) != iVar11) {
          local_1e7 = 0;
          `TCheckedPointerIterator<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(&local_1e7);
        }
        pTVar23 = local_1e0;
        if (pFVar16 == pFVar1) goto LAB_1461a690e;
        local_180 = *pFVar16;
        pUVar12 = FWeakObjectPtr::Get(&local_180);
        if ((pUVar12 != (UObject *)0x0) && (pUVar12 == local_1d0)) break;
        pFVar16 = pFVar16 + 1;
      }
      local_1b8 = *(uchar (*) [8])FVar18;
      auStack_1b0 = *(uchar (*) [8])((longlong)FVar18 + 8);
      FVar18 = (ForElementType<FGuid>)(param_3->AllocatorInstance).Data;
      auStack_1a4[0] = 0xff;
      auStack_1a4[1] = 0xff;
      auStack_1a4[2] = 0xff;
      auStack_1a4[3] = 0xff;
      local_1a8 = (local_1d8->SequenceID).Value;
      if (((ulonglong)FVar18 <= local_1b8) &&
         (local_1b8 < (uchar *)((longlong)FVar18 + (longlong)param_3->ArrayMax * 0x18))) {
        local_200 = (longlong)param_3->ArrayNum;
        local_1f8 = 0x18;
        local_218 = (ForElementType<FGuid>)local_1b8;
        local_210 = FVar18;
        local_208 = (longlong)param_3->ArrayMax;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar11 = param_3->ArrayNum;
      if (iVar11 == param_3->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar11 + 1;
      pFVar5 = (param_3->AllocatorInstance).Data;
      pFVar2 = pFVar5 + (longlong)iVar11 * 0x18;
      *(uchar (*) [8])pFVar2 = local_1b8;
      *(uchar (*) [8])(pFVar2 + 8) = auStack_1b0;
      *(ulonglong *)(pFVar5 + (longlong)iVar11 * 0x18 + 0x10) =
           CONCAT44(auStack_1a4._0_4_,local_1a8);
      pTVar23 = local_1e0;
    }
LAB_1461a690e:
    TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
  }
  uVar14 = (ulonglong)local_50;
  local_1e0 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(local_1e0._4_4_,local_50);
  FVar18 = (ForElementType<FGuid>)&local_d8;
  if (local_d8.SecondaryData != (ForElementType<FGuid>)0x0) {
    FVar18 = local_d8.SecondaryData;
  }
  FVar22 = (ForElementType<FGuid>)(uVar14 * 0x10 + (longlong)FVar18);
  do {
    pTVar9 = local_1c8;
    if (local_50 != (int)uVar14) {
      local_1e6 = 0;
      `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_1e6);
    }
    if (FVar18 == FVar22) {
      if (local_d8.SecondaryData != (ForElementType<FGuid>)0x0) {
        FMemory::Free((void *)local_d8.SecondaryData);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((local_1c0->SharedReferenceCount).ReferenceController);
      return;
    }
    local_110[0].Object = local_1c0->Object;
    local_110[0].SharedReferenceCount.ReferenceController =
         (local_1c0->SharedReferenceCount).ReferenceController;
    if (local_110[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      LOCK();
      (local_110[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_110[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UpdateBindings(local_1d8,(FGuid *)FVar18,local_110);
    iVar11 = TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
             ::FindIndexByHash<FGuid>
                       (pTVar9,*(uint *)((longlong)FVar18 + 0xc) ^ *(uint *)((longlong)FVar18 + 8) ^
                               *(uint *)((longlong)FVar18 + 4) ^ *(uint *)FVar18,(FGuid *)FVar18);
    if (iVar11 == -1) {
      lVar13 = 0;
LAB_1461a6abc:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L"");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      lVar13 = (longlong)iVar11 * 0x38 + *(longlong *)&pTVar9->Elements;
      if (lVar13 == 0) goto LAB_1461a6abc;
    }
    iVar11 = *(int *)(lVar13 + 0x28);
    pFVar16 = *(FWeakObjectPtr **)(lVar13 + 0x20);
    if (*(FWeakObjectPtr **)(lVar13 + 0x20) == (FWeakObjectPtr *)0x0) {
      pFVar16 = (FWeakObjectPtr *)(lVar13 + 0x18);
    }
    pFVar1 = pFVar16 + iVar11;
    while( true ) {
      if (*(int *)(lVar13 + 0x28) != iVar11) {
        local_1e5[0] = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_1e5);
      }
      if (pFVar16 == pFVar1) goto LAB_1461a6c09;
      local_178 = *pFVar16;
      pUVar12 = FWeakObjectPtr::Get(&local_178);
      if ((pUVar12 != (UObject *)0x0) && (pUVar12 == local_1d0)) break;
      pFVar16 = pFVar16 + 1;
    }
    auStack_1a4._4_8_ = *(undefined8 *)FVar18;
    auStack_198 = *(uchar (*) [8])((longlong)FVar18 + 8);
    FVar6 = (ForElementType<FGuid>)(param_3->AllocatorInstance).Data;
    auStack_18c[0] = 0xff;
    auStack_18c[1] = 0xff;
    auStack_18c[2] = 0xff;
    auStack_18c[3] = 0xff;
    local_190 = (local_1d8->SequenceID).Value;
    if (((ulonglong)FVar6 <= (longlong)local_1b8 + 0x18U) &&
       (local_1b8 + 0x18 < (uchar *)((longlong)FVar6 + (longlong)param_3->ArrayMax * 0x18))) {
      local_200 = (longlong)param_3->ArrayNum;
      local_1f8 = 0x18;
      local_218 = (ForElementType<FGuid>)((longlong)local_1b8 + 0x18);
      local_210 = FVar6;
      local_208 = (longlong)param_3->ArrayMax;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar11 = param_3->ArrayNum;
    if (iVar11 == param_3->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar11 + 1;
    pFVar5 = (param_3->AllocatorInstance).Data;
    pFVar2 = pFVar5 + (longlong)iVar11 * 0x18;
    *(undefined8 *)pFVar2 = auStack_1a4._4_8_;
    *(uchar (*) [8])(pFVar2 + 8) = auStack_198;
    *(ulonglong *)(pFVar5 + (longlong)iVar11 * 0x18 + 0x10) = CONCAT44(auStack_18c,local_190);
LAB_1461a6c09:
    uVar14 = (ulonglong)local_1e0 & 0xffffffff;
    FVar18 = (ForElementType<FGuid>)((longlong)FVar18 + 0x10);
  } while( true );
}

// FindBoundObjects @ 1461a7900

TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> * __thiscall
FMovieSceneObjectCache::FindBoundObjects
          (FMovieSceneObjectCache *this,
          TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *__return_storage_ptr__,
          FGuid *param_1,IMovieScenePlayer *param_2)

{
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar1;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_18;
  
  pTVar1 = IMovieScenePlayer::GetSharedPlaybackState(param_2,&local_18);
  local_28.Object = pTVar1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FindBoundObjects(this,__return_storage_ptr__,param_1,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FindBoundObjects @ 1461a7980

TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> * __thiscall
FMovieSceneObjectCache::FindBoundObjects
          (FMovieSceneObjectCache *this,
          TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *__return_storage_ptr__,
          FGuid *param_1,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *pTVar5;
  char *pcVar6;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar7;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  
  iVar3 = TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
                      *)&this->BoundObjects,param_1->C ^ param_1->A ^ param_1->D ^ param_1->B,
                     param_1);
  if (iVar3 == -1) {
LAB_1461a7a28:
    local_28.Object = param_2->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UpdateBindings(this,param_1,&local_28);
    iVar3 = TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
                        *)&this->BoundObjects,param_1->B ^ param_1->A ^ param_1->D ^ param_1->C,
                       param_1);
    if (iVar3 != -1) {
      lVar4 = (longlong)iVar3 * 0x38 + *(longlong *)&this->BoundObjects;
      pcVar6 = (char *)(lVar4 + 0x10);
      if (lVar4 == 0) {
        pcVar6 = (char *)0x0;
      }
      if (pcVar6 != (char *)0x0) goto LAB_1461a79e0;
    }
    __return_storage_ptr__->DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    lVar4 = (longlong)iVar3 * 0x38 + *(longlong *)&this->BoundObjects;
    pcVar6 = (char *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      pcVar6 = (char *)0x0;
    }
    if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) goto LAB_1461a7a28;
LAB_1461a79e0:
    iVar3 = *(int *)(pcVar6 + 0x18);
    pTVar7 = *(TWeakObjectPtr<UObject,FWeakObjectPtr> **)(pcVar6 + 0x10);
    __return_storage_ptr__->ArrayNum = iVar3;
    if (pTVar7 == (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0) {
      pTVar7 = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)(pcVar6 + 8);
    }
    __return_storage_ptr__->DataPtr = pTVar7;
    if (iVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// FindCachedObjectId @ 1461a7ce0

FGuid * __thiscall
FMovieSceneObjectCache::FindCachedObjectId
          (FMovieSceneObjectCache *this,FGuid *__return_storage_ptr__,UObject *param_1,
          IMovieScenePlayer *param_2)

{
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar1;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_18;
  
  pTVar1 = IMovieScenePlayer::GetSharedPlaybackState(param_2,&local_18);
  local_28.Object = pTVar1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FindCachedObjectId(this,__return_storage_ptr__,param_1,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FindCachedObjectId @ 1461a7d60

FGuid * __thiscall
FMovieSceneObjectCache::FindCachedObjectId
          (FMovieSceneObjectCache *this,FGuid *__return_storage_ptr__,UObject *param_1,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_2)

{
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar1;
  undefined8 *puVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  longlong lVar7;
  FGuid *pFVar8;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *pTVar9;
  int iVar10;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  FWeakObjectPtr local_98;
  UObject *local_90;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_88;
  FGuid local_78;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_68;
  FGuid local_58;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_48;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_38;
  
  pUVar6 = FWeakObjectPtr::Get(&(this->WeakSequence).WeakPtr);
  if ((pUVar6 == (UObject *)0x0) ||
     (lVar7 = (**(code **)(*(longlong *)pUVar6 + 0x2f8))(pUVar6), lVar7 == 0)) {
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    __return_storage_ptr__->A = 0;
    __return_storage_ptr__->B = 0;
    __return_storage_ptr__->C = 0;
    __return_storage_ptr__->D = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    uVar12 = 0;
    local_98.ObjectIndex = 0;
    local_98.ObjectSerialNumber = 0;
    local_90 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_98,(FObjectPtr)&local_90);
    iVar10 = *(int *)(lVar7 + 0x90);
    uVar15 = uVar12;
    uVar14 = uVar12;
    if (0 < iVar10) {
      do {
        uVar13 = (uint)uVar15;
        uVar16 = 0;
        if ((int)uVar13 < iVar10) {
          uVar16 = ~uVar13 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FGuid *)(*pcVar4)();
          return pFVar8;
        }
        puVar2 = (undefined8 *)(uVar14 + 0x38 + *(longlong *)(lVar7 + 0x88));
        local_78._0_8_ = *puVar2;
        local_78._8_8_ = puVar2[1];
        local_88.Object = param_2->Object;
        local_88.SharedReferenceCount.ReferenceController =
             (param_2->SharedReferenceCount).ReferenceController;
        if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar9 = FindBoundObjects(this,&local_48,&local_78,&local_88);
        pTVar11 = pTVar9->DataPtr;
        pTVar1 = pTVar11 + pTVar9->ArrayNum;
        for (; pTVar11 != pTVar1; pTVar11 = pTVar11 + 1) {
          bVar5 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                            (pTVar11,(TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_98);
          if (bVar5) {
            uVar16 = local_78.A;
            uVar13 = local_78.B;
            uVar17 = local_78.C;
            uVar18 = local_78.D;
            goto LAB_1461a7ff7;
          }
        }
        iVar10 = *(int *)(lVar7 + 0x90);
        uVar15 = (ulonglong)(uVar13 + 1);
        uVar14 = uVar14 + 0x80;
      } while ((int)(uVar13 + 1) < iVar10);
    }
    iVar10 = *(int *)(lVar7 + 0x80);
    uVar15 = uVar12;
    if (0 < iVar10) {
      do {
        uVar13 = (uint)uVar12;
        uVar16 = 0;
        if ((int)uVar13 < iVar10) {
          uVar16 = ~uVar13 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FGuid *)(*pcVar4)();
          return pFVar8;
        }
        puVar2 = (undefined8 *)(uVar15 + 0xa0 + *(longlong *)(lVar7 + 0x78));
        local_58._0_8_ = *puVar2;
        local_58._8_8_ = puVar2[1];
        local_68.Object = param_2->Object;
        local_68.SharedReferenceCount.ReferenceController =
             (param_2->SharedReferenceCount).ReferenceController;
        if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar9 = FindBoundObjects(this,&local_38,&local_58,&local_68);
        pTVar11 = pTVar9->DataPtr;
        pTVar1 = pTVar11 + pTVar9->ArrayNum;
        if (pTVar11 != pTVar1) {
LAB_1461a7fb0:
          bVar5 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                            (pTVar11,(TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_98);
          if (!bVar5) goto code_r0x0001461a7fc1;
          uVar16 = local_58.A;
          uVar13 = local_58.B;
          uVar17 = local_58.C;
          uVar18 = local_58.D;
LAB_1461a7ff7:
          __return_storage_ptr__->A = uVar16;
          __return_storage_ptr__->B = uVar13;
          __return_storage_ptr__->C = uVar17;
          __return_storage_ptr__->D = uVar18;
          goto LAB_1461a7ffb;
        }
LAB_1461a7fca:
        iVar10 = *(int *)(lVar7 + 0x80);
        uVar12 = (ulonglong)(uVar13 + 1);
        uVar15 = uVar15 + 0xf0;
      } while ((int)(uVar13 + 1) < iVar10);
    }
    __return_storage_ptr__->A = 0;
    __return_storage_ptr__->B = 0;
    __return_storage_ptr__->C = 0;
    __return_storage_ptr__->D = 0;
LAB_1461a7ffb:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
  }
  return __return_storage_ptr__;
code_r0x0001461a7fc1:
  pTVar11 = pTVar11 + 1;
  if (pTVar11 == pTVar1) goto LAB_1461a7fca;
  goto LAB_1461a7fb0;
}

// FindObjectId @ 1461a9240

FGuid * __thiscall
FMovieSceneObjectCache::FindObjectId
          (FMovieSceneObjectCache *this,FGuid *__return_storage_ptr__,UObject *param_1,
          IMovieScenePlayer *param_2)

{
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar1;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_18;
  
  pTVar1 = IMovieScenePlayer::GetSharedPlaybackState(param_2,&local_18);
  local_28.Object = pTVar1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FindObjectId(this,__return_storage_ptr__,param_1,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FindObjectId @ 1461a92c0

FGuid * __thiscall
FMovieSceneObjectCache::FindObjectId
          (FMovieSceneObjectCache *this,FGuid *__return_storage_ptr__,UObject *param_1,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_2)

{
  UObject *pUVar1;
  longlong lVar2;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->WeakSequence).WeakPtr);
  if (pUVar1 != (UObject *)0x0) {
    lVar2 = (**(code **)(*(longlong *)pUVar1 + 0x2f8))(pUVar1);
    if (lVar2 != 0) {
      if (this->bReentrantUpdate == false) {
        local_18.Object = param_2->Object;
        local_18.SharedReferenceCount.ReferenceController =
             (param_2->SharedReferenceCount).ReferenceController;
        if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        Clear(this,&local_18);
      }
      local_18.Object = param_2->Object;
      local_18.SharedReferenceCount.ReferenceController =
           (param_2->SharedReferenceCount).ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FindCachedObjectId(this,__return_storage_ptr__,param_1,&local_18);
      goto LAB_1461a9368;
    }
  }
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
LAB_1461a9368:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetBindingActivation @ 1461b0560

bool __thiscall
FMovieSceneObjectCache::GetBindingActivation(FMovieSceneObjectCache *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                    (&this->InactiveBindingIds,(uint)uVar2,param_1);
  return iVar1 == -1;
}

// Invalidate @ 1461ba1a0

void __thiscall FMovieSceneObjectCache::Invalidate(FMovieSceneObjectCache *this,FGuid *param_1)

{
  InvalidateInternal(this,param_1);
  this->SerialNumber = this->SerialNumber + 1;
  return;
}

// Invalidate @ 1461ba1c0

void __thiscall
FMovieSceneObjectCache::Invalidate
          (FMovieSceneObjectCache *this,FGuid *param_1,FMovieSceneSequenceID *param_2)

{
  int iVar1;
  ulong64 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined1 local_res8 [8];
  FGuid local_48;
  FMovieSceneObjectBindingID local_38;
  
  local_38.SequenceID = param_2->Value;
  if (local_38.SequenceID != (this->SequenceID).Value) {
    local_38.Guid.A = param_1->A;
    local_38.Guid.B = param_1->B;
    local_38.Guid.C = param_1->C;
    local_38.Guid.D = param_1->D;
    local_38.ResolveParentIndex = -1;
    uVar2 = CityHash64((char *)&local_38,0x10);
    iVar1 = TSet<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FMovieSceneObjectBindingID>
                      ((TSet<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                        *)&this->ReverseMappedBindings,(uint)uVar2 ^ local_38.SequenceID,&local_38);
    if (iVar1 != -1) {
      lVar3 = (longlong)iVar1 * 0x70 + *(longlong *)&this->ReverseMappedBindings;
      puVar4 = (undefined8 *)(lVar3 + 0x18);
      if (lVar3 == 0) {
        puVar4 = (undefined8 *)0x0;
      }
      if (puVar4 != (undefined8 *)0x0) {
        piVar6 = (int *)(lVar3 + 0x60);
        if ((undefined8 *)puVar4[8] != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)puVar4[8];
        }
        if (lVar3 == 0) {
          piVar6 = (int *)&DAT_00000048;
        }
        iVar1 = *piVar6;
        puVar5 = puVar4 + (longlong)iVar1 * 2;
        while( true ) {
          if (*piVar6 != iVar1) {
            `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (puVar4 == puVar5) break;
          local_48._0_8_ = *puVar4;
          local_48._8_8_ = puVar4[1];
          InvalidateInternal(this,&local_48);
          this->SerialNumber = this->SerialNumber + 1;
          puVar4 = puVar4 + 2;
        }
        if (*(int *)&(this->ReverseMappedBindings).field_0x8 !=
            *(int *)&(this->ReverseMappedBindings).field_0x34) {
          uVar2 = CityHash64((char *)&local_38,0x10);
          TSet<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<FMovieSceneObjectBindingID>
                    ((TSet<TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                      *)&this->ReverseMappedBindings,(uint)uVar2 ^ local_38.SequenceID,&local_38);
        }
      }
    }
    return;
  }
  InvalidateInternal(this,param_1);
  this->SerialNumber = this->SerialNumber + 1;
  return;
}

// InvalidateExpiredObjects @ 1461ba700

void __thiscall FMovieSceneObjectCache::InvalidateExpiredObjects(FMovieSceneObjectCache *this)

{
  undefined1 *puVar1;
  FWeakObjectPtr *pFVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FGuid,FMovieSceneObjectCache::FBoundObjects,FDefaultSetAllocator,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>_>
  *pTVar6;
  bool bVar7;
  UObject *pUVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  FWeakObjectPtr *this_00;
  uint uVar12;
  uint uVar13;
  FGuid *pFVar14;
  undefined1 *puVar15;
  uint *puVar16;
  FGuid *pFVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  FGuid *local_b8;
  ulonglong local_b0;
  TMap<FGuid,FMovieSceneObjectCache::FBoundObjects,FDefaultSetAllocator,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<FGuid,FMovieSceneObjectCache::FBoundObjects,FDefaultSetAllocator,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar3 = *(int *)&(this->BoundObjects).field_0x28;
  puVar1 = &(this->BoundObjects).field_0x10;
  iStack_a0 = 0;
  local_a8 = &this->BoundObjects;
  local_88 = 0;
  uStack_9c = 1;
  iStack_8c = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->BoundObjects).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_1461ba79d;
      uVar13 = puVar16[lVar10 + 1];
    }
    uStack_9c = -uVar13 & uVar13;
    uVar9 = (ulonglong)uStack_9c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iStack_8c = local_88 + -1 + local_res20;
    if (iVar3 < iStack_8c) {
      iStack_8c = iVar3;
    }
  }
LAB_1461ba79d:
  uVar13 = *(uint *)&(this->BoundObjects).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_80 = *(int *)&(this->BoundObjects).field_0x8 - *(int *)&(this->BoundObjects).field_0x34;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_78 = local_a8;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->BoundObjects).field_0x28;
  if (uVar13 != uVar4) {
    puVar15 = *(undefined1 **)&(this->BoundObjects).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1461ba8a0;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar9 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_1461ba8a0:
  do {
    pTVar6 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar13) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->BoundObjects).field_0x10
        )) && (pTVar6 == &this->BoundObjects)) {
      pUVar8 = FWeakObjectPtr::Get(&(this->WeakSequence).WeakPtr);
      if (pUVar8 != (UObject *)0x0) {
        local_b8 = (FGuid *)0x0;
        local_b0 = 0;
        (**(code **)(*(longlong *)pUVar8 + 0x2f0))(pUVar8,this,&local_b8);
        iVar3 = (int)local_b0;
        uVar9 = (ulonglong)(int)local_b0;
        pFVar14 = local_b8 + uVar9;
        pFVar17 = local_b8;
        while( true ) {
          if ((int)uVar9 != iVar3) {
            `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (pFVar17 == pFVar14) break;
          InvalidateInternal(this,pFVar17);
          uVar9 = local_b0 & 0xffffffff;
          pFVar17 = pFVar17 + 1;
        }
        if (local_b8 != (FGuid *)0x0) {
          FMemory::Free(local_b8);
        }
      }
      this->SerialNumber = this->SerialNumber + 1;
      return;
    }
    pFVar17 = (FGuid *)((longlong)TStack_70.CurrentBitIndex * 0x38 + *(longlong *)pTVar6);
    if ((char)pFVar17[1].A != '\0') {
      uVar12 = pFVar17[2].C;
      this_00 = *(FWeakObjectPtr **)(pFVar17 + 2);
      if (*(FWeakObjectPtr **)(pFVar17 + 2) == (FWeakObjectPtr *)0x0) {
        this_00 = (FWeakObjectPtr *)&pFVar17[1].C;
      }
      pFVar2 = this_00 + (int)uVar12;
      while( true ) {
        if (pFVar17[2].C != uVar12) {
          `TCheckedPointerIterator<TWeakObjectPtr<UObject,FWeakObjectPtr>,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res10);
        }
        if (this_00 == pFVar2) goto LAB_1461ba926;
        pUVar8 = FWeakObjectPtr::Get(this_00);
        if (pUVar8 == (UObject *)0x0) break;
        this_00 = this_00 + 1;
      }
      InvalidateInternal(this,pFVar17);
    }
LAB_1461ba926:
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// InvalidateIfValid @ 1461ba9e0

void __thiscall
FMovieSceneObjectCache::InvalidateIfValid(FMovieSceneObjectCache *this,FGuid *param_1)

{
  bool bVar1;
  
  bVar1 = InvalidateIfValidInternal(this,param_1);
  if (bVar1) {
    this->SerialNumber = this->SerialNumber + 1;
  }
  return;
}

// InvalidateIfValidInternal @ 1461baa10

bool __thiscall
FMovieSceneObjectCache::InvalidateIfValidInternal(FMovieSceneObjectCache *this,FGuid *param_1)

{
  int iVar1;
  longlong lVar2;
  FGuid *pFVar3;
  int *piVar4;
  FGuid *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
                      *)&this->BoundObjects,param_1->C ^ param_1->D ^ param_1->A ^ param_1->B,
                     param_1);
  if (iVar1 != -1) {
    lVar2 = (longlong)iVar1 * 0x38 + *(longlong *)&this->BoundObjects;
    pFVar3 = (FGuid *)(lVar2 + 0x10);
    if (lVar2 == 0) {
      pFVar3 = (FGuid *)0x0;
    }
    if ((pFVar3 != (FGuid *)0x0) && ((char)pFVar3->A == '\x01')) {
      *(undefined1 *)&pFVar3->A = 0;
      iVar1 = TSet<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FDefaultSetAllocator>
              ::FindIndexByHash<FGuid>
                        ((TSet<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FDefaultSetAllocator>
                          *)&this->ChildBindings,param_1->B ^ param_1->A ^ param_1->D ^ param_1->C,
                         param_1);
      if (iVar1 != -1) {
        lVar2 = (longlong)iVar1 * 0x68 + *(longlong *)&this->ChildBindings;
        pFVar3 = (FGuid *)(lVar2 + 0x10);
        if (lVar2 == 0) {
          pFVar3 = (FGuid *)0x0;
        }
        if (pFVar3 != (FGuid *)0x0) {
          piVar4 = (int *)(lVar2 + 0x58);
          if (*(FGuid **)(pFVar3 + 4) != (FGuid *)0x0) {
            pFVar3 = *(FGuid **)(pFVar3 + 4);
          }
          if (lVar2 == 0) {
            piVar4 = (int *)&DAT_00000048;
          }
          iVar1 = *piVar4;
          pFVar5 = pFVar3 + iVar1;
          while( true ) {
            if (*piVar4 != iVar1) {
              `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res8);
            }
            if (pFVar3 == pFVar5) break;
            InvalidateIfValidInternal(this,pFVar3);
            pFVar3 = pFVar3 + 1;
          }
        }
      }
      TMulticastDelegate<void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnBindingInvalidated,param_1);
      return true;
    }
  }
  return false;
}

// InvalidateInternal @ 1461bab50

bool __thiscall
FMovieSceneObjectCache::InvalidateInternal(FMovieSceneObjectCache *this,FGuid *param_1)

{
  int iVar1;
  longlong lVar2;
  FGuid *pFVar3;
  int *piVar4;
  FGuid *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
                      *)&this->BoundObjects,param_1->C ^ param_1->D ^ param_1->A ^ param_1->B,
                     param_1);
  if (iVar1 != -1) {
    lVar2 = (longlong)iVar1 * 0x38 + *(longlong *)&this->BoundObjects;
    pFVar3 = (FGuid *)(lVar2 + 0x10);
    if (lVar2 == 0) {
      pFVar3 = (FGuid *)0x0;
    }
    if (pFVar3 != (FGuid *)0x0) {
      *(undefined1 *)&pFVar3->A = 0;
      iVar1 = TSet<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FDefaultSetAllocator>
              ::FindIndexByHash<FGuid>
                        ((TSet<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FDefaultSetAllocator>
                          *)&this->ChildBindings,param_1->D ^ param_1->B ^ param_1->C ^ param_1->A,
                         param_1);
      if (iVar1 != -1) {
        lVar2 = (longlong)iVar1 * 0x68 + *(longlong *)&this->ChildBindings;
        pFVar3 = (FGuid *)(lVar2 + 0x10);
        if (lVar2 == 0) {
          pFVar3 = (FGuid *)0x0;
        }
        if (pFVar3 != (FGuid *)0x0) {
          piVar4 = (int *)(lVar2 + 0x58);
          if (*(FGuid **)(pFVar3 + 4) != (FGuid *)0x0) {
            pFVar3 = *(FGuid **)(pFVar3 + 4);
          }
          if (lVar2 == 0) {
            piVar4 = (int *)&DAT_00000048;
          }
          iVar1 = *piVar4;
          pFVar5 = pFVar3 + iVar1;
          while( true ) {
            if (*piVar4 != iVar1) {
              `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res8);
            }
            if (pFVar3 == pFVar5) break;
            InvalidateInternal(this,pFVar3);
            pFVar3 = pFVar3 + 1;
          }
        }
      }
    }
  }
  TMulticastDelegate<void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnBindingInvalidated,param_1);
  return true;
}

// IterateBoundObjects @ 1461bc230

TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_,int> * __thiscall
FMovieSceneObjectCache::IterateBoundObjects
          (FMovieSceneObjectCache *this,
          TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_,int> *__return_storage_ptr__,
          FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_,int> *pTVar6;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar7;
  
  iVar3 = TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
                      *)&this->BoundObjects,param_1->D ^ param_1->C ^ param_1->B ^ param_1->A,
                     param_1);
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x38 + *(longlong *)&(this->BoundObjects).field_0x0;
    pcVar5 = (char *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      pcVar5 = (char *)0x0;
    }
    if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
      iVar3 = *(int *)(pcVar5 + 0x18);
      pTVar7 = *(TWeakObjectPtr<UObject,FWeakObjectPtr> **)(pcVar5 + 0x10);
      __return_storage_ptr__->ArrayNum = iVar3;
      if (pTVar7 == (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0) {
        pTVar7 = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)(pcVar5 + 8);
      }
      __return_storage_ptr__->DataPtr = pTVar7;
      if (-1 < iVar3) {
        return __return_storage_ptr__;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (!bVar2) {
        return __return_storage_ptr__;
      }
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_,int> *)(*pcVar1)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// SetBindingActivation @ 1461d1b10

void __thiscall
FMovieSceneObjectCache::SetBindingActivation
          (FMovieSceneObjectCache *this,FGuid *param_1,bool param_2)

{
  ulong64 uVar1;
  FGuid local_res18;
  
  if (param_2) {
    if (*(int *)&(this->InactiveBindingIds).Elements.field_0x8 !=
        *(int *)&(this->InactiveBindingIds).Elements.field_0x34) {
      uVar1 = CityHash64((char *)param_1,0x10);
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::RemoveImpl<FGuid>
                (&this->InactiveBindingIds,(uint)uVar1,param_1);
    }
  }
  else {
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
              (&this->InactiveBindingIds,&local_res18,(bool *)param_1);
  }
  InvalidateInternal(this,param_1);
  return;
}

// SetSequence @ 1461d2c70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FMovieSceneObjectCache::SetSequence
          (FMovieSceneObjectCache *this,UMovieSceneSequence *param_1,FMovieSceneSequenceID *param_2,
          IMovieScenePlayer *param_3)

{
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar1;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_18;
  
  pTVar1 = IMovieScenePlayer::GetSharedPlaybackState(param_3,&local_18);
  local_28.Object = pTVar1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SetSequence(this,param_1,param_2,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SetSequence @ 1461d2cf0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FMovieSceneObjectCache::SetSequence
          (FMovieSceneObjectCache *this,UMovieSceneSequence *param_1,FMovieSceneSequenceID *param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  bool bVar1;
  UMovieSceneSequence *local_res8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  
  bVar1 = TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>::UEOpEquals<UMovieSceneSequence,bool>
                    (&this->WeakSequence,param_1);
  if (!bVar1) {
    local_28.Object = param_3->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    Clear(this,&local_28);
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMovieSceneSequence *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakSequence).WeakPtr,(FObjectPtr)&local_res8);
  (this->SequenceID).Value = param_2->Value;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateBindings @ 1461de860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMovieSceneObjectCache::UpdateBindings
          (FMovieSceneObjectCache *this,FGuid *param_1,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_2)

{
  TMap<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>
  *this_00;
  ForElementType<UObject_*> FVar1;
  TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *this_01;
  bool bVar2;
  FSharedPlaybackState *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar5;
  ForElementType<UObject_*> FVar6;
  code *pcVar7;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *pTVar8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *pTVar9;
  FMovieSceneSequenceID *pFVar10;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *_Src;
  TSet<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FDefaultSetAllocator>
  *this_02;
  bool bVar11;
  char cVar12;
  FIdentityFunctor FVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  FBoundObjects *pFVar17;
  ulong64 uVar18;
  uint *puVar19;
  UObject *pUVar20;
  IMovieScenePlayer *pIVar21;
  UMovieScene *this_03;
  FMovieScenePossessable *pFVar22;
  TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar23;
  FFixedObjectBindingID *pFVar24;
  FBoundObjects *pFVar25;
  TWeakObjectPtr<UObject,FWeakObjectPtr> this_04;
  FText *pFVar26;
  IObjectBindingNotifyPlaybackCapability *pIVar27;
  longlong lVar28;
  FMovieSceneObjectCache *pFVar29;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar30;
  undefined8 *puVar31;
  ulonglong uVar32;
  FGuid *pFVar33;
  undefined8 *puVar34;
  FWeakObjectPtr *pFVar35;
  FGuid *pFVar36;
  ForElementType<UObject_*> FVar37;
  FSharedReferencer<1> *pFVar38;
  int *piVar39;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar40;
  FWeakObjectPtr *pFVar41;
  int *piVar42;
  FWeakObjectPtr *pFVar43;
  FGuid *pFVar44;
  undefined1 auStackY_3a8 [32];
  FIdentityFunctor local_356 [6];
  FGuid *local_350;
  undefined1 local_348;
  undefined1 local_347;
  undefined1 local_346;
  undefined1 local_345;
  undefined1 local_344;
  undefined1 local_343;
  undefined1 local_342 [2];
  FBoundObjects *local_340;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *local_338;
  FMovieSceneObjectCache *local_330;
  undefined1 local_328 [8];
  UObject *local_320;
  FMovieSceneSequenceID *local_318;
  FWeakObjectPtr local_310;
  FWeakObjectPtr local_308;
  FWeakObjectPtr local_300;
  FWeakObjectPtr local_2f8;
  uchar local_2f0 [8];
  ForElementType<UObject_*> local_2e8;
  byte local_2e0;
  byte local_2dc;
  FSharedReferencer<1> *local_2d8;
  UObject *local_2d0;
  FMovieScenePossessable *local_2c8;
  FString local_2c0;
  FWeakObjectPtr local_2b0;
  FWeakObjectPtr local_2a8;
  FWeakObjectPtr *local_2a0;
  IMovieScenePlayer *local_298;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_290;
  UObject *local_280;
  ForElementType<UObject_*> local_278;
  UObject *local_270;
  UObject *local_268;
  TSet<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FDefaultSetAllocator>
  *local_260;
  undefined1 local_258 [8];
  FWeakObjectPtr local_250;
  FText local_248;
  FMovieSceneObjectBindingID local_238;
  UObject *local_220;
  undefined8 local_218;
  undefined1 local_210;
  UObject *local_208;
  undefined8 local_200;
  undefined1 local_1f8;
  FPlaybackCapabilityPtr local_1f0;
  FPlaybackCapabilityPtr local_1e0;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_1d0;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_1c0;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_1b0;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_1a0;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_190;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_180;
  FSharedPlaybackState *local_170;
  TReferenceControllerBase<1> *local_168;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_160;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_150;
  FSharedPlaybackState *local_140;
  TReferenceControllerBase<1> *local_138;
  FPlaybackCapabilityPtr local_130;
  FPlaybackCapabilityPtr local_120;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> local_108;
  int iStack_100;
  undefined4 uStack_fc;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  uint local_d8;
  FString local_d0;
  FGuid local_c0;
  int iStack_b0;
  undefined4 uStack_ac;
  FFixedObjectBindingID local_a8;
  ForElementType<UObject_*> local_90;
  uint local_80;
  uint local_7c;
  ForElementType<UObject_*> local_78;
  uint local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 *local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  bVar2 = this->bReentrantUpdate;
  this->bReentrantUpdate = true;
  local_350 = param_1;
  local_338 = param_2;
  local_330 = this;
  pFVar17 = TMapBase<FGuid,FMovieSceneObjectCache::FBoundObjects,FDefaultSetAllocator,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>_>
            ::FindOrAddImpl<FGuid_const_&>
                      ((TMapBase<FGuid,FMovieSceneObjectCache::FBoundObjects,FDefaultSetAllocator,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>_>
                        *)&this->BoundObjects,param_1->C ^ param_1->A ^ param_1->D ^ param_1->B,
                       param_1);
  FVar30 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&pFVar17->Objects;
  (pFVar17->Objects).ArrayNum = 0;
  local_340 = pFVar17;
  if ((pFVar17->Objects).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
              (8,4,0,(ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> *)FVar30,0,
               &(pFVar17->Objects).ArrayMax);
  }
  this->SerialNumber = this->SerialNumber + 1;
  this_00 = &this->ChildBindings;
  local_260 = (TSet<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FDefaultSetAllocator>
               *)this_00;
  iVar14 = TSet<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FDefaultSetAllocator>
           ::FindIndexByHash<FGuid>
                     ((TSet<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FDefaultSetAllocator>
                       *)this_00,param_1->B ^ param_1->D ^ param_1->C ^ param_1->A,param_1);
  pFVar29 = local_330;
  if (iVar14 != -1) {
    lVar28 = (longlong)iVar14 * 0x68 + *(longlong *)&this_00->field_0x0;
    pFVar33 = (FGuid *)(lVar28 + 0x10);
    if (lVar28 == 0) {
      pFVar33 = (FGuid *)0x0;
    }
    param_1 = local_350;
    if (pFVar33 != (FGuid *)0x0) {
      piVar39 = (int *)(lVar28 + 0x58);
      if (*(FGuid **)(pFVar33 + 4) != (FGuid *)0x0) {
        pFVar33 = *(FGuid **)(pFVar33 + 4);
      }
      if (lVar28 == 0) {
        piVar39 = (int *)&DAT_00000048;
      }
      iVar14 = *piVar39;
      pFVar36 = pFVar33 + iVar14;
      while( true ) {
        if (*piVar39 != iVar14) {
          local_348 = 0;
          `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_348);
        }
        param_1 = local_350;
        this = local_330;
        param_2 = local_338;
        if (pFVar33 == pFVar36) break;
        InvalidateIfValidInternal(pFVar29,pFVar33);
        pFVar33 = pFVar33 + 1;
      }
    }
  }
  piVar39 = &(pFVar17->Objects).ArrayMax;
  local_320 = FWeakObjectPtr::Get(&(this->WeakSequence).WeakPtr);
  if (local_320 == (UObject *)0x0) goto LAB_1461dff5d;
  uVar18 = CityHash64((char *)param_1,0x10);
  iVar14 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                     (&this->InactiveBindingIds,(uint)uVar18,param_1);
  if (iVar14 != -1) goto LAB_1461dff5d;
  local_e8._0_4_ = param_1->A;
  local_e8._4_4_ = param_1->B;
  uStack_e0._0_4_ = param_1->C;
  uStack_e0._4_4_ = param_1->D;
  pFVar3 = param_2->Object;
  local_318 = &this->SequenceID;
  local_d8 = local_318->Value;
  bVar11 = IsInGameThread();
  if (!bVar11) {
    local_347 = bVar11;
    `UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>'::__l2::
    <lambda_1>::operator()(&local_347);
  }
  uVar32 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar32 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::StaticID = (TPlaybackCapabilityID<FMovieSceneEvaluationState>)
                 UE::MovieScene::FPlaybackCapabilityID::Register(L"FMovieSceneEvaluationState");
    _Init_thread_footer(&::_TSS0);
  }
  UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
            ((FPlaybackCapabilitiesImpl *)&pFVar3->Capabilities,&local_1f0,
             1 << (::StaticID._0_1_ & 0x1f));
  if (local_1f0.Ptr == (undefined8 *)0x0) {
LAB_1461deb0b:
    puVar34 = (undefined8 *)0x0;
  }
  else {
    puVar34 = local_1f0.Ptr;
    if (local_1f0.StorageMode != Inline) {
      if ((local_1f0.StorageMode != RawPointer) && (local_1f0.StorageMode != SharedPointer)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                            ,0x30,L"Unexpected playback capability storage mode");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        goto LAB_1461deb0b;
      }
      puVar34 = *(undefined8 **)local_1f0.Ptr;
    }
  }
  pFVar3 = param_2->Object;
  bVar11 = IsInGameThread();
  if (!bVar11) {
    local_346 = bVar11;
    `UE::MovieScene::FSharedPlaybackState::
    FindCapability<UE::MovieScene::IStaticBindingOverridesPlaybackCapability>'::__l2::<lambda_1>::
    operator()(&local_346);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar32 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::IStaticBindingOverridesPlaybackCapability>)
                 UE::MovieScene::FPlaybackCapabilityID::Register
                           (L"IStaticBindingOverridesPlaybackCapability");
    _Init_thread_footer(&::_TSS0);
  }
  UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
            ((FPlaybackCapabilitiesImpl *)&pFVar3->Capabilities,&local_1e0,
             1 << (::StaticID._0_1_ & 0x1f));
  if (local_1e0.Ptr == (longlong *)0x0) {
LAB_1461debde:
    pFVar38 = &local_338->SharedReferenceCount;
LAB_1461ded97:
    pTVar8 = local_338;
    cVar12 = local_320[2].field_0x19;
    local_2d8 = pFVar38;
    pUVar20 = FWeakObjectPtr::Get(&(local_338->Object->WeakPlaybackContext).WeakPtr);
    local_1c0.Object = pTVar8->Object;
    local_1c0.SharedReferenceCount.ReferenceController = pFVar38->ReferenceController;
    if (local_1c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2d0 = pUVar20;
    pIVar21 = UE::MovieScene::FPlayerIndexPlaybackCapability::GetPlayer(&local_1c0);
    local_298 = pIVar21;
    this_03 = (UMovieScene *)(**(code **)(*(longlong *)local_320 + 0x2f8))(local_320);
    pFVar22 = UMovieScene::FindPossessable(this_03,local_350);
    pFVar10 = local_318;
    pFVar29 = local_330;
    pTVar9 = local_338;
    local_2c8 = pFVar22;
    if (pFVar22 == (FMovieScenePossessable *)0x0) {
      pFVar3 = pTVar8->Object;
      bVar11 = IsInGameThread();
      if (!bVar11) {
        local_343 = bVar11;
        `UE::MovieScene::FSharedPlaybackState::FindCapability<IMovieScenePlaybackClient>'::__l2::
        <lambda_1>::operator()(&local_343);
      }
      IMovieScenePlaybackClient::GetPlaybackCapabilityID();
      UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
                ((FPlaybackCapabilitiesImpl *)&pFVar3->Capabilities,&local_130,
                 1 << (local_2e0 & 0x1f));
      if (local_130.Ptr != (longlong *)0x0) {
        if (local_130.StorageMode != Inline) {
          if ((local_130.StorageMode != RawPointer) && (local_130.StorageMode != SharedPointer)) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                                ,0x30,L"Unexpected playback capability storage mode");
            if (bVar11) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            goto LAB_1461dfa7f;
          }
          local_130.Ptr = *(void **)local_130.Ptr;
        }
        if (local_130.Ptr != (longlong *)0x0) {
          local_58 = (undefined8 *)0x0;
          local_50 = 0;
          local_4c = 1;
          cVar12 = (**(code **)(*(longlong *)local_130.Ptr + 0x10))
                             (local_130.Ptr,local_350,local_318->Value,&local_60);
          uVar15 = local_50;
          uVar32 = (ulonglong)(int)local_50;
          puVar34 = &local_60;
          if (local_58 != (undefined8 *)0x0) {
            puVar34 = local_58;
          }
          puVar31 = puVar34 + uVar32;
          while( true ) {
            if ((uint)uVar32 != uVar15) {
              local_342[0] = 0;
              `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_342);
            }
            if (puVar34 == puVar31) break;
            pUVar20 = (UObject *)*puVar34;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar20);
            }
            local_300.ObjectIndex = 0;
            local_300.ObjectSerialNumber = 0;
            local_270 = pUVar20;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar20);
            }
            FWeakObjectPtr::operator=(&local_300,(FObjectPtr)&local_270);
            FVar5 = (pFVar17->Objects).AllocatorInstance.SecondaryData;
            FVar40 = FVar30;
            if (FVar5 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
              FVar40 = FVar5;
            }
            if ((ulonglong)FVar40 <= &local_300) {
              FVar40 = FVar30;
              if (FVar5 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
                FVar40 = FVar5;
              }
              if ((&local_300 < (FWeakObjectPtr *)((longlong)FVar40 + (longlong)*piVar39 * 8)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            iVar14 = (pFVar17->Objects).ArrayNum;
            if (iVar14 == *piVar39) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                                 (0x408,(ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> *)
                                        FVar30,piVar39);
            }
            (pFVar17->Objects).ArrayNum = iVar14 + 1;
            FVar5 = (pFVar17->Objects).AllocatorInstance.SecondaryData;
            FVar40 = FVar30;
            if (FVar5 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
              FVar40 = FVar5;
            }
            puVar34 = puVar34 + 1;
            *(FWeakObjectPtr *)((longlong)FVar40 + (longlong)iVar14 * 8) = local_300;
            uVar32 = (ulonglong)local_50;
          }
          if (local_58 != (undefined8 *)0x0) {
            FMemory::Free(local_58);
          }
          pFVar25 = local_340;
          if (cVar12 == '\0') goto LAB_1461dfc50;
        }
      }
LAB_1461dfa7f:
      piVar42 = &(pFVar17->Objects).ArrayNum;
      pFVar3 = local_338->Object;
      FVar13 = (FIdentityFunctor)IsInGameThread();
      if (!(bool)FVar13) {
        local_356[0] = FVar13;
        `UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneSpawnRegister>'::__l2::
        <lambda_1>::operator()(local_356);
      }
      FMovieSceneSpawnRegister::GetPlaybackCapabilityID();
      UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
                ((FPlaybackCapabilitiesImpl *)&pFVar3->Capabilities,&local_120,
                 1 << (local_2dc & 0x1f));
      pFVar25 = local_340;
      if (local_120.Ptr != (FMovieSceneSpawnRegister *)0x0) {
        if (local_120.StorageMode != Inline) {
          if ((local_120.StorageMode != RawPointer) && (local_120.StorageMode != SharedPointer)) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                                ,0x30,L"Unexpected playback capability storage mode");
            pFVar25 = local_340;
            if (bVar11) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            goto LAB_1461dfc50;
          }
          local_120.Ptr = *(void **)local_120.Ptr;
        }
        if (local_120.Ptr != (FMovieSceneSpawnRegister *)0x0) {
          this_04 = FMovieSceneSpawnRegister::FindSpawnedObject
                              (local_120.Ptr,&local_c0,(FMovieSceneSequenceID *)local_350,
                               (int)local_318);
          pUVar20 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_04.WeakPtr);
          pFVar25 = local_340;
          if (pUVar20 != (UObject *)0x0) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar20);
            }
            local_2f8.ObjectIndex = 0;
            local_2f8.ObjectSerialNumber = 0;
            local_268 = pUVar20;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar20);
            }
            FWeakObjectPtr::operator=(&local_2f8,(FObjectPtr)&local_268);
            FVar5 = (pFVar17->Objects).AllocatorInstance.SecondaryData;
            FVar40 = FVar30;
            if (FVar5 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
              FVar40 = FVar5;
            }
            if ((ulonglong)FVar40 <= &local_2f8) {
              FVar40 = FVar30;
              if (FVar5 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
                FVar40 = FVar5;
              }
              if ((&local_2f8 < (FWeakObjectPtr *)((longlong)FVar40 + (longlong)*piVar39 * 8)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            iVar14 = *piVar42;
            if (iVar14 == *piVar39) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                                 (0x408,(ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> *)
                                        FVar30,piVar39);
            }
            *piVar42 = iVar14 + 1;
            FVar5 = (pFVar17->Objects).AllocatorInstance.SecondaryData;
            if (FVar5 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
              FVar30 = FVar5;
            }
            *(FWeakObjectPtr *)((longlong)FVar30 + (longlong)iVar14 * 8) = local_2f8;
            pFVar25 = local_340;
          }
        }
      }
    }
    else if ((((pFVar22->ParentGuid).C == 0 && (pFVar22->ParentGuid).D == 0) &&
             (pFVar22->ParentGuid).B == 0) && (pFVar22->ParentGuid).A == 0) {
      local_78.SecondaryData = (ForElementType<UObject_*>)0x0;
      local_68 = 0;
      local_64 = 1;
      if ((((pFVar22->SpawnableObjectBindingID).Guid.D == 0 &&
           (pFVar22->SpawnableObjectBindingID).Guid.C == 0) &&
          (pFVar22->SpawnableObjectBindingID).Guid.B == 0) &&
          (pFVar22->SpawnableObjectBindingID).Guid.A == 0) {
        local_218 = 0;
        local_210 = 0;
        local_220 = pUVar20;
        if (pIVar21 == (IMovieScenePlayer *)0x0) {
          pcVar7 = *(code **)(*(longlong *)local_320 + 0x2d0);
          local_140 = local_338->Object;
          local_138 = pFVar38->ReferenceController;
          if (local_138 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_138->SharedReferenceCount =
                 (atomic<int>)((int)local_138->SharedReferenceCount + 1);
            UNLOCK();
          }
          (*pcVar7)(local_320,local_350,&local_220,&local_140);
        }
        else {
          (**(code **)(pIVar21->_padding_ + 0x50))(pIVar21,&local_220,local_350,local_318->Value);
        }
      }
      else {
        local_f8.Object = local_338->Object;
        local_f8.SharedReferenceCount.ReferenceController = pFVar38->ReferenceController;
        if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar24 = FMovieSceneObjectBindingID::ResolveToFixed
                            (&pFVar22->SpawnableObjectBindingID,&local_a8,
                             (FMovieSceneSequenceID)local_318->Value,&local_f8);
        local_238.Guid.A = (pFVar24->Guid).A;
        local_238.Guid.B = (pFVar24->Guid).B;
        local_238.Guid.C = (pFVar24->Guid).C;
        local_238.Guid.D = (pFVar24->Guid).D;
        local_238.SequenceID = (pFVar24->SequenceID).Value;
        local_238.ResolveParentIndex = -1;
        uVar18 = CityHash64((char *)&local_238,0x10);
        pTVar23 = TMapBase<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                  ::FindOrAddImpl<FMovieSceneObjectBindingID_const_&>
                            ((TMapBase<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                              *)&local_330->ReverseMappedBindings,
                             (uint)uVar18 ^ local_238.SequenceID,&local_238);
        TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
        AddUniqueImpl<FGuid_const_&>(pTVar23,local_350);
        local_160.Object = pTVar9->Object;
        local_160.SharedReferenceCount.ReferenceController = pFVar38->ReferenceController;
        if (local_160.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_160.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_160.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FMovieSceneObjectBindingID::ResolveBoundObjects
                  (&pFVar22->SpawnableObjectBindingID,&local_150,
                   (FMovieSceneSequenceID)pFVar10->Value,&local_160);
        for (pFVar41 = &(local_150.DataPtr)->WeakPtr;
            pFVar41 != &local_150.DataPtr[local_150.ArrayNum].WeakPtr; pFVar41 = pFVar41 + 1) {
          local_2b0 = *pFVar41;
          bVar11 = FWeakObjectPtr::IsValid(&local_2b0);
          if (bVar11) {
            local_2e8 = (ForElementType<UObject_*>)FWeakObjectPtr::Get(&local_2b0);
            FVar37 = (ForElementType<UObject_*>)&local_78;
            if (local_78.SecondaryData != (ForElementType<UObject_*>)0x0) {
              FVar37 = local_78.SecondaryData;
            }
            if ((ulonglong)FVar37 <= &local_2e8) {
              FVar37 = (ForElementType<UObject_*>)&local_78;
              if (local_78.SecondaryData != (ForElementType<UObject_*>)0x0) {
                FVar37 = local_78.SecondaryData;
              }
              if ((&local_2e8 <
                   (ForElementType<UObject_*> *)((longlong)FVar37 + (longlong)(int)local_64 * 8)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            if (local_68 == local_64) {
              local_68 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                                   (0x808,&local_78,(int *)&local_64);
            }
            lVar28 = (longlong)(int)local_68;
            FVar37 = (ForElementType<UObject_*>)&local_78;
            if (local_78.SecondaryData != (ForElementType<UObject_*>)0x0) {
              FVar37 = local_78.SecondaryData;
            }
            local_68 = local_68 + 1;
            *(ForElementType<UObject_*> *)((longlong)FVar37 + lVar28 * 8) = local_2e8;
          }
        }
      }
      pFVar29 = local_330;
      iVar14 = TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
               ::FindIndexByHash<FGuid>
                         ((TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
                           *)&local_330->BoundObjects,
                          local_350->B ^ local_350->D ^ local_350->C ^ local_350->A,local_350);
      uVar15 = local_68;
      pFVar17 = (FBoundObjects *)0x0;
      if (iVar14 != -1) {
        pFVar17 = (FBoundObjects *)((longlong)iVar14 * 0x38 + *(longlong *)&pFVar29->BoundObjects);
      }
      uVar32 = (ulonglong)(int)local_68;
      pFVar25 = (FBoundObjects *)&(pFVar17->Objects).AllocatorInstance.SecondaryData;
      if (pFVar17 == (FBoundObjects *)0x0) {
        pFVar25 = (FBoundObjects *)0x0;
      }
      FVar37 = (ForElementType<UObject_*>)&local_78;
      if (local_78.SecondaryData != (ForElementType<UObject_*>)0x0) {
        FVar37 = local_78.SecondaryData;
      }
      FVar1 = (ForElementType<UObject_*>)((longlong)FVar37 + uVar32 * 8);
      local_340 = pFVar25;
      while( true ) {
        if ((uint)uVar32 != uVar15) {
          local_344 = 0;
          `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_344);
        }
        if (FVar37 == FVar1) break;
        FVar30 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&pFVar25->Objects;
        FVar6 = *(ForElementType<UObject_*> *)FVar37;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (FVar6 != (ForElementType<UObject_*>)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar6);
        }
        local_308.ObjectIndex = 0;
        local_308.ObjectSerialNumber = 0;
        local_278 = FVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (FVar6 != (ForElementType<UObject_*>)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar6);
        }
        FWeakObjectPtr::operator=(&local_308,(FObjectPtr)&local_278);
        FVar5 = (pFVar25->Objects).AllocatorInstance.SecondaryData;
        FVar40 = FVar30;
        if (FVar5 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
          FVar40 = FVar5;
        }
        if ((ulonglong)FVar40 <= &local_308) {
          FVar40 = FVar30;
          if (FVar5 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
            FVar40 = FVar5;
          }
          if ((&local_308 <
               (FWeakObjectPtr *)((longlong)FVar40 + (longlong)(pFVar25->Objects).ArrayMax * 8)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar14 = (pFVar25->Objects).ArrayNum;
        piVar39 = &(pFVar25->Objects).ArrayMax;
        if (iVar14 == *piVar39) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                             (0x408,(ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> *)
                                    FVar30,piVar39);
        }
        (pFVar25->Objects).ArrayNum = iVar14 + 1;
        FVar5 = (pFVar25->Objects).AllocatorInstance.SecondaryData;
        if (FVar5 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
          FVar30 = FVar5;
        }
        FVar37 = (ForElementType<UObject_*>)((longlong)FVar37 + 8);
        *(FWeakObjectPtr *)((longlong)FVar30 + (longlong)iVar14 * 8) = local_308;
        uVar32 = (ulonglong)local_68;
      }
      if (local_78.SecondaryData != (ForElementType<UObject_*>)0x0) {
        FMemory::Free((void *)local_78.SecondaryData);
      }
    }
    else {
      local_1b0.Object = local_338->Object;
      local_1b0.SharedReferenceCount.ReferenceController = pFVar38->ReferenceController;
      if (local_1b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FindBoundObjects(local_330,&local_1a0,&pFVar22->ParentGuid,&local_1b0);
      pTVar23 = TMapBase<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>
                ::FindOrAddImpl<FGuid_const_&>
                          ((TMapBase<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>
                            *)&pFVar29->ChildBindings,
                           (pFVar22->ParentGuid).B ^ (pFVar22->ParentGuid).A ^
                           (pFVar22->ParentGuid).D ^ (pFVar22->ParentGuid).C,&pFVar22->ParentGuid);
      pFVar33 = local_350;
      TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
      AddUniqueImpl<FGuid_const_&>(pTVar23,local_350);
      local_340 = TMapBase<FGuid,FMovieSceneObjectCache::FBoundObjects,FDefaultSetAllocator,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>_>
                  ::Find((TMapBase<FGuid,FMovieSceneObjectCache::FBoundObjects,FDefaultSetAllocator,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>_>
                          *)&pFVar29->BoundObjects,pFVar33);
      pFVar41 = &local_1a0.DataPtr[local_1a0.ArrayNum].WeakPtr;
      pFVar25 = local_340;
      pFVar43 = &(local_1a0.DataPtr)->WeakPtr;
      local_2a0 = pFVar41;
      if (&(local_1a0.DataPtr)->WeakPtr != pFVar41) {
        do {
          local_250 = *pFVar43;
          if ((cVar12 == '\0') ||
             (pUVar20 = FWeakObjectPtr::Get(&local_250), local_2d0 = pUVar20,
             pUVar20 != (UObject *)0x0)) {
            local_90.SecondaryData = (ForElementType<UObject_*>)0x0;
            local_80 = 0;
            local_7c = 1;
            if ((((pFVar22->SpawnableObjectBindingID).Guid.D == 0 &&
                 (pFVar22->SpawnableObjectBindingID).Guid.C == 0) &&
                (pFVar22->SpawnableObjectBindingID).Guid.B == 0) &&
                (pFVar22->SpawnableObjectBindingID).Guid.A == 0) {
              local_200 = 0;
              local_1f8 = 0;
              local_208 = pUVar20;
              if (pIVar21 == (IMovieScenePlayer *)0x0) {
                pcVar7 = *(code **)(*(longlong *)local_320 + 0x2d0);
                local_170 = local_338->Object;
                local_168 = pFVar38->ReferenceController;
                if (local_168 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_168->SharedReferenceCount =
                       (atomic<int>)((int)local_168->SharedReferenceCount + 1);
                  UNLOCK();
                }
                (*pcVar7)(local_320,pFVar33,&local_208,&local_170);
              }
              else {
                (**(code **)(pIVar21->_padding_ + 0x50))
                          (pIVar21,&local_208,pFVar33,local_318->Value);
              }
            }
            else {
              local_190.Object = local_338->Object;
              local_190.SharedReferenceCount.ReferenceController = pFVar38->ReferenceController;
              if (local_190.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_190.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_190.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              FMovieSceneObjectBindingID::ResolveBoundObjects
                        (&pFVar22->SpawnableObjectBindingID,&local_180,
                         (FMovieSceneSequenceID)local_318->Value,&local_190);
              pFVar41 = &local_180.DataPtr[local_180.ArrayNum].WeakPtr;
              pFVar33 = local_350;
              for (pFVar35 = &(local_180.DataPtr)->WeakPtr; local_350 = pFVar33, pFVar35 != pFVar41;
                  pFVar35 = pFVar35 + 1) {
                local_2a8 = *pFVar35;
                bVar11 = FWeakObjectPtr::IsValid(&local_2a8);
                if (bVar11) {
                  local_2f0 = (uchar  [8])FWeakObjectPtr::Get(&local_2a8);
                  FVar37 = (ForElementType<UObject_*>)&local_90;
                  if (local_90.SecondaryData != (ForElementType<UObject_*>)0x0) {
                    FVar37 = local_90.SecondaryData;
                  }
                  if ((ulonglong)FVar37 <= local_2f0) {
                    FVar37 = (ForElementType<UObject_*>)&local_90;
                    if (local_90.SecondaryData != (ForElementType<UObject_*>)0x0) {
                      FVar37 = local_90.SecondaryData;
                    }
                    if ((local_2f0 < (uchar *)((longlong)FVar37 + (longlong)(int)local_7c * 8)) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar11)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                  }
                  if (local_80 == local_7c) {
                    local_80 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                                         (0x808,&local_90,(int *)&local_7c);
                  }
                  lVar28 = (longlong)(int)local_80;
                  FVar37 = (ForElementType<UObject_*>)&local_90;
                  if (local_90.SecondaryData != (ForElementType<UObject_*>)0x0) {
                    FVar37 = local_90.SecondaryData;
                  }
                  local_80 = local_80 + 1;
                  *(uchar (*) [8])((longlong)FVar37 + lVar28 * 8) = local_2f0;
                }
                pFVar33 = local_350;
              }
            }
            pFVar29 = local_330;
            iVar14 = TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
                     ::FindIndexByHash<FGuid>
                               ((TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
                                 *)&local_330->BoundObjects,
                                pFVar33->B ^ pFVar33->D ^ pFVar33->C ^ pFVar33->A,pFVar33);
            uVar15 = local_80;
            if (iVar14 == -1) {
              lVar28 = 0;
            }
            else {
              lVar28 = (longlong)iVar14 * 0x38 + *(longlong *)&pFVar29->BoundObjects;
            }
            uVar32 = (ulonglong)(int)local_80;
            local_340 = (FBoundObjects *)(lVar28 + 0x10);
            if (lVar28 == 0) {
              local_340 = (FBoundObjects *)0x0;
            }
            FVar37 = (ForElementType<UObject_*>)&local_90;
            if (local_90.SecondaryData != (ForElementType<UObject_*>)0x0) {
              FVar37 = local_90.SecondaryData;
            }
            FVar1 = (ForElementType<UObject_*>)((longlong)FVar37 + uVar32 * 8);
            while( true ) {
              pFVar17 = local_340;
              if ((uint)uVar32 != uVar15) {
                local_345 = 0;
                `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_345);
              }
              pFVar41 = local_2a0;
              if (FVar37 == FVar1) break;
              FVar30 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&pFVar17->Objects;
              pUVar20 = *(UObject **)FVar37;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar20 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar20);
              }
              local_310.ObjectIndex = 0;
              local_310.ObjectSerialNumber = 0;
              local_280 = pUVar20;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar20 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar20);
              }
              FWeakObjectPtr::operator=(&local_310,(FObjectPtr)&local_280);
              FVar5 = (pFVar17->Objects).AllocatorInstance.SecondaryData;
              FVar40 = FVar30;
              if (FVar5 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
                FVar40 = FVar5;
              }
              if ((ulonglong)FVar40 <= &local_310) {
                FVar40 = FVar30;
                if (FVar5 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
                  FVar40 = FVar5;
                }
                if ((&local_310 <
                     (FWeakObjectPtr *)
                     ((longlong)FVar40 + (longlong)(pFVar17->Objects).ArrayMax * 8)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              iVar14 = (pFVar17->Objects).ArrayNum;
              piVar39 = &(pFVar17->Objects).ArrayMax;
              if (iVar14 == *piVar39) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                                   (0x408,(ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> *
                                          )FVar30,piVar39);
              }
              (pFVar17->Objects).ArrayNum = iVar14 + 1;
              FVar5 = (pFVar17->Objects).AllocatorInstance.SecondaryData;
              if (FVar5 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
                FVar30 = FVar5;
              }
              FVar37 = (ForElementType<UObject_*>)((longlong)FVar37 + 8);
              *(FWeakObjectPtr *)((longlong)FVar30 + (longlong)iVar14 * 8) = local_310;
              uVar32 = (ulonglong)local_80;
            }
            pFVar33 = local_350;
            pFVar38 = local_2d8;
            pIVar21 = local_298;
            pFVar22 = local_2c8;
            if (local_90.SecondaryData != (ForElementType<UObject_*>)0x0) {
              FMemory::Free((void *)local_90.SecondaryData);
              pFVar33 = local_350;
              pFVar38 = local_2d8;
              pIVar21 = local_298;
              pFVar22 = local_2c8;
            }
          }
          pFVar43 = pFVar43 + 1;
          pFVar25 = local_340;
          pUVar20 = local_2d0;
        } while (pFVar43 != pFVar41);
      }
    }
  }
  else {
    if (local_1e0.StorageMode != Inline) {
      if ((local_1e0.StorageMode != RawPointer) && (local_1e0.StorageMode != SharedPointer)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                            ,0x30,L"Unexpected playback capability storage mode");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        goto LAB_1461debde;
      }
      local_1e0.Ptr = *(void **)local_1e0.Ptr;
    }
    if (local_1e0.Ptr == (longlong *)0x0) goto LAB_1461debde;
    pFVar33 = (FGuid *)(**(code **)(*(longlong *)local_1e0.Ptr + 8))(local_1e0.Ptr,&local_e8);
    pFVar38 = &local_338->SharedReferenceCount;
    if (pFVar33 == (FGuid *)0x0) goto LAB_1461ded97;
    pTVar4 = pFVar38->ReferenceController;
    pFVar3 = local_338->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2d8 = pFVar38;
    if (*(int *)(puVar34 + 0x16) != *(int *)((longlong)puVar34 + 0xdc)) {
      puVar31 = (undefined8 *)puVar34[0x1d];
      if ((undefined8 *)puVar34[0x1d] == (undefined8 *)0x0) {
        puVar31 = puVar34 + 0x1c;
      }
      uVar15 = *(uint *)((longlong)puVar31 +
                        (ulonglong)(*(int *)(puVar34 + 0x1e) - 1U & pFVar33[1].A) * 4);
      if (uVar15 != 0xffffffff) {
        do {
          puVar19 = (uint *)((longlong)(int)uVar15 * 0x198 + puVar34[0x15]);
          if (*puVar19 == pFVar33[1].A) {
            pFVar29 = (FMovieSceneObjectCache *)(puVar19 + 2);
            if (puVar19 == (uint *)0x0) {
              pFVar29 = (FMovieSceneObjectCache *)0x0;
            }
            if (pFVar29 != (FMovieSceneObjectCache *)0x0) {
              if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_1d0.Object = pFVar3;
              local_1d0.SharedReferenceCount.ReferenceController = pTVar4;
              FindBoundObjects(pFVar29,&local_290,pFVar33,&local_1d0);
              goto LAB_1461decb9;
            }
            break;
          }
          uVar15 = puVar19[100];
        } while (uVar15 != 0xffffffff);
      }
    }
    local_290.DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0;
    local_290.ArrayNum = 0;
LAB_1461decb9:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    iVar14 = local_290.ArrayNum;
    _Src = local_290.DataPtr;
    lVar28 = (longlong)local_290.ArrayNum;
    if (((local_290.DataPtr == (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0) &&
        (local_290.ArrayNum != 0)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ptr != nullptr || Count == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x9c1,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar16 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                       (8,4,iVar14,(ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> *)FVar30
                        ,&(pFVar17->Objects).ArrayNum,piVar39);
    FVar5 = (pFVar17->Objects).AllocatorInstance.SecondaryData;
    if (FVar5 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
      FVar30 = FVar5;
    }
    pFVar25 = local_340;
    if (iVar14 != 0) {
      memcpy((void *)((longlong)FVar30 + (longlong)iVar16 * 8),_Src,lVar28 << 3);
      pFVar25 = local_340;
    }
  }
LAB_1461dfc50:
  iVar14 = (pFVar25->Objects).ArrayNum;
  this_01 = &pFVar25->Objects;
  if (iVar14 < 2) {
    this = local_330;
    param_2 = local_338;
    if (iVar14 < 1) goto LAB_1461dff5d;
  }
  else {
    FVar30 = (pFVar25->Objects).AllocatorInstance.SecondaryData;
    if (FVar30 == (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
      FVar30 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)this_01;
    }
    AlgoImpl::
    IntroSortInternal<TWeakObjectPtr<UObject,FWeakObjectPtr>,int,FIdentityFunctor,_FMovieSceneObjectCache::UpdateBindings_::__l98::<lambda_1>_>
              ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)FVar30,iVar14,local_356[0],
               (<lambda_1>)local_356[0]);
    FVar30 = (pFVar25->Objects).AllocatorInstance.SecondaryData;
    iVar16 = (pFVar25->Objects).ArrayNum;
    if (FVar30 == (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
      FVar30 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)this_01;
    }
    if (1 < iVar16) {
      FVar40 = FVar30;
      FVar5 = FVar30;
      while (FVar5 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)((longlong)FVar5 + 8),
            FVar5 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)
                     ((longlong)FVar30 + (longlong)iVar16 * 8)) {
        bVar11 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                           ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)FVar40,
                            (TWeakObjectPtr<UObject,FWeakObjectPtr> *)FVar5);
        if ((!bVar11) &&
           (FVar40 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)((longlong)FVar40 + 8)
           , FVar40 != FVar5)) {
          *(FWeakObjectPtr *)FVar40 = *(FWeakObjectPtr *)FVar5;
        }
      }
      iVar16 = (int)(((longlong)FVar40 - (longlong)FVar30) + 8 >> 3);
    }
    pUVar20 = local_320;
    if (iVar16 < iVar14) {
      (**(code **)(*(longlong *)local_320 + 0x2f8))(local_320);
      pFVar26 = FText::GetEmpty();
      local_248.TextData.Reference = (pFVar26->TextData).Reference;
      if (local_248.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_248.TextData.Reference + 8))
                  (local_248.TextData.Reference,local_258);
      }
      local_248.Flags = pFVar26->Flags;
      if (2 < (byte)LogMovieScene._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar20,&local_d0,(UObject *)0x0);
        local_2c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2c0.Data.ArrayNum = 0;
        local_2c0.Data.ArrayMax = 0;
        FGuid::AppendString(local_350,&local_2c0,Digits);
        FText::ToString(&local_248);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
        }
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
      }
      TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::SetNum(this_01,iVar16,Default);
      if (local_248.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
      }
    }
  }
  pFVar25->bUpToDate = true;
  pIVar27 = UE::MovieScene::FSharedPlaybackState::
            FindCapability<UE::MovieScene::IObjectBindingNotifyPlaybackCapability>
                      (local_338->Object);
  if (pIVar27 != (IObjectBindingNotifyPlaybackCapability *)0x0) {
    iVar14 = (pFVar25->Objects).ArrayNum;
    pcVar7 = *(code **)((longlong)*pIVar27 + 8);
    local_108 = (pFVar25->Objects).AllocatorInstance.SecondaryData;
    if (local_108 == (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
      local_108 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)this_01;
    }
    if ((iVar14 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_c0.C = local_108._0_4_;
    local_c0.D = local_108._4_4_;
    uStack_ac = uStack_fc;
    iStack_100 = iVar14;
    iStack_b0 = iVar14;
    (*pcVar7)(pIVar27,local_350,local_318,&local_c0.C);
  }
  this_02 = local_260;
  pFVar33 = local_350;
  iVar14 = TSet<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FDefaultSetAllocator>
           ::FindIndexByHash<FGuid>
                     (local_260,local_350->B ^ local_350->D ^ local_350->C ^ local_350->A,local_350)
  ;
  if (iVar14 != -1) {
    lVar28 = (longlong)iVar14 * 0x68 + *(longlong *)&this_02->Elements;
    pFVar36 = (FGuid *)(lVar28 + 0x10);
    if (lVar28 == 0) {
      pFVar36 = (FGuid *)0x0;
    }
    pFVar33 = local_350;
    if (pFVar36 != (FGuid *)0x0) {
      piVar39 = (int *)(lVar28 + 0x58);
      if (*(FGuid **)(pFVar36 + 4) != (FGuid *)0x0) {
        pFVar36 = *(FGuid **)(pFVar36 + 4);
      }
      if (lVar28 == 0) {
        piVar39 = (int *)&DAT_00000048;
      }
      iVar14 = *piVar39;
      pFVar44 = pFVar36 + iVar14;
      while( true ) {
        if (*piVar39 != iVar14) {
          `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_328);
        }
        pFVar33 = local_350;
        if (pFVar36 == pFVar44) break;
        InvalidateIfValidInternal(local_330,pFVar36);
        pFVar36 = pFVar36 + 1;
      }
    }
  }
  this = local_330;
  param_2 = local_338;
  if (*(int *)&(this_02->Elements).field_0x8 != *(int *)&(this_02->Elements).field_0x34) {
    TSet<TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,FDefaultSetAllocator>
    ::RemoveImpl<FGuid>(this_02,pFVar33->B ^ pFVar33->D ^ pFVar33->C ^ pFVar33->A,pFVar33);
    this = local_330;
    param_2 = local_338;
  }
LAB_1461dff5d:
  this->bReentrantUpdate = bVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateSerialNumber @ 1461e0e70

void __thiscall FMovieSceneObjectCache::UpdateSerialNumber(FMovieSceneObjectCache *this)

{
  this->SerialNumber = this->SerialNumber + 1;
  return;
}

