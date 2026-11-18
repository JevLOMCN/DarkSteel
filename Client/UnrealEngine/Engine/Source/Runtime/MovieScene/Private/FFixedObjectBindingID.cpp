// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// ConvertToRelative @ 14620c0b0

/* WARNING: Enum "Type": Some values do not have unique names */

FRelativeObjectBindingID * __thiscall
UE::MovieScene::FFixedObjectBindingID::ConvertToRelative
          (FFixedObjectBindingID *this,FRelativeObjectBindingID *__return_storage_ptr__,
          FMovieSceneSequenceID param_1,IMovieScenePlayer *param_2)

{
  FSharedPlaybackState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar5;
  FRelativeObjectBindingID *pFVar6;
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
      pFVar6 = (FRelativeObjectBindingID *)(*pcVar3)();
      return pFVar6;
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
      pFVar6 = (FRelativeObjectBindingID *)(*pcVar3)();
      return pFVar6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = pFVar1;
  local_38.SharedReferenceCount.ReferenceController = pTVar2;
  FRelativeObjectBindingID::FRelativeObjectBindingID
            (__return_storage_ptr__,param_1,(FMovieSceneSequenceID)(this->SequenceID).Value,
             &this->Guid,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// ConvertToRelative @ 14620c1d0

FRelativeObjectBindingID * __thiscall
UE::MovieScene::FFixedObjectBindingID::ConvertToRelative
          (FFixedObjectBindingID *this,FRelativeObjectBindingID *__return_storage_ptr__,
          FMovieSceneSequenceID param_1,FMovieSceneSequenceHierarchy *param_2)

{
  FMovieSceneSequenceID FVar1;
  
  FVar1.Value = (this->SequenceID).Value;
  (__return_storage_ptr__->Guid).A = 0;
  (__return_storage_ptr__->Guid).B = 0;
  (__return_storage_ptr__->Guid).C = 0;
  (__return_storage_ptr__->Guid).D = 0;
  (__return_storage_ptr__->SequenceID).Value = 0xffffffff;
  FRelativeObjectBindingID::ConstructInternal
            (__return_storage_ptr__,param_1,FVar1,&this->Guid,param_2);
  return __return_storage_ptr__;
}

// ConvertToRelative @ 14620c220

FRelativeObjectBindingID * __thiscall
UE::MovieScene::FFixedObjectBindingID::ConvertToRelative
          (FFixedObjectBindingID *this,FRelativeObjectBindingID *__return_storage_ptr__,
          FMovieSceneSequenceID param_1,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_2)

{
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
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
  FRelativeObjectBindingID::FRelativeObjectBindingID
            (__return_storage_ptr__,param_1,(FMovieSceneSequenceID)(this->SequenceID).Value,
             &this->Guid,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

