// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~IDynamicResolutionState @ 147b3d300

void __thiscall IDynamicResolutionState::~IDynamicResolutionState(IDynamicResolutionState *this)

{
  *this = (IDynamicResolutionState)&___7IDynamicResolutionState__6B_;
  return;
}

// GetResolutionFractionsUpperBoundBudgetValue @ 147b6d9e0

TMap<float> * __thiscall
IDynamicResolutionState::GetResolutionFractionsUpperBoundBudgetValue
          (IDynamicResolutionState *this,TMap<float> *__return_storage_ptr__)

{
  (**(code **)((longlong)*this + 0x30))();
  return __return_storage_ptr__;
}

