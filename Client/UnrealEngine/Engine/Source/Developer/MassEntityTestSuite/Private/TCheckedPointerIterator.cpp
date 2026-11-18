// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 15

// TCheckedPointerIterator<int_const_,int,0> @ 1470f1e90

TCheckedPointerIterator<int_const_,int,0> * __thiscall
TCheckedPointerIterator<int_const_,int,0>::TCheckedPointerIterator<int_const_,int,0>
          (TCheckedPointerIterator<int_const_,int,0> *this,int *param_1,int *param_2)

{
  this->Ptr = param_2;
  this->CurrentNum = param_1;
  this->InitialNum = *param_1;
  return this;
}

// TCheckedPointerIterator<int,int,0> @ 1470f1eb0

TCheckedPointerIterator<int,int,0> * __thiscall
TCheckedPointerIterator<int,int,0>::TCheckedPointerIterator<int,int,0>
          (TCheckedPointerIterator<int,int,0> *this,int *param_1,int *param_2)

{
  this->Ptr = param_2;
  this->CurrentNum = param_1;
  this->InitialNum = *param_1;
  return this;
}

// TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0> @ 1470f1ed0

TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0> * __thiscall
TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0>::
TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0>
          (TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0> *this,int *param_1,
          FArchetypeGroupType *param_2)

{
  this->Ptr = param_2;
  this->CurrentNum = param_1;
  this->InitialNum = *param_1;
  return this;
}

// TCheckedPointerIterator<FMassEntityHandle,int,0> @ 1470f1ef0

TCheckedPointerIterator<FMassEntityHandle,int,0> * __thiscall
TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
          (TCheckedPointerIterator<FMassEntityHandle,int,0> *this,int *param_1,
          FMassEntityHandle *param_2)

{
  this->Ptr = param_2;
  this->CurrentNum = param_1;
  this->InitialNum = *param_1;
  return this;
}

// TCheckedPointerIterator<enum_FMassEntityStorageTest::EEntityManagerMode,int,0> @ 1470f1f10

TCheckedPointerIterator<FMassEntityStorageTest::EEntityManagerMode,int,0> * __thiscall
TCheckedPointerIterator<enum_FMassEntityStorageTest::EEntityManagerMode,int,0>::
TCheckedPointerIterator<enum_FMassEntityStorageTest::EEntityManagerMode,int,0>
          (void *this,int *param_1,EEntityManagerMode *param_2)

{
  *(EEntityManagerMode **)this = param_2;
  *(int **)((longlong)this + 8) = param_1;
  *(int *)((longlong)this + 0x10) = *param_1;
  return this;
}

// operator() @ 150500010

bool __thiscall
`TCheckedPointerIterator<FMassArchetypeHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2846541355549720852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2846541355549720852>,
                       &`public:___cdecl_`public:_bool___cdecl_TCheckedPointerIterator<FMassArchetypeHandle_const_,int,0>::operator!=(TCheckedPointerIterator<struct_FMassArchetypeHandle_const_,int,0>_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150500050

bool __thiscall
`TCheckedPointerIterator<TObjectPtr<UMassProcessor>,int,0>::operator!='::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2846541355549720852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2846541355549720852>,
                       &`public:___cdecl_`public:_bool___cdecl_TCheckedPointerIterator<TObjectPtr<UMassProcessor>,int,0>::operator!=(TCheckedPointerIterator<struct_TObjectPtr<class_UMassProcessor>,int,0>_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150500090

bool __thiscall
`TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0>::operator!='::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2846541355549720852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2846541355549720852>,
                       &`public:___cdecl_`public:_bool___cdecl_TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0>::operator!=(TCheckedPointerIterator<struct_UE::Mass::FArchetypeGroupType,int,0>_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505000d0

bool __thiscall
`TCheckedPointerIterator<FConstSharedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2846541355549720852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2846541355549720852>,
                       &`public:___cdecl_`public:_bool___cdecl_TCheckedPointerIterator<FConstSharedStruct,int,0>::operator!=(TCheckedPointerIterator<struct_FConstSharedStruct,int,0>_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150500110

bool __thiscall
`TCheckedPointerIterator<FFarmVisualDataRow,int,0>::operator!='::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2846541355549720852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2846541355549720852>,
                       &`public:___cdecl_`public:_bool___cdecl_TCheckedPointerIterator<FFarmVisualDataRow,int,0>::operator!=(TCheckedPointerIterator<struct_FFarmVisualDataRow,int,0>_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150500150

bool __thiscall
`TCheckedPointerIterator<FMassArchetypeEntityCollection,int,0>::operator!='::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2846541355549720852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2846541355549720852>,
                       &`public:___cdecl_`public:_bool___cdecl_TCheckedPointerIterator<FMassArchetypeEntityCollection,int,0>::operator!=(TCheckedPointerIterator<struct_FMassArchetypeEntityCollection,int,0>_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150500190

bool __thiscall
`TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2846541355549720852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2846541355549720852>,
                       &`public:___cdecl_`public:_bool___cdecl_TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!=(TCheckedPointerIterator<struct_FMassEntityHandle,int,0>_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505001d0

bool __thiscall
`TCheckedPointerIterator<FSharedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2846541355549720852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2846541355549720852>,
                       &`public:___cdecl_`public:_bool___cdecl_TCheckedPointerIterator<FSharedStruct,int,0>::operator!=(TCheckedPointerIterator<struct_FSharedStruct,int,0>_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150500210

bool __thiscall
`TCheckedPointerIterator<TFunction<void___cdecl(FMassEntityManager_&)>,int,0>::operator!='::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2846541355549720852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2846541355549720852>,
                       &`public:___cdecl_`public:_bool___cdecl_TCheckedPointerIterator<TFunction<void___cdecl(FMassEntityManager&___ptr64)>,int,0>::operator!=(TCheckedPointerIterator<class_TFunction<void___cdecl(struct_FMassEntityManager&___ptr64)>,int,0>_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150500250

bool __thiscall
`TCheckedPointerIterator<enum_FMassEntityStorageTest::EEntityManagerMode,int,0>::operator!='::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2846541355549720852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2846541355549720852>,
                       &`public:___cdecl_`public:_bool___cdecl_TCheckedPointerIterator<FMassEntityStorageTest::EEntityManagerMode,int,0>::operator!=(TCheckedPointerIterator<enum_FMassEntityStorageTest::EEntityManagerMode,int,0>_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

