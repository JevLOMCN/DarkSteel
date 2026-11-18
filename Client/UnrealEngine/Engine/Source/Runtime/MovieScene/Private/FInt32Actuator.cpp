// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// Actuate @ 1462a26a0

void __thiscall
FInt32Actuator::Actuate
          (FInt32Actuator *this,UObject *param_1,int param_2,TBlendableTokenStack<int> *param_3,
          FMovieSceneContext *param_4,FPersistentEvaluationData *param_5,IMovieScenePlayer *param_6)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (UObject *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<356729564015099943>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieSceneBlendingTests.cpp"
                       ,0x27,"!InObject");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::MovieScene::Test::GBlendingTestValue = param_2;
  return;
}

// RetrieveCurrentValue @ 1462ba490

int __thiscall
FInt32Actuator::RetrieveCurrentValue
          (FInt32Actuator *this,UObject *param_1,IMovieScenePlayer *param_2)

{
  return UE::MovieScene::Test::GBlendingTestValue;
}

