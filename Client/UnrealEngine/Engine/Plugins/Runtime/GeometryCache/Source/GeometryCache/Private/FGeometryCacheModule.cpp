// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 2

// StartupModule @ 14c9ff9f0

void __thiscall FGeometryCacheModule::StartupModule(FGeometryCacheModule *this)

{
  FStreamingManagerCollection *this_00;
  IGeometryCacheStreamingManager *pIVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_GeometryCache.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_GeometryCache.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  this_00 = IStreamingManager::Get();
  pIVar1 = IGeometryCacheStreamingManager::Get();
  FStreamingManagerCollection::AddStreamingManager(this_00,(IStreamingManager *)pIVar1);
  iVar3 = 1;
  piVar4 = FCodecV1Decoder::CachedHighBitsLUT + 5;
  piVar5 = FCodecV1Decoder::CachedHighBitsLUT + 4;
  do {
    bVar2 = (byte)iVar3;
    *piVar5 = 1 << (bVar2 & 0x1f);
    iVar3 = iVar3 + 1;
    *piVar4 = -2 << (bVar2 & 0x1f);
    piVar4 = piVar4 + 2;
    piVar5 = piVar5 + 2;
  } while (iVar3 < 0x1f);
  UNiagaraGeometryCacheRendererProperties::InitCDOPropertiesAfterModuleStartup();
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// ShutdownModule @ 14c9ffab0

void __thiscall FGeometryCacheModule::ShutdownModule(FGeometryCacheModule *this)

{
  FStreamingManagerCollection *this_00;
  IGeometryCacheStreamingManager *pIVar1;
  
  this_00 = IStreamingManager::Get();
  pIVar1 = IGeometryCacheStreamingManager::Get();
  FStreamingManagerCollection::RemoveStreamingManager(this_00,(IStreamingManager *)pIVar1);
  return;
}

