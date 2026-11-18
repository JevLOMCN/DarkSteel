// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 143247210

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

IChunkDataSerialization * __cdecl
BuildPatchServices::FChunkDataSerializationFactory::Create
          (IFileSystem *param_1,EFeatureLevel param_2)

{
  code *pcVar1;
  bool bVar2;
  IChunkDataSerialization *pIVar3;
  
  if (param_1 == (IFileSystem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FileSystem != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Data\\ChunkData.cpp"
                       ,0x39f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IChunkDataSerialization *)(*pcVar1)();
      return pIVar3;
    }
  }
  pIVar3 = ::operator_new(0x18);
  if (pIVar3 != (IChunkDataSerialization *)0x0) {
    pIVar3[1] = (IChunkDataSerialization)param_1;
    *pIVar3 = (IChunkDataSerialization)&___7FChunkDataSerialization_BuildPatchServices__6B_;
    *(EFeatureLevel *)(pIVar3 + 2) = param_2;
    return pIVar3;
  }
  return (IChunkDataSerialization *)0x0;
}

