// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FromUtcTime @ 1417d02d0

FLogTime __cdecl UE::FLogTime::FromUtcTime(FDateTime *param_1)

{
  long64 *in_RDX;
  
  param_1->Ticks = *in_RDX;
  return (FLogTime)(long64)param_1;
}

// GetUtcTime @ 1417d91d0

FDateTime __thiscall UE::FLogTime::GetUtcTime(FLogTime *this)

{
  long64 *in_RDX;
  
  *in_RDX = this->UtcTicks;
  return (FDateTime)(long64)in_RDX;
}

// Now @ 1417e7b80

FLogTime __cdecl UE::FLogTime::Now(void)

{
  FDateTime FVar1;
  undefined8 *in_RCX;
  
  *in_RCX = 0;
  FVar1 = FDateTime::UtcNow();
  *in_RCX = *(undefined8 *)FVar1.Ticks;
  return (FLogTime)(long64)in_RCX;
}

