// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// GetOrCreateDirectorInstance @ 1461b1cb0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UObject * __thiscall
UE::MovieScene::FSequenceDirectorPlaybackCapability::GetOrCreateDirectorInstance
          (FSequenceDirectorPlaybackCapability *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          FMovieSceneSequenceID *param_2)

{
  TUniquePtr<UE::MovieScene::FSequenceDirectorPlaybackCapability::FDirectorInstanceCache,TDefaultDelete<UE::MovieScene::FSequenceDirectorPlaybackCapability::FDirectorInstanceCache>_>
  *pTVar1;
  uint uVar2;
  FDirectorInstanceCache *pFVar3;
  bool bVar4;
  TObjectPtr<UObject>_u_0 TVar5;
  undefined8 *puVar6;
  TObjectPtr<UObject> *pTVar7;
  FWeakObjectPtr *pFVar8;
  UMovieSceneSequence *pUVar9;
  FMovieSceneSequenceHierarchy *this_00;
  FMovieSceneSubSequenceData *this_01;
  UObject *pUVar10;
  FSharedPlaybackState **ppFVar11;
  TObjectPtr<UObject>_u_0 TVar12;
  code *pcVar13;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  TObjectPtr<UObject>_u_0 local_68;
  TObjectPtr<UObject>_u_0 local_60;
  TObjectPtr<UObject>_u_0 local_58;
  FSharedPlaybackState *local_50;
  TReferenceControllerBase<1> *local_48;
  FSharedPlaybackState *local_40;
  TReferenceControllerBase<1> *local_38;
  
  if ((this->bUseStrongCache != false) &&
     (pTVar1 = &this->Cache, (this->Cache).Ptr == (FDirectorInstanceCache *)0x0)) {
    TVar5.DebugPtr = ::operator_new(0x20);
    TVar12.DebugPtr = (UObject *)0x0;
    if (TVar5.DebugPtr != (UObject *)0x0) {
      *(undefined8 *)TVar5.DebugPtr = 0;
      *(undefined8 *)&(TVar5.DebugPtr)->field_0x8 = 0;
      *(undefined8 *)&(TVar5.DebugPtr)->field_0x10 = 0;
      *(undefined8 *)&(TVar5.DebugPtr)->field_0x18 = 0;
      *(undefined ***)TVar5.DebugPtr = &___7FGCObject__6B_;
      FGCObject::RegisterGCObject((FGCObject *)TVar5.DebugPtr);
      *(undefined ***)TVar5.DebugPtr =
           &___7FDirectorInstanceCache_FSequenceDirectorPlaybackCapability_MovieScene_UE__6B_;
      *(undefined8 *)&(TVar5.DebugPtr)->field_0x10 = 0;
      *(undefined8 *)&(TVar5.DebugPtr)->field_0x18 = 0;
      TVar12.DebugPtr = TVar5.DebugPtr;
    }
    if ((TObjectPtr<UObject>_u_0 *)pTVar1 == &local_58) {
      if (TVar12.DebugPtr != (UObject *)0x0) {
        puVar6 = *(undefined8 **)TVar12.DebugPtr;
        goto LAB_1461b1d4d;
      }
    }
    else {
      TVar5.DebugPtr = (UObject *)pTVar1->Ptr;
      pTVar1->Ptr = (FDirectorInstanceCache *)TVar12;
      if (TVar5.DebugPtr != (UObject *)0x0) {
        puVar6 = *(undefined8 **)TVar5.DebugPtr;
        TVar12.DebugPtr = TVar5.DebugPtr;
LAB_1461b1d4d:
        (*(code *)*puVar6)(TVar12.DebugPtr,1);
      }
    }
  }
  if (this->bUseStrongCache == false) {
    pFVar8 = &TSortedMap<FMovieSceneSequenceID,TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
              ::Find(&this->WeakCache,param_2)->WeakPtr;
    if (pFVar8 == (FWeakObjectPtr *)0x0) {
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
    }
    else {
      local_res8 = *pFVar8;
    }
    TVar12.DebugPtr = FWeakObjectPtr::Get(&local_res8);
LAB_1461b1dca:
    if (TVar12.DebugPtr != (UObject *)0x0) goto LAB_1461b1f37;
  }
  else {
    pTVar7 = TSortedMap<FMovieSceneSequenceID,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
             ::Find(&((this->Cache).Ptr)->DirectorInstances,param_2);
    if (pTVar7 == (TObjectPtr<UObject> *)0x0) {
      TVar12.DebugPtr = (UObject *)0x0;
      goto LAB_1461b1dca;
    }
    TVar12.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar7->field0_0x0).DebugPtr;
    if (GC::GIsIncrementalReachabilityPending == false) goto LAB_1461b1dca;
    if (TVar12.DebugPtr != (UObject *)0x0) {
      GC::MarkAsReachable(TVar12.DebugPtr);
      goto LAB_1461b1dca;
    }
  }
  TVar12.DebugPtr = (UObject *)0x0;
  if (param_2->Value == 0) {
    pUVar9 = (UMovieSceneSequence *)
             FWeakObjectPtr::Get(&(param_1->Object->WeakRootSequence).WeakPtr);
    TVar12.DebugPtr = (UObject *)0x0;
    if (pUVar9 == (UMovieSceneSequence *)0x0) goto LAB_1461b1f37;
    uVar2 = param_2->Value;
    pcVar13 = *(code **)(pUVar9->_padding_ + 0x358);
    local_50 = param_1->Object;
    local_48 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_48 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_48->SharedReferenceCount = (atomic<int>)((int)local_48->SharedReferenceCount + 1);
      UNLOCK();
    }
    ppFVar11 = &local_50;
  }
  else {
    this_00 = FSharedPlaybackState::GetHierarchy(param_1->Object);
    if (this_00 == (FMovieSceneSequenceHierarchy *)0x0) goto LAB_1461b1f37;
    this_01 = FMovieSceneSequenceHierarchy::FindSubData(this_00,param_2);
    if ((this_01 == (FMovieSceneSubSequenceData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("SubData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\SequenceDirectorPlaybackCapability.cpp"
                           ,0x4f,L""), bVar4)) {
      pcVar13 = (code *)swi(3);
      pUVar10 = (UObject *)(*pcVar13)();
      return pUVar10;
    }
    pUVar9 = FMovieSceneSubSequenceData::GetSequence(this_01);
    uVar2 = param_2->Value;
    pcVar13 = *(code **)(pUVar9->_padding_ + 0x358);
    local_40 = param_1->Object;
    local_38 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_38 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_38->SharedReferenceCount = (atomic<int>)((int)local_38->SharedReferenceCount + 1);
      UNLOCK();
    }
    ppFVar11 = &local_40;
  }
  TVar12.DebugPtr = (UObject *)(*pcVar13)(pUVar9,ppFVar11,uVar2);
  if (TVar12.DebugPtr != (UObject *)0x0) {
    if (this->bUseStrongCache == false) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(TVar12.DebugPtr);
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_60.DebugPtr = TVar12.DebugPtr;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(TVar12.DebugPtr);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_60);
      TSortedMap<FMovieSceneSequenceID,TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
      ::Emplace<FMovieSceneSequenceID_const_&,TWeakObjectPtr<UObject,FWeakObjectPtr>_>
                (&this->WeakCache,param_2,(TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res20);
    }
    else {
      pFVar3 = (this->Cache).Ptr;
      local_68.DebugPtr = TVar12.DebugPtr;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(TVar12.DebugPtr);
      }
      TSortedMap<FMovieSceneSequenceID,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
      ::Emplace<FMovieSceneSequenceID_const_&,TObjectPtr<UObject>_>
                (&pFVar3->DirectorInstances,param_2,(TObjectPtr<UObject> *)&local_68.ObjectPtr);
    }
  }
