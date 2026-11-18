// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// AddToSelection @ 1427cb3f0

void __thiscall IAccessibleTableRow::AddToSelection(IAccessibleTableRow *this)

{
  return;
}

// GetOwningTable @ 142813d70

TSharedPtr<IAccessibleWidget,1> * __thiscall
IAccessibleTableRow::GetOwningTable
          (IAccessibleTableRow *this,TSharedPtr<IAccessibleWidget,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// IsSelected @ 14281f7d0

bool __thiscall IAccessibleTableRow::IsSelected(IAccessibleTableRow *this)

{
  return false;
}

// RemoveFromSelection @ 142832980

void __thiscall IAccessibleTableRow::RemoveFromSelection(IAccessibleTableRow *this)

{
  return;
}

// Select @ 142834b90

void __thiscall IAccessibleTableRow::Select(IAccessibleTableRow *this)

{
  return;
}

