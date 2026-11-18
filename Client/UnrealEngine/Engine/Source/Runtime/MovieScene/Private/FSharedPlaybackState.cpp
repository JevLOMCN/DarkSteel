// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 43

// FindCapability<FMovieSceneSpawnRegister> @ 146056fc0

FMovieSceneSpawnRegister * __thiscall
UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneSpawnRegister>
          (FSharedPlaybackState *this)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  FMovieSceneSpawnRegister *pFVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  byte local_res10;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    local_res8[0] = bVar5;
    `UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneSpawnRegister>'::__l2::
    <lambda_1>::operator()(local_res8);
  }
  FMovieSceneSpawnRegister::GetPlaybackCapabilityID();
  uVar2 = *(uint *)&(this->Capabilities).field_0x10;
  uVar6 = 1 << (local_res10 & 0x1f);
  if ((uVar6 & uVar2) != 0) {
    uVar2 = uVar6 - 1 & uVar2;
    uVar8 = (ulonglong)uVar2 - ((ulonglong)(uVar2 >> 1) & 0x5555555555555555);
    uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
    uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    bVar4 = (byte)(uVar8 >> 0x38);
    if (bVar4 == 0xff) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < 255",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0xfd,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMovieSceneSpawnRegister *)(*pcVar3)();
        return pFVar7;
      }
    }
    if ((byte)(this->Capabilities).field_0xc <= bVar4) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Num",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x21b,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMovieSceneSpawnRegister *)(*pcVar3)();
        return pFVar7;
      }
    }
    lVar10 = (uVar8 >> 0x38) * 0x10 + *(longlong *)&this->Capabilities;
    if (*(ushort *)(lVar10 + 8) == 0xffff) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(longlong *)&this->Capabilities + (ulonglong)*(ushort *)(lVar10 + 8);
    }
    pFVar7 = (FMovieSceneSpawnRegister *)((ulonglong)*(byte *)(lVar10 + 0xd) + lVar9);
    if (pFVar7 != (FMovieSceneSpawnRegister *)0x0) {
      cVar1 = *(char *)(lVar10 + 0xe);
      if (cVar1 == '\0') {
        return pFVar7;
      }
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        return (FMovieSceneSpawnRegister *)pFVar7->_padding_;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x30,L"Unexpected playback capability storage mode");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMovieSceneSpawnRegister *)(*pcVar3)();
        return pFVar7;
      }
    }
  }
  return (FMovieSceneSpawnRegister *)0x0;
}

// FindCapability<FMovieSceneEvaluationState> @ 146075df0

FMovieSceneEvaluationState * __thiscall
UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>
          (FSharedPlaybackState *this)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  FMovieSceneEvaluationState *pFVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  byte local_res10;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    local_res8[0] = bVar5;
    `UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>'::__l2::
    <lambda_1>::operator()(local_res8);
  }
  FMovieSceneEvaluationState::GetPlaybackCapabilityID();
  uVar2 = *(uint *)&(this->Capabilities).field_0x10;
  uVar6 = 1 << (local_res10 & 0x1f);
  if ((uVar6 & uVar2) != 0) {
    uVar2 = uVar6 - 1 & uVar2;
    uVar8 = (ulonglong)uVar2 - ((ulonglong)(uVar2 >> 1) & 0x5555555555555555);
    uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
    uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    bVar4 = (byte)(uVar8 >> 0x38);
    if (bVar4 == 0xff) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < 255",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0xfd,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMovieSceneEvaluationState *)(*pcVar3)();
        return pFVar7;
      }
    }
    if ((byte)(this->Capabilities).field_0xc <= bVar4) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Num",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x21b,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMovieSceneEvaluationState *)(*pcVar3)();
        return pFVar7;
      }
    }
    lVar10 = (uVar8 >> 0x38) * 0x10 + *(longlong *)&this->Capabilities;
    if (*(ushort *)(lVar10 + 8) == 0xffff) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(longlong *)&this->Capabilities + (ulonglong)*(ushort *)(lVar10 + 8);
    }
    pFVar7 = (FMovieSceneEvaluationState *)((ulonglong)*(byte *)(lVar10 + 0xd) + lVar9);
    if (pFVar7 != (FMovieSceneEvaluationState *)0x0) {
      cVar1 = *(char *)(lVar10 + 0xe);
      if (cVar1 == '\0') {
        return pFVar7;
      }
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        return (FMovieSceneEvaluationState *)pFVar7->_padding_;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x30,L"Unexpected playback capability storage mode");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMovieSceneEvaluationState *)(*pcVar3)();
        return pFVar7;
      }
    }
  }
  return (FMovieSceneEvaluationState *)0x0;
}

// SetOrAddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short> @ 146117620

