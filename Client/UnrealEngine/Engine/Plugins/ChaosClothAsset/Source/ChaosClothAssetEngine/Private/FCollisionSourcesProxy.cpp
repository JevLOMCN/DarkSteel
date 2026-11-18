// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 3

// FCollisionSourcesProxy @ 14dc348e0

FCollisionSourcesProxy * __thiscall
UE::Chaos::ClothAsset::FCollisionSourcesProxy::FCollisionSourcesProxy
          (FCollisionSourcesProxy *this,FCollisionSources *param_1)

{
  this->CollisionSources = param_1;
  (this->SkinnedMeshCollisionData).Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkinnedMeshCollisionData).Spheres.ArrayNum = 0;
  (this->SkinnedMeshCollisionData).Spheres.ArrayMax = 0;
  (this->SkinnedMeshCollisionData).SphereConnections.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SkinnedMeshCollisionData).SphereConnections.ArrayNum = 0;
  (this->SkinnedMeshCollisionData).SphereConnections.ArrayMax = 0;
  (this->SkinnedMeshCollisionData).Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkinnedMeshCollisionData).Convexes.ArrayNum = 0;
  (this->SkinnedMeshCollisionData).Convexes.ArrayMax = 0;
  (this->SkinnedMeshCollisionData).Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkinnedMeshCollisionData).Boxes.ArrayNum = 0;
  (this->SkinnedMeshCollisionData).Boxes.ArrayMax = 0;
  (this->EnvironmentalCollisionData).Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->EnvironmentalCollisionData).Spheres.ArrayNum = 0;
  (this->EnvironmentalCollisionData).Spheres.ArrayMax = 0;
  (this->EnvironmentalCollisionData).SphereConnections.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EnvironmentalCollisionData).SphereConnections.ArrayNum = 0;
  (this->EnvironmentalCollisionData).SphereConnections.ArrayMax = 0;
  (this->EnvironmentalCollisionData).Convexes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EnvironmentalCollisionData).Convexes.ArrayNum = 0;
  (this->EnvironmentalCollisionData).Convexes.ArrayMax = 0;
  (this->EnvironmentalCollisionData).Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnvironmentalCollisionData).Boxes.ArrayNum = 0;
  (this->EnvironmentalCollisionData).Boxes.ArrayMax = 0;
  (this->ExternalCollisionData).Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalCollisionData).Spheres.ArrayNum = 0;
  (this->ExternalCollisionData).Spheres.ArrayMax = 0;
  (this->ExternalCollisionData).SphereConnections.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ExternalCollisionData).SphereConnections.ArrayNum = 0;
  (this->ExternalCollisionData).SphereConnections.ArrayMax = 0;
  (this->ExternalCollisionData).Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalCollisionData).Convexes.ArrayNum = 0;
  (this->ExternalCollisionData).Convexes.ArrayMax = 0;
  (this->ExternalCollisionData).Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalCollisionData).Boxes.ArrayNum = 0;
  (this->ExternalCollisionData).Boxes.ArrayMax = 0;
  (this->CollisionData).Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionData).Spheres.ArrayNum = 0;
  (this->CollisionData).Spheres.ArrayMax = 0;
  (this->CollisionData).SphereConnections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionData).SphereConnections.ArrayNum = 0;
  (this->CollisionData).SphereConnections.ArrayMax = 0;
  (this->CollisionData).Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionData).Convexes.ArrayNum = 0;
  (this->CollisionData).Convexes.ArrayMax = 0;
  (this->CollisionData).Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionData).Boxes.ArrayNum = 0;
  (this->CollisionData).Boxes.ArrayMax = 0;
  this->Version = -1;
  return this;
}

// ~FCollisionSourcesProxy @ 14dc35fe0

