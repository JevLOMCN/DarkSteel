// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FLight @ 14499e3d0

FLight * __thiscall FHairStrandsDebugData::FCullData::FLight::FLight(FLight *this,FLight *param_1)

{
  int *piVar1;
  TArray<FHairStrandsDebugData::FCullData::FBound,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  
  dVar6 = (param_1->WorldToLight).M[0][1];
  (this->WorldToLight).M[0][0] = (param_1->WorldToLight).M[0][0];
  (this->WorldToLight).M[0][1] = dVar6;
  dVar6 = (param_1->WorldToLight).M[0][3];
  (this->WorldToLight).M[0][2] = (param_1->WorldToLight).M[0][2];
  (this->WorldToLight).M[0][3] = dVar6;
  dVar6 = (param_1->WorldToLight).M[1][1];
  (this->WorldToLight).M[1][0] = (param_1->WorldToLight).M[1][0];
  (this->WorldToLight).M[1][1] = dVar6;
  dVar6 = (param_1->WorldToLight).M[1][3];
  (this->WorldToLight).M[1][2] = (param_1->WorldToLight).M[1][2];
  (this->WorldToLight).M[1][3] = dVar6;
  dVar6 = (param_1->WorldToLight).M[2][1];
  (this->WorldToLight).M[2][0] = (param_1->WorldToLight).M[2][0];
  (this->WorldToLight).M[2][1] = dVar6;
  dVar6 = (param_1->WorldToLight).M[2][3];
  (this->WorldToLight).M[2][2] = (param_1->WorldToLight).M[2][2];
  (this->WorldToLight).M[2][3] = dVar6;
  dVar6 = (param_1->WorldToLight).M[3][1];
  (this->WorldToLight).M[3][0] = (param_1->WorldToLight).M[3][0];
  (this->WorldToLight).M[3][1] = dVar6;
  dVar6 = (param_1->WorldToLight).M[3][3];
  (this->WorldToLight).M[3][2] = (param_1->WorldToLight).M[3][2];
  (this->WorldToLight).M[3][3] = dVar6;
  dVar6 = (param_1->LightToWorld).M[0][1];
  (this->LightToWorld).M[0][0] = (param_1->LightToWorld).M[0][0];
  (this->LightToWorld).M[0][1] = dVar6;
  dVar6 = (param_1->LightToWorld).M[0][3];
  (this->LightToWorld).M[0][2] = (param_1->LightToWorld).M[0][2];
  (this->LightToWorld).M[0][3] = dVar6;
  dVar6 = (param_1->LightToWorld).M[1][1];
  (this->LightToWorld).M[1][0] = (param_1->LightToWorld).M[1][0];
  (this->LightToWorld).M[1][1] = dVar6;
  dVar6 = (param_1->LightToWorld).M[1][3];
  (this->LightToWorld).M[1][2] = (param_1->LightToWorld).M[1][2];
  (this->LightToWorld).M[1][3] = dVar6;
  dVar6 = (param_1->LightToWorld).M[2][1];
  (this->LightToWorld).M[2][0] = (param_1->LightToWorld).M[2][0];
  (this->LightToWorld).M[2][1] = dVar6;
  dVar6 = (param_1->LightToWorld).M[2][3];
  (this->LightToWorld).M[2][2] = (param_1->LightToWorld).M[2][2];
  (this->LightToWorld).M[2][3] = dVar6;
  dVar6 = (param_1->LightToWorld).M[3][1];
  (this->LightToWorld).M[3][0] = (param_1->LightToWorld).M[3][0];
  (this->LightToWorld).M[3][1] = dVar6;
  dVar6 = (param_1->LightToWorld).M[3][3];
  (this->LightToWorld).M[3][2] = (param_1->LightToWorld).M[3][2];
  (this->LightToWorld).M[3][3] = dVar6;
  *(undefined8 *)&(this->Center).field0_0x0 = *(undefined8 *)&(param_1->Center).field0_0x0;
  (this->Center).field0_0x0._s_0.Z = (param_1->Center).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->Extent).field0_0x0 = *(undefined8 *)&(param_1->Extent).field0_0x0;
  (this->Extent).field0_0x0._s_0.Z = (param_1->Extent).field0_0x0._s_0.Z;
  FConvexVolume::FConvexVolume(&this->ViewFrustumInLightSpace,&param_1->ViewFrustumInLightSpace);
  pTVar2 = &this->InstanceBoundInLightSpace;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->InstanceBoundInLightSpace).ArrayMax;
  iVar4 = (param_1->InstanceBoundInLightSpace).ArrayNum;
  pFVar5 = (param_1->InstanceBoundInLightSpace).AllocatorInstance.Data;
  (this->InstanceBoundInLightSpace).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x18);
  }
  pTVar2 = &this->InstanceBoundInWorldSpace;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->InstanceBoundInWorldSpace).ArrayMax;
  iVar4 = (param_1->InstanceBoundInWorldSpace).ArrayNum;
  pFVar5 = (param_1->InstanceBoundInWorldSpace).AllocatorInstance.Data;
  (this->InstanceBoundInWorldSpace).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x18);
  }
  pTVar3 = &this->InstanceIntersection;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->InstanceIntersection).ArrayMax;
  iVar4 = (param_1->InstanceIntersection).ArrayNum;
  pFVar5 = (param_1->InstanceIntersection).AllocatorInstance.Data;
  (this->InstanceIntersection).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  return this;
}

