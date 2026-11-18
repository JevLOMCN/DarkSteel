// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 3

// operator() @ 1504f5890

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::AddCapability<FMovieSceneEvaluationState>'::__l2::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220243>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220243>,
                       &`public:___cdecl_`public:_struct_FMovieSceneEvaluationState&___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::AddCapability<FMovieSceneEvaluationState>(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f58d0

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::
AddCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability,bool_const_&>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220243>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220243>,
                       &`public:___cdecl_`public:_struct_UE::MovieScene::FSequenceDirectorPlaybackCapability&___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::AddCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability,bool_const&___ptr64>(bool_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f5910

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::
AddCapability<UE::UMG::FUMGLegacyPlayerProvider,FWidgetAnimationState_*>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220243>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220243>,
                       &`public:___cdecl_`public:_struct_UE::UMG::FUMGLegacyPlayerProvider&___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::AddCapability<UE::UMG::FUMGLegacyPlayerProvider,FWidgetAnimationState*___ptr64>(FWidgetAnimationState*___ptr64&&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

