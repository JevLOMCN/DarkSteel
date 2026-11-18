// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 9

// StaticStruct @ 1461e8750

UScriptStruct * __cdecl FMovieSceneObjectBindingID::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneObjectBindingID.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneObjectBindingID.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID,(UObject *)pUVar1,
                         L"MovieSceneObjectBindingID");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneObjectBindingID.OuterSingleton;
}

// ResolveBoundObjects @ 1462315a0

/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> * __thiscall
FMovieSceneObjectBindingID::ResolveBoundObjects
          (FMovieSceneObjectBindingID *this,
          TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *__return_storage_ptr__,
          FSequenceInstance *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  if ((((this->Guid).D != 0 || (this->Guid).C != 0) || (this->Guid).B != 0) || (this->Guid).A != 0)
  {
    local_18.Object = (param_1->SharedPlaybackState).Object;
    pTVar1 = (param_1->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.SharedReferenceCount.ReferenceController = pTVar1;
    ResolveBoundObjects(this,__return_storage_ptr__,
                        (FMovieSceneSequenceID)(param_1->SequenceID).Value,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// ResolveBoundObjects @ 146231620

/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> * __thiscall
FMovieSceneObjectBindingID::ResolveBoundObjects
          (FMovieSceneObjectBindingID *this,
          TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *__return_storage_ptr__,
          FMovieSceneSequenceID param_1,IMovieScenePlayer *param_2)

{
  FSharedPlaybackState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar5;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *pTVar6;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_38;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_28;
  
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)
            (**(code **)(param_2->_padding_ + 0x18))(param_2);
  pTVar5 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_28);
  if (pTVar5->Object == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar1 = pTVar5->Object;
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  (pTVar5->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar5->Object = (FSharedPlaybackState *)0x0;
  if (pFVar1 == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = pFVar1;
  local_38.SharedReferenceCount.ReferenceController = pTVar2;
  ResolveBoundObjects(this,__return_storage_ptr__,param_1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// ResolveBoundObjects @ 146231720

TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> * __thiscall
FMovieSceneObjectBindingID::ResolveBoundObjects
          (FMovieSceneObjectBindingID *this,
          TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *__return_storage_ptr__,
          FMovieSceneSequenceID param_1,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_2)

{
  FMovieSceneSequenceID FVar1;
  FSharedPlaybackState *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMovieSceneEvaluationState *this_00;
  atomic<int> *paVar4;
  FMovieSceneSequenceID local_res8 [2];
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  
  if (((((this->Guid).D == 0 && (this->Guid).C == 0) && (this->Guid).B == 0) && (this->Guid).A == 0)
     || (this_00 = UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>
                             (param_2->Object), this_00 == (FMovieSceneEvaluationState *)0x0)) {
    __return_storage_ptr__->DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    pFVar2 = param_2->Object;
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      paVar4 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar4 = &pTVar3->SharedReferenceCount;
      LOCK();
      *paVar4 = (atomic<int>)((int)*paVar4 + 1);
      UNLOCK();
    }
    FVar1.Value = this->SequenceID;
    if (this->ResolveParentIndex != -1) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar4 = (atomic<int>)((int)*paVar4 + 1);
        UNLOCK();
      }
      local_28.Object = pFVar2;
      local_28.SharedReferenceCount.ReferenceController = pTVar3;
      UE::MovieScene::ResolveExternalSequenceID
                ((FMovieSceneSequenceID)(uint)local_res8,param_1.Value,
                 (FMovieSceneSequenceID)this->ResolveParentIndex,
                 (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)(ulonglong)FVar1.Value
                );
      FVar1.Value = local_res8[0].Value;
    }
    local_res8[0].Value = FVar1.Value;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
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
    FMovieSceneEvaluationState::FindBoundObjects
              (this_00,__return_storage_ptr__,&this->Guid,local_res8,&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// ResolveSequenceID @ 1462325c0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneSequenceID __thiscall
FMovieSceneObjectBindingID::ResolveSequenceID
          (FMovieSceneObjectBindingID *this,FMovieSceneSequenceID param_1,IMovieScenePlayer *param_2
          )

{
  FSharedPlaybackState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar6;
  undefined4 in_register_00000014;
  longlong *in_R9;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_28;
  
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)(**(code **)(*in_R9 + 0x18))();
  pTVar6 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_28);
  if (pTVar6->Object == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (FMovieSceneSequenceID)uVar5;
    }
  }
  pFVar1 = pTVar6->Object;
  pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
  (pTVar6->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6->Object = (FSharedPlaybackState *)0x0;
  if (pFVar1 == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (FMovieSceneSequenceID)uVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar5 = this->SequenceID;
  if (this->ResolveParentIndex == -1) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Value) = uVar5;
  }
  else {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    UE::MovieScene::ResolveExternalSequenceID
              (param_1,(int)param_2,(FMovieSceneSequenceID)this->ResolveParentIndex,
               (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)(ulonglong)uVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (FMovieSceneSequenceID)param_1.Value;
}

// ResolveSequenceID @ 1462326f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneSequenceID __thiscall
FMovieSceneObjectBindingID::ResolveSequenceID
          (FMovieSceneObjectBindingID *this,FMovieSceneSequenceID param_1,
          FMovieSceneSequenceHierarchy *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 in_register_00000014;
  FMovieSceneSequenceHierarchy *in_R9;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  FSubSequencePath local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  iVar1 = this->ResolveParentIndex;
  iVar2 = this->SequenceID;
  if (iVar1 != -1) {
    if (iVar1 < 0) {
      `UE::MovieScene::ResolveExternalSequenceID'::__l2::<lambda_1>::operator()(local_98);
    }
    if (((uint)param_2 == 0) ||
       ((in_R9 == (FMovieSceneSequenceHierarchy *)0x0 &&
        (bVar3 = `UE::MovieScene::ResolveExternalSequenceID'::__l6::<lambda_2>::operator()(local_98)
        , !bVar3)))) {
      *(int *)CONCAT44(in_register_00000014,param_1.Value) = iVar2;
    }
    else {
      UE::MovieScene::FSubSequencePath::FSubSequencePath
                (&local_88,(FMovieSceneSequenceID)(uint)param_2,in_R9);
      UE::MovieScene::FSubSequencePath::PopGenerations(&local_88,iVar1);
      UE::MovieScene::FSubSequencePath::ResolveChildSequenceID(&local_88,param_1);
      if (local_88.PathToRoot.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
        FMemory::Free((void *)local_88.PathToRoot.AllocatorInstance.SecondaryData);
      }
    }
    return (FMovieSceneSequenceID)param_1.Value;
  }
  *(int *)CONCAT44(in_register_00000014,param_1.Value) = iVar2;
  return (FMovieSceneSequenceID)param_1.Value;
}

// ResolveSequenceID @ 1462327c0

FMovieSceneSequenceID __thiscall
FMovieSceneObjectBindingID::ResolveSequenceID
          (FMovieSceneObjectBindingID *this,FMovieSceneSequenceID param_1,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 in_register_00000014;
  longlong in_R9;
  
  uVar2 = this->SequenceID;
  if (this->ResolveParentIndex == -1) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Value) = uVar2;
  }
  else {
    if (*(longlong *)(in_R9 + 8) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(in_R9 + 8) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    UE::MovieScene::ResolveExternalSequenceID
              (param_1,(int)param_2,(FMovieSceneSequenceID)this->ResolveParentIndex,
               (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)(ulonglong)uVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(in_R9 + 8));
  return (FMovieSceneSequenceID)param_1.Value;
}

// ResolveToFixed @ 146232a60

/* WARNING: Enum "Type": Some values do not have unique names */

FFixedObjectBindingID * __thiscall
FMovieSceneObjectBindingID::ResolveToFixed
          (FMovieSceneObjectBindingID *this,FFixedObjectBindingID *__return_storage_ptr__,
          FMovieSceneSequenceID param_1,IMovieScenePlayer *param_2)

{
  FSharedPlaybackState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  FMovieSceneSequenceID FVar8;
  uint uVar9;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar10;
  FFixedObjectBindingID *pFVar11;
  undefined4 extraout_var;
  undefined1 local_res8 [8];
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_28;
  
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)
            (**(code **)(param_2->_padding_ + 0x18))(param_2);
  pTVar10 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_28);
  if (pTVar10->Object == (FSharedPlaybackState *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FFixedObjectBindingID *)(*pcVar3)();
      return pFVar11;
    }
  }
  pFVar1 = pTVar10->Object;
  pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
  (pTVar10->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar10->Object = (FSharedPlaybackState *)0x0;
  if (pFVar1 == (FSharedPlaybackState *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FFixedObjectBindingID *)(*pcVar3)();
      return pFVar11;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar9 = this->SequenceID;
  if (this->ResolveParentIndex != -1) {
    if (param_1.Value == 0xffffffff) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8367074855043989686>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneObjectBindingID.cpp"
                         ,0xb6,"RuntimeSequenceID != MovieSceneSequenceID::Invalid");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FFixedObjectBindingID *)(*pcVar3)();
        return pFVar11;
      }
      uVar9 = 0xffffffff;
    }
    else {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVar8 = UE::MovieScene::ResolveExternalSequenceID
                        ((uint)local_res8,param_1.Value,
                         (FMovieSceneSequenceID)this->ResolveParentIndex,
                         (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)
                         (ulonglong)uVar9);
      uVar9 = *(uint *)CONCAT44(extraout_var,FVar8.Value);
    }
  }
  uVar4 = (this->Guid).B;
  uVar5 = (this->Guid).C;
  uVar6 = (this->Guid).D;
  (__return_storage_ptr__->Guid).A = (this->Guid).A;
  (__return_storage_ptr__->Guid).B = uVar4;
  (__return_storage_ptr__->Guid).C = uVar5;
  (__return_storage_ptr__->Guid).D = uVar6;
  (__return_storage_ptr__->SequenceID).Value = uVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// ResolveToFixed @ 146232bd0

