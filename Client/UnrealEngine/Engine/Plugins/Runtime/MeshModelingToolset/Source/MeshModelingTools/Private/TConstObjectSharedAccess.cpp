// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// operator() @ 150576fd0

bool __thiscall
`UE::Geometry::TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>::
~TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6609466657179959372>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6609466657179959372>,
                       &`public:___cdecl_`public:___cdecl_UE::Geometry::TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>::~TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

