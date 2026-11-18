// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 143247fb0

IFileSystem * __cdecl BuildPatchServices::FFileSystemFactory::Create(void)

{
  IFileSystem *pIVar1;
  IFileSystem IVar2;
  
  pIVar1 = ::operator_new(0x18);
  if (pIVar1 != (IFileSystem *)0x0) {
    *pIVar1 = (IFileSystem)&___7FFileSystem_BuildPatchServices__6B_;
    IVar2 = (IFileSystem)IFileManager::Get();
    pIVar1[1] = IVar2;
    IVar2 = (IFileSystem)IPlatformFile::GetPlatformPhysical();
    pIVar1[2] = IVar2;
    return pIVar1;
  }
  return (IFileSystem *)0x0;
}

