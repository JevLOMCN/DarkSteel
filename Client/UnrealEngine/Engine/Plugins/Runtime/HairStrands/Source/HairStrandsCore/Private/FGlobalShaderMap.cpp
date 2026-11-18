// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// operator() @ 1505930d0

bool __thiscall
`FGlobalShaderMap::GetShader<FHairInterpolationCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    FHairInterpolationCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FHairInterpolationCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FHairInterpolationCS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