void __thiscall
UE::Chaos::ClothAsset::FCollisionSourcesProxy::~FCollisionSourcesProxy(FCollisionSourcesProxy *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CollisionData).Boxes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FClothCollisionPrim_Convex,int>
            ((FClothCollisionPrim_Convex *)(this->CollisionData).Convexes.AllocatorInstance.Data,
             (this->CollisionData).Convexes.ArrayNum);
  pFVar1 = (this->CollisionData).Convexes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollisionData).SphereConnections.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollisionData).Spheres.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExternalCollisionData).Boxes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FClothCollisionPrim_Convex,int>
            ((FClothCollisionPrim_Convex *)
             (this->ExternalCollisionData).Convexes.AllocatorInstance.Data,
             (this->ExternalCollisionData).Convexes.ArrayNum);
  pFVar1 = (this->ExternalCollisionData).Convexes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExternalCollisionData).SphereConnections.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExternalCollisionData).Spheres.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvironmentalCollisionData).Boxes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FClothCollisionPrim_Convex,int>
            ((FClothCollisionPrim_Convex *)
             (this->EnvironmentalCollisionData).Convexes.AllocatorInstance.Data,
             (this->EnvironmentalCollisionData).Convexes.ArrayNum);
  pFVar1 = (this->EnvironmentalCollisionData).Convexes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvironmentalCollisionData).SphereConnections.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvironmentalCollisionData).Spheres.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkinnedMeshCollisionData).Boxes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FClothCollisionPrim_Convex,int>
            ((FClothCollisionPrim_Convex *)
             (this->SkinnedMeshCollisionData).Convexes.AllocatorInstance.Data,
             (this->SkinnedMeshCollisionData).Convexes.ArrayNum);
  pFVar1 = (this->SkinnedMeshCollisionData).Convexes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkinnedMeshCollisionData).SphereConnections.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkinnedMeshCollisionData).Spheres.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ExtractCollisionData @ 14dc46830

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::FCollisionSourcesProxy::ExtractCollisionData(FCollisionSourcesProxy *this)

{
  int iVar1;
  FCollisionSources *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FWeakObjectPtr FVar8;
  UObject *pUVar9;
  USkinnedMeshComponent *pUVar10;
  USceneComponent *pUVar11;
  FWeakObjectPtr *this_00;
  FScriptContainerElement *pFVar12;
  FCollisionSource *this_01;
  FWeakObjectPtr *pFVar13;
  FCollisionSource *pFVar14;
  UObject *pUVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  
  pFVar2 = this->CollisionSources;
  bVar6 = false;
  iVar1 = (pFVar2->CollisionSources).ArrayNum;
  this_00 = (FWeakObjectPtr *)(pFVar2->CollisionSources).AllocatorInstance.Data;
  pFVar13 = this_00 + (longlong)iVar1 * 0xf;
  while( true ) {
    if ((pFVar2->CollisionSources).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar13) break;
    FVar8 = (FWeakObjectPtr)FWeakObjectPtr::Get(this_00);
    this_00[1] = FVar8;
    this_00 = this_00 + 0xf;
  }
  pFVar2 = this->CollisionSources;
  if (this->Version == pFVar2->Version) {
    iVar1 = (pFVar2->CollisionSources).ArrayNum;
    pFVar12 = (pFVar2->CollisionSources).AllocatorInstance.Data;
    pFVar16 = pFVar12 + (longlong)iVar1 * 0x78;
    do {
      if ((pFVar2->CollisionSources).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar12 == pFVar16) goto LAB_14dc469b3;
      pUVar15 = *(UObject **)(pFVar12 + 8);
      if (pUVar15 != (UObject *)0x0) {
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar15[0x24].field_0x10);
        if (pUVar9 != (UObject *)0x0) {
          pUVar15 = pUVar9;
        }
        if (*(int *)(pFVar12 + 0x70) != *(int *)(pUVar15 + 0x29)) break;
      }
      pFVar12 = pFVar12 + 0x78;
    } while( true );
  }
  pFVar2 = this->CollisionSources;
  FClothCollisionData::Reset(&this->SkinnedMeshCollisionData);
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pFVar2);
  if (bVar6) {
    iVar1 = (pFVar2->CollisionSources).ArrayNum;
    this_01 = (FCollisionSource *)(pFVar2->CollisionSources).AllocatorInstance.Data;
    pFVar14 = this_01 + iVar1;
    while( true ) {
      if ((pFVar2->CollisionSources).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (this_01 == pFVar14) break;
      pUVar10 = (USkinnedMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar2);
      FCollisionSources::FCollisionSource::ExtractCollisionData
                (this_01,pUVar10,&this->SkinnedMeshCollisionData);
      this_01 = this_01 + 1;
    }
  }
  pFVar2 = this->CollisionSources;
  pFVar2->Version = this->Version;
  iVar1 = (pFVar2->CollisionSources).ArrayNum;
  pFVar12 = (pFVar2->CollisionSources).AllocatorInstance.Data;
  pFVar16 = pFVar12 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((pFVar2->CollisionSources).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar16) break;
    pUVar15 = *(UObject **)(pFVar12 + 8);
    if (pUVar15 != (UObject *)0x0) {
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar15[0x24].field_0x10);
      if (pUVar9 != (UObject *)0x0) {
        pUVar15 = pUVar9;
      }
      *(undefined4 *)(pFVar12 + 0x70) = *(undefined4 *)(pUVar15 + 0x29);
    }
    pFVar12 = pFVar12 + 0x78;
  }
  bVar6 = true;
