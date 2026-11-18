// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FArchiveFindAllRefs @ 141ed18e0

FArchiveFindAllRefs * __thiscall
FArchiveFindAllRefs::FArchiveFindAllRefs(FArchiveFindAllRefs *this,UObject *param_1)

{
  byte *pbVar1;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  this->_padding_ = (longlong)&___7FArchiveFindAllRefs__6B_;
  (this->References).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->References).ArrayNum = 0;
  (this->References).ArrayMax = 0;
  *(byte *)((longlong)&this->_padding_ + 2) =
       *(byte *)((longlong)&this->_padding_ + 2) & 0xbd | 0x10;
  (**(code **)(*(longlong *)param_1 + 200))(param_1,this);
  return this;
}

// operator<< @ 141ed6a70

FArchive * __thiscall FArchiveFindAllRefs::operator<<(FArchiveFindAllRefs *this,UObject **param_1)

{
  if (*param_1 != (UObject *)0x0) {
    TArray<UObject_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_*_const_&>
              (&this->References,param_1);
  }
  return (FArchive *)this;
}

// GetArchiveName @ 141ef8f50

FString * __thiscall
FArchiveFindAllRefs::GetArchiveName(FArchiveFindAllRefs *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FArchiveFindAllRefs");
  return __return_storage_ptr__;
}

