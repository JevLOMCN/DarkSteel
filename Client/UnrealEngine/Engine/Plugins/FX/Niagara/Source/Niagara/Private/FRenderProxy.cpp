// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// ConsumePerInstanceDataFromGameThread @ 148f92160

void __thiscall
NDIStaticMeshLocal::FRenderProxy::ConsumePerInstanceDataFromGameThread
          (FRenderProxy *this,void *param_1,ulong64 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FInstanceData_RenderThread *pFVar3;
  
  pFVar3 = TMapBase<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread,0>_>
           ::FindChecked((TMapBase<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread,0>_>
                          *)&this->PerInstanceData_RT,*param_2);
  uVar1 = *(undefined8 *)((longlong)param_1 + 8);
  *(undefined8 *)(pFVar3->Transform).M[0] = *(undefined8 *)param_1;
  *(undefined8 *)((pFVar3->Transform).M[0] + 2) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x18);
  *(undefined8 *)(pFVar3->Transform).M[1] = *(undefined8 *)((longlong)param_1 + 0x10);
  *(undefined8 *)((pFVar3->Transform).M[1] + 2) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x28);
  *(undefined8 *)(pFVar3->Transform).M[2] = *(undefined8 *)((longlong)param_1 + 0x20);
  *(undefined8 *)((pFVar3->Transform).M[2] + 2) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)(pFVar3->Transform).M[3] = *(undefined8 *)((longlong)param_1 + 0x30);
  *(undefined8 *)((pFVar3->Transform).M[3] + 2) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x48);
  *(undefined8 *)(pFVar3->PrevTransform).M[0] = *(undefined8 *)((longlong)param_1 + 0x40);
  *(undefined8 *)((pFVar3->PrevTransform).M[0] + 2) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x58);
  *(undefined8 *)(pFVar3->PrevTransform).M[1] = *(undefined8 *)((longlong)param_1 + 0x50);
  *(undefined8 *)((pFVar3->PrevTransform).M[1] + 2) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x68);
  *(undefined8 *)(pFVar3->PrevTransform).M[2] = *(undefined8 *)((longlong)param_1 + 0x60);
  *(undefined8 *)((pFVar3->PrevTransform).M[2] + 2) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x78);
  *(undefined8 *)(pFVar3->PrevTransform).M[3] = *(undefined8 *)((longlong)param_1 + 0x70);
  *(undefined8 *)((pFVar3->PrevTransform).M[3] + 2) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x80);
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x88);
  (pFVar3->Rotation).X = (float)(int)uVar1;
  (pFVar3->Rotation).Y = (float)(int)((ulonglong)uVar1 >> 0x20);
  (pFVar3->Rotation).Z = (float)(int)uVar2;
  (pFVar3->Rotation).W = (float)(int)((ulonglong)uVar2 >> 0x20);
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x90);
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x98);
  (pFVar3->PrevRotation).X = (float)(int)uVar1;
  (pFVar3->PrevRotation).Y = (float)(int)((ulonglong)uVar1 >> 0x20);
  (pFVar3->PrevRotation).Z = (float)(int)uVar2;
  (pFVar3->PrevRotation).W = (float)(int)((ulonglong)uVar2 >> 0x20);
  pFVar3->DeltaSeconds = *(float *)((longlong)param_1 + 0xa0);
  *(undefined8 *)&(pFVar3->PreSkinnedLocalBoundsCenter).field0_0x0 =
       *(undefined8 *)((longlong)param_1 + 0xa4);
  (pFVar3->PreSkinnedLocalBoundsCenter).field0_0x0._s_0.Z = *(float *)((longlong)param_1 + 0xac);
  *(undefined8 *)&(pFVar3->PreSkinnedLocalBoundsExtents).field0_0x0 =
       *(undefined8 *)((longlong)param_1 + 0xb0);
  (pFVar3->PreSkinnedLocalBoundsExtents).field0_0x0._s_0.Z = *(float *)((longlong)param_1 + 0xb8);
  *(undefined8 *)&(pFVar3->OwnerToMeshVector).field0_0x0 = *(undefined8 *)((longlong)param_1 + 0xbc)
  ;
  (pFVar3->OwnerToMeshVector).field0_0x0._s_0.Z = *(float *)((longlong)param_1 + 0xc4);
  (pFVar3->DistanceFieldPrimitiveId).PrimIDValue = *(uint *)((longlong)param_1 + 200);
  pFVar3->UvMappingBuffer = *(FMeshUvMappingBufferProxy **)((longlong)param_1 + 0xd0);
  pFVar3->UvMappingSet = *(uint *)((longlong)param_1 + 0xd8);
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 148fc63d0

int __thiscall
NDIStaticMeshLocal::FRenderProxy::PerInstanceDataPassedToRenderThreadSize(FRenderProxy *this)

{
  return 0xe0;
}

