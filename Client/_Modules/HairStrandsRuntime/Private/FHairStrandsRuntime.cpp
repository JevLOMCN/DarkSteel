// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsRuntime
// Functions: 2

// StartupModule @ 14e2910b0

void __thiscall FHairStrandsRuntime::StartupModule(FHairStrandsRuntime *this)

{
  FStreamingManagerCollection *this_00;
  IStreamingManager *pIVar1;
  
  this_00 = IStreamingManager::Get();
  pIVar1 = (IStreamingManager *)IGroomCacheStreamingManager::Get();
  FStreamingManagerCollection::AddStreamingManager(this_00,pIVar1);
  return;
}

// ShutdownModule @ 14e2910c0

void __thiscall FHairStrandsRuntime::ShutdownModule(FHairStrandsRuntime *this)

{
  FStreamingManagerCollection *this_00;
  IStreamingManager *pIVar1;
  IGroomCacheStreamingManager *pIVar2;
  
  this_00 = IStreamingManager::Get();
  pIVar1 = (IStreamingManager *)IGroomCacheStreamingManager::Get();
  FStreamingManagerCollection::RemoveStreamingManager(this_00,pIVar1);
  pIVar2 = IGroomCacheStreamingManager::Get();
                    /* WARNING: Could not recover jumptable at 0x00014e02b3e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pIVar2 + 0xc0))(pIVar2,*(code **)(*(longlong *)pIVar2 + 0xc0));
  return;
}

