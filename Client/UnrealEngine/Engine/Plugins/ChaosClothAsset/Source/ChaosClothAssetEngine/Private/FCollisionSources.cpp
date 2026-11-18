// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 15

// FCollisionSources @ 14dc34820

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCollisionSources * __thiscall
UE::Chaos::ClothAsset::FCollisionSources::FCollisionSources
          (FCollisionSources *this,USkinnedMeshComponent *param_1,bool param_2)

{
  USkinnedMeshComponent *local_res8;
  
  if ((GC::GIsIncrementalReachabilityPending) && (param_1 != (USkinnedMeshComponent *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  (this->OwnerComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USkinnedMeshComponent *)0x0))
  {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  (this->CollisionSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionSources).ArrayNum = 0;
  (this->CollisionSources).ArrayMax = 0;
  (this->ExternalCollisions).Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalCollisions).Spheres.ArrayNum = 0;
  (this->ExternalCollisions).Spheres.ArrayMax = 0;
  (this->ExternalCollisions).SphereConnections.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ExternalCollisions).SphereConnections.ArrayNum = 0;
  (this->ExternalCollisions).SphereConnections.ArrayMax = 0;
  (this->ExternalCollisions).Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalCollisions).Convexes.ArrayNum = 0;
  (this->ExternalCollisions).Convexes.ArrayMax = 0;
  (this->ExternalCollisions).Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalCollisions).Boxes.ArrayNum = 0;
  (this->ExternalCollisions).Boxes.ArrayMax = 0;
  this->bCollideWithEnvironment = param_2;
  this->Version = -1;
  return this;
}

