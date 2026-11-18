// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 6

// GetArchiveName @ 145e56650

FString * __thiscall
TMemoryHasher<FBlake3,FBlake3Hash>::GetArchiveName
          (TMemoryHasher<FBlake3,FBlake3Hash> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TMemoryHasherTemplate");
  return __return_storage_ptr__;
}

// Serialize @ 145e6c050

void __thiscall
TMemoryHasher<FBlake3,FBlake3Hash>::Serialize
          (TMemoryHasher<FBlake3,FBlake3Hash> *this,void *param_1,long64 param_2)

{
  FBlake3::Update(&this->BuilderState,param_1,param_2);
  return;
}

// TotalSize @ 145e70b90

long64 __thiscall
TMemoryHasher<FBlake3,FBlake3Hash>::TotalSize(TMemoryHasher<FBlake3,FBlake3Hash> *this)

{
  return 0;
}

// GetArchiveName @ 145e9cc90

FString * __thiscall
TMemoryHasher<FXxHash64Builder,FXxHash64>::GetArchiveName
          (TMemoryHasher<FXxHash64Builder,FXxHash64> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TMemoryHasherTemplate");
  return __return_storage_ptr__;
}

// Serialize @ 145eb3620

void __thiscall
TMemoryHasher<FXxHash64Builder,FXxHash64>::Serialize
          (TMemoryHasher<FXxHash64Builder,FXxHash64> *this,void *param_1,long64 param_2)

{
  FXxHash64Builder::Update(&this->BuilderState,param_1,param_2);
  return;
}

// TotalSize @ 145eba8c0

long64 __thiscall
TMemoryHasher<FXxHash64Builder,FXxHash64>::TotalSize
          (TMemoryHasher<FXxHash64Builder,FXxHash64> *this)

{
  return 0;
}

