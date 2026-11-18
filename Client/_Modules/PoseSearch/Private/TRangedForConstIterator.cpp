// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 8

// operator!= @ 14a91bf50

bool __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::TRangedForConstIterator::operator!=
          (TRangedForConstIterator *this,TRangedForConstIterator *param_1)

{
  undefined1 local_res8 [8];
  
  if (*(int *)(this->_padding_ + 0x58) - *(int *)(this->_padding_ + 0x7c) != this->InitialNum) {
    `TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
  }
  if (((*(int *)((longlong)&this->_padding_ + 4) == *(int *)((longlong)&param_1->_padding_ + 4)) &&
      (this->_padding_ == param_1->_padding_)) && (this->_padding_ == param_1->_padding_)) {
    return false;
  }
  return true;
}

// operator() @ 150556330

bool __thiscall
`TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188890>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188890>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<TSparseSetElement<UObject_const*___ptr64>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>::TRangedForConstIterator::operator!=(TSparseArray<class_TSparseSetElement<class_UObject_const*___ptr64>,class_TInlineSparseArrayAllocator<8,class_TSparseArrayAllocator<class_TMemStackAllocator<0>,class_TMemStackAllocator<0>_>_>_>::TRangedForConstIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150556370

bool __thiscall
`TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188890>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188890>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>::TRangedForConstIterator::operator!=(TSparseArray<class_TSparseSetElement<struct_TTuple<class_FName,int>_>,class_TInlineSparseArrayAllocator<4,class_TSparseArrayAllocator<class_TSizedDefaultAllocator<32>,class_TSizedDefaultAllocator<32>_>_>_>::TRangedForConstIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505563b0

bool __thiscall
`TSparseArray<TSparseSetElement<UE::PoseSearch::FSearchContext::FPoseCandidate>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188890>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188890>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<TSparseSetElement<UE::PoseSearch::FSearchContext::FPoseCandidate>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::TRangedForConstIterator::operator!=(TSparseArray<class_TSparseSetElement<struct_UE::PoseSearch::FSearchContext::FPoseCandidate>,class_TSparseArrayAllocator<class_TSizedDefaultAllocator<32>,class_FDefaultBitArrayAllocator>_>::TRangedForConstIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150556630

bool __thiscall
`TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188890>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188890>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::TRangedForConstIterator::operator!=(TSparseArray<class_TSparseSetElement<struct_TTuple<unsigned_short,unsigned_short>_>,class_TSparseArrayAllocator<class_TSizedDefaultAllocator<32>,class_FDefaultBitArrayAllocator>_>::TRangedForConstIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150556cf0

bool __thiscall
`TSparseArray<TSparseSetElement<TTuple<int,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188890>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188890>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<TSparseSetElement<TTuple<int,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>::TRangedForConstIterator::operator!=(TSparseArray<class_TSparseSetElement<struct_TTuple<int,struct_UE::PoseSearch::FSearchResult>_>,class_TInlineSparseArrayAllocator<16,class_TSparseArrayAllocator<class_TMemStackAllocator<0>,class_TMemStackAllocator<0>_>_>_>::TRangedForConstIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150556d30

bool __thiscall
`TSparseArray<TSparseSetElement<TTuple<UObject_const_*,int>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188890>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188890>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<TSparseSetElement<TTuple<UObject_const*___ptr64,int>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>::TRangedForConstIterator::operator!=(TSparseArray<class_TSparseSetElement<struct_TTuple<class_UObject_const*___ptr64,int>_>,class_TInlineSparseArrayAllocator<16,class_TSparseArrayAllocator<class_TMemStackAllocator<0>,class_TMemStackAllocator<0>_>_>_>::TRangedForConstIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150556d70

bool __thiscall
`TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188890>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188890>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const*___ptr64,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::TRangedForConstIterator::operator!=(TSparseArray<class_TSparseSetElement<struct_TTuple<class_UPoseSearchDatabase_const*___ptr64,struct_UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,class_TSparseArrayAllocator<class_TSizedDefaultAllocator<32>,class_FDefaultBitArrayAllocator>_>::TRangedForConstIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

