// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// TKeyValue<int,FScene::FRayTracingCullingGroup><int_const_&,FScene::FRayTracingCullingGroup_const_&> @ 1453c9820

TKeyValue<int,FScene::FRayTracingCullingGroup> * __thiscall
Experimental::RobinHoodHashTable_Private::TKeyValue<int,FScene::FRayTracingCullingGroup>::
TKeyValue<int,FScene::FRayTracingCullingGroup><int_const_&,FScene::FRayTracingCullingGroup_const_&>
          (TKeyValue<int,FScene::FRayTracingCullingGroup> *this,int *param_1,
          FRayTracingCullingGroup *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  double dVar4;
  
  puVar1 = &(this->Pair).field_0x48;
  *(int *)&this->Pair = *param_1;
  dVar4 = (param_2->Bounds).Origin.field0_0x0._s_0.Y;
  *(double *)&(this->Pair).field_0x8 = (param_2->Bounds).Origin.field0_0x0._s_0.X;
  *(double *)&(this->Pair).field_0x10 = dVar4;
  dVar4 = (param_2->Bounds).BoxExtent.field0_0x0._s_0.X;
  *(double *)&(this->Pair).field_0x18 = (param_2->Bounds).Origin.field0_0x0._s_0.Z;
  *(double *)&(this->Pair).field_0x20 = dVar4;
  dVar4 = (param_2->Bounds).BoxExtent.field0_0x0._s_0.Z;
  *(double *)&(this->Pair).field_0x28 = (param_2->Bounds).BoxExtent.field0_0x0._s_0.Y;
  *(double *)&(this->Pair).field_0x30 = dVar4;
  *(double *)&(this->Pair).field_0x38 = (param_2->Bounds).SphereRadius;
  *(float *)&(this->Pair).field_0x40 = param_2->MinDrawDistance;
  *(undefined8 *)puVar1 = 0;
  puVar2 = &(this->Pair).field_0x54;
  iVar3 = (param_2->Primitives).ArrayNum;
  _Src = (param_2->Primitives).AllocatorInstance.Data;
  *(int *)&(this->Pair).field_0x50 = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)puVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,(ForAnyElementType *)puVar1,iVar3,(int *)puVar2);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar3 << 3);
  }
  return this;
}

