// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// Empty @ 1468277c0

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
TIndirectArray<TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  FScopedMovementUpdate *this_00;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  for (iVar2 = (this->Array).ArrayNum; iVar2 != 0; iVar2 = iVar2 + -1) {
    this_00 = *(FScopedMovementUpdate **)pFVar3;
    if (this_00 != (FScopedMovementUpdate *)0x0) {
      if (*(char *)this_00[5].InitialTransform.Translation.XY.m128d_f64 != '\0') {
        FScopedMovementUpdate::~FScopedMovementUpdate
                  ((FScopedMovementUpdate *)&this_00[4].InitialTransform.Translation);
      }
      if (*(char *)this_00[4].InitialTransform.Rotation.ZW.m128d_f64 != '\0') {
        FScopedMovementUpdate::~FScopedMovementUpdate
                  ((FScopedMovementUpdate *)&this_00[3].InitialTransform.Rotation.ZW);
      }
      if (*(char *)this_00[3].InitialTransform.Rotation.XY.m128d_f64 != '\0') {
        FScopedMovementUpdate::~FScopedMovementUpdate
                  ((FScopedMovementUpdate *)&this_00[2].InitialTransform);
      }
      if ((char)this_00[2].CurrentOverlapState != eUseParent) {
        FScopedMovementUpdate::~FScopedMovementUpdate
                  ((FScopedMovementUpdate *)&this_00[1].CurrentOverlapState);
      }
      if (*(char *)&this_00[1].Owner != '\0') {
        FScopedMovementUpdate::~FScopedMovementUpdate(this_00);
      }
      ::operator_delete(this_00,0x1ea0);
    }
    pFVar3 = pFVar3 + 8;
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

