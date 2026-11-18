// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// DeepAssign @ 143d4bd10

void __thiscall
Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>::DeepAssign
          (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *this,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAccelerationCollection.h"
                     ,0x3b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