// ~FCollisionSources @ 14dc35f60

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
UE::Chaos::ClothAsset::FCollisionSources::~FCollisionSources(FCollisionSources *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ExternalCollisions).Boxes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FClothCollisionPrim_Convex,int>
            ((FClothCollisionPrim_Convex *)
             (this->ExternalCollisions).Convexes.AllocatorInstance.Data,
             (this->ExternalCollisions).Convexes.ArrayNum);
  pFVar1 = (this->ExternalCollisions).Convexes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExternalCollisions).SphereConnections.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExternalCollisions).Spheres.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int>
            ((FCollisionSource *)(this->CollisionSources).AllocatorInstance.Data,
             (this->CollisionSources).ArrayNum);
  pFVar1 = (this->CollisionSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Add @ 14dc383a0

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
UE::Chaos::ClothAsset::FCollisionSources::Add
          (FCollisionSources *this,USkinnedMeshComponent *param_1,UPhysicsAsset *param_2,
          bool param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  USkinnedMeshComponent *pUVar4;
  UObject *pUVar5;
  USkinnedMeshComponent *pUVar6;
  FScriptContainerElement *this_00;
  FWeakObjectPtr *this_01;
  FScriptContainerElement *pFVar7;
  USkinnedMeshComponent *local_res8;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (((bVar2) && (param_1 != (USkinnedMeshComponent *)0x0)) && (param_2 != (UPhysicsAsset *)0x0)) {
    this_00 = (this->CollisionSources).AllocatorInstance.Data;
    pFVar7 = this_00 + (longlong)(this->CollisionSources).ArrayNum * 0x78;
    for (; this_00 != pFVar7; this_00 = this_00 + 0x78) {
      bVar2 = TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>::
              UEOpEquals<USkinnedMeshComponent,bool>
                        ((TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> *)this_00,param_1);
      if ((bVar2) &&
         (bVar2 = TWeakObjectPtr<UPhysicsAsset_const_,FWeakObjectPtr>::
                  UEOpEquals<UPhysicsAsset,bool>
                            ((TWeakObjectPtr<UPhysicsAsset_const_,FWeakObjectPtr> *)(this_00 + 0x10)
                             ,param_2), bVar2)) {
        if (this_00 != (FScriptContainerElement *)0x0) {
          return;
        }
        break;
      }
    }
    iVar3 = (this->CollisionSources).ArrayNum;
    piVar1 = &(this->CollisionSources).ArrayMax;
    if (iVar3 == *piVar1) {
      iVar3 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,&(this->CollisionSources).AllocatorInstance,piVar1);
    }
    (this->CollisionSources).ArrayNum = iVar3 + 1;
    this_01 = (FWeakObjectPtr *)
              ((this->CollisionSources).AllocatorInstance.Data + (longlong)iVar3 * 0x78);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    this_01->ObjectIndex = 0;
    this_01->ObjectSerialNumber = 0;
    local_res8 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(this_01,(FObjectPtr)&local_res8);
    this_01[1].ObjectIndex = 0;
    this_01[1].ObjectSerialNumber = 0;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    this_01[2].ObjectIndex = 0;
    this_01[2].ObjectSerialNumber = 0;
    local_res8 = (USkinnedMeshComponent *)param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(this_01 + 2,(FObjectPtr)&local_res8);
    this_01[3].ObjectIndex = 0;
    this_01[3].ObjectSerialNumber = 0;
    this_01[4].ObjectIndex = 0;
    this_01[4].ObjectSerialNumber = 0;
    this_01[5].ObjectIndex = 0;
    this_01[5].ObjectSerialNumber = 0;
    this_01[6].ObjectIndex = 0;
    this_01[6].ObjectSerialNumber = 0;
    this_01[7].ObjectIndex = 0;
    this_01[7].ObjectSerialNumber = 0;
    this_01[8].ObjectIndex = 0;
    this_01[8].ObjectSerialNumber = 0;
    this_01[9].ObjectIndex = 0;
    this_01[9].ObjectSerialNumber = 0;
    this_01[10].ObjectIndex = 0;
    this_01[10].ObjectSerialNumber = 0;
    this_01[0xb].ObjectIndex = 0;
    this_01[0xb].ObjectSerialNumber = 0;
    this_01[0xc].ObjectIndex = 0;
    this_01[0xc].ObjectSerialNumber = 0;
    this_01[0xd].ObjectIndex = 0;
    this_01[0xd].ObjectSerialNumber = 0;
    this_01[0xe].ObjectIndex = 0;
    *(bool *)&this_01[0xe].ObjectSerialNumber = param_3;
    pUVar4 = (USkinnedMeshComponent *)FWeakObjectPtr::Get(&(param_1->LeaderPoseComponent).WeakPtr);
    pUVar6 = param_1;
    if (pUVar4 != (USkinnedMeshComponent *)0x0) {
      pUVar6 = pUVar4;
    }
    this_01[0xe].ObjectIndex = pUVar6->CurrentBoneTransformRevisionNumber;
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    FTickFunction::AddPrerequisite
              ((FTickFunction *)&pUVar5[1].field_0x10,(UObject *)param_1,
               (FTickFunction *)&param_1->_padding_);
    this->Version = this->Version + 1;
  }
  return;
}

// AddExternalCollisions @ 14dc38590

void __thiscall
UE::Chaos::ClothAsset::FCollisionSources::AddExternalCollisions
          (FCollisionSources *this,FClothCollisionData *param_1)

{
  FClothCollisionData::Append(&this->ExternalCollisions,param_1);
  return;
}

// ClearExternalCollisions @ 14dc40c80

void __thiscall
UE::Chaos::ClothAsset::FCollisionSources::ClearExternalCollisions(FCollisionSources *this)

{
  FClothCollisionData::Reset(&this->ExternalCollisions);
  return;
}

// ExtractEnvironmentalCollisionData @ 14dc46b10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::FCollisionSources::ExtractEnvironmentalCollisionData
          (FCollisionSources *this,FClothCollisionData *param_1)

