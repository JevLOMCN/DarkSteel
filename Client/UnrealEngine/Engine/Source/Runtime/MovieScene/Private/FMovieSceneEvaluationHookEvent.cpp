// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// StaticStruct @ 146101b30

UScriptStruct * __cdecl FMovieSceneEvaluationHookEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationHookEvent.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationHookEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent,(UObject *)pUVar1,
                         L"MovieSceneEvaluationHookEvent");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationHookEvent.OuterSingleton;
}

// FMovieSceneEvaluationHookEvent @ 146119b50

FMovieSceneEvaluationHookEvent * __thiscall
FMovieSceneEvaluationHookEvent::FMovieSceneEvaluationHookEvent
          (FMovieSceneEvaluationHookEvent *this,FMovieSceneEvaluationHookEvent *param_1)

{
  UObject *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  pUVar1 = *(UObject **)&(param_1->Hook).Interface;
  *(UObject **)&(this->Hook).Interface = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(undefined8 *)&(this->Hook).Interface.field_0x8 =
       *(undefined8 *)&(param_1->Hook).Interface.field_0x8;
  uVar2 = (param_1->Hook).ObjectBindingID.B;
  uVar3 = (param_1->Hook).ObjectBindingID.C;
  uVar4 = (param_1->Hook).ObjectBindingID.D;
  (this->Hook).ObjectBindingID.A = (param_1->Hook).ObjectBindingID.A;
  (this->Hook).ObjectBindingID.B = uVar2;
  (this->Hook).ObjectBindingID.C = uVar3;
  (this->Hook).ObjectBindingID.D = uVar4;
  this->RootInstanceHandle = param_1->RootInstanceHandle;
  (this->SequenceID).Value = (param_1->SequenceID).Value;
  this->TriggerIndex = param_1->TriggerIndex;
  this->RootTime = param_1->RootTime;
  this->Type = param_1->Type;
  this->bRestoreState = param_1->bRestoreState;
  return this;
}

