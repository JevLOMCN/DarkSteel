// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LauncherChunkInstaller
// Functions: 1

// GetPlatformChunkInstall @ 14f00b320

IPlatformChunkInstall * __thiscall
FLauncherChunkInstallerModule::GetPlatformChunkInstall(FLauncherChunkInstallerModule *this)

{
  return (this->ChunkInstaller).Ptr;
}

