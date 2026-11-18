// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// operator() @ 1504df090

bool __thiscall
`TNonNullPtr<FLandscapeGrassWeightExporter>::TNonNullPtr<FLandscapeGrassWeightExporter>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3336850153431629873>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3336850153431629873>,
                       &`public:___cdecl_`public:___cdecl_TNonNullPtr<FLandscapeGrassWeightExporter>::TNonNullPtr<FLandscapeGrassWeightExporter>(FLandscapeGrassWeightExporter*___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

