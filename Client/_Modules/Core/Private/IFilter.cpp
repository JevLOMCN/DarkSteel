// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ~IFilter<TextFilterTests::FTestFilterItem_const_*> @ 1419198d0

void __thiscall
IFilter<TextFilterTests::FTestFilterItem_const_*>::
~IFilter<TextFilterTests::FTestFilterItem_const_*>
          (IFilter<TextFilterTests::FTestFilterItem_const_*> *this)

{
  *this = (IFilter<TextFilterTests::FTestFilterItem_const_*>)
          &___7__IFilter_PEBUFTestFilterItem_TextFilterTests____6B_;
  return;
}

// GetName @ 1419489a0

FString * __thiscall
IFilter<TextFilterTests::FTestFilterItem_const_*>::GetName
          (IFilter<TextFilterTests::FTestFilterItem_const_*> *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

