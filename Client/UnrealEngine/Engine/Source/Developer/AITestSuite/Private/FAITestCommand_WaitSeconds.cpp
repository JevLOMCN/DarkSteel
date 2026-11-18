// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// Update @ 14705a4c0

bool __thiscall FAITestCommand_WaitSeconds::Update(FAITestCommand_WaitSeconds *this)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  return (double)this->Duration <=
         ((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000) - (double)this->_padding_;
}

