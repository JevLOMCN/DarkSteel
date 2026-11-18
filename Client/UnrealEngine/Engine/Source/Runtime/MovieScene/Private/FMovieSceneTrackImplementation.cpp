// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticStruct @ 146164c70

UScriptStruct * __cdecl FMovieSceneTrackImplementation::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackImplementation.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTrackImplementation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackImplementation,(UObject *)pUVar1,
                         L"MovieSceneTrackImplementation");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneTrackImplementation.OuterSingleton;
}

// Initialize @ 146164e60

void __thiscall
FMovieSceneTrackImplementation::Initialize
          (FMovieSceneTrackImplementation *this,FMovieSceneEvaluationTrack *param_1,
          TArrayView<FMovieSceneFieldEntry_ChildTemplate_const_,int> *param_2,
          FMovieSceneEvaluationOperand *param_3,FMovieSceneContext *param_4,
          FPersistentEvaluationData *param_5,IMovieScenePlayer *param_6)

{
  undefined1 local_18 [24];
  
  `FMovieSceneTrackImplementation::Initialize'::__l2::<lambda_1>::operator()(local_18);
  return;
}

// Evaluate @ 146164e80

void __thiscall
FMovieSceneTrackImplementation::Evaluate
          (FMovieSceneTrackImplementation *this,FMovieSceneEvaluationTrack *param_1,
          TArrayView<FMovieSceneFieldEntry_ChildTemplate_const_,int> *param_2,
          FMovieSceneEvaluationOperand *param_3,FMovieSceneContext *param_4,
          FPersistentEvaluationData *param_5,FMovieSceneExecutionTokens *param_6)

{
  undefined1 local_18 [24];
  
  `FMovieSceneTrackImplementation::Evaluate'::__l2::<lambda_1>::operator()(local_18);
  return;
}

// Interrogate @ 146164ea0

bool __thiscall
FMovieSceneTrackImplementation::Interrogate
          (FMovieSceneTrackImplementation *this,FMovieSceneContext *param_1,
          FMovieSceneInterrogationData *param_2,UObject *param_3)

{
  return false;
}

// operator() @ 1504e5f60

bool __thiscall `FMovieSceneTrackImplementation::Evaluate'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<9051385848217469025>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9051385848217469025>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FMovieSceneTrackImplementation::Evaluate(FMovieSceneEvaluationTrack_const&___ptr64,TArrayView<FMovieSceneFieldEntry_ChildTemplate_const_,int>,FMovieSceneEvaluationOperand_const&___ptr64,FMovieSceneContext_const&___ptr64,FPersistentEvaluationData_const&___ptr64,FMovieSceneExecutionTokens&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e6060

bool __thiscall
`FMovieSceneTrackImplementation::Initialize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<9051385848217469007>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9051385848217469007>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FMovieSceneTrackImplementation::Initialize(FMovieSceneEvaluationTrack_const&___ptr64,TArrayView<FMovieSceneFieldEntry_ChildTemplate_const_,int>,FMovieSceneEvaluationOperand_const&___ptr64,FMovieSceneContext_const&___ptr64,FPersistentEvaluationData&___ptr64,IMovieScenePlayer&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

