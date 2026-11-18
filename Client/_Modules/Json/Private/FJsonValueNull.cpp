// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 4

// FJsonValueNull @ 141dc4d50

FJsonValueNull * __thiscall FJsonValueNull::FJsonValueNull(FJsonValueNull *this)

{
  *(undefined4 *)&this->field_0x8 = 1;
  *(undefined ***)this = &___7FJsonValueNull__6B_;
  return this;
}

// ~FJsonValueNull @ 141dc6540

void __thiscall FJsonValueNull::~FJsonValueNull(FJsonValueNull *this)

{
  *(undefined ***)this = &___7FJsonValue__6B_;
  return;
}

// GetMemoryFootprint @ 141dd6880

ulong64 __thiscall FJsonValueNull::GetMemoryFootprint(FJsonValueNull *this)

{
  return 0x10;
}

// GetType @ 141dd73d0

FString * __thiscall FJsonValueNull::GetType(FJsonValueNull *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Null");
  return __return_storage_ptr__;
}

