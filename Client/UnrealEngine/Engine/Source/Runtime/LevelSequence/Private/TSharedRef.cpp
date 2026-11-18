// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 1

// TSharedRef<IMovieSceneObjectSpawner,1><FLevelSequenceActorSpawner> @ 146c48990

TSharedRef<IMovieSceneObjectSpawner,1> * __thiscall
TSharedRef<IMovieSceneObjectSpawner,1>::
TSharedRef<IMovieSceneObjectSpawner,1><FLevelSequenceActorSpawner>
          (TSharedRef<IMovieSceneObjectSpawner,1> *this,
          TRawPtrProxy<FLevelSequenceActorSpawner> *param_1)

{
  FLevelSequenceActorSpawner *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<IMovieSceneObjectSpawner,1> *pTVar5;
  
  this->Object = (IMovieSceneObjectSpawner *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFLevelSequenceActorSpawner__U__DefaultDeleter_VFLevelSequenceActorSpawner___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FLevelSequenceActorSpawner *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<IMovieSceneObjectSpawner,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