{
  bool bVar1;
  USceneComponent *pUVar2;
  
  FClothCollisionData::Reset(param_1);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if ((bVar1) && (this->bCollideWithEnvironment != false)) {
    pUVar2 = (USceneComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    FEnvironmentalCollisions::AppendCollisionDataFromEnvironment(pUVar2,param_1);
  }
  return;
}

// ExtractExternalCollisionData @ 14dc46b60

void __thiscall
UE::Chaos::ClothAsset::FCollisionSources::ExtractExternalCollisionData
          (FCollisionSources *this,FClothCollisionData *param_1)

{
  FClothCollisionData::operator=(param_1,&this->ExternalCollisions);
  return;
}

// ExtractSkinnedMeshCollisionData @ 14dc46b80

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
UE::Chaos::ClothAsset::FCollisionSources::ExtractSkinnedMeshCollisionData
          (FCollisionSources *this,FClothCollisionData *param_1)

{
  int iVar1;
  bool bVar2;
  USkinnedMeshComponent *pUVar3;
  FCollisionSource *this_00;
  FCollisionSource *pFVar4;
  undefined1 local_res8 [8];
  
  FClothCollisionData::Reset(param_1);
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar2) {
    this_00 = (FCollisionSource *)(this->CollisionSources).AllocatorInstance.Data;
    iVar1 = (this->CollisionSources).ArrayNum;
    pFVar4 = this_00 + iVar1;
    while( true ) {
      if ((this->CollisionSources).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar4) break;
      pUVar3 = (USkinnedMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      FCollisionSource::ExtractCollisionData(this_00,pUVar3,param_1);
      this_00 = this_00 + 1;
    }
  }
  return;
}

// IsCollisionDataUpToDate @ 14dc52720

bool __thiscall
UE::Chaos::ClothAsset::FCollisionSources::IsCollisionDataUpToDate
          (FCollisionSources *this,int param_1)

{
  int iVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  UObject *pUVar5;
  undefined1 local_res10 [8];
  
  if (param_1 != this->Version) {
    return false;
  }
  iVar1 = (this->CollisionSources).ArrayNum;
  pFVar3 = (this->CollisionSources).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x78;
  do {
    if ((this->CollisionSources).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar3 == pFVar4) {
      return true;
    }
    pUVar5 = *(UObject **)(pFVar3 + 8);
    if (pUVar5 != (UObject *)0x0) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5[0x24].field_0x10);
      if (pUVar2 != (UObject *)0x0) {
        pUVar5 = pUVar2;
      }
      if (*(int *)(pFVar3 + 0x70) != *(int *)(pUVar5 + 0x29)) {
        return false;
      }
    }
    pFVar3 = pFVar3 + 0x78;
  } while( true );
}

// MarkCollisionDataUpToDate @ 14dc52b70

void __thiscall
UE::Chaos::ClothAsset::FCollisionSources::MarkCollisionDataUpToDate
          (FCollisionSources *this,int param_1)

{
  int iVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  UObject *pUVar5;
  undefined1 local_res10 [8];
  
  this->Version = param_1;
  iVar1 = (this->CollisionSources).ArrayNum;
  pFVar3 = (this->CollisionSources).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((this->CollisionSources).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar3 == pFVar4) break;
    pUVar5 = *(UObject **)(pFVar3 + 8);
    if (pUVar5 != (UObject *)0x0) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5[0x24].field_0x10);
      if (pUVar2 != (UObject *)0x0) {
        pUVar5 = pUVar2;
      }
      *(undefined4 *)(pFVar3 + 0x70) = *(undefined4 *)(pUVar5 + 0x29);
    }
    pFVar3 = pFVar3 + 0x78;
  }
  return;
}

// Remove @ 14dc54ff0

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
UE::Chaos::ClothAsset::FCollisionSources::Remove
          (FCollisionSources *this,USkinnedMeshComponent *param_1)

