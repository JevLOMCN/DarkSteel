// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// ~IConstructorCloudChunkSource @ 143289460

void __thiscall
BuildPatchServices::IConstructorCloudChunkSource::~IConstructorCloudChunkSource
          (IConstructorCloudChunkSource *this)

{
  *this = (IConstructorCloudChunkSource)&___7IConstructorChunkSource_BuildPatchServices__6B_;
  return;
}

// CreateCloudSource @ 1432ca090

IConstructorCloudChunkSource * __cdecl
BuildPatchServices::IConstructorCloudChunkSource::CreateCloudSource
          (FConstructorCloudChunkSourceConfig *param_1,IDownloadService *param_2,
          IChunkDataSerialization *param_3,IDownloadConnectionCount *param_4,IMessagePump *param_5,
          ICloudChunkSourceStat *param_6,IBuildManifestSet *param_7)

{
  FConstructorCloudChunkSource *this;
  FConstructorCloudChunkSource *pFVar1;
  
  this = ::operator_new(0x300);
  pFVar1 = (FConstructorCloudChunkSource *)0x0;
  if (this != (FConstructorCloudChunkSource *)0x0) {
    pFVar1 = FConstructorCloudChunkSource::FConstructorCloudChunkSource
                       (this,param_1,param_2,param_3,param_6,param_7,param_4,param_5);
  }
  return (IConstructorCloudChunkSource *)pFVar1;
}

