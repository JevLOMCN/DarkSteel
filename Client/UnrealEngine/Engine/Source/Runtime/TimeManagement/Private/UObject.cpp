// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 1

// Implements<UClockedTimeStep> @ 14603d220

bool __thiscall UObject::Implements<UClockedTimeStep>(UObject *this)

{
  UClass *this_00;
  bool bVar1;
  UClass *pUVar2;
  
  this_00 = *(UClass **)&this->field_0x10;
  if (this_00 != (UClass *)0x0) {
    pUVar2 = Z_Construct_UClass_UClockedTimeStep_NoRegister();
    bVar1 = UClass::ImplementsInterface(this_00,pUVar2);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

