// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CorePreciseFP
// Functions: 4

// PreciseFPEqual @ 141e47330

bool __cdecl UE::PreciseFPEqual(float param_1,float param_2)

{
  short sVar1;
  
  sVar1 = _fdclass();
  if (sVar1 == 2) {
    return NAN(param_2);
  }
  if (param_1 != param_2) {
    return false;
  }
  return true;
}

// PreciseFPEqual @ 141e473a0

bool __cdecl UE::PreciseFPEqual(double param_1,double param_2)

{
  short sVar1;
  
  sVar1 = _dclass();
  if (sVar1 == 2) {
    return NAN(param_2);
  }
  if (param_1 != param_2) {
    return false;
  }
  return true;
}

// PreciseFPHash @ 141e47410

uint __cdecl UE::PreciseFPHash(float param_1)

{
  short sVar1;
  
  sVar1 = _fdclass();
  if ((sVar1 != 2) && (param_1 != 0.0)) {
    return (uint)param_1;
  }
  return 0;
}

// PreciseFPHash @ 141e47460

uint __cdecl UE::PreciseFPHash(double param_1)

{
  short sVar1;
  
  sVar1 = _dclass();
  if ((sVar1 != 2) && (param_1 != 0.0)) {
    return (int)((ulonglong)param_1 >> 0x20) * 0x17 + SUB84(param_1,0);
  }
  return 0;
}

