// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// FMovieSceneEntitySystemEvaluationReentrancyWindow @ 146119410

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntitySystemEvaluationReentrancyWindow * __thiscall
FMovieSceneEntitySystemEvaluationReentrancyWindow::FMovieSceneEntitySystemEvaluationReentrancyWindow
          (FMovieSceneEntitySystemEvaluationReentrancyWindow *this,
          FMovieSceneEntitySystemRunner *param_1,UMovieSceneEntitySystemLinker *param_2)

{
  uint *puVar1;
  uint uVar2;
  UMovieSceneEntitySystemLinker *pUVar3;
  code *pcVar4;
  bool bVar5;
  FMovieSceneEntitySystemEvaluationReentrancyWindow *pFVar6;
  int iVar7;
  ForElementType<unsigned_int> FVar8;
  
  this->Linker = param_2;
  this->Runner = param_1;
  iVar7 = (param_2->RunnerReentrancyFlags).NumBits + -1;
  this->ReentrancyLevel = iVar7;
  this->CachedFlushState = param_1->FlushState;
  this->CachedCurrentFlushState = param_1->CurrentFlushState;
  if (iVar7 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReentrancyLevel >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                       ,0x43,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FMovieSceneEntitySystemEvaluationReentrancyWindow *)(*pcVar4)();
      return pFVar6;
    }
  }
  pUVar3 = this->Linker;
  uVar2 = this->ReentrancyLevel;
  if (((int)uVar2 < 0) || ((pUVar3->RunnerReentrancyFlags).NumBits <= (int)uVar2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FMovieSceneEntitySystemEvaluationReentrancyWindow *)(*pcVar4)();
      return pFVar6;
    }
  }
  FVar8 = (pUVar3->RunnerReentrancyFlags).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<unsigned_int>)0x0) {
    FVar8 = (ForElementType<unsigned_int>)&pUVar3->RunnerReentrancyFlags;
  }
  if ((*(uint *)((longlong)FVar8 + (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4)
       >> (uVar2 & 0x1f) & 1) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Linker->RunnerReentrancyFlags[ReentrancyLevel] == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                       ,0x44,
                       L"Nested FMovieSceneEntitySystemEvaluationReentrancyWindows are not supported for the same active runner"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FMovieSceneEntitySystemEvaluationReentrancyWindow *)(*pcVar4)();
      return pFVar6;
    }
  }
  pUVar3 = this->Linker;
  iVar7 = this->ReentrancyLevel;
  if ((iVar7 < 0) || ((pUVar3->RunnerReentrancyFlags).NumBits <= iVar7)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FMovieSceneEntitySystemEvaluationReentrancyWindow *)(*pcVar4)();
      return pFVar6;
    }
  }
  FVar8 = (pUVar3->RunnerReentrancyFlags).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<unsigned_int>)0x0) {
    FVar8 = (ForElementType<unsigned_int>)&pUVar3->RunnerReentrancyFlags;
  }
  puVar1 = (uint *)((longlong)FVar8 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  this->Runner->FlushState = None;
  this->Runner->CurrentFlushState = None;
  return this;
}

// ~FMovieSceneEntitySystemEvaluationReentrancyWindow @ 14611dc60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemEvaluationReentrancyWindow::
~FMovieSceneEntitySystemEvaluationReentrancyWindow
          (FMovieSceneEntitySystemEvaluationReentrancyWindow *this)

{
  uint *puVar1;
  int iVar2;
  UMovieSceneEntitySystemLinker *pUVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<unsigned_int> FVar6;
  
  if (this->Runner->FlushState != None) {
    FMovieSceneEntitySystemRunner::FlushOutstanding(this->Runner,0.0,None);
  }
  this->Runner->FlushState = this->CachedFlushState;
  this->Runner->CurrentFlushState = this->CachedCurrentFlushState;
  iVar2 = this->ReentrancyLevel;
  if ((-1 < iVar2) && (pUVar3 = this->Linker, iVar2 < (pUVar3->RunnerReentrancyFlags).NumBits)) {
    if ((pUVar3->RunnerReentrancyFlags).NumBits <= iVar2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar6 = (pUVar3->RunnerReentrancyFlags).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<unsigned_int>)0x0) {
      FVar6 = (ForElementType<unsigned_int>)&pUVar3->RunnerReentrancyFlags;
    }
    puVar1 = (uint *)((longlong)FVar6 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4)
    ;
    *puVar1 = *puVar1 & ~(1 << ((byte)iVar2 & 0x1f));
    return;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6835856732699230296>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                     ,0x58,"Linker->RunnerReentrancyFlags.IsValidIndex(ReentrancyLevel)");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

