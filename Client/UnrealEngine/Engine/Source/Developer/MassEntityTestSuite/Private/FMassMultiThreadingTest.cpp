// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// GetProcessorName<UMassTestProcessor_A> @ 1470e1c70

FName __cdecl FMassMultiThreadingTest::GetProcessorName<UMassTestProcessor_A>(void)

{
  UClass *pUVar1;
  FName in_RCX;
  
  pUVar1 = UMassTestProcessor_A::StaticClass();
  *(longlong *)in_RCX = pUVar1->_padding_;
  return in_RCX;
}

// GetProcessorName<UMassTestProcessor_B> @ 1470e1cd0

FName __cdecl FMassMultiThreadingTest::GetProcessorName<UMassTestProcessor_B>(void)

{
  UClass *pUVar1;
  FName in_RCX;
  
  pUVar1 = UMassTestProcessor_B::StaticClass();
  *(longlong *)in_RCX = pUVar1->_padding_;
  return in_RCX;
}

