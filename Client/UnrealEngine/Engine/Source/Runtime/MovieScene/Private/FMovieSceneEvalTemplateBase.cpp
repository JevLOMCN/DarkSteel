// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 9

// StaticStruct @ 146053c60

UScriptStruct * __cdecl FMovieSceneEvalTemplateBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvalTemplateBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneEvalTemplateBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase,(UObject *)pUVar1,
                         L"MovieSceneEvalTemplateBase");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEvalTemplateBase.OuterSingleton;
}

// SetupOverrides @ 146053ca0

void __thiscall FMovieSceneEvalTemplateBase::SetupOverrides(FMovieSceneEvalTemplateBase *this)

{
  return;
}

// Setup @ 146053cb0

void __thiscall
FMovieSceneEvalTemplateBase::Setup
          (FMovieSceneEvalTemplateBase *this,FPersistentEvaluationData *param_1,
          IMovieScenePlayer *param_2)

{
  undefined1 local_res20 [8];
  
  `FMovieSceneEvalTemplateBase::Setup'::__l2::<lambda_1>::operator()(local_res20);
  return;
}

// TearDown @ 146053d00

void __thiscall
FMovieSceneEvalTemplateBase::TearDown
          (FMovieSceneEvalTemplateBase *this,FPersistentEvaluationData *param_1,
          IMovieScenePlayer *param_2)

{
  undefined1 local_res20 [8];
  
  `FMovieSceneEvalTemplateBase::TearDown'::__l2::<lambda_1>::operator()(local_res20);
  return;
}

// GetScriptStructImpl @ 146053d10

UScriptStruct * __thiscall
FMovieSceneEvalTemplateBase::GetScriptStructImpl(FMovieSceneEvalTemplateBase *this)

{
  UPackage *pUVar1;
  undefined1 local_res10 [24];
  
  `FMovieSceneEvalTemplateBase::GetScriptStructImpl'::__l2::<lambda_1>::operator()(local_res10);
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvalTemplateBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneEvalTemplateBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase,(UObject *)pUVar1,
                         L"MovieSceneEvalTemplateBase");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEvalTemplateBase.OuterSingleton;
}

// ~FMovieSceneEvalTemplateBase @ 146059540

void __thiscall
FMovieSceneEvalTemplateBase::~FMovieSceneEvalTemplateBase(FMovieSceneEvalTemplateBase *this)

{
  this->_padding_ = (longlong)&___7FMovieSceneEvalTemplateBase__6B_;
  return;
}

// operator() @ 1504e1d40

bool __thiscall
`FMovieSceneEvalTemplateBase::GetScriptStructImpl'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7303358777498009729>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7303358777498009729>,
                       &`public:___cdecl_`protected:_virtual_class_UScriptStruct&___ptr64___cdecl_FMovieSceneEvalTemplateBase::GetScriptStructImpl(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e1d80

bool __thiscall `FMovieSceneEvalTemplateBase::Setup'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7303358777498009709>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7303358777498009709>,
                       &`public:___cdecl_`protected:_virtual_void___cdecl_FMovieSceneEvalTemplateBase::Setup(FPersistentEvaluationData&___ptr64,IMovieScenePlayer&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e1dc0

bool __thiscall `FMovieSceneEvalTemplateBase::TearDown'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7303358777498009721>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7303358777498009721>,
                       &`public:___cdecl_`protected:_virtual_void___cdecl_FMovieSceneEvalTemplateBase::TearDown(FPersistentEvaluationData&___ptr64,IMovieScenePlayer&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

