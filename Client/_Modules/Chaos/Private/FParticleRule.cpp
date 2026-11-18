// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// Apply @ 143d40640

void __thiscall
Chaos::FParticleRule::Apply(FParticleRule *this,TDynamicParticles<double,3> *param_1,double param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143d40643. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x10))();
  return;
}

// Apply @ 143d40650

void __thiscall
Chaos::FParticleRule::Apply(FParticleRule *this,TPBDParticles<double,3> *param_1,double param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143d40653. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 8))();
  return;
}

// Apply @ 143d40660

void __thiscall
Chaos::FParticleRule::Apply(FParticleRule *this,TParticles<double,3> *param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleRule.h"
                     ,0x23,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

