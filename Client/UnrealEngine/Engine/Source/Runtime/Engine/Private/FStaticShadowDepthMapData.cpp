// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Empty @ 147eb8530

void __thiscall FStaticShadowDepthMapData::Empty(FStaticShadowDepthMapData *this)

{
  int *piVar1;
  
  this->ShadowMapSizeX = 0;
  this->ShadowMapSizeY = 0;
  piVar1 = &(this->DepthSamples).ArrayMax;
  (this->DepthSamples).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&(this->DepthSamples).AllocatorInstance,0,piVar1);
  }
  return;
}