FPlayerIndexPlaybackCapability * __thiscall
UE::MovieScene::FSharedPlaybackState::
SetOrAddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>
          (FSharedPlaybackState *this,ushort *param_1)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FPlayerIndexPlaybackCapability *pFVar7;
  longlong lVar8;
  ulonglong uVar9;
  FPlaybackCapabilities *this_00;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  uint local_res20;
  byte local_28;
  byte local_24;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    local_res8[0] = bVar5;
    `UE::MovieScene::FSharedPlaybackState::
    SetOrAddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>'::__l2::
    <lambda_1>::operator()(local_res8);
  }
  bVar5 = IsInGameThread();
  if (!bVar5) {
    local_res18[0] = bVar5;
    `UE::MovieScene::FSharedPlaybackState::
    HasCapability<UE::MovieScene::FPlayerIndexPlaybackCapability>'::__l2::<lambda_1>::operator()
              (local_res18);
  }
  FPlayerIndexPlaybackCapability::GetPlaybackCapabilityID();
  this_00 = &this->Capabilities;
  if ((*(uint *)&(this->Capabilities).field_0x10 >> (local_res20 & 0x1f) & 1) != 0) {
    FPlayerIndexPlaybackCapability::GetPlaybackCapabilityID();
    FPlaybackCapabilitiesImpl::
    OverwriteCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>
              ((FPlaybackCapabilitiesImpl *)this_00,1 << (local_28 & 0x1f),param_1);
    FPlayerIndexPlaybackCapability::GetPlaybackCapabilityID();
    uVar6 = FPlaybackCapabilitiesImpl::GetCapabilityIndex
                      ((FPlaybackCapabilitiesImpl *)this_00,1 << (local_24 & 0x1f));
    if (0xfe < uVar6) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < 255",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x107,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FPlayerIndexPlaybackCapability *)(*pcVar4)();
        return pFVar7;
      }
    }
    if ((byte)(this->Capabilities).field_0xc <= (byte)uVar6) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Num",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x21b,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FPlayerIndexPlaybackCapability *)(*pcVar4)();
        return pFVar7;
      }
    }
    lVar3 = *(longlong *)&this_00->field_0x0;
    uVar9 = (ulonglong)(uVar6 & 0xff);
    uVar2 = *(ushort *)(lVar3 + 8 + uVar9 * 0x10);
    if (uVar2 == 0xffff) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar3 + (ulonglong)uVar2;
    }
    cVar1 = *(char *)(lVar3 + 0xe + uVar9 * 0x10);
    pFVar7 = (FPlayerIndexPlaybackCapability *)
             ((ulonglong)*(byte *)(lVar3 + 0xd + uVar9 * 0x10) + lVar8);
    if (pFVar7 == (FPlayerIndexPlaybackCapability *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x3a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FPlayerIndexPlaybackCapability *)(*pcVar4)();
        return pFVar7;
      }
    }
    if (cVar1 != '\0') {
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        pFVar7 = *(FPlayerIndexPlaybackCapability **)pFVar7;
      }
      else {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x44,L"Unexpected playback capability storage mode");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FPlayerIndexPlaybackCapability *)(*pcVar4)();
          return pFVar7;
        }
      }
    }
    return pFVar7;
  }
  pFVar7 = FPlaybackCapabilities::
           AddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>
                     (this_00,param_1);
  return pFVar7;
}

// FSharedPlaybackState @ 14611a430

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FSharedPlaybackState * __thiscall
UE::MovieScene::FSharedPlaybackState::FSharedPlaybackState
          (FSharedPlaybackState *this,UMovieSceneSequence *param_1,
          FSharedPlaybackStateCreateParams *param_2)

