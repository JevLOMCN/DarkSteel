// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// ~FTransmissionAddress @ 14ad9e860

void __thiscall Metasound::FTransmissionAddress::~FTransmissionAddress(FTransmissionAddress *this)

{
  return;
}

// operator== @ 14af43510

bool __thiscall
Metasound::FTransmissionAddress::operator==
          (FTransmissionAddress *this,FTransmissionAddress *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014af43513. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this + 0x30))();
  return (bool)uVar1;
}

// operator!= @ 14af43520

bool __thiscall
Metasound::FTransmissionAddress::operator!=
          (FTransmissionAddress *this,FTransmissionAddress *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)((longlong)*this + 0x30))();
  return cVar1 == '\0';
}

