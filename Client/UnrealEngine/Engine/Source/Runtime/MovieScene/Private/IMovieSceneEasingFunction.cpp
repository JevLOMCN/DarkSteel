// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// Execute_OnEvaluate @ 14605a9b0

float __cdecl IMovieSceneEasingFunction::Execute_OnEvaluate(UObject *param_1,float param_2)

{
  UClass *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  float fVar5;
  float local_res8;
  float local_resc;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\MovieScene\\UHT\\MovieSceneEasingFunction.gen.cpp"
                       ,0x2a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  this = *(UClass **)&param_1->field_0x10;
  pUVar3 = UMovieSceneEasingFunction::StaticClass();
  bVar2 = UClass::ImplementsInterface(this,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UMovieSceneEasingFunction::StaticClass())"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\MovieScene\\UHT\\MovieSceneEasingFunction.gen.cpp"
                       ,0x2b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  local_resc = 0.0;
  pUVar4 = UObject::FindFunction(param_1,NAME_UMovieSceneEasingFunction_OnEvaluate);
  if (pUVar4 != (UFunction *)0x0) {
    local_res8 = param_2;
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar4,&local_res8);
  }
  return local_resc;
}

// OnEvaluate @ 14605c2c0

float __thiscall
IMovieSceneEasingFunction::OnEvaluate(IMovieSceneEasingFunction *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_OnEvaluate instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\MovieScene\\UHT\\MovieSceneEasingFunction.gen.cpp"
                     ,0x23,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return 0.0;
}

// ~IMovieSceneEasingFunction @ 146185b40

void __thiscall
IMovieSceneEasingFunction::~IMovieSceneEasingFunction(IMovieSceneEasingFunction *this)

{
  *this = (IMovieSceneEasingFunction)&___7IMovieSceneEasingFunction__6B_;
  return;
}

// Evaluate @ 1461a20c0

float __thiscall IMovieSceneEasingFunction::Evaluate(IMovieSceneEasingFunction *this,float param_1)

{
  return 0.0;
}

// EvaluateWith @ 1461a45a0

float __cdecl
IMovieSceneEasingFunction::EvaluateWith
          (TScriptInterface<IMovieSceneEasingFunction> *param_1,float param_2)

{
  float fVar1;
  
  if ((*(UObject **)param_1 != (UObject *)0x0) &&
     (*(longlong **)&param_1->field_0x8 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001461a45b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (float)(**(code **)(**(longlong **)&param_1->field_0x8 + 0x10))();
    return fVar1;
  }
  fVar1 = Execute_OnEvaluate(*(UObject **)param_1,param_2);
  return fVar1;
}

// _getUObject @ 1461e2270

UObject * __thiscall IMovieSceneEasingFunction::_getUObject(IMovieSceneEasingFunction *this)

{
  return (UObject *)0x0;
}

