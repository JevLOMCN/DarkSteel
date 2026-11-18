// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ShouldSkipProperty @ 14786f7e0

bool __thiscall
`UActorComponent::DetermineUCSModifiedProperties'::__l5::FComponentPropertySkipper::
ShouldSkipProperty(void *this,FProperty *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&MD_SkipUCSModifiedProperties,L"SkipUCSModifiedProperties");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((((param_1->PropertyFlags >> 0xd & 1) == 0) &&
      ((param_1->PropertyFlags & (CPF_Interp|CPF_Edit)) != CPF_None)) &&
     ((*(uint *)(param_1->_padding_ + 0x18) >> 0x19 & 1) == 0)) {
    return false;
  }
  return true;
}

