// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// Create @ 1432c93f0

IFileOperationTracker * __cdecl
BuildPatchServices::FFileOperationTrackerFactory::Create(FTSTicker *param_1)

{
  FFileOperationTracker *pFVar1;
  
  pFVar1 = ::operator_new(0x100);
  if (pFVar1 != (FFileOperationTracker *)0x0) {
    pFVar1 = FFileOperationTracker::FFileOperationTracker(pFVar1,param_1);
    return (IFileOperationTracker *)pFVar1;
  }
  return (IFileOperationTracker *)0x0;
}

// CreateNull @ 1432cb210

IFileOperationTracker * __cdecl BuildPatchServices::FFileOperationTrackerFactory::CreateNull(void)

{
  IFileOperationTracker *pIVar1;
  
  pIVar1 = ::operator_new(0x18);
  if (pIVar1 != (IFileOperationTracker *)0x0) {
    *pIVar1 = (IFileOperationTracker)&___7FNullFileOperationTracker_BuildPatchServices__6B_;
    pIVar1[1] = (IFileOperationTracker)0x0;
    pIVar1[2] = (IFileOperationTracker)0x0;
    return pIVar1;
  }
  return (IFileOperationTracker *)0x0;
}

