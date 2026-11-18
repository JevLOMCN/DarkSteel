// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 3

// TRangedForConstIterator @ 146d039b0

TRangedForConstIterator * __thiscall
TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForConstIterator::TRangedForConstIterator
          (TRangedForConstIterator *this,
          TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_1,TConstSetBitIterator<FDefaultBitArrayAllocator> *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong lVar2;
  
  this->_padding_ = (longlong)param_1;
  pTVar1 = param_2->Array;
  this->_padding_ = param_2->_padding_;
  this->_padding_ = (longlong)pTVar1;
  lVar2 = *(longlong *)&param_2->BaseBitIndex;
  this->_padding_ = *(longlong *)&param_2->UnvisitedBitMask;
  this->_padding_ = lVar2;
  this->InitialNum = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  return this;
}

// operator!= @ 146d06460

bool __thiscall
TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForConstIterator::operator!=
          (TRangedForConstIterator *this,TRangedForConstIterator *param_1)

{
  undefined1 local_res8 [8];
  
  if (*(int *)(this->_padding_ + 8) - *(int *)(this->_padding_ + 0x34) != this->InitialNum) {
    `TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
  }
  if (((*(int *)((longlong)&this->_padding_ + 4) == *(int *)((longlong)&param_1->_padding_ + 4)) &&
      (this->_padding_ == param_1->_padding_)) && (this->_padding_ == param_1->_padding_)) {
    return false;
  }
  return true;
}

// operator() @ 1504fb820

bool __thiscall
`TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188890>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188890>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::TRangedForConstIterator::operator!=(TSparseArray<class_TSparseSetElement<class_FPrimitiveComponentId>,class_TSparseArrayAllocator<class_TSizedDefaultAllocator<32>,class_FDefaultBitArrayAllocator>_>::TRangedForConstIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

