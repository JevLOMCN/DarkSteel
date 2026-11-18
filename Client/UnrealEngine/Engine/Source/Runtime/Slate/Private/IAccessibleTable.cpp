// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// CanSupportMultiSelection @ 1427eca20

bool __thiscall IAccessibleTable::CanSupportMultiSelection(IAccessibleTable *this)

{
  return false;
}

// GetSelectedItems @ 1428150f0

TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> * __thiscall
IAccessibleTable::GetSelectedItems
          (IAccessibleTable *this,
          TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// IsSelectionRequired @ 14281f7f0

bool __thiscall IAccessibleTable::IsSelectionRequired(IAccessibleTable *this)

{
  return false;
}

