// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ~FStrawberry @ 141cf1730

void __thiscall FStrawberry::~FStrawberry(FStrawberry *this)

{
  *this = (FStrawberry)&___7IFruit__6B_;
  return;
}

// Name @ 141d03610

FString * __thiscall FStrawberry::Name(FStrawberry *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Strawberry");
  return __return_storage_ptr__;
}