{
  TObjectPtr<UMovieSceneEntitySystemLinker>_u_0 TVar1;
  UMovieSceneCompiledDataManager *pUVar2;
  FMovieSceneCompiledDataID FVar3;
  undefined4 extraout_var;
  TObjectPtr<UMovieSceneEntitySystemLinker>_u_0 local_res8;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMovieSceneSequence *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  (this->WeakRootSequence).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = (TObjectPtr<UMovieSceneEntitySystemLinker>_u_0)param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMovieSceneSequence *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakRootSequence).WeakPtr,(FObjectPtr)&local_res8);
  TVar1 = (TObjectPtr<UMovieSceneEntitySystemLinker>_u_0)param_2->PlaybackContext;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (TVar1.DebugPtr != (UMovieSceneEntitySystemLinker *)0x0)) {
    GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
  }
  (this->WeakPlaybackContext).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = TVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (TVar1.DebugPtr != (UMovieSceneEntitySystemLinker *)0x0)) {
    GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
  }
  FWeakObjectPtr::operator=(&(this->WeakPlaybackContext).WeakPtr,(FObjectPtr)&local_res8);
  TVar1 = (TObjectPtr<UMovieSceneEntitySystemLinker>_u_0)(param_2->Linker).field0_0x0.DebugPtr;
  if (GC::GIsIncrementalReachabilityPending != false) {
    if (TVar1.DebugPtr != (UMovieSceneEntitySystemLinker *)0x0) {
      GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UMovieSceneEntitySystemLinker *)0x0)) {
      GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
  }
  (this->WeakLinker).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = TVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (TVar1.DebugPtr != (UMovieSceneEntitySystemLinker *)0x0)) {
    GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
  }
  FWeakObjectPtr::operator=(&(this->WeakLinker).WeakPtr,(FObjectPtr)&local_res8);
  pUVar2 = param_2->CompiledDataManager;
  (this->CompiledDataManager).field0_0x0.DebugPtr = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UMovieSceneCompiledDataManager *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->RootInstanceHandle = param_2->RootInstanceHandle;
  (this->RootCompiledDataID).Value = -1;
  *(undefined8 *)&this->Capabilities = 0;
  *(undefined4 *)&(this->Capabilities).field_0x8 = 0;
  (this->Capabilities).field_0xc = 0;
  *(undefined4 *)&(this->Capabilities).field_0x10 = 0;
  *(undefined8 *)&(this->Capabilities).field_0x18 = 0;
  *(undefined8 *)&(this->Capabilities).field_0x20 = 0;
  FMovieSceneInstancePreAnimatedState::FMovieSceneInstancePreAnimatedState
            (&this->PreAnimatedState,(param_2->Linker).field0_0x0.DebugPtr,
             param_2->RootInstanceHandle);
  pUVar2 = (this->CompiledDataManager).field0_0x0.DebugPtr;
  this->bDebugBreakOnDestroy = false;
  if (pUVar2 != (UMovieSceneCompiledDataManager *)0x0) {
    FVar3 = UMovieSceneCompiledDataManager::GetDataID
                      (pUVar2,(UMovieSceneSequence *)&local_res8.ObjectPtr);
    (this->RootCompiledDataID).Value = *(int *)CONCAT44(extraout_var,FVar3.Value);
  }
  return this;
}

// FSharedPlaybackState @ 14611a5e0

/* WARNING: Enum "Type": Some values do not have unique names */

FSharedPlaybackState * __thiscall
UE::MovieScene::FSharedPlaybackState::FSharedPlaybackState
          (FSharedPlaybackState *this,UMovieSceneEntitySystemLinker *param_1)

{
  UMovieSceneEntitySystemLinker *local_res8;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->WeakRootSequence).WeakPtr = (FWeakObjectPtr)0x0;
  (this->WeakPlaybackContext).WeakPtr = (FWeakObjectPtr)0x0;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMovieSceneEntitySystemLinker *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  (this->WeakLinker).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMovieSceneEntitySystemLinker *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakLinker).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = (UMovieSceneEntitySystemLinker *)CONCAT44(local_res8._4_4_,0xffff);
  (this->CompiledDataManager).field0_0x0.DebugPtr = (UMovieSceneCompiledDataManager *)0x0;
  this->RootInstanceHandle = (FRootInstanceHandle)0xffff;
  (this->RootCompiledDataID).Value = -1;
  *(undefined8 *)&this->Capabilities = 0;
  *(undefined4 *)&(this->Capabilities).field_0x8 = 0;
  (this->Capabilities).field_0xc = 0;
  *(undefined4 *)&(this->Capabilities).field_0x10 = 0;
  *(undefined8 *)&(this->Capabilities).field_0x18 = 0;
  *(undefined8 *)&(this->Capabilities).field_0x20 = 0;
  FMovieSceneInstancePreAnimatedState::FMovieSceneInstancePreAnimatedState
            (&this->PreAnimatedState,param_1,(FRootInstanceHandle)0xffff);
  this->bDebugBreakOnDestroy = false;
  return this;
}

// ~FSharedPlaybackState @ 14611e490

