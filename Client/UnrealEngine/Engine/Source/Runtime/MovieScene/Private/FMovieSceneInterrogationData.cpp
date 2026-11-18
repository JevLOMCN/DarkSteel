// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// Finalize @ 146210ad0

void __thiscall
FMovieSceneInterrogationData::Finalize
          (FMovieSceneInterrogationData *this,FMovieSceneContext *param_1,UObject *param_2)

{
  FMovieSceneBlendingAccumulator *this_00;
  
  this_00 = (this->Accumulator).Object;
  if (this_00 != (FMovieSceneBlendingAccumulator *)0x0) {
    FMovieSceneBlendingAccumulator::Interrogate(this_00,param_1,this,param_2);
    return;
  }
  return;
}

// GetAccumulator @ 146216050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FMovieSceneBlendingAccumulator * __thiscall
FMovieSceneInterrogationData::GetAccumulator(FMovieSceneInterrogationData *this)

{
  TSharedPtr<FMovieSceneBlendingAccumulator,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMovieSceneBlendingAccumulator *pFVar5;
  FMovieSceneBlendingAccumulator *local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->Accumulator;
  if ((this->Accumulator).Object == (FMovieSceneBlendingAccumulator *)0x0) {
    pTVar4 = ::operator_new(0xc0);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      local_18 = ___xmm_00000000000000000000000000000010;
      pFVar5 = (FMovieSceneBlendingAccumulator *)&DAT_00000010;
      FStack_10.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pFVar5 = (FMovieSceneBlendingAccumulator *)(pTVar4 + 1);
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFMovieSceneBlendingAccumulator___00_SharedPointerInternals__6B_
      ;
      pTVar4[2]._padding_ = 0;
      pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[7]._padding_ = 0;
      pTVar4[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[9].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[9].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[10].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[10].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[1]._padding_ = 0;
      pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[3]._padding_ = 0;
      pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[3].WeakReferenceCount = (atomic<int>)0x80;
      *(undefined4 *)&pTVar4[4]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pTVar4[4]._padding_ + 4) = 0;
      pTVar4[5]._padding_ = 0;
      pTVar4[6]._padding_ = 0;
      pTVar4[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[8]._padding_ = 0;
      pTVar4[8].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[8].WeakReferenceCount = (atomic<int>)0x80;
      *(undefined4 *)&pTVar4[9]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pTVar4[9]._padding_ + 4) = 0;
      pTVar4[10]._padding_ = 0;
      pTVar4[0xb]._padding_ = 0;
      pTVar4[0xb].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[0xb].WeakReferenceCount = (atomic<int>)0x0;
      if (pFVar5 == (FMovieSceneBlendingAccumulator *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FMovieSceneBlendingAccumulator *)(*pcVar2)();
          return pFVar5;
        }
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      FStack_10.ReferenceController = pTVar4;
      local_18 = pFVar5;
    }
    if (pTVar1 != (TSharedPtr<FMovieSceneBlendingAccumulator,1> *)&local_18) {
      pTVar1->Object = pFVar5;
      local_18 = (FMovieSceneBlendingAccumulator *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Accumulator).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (pTVar1->Object == (FMovieSceneBlendingAccumulator *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMovieSceneBlendingAccumulator *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  return pTVar1->Object;
}

