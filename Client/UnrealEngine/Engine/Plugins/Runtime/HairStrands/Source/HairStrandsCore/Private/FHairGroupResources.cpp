// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// FHairGroupResources @ 14dfac8e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairGroupResources * __thiscall
FHairGroupResources::FHairGroupResources(FHairGroupResources *this,FHairGroupResources *param_1)

{
  FCards *pFVar1;
  int *piVar2;
  FMeshes *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FHairStrandsInterpolationResource *pFVar6;
  FHairStrandsRaytracingResource *pFVar7;
  undefined7 uVar8;
  
  pFVar1 = &this->Cards;
  (this->Guides).RestResource = (param_1->Guides).RestResource;
  pFVar6 = (param_1->Strands).InterpolationResource;
  piVar2 = &(this->Cards).LODs.ArrayMax;
  (this->Strands).RestResource = (param_1->Strands).RestResource;
  (this->Strands).InterpolationResource = pFVar6;
  pFVar7 = (param_1->Strands).RaytracingResource;
  (this->Strands).ClusterResource = (param_1->Strands).ClusterResource;
  (this->Strands).RaytracingResource = pFVar7;
  uVar8 = *(undefined7 *)&(param_1->Strands).field_0x21;
  (this->Strands).bIsCookedOut = (param_1->Strands).bIsCookedOut;
  *(undefined7 *)&(this->Strands).field_0x21 = uVar8;
  (pFVar1->LODs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->Cards).LODs.ArrayNum;
  pFVar5 = (param_1->Cards).LODs.AllocatorInstance.Data;
  (this->Cards).LODs.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar4,0,(ForAnyElementType *)pFVar1,iVar4,piVar2);
    memcpy((pFVar1->LODs).AllocatorInstance.Data,pFVar5,(longlong)iVar4 * 0x30);
  }
  pFVar3 = &this->Meshes;
  (pFVar3->LODs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Meshes).LODs.ArrayMax;
  iVar4 = (param_1->Meshes).LODs.ArrayNum;
  pFVar5 = (param_1->Meshes).LODs.AllocatorInstance.Data;
  (this->Meshes).LODs.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar4,0,(ForAnyElementType *)pFVar3,iVar4,piVar2);
    memcpy((pFVar3->LODs).AllocatorInstance.Data,pFVar5,(longlong)iVar4 * 0x18);
  }
  (this->Debug).Resource = (param_1->Debug).Resource;
  return this;
}

