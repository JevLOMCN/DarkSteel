// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 10

// StaticStruct @ 146164110

UScriptStruct * __cdecl FMovieSceneEvalTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvalTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneEvalTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,(UObject *)pUVar1,
                         L"MovieSceneEvalTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEvalTemplate.OuterSingleton;
}

// Evaluate @ 1461a19b0

void __thiscall
FMovieSceneEvalTemplate::Evaluate
          (FMovieSceneEvalTemplate *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneContext *param_2,FPersistentEvaluationData *param_3,
          FMovieSceneExecutionTokens *param_4)

{
  undefined1 local_18 [24];
  
  `FMovieSceneEvalTemplate::Evaluate'::__l2::<lambda_1>::operator()(local_18);
  return;
}

// EvaluateEasing @ 1461a28c0

float __thiscall
FMovieSceneEvalTemplate::EvaluateEasing(FMovieSceneEvalTemplate *this,FFrameTime param_1)

{
  bool bVar1;
  UMovieSceneSection *this_00;
  float fVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->SourceSectionPtr).WeakPtr);
  if (bVar1) {
    this_00 = (UMovieSceneSection *)FWeakObjectPtr::Get(&(this->SourceSectionPtr).WeakPtr);
    fVar2 = UMovieSceneSection::EvaluateEasing(this_00,param_1);
    return fVar2;
  }
  return __real_3f800000;
}

// EvaluateSwept @ 1461a3e80

void __thiscall
FMovieSceneEvalTemplate::EvaluateSwept
          (FMovieSceneEvalTemplate *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneContext *param_2,TRange<FFrameNumber> *param_3,
          FPersistentEvaluationData *param_4,FMovieSceneExecutionTokens *param_5)

{
  undefined1 local_18 [24];
  
  `FMovieSceneEvalTemplate::EvaluateSwept'::__l2::<lambda_1>::operator()(local_18);
  return;
}

// Initialize @ 1461b59d0

void __thiscall
FMovieSceneEvalTemplate::Initialize
          (FMovieSceneEvalTemplate *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneContext *param_2,FPersistentEvaluationData *param_3,IMovieScenePlayer *param_4)

{
  undefined1 local_18 [24];
  
  `FMovieSceneEvalTemplate::Initialize'::__l2::<lambda_1>::operator()(local_18);
  return;
}

// Interrogate @ 1461b9740

void __thiscall
FMovieSceneEvalTemplate::Interrogate
          (FMovieSceneEvalTemplate *this,FMovieSceneContext *param_1,
          FMovieSceneInterrogationData *param_2,UObject *param_3)

{
  return;
}

// Interrogate @ 1461b9750

void __thiscall
FMovieSceneEvalTemplate::Interrogate
          (FMovieSceneEvalTemplate *this,FMovieSceneContext *param_1,TRange<FFrameNumber> *param_2,
          FMovieSceneInterrogationData *param_3,UObject *param_4)

{
  return;
}

// operator() @ 1504e5f20

bool __thiscall `FMovieSceneEvalTemplate::Evaluate'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6449989736885911435>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6449989736885911435>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FMovieSceneEvalTemplate::Evaluate(FMovieSceneEvaluationOperand_const&___ptr64,FMovieSceneContext_const&___ptr64,FPersistentEvaluationData_const&___ptr64,FMovieSceneExecutionTokens&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e5fa0

bool __thiscall `FMovieSceneEvalTemplate::EvaluateSwept'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6449989736885911418>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6449989736885911418>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FMovieSceneEvalTemplate::EvaluateSwept(FMovieSceneEvaluationOperand_const&___ptr64,FMovieSceneContext_const&___ptr64,TRange<FFrameNumber>_const&___ptr64,FPersistentEvaluationData_const&___ptr64,FMovieSceneExecutionTokens&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e6020

bool __thiscall `FMovieSceneEvalTemplate::Initialize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6449989736885911451>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6449989736885911451>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FMovieSceneEvalTemplate::Initialize(FMovieSceneEvaluationOperand_const&___ptr64,FMovieSceneContext_const&___ptr64,FPersistentEvaluationData&___ptr64,IMovieScenePlayer&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

