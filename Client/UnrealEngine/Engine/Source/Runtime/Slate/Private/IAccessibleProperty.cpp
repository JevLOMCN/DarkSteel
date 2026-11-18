// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// GetMaximum @ 142878050

float __thiscall IAccessibleProperty::GetMaximum(IAccessibleProperty *this)

{
  return 0.0;
}

// GetMinimum @ 142878140

float __thiscall IAccessibleProperty::GetMinimum(IAccessibleProperty *this)

{
  return 0.0;
}

// GetStepSize @ 14287ae60

float __thiscall IAccessibleProperty::GetStepSize(IAccessibleProperty *this)

{
  return 0.0;
}

// GetValueAsVariant @ 14287da40

FVariant * __thiscall
IAccessibleProperty::GetValueAsVariant(IAccessibleProperty *this,FVariant *__return_storage_ptr__)

{
  __return_storage_ptr__->Type = Empty;
  (__return_storage_ptr__->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Value).ArrayNum = 0;
  (__return_storage_ptr__->Value).ArrayMax = 0;
  return __return_storage_ptr__;
}

// IsPassword @ 142882150

bool __thiscall IAccessibleProperty::IsPassword(IAccessibleProperty *this)

{
  return false;
}

// IsReadOnly @ 142882560

bool __thiscall IAccessibleProperty::IsReadOnly(IAccessibleProperty *this)

{
  return true;
}

// SetValue @ 14289b7c0

void __thiscall IAccessibleProperty::SetValue(IAccessibleProperty *this,FString *param_1)

{
  return;
}

