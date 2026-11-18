// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// GetArchiveName @ 141ef9040

FString * __thiscall
FStaticMemoryReader::GetArchiveName(FStaticMemoryReader *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FStaticMemoryReader");
  return __return_storage_ptr__;
}

// Serialize @ 141f10700

void __thiscall
FStaticMemoryReader::Serialize(FStaticMemoryReader *this,void *param_1,long64 param_2)

{
  if ((param_2 != 0) && ((this->_padding_ & 0x200) == 0)) {
    if (this->_padding_ + param_2 <= this->NumBytes) {
      memcpy(param_1,this->Bytes + this->_padding_,param_2);
      this->_padding_ = this->_padding_ + param_2;
      return;
    }
    FArchiveState::SetError((FArchiveState *)this);
  }
  return;
}

// TotalSize @ 141f16f30

long64 __thiscall FStaticMemoryReader::TotalSize(FStaticMemoryReader *this)

{
  return this->NumBytes;
}