void __thiscall
UE::MovieScene::FSharedPlaybackState::~FSharedPlaybackState(FSharedPlaybackState *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 local_res8 [32];
  
  if (this->bDebugBreakOnDestroy != false) {
    `UE::MovieScene::FSharedPlaybackState::~FSharedPlaybackState'::__l5::<lambda_1>::operator()
              (local_res8);
  }
  FMovieSceneInstancePreAnimatedState::~FMovieSceneInstancePreAnimatedState(&this->PreAnimatedState)
  ;
  FPlaybackCapabilities::~FPlaybackCapabilities(&this->Capabilities);
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014611e4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ClearObjectCaches @ 146127230

void __thiscall UE::MovieScene::FSharedPlaybackState::ClearObjectCaches(FSharedPlaybackState *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FSharedPlaybackState *pFVar2;
  FMovieSceneEvaluationState *this_00;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar3;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_18;
  
  this_00 = FindCapability<FMovieSceneEvaluationState>(this);
  if (this_00 != (FMovieSceneEvaluationState *)0x0) {
    pTVar3 = TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1>::AsShared
                       ((TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1> *)this,&local_18);
    pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar3->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.Object = pFVar2;
    local_28.SharedReferenceCount.ReferenceController = pTVar1;
    FMovieSceneEvaluationState::ClearObjectCaches(this_00,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// FindBoundObjects @ 146130ea0

TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> * __thiscall
UE::MovieScene::FSharedPlaybackState::FindBoundObjects
          (FSharedPlaybackState *this,
          TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *__return_storage_ptr__,
          FGuid *param_1,FMovieSceneSequenceID *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  FMovieSceneEvaluationState *pFVar3;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *pTVar4;
  uint *puVar5;
  FMovieSceneObjectCache *this_00;
  undefined1 *puVar6;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  
  pFVar3 = FindCapability<FMovieSceneEvaluationState>(this);
  if (pFVar3 == (FMovieSceneEvaluationState *)0x0) {
    __return_storage_ptr__->DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    pTVar4 = TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1>::AsShared
                       ((TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1> *)this,&local_28);
    pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
    local_28.Object = pTVar4->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if (*(int *)&(pFVar3->ObjectCaches).field_0x8 != *(int *)&(pFVar3->ObjectCaches).field_0x34) {
      puVar6 = *(undefined1 **)&(pFVar3->ObjectCaches).field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(pFVar3->ObjectCaches).field_0x38;
      }
      uVar2 = *(uint *)(puVar6 + (ulonglong)
                                 (*(int *)&(pFVar3->ObjectCaches).field_0x48 - 1U & param_2->Value)
                                 * 4);
      if (uVar2 != 0xffffffff) {
        do {
          puVar5 = (uint *)((longlong)(int)uVar2 * 0x198 + *(longlong *)&pFVar3->ObjectCaches);
          if (*puVar5 == param_2->Value) {
            this_00 = (FMovieSceneObjectCache *)(puVar5 + 2);
            if (puVar5 == (uint *)0x0) {
              this_00 = (FMovieSceneObjectCache *)0x0;
            }
            if (this_00 != (FMovieSceneObjectCache *)0x0) {
              if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_28.SharedReferenceCount.ReferenceController = pTVar1;
              FMovieSceneObjectCache::FindBoundObjects
                        (this_00,__return_storage_ptr__,param_1,&local_28);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar1);
              return __return_storage_ptr__;
            }
            break;
          }
          uVar2 = puVar5[100];
        } while (uVar2 != 0xffffffff);
      }
    }
    __return_storage_ptr__->DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return __return_storage_ptr__;
}

// GetHierarchy @ 14613b640

FMovieSceneSequenceHierarchy * __thiscall
UE::MovieScene::FSharedPlaybackState::GetHierarchy(FSharedPlaybackState *this)

{
  FMovieSceneCompiledDataID FVar1;
  UMovieSceneCompiledDataManager *this_00;
  FMovieSceneSequenceHierarchy *pFVar2;
  
  this_00 = (this->CompiledDataManager).field0_0x0.DebugPtr;
  if ((this_00 != (UMovieSceneCompiledDataManager *)0x0) &&
     (FVar1.Value = (this->RootCompiledDataID).Value, FVar1.Value != -1)) {
    pFVar2 = UMovieSceneCompiledDataManager::FindHierarchy(this_00,FVar1);
    return pFVar2;
  }
  return (FMovieSceneSequenceHierarchy *)0x0;
}

// GetRunner @ 14613c9c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FMovieSceneEntitySystemRunner,1> * __thiscall
UE::MovieScene::FSharedPlaybackState::GetRunner
          (FSharedPlaybackState *this,
          TSharedPtr<FMovieSceneEntitySystemRunner,1> *__return_storage_ptr__)

{
  FMovieSceneEntitySystemRunner *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> *pTVar6;
  
  pUVar5 = FWeakObjectPtr::Get(&(this->WeakLinker).WeakPtr);
  if (pUVar5 == (UObject *)0x0) {
    __return_storage_ptr__->Object = (FMovieSceneEntitySystemRunner *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if (*(longlong *)&pUVar5[0x26].field_0x20 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FMovieSceneEntitySystemRunner,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar1 = *(FMovieSceneEntitySystemRunner **)&pUVar5[0x26].field_0x20;
  pTVar2 = *(TReferenceControllerBase<1> **)(pUVar5 + 0x27);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar1 == (FMovieSceneEntitySystemRunner *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FMovieSceneEntitySystemRunner,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->Object = pFVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetSequence @ 14613cb40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneSequence * __thiscall
UE::MovieScene::FSharedPlaybackState::GetSequence
          (FSharedPlaybackState *this,FMovieSceneSequenceID *param_1)

{
  FMovieSceneCompiledDataID FVar1;
  UMovieSceneCompiledDataManager *this_00;
  UMovieSceneSequence *pUVar2;
  FMovieSceneSequenceHierarchy *this_01;
  FMovieSceneSubSequenceData *this_02;
  
  if (param_1->Value == 0) {
    pUVar2 = (UMovieSceneSequence *)FWeakObjectPtr::Get(&(this->WeakRootSequence).WeakPtr);
    return pUVar2;
  }
  this_00 = (this->CompiledDataManager).field0_0x0.DebugPtr;
  if ((this_00 != (UMovieSceneCompiledDataManager *)0x0) &&
     (FVar1.Value = (this->RootCompiledDataID).Value, FVar1.Value != -1)) {
    this_01 = UMovieSceneCompiledDataManager::FindHierarchy(this_00,FVar1);
    if (this_01 != (FMovieSceneSequenceHierarchy *)0x0) {
      this_02 = FMovieSceneSequenceHierarchy::FindSubData(this_01,param_1);
      if (this_02 != (FMovieSceneSubSequenceData *)0x0) {
        pUVar2 = FMovieSceneSubSequenceData::GetSequence(this_02);
        return pUVar2;
      }
    }
  }
  return (UMovieSceneSequence *)0x0;
}

// InvalidateCachedData @ 146140a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSharedPlaybackState::InvalidateCachedData(FSharedPlaybackState *this)

{
  UMovieSceneEntitySystemLinker *pUVar1;
  
  pUVar1 = (UMovieSceneEntitySystemLinker *)FWeakObjectPtr::Get(&(this->WeakLinker).WeakPtr);
  FPlaybackCapabilities::InvalidateCachedData(&this->Capabilities,pUVar1);
  return;
}

// FindCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability> @ 14616fed0

FSequenceDirectorPlaybackCapability * __thiscall
UE::MovieScene::FSharedPlaybackState::
FindCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability>(FSharedPlaybackState *this)

{
  code *pcVar1;
  bool bVar2;
  FSequenceDirectorPlaybackCapability *pFVar3;
  undefined1 local_res8 [32];
  FPlaybackCapabilityPtr local_18;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    local_res8[0] = bVar2;
    `UE::MovieScene::FSharedPlaybackState::
    FindCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability>'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::FSequenceDirectorPlaybackCapability>)
                   FPlaybackCapabilityID::Register(L"FSequenceDirectorPlaybackCapability");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FPlaybackCapabilitiesImpl::FindCapability
            ((FPlaybackCapabilitiesImpl *)&this->Capabilities,&local_18,
             1 << (::StaticID._0_1_ & 0x1f));
  if (local_18.Ptr != (FSequenceDirectorPlaybackCapability *)0x0) {
    if (local_18.StorageMode == Inline) {
      return local_18.Ptr;
    }
    if ((local_18.StorageMode == RawPointer) || (local_18.StorageMode == SharedPointer)) {
      return *(FSequenceDirectorPlaybackCapability **)local_18.Ptr;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                       ,0x30,L"Unexpected playback capability storage mode");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSequenceDirectorPlaybackCapability *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FSequenceDirectorPlaybackCapability *)0x0;
}

// FindCapability<UE::MovieScene::IObjectBindingNotifyPlaybackCapability> @ 14616ffd0

IObjectBindingNotifyPlaybackCapability * __thiscall
UE::MovieScene::FSharedPlaybackState::
FindCapability<UE::MovieScene::IObjectBindingNotifyPlaybackCapability>(FSharedPlaybackState *this)

{
  code *pcVar1;
  bool bVar2;
  IObjectBindingNotifyPlaybackCapability *pIVar3;
  undefined1 local_res8 [32];
  FPlaybackCapabilityPtr local_18;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    local_res8[0] = bVar2;
    `UE::MovieScene::FSharedPlaybackState::
    FindCapability<UE::MovieScene::IObjectBindingNotifyPlaybackCapability>'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::IObjectBindingNotifyPlaybackCapability>)
                   FPlaybackCapabilityID::Register(L"IObjectBindingNotifyPlaybackCapability");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FPlaybackCapabilitiesImpl::FindCapability
            ((FPlaybackCapabilitiesImpl *)&this->Capabilities,&local_18,
             1 << (::StaticID._0_1_ & 0x1f));
  if (local_18.Ptr != (IObjectBindingNotifyPlaybackCapability *)0x0) {
    if (local_18.StorageMode == Inline) {
      return local_18.Ptr;
    }
    if ((local_18.StorageMode == RawPointer) || (local_18.StorageMode == SharedPointer)) {
      return (IObjectBindingNotifyPlaybackCapability *)
             *(IObjectBindingNotifyPlaybackCapability *)local_18.Ptr;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                       ,0x30,L"Unexpected playback capability storage mode");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IObjectBindingNotifyPlaybackCapability *)(*pcVar1)();
      return pIVar3;
    }
  }
  return (IObjectBindingNotifyPlaybackCapability *)0x0;
}

// FindCapability<UE::MovieScene::FPlayerIndexPlaybackCapability> @ 1461f4600

FPlayerIndexPlaybackCapability * __thiscall
UE::MovieScene::FSharedPlaybackState::FindCapability<UE::MovieScene::FPlayerIndexPlaybackCapability>
          (FSharedPlaybackState *this)

{
  code *pcVar1;
  bool bVar2;
  FPlayerIndexPlaybackCapability *pFVar3;
  undefined1 local_res8 [32];
  FPlaybackCapabilityPtr local_18;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    local_res8[0] = bVar2;
    `UE::MovieScene::FSharedPlaybackState::
    FindCapability<UE::MovieScene::FPlayerIndexPlaybackCapability>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::FPlayerIndexPlaybackCapability>)
                   FPlaybackCapabilityID::Register(L"FPlayerIndexPlaybackCapability");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FPlaybackCapabilitiesImpl::FindCapability
            ((FPlaybackCapabilitiesImpl *)&this->Capabilities,&local_18,
             1 << (::StaticID._0_1_ & 0x1f));
  if (local_18.Ptr != (FPlayerIndexPlaybackCapability *)0x0) {
    if (local_18.StorageMode == Inline) {
      return local_18.Ptr;
    }
    if ((local_18.StorageMode == RawPointer) || (local_18.StorageMode == SharedPointer)) {
      return *(FPlayerIndexPlaybackCapability **)local_18.Ptr;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                       ,0x30,L"Unexpected playback capability storage mode");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPlayerIndexPlaybackCapability *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FPlayerIndexPlaybackCapability *)0x0;
}

