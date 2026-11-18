// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// CombineHelper @ 143c602c0

double __cdecl
Chaos::FChaosPhysicsMaterial::CombineHelper(double param_1,double param_2,ECombineMode param_3)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if (param_3 == Avg) {
    return (param_1 + param_2) * __real_3fe0000000000000;
  }
  if (param_3 == Min) {
    if (param_2 <= param_1) {
      param_1 = param_2;
    }
    return param_1;
  }
  if (param_3 == Multiply) {
    return param_1 * param_2;
  }
  if (param_3 != Max) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8879800981324300134>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Defines.h"
                       ,0x9a,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar3 = (double)(*pcVar1)();
      return dVar3;
    }
    return 0.0;
  }
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}

