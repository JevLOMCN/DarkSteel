// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// FMemoryReaderView @ 14d4b15d0

FMemoryReaderView * __thiscall
FMemoryReaderView::FMemoryReaderView
          (FMemoryReaderView *this,TArrayView<unsigned_char_const_,int> *param_1,bool param_2)

{
  int iVar1;
  uchar *puVar2;
  
  iVar1 = param_1->ArrayNum;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)this);
  puVar2 = param_1->DataPtr;
  this->_padding_ = (longlong)&___7FMemoryReaderView__6B_;
  this->_padding_ = 0;
  (this->Bytes).Data = puVar2;
  (this->Bytes).Size = (longlong)iVar1;
  this->LimitSize = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading((FArchiveState *)this,true);
  (**(code **)(this->_padding_ + 0x108))(this,param_2);
  this->_padding_ = (longlong)&___7FMemoryReaderView__6B_;
  return this;
}

