// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// operator() @ 1504dea80

bool __thiscall
`FGlobalShaderMap::GetShader<UE::Landscape::Culling::FBuildLandscapeTileDataCS>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    UE::Landscape::Culling::FBuildLandscapeTileDataCS::GetStaticType();
    UE::Landscape::Culling::FBuildLandscapeTileDataCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<UE::Landscape::Culling::FBuildLandscapeTileDataCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<UE::Landscape::Culling::FBuildLandscapeTileDataCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