// MaybeInitialize<FMovieSceneEvaluationState> @ 1461fa890

void __thiscall
UE::MovieScene::FSharedPlaybackState::MaybeInitialize<FMovieSceneEvaluationState>
          (FSharedPlaybackState *this,FMovieSceneEvaluationState *param_1)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedPlaybackState *pFVar3;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar4;
  FSharedPlaybackState *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_18;
  
  pcVar1 = *(code **)(param_1->_padding_ + 8);
  pTVar4 = TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1>::AsShared
                     ((TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1> *)this,&local_18);
  pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
  pFVar3 = pTVar4->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pFVar3;
  local_20 = pTVar2;
  (*pcVar1)(param_1,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// SetOrAddCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability> @ 1461fbbd0

FEventTriggerControlPlaybackCapability * __thiscall
UE::MovieScene::FSharedPlaybackState::
SetOrAddCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability>
          (FSharedPlaybackState *this)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FEventTriggerControlPlaybackCapability *pFVar7;
  longlong lVar8;
  ulonglong uVar9;
  FPlaybackCapabilities *this_00;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  byte local_res20;
  byte local_38;
  byte local_34;
  FPlaybackCapabilityPtr local_30 [2];
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    local_res8[0] = bVar5;
    `UE::MovieScene::FSharedPlaybackState::
    SetOrAddCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability>'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  bVar5 = IsInGameThread();
  if (!bVar5) {
    local_res10[0] = bVar5;
    `UE::MovieScene::FSharedPlaybackState::
    HasCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability>'::__l2::<lambda_1>::
    operator()(local_res10);
  }
  FEventTriggerControlPlaybackCapability::GetPlaybackCapabilityID();
  this_00 = &this->Capabilities;
  if ((*(uint *)&(this->Capabilities).field_0x10 >> (local_res18 & 0x1f) & 1) == 0) {
    FEventTriggerControlPlaybackCapability::GetPlaybackCapabilityID();
    FPlaybackCapabilitiesImpl::
    AddCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability,UE::MovieScene::FEventTriggerControlPlaybackCapability>
              ((FPlaybackCapabilitiesImpl *)this_00,local_30,1 << (local_34 & 0x1f));
    if ((local_30[0].Ptr == (FEventTriggerControlPlaybackCapability *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x3a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FEventTriggerControlPlaybackCapability *)(*pcVar4)();
      return pFVar7;
    }
    if (local_30[0].StorageMode == Inline) {
      return local_30[0].Ptr;
    }
    if ((local_30[0].StorageMode != RawPointer) && (local_30[0].StorageMode != SharedPointer)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x44,L"Unexpected playback capability storage mode");
      if (!bVar5) {
        return local_30[0].Ptr;
      }
      pcVar4 = (code *)swi(3);
      pFVar7 = (FEventTriggerControlPlaybackCapability *)(*pcVar4)();
      return pFVar7;
    }
  }
  else {
    FEventTriggerControlPlaybackCapability::GetPlaybackCapabilityID();
    FPlaybackCapabilitiesImpl::
    OverwriteCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability,UE::MovieScene::FEventTriggerControlPlaybackCapability>
              ((FPlaybackCapabilitiesImpl *)this_00,1 << (local_res20 & 0x1f));
    FEventTriggerControlPlaybackCapability::GetPlaybackCapabilityID();
    uVar6 = FPlaybackCapabilitiesImpl::GetCapabilityIndex
                      ((FPlaybackCapabilitiesImpl *)this_00,1 << (local_38 & 0x1f));
    if ((0xfe < uVar6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < 255",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x107,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FEventTriggerControlPlaybackCapability *)(*pcVar4)();
      return pFVar7;
    }
    if (((byte)(this->Capabilities).field_0xc <= (byte)uVar6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < Num",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x21b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FEventTriggerControlPlaybackCapability *)(*pcVar4)();
      return pFVar7;
    }
    lVar3 = *(longlong *)&this_00->field_0x0;
    uVar9 = (ulonglong)(uVar6 & 0xff);
    uVar2 = *(ushort *)(lVar3 + 8 + uVar9 * 0x10);
    if (uVar2 == 0xffff) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar3 + (ulonglong)uVar2;
    }
    cVar1 = *(char *)(lVar3 + 0xe + uVar9 * 0x10);
    pFVar7 = (FEventTriggerControlPlaybackCapability *)
             ((ulonglong)*(byte *)(lVar3 + 0xd + uVar9 * 0x10) + lVar8);
    if ((pFVar7 == (FEventTriggerControlPlaybackCapability *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x3a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FEventTriggerControlPlaybackCapability *)(*pcVar4)();
      return pFVar7;
    }
    if (cVar1 == '\0') {
      return pFVar7;
    }
    local_30[0].Ptr = pFVar7;
    if ((cVar1 != '\x01') && (cVar1 != '\x02')) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x44,L"Unexpected playback capability storage mode");
      if (!bVar5) {
        return pFVar7;
      }
      pcVar4 = (code *)swi(3);
      pFVar7 = (FEventTriggerControlPlaybackCapability *)(*pcVar4)();
      return pFVar7;
    }
  }
  return (FEventTriggerControlPlaybackCapability *)
         (((FEventTriggerControlPlaybackCapability *)local_30[0].Ptr)->DisableEventTriggersUntilTime
         ).TypedValue;
}

