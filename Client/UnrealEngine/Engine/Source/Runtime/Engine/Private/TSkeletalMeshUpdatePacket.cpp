// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// TrimPool @ 1485e4950

void __thiscall
TSkeletalMeshUpdatePacket<FSkeletalMeshObjectGPUSkin,FDynamicSkelMeshObjectDataGPUSkin>::TrimPool
          (TSkeletalMeshUpdatePacket<FSkeletalMeshObjectGPUSkin,FDynamicSkelMeshObjectDataGPUSkin>
           *this)

{
  TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::Trim
            (&TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataGPUSkin>::Pool);
  return;
}

// TrimPool @ 14867c310

void __thiscall
TSkeletalMeshUpdatePacket<FSkeletalMeshObjectNanite,FDynamicSkelMeshObjectDataNanite>::TrimPool
          (TSkeletalMeshUpdatePacket<FSkeletalMeshObjectNanite,FDynamicSkelMeshObjectDataNanite>
           *this)

{
  TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::Trim
            (&TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataNanite>::Pool);
  return;
}

