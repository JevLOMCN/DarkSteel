// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 1

// ToString @ 14313e0a0

FString * __thiscall
FGuid::ToString(FGuid *this,FString *__return_storage_ptr__,EGuidFormats param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  AppendString(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

