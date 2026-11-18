// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// operator() @ 15058ea70

bool __thiscall
`UE::MoviePipeline::FPanoramicPane::FCubicInterpolationParams::GetParamsForType'::__l4::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8701330023430226007>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8701330023430226007>,
                       &`public:___cdecl_`public:_static_struct_UE::MoviePipeline::FPanoramicPane::FCubicInterpolationParams___cdecl_UE::MoviePipeline::FPanoramicPane::FCubicInterpolationParams::GetParamsForType(EMoviePipelinePanoramicFilterType)'::`4'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

