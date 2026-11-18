// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 2

// TRangedForConstIterator @ 14305d5e0

TRangedForConstIterator * __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForConstIterator::TRangedForConstIterator
          (TRangedForConstIterator *this,
          TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// operator!= @ 1430632e0

bool __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForConstIterator::operator!=
          (TRangedForConstIterator *this,TRangedForConstIterator *param_1)

{
  undefined1 local_res8 [8];
  
  if (*(int *)(this->_padding_ + 8) - *(int *)(this->_padding_ + 0x34) != this->InitialNum) {
    `TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
  }
  if (((*(int *)((longlong)&this->_padding_ + 4) == *(int *)((longlong)&param_1->_padding_ + 4)) &&
      (this->_padding_ == param_1->_padding_)) && (this->_padding_ == param_1->_padding_)) {
    return false;
  }
  return true;
}

