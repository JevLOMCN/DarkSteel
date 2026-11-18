// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 1

// FMemoryReaderView @ 1445a3ab0

FMemoryReaderView * __thiscall
FMemoryReaderView::FMemoryReaderView
          (FMemoryReaderView *this,TMemoryView<void_const_> *param_1,bool param_2)

{
  void *pvVar1;
  ulong64 uVar2;
  
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
  pvVar1 = param_1->Data;
  uVar2 = param_1->Size;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMemoryReaderView__6B_;
  this->LimitSize = 0x7fffffffffffffff;
  (this->Bytes).Data = pvVar1;
  (this->Bytes).Size = uVar2;
  FArchiveState::SetIsLoading((FArchiveState *)this,true);
  (**(code **)(this->_padding_ + 0x108))(this,param_2);
  return this;
}

