// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432c8360

IChunkEvictionPolicy * __cdecl
BuildPatchServices::FChunkEvictionPolicyFactory::Create(IChunkReferenceTracker *param_1)

{
  code *pcVar1;
  bool bVar2;
  IChunkEvictionPolicy *pIVar3;
  
  if (param_1 == (IChunkReferenceTracker *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChunkReferenceTracker != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\ChunkEvictionPolicy.cpp"
                       ,0x45,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IChunkEvictionPolicy *)(*pcVar1)();
      return pIVar3;
    }
  }
  pIVar3 = ::operator_new(0x10);
  if (pIVar3 != (IChunkEvictionPolicy *)0x0) {
    pIVar3[1] = (IChunkEvictionPolicy)param_1;
    *pIVar3 = (IChunkEvictionPolicy)&___7FChunkEvictionPolicy_BuildPatchServices__6B_;
    return pIVar3;
  }
  return (IChunkEvictionPolicy *)0x0;
}

