// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// ~IChunkDataSerialization @ 143229290

void __thiscall
BuildPatchServices::IChunkDataSerialization::~IChunkDataSerialization(IChunkDataSerialization *this)

{
  *this = (IChunkDataSerialization)&___7IChunkDataSerialization_BuildPatchServices__6B_;
  return;
}

// SaveToArchiveUncompressed @ 143265fe0

EChunkSaveResult __thiscall
BuildPatchServices::IChunkDataSerialization::SaveToArchiveUncompressed
          (IChunkDataSerialization *this,FArchive *param_1,IChunkDataAccess *param_2)

{
  EChunkSaveResult EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143265fe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((longlong)*this + 0x30))();
  return EVar1;
}

