// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 6

// DecrementIncomplete @ 143249190

void __cdecl BuildPatchServices::FDataScannerCounter::DecrementIncomplete(void)

{
  LOCK();
  FDataScanner::NumIncompleteScanners.Counter = FDataScanner::NumIncompleteScanners.Counter + -1;
  UNLOCK();
  return;
}

// DecrementRunning @ 1432491a0

void __cdecl BuildPatchServices::FDataScannerCounter::DecrementRunning(void)

{
  LOCK();
  FDataScanner::NumRunningScanners.Counter = FDataScanner::NumRunningScanners.Counter + -1;
  UNLOCK();
  return;
}

// GetNumIncompleteScanners @ 143257080

int __cdecl BuildPatchServices::FDataScannerCounter::GetNumIncompleteScanners(void)

{
  return FDataScanner::NumIncompleteScanners.Counter;
}

// GetNumRunningScanners @ 143257090

int __cdecl BuildPatchServices::FDataScannerCounter::GetNumRunningScanners(void)

{
  return FDataScanner::NumRunningScanners.Counter;
}

// IncrementIncomplete @ 143257b40

void __cdecl BuildPatchServices::FDataScannerCounter::IncrementIncomplete(void)

{
  LOCK();
  FDataScanner::NumIncompleteScanners.Counter = FDataScanner::NumIncompleteScanners.Counter + 1;
  UNLOCK();
  return;
}

// IncrementRunning @ 143257b50

void __cdecl BuildPatchServices::FDataScannerCounter::IncrementRunning(void)

{
  LOCK();
  FDataScanner::NumRunningScanners.Counter = FDataScanner::NumRunningScanners.Counter + 1;
  UNLOCK();
  return;
}

