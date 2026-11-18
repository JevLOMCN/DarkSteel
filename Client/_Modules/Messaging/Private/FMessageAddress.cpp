// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 1

// ToString @ 142d4f000

FString * __thiscall
FMessageAddress::ToString(FMessageAddress *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  FGuid::AppendString(&this->UniqueId,__return_storage_ptr__,Digits);
  return __return_storage_ptr__;
}

