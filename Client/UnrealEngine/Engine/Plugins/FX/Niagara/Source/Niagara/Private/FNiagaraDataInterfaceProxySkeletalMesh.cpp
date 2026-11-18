// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// ConsumePerInstanceDataFromGameThread @ 149222360

void __thiscall
FNiagaraDataInterfaceProxySkeletalMesh::ConsumePerInstanceDataFromGameThread
          (FNiagaraDataInterfaceProxySkeletalMesh *this,void *param_1,ulong64 *param_2)

{
  undefined8 uVar1;
  FNiagaraDISkeletalMeshPassedDataToRT *pFVar2;
  
  pFVar2 = TMapBase<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT,0>_>
                       *)&this->SystemInstancesToData,(int)(*param_2 >> 0x20) * 0x17 + (int)*param_2
                      ,param_2);
  pFVar2->bIsGpuUniformlyDistributedSampling = *(bool *)((longlong)param_1 + 0x30);
  pFVar2->bReadDeformedGeometry = *(bool *)((longlong)param_1 + 0x31);
  pFVar2->bUnlimitedBoneInfluences = *(bool *)((longlong)param_1 + 0x32);
  pFVar2->DeltaSeconds = *(float *)((longlong)param_1 + 0xc0);
  pFVar2->DynamicBuffer = *(FSkeletalMeshGpuDynamicBufferProxy **)((longlong)param_1 + 8);
  pFVar2->MeshBoneWeightStrideBytes = *(uint *)((longlong)param_1 + 0x34);
  pFVar2->MeshBoneIndexSizeBytes = *(uint *)((longlong)param_1 + 0x38);
  pFVar2->MeshBoneWeightSizeBytes = *(uint *)((longlong)param_1 + 0x3c);
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x88);
  *(undefined8 *)(pFVar2->PrevTransform).M[0] = *(undefined8 *)((longlong)param_1 + 0x80);
  *(undefined8 *)((pFVar2->PrevTransform).M[0] + 2) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x98);
  *(undefined8 *)(pFVar2->PrevTransform).M[1] = *(undefined8 *)((longlong)param_1 + 0x90);
  *(undefined8 *)((pFVar2->PrevTransform).M[1] + 2) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0xa8);
  *(undefined8 *)(pFVar2->PrevTransform).M[2] = *(undefined8 *)((longlong)param_1 + 0xa0);
  *(undefined8 *)((pFVar2->PrevTransform).M[2] + 2) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0xb8);
  *(undefined8 *)(pFVar2->PrevTransform).M[3] = *(undefined8 *)((longlong)param_1 + 0xb0);
  *(undefined8 *)((pFVar2->PrevTransform).M[3] + 2) = uVar1;
  pFVar2->StaticBuffers = *(FSkeletalMeshGpuSpawnStaticBuffers **)param_1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x48);
  *(undefined8 *)(pFVar2->Transform).M[0] = *(undefined8 *)((longlong)param_1 + 0x40);
  *(undefined8 *)((pFVar2->Transform).M[0] + 2) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x58);
  *(undefined8 *)(pFVar2->Transform).M[1] = *(undefined8 *)((longlong)param_1 + 0x50);
  *(undefined8 *)((pFVar2->Transform).M[1] + 2) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x68);
  *(undefined8 *)(pFVar2->Transform).M[2] = *(undefined8 *)((longlong)param_1 + 0x60);
  *(undefined8 *)((pFVar2->Transform).M[2] + 2) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x78);
  *(undefined8 *)(pFVar2->Transform).M[3] = *(undefined8 *)((longlong)param_1 + 0x70);
  *(undefined8 *)((pFVar2->Transform).M[3] + 2) = uVar1;
  *(undefined8 *)&(pFVar2->PreSkinnedLocalBoundsCenter).field0_0x0 =
       *(undefined8 *)((longlong)param_1 + 200);
  (pFVar2->PreSkinnedLocalBoundsCenter).field0_0x0._s_0.Z = *(float *)((longlong)param_1 + 0xd0);
  *(undefined8 *)&(pFVar2->PreSkinnedLocalBoundsExtents).field0_0x0 =
       *(undefined8 *)((longlong)param_1 + 0xd4);
  (pFVar2->PreSkinnedLocalBoundsExtents).field0_0x0._s_0.Z = *(float *)((longlong)param_1 + 0xdc);
  pFVar2->MeshSkinWeightBuffer = *(FSkinWeightDataVertexBuffer **)((longlong)param_1 + 0x10);
  pFVar2->MeshSkinWeightLookupBuffer = *(FSkinWeightLookupVertexBuffer **)((longlong)param_1 + 0x18)
  ;
  pFVar2->UvMappingBuffer = *(FMeshUvMappingBufferProxy **)((longlong)param_1 + 0x20);
  pFVar2->UvMappingSet = *(uint *)((longlong)param_1 + 0xc4);
  pFVar2->ConnectivityBuffer = *(FSkeletalMeshConnectivityProxy **)((longlong)param_1 + 0x28);
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 1492446b0

int __thiscall
FNiagaraDataInterfaceProxySkeletalMesh::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxySkeletalMesh *this)

{
  return 0xe0;
}

