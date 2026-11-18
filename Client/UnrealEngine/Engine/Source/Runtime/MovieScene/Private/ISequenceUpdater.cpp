// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// ~ISequenceUpdater @ 14611e5c0

void __thiscall UE::MovieScene::ISequenceUpdater::~ISequenceUpdater(ISequenceUpdater *this)

{
  *this = (ISequenceUpdater)&___7ISequenceUpdater_MovieScene_UE__6B_;
  return;
}

// FactoryInstance @ 146130850

void __cdecl
UE::MovieScene::ISequenceUpdater::FactoryInstance
          (TUniquePtr<UE::MovieScene::ISequenceUpdater,TDefaultDelete<UE::MovieScene::ISequenceUpdater>_>
           *param_1,UMovieSceneCompiledDataManager *param_2,FMovieSceneCompiledDataID param_3)

{
  ISequenceUpdater *pIVar1;
  FMovieSceneSequenceHierarchy *pFVar2;
  FSequenceUpdater_Flat *this;
  FSequenceUpdater_Hierarchical *pFVar3;
  TUniquePtr<UE::MovieScene::ISequenceUpdater,TDefaultDelete<UE::MovieScene::ISequenceUpdater>_>
  local_18 [2];
  
  pFVar2 = UMovieSceneCompiledDataManager::FindHierarchy(param_2,param_3);
  pIVar1 = param_1->Ptr;
  if (pIVar1 != (ISequenceUpdater *)0x0) {
    if (pFVar2 == (FMovieSceneSequenceHierarchy *)0x0) {
      return;
    }
    (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1,local_18);
    if (local_18[0].Ptr == (ISequenceUpdater *)0x0) {
      return;
    }
    if (param_1 != local_18) {
      pIVar1 = param_1->Ptr;
      param_1->Ptr = (ISequenceUpdater *)local_18[0];
      local_18[0].Ptr = (ISequenceUpdater *)0x0;
      if (pIVar1 != (ISequenceUpdater *)0x0) {
        (**(code **)*pIVar1)(pIVar1,1);
      }
    }
    if (local_18[0].Ptr == (ISequenceUpdater *)0x0) {
      return;
    }
    (**(code **)*local_18[0].Ptr)(local_18[0].Ptr,1);
    return;
  }
  if (pFVar2 == (FMovieSceneSequenceHierarchy *)0x0) {
    this = ::operator_new(0xd0);
    if (this != (FSequenceUpdater_Flat *)0x0) {
      pFVar3 = (FSequenceUpdater_Hierarchical *)
               FSequenceUpdater_Flat::FSequenceUpdater_Flat(this,param_3);
      goto LAB_1461308b3;
    }
  }
  else {
    pFVar3 = ::operator_new(0x198);
    if (pFVar3 != (FSequenceUpdater_Hierarchical *)0x0) {
      pFVar3 = FSequenceUpdater_Hierarchical::FSequenceUpdater_Hierarchical(pFVar3,param_3);
      goto LAB_1461308b3;
    }
  }
  pFVar3 = (FSequenceUpdater_Hierarchical *)0x0;
LAB_1461308b3:
  pIVar1 = param_1->Ptr;
  param_1->Ptr = (ISequenceUpdater *)pFVar3;
  if (pIVar1 == (ISequenceUpdater *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001461308d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*pIVar1)(pIVar1,1);
  return;
}

// InvalidateCachedData @ 146140ac0

void __thiscall
UE::MovieScene::ISequenceUpdater::InvalidateCachedData
          (ISequenceUpdater *this,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1
          )

{
  code *pcVar1;
  FSharedPlaybackState *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pcVar1 = *(code **)((longlong)*this + 0x38);
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(this,&local_18,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

