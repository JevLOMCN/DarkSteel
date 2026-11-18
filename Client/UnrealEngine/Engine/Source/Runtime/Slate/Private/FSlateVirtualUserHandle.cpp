// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// FSlateVirtualUserHandle @ 1426fcae0

FSlateVirtualUserHandle * __thiscall
FSlateVirtualUserHandle::FSlateVirtualUserHandle
          (FSlateVirtualUserHandle *this,int param_1,int param_2)

{
  this->UserIndex = param_1;
  this->_padding_ = (longlong)&___7FSlateVirtualUserHandle__6B_;
  this->VirtualUserIndex = param_2;
  return this;
}

// ~FSlateVirtualUserHandle @ 142701410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateVirtualUserHandle::~FSlateVirtualUserHandle(FSlateVirtualUserHandle *this)

{
  FSlateApplication *this_00;
  
  this->_padding_ = (longlong)&___7FSlateVirtualUserHandle__6B_;
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    this_00 = FSlateApplication::Get();
    FSlateApplication::UnregisterUser(this_00,this->UserIndex);
    return;
  }
  return;
}

