// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// FCameraCutPlaybackCapabilityCompatibilityWrapper @ 14689c000

/* WARNING: Enum "Type": Some values do not have unique names */

FCameraCutPlaybackCapabilityCompatibilityWrapper * __thiscall
UE::MovieScene::FCameraCutPlaybackCapabilityCompatibilityWrapper::
FCameraCutPlaybackCapabilityCompatibilityWrapper
          (FCameraCutPlaybackCapabilityCompatibilityWrapper *this,FSequenceInstance *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSharedPlaybackState *this_00;
  FCameraCutPlaybackCapability *pFVar2;
  IMovieScenePlayer *pIVar3;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  pTVar1 = (param_1->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  this_00 = (param_1->SharedPlaybackState).Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    pFVar2 = FSharedPlaybackState::FindCapability<UE::MovieScene::FCameraCutPlaybackCapability>
                       (this_00);
    this->CameraCutCapability = pFVar2;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    pFVar2 = FSharedPlaybackState::FindCapability<UE::MovieScene::FCameraCutPlaybackCapability>
                       (this_00);
    this->CameraCutCapability = pFVar2;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = this_00;
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  pIVar3 = FPlayerIndexPlaybackCapability::GetPlayer(&local_18);
  this->Player = pIVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return this;
}

// OnCameraCutUpdated @ 1468bf690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FCameraCutPlaybackCapabilityCompatibilityWrapper::OnCameraCutUpdated
          (FCameraCutPlaybackCapabilityCompatibilityWrapper *this,FOnCameraCutUpdatedParams *param_1
          )

{
  IMovieScenePlayer *pIVar1;
  
  if (this->CameraCutCapability != (FCameraCutPlaybackCapability *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001468bf69e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*this->CameraCutCapability + 0x18))();
    return;
  }
  pIVar1 = this->Player;
  if (pIVar1 != (IMovieScenePlayer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001468bf6b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pIVar1->_padding_ + 0xe0))(pIVar1,param_1->ViewTarget,0,param_1->bIsJumpCut);
    return;
  }
  return;
}

// ShouldUpdateCameraCut @ 1468cfdc0

bool __thiscall
UE::MovieScene::FCameraCutPlaybackCapabilityCompatibilityWrapper::ShouldUpdateCameraCut
          (FCameraCutPlaybackCapabilityCompatibilityWrapper *this)

{
  undefined1 uVar1;
  
  if (this->CameraCutCapability != (FCameraCutPlaybackCapability *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001468cfdce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)*this->CameraCutCapability)();
    return (bool)uVar1;
  }
  if (this->Player != (IMovieScenePlayer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001468cfddd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->Player->_padding_ + 0xd0))();
    return (bool)uVar1;
  }
  return true;
}

