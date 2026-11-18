// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LauncherChunkInstaller
// Functions: 1

// GetChunkLocation @ 14f00b280

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FLauncherChunkInstaller::GetChunkLocation(FLauncherChunkInstaller *this,uint param_1)

{
  bool bVar1;
  Type TVar2;
  FPlatformFileManager *this_00;
  FPakPlatformFile *this_01;
  
  this_00 = FPlatformFileManager::Get();
  this_01 = (FPakPlatformFile *)FPlatformFileManager::FindPlatformFile(this_00,L"PakFile");
  if (this_01 != (FPakPlatformFile *)0x0) {
    bVar1 = FPakPlatformFile::AnyChunksAvailable(this_01);
    if (bVar1) {
      TVar2 = FPakPlatformFile::GetPakChunkLocation(this_01,param_1);
      return TVar2;
    }
  }
  return BestLocation;
}

