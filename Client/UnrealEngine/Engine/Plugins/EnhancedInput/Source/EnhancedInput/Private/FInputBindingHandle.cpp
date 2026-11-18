// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 2

// FInputBindingHandle @ 14a6ca650

FInputBindingHandle * __thiscall FInputBindingHandle::FInputBindingHandle(FInputBindingHandle *this)

{
  this->_padding_ = (longlong)&___7FInputBindingHandle__6B_;
  this->Handle = GInputBindingHandle;
  GInputBindingHandle = GInputBindingHandle + 1;
  return this;
}

// ~FInputBindingHandle @ 14a6cee00

void __thiscall FInputBindingHandle::~FInputBindingHandle(FInputBindingHandle *this)

{
  return;
}

