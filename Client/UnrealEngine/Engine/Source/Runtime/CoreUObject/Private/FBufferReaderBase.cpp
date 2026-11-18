// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FBufferReaderBase @ 1420a1650

FBufferReaderBase * __thiscall
FBufferReaderBase::FBufferReaderBase
          (FBufferReaderBase *this,void *param_1,long64 param_2,bool param_3,bool param_4)

{
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->ReaderData = param_1;
  this->_padding_ = (longlong)&___7FBufferReaderBase__6B_;
  this->ReaderPos = 0;
  this->ReaderSize = param_2;
  this->bFreeOnClose = param_3;
  FArchiveState::SetIsLoading((FArchiveState *)this,true);
  (**(code **)(this->_padding_ + 0x108))(this,param_4);
  return this;
}