LAB_14dc469b3:
  if (((((this->EnvironmentalCollisionData).Spheres.ArrayNum == 0) &&
       ((this->EnvironmentalCollisionData).SphereConnections.ArrayNum == 0)) &&
      ((this->EnvironmentalCollisionData).Convexes.ArrayNum == 0)) &&
     ((this->EnvironmentalCollisionData).Boxes.ArrayNum == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  pFVar2 = this->CollisionSources;
  FClothCollisionData::Reset(&this->EnvironmentalCollisionData);
  bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pFVar2);
  if ((bVar7) && (pFVar2->bCollideWithEnvironment != false)) {
    pUVar11 = (USceneComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar2);
    FEnvironmentalCollisions::AppendCollisionDataFromEnvironment
              (pUVar11,&this->EnvironmentalCollisionData);
  }
  if ((((this->EnvironmentalCollisionData).Spheres.ArrayNum == 0) &&
      ((this->EnvironmentalCollisionData).SphereConnections.ArrayNum == 0)) &&
     (((this->EnvironmentalCollisionData).Convexes.ArrayNum == 0 &&
      ((this->EnvironmentalCollisionData).Boxes.ArrayNum == 0)))) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (((((this->ExternalCollisionData).Spheres.ArrayNum == 0) &&
       ((this->ExternalCollisionData).SphereConnections.ArrayNum == 0)) &&
      ((this->ExternalCollisionData).Convexes.ArrayNum == 0)) &&
     ((this->ExternalCollisionData).Boxes.ArrayNum == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  FClothCollisionData::operator=
            (&this->ExternalCollisionData,&this->CollisionSources->ExternalCollisions);
  if ((((this->ExternalCollisionData).Spheres.ArrayNum == 0) &&
      ((this->ExternalCollisionData).SphereConnections.ArrayNum == 0)) &&
     (((this->ExternalCollisionData).Convexes.ArrayNum == 0 &&
      ((this->ExternalCollisionData).Boxes.ArrayNum == 0)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3 || (((bVar6 || bVar5) || bVar7) || bVar4)) {
    FClothCollisionData::operator=(&this->CollisionData,&this->SkinnedMeshCollisionData);
    FClothCollisionData::Append(&this->CollisionData,&this->EnvironmentalCollisionData);
    FClothCollisionData::Append(&this->CollisionData,&this->ExternalCollisionData);
  }
  return;
}

