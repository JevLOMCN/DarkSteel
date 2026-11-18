// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 2

// IsEnabled @ 142fe2bb0

bool __thiscall SWidget::IsEnabled(SWidget *this)

{
  return (bool)this->EnabledStateAttribute;
}

// ShouldBeEnabled @ 1430f0360

bool __thiscall SWidget::ShouldBeEnabled(SWidget *this,bool param_1)

{
  if ((param_1) &&
     (this->EnabledStateAttribute !=
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
    return true;
  }
  return false;
}