LAB_1461b1f37:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return TVar12.DebugPtr;
}

// GetPlaybackCapabilityID @ 1461b2820

TPlaybackCapabilityID<UE::MovieScene::FSequenceDirectorPlaybackCapability> __cdecl
UE::MovieScene::FSequenceDirectorPlaybackCapability::GetPlaybackCapabilityID(void)

{
  TPlaybackCapabilityID<UE::MovieScene::FSequenceDirectorPlaybackCapability> *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::FSequenceDirectorPlaybackCapability>)
                   FPlaybackCapabilityID::Register(L"FSequenceDirectorPlaybackCapability");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *in_RCX = ::StaticID;
  return SUB84(in_RCX,0);
}

// InvalidateCachedData @ 1461ba4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceDirectorPlaybackCapability::InvalidateCachedData
          (FSequenceDirectorPlaybackCapability *this,UMovieSceneEntitySystemLinker *param_1)

{
  int iVar1;
  FDirectorInstanceCache *pFVar2;
  
  pFVar2 = (this->Cache).Ptr;
  if (pFVar2 != (FDirectorInstanceCache *)0x0) {
    iVar1 = (pFVar2->DirectorInstances).Pairs.ArrayMax;
    (pFVar2->DirectorInstances).Pairs.ArrayNum = 0;
    if (iVar1 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&pFVar2->DirectorInstances,0,
                 &(pFVar2->DirectorInstances).Pairs.ArrayMax);
    }
  }
  iVar1 = (this->WeakCache).Pairs.ArrayMax;
  (this->WeakCache).Pairs.ArrayNum = 0;
  if (iVar1 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&this->WeakCache,0,&(this->WeakCache).Pairs.ArrayMax);
  }
  return;
}

// ResetDirectorInstances @ 1461cd800

void __thiscall
UE::MovieScene::FSequenceDirectorPlaybackCapability::ResetDirectorInstances
          (FSequenceDirectorPlaybackCapability *this)

{
  int iVar1;
  FDirectorInstanceCache *pFVar2;
  
  pFVar2 = (this->Cache).Ptr;
  if (pFVar2 != (FDirectorInstanceCache *)0x0) {
    iVar1 = (pFVar2->DirectorInstances).Pairs.ArrayMax;
    (pFVar2->DirectorInstances).Pairs.ArrayNum = 0;
    if (iVar1 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&pFVar2->DirectorInstances,0,
                 &(pFVar2->DirectorInstances).Pairs.ArrayMax);
    }
  }
  iVar1 = (this->WeakCache).Pairs.ArrayMax;
  (this->WeakCache).Pairs.ArrayNum = 0;
  if (iVar1 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&this->WeakCache,0,&(this->WeakCache).Pairs.ArrayMax);
  }
  return;
}

