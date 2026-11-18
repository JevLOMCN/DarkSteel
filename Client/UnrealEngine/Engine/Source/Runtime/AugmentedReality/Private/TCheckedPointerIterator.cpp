// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 2

// operator() @ 150578560

bool __thiscall
`TCheckedPointerIterator<AARActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2846541355549720852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2846541355549720852>,
                       &`public:___cdecl_`public:_bool___cdecl_TCheckedPointerIterator<AARActor*___ptr64,int,0>::operator!=(TCheckedPointerIterator<class_AARActor*___ptr64,int,0>_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505785a0

bool __thiscall
`TCheckedPointerIterator<UARTrackedGeometry_*,int,0>::operator!='::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2846541355549720852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2846541355549720852>,
                       &`public:___cdecl_`public:_bool___cdecl_TCheckedPointerIterator<UARTrackedGeometry*___ptr64,int,0>::operator!=(TCheckedPointerIterator<class_UARTrackedGeometry*___ptr64,int,0>_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