{
  int iVar1;
  FWeakObjectPtr *this_00;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  
  if ((param_1 != (USkinnedMeshComponent *)0x0) &&
     (iVar1 = (this->CollisionSources).ArrayNum, iVar1 != 0)) {
    iVar4 = 0;
    iVar7 = 0;
    this_00 = (FWeakObjectPtr *)(this->CollisionSources).AllocatorInstance.Data;
    bVar2 = FWeakObjectPtr::IsValid(this_00);
    if ((!bVar2) ||
       (bVar2 = TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>::
                UEOpEquals<USkinnedMeshComponent,bool>
                          ((TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> *)this_00,param_1),
       bVar2)) {
      bVar8 = 0;
      iVar5 = iVar4;
    }
    else {
      bVar8 = 1;
      iVar4 = 0;
      iVar7 = 0;
      iVar5 = 0;
    }
joined_r0x00014dc5506b:
    do {
      iVar4 = iVar4 + 1;
      if (iVar4 < iVar1) {
        bVar2 = FWeakObjectPtr::IsValid(this_00 + (longlong)iVar4 * 0xf);
        if ((!bVar2) ||
           (bVar2 = TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>::
                    UEOpEquals<USkinnedMeshComponent,bool>
                              ((TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> *)
                               (this_00 + (longlong)iVar4 * 0xf),param_1), bVar2)) {
          bVar3 = 0;
        }
        else {
          bVar3 = 1;
        }
        if (bVar8 == bVar3) goto joined_r0x00014dc5506b;
      }
      iVar6 = iVar4 - iVar5;
      if (bVar8 == 0) {
        DestructItems<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int>
                  ((FCollisionSource *)(this_00 + (longlong)iVar5 * 0xf),iVar6);
      }
      else {
        if (iVar7 != iVar5) {
          memmove(this_00 + (longlong)iVar7 * 0xf,this_00 + (longlong)iVar5 * 0xf,
                  (longlong)iVar6 * 0x78);
        }
        iVar7 = iVar7 + iVar6;
      }
      bVar8 = bVar8 ^ 1;
      iVar5 = iVar4;
    } while (iVar4 < iVar1);
    (this->CollisionSources).ArrayNum = iVar7;
    if (0 < iVar1 - iVar7) {
      this->Version = this->Version + 1;
    }
  }
  return;
}

// Remove @ 14dc55150

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
UE::Chaos::ClothAsset::FCollisionSources::Remove
          (FCollisionSources *this,USkinnedMeshComponent *param_1,UPhysicsAsset *param_2)

