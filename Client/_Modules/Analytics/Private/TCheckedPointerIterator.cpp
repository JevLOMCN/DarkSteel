// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 6

// TCheckedPointerIterator<FAnalyticsEventAttribute_const_,int,0> @ 143133120

TCheckedPointerIterator<FAnalyticsEventAttribute_const_,int,0> * __thiscall
TCheckedPointerIterator<FAnalyticsEventAttribute_const_,int,0>::
TCheckedPointerIterator<FAnalyticsEventAttribute_const_,int,0>
          (TCheckedPointerIterator<FAnalyticsEventAttribute_const_,int,0> *this,int *param_1,
          FAnalyticsEventAttribute *param_2)

{
  this->Ptr = param_2;
  this->CurrentNum = param_1;
  this->InitialNum = *param_1;
  return this;
}

// TCheckedPointerIterator<TWeakPtr<IAnalyticsSpan,1>_const_,int,0> @ 143133140

TCheckedPointerIterator<TWeakPtr<IAnalyticsSpan,1>_const_,int,0> * __thiscall
TCheckedPointerIterator<TWeakPtr<IAnalyticsSpan,1>_const_,int,0>::
TCheckedPointerIterator<TWeakPtr<IAnalyticsSpan,1>_const_,int,0>
          (TCheckedPointerIterator<TWeakPtr<IAnalyticsSpan,1>_const_,int,0> *this,int *param_1,
          TWeakPtr<IAnalyticsSpan,1> *param_2)

{
  this->Ptr = param_2;
  this->CurrentNum = param_1;
  this->InitialNum = *param_1;
  return this;
}

// TCheckedPointerIterator<FAnalyticsEventAttribute,int,0> @ 143133160

TCheckedPointerIterator<FAnalyticsEventAttribute,int,0> * __thiscall
TCheckedPointerIterator<FAnalyticsEventAttribute,int,0>::
TCheckedPointerIterator<FAnalyticsEventAttribute,int,0>
          (TCheckedPointerIterator<FAnalyticsEventAttribute,int,0> *this,int *param_1,
          FAnalyticsEventAttribute *param_2)

{
  this->Ptr = param_2;
  this->CurrentNum = param_1;
  this->InitialNum = *param_1;
  return this;
}

// operator() @ 15049b5b0

bool __thiscall
`TCheckedPointerIterator<FAnalyticsEventAttribute_const_,int,0>::operator!='::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2846541355549720852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2846541355549720852>,
                       &`public:___cdecl_`public:_bool___cdecl_TCheckedPointerIterator<FAnalyticsEventAttribute_const_,int,0>::operator!=(TCheckedPointerIterator<struct_FAnalyticsEventAttribute_const_,int,0>_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049b5f0

bool __thiscall
`TCheckedPointerIterator<TWeakPtr<IAnalyticsSpan,1>_const_,int,0>::operator!='::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2846541355549720852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2846541355549720852>,
                       &`public:___cdecl_`public:_bool___cdecl_TCheckedPointerIterator<TWeakPtr<IAnalyticsSpan,1>_const_,int,0>::operator!=(TCheckedPointerIterator<class_TWeakPtr<class_IAnalyticsSpan,1>_const_,int,0>_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049b630

bool __thiscall
`TCheckedPointerIterator<FAnalyticsEventAttribute,int,0>::operator!='::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2846541355549720852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2846541355549720852>,
                       &`public:___cdecl_`public:_bool___cdecl_TCheckedPointerIterator<FAnalyticsEventAttribute,int,0>::operator!=(TCheckedPointerIterator<struct_FAnalyticsEventAttribute,int,0>_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

