// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// TOptional<TTuple<FKeyHandle,FFrameNumber>_> @ 14660e010

TOptional<TTuple<FKeyHandle,FFrameNumber>_> * __thiscall
TOptional<TTuple<FKeyHandle,FFrameNumber>_>::TOptional<TTuple<FKeyHandle,FFrameNumber>_>
          (TOptional<TTuple<FKeyHandle,FFrameNumber>_> *this)

{
  this->bIsSet = false;
  return this;
}

// TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer> @ 146807520

TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer> * __thiscall
TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>::
TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>
          (TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>
           *this)

{
  this->bIsSet = false;
  return this;
}

// ~TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer> @ 14680cb00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>::
~TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>
          (TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>
           *this)

{
  longlong lVar1;
  void *pvVar2;
  
  if (this->bIsSet == false) {
    return;
  }
  if (((((this->TypedValue).Value.field_0x608 & 9) != 0) &&
      (lVar1 = *(longlong *)&(this->TypedValue).Value, lVar1 != 0)) &&
     ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
    USceneComponent::EndScopedMovementUpdate
              (*(USceneComponent **)&(this->TypedValue).Value,(FScopedMovementUpdate *)this);
  }
  *(undefined8 *)&(this->TypedValue).Value = 0;
  pvVar2 = *(void **)&(this->TypedValue).Value.field_0x5f8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->TypedValue).Value.field_0x3e8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

