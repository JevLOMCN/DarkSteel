// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// IsCompactable @ 141472840

bool __thiscall IDelegateInstance::IsCompactable(IDelegateInstance *this)

{
  char cVar1;
  
  cVar1 = (**(code **)((longlong)*this + 0x38))();
  return cVar1 == '\0';
}

// ~IDelegateInstance @ 141481e90

void __thiscall IDelegateInstance::~IDelegateInstance(IDelegateInstance *this)

{
  return;
}

