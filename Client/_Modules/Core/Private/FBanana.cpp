// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ~FBanana @ 141cf1630

void __thiscall FBanana::~FBanana(FBanana *this)

{
  *this = (FBanana)&___7IFruit__6B_;
  return;
}

// Name @ 141d035e0

FString * __thiscall FBanana::Name(FBanana *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Banana");
  return __return_storage_ptr__;
}

