// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 143247510

IChunkDeltaOptimiser * __cdecl
BuildPatchServices::FChunkDeltaOptimiserFactory::Create(FChunkDeltaOptimiserConfiguration *param_1)

{
  FChunkDeltaOptimiser *pFVar1;
  
  pFVar1 = ::operator_new(0x128);
  if (pFVar1 != (FChunkDeltaOptimiser *)0x0) {
    pFVar1 = FChunkDeltaOptimiser::FChunkDeltaOptimiser(pFVar1,param_1);
    return (IChunkDeltaOptimiser *)pFVar1;
  }
  return (IChunkDeltaOptimiser *)0x0;
}

