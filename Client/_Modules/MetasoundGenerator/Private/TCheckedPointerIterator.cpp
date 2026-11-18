// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 1

// operator() @ 1505632f0

bool __thiscall
`TCheckedPointerIterator<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>_const_,int,0>
::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2846541355549720852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2846541355549720852>,
                       &`public:___cdecl_`public:_bool___cdecl_TCheckedPointerIterator<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>_const_,int,0>::operator!=(TCheckedPointerIterator<class_TUniquePtr<class_Metasound::IOperatorBuildError,struct_TDefaultDelete<class_Metasound::IOperatorBuildError>_>_const_,int,0>_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

