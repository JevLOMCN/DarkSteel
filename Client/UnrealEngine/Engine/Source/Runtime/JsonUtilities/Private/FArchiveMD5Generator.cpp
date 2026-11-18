// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: JsonUtilities
// Functions: 4

// FArchiveMD5Generator @ 144625620

FArchiveMD5Generator * __thiscall
UE::JsonUtilities::FArchiveMD5Generator::FArchiveMD5Generator(FArchiveMD5Generator *this)

{
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = (longlong)&___7FArchiveMD5Generator_JsonUtilities_UE__6B_;
  FMD5::FMD5(&this->HashBuilder);
  (**(code **)(this->_padding_ + 200))(this,0);
  (**(code **)(this->_padding_ + 0xd8))(this,1);
  return this;
}

// operator<< @ 144625b30

FArchive * __thiscall
UE::JsonUtilities::FArchiveMD5Generator::operator<<(FArchiveMD5Generator *this,FName *param_1)

{
  FString local_18;
  
  ::FName::ToString(param_1,&local_18);
  ::operator<<((FArchive *)this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FArchive *)this;
}

// GetArchiveName @ 14462d440

FString * __thiscall
UE::JsonUtilities::FArchiveMD5Generator::GetArchiveName
          (FArchiveMD5Generator *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"UE::JsonUtilities::FArchiveMD5Generator");
  return __return_storage_ptr__;
}

// Serialize @ 14462f6a0

void __thiscall
UE::JsonUtilities::FArchiveMD5Generator::Serialize
          (FArchiveMD5Generator *this,void *param_1,long64 param_2)

{
  FMD5::Update(&this->HashBuilder,param_1,param_2);
  return;
}

