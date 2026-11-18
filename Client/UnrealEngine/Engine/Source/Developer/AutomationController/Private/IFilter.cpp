// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 2

// GetName @ 148c4ad50

FString * __thiscall
IFilter<TSharedPtr<IAutomationReport,1>_const_&>::GetName
          (IFilter<TSharedPtr<IAutomationReport,1>_const_&> *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// ~IFilter<TSharedPtr<IAutomationReport,1>_const_&> @ 148c53b70

void __thiscall
IFilter<TSharedPtr<IAutomationReport,1>_const_&>::~IFilter<TSharedPtr<IAutomationReport,1>_const_&>
          (IFilter<TSharedPtr<IAutomationReport,1>_const_&> *this)

{
  *this = (IFilter<TSharedPtr<IAutomationReport,1>_const_&>)
          &___7__IFilter_AEBV__TSharedPtr_VIAutomationReport___00____6B_;
  return;
}