{
  int iVar1;
  FWeakObjectPtr *this_00;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FWeakObjectPtr *this_01;
  int iVar7;
  byte bVar8;
  int local_res20;
  
  if ((param_1 != (USkinnedMeshComponent *)0x0) &&
     (iVar1 = (this->CollisionSources).ArrayNum, iVar1 != 0)) {
    iVar4 = 0;
    this_00 = (FWeakObjectPtr *)(this->CollisionSources).AllocatorInstance.Data;
    local_res20 = 0;
    bVar2 = FWeakObjectPtr::IsValid(this_00);
    if ((!bVar2) ||
       ((bVar2 = TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>::
                 UEOpEquals<USkinnedMeshComponent,bool>
                           ((TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> *)this_00,param_1)
        , bVar2 &&
        (bVar2 = TWeakObjectPtr<UPhysicsAsset_const_,FWeakObjectPtr>::UEOpEquals<UPhysicsAsset,bool>
                           ((TWeakObjectPtr<UPhysicsAsset_const_,FWeakObjectPtr> *)(this_00 + 2),
                            param_2), bVar2)))) {
      bVar8 = 0;
      iVar7 = 0;
      iVar5 = iVar4;
    }
    else {
      bVar8 = 1;
      iVar7 = 0;
      iVar4 = 0;
      iVar5 = 0;
    }
joined_r0x00014dc551eb:
    do {
      iVar4 = iVar4 + 1;
      if (iVar4 < iVar1) {
        this_01 = this_00 + (longlong)iVar4 * 0xf;
        bVar2 = FWeakObjectPtr::IsValid(this_01);
        if ((!bVar2) ||
           ((bVar2 = TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>::
                     UEOpEquals<USkinnedMeshComponent,bool>
                               ((TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> *)this_01,
                                param_1), bVar2 &&
            (bVar2 = TWeakObjectPtr<UPhysicsAsset_const_,FWeakObjectPtr>::
                     UEOpEquals<UPhysicsAsset,bool>
                               ((TWeakObjectPtr<UPhysicsAsset_const_,FWeakObjectPtr> *)(this_01 + 2)
                                ,param_2), bVar2)))) {
          bVar3 = 0;
        }
        else {
          bVar3 = 1;
        }
        iVar7 = local_res20;
        if (bVar8 == bVar3) goto joined_r0x00014dc551eb;
      }
      iVar6 = iVar4 - iVar5;
      if (bVar8 == 0) {
        DestructItems<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int>
                  ((FCollisionSource *)(this_00 + (longlong)iVar5 * 0xf),iVar6);
      }
      else {
        if (iVar7 != iVar5) {
          memmove(this_00 + (longlong)iVar7 * 0xf,this_00 + (longlong)iVar5 * 0xf,
                  (longlong)iVar6 * 0x78);
        }
        iVar7 = iVar7 + iVar6;
        local_res20 = iVar7;
      }
      bVar8 = bVar8 ^ 1;
      iVar5 = iVar4;
    } while (iVar4 < iVar1);
    (this->CollisionSources).ArrayNum = iVar7;
    if (0 < iVar1 - iVar7) {
      this->Version = this->Version + 1;
    }
  }
  return;
}

// Reset @ 14dc55a60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Chaos::ClothAsset::FCollisionSources::Reset(FCollisionSources *this)

{
  int *piVar1;
  int iVar2;
  FCollisionSource *pFVar3;
  
  piVar1 = &(this->CollisionSources).ArrayMax;
  pFVar3 = (FCollisionSource *)(this->CollisionSources).AllocatorInstance.Data;
  iVar2 = (this->CollisionSources).ArrayNum;
  if (-1 < (this->CollisionSources).ArrayMax) {
    DestructItems<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int>(pFVar3,iVar2);
    (this->CollisionSources).ArrayNum = 0;
    this->Version = this->Version + 1;
    return;
  }
  DestructItems<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int>(pFVar3,iVar2);
  (this->CollisionSources).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,&(this->CollisionSources).AllocatorInstance,0,piVar1);
  }
  this->Version = this->Version + 1;
  return;
}

// ResolveWeakComponentPtrs @ 14dc56110

void __thiscall
UE::Chaos::ClothAsset::FCollisionSources::ResolveWeakComponentPtrs(FCollisionSources *this)

{
  int iVar1;
  FWeakObjectPtr FVar2;
  FWeakObjectPtr *this_00;
  FWeakObjectPtr *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->CollisionSources).ArrayNum;
  this_00 = (FWeakObjectPtr *)(this->CollisionSources).AllocatorInstance.Data;
  pFVar3 = this_00 + (longlong)iVar1 * 0xf;
  while( true ) {
    if ((this->CollisionSources).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar3) break;
    FVar2 = (FWeakObjectPtr)FWeakObjectPtr::Get(this_00);
    this_00[1] = FVar2;
    this_00 = this_00 + 0xf;
  }
  return;
}

// SetOwnerComponent @ 14dc590b0

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
UE::Chaos::ClothAsset::FCollisionSources::SetOwnerComponent
          (FCollisionSources *this,USkinnedMeshComponent *param_1)

{
  FWeakObjectPtr local_res8;
  USkinnedMeshComponent *local_res10;
  
  if ((GC::GIsIncrementalReachabilityPending) && (param_1 != (USkinnedMeshComponent *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USkinnedMeshComponent *)0x0))
  {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->OwnerComponent).WeakPtr = local_res8;
  return;
}

