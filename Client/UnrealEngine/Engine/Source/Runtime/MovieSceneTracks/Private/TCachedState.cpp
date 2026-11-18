// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// RestoreState @ 1466e31a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
PropertyTemplate::TCachedState<UObject_*,UObject_*>::RestoreState
          (TCachedState<UObject_*,UObject_*> *this,UObject *param_1,FRestoreStateParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  IMovieScenePlayer *pIVar3;
  
  pIVar3 = UE::MovieScene::FRestoreStateParams::GetTerminalPlayer(param_2);
  if (pIVar3 == (IMovieScenePlayer *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3949336773586321498>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePropertyTemplate.h"
                       ,0x5a,"Player");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FTrackInstancePropertyBindings::CallFunction<UObject_*>(&this->Bindings,param_1,this->Value);
  }
  return;
}

// RestoreState @ 1466e3220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
PropertyTemplate::TCachedState<bool,bool>::RestoreState
          (TCachedState<bool,bool> *this,UObject *param_1,FRestoreStateParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  IMovieScenePlayer *pIVar3;
  
  pIVar3 = UE::MovieScene::FRestoreStateParams::GetTerminalPlayer(param_2);
  if (pIVar3 == (IMovieScenePlayer *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3949336773586321498>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePropertyTemplate.h"
                       ,0x5a,"Player");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FTrackInstancePropertyBindings::CallFunction<bool>(&this->Bindings,param_1,this->Value);
  }
  return;
}

