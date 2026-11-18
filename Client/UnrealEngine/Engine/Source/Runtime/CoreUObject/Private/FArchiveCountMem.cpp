// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FArchiveCountMem @ 1420e8e20

FArchiveCountMem * __thiscall
FArchiveCountMem::FArchiveCountMem(FArchiveCountMem *this,UObject *param_1,bool param_2)

{
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = (longlong)&___7FArchiveCountMem__6B_;
  this->Num = 0;
  this->Max = 0;
  *(byte *)((longlong)&this->_padding_ + 3) =
       *(byte *)((longlong)&this->_padding_ + 3) & 0xef | param_2 << 4 | 4;
  if (param_1 != (UObject *)0x0) {
    (**(code **)(*(longlong *)param_1 + 200))(param_1,this);
  }
  return this;
}

// CountBytes @ 1420f5480

void __thiscall FArchiveCountMem::CountBytes(FArchiveCountMem *this,ulong64 param_1,ulong64 param_2)

{
  this->Num = this->Num + param_1;
  this->Max = this->Max + param_2;
  return;
}

// GetArchiveName @ 1420f8650

FString * __thiscall
FArchiveCountMem::GetArchiveName(FArchiveCountMem *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FArchiveCountMem");
  return __return_storage_ptr__;
}

