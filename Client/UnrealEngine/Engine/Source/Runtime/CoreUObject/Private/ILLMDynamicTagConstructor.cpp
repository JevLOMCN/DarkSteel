// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// ~ILLMDynamicTagConstructor @ 142259940

void __thiscall
ILLMDynamicTagConstructor::~ILLMDynamicTagConstructor(ILLMDynamicTagConstructor *this)

{
  return;
}

// GetStatName @ 1422713d0

FString * __thiscall
ILLMDynamicTagConstructor::GetStatName
          (ILLMDynamicTagConstructor *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// NeedsStatConstruction @ 142279860

bool __thiscall ILLMDynamicTagConstructor::NeedsStatConstruction(ILLMDynamicTagConstructor *this)

{
  return true;
}

