// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 15

// ContainsAnyStateForSequence @ 1461994b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieScenePreAnimatedState::ContainsAnyStateForSequence(FMovieScenePreAnimatedState *this)

{
  bool bVar1;
  FMovieSceneInstancePreAnimatedState *this_00;
  UObject *pUVar2;
  
  this_00 = GetState(this);
  if (this_00 != (FMovieSceneInstancePreAnimatedState *)0x0) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    if ((pUVar2 != (UObject *)0x0) && (*(short *)&this_00->InstanceHandle != -1)) {
      bVar1 = UE::MovieScene::FPreAnimatedStateExtension::ContainsAnyStateForInstanceHandle
                        ((FPreAnimatedStateExtension *)&pUVar2[0x1c].field_0x8,
                         this_00->InstanceHandle);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// DiscardAndRemoveEntityTokensForObject @ 14619f0b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieScenePreAnimatedState::DiscardAndRemoveEntityTokensForObject
          (FMovieScenePreAnimatedState *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneInstancePreAnimatedState *this_00;
  UObject *pUVar3;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle> *pTVar4;
  FWeakObjectPtr local_res18;
  FObjectKey local_res20;
  UObject *local_38;
  TSharedPtr<UE::MovieScene::FPreAnimatedObjectGroupManager,1> local_30;
  
  this_00 = GetState(this);
  if (this_00 != (FMovieSceneInstancePreAnimatedState *)0x0) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    if (pUVar3 != (UObject *)0x0) {
      UE::MovieScene::FPreAnimatedStateExtension::
      FindGroupManager<UE::MovieScene::FPreAnimatedObjectGroupManager>
                ((FPreAnimatedStateExtension *)&pUVar3[0x1c].field_0x8,&local_30);
      if (local_30.Object != (FPreAnimatedObjectGroupManager *)0x0) {
        if (local_30.Object == (FPreAnimatedObjectGroupManager *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        if (param_1 != (UObject *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(param_1);
          }
          local_res18.ObjectIndex = 0;
          local_res18.ObjectSerialNumber = 0;
          local_38 = param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(param_1);
          }
          FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_38);
          local_res20.ObjectIndex = local_res18.ObjectIndex;
          local_res20.ObjectSerialNumber = local_res18.ObjectSerialNumber;
        }
        pTVar4 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
                         *)&(local_30.Object)->field_0x18,&local_res20);
        if ((pTVar4 != (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle> *)0x0) &&
           (*(int *)&pTVar4->field_0x8 != -1)) {
          UE::MovieScene::FPreAnimatedStateExtension::DiscardStateForGroup
                    ((FPreAnimatedStateExtension *)&pUVar3[0x1c].field_0x8,
                     (FPreAnimatedStorageGroupHandle)*(int *)&pTVar4->field_0x8);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_30.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// DiscardEntityTokens @ 14619f210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMovieScenePreAnimatedState::DiscardEntityTokens(FMovieScenePreAnimatedState *this)

{
  FMovieSceneInstancePreAnimatedState *this_00;
  UObject *pUVar1;
  
  this_00 = GetState(this);
  if (this_00 != (FMovieSceneInstancePreAnimatedState *)0x0) {
    pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    if (pUVar1 != (UObject *)0x0) {
      UE::MovieScene::FPreAnimatedStateExtension::DiscardTransientState
                ((FPreAnimatedStateExtension *)&pUVar1[0x1c].field_0x8);
      return;
    }
  }
  return;
}

// DiscardPreAnimatedState @ 14619f580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieScenePreAnimatedState::DiscardPreAnimatedState(FMovieScenePreAnimatedState *this)

{
  FMovieSceneInstancePreAnimatedState *this_00;
  FRestoreStateParams local_18;
  
  this_00 = GetState(this);
  if (this_00 != (FMovieSceneInstancePreAnimatedState *)0x0) {
    local_18.Linker =
         (UMovieSceneEntitySystemLinker *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    if (local_18.Linker != (UMovieSceneEntitySystemLinker *)0x0) {
      local_18.TerminalInstanceHandle = *(FInstanceHandle *)&this_00->InstanceHandle;
      UE::MovieScene::FPreAnimatedStateExtension::DiscardGlobalState
                (&(local_18.Linker)->PreAnimatedState,&local_18);
    }
  }
  return;
}

// EnableGlobalPreAnimatedStateCapture @ 1461a1340

void __thiscall
FMovieScenePreAnimatedState::EnableGlobalPreAnimatedStateCapture(FMovieScenePreAnimatedState *this)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneInstancePreAnimatedState *this_00;
  UObject *pUVar3;
  
  this_00 = GetState(this);
  if ((this_00 != (FMovieSceneInstancePreAnimatedState *)0x0) &&
     (this_00->bCapturingGlobalPreAnimatedState == false)) {
    this_00->bCapturingGlobalPreAnimatedState = true;
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    if (pUVar3 == (UObject *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5420070606668300233>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieScenePreAnimatedState.cpp"
                         ,0x37,"Linker");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      *(int *)&pUVar3[0x1c].field_0x8 = *(int *)&pUVar3[0x1c].field_0x8 + 1;
    }
  }
  return;
}

// GetLinker @ 1461b1390

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntitySystemLinker * __thiscall
FMovieScenePreAnimatedState::GetLinker(FMovieScenePreAnimatedState *this)

{
  int iVar1;
  FUObjectItem *pFVar2;
  
  if (((this->WeakLinker).WeakPtr.ObjectSerialNumber != 0) &&
     (iVar1 = (this->WeakLinker).WeakPtr.ObjectIndex, -1 < iVar1)) {
    pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,iVar1);
    if ((pFVar2 != (FUObjectItem *)0x0) &&
       ((pFVar2->SerialNumber == (this->WeakLinker).WeakPtr.ObjectSerialNumber &&
        (((pFVar2->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0)))) {
      return (UMovieSceneEntitySystemLinker *)(pFVar2->field1_0x8).Object;
    }
  }
  return (UMovieSceneEntitySystemLinker *)0x0;
}

// GetState @ 1461b4210

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneInstancePreAnimatedState * __thiscall
FMovieScenePreAnimatedState::GetState(FMovieScenePreAnimatedState *this)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  UMovieSceneEntitySystemLinker *this_00;
  FInstanceRegistry *pFVar3;
  longlong lVar4;
  
  this_00 = (UMovieSceneEntitySystemLinker *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if ((this_00 != (UMovieSceneEntitySystemLinker *)0x0) && (*(short *)&this->InstanceHandle != -1))
  {
    pFVar3 = UMovieSceneEntitySystemLinker::GetInstanceRegistry(this_00);
    bVar2 = UE::MovieScene::FInstanceRegistry::IsHandleValid
                      (pFVar3,*(FInstanceHandle *)&this->InstanceHandle);
    if (bVar2) {
      pFVar3 = UMovieSceneEntitySystemLinker::GetInstanceRegistry(this_00);
      lVar4 = (ulonglong)*(ushort *)&this->InstanceHandle * 0x140;
      pTVar1 = *(TReferenceControllerBase<1> **)(lVar4 + 0x120 + *(longlong *)&pFVar3->Instances);
      lVar4 = *(longlong *)(lVar4 + 0x118 + *(longlong *)&pFVar3->Instances);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return (FMovieSceneInstancePreAnimatedState *)(lVar4 + 0x60);
    }
  }
  return (FMovieSceneInstancePreAnimatedState *)0x0;
}

// Initialize @ 1461b5e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieScenePreAnimatedState::Initialize
          (FMovieScenePreAnimatedState *this,UMovieSceneEntitySystemLinker *param_1,
          FRootInstanceHandle param_2)

{
  UMovieSceneEntitySystemLinker *local_res8;
  
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UMovieSceneEntitySystemLinker *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  this->InstanceHandle = param_2;
  return;
}

// IsCapturingGlobalPreAnimatedState @ 1461bba40

bool __thiscall
FMovieScenePreAnimatedState::IsCapturingGlobalPreAnimatedState(FMovieScenePreAnimatedState *this)

{
  FMovieSceneInstancePreAnimatedState *pFVar1;
  
  pFVar1 = GetState(this);
  if (pFVar1 != (FMovieSceneInstancePreAnimatedState *)0x0) {
    return pFVar1->bCapturingGlobalPreAnimatedState;
  }
  return false;
}

// RestorePreAnimatedState @ 1461cea30

void __thiscall
FMovieScenePreAnimatedState::RestorePreAnimatedState
          (FMovieScenePreAnimatedState *this,UObject *param_1)

{
  FMovieSceneInstancePreAnimatedState *this_00;
  
  this_00 = GetState(this);
  if (this_00 != (FMovieSceneInstancePreAnimatedState *)0x0) {
    FMovieSceneInstancePreAnimatedState::RestorePreAnimatedState(this_00,param_1);
    return;
  }
  return;
}

// RestorePreAnimatedState @ 1461cea60

void __thiscall
FMovieScenePreAnimatedState::RestorePreAnimatedState
          (FMovieScenePreAnimatedState *this,UObject *param_1,
          TFunctionRef<bool___cdecl(FMovieSceneAnimTypeID)> *param_2)

{
  IPreAnimatedStorage *pIVar1;
  FMovieSceneInstancePreAnimatedState *this_00;
  UObject *pUVar2;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FPreAnimatedStorageID local_res20 [2];
  undefined **local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  this_00 = GetState(this);
  if (this_00 != (FMovieSceneInstancePreAnimatedState *)0x0) {
    local_18 = *(undefined8 *)param_2;
    local_10 = *(undefined8 *)&param_2->field_0x8;
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    if (pUVar2 != (UObject *)0x0) {
      local_res20[0].TypeID =
           (uint)UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage::StorageID;
      pTVar3 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
               ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
                       *)(pUVar2 + 0x22),local_res20);
      if (pTVar3 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        pTVar4 = (pTVar3->SharedReferenceCount).ReferenceController;
        pIVar1 = pTVar3->Object;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        if (pIVar1 != (IPreAnimatedStorage *)0x0) {
          local_28 = &`FMovieSceneInstancePreAnimatedState::RestorePreAnimatedState'::`2'::
                      FRestoreMask::_vftable_;
          local_20 = &local_18;
          *(undefined ****)&pIVar1[7].field_0x10 = &local_28;
          FMovieSceneInstancePreAnimatedState::RestorePreAnimatedState(this_00,param_1);
          *(undefined8 *)&pIVar1[7].field_0x10 = 0;
          local_28 = &
                     ___7IRestoreMask___TPreAnimatedStateStorage_UFPreAnimatedObjectTokenTraits_MovieScene_UE___MovieScene_UE__6B_
          ;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  return;
}

// RestorePreAnimatedState @ 1461ceb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieScenePreAnimatedState::RestorePreAnimatedState
          (FMovieScenePreAnimatedState *this,UClass *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FMovieSceneInstancePreAnimatedState *this_00;
  UMovieSceneEntitySystemLinker *pUVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  undefined1 local_res18 [16];
  TArray<UE::MovieScene::FPreAnimatedStorageGroupHandle,TSizedDefaultAllocator<32>_> local_48;
  TSharedPtr<UE::MovieScene::FPreAnimatedObjectGroupManager,1> local_38;
  FRestoreStateParams local_28;
  
  this_00 = GetState(this);
  if ((this_00 != (FMovieSceneInstancePreAnimatedState *)0x0) &&
     (pUVar5 = (UMovieSceneEntitySystemLinker *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00),
     pUVar5 != (UMovieSceneEntitySystemLinker *)0x0)) {
    UE::MovieScene::FPreAnimatedStateExtension::
    FindGroupManager<UE::MovieScene::FPreAnimatedObjectGroupManager>
              (&pUVar5->PreAnimatedState,&local_38);
    if (local_38.Object != (FPreAnimatedObjectGroupManager *)0x0) {
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      if ((local_38.Object == (FPreAnimatedObjectGroupManager *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UE::MovieScene::FPreAnimatedObjectGroupManager::GetGroupsByClass
                (local_38.Object,param_1,&local_48);
      iVar3 = local_48.ArrayNum;
      uVar6 = (ulonglong)local_48.ArrayNum;
      local_28.TerminalInstanceHandle = *(FInstanceHandle *)&this_00->InstanceHandle;
      pFVar1 = local_48.AllocatorInstance.Data + uVar6 * 4;
      FVar7.Data = local_48.AllocatorInstance.Data;
      local_28.Linker = pUVar5;
      while( true ) {
        if ((int)uVar6 != iVar3) {
          `TCheckedPointerIterator<UE::MovieScene::FPreAnimatedStorageGroupHandle,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (FVar7.Data == pFVar1) break;
        UE::MovieScene::FPreAnimatedStateExtension::RestoreStateForGroup
                  (&pUVar5->PreAnimatedState,(FPreAnimatedStorageGroupHandle)*(int *)FVar7.Data,
                   &local_28);
        uVar6 = local_48._8_8_ & 0xffffffff;
        FVar7.Data = FVar7.Data + 4;
      }
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return;
}

// RestorePreAnimatedState @ 1461ceca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieScenePreAnimatedState::RestorePreAnimatedState(FMovieScenePreAnimatedState *this)

{
  FMovieSceneInstancePreAnimatedState *this_00;
  FRestoreStateParams local_18;
  
  this_00 = GetState(this);
  if (this_00 != (FMovieSceneInstancePreAnimatedState *)0x0) {
    local_18.Linker =
         (UMovieSceneEntitySystemLinker *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    if (local_18.Linker != (UMovieSceneEntitySystemLinker *)0x0) {
      local_18.TerminalInstanceHandle = *(FInstanceHandle *)&this_00->InstanceHandle;
      UE::MovieScene::FPreAnimatedStateExtension::RestoreGlobalState
                (&(local_18.Linker)->PreAnimatedState,&local_18);
    }
  }
  return;
}

// SavePreAnimatedState @ 1461d0710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieScenePreAnimatedState::SavePreAnimatedState
          (FMovieScenePreAnimatedState *this,UObject *param_1,FMovieSceneAnimTypeID param_2,
          IMovieScenePreAnimatedTokenProducer *param_3)

{
  bool bVar1;
  FMovieSceneInstancePreAnimatedState *this_00;
  UObject *pUVar2;
  
  this_00 = GetState(this);
  if (((this_00 != (FMovieSceneInstancePreAnimatedState *)0x0) &&
      (pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00), pUVar2 != (UObject *)0x0)) &&
     ((this_00->bCapturingGlobalPreAnimatedState != false ||
      (bVar1 = UE::MovieScene::FPreAnimatedStateExtension::HasActiveCaptureSource
                         ((FPreAnimatedStateExtension *)&pUVar2[0x1c].field_0x8), bVar1)))) {
    UE::MovieScene::FPreAnimatedStateExtension::SavePreAnimatedStateDirectly
              ((FPreAnimatedStateExtension *)&pUVar2[0x1c].field_0x8,param_1,param_2,param_3);
  }
  return;
}

// SavePreAnimatedState @ 1461d07a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieScenePreAnimatedState::SavePreAnimatedState
          (FMovieScenePreAnimatedState *this,FMovieSceneAnimTypeID param_1,
          IMovieScenePreAnimatedGlobalTokenProducer *param_2)

{
  bool bVar1;
  FMovieSceneInstancePreAnimatedState *this_00;
  UObject *pUVar2;
  
  this_00 = GetState(this);
  if (((this_00 != (FMovieSceneInstancePreAnimatedState *)0x0) &&
      (pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00), pUVar2 != (UObject *)0x0)) &&
     ((this_00->bCapturingGlobalPreAnimatedState != false ||
      (bVar1 = UE::MovieScene::FPreAnimatedStateExtension::HasActiveCaptureSource
                         ((FPreAnimatedStateExtension *)&pUVar2[0x1c].field_0x8), bVar1)))) {
    UE::MovieScene::FPreAnimatedStateExtension::SavePreAnimatedStateDirectly
              ((FPreAnimatedStateExtension *)&pUVar2[0x1c].field_0x8,param_1,param_2);
  }
  return;
}

