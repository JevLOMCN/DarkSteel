// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// DumpParticleMemoryStats @ 1481710a0

void __cdecl FParticleMemoryStatManager::DumpParticleMemoryStats(FOutputDevice *param_1)

{
  FOutputDevice::Log(param_1,L"Particle Dynamic Memory Stats");
  FOutputDevice::Log(param_1,
                     L"Type,Count,MaxCount,Mem(Bytes),MaxMem(Bytes),GTMem(Bytes),GTMemMax(Bytes)");
  FOutputDevice::LogfImpl(param_1,L"Total PSysComponents,%d,%d,%d,%d,%d,%d");
  FOutputDevice::LogfImpl(param_1,L"Total DynamicEmitters,%d,%d,%d,%d,%d,%d");
  FOutputDevice::LogfImpl(param_1,L"Sprite,%d,%d,%d,%d,%d,%d");
  FOutputDevice::LogfImpl(param_1,L"Mesh,%d,%d,%d,%d,%d,%d");
  FOutputDevice::LogfImpl(param_1,L"Beam,%d,%d,%d,%d,%d,%d");
  FOutputDevice::LogfImpl(param_1,L"Ribbon,%d,%d,%d,%d,%d,%d");
  FOutputDevice::LogfImpl(param_1,L"AnimTrail,%d,%d,%d,%d,%d,%d");
  FOutputDevice::LogfImpl(param_1,L"Untracked,%d,%d,%d,%d,%d,%d");
  FOutputDevice::Log(param_1,L"ParticleData,Total(Bytes),FMath::Max(Bytes)");
  FOutputDevice::LogfImpl(param_1,L"GameThread,%d,%d");
  FOutputDevice::LogfImpl(param_1,L"RenderThread,%d,%d");
  FOutputDevice::LogfImpl(param_1,L"Max wasted GT,%d");
  FOutputDevice::LogfImpl(param_1,L"Largest single GT allocation,%d");
  FOutputDevice::LogfImpl(param_1,L"Largest single RT allocation,%d");
  return;
}

// ResetParticleMemoryMaxValues @ 148192c20

void __cdecl FParticleMemoryStatManager::ResetParticleMemoryMaxValues(void)

{
  DynamicPSysCompCount_MAX = 0;
  DynamicPSysCompMem_MAX = 0;
  DynamicEmitterCount_MAX = 0;
  DynamicEmitterMem_MAX = 0;
  DynamicEmitterGTMem_Waste_MAX = 0;
  DynamicEmitterGTMem_Largest_MAX = 0;
  TotalGTParticleData_MAX = 0;
  TotalRTParticleData_MAX = 0;
  LargestRTParticleData_MAX = 0;
  DynamicSpriteCount_MAX = 0;
  DynamicSubUVCount_MAX = 0;
  DynamicMeshCount_MAX = 0;
  DynamicBeamCount_MAX = 0;
  DynamicRibbonCount_MAX = 0;
  DynamicAnimTrailCount_MAX = 0;
  DynamicSpriteGTMem_MAX = 0;
  DynamicSubUVGTMem_MAX = 0;
  DynamicMeshGTMem_MAX = 0;
  DynamicBeamGTMem_MAX = 0;
  DynamicRibbonGTMem_MAX = 0;
  DynamicAnimTrailGTMem_MAX = 0;
  DynamicUntrackedGTMem_MAX = 0;
  return;
}

// UpdateStats @ 1481b3fd0

void __cdecl FParticleMemoryStatManager::UpdateStats(void)

{
  return;
}