// operator() @ 1504e1cc0

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneSpawnRegister>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220256>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220256>,
                       &`public:___cdecl_`public:_class_FMovieSceneSpawnRegister*___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneSpawnRegister>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e1e00

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>'::__l2::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220256>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220256>,
                       &`public:___cdecl_`public:_struct_FMovieSceneEvaluationState*___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e3060

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::
AddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220243>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220243>,
                       &`public:___cdecl_`public:_struct_UE::MovieScene::FPlayerIndexPlaybackCapability&___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::AddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>(unsigned_short&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e30a0

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::
FindCapability<UE::MovieScene::ILegacyPlayerProviderPlaybackCapability>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220256>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220256>,
                       &`public:___cdecl_`public:_struct_UE::MovieScene::ILegacyPlayerProviderPlaybackCapability*___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::FindCapability<UE::MovieScene::ILegacyPlayerProviderPlaybackCapability>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e30e0

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::
FindCapability<UE::MovieScene::IStaticBindingOverridesPlaybackCapability>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220256>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220256>,
                       &`public:___cdecl_`public:_struct_UE::MovieScene::IStaticBindingOverridesPlaybackCapability*___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::FindCapability<UE::MovieScene::IStaticBindingOverridesPlaybackCapability>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e3120

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::FindCapability<IMovieScenePlaybackClient>'::__l2::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220256>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220256>,
                       &`public:___cdecl_`public:_class_IMovieScenePlaybackClient*___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::FindCapability<IMovieScenePlaybackClient>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e3160

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::
HasCapability<UE::MovieScene::FPlayerIndexPlaybackCapability>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220269>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220269>,
                       &`public:___cdecl_`public:_bool___cdecl_UE::MovieScene::FSharedPlaybackState::HasCapability<UE::MovieScene::FPlayerIndexPlaybackCapability>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e31a0

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::
SetOrAddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>'::__l2::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220193>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220193>,
                       &`public:___cdecl_`public:_struct_UE::MovieScene::FPlayerIndexPlaybackCapability&___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::SetOrAddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>(unsigned_short&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e3d60

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::GetCapabilities'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220294>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220294>,
                       &`public:___cdecl_`public:_struct_UE::MovieScene::FPlaybackCapabilities&___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::GetCapabilities(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e40f0

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::~FSharedPlaybackState'::__l5::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6453349036966543321>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6453349036966543321>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e4d20

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::
FindCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220256>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220256>,
                       &`public:___cdecl_`public:_struct_UE::MovieScene::FSequenceDirectorPlaybackCapability*___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::FindCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e4d60

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::
FindCapability<UE::MovieScene::IObjectBindingNotifyPlaybackCapability>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220256>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220256>,
                       &`public:___cdecl_`public:_struct_UE::MovieScene::IObjectBindingNotifyPlaybackCapability*___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::FindCapability<UE::MovieScene::IObjectBindingNotifyPlaybackCapability>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e4da0

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::HasCapability<IMovieScenePlaybackClient>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220269>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220269>,
                       &`public:___cdecl_`public:_bool___cdecl_UE::MovieScene::FSharedPlaybackState::HasCapability<IMovieScenePlaybackClient>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e6570

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::
AddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short_&>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220243>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220243>,
                       &`public:___cdecl_`public:_struct_UE::MovieScene::FPlayerIndexPlaybackCapability&___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::AddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short&___ptr64>(unsigned_short&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e65b0

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::
AddCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220243>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220243>,
                       &`public:___cdecl_`public:_struct_UE::MovieScene::FSequenceDirectorPlaybackCapability&___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::AddCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability>(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e65f0

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::AddCapabilityRaw<FMovieSceneEvaluationState>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220228>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220228>,
                       &`public:___cdecl_`public:_struct_FMovieSceneEvaluationState&___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::AddCapabilityRaw<FMovieSceneEvaluationState>(FMovieSceneEvaluationState*___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e6630

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::AddCapabilityRaw<UE::MovieScene::FStaticBindingOverrides>'::
__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220228>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220228>,
                       &`public:___cdecl_`public:_struct_UE::MovieScene::FStaticBindingOverrides&___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::AddCapabilityRaw<UE::MovieScene::FStaticBindingOverrides>(UE::MovieScene::FStaticBindingOverrides*___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e6670

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::
AddCapabilityRaw<UE::MovieScene::IObjectBindingNotifyPlaybackCapability>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220228>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220228>,
                       &`public:___cdecl_`public:_struct_UE::MovieScene::IObjectBindingNotifyPlaybackCapability&___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::AddCapabilityRaw<UE::MovieScene::IObjectBindingNotifyPlaybackCapability>(UE::MovieScene::IObjectBindingNotifyPlaybackCapability*___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e66b0

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::AddCapabilityRaw<FMovieSceneSpawnRegister>'::__l2::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220228>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220228>,
                       &`public:___cdecl_`public:_class_FMovieSceneSpawnRegister&___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::AddCapabilityRaw<FMovieSceneSpawnRegister>(FMovieSceneSpawnRegister*___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e66f0

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::AddCapabilityRaw<IMovieScenePlaybackClient>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220228>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220228>,
                       &`public:___cdecl_`public:_class_IMovieScenePlaybackClient&___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::AddCapabilityRaw<IMovieScenePlaybackClient>(IMovieScenePlaybackClient*___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e6730

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::AddCapabilityShared<FMovieSceneEvaluationState>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220213>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220213>,
                       &`public:___cdecl_`public:_struct_FMovieSceneEvaluationState&___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::AddCapabilityShared<FMovieSceneEvaluationState>(TSharedRef<FMovieSceneEvaluationState,1>)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e6770

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::
FindCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220256>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220256>,
                       &`public:___cdecl_`public:_struct_UE::MovieScene::FEventTriggerControlPlaybackCapability*___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::FindCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e67b0

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::
FindCapability<UE::MovieScene::FPlayerIndexPlaybackCapability>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220256>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220256>,
                       &`public:___cdecl_`public:_struct_UE::MovieScene::FPlayerIndexPlaybackCapability*___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::FindCapability<UE::MovieScene::FPlayerIndexPlaybackCapability>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e67f0

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::
FindCapability<UE::MovieScene::IEventContextsPlaybackCapability>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220256>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220256>,
                       &`public:___cdecl_`public:_struct_UE::MovieScene::IEventContextsPlaybackCapability*___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::FindCapability<UE::MovieScene::IEventContextsPlaybackCapability>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e6830

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::
HasCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220269>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220269>,
                       &`public:___cdecl_`public:_bool___cdecl_UE::MovieScene::FSharedPlaybackState::HasCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e6870

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::
SetOrAddCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220193>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220193>,
                       &`public:___cdecl_`public:_struct_UE::MovieScene::FEventTriggerControlPlaybackCapability&___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::SetOrAddCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability>(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

