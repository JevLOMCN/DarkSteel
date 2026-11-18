// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// UseMethod @ 143015fd0

FPopupMethodReply * __cdecl
FPopupMethodReply::UseMethod(FPopupMethodReply *__return_storage_ptr__,EPopupMethod param_1)

{
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->PopupMethod = param_1;
  __return_storage_ptr__->ShouldThrottle = Yes;
  return __return_storage_ptr__;
}

