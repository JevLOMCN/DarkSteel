// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// operator= @ 14e03f000

FCachedGeometry * __thiscall
FCachedGeometry::operator=(FCachedGeometry *this,FCachedGeometry *param_1)

{
  TArray<FCachedGeometry::Section,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FCachedGeometry::Section,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  
  pTVar1 = &param_1->Sections;
  pTVar2 = &this->Sections;
  this->LODIndex = param_1->LODIndex;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Sections).ArrayNum = (param_1->Sections).ArrayNum;
    (this->Sections).ArrayMax = (param_1->Sections).ArrayMax;
    (param_1->Sections).ArrayNum = 0;
    (param_1->Sections).ArrayMax = 0;
  }
  dVar4 = (param_1->LocalToWorld).Rotation.XY.m128d_f64[1];
  (this->LocalToWorld).Rotation.XY.m128d_f64[0] = (param_1->LocalToWorld).Rotation.XY.m128d_f64[0];
  (this->LocalToWorld).Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->LocalToWorld).Rotation.ZW.m128d_f64[1];
  (this->LocalToWorld).Rotation.ZW.m128d_f64[0] = (param_1->LocalToWorld).Rotation.ZW.m128d_f64[0];
  (this->LocalToWorld).Rotation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->LocalToWorld).Translation.XY.m128d_f64[1];
  (this->LocalToWorld).Translation.XY.m128d_f64[0] =
       (param_1->LocalToWorld).Translation.XY.m128d_f64[0];
  (this->LocalToWorld).Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->LocalToWorld).Translation.ZW.m128d_f64[1];
  (this->LocalToWorld).Translation.ZW.m128d_f64[0] =
       (param_1->LocalToWorld).Translation.ZW.m128d_f64[0];
  (this->LocalToWorld).Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->LocalToWorld).Scale3D.XY.m128d_f64[1];
  (this->LocalToWorld).Scale3D.XY.m128d_f64[0] = (param_1->LocalToWorld).Scale3D.XY.m128d_f64[0];
  (this->LocalToWorld).Scale3D.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->LocalToWorld).Scale3D.ZW.m128d_f64[1];
  (this->LocalToWorld).Scale3D.ZW.m128d_f64[0] = (param_1->LocalToWorld).Scale3D.ZW.m128d_f64[0];
  (this->LocalToWorld).Scale3D.ZW.m128d_f64[1] = dVar4;
  return this;
}

// operator= @ 14e03f0b0

FCachedGeometry * __thiscall
FCachedGeometry::operator=(FCachedGeometry *this,FCachedGeometry *param_1)

{
  TArray<FCachedGeometry::Section,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  double dVar5;
  
  this->LODIndex = param_1->LODIndex;
  pTVar1 = &this->Sections;
  if (pTVar1 != &param_1->Sections) {
    iVar3 = (this->Sections).ArrayMax;
    piVar2 = &(this->Sections).ArrayMax;
    iVar4 = (param_1->Sections).ArrayNum;
    _Src = (param_1->Sections).AllocatorInstance.Data;
    (this->Sections).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x70);
      }
    }
  }
  dVar5 = (param_1->LocalToWorld).Rotation.XY.m128d_f64[1];
  (this->LocalToWorld).Rotation.XY.m128d_f64[0] = (param_1->LocalToWorld).Rotation.XY.m128d_f64[0];
  (this->LocalToWorld).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->LocalToWorld).Rotation.ZW.m128d_f64[1];
  (this->LocalToWorld).Rotation.ZW.m128d_f64[0] = (param_1->LocalToWorld).Rotation.ZW.m128d_f64[0];
  (this->LocalToWorld).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->LocalToWorld).Translation.XY.m128d_f64[1];
  (this->LocalToWorld).Translation.XY.m128d_f64[0] =
       (param_1->LocalToWorld).Translation.XY.m128d_f64[0];
  (this->LocalToWorld).Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->LocalToWorld).Translation.ZW.m128d_f64[1];
  (this->LocalToWorld).Translation.ZW.m128d_f64[0] =
       (param_1->LocalToWorld).Translation.ZW.m128d_f64[0];
  (this->LocalToWorld).Translation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->LocalToWorld).Scale3D.XY.m128d_f64[1];
  (this->LocalToWorld).Scale3D.XY.m128d_f64[0] = (param_1->LocalToWorld).Scale3D.XY.m128d_f64[0];
  (this->LocalToWorld).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->LocalToWorld).Scale3D.ZW.m128d_f64[1];
  (this->LocalToWorld).Scale3D.ZW.m128d_f64[0] = (param_1->LocalToWorld).Scale3D.ZW.m128d_f64[0];
  (this->LocalToWorld).Scale3D.ZW.m128d_f64[1] = dVar5;
  return this;
}

