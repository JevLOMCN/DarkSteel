// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 4

// TCheckedPointerIterator<wchar_t,int,0> @ 14d0ecb80

TCheckedPointerIterator<wchar_t,int,0> * __thiscall
TCheckedPointerIterator<wchar_t,int,0>::TCheckedPointerIterator<wchar_t,int,0>
          (TCheckedPointerIterator<wchar_t,int,0> *this,int *param_1,wchar_t *param_2)

{
  this->Ptr = param_2;
  this->CurrentNum = param_1;
  this->InitialNum = *param_1;
  return this;
}

// operator() @ 15057a120

bool __thiscall
`TCheckedPointerIterator<TSharedPtr<FNamingTokenDataTreeItem,1>_const_,int,0>::operator!='::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2846541355549720852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2846541355549720852>,
                       &`public:___cdecl_`public:_bool___cdecl_TCheckedPointerIterator<TSharedPtr<FNamingTokenDataTreeItem,1>_const_,int,0>::operator!=(TCheckedPointerIterator<class_TSharedPtr<struct_FNamingTokenDataTreeItem,1>_const_,int,0>_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15057a160

bool __thiscall
`TCheckedPointerIterator<ISyntaxTokenizer::FTokenizedLine,int,0>::operator!='::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2846541355549720852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2846541355549720852>,
                       &`public:___cdecl_`public:_bool___cdecl_TCheckedPointerIterator<ISyntaxTokenizer::FTokenizedLine,int,0>::operator!=(TCheckedPointerIterator<struct_ISyntaxTokenizer::FTokenizedLine,int,0>_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15057a1a0

bool __thiscall
`TCheckedPointerIterator<TSharedPtr<FNamingTokenDataTreeItem,1>,int,0>::operator!='::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2846541355549720852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2846541355549720852>,
                       &`public:___cdecl_`public:_bool___cdecl_TCheckedPointerIterator<TSharedPtr<FNamingTokenDataTreeItem,1>,int,0>::operator!=(TCheckedPointerIterator<class_TSharedPtr<struct_FNamingTokenDataTreeItem,1>,int,0>_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