FFixedObjectBindingID * __thiscall
FMovieSceneObjectBindingID::ResolveToFixed
          (FMovieSceneObjectBindingID *this,FFixedObjectBindingID *__return_storage_ptr__,
          FMovieSceneSequenceID param_1,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_2)

{
  atomic<int> *paVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  FMovieSceneSequenceID FVar10;
  FFixedObjectBindingID *pFVar11;
  undefined4 extraout_var;
  undefined1 local_res8 [8];
  
  uVar2 = this->SequenceID;
  if (this->ResolveParentIndex == -1) {
    uVar5 = (this->Guid).A;
    uVar6 = (this->Guid).B;
    uVar7 = (this->Guid).C;
    uVar8 = (this->Guid).D;
    (__return_storage_ptr__->SequenceID).Value = uVar2;
    (__return_storage_ptr__->Guid).A = uVar5;
    (__return_storage_ptr__->Guid).B = uVar6;
    (__return_storage_ptr__->Guid).C = uVar7;
    (__return_storage_ptr__->Guid).D = uVar8;
  }
  else {
    if (param_1.Value == 0xffffffff) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8367074855043989686>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneObjectBindingID.cpp"
                         ,0xb6,"RuntimeSequenceID != MovieSceneSequenceID::Invalid");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FFixedObjectBindingID *)(*pcVar4)();
        return pFVar11;
      }
      (__return_storage_ptr__->SequenceID).Value = 0xffffffff;
    }
    else {
      pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->SharedReferenceCount;
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
      }
      FVar10 = UE::MovieScene::ResolveExternalSequenceID
                         ((uint)local_res8,param_1.Value,
                          (FMovieSceneSequenceID)this->ResolveParentIndex,
                          (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)
                          (ulonglong)uVar2);
      (__return_storage_ptr__->SequenceID).Value = *(uint *)CONCAT44(extraout_var,FVar10.Value);
    }
    uVar2 = (this->Guid).B;
    uVar5 = (this->Guid).C;
    uVar6 = (this->Guid).D;
    (__return_storage_ptr__->Guid).A = (this->Guid).A;
    (__return_storage_ptr__->Guid).B = uVar2;
    (__return_storage_ptr__->Guid).C = uVar5;
    (__return_storage_ptr__->Guid).D = uVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

