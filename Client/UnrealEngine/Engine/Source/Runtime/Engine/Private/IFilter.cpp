// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~IFilter<FAutoCompleteCommand_const_&> @ 14890c000

void __thiscall
IFilter<FAutoCompleteCommand_const_&>::~IFilter<FAutoCompleteCommand_const_&>
          (IFilter<FAutoCompleteCommand_const_&> *this)

{
  *this = (IFilter<FAutoCompleteCommand_const_&>)&___7__IFilter_AEBUFAutoCompleteCommand____6B_;
  return;
}

// GetName @ 14895a360

FString * __thiscall
IFilter<FAutoCompleteCommand_const_&>::GetName
          (IFilter<FAutoCompleteCommand_const_&> *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

