// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// FVoxel @ 14dff0000

FVoxel * __thiscall
GroomBuilder_Voxelization::FHairGrid::FVoxel::FVoxel(FVoxel *this,FVoxel *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->VoxelCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->VoxelCurves).ArrayMax;
  iVar2 = (param_1->VoxelCurves).ArrayNum;
  _Src = (param_1->VoxelCurves).AllocatorInstance.Data;
  (this->VoxelCurves).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x1c,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->VoxelCurves).AllocatorInstance.Data,_Src,(longlong)iVar2 * 0x1c);
  return this;
}

