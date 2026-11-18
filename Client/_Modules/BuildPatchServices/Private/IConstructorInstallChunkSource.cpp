// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// ~IConstructorInstallChunkSource @ 143289480

void __thiscall
BuildPatchServices::IConstructorInstallChunkSource::~IConstructorInstallChunkSource
          (IConstructorInstallChunkSource *this)

{
  *this = (IConstructorInstallChunkSource)&___7IConstructorChunkSource_BuildPatchServices__6B_;
  return;
}

// CreateInstallSource @ 1432cb1b0

IConstructorInstallChunkSource * __cdecl
BuildPatchServices::IConstructorInstallChunkSource::CreateInstallSource
          (IFileSystem *param_1,IInstallChunkSourceStat *param_2,
          TMultiMap<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
          *param_3,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_4)

{
  FInstallChunkSource *this;
  FInstallChunkSource *pFVar1;
  
  this = ::operator_new(0x170);
  pFVar1 = (FInstallChunkSource *)0x0;
  if (this != (FInstallChunkSource *)0x0) {
    pFVar1 = FInstallChunkSource::FInstallChunkSource(this,param_1,param_2,param_3,param_4);
  }
  return (IConstructorInstallChunkSource *)pFVar1;
}

