// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// FProceduralISMComponentDescriptor @ 14973a470

FProceduralISMComponentDescriptor * __thiscall
FProceduralISMComponentDescriptor::FProceduralISMComponentDescriptor
          (FProceduralISMComponentDescriptor *this,FProceduralISMComponentDescriptor *param_1)

{
  UMaterialInterface *pUVar1;
  undefined8 uVar2;
  double dVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  byte bVar11;
  
  this->_padding_ = (longlong)&___7FProceduralISMComponentDescriptor__6B_;
  this->Hash = param_1->Hash;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr =
       *(undefined8 *)&(param_1->StaticMesh).SoftObjectPtr;
  uVar2 = *(undefined8 *)&(param_1->StaticMesh).SoftObjectPtr.field_0x10;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x8 =
       *(undefined8 *)&(param_1->StaticMesh).SoftObjectPtr.field_0x8;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x10 = uVar2;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x18 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x18 =
       *(undefined8 *)&(param_1->StaticMesh).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(param_1->StaticMesh).SoftObjectPtr.field_0x18 = 0;
  *(undefined4 *)&(this->StaticMesh).SoftObjectPtr.field_0x20 =
       *(undefined4 *)&(param_1->StaticMesh).SoftObjectPtr.field_0x20;
  *(undefined4 *)&(this->StaticMesh).SoftObjectPtr.field_0x24 =
       *(undefined4 *)&(param_1->StaticMesh).SoftObjectPtr.field_0x24;
  *(undefined8 *)&(param_1->StaticMesh).SoftObjectPtr.field_0x20 = 0;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).AllocatorInstance.Data =
       (param_1->OverrideMaterials).AllocatorInstance.Data;
  (param_1->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = (param_1->OverrideMaterials).ArrayNum;
  (this->OverrideMaterials).ArrayMax = (param_1->OverrideMaterials).ArrayMax;
  (param_1->OverrideMaterials).ArrayNum = 0;
  (param_1->OverrideMaterials).ArrayMax = 0;
  pUVar1 = (param_1->OverlayMaterial).field0_0x0.DebugPtr;
  (this->OverlayMaterial).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->RuntimeVirtualTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeVirtualTextures).AllocatorInstance.Data =
       (param_1->RuntimeVirtualTextures).AllocatorInstance.Data;
  (param_1->RuntimeVirtualTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeVirtualTextures).ArrayNum = (param_1->RuntimeVirtualTextures).ArrayNum;
  (this->RuntimeVirtualTextures).ArrayMax = (param_1->RuntimeVirtualTextures).ArrayMax;
  (param_1->RuntimeVirtualTextures).ArrayNum = 0;
  (param_1->RuntimeVirtualTextures).ArrayMax = 0;
  this->NumInstances = param_1->NumInstances;
  this->NumCustomFloats = param_1->NumCustomFloats;
  dVar3 = (param_1->WorldBounds).Min.field0_0x0._s_0.Y;
  (this->WorldBounds).Min.field0_0x0._s_0.X = (param_1->WorldBounds).Min.field0_0x0._s_0.X;
  (this->WorldBounds).Min.field0_0x0._s_0.Y = dVar3;
  dVar3 = (param_1->WorldBounds).Max.field0_0x0._s_0.X;
  (this->WorldBounds).Min.field0_0x0._s_0.Z = (param_1->WorldBounds).Min.field0_0x0._s_0.Z;
  (this->WorldBounds).Max.field0_0x0._s_0.X = dVar3;
  dVar3 = (param_1->WorldBounds).Max.field0_0x0._s_0.Z;
  (this->WorldBounds).Max.field0_0x0._s_0.Y = (param_1->WorldBounds).Max.field0_0x0._s_0.Y;
  (this->WorldBounds).Max.field0_0x0._s_0.Z = dVar3;
  uVar4 = (param_1->WorldBounds).Pad[0];
  uVar5 = (param_1->WorldBounds).Pad[1];
  uVar6 = (param_1->WorldBounds).Pad[2];
  uVar7 = (param_1->WorldBounds).Pad[3];
  uVar8 = (param_1->WorldBounds).Pad[4];
  uVar9 = (param_1->WorldBounds).Pad[5];
  uVar10 = (param_1->WorldBounds).Pad[6];
  (this->WorldBounds).IsValid = (param_1->WorldBounds).IsValid;
  (this->WorldBounds).Pad[0] = uVar4;
  (this->WorldBounds).Pad[1] = uVar5;
  (this->WorldBounds).Pad[2] = uVar6;
  (this->WorldBounds).Pad[3] = uVar7;
  (this->WorldBounds).Pad[4] = uVar8;
  (this->WorldBounds).Pad[5] = uVar9;
  (this->WorldBounds).Pad[6] = uVar10;
  this->InstanceMinDrawDistance = param_1->InstanceMinDrawDistance;
  this->InstanceStartCullDistance = param_1->InstanceStartCullDistance;
  this->InstanceEndCullDistance = param_1->InstanceEndCullDistance;
  (this->Mobility).Value = (param_1->Mobility).Value;
  this->VirtualTextureRenderPassType = param_1->VirtualTextureRenderPassType;
  this->LightingChannels = param_1->LightingChannels;
  this->CustomDepthStencilWriteMask = param_1->CustomDepthStencilWriteMask;
  this->VirtualTextureCullMips = param_1->VirtualTextureCullMips;
  this->TranslucencySortPriority = param_1->TranslucencySortPriority;
  this->CustomDepthStencilValue = param_1->CustomDepthStencilValue;
  this->RayTracingGroupId = param_1->RayTracingGroupId;
  this->RayTracingGroupCullingPriority = param_1->RayTracingGroupCullingPriority;
  bVar11 = (this->bVisibleInRayTracing ^ param_1->bVisibleInRayTracing) & 1 ^ this->field_0xc1;
  this->field_0xc1 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xc1) & 2 ^ bVar11;
  this->field_0xc1 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xc1) & 4 ^ bVar11;
  this->field_0xc1 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xc1) & 8 ^ bVar11;
  this->field_0xc1 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xc1) & 0x10 ^ bVar11;
  this->field_0xc1 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xc1) & 0x20 ^ bVar11;
  this->field_0xc1 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xc1) & 0x40 ^ bVar11;
  this->field_0xc1 = bVar11;
  this->field_0xc1 = (bVar11 ^ param_1->field_0xc1) & 0x7f ^ param_1->field_0xc1;
  bVar11 = (this->bReceivesDecals ^ param_1->bReceivesDecals) & 1 ^ this->field_0xc2;
  this->field_0xc2 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xc2) & 2 ^ bVar11;
  this->field_0xc2 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xc2) & 4 ^ bVar11;
  this->field_0xc2 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xc2) & 8 ^ bVar11;
  this->field_0xc2 = bVar11;
  this->field_0xc2 = (bVar11 ^ param_1->field_0xc2) & 0x10 ^ bVar11;
  this->WorldPositionOffsetDisableDistance = param_1->WorldPositionOffsetDisableDistance;
  this->ShadowCacheInvalidationBehavior = param_1->ShadowCacheInvalidationBehavior;
  (this->DetailMode).Value = (param_1->DetailMode).Value;
  return this;
}

// FProceduralISMComponentDescriptor @ 14973a740

FProceduralISMComponentDescriptor * __thiscall
FProceduralISMComponentDescriptor::FProceduralISMComponentDescriptor
          (FProceduralISMComponentDescriptor *this,FProceduralISMComponentDescriptor *param_1)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  UMaterialInterface *pUVar6;
  double dVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  byte bVar15;
  
  this->_padding_ = (longlong)&___7FProceduralISMComponentDescriptor__6B_;
  this->Hash = param_1->Hash;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr =
       *(undefined8 *)&(param_1->StaticMesh).SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&(this->StaticMesh).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->StaticMesh).SoftObjectPtr.field_0x8);
  pTVar1 = &this->OverrideMaterials;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->OverrideMaterials).ArrayMax;
  iVar4 = (param_1->OverrideMaterials).ArrayNum;
  pFVar5 = (param_1->OverrideMaterials).AllocatorInstance.Data;
  (this->OverrideMaterials).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar5,iVar4);
  }
  pUVar6 = (param_1->OverlayMaterial).field0_0x0.DebugPtr;
  (this->OverlayMaterial).field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pTVar3 = &this->RuntimeVirtualTextures;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->RuntimeVirtualTextures).ArrayMax;
  iVar4 = (param_1->RuntimeVirtualTextures).ArrayNum;
  pFVar5 = (param_1->RuntimeVirtualTextures).AllocatorInstance.Data;
  (this->RuntimeVirtualTextures).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    ConstructItems<TObjectPtr<URuntimeVirtualTexture>,TObjectPtr<URuntimeVirtualTexture>,int>
              ((pTVar3->AllocatorInstance).Data,(TObjectPtr<URuntimeVirtualTexture> *)pFVar5,iVar4);
  }
  this->NumInstances = param_1->NumInstances;
  this->NumCustomFloats = param_1->NumCustomFloats;
  dVar7 = (param_1->WorldBounds).Min.field0_0x0._s_0.Y;
  (this->WorldBounds).Min.field0_0x0._s_0.X = (param_1->WorldBounds).Min.field0_0x0._s_0.X;
  (this->WorldBounds).Min.field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->WorldBounds).Max.field0_0x0._s_0.X;
  (this->WorldBounds).Min.field0_0x0._s_0.Z = (param_1->WorldBounds).Min.field0_0x0._s_0.Z;
  (this->WorldBounds).Max.field0_0x0._s_0.X = dVar7;
  dVar7 = (param_1->WorldBounds).Max.field0_0x0._s_0.Z;
  (this->WorldBounds).Max.field0_0x0._s_0.Y = (param_1->WorldBounds).Max.field0_0x0._s_0.Y;
  (this->WorldBounds).Max.field0_0x0._s_0.Z = dVar7;
  uVar8 = (param_1->WorldBounds).Pad[0];
  uVar9 = (param_1->WorldBounds).Pad[1];
  uVar10 = (param_1->WorldBounds).Pad[2];
  uVar11 = (param_1->WorldBounds).Pad[3];
  uVar12 = (param_1->WorldBounds).Pad[4];
  uVar13 = (param_1->WorldBounds).Pad[5];
  uVar14 = (param_1->WorldBounds).Pad[6];
  (this->WorldBounds).IsValid = (param_1->WorldBounds).IsValid;
  (this->WorldBounds).Pad[0] = uVar8;
  (this->WorldBounds).Pad[1] = uVar9;
  (this->WorldBounds).Pad[2] = uVar10;
  (this->WorldBounds).Pad[3] = uVar11;
  (this->WorldBounds).Pad[4] = uVar12;
  (this->WorldBounds).Pad[5] = uVar13;
  (this->WorldBounds).Pad[6] = uVar14;
  this->InstanceMinDrawDistance = param_1->InstanceMinDrawDistance;
  this->InstanceStartCullDistance = param_1->InstanceStartCullDistance;
  this->InstanceEndCullDistance = param_1->InstanceEndCullDistance;
  (this->Mobility).Value = (param_1->Mobility).Value;
  this->VirtualTextureRenderPassType = param_1->VirtualTextureRenderPassType;
  this->LightingChannels = param_1->LightingChannels;
  this->CustomDepthStencilWriteMask = param_1->CustomDepthStencilWriteMask;
  this->VirtualTextureCullMips = param_1->VirtualTextureCullMips;
  this->TranslucencySortPriority = param_1->TranslucencySortPriority;
  this->CustomDepthStencilValue = param_1->CustomDepthStencilValue;
  this->RayTracingGroupId = param_1->RayTracingGroupId;
  this->RayTracingGroupCullingPriority = param_1->RayTracingGroupCullingPriority;
  bVar15 = (this->bVisibleInRayTracing ^ param_1->bVisibleInRayTracing) & 1 ^ this->field_0xc1;
  this->field_0xc1 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xc1) & 2 ^ bVar15;
  this->field_0xc1 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xc1) & 4 ^ bVar15;
  this->field_0xc1 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xc1) & 8 ^ bVar15;
  this->field_0xc1 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xc1) & 0x10 ^ bVar15;
  this->field_0xc1 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xc1) & 0x20 ^ bVar15;
  this->field_0xc1 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xc1) & 0x40 ^ bVar15;
  this->field_0xc1 = bVar15;
  this->field_0xc1 = (bVar15 ^ param_1->field_0xc1) & 0x7f ^ param_1->field_0xc1;
  bVar15 = (this->bReceivesDecals ^ param_1->bReceivesDecals) & 1 ^ this->field_0xc2;
  this->field_0xc2 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xc2) & 2 ^ bVar15;
  this->field_0xc2 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xc2) & 4 ^ bVar15;
  this->field_0xc2 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xc2) & 8 ^ bVar15;
  this->field_0xc2 = bVar15;
  this->field_0xc2 = (bVar15 ^ param_1->field_0xc2) & 0x10 ^ bVar15;
  this->WorldPositionOffsetDisableDistance = param_1->WorldPositionOffsetDisableDistance;
  this->ShadowCacheInvalidationBehavior = param_1->ShadowCacheInvalidationBehavior;
  (this->DetailMode).Value = (param_1->DetailMode).Value;
  return this;
}

// operator= @ 14973f5a0

FProceduralISMComponentDescriptor * __thiscall
FProceduralISMComponentDescriptor::operator=
          (FProceduralISMComponentDescriptor *this,FProceduralISMComponentDescriptor *param_1)

{
  UMaterialInterface *pUVar1;
  double dVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  byte bVar10;
  
  this->Hash = param_1->Hash;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr =
       *(undefined8 *)&(param_1->StaticMesh).SoftObjectPtr;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->StaticMesh).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->StaticMesh).SoftObjectPtr.field_0x8);
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
            (&this->OverrideMaterials,&param_1->OverrideMaterials);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->OverlayMaterial).field0_0x0.DebugPtr, pUVar1 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->OverlayMaterial).field0_0x0 = (param_1->OverlayMaterial).field0_0x0;
  TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>::operator=
            (&this->RuntimeVirtualTextures,&param_1->RuntimeVirtualTextures);
  this->NumInstances = param_1->NumInstances;
  this->NumCustomFloats = param_1->NumCustomFloats;
  dVar2 = (param_1->WorldBounds).Min.field0_0x0._s_0.Y;
  (this->WorldBounds).Min.field0_0x0._s_0.X = (param_1->WorldBounds).Min.field0_0x0._s_0.X;
  (this->WorldBounds).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->WorldBounds).Max.field0_0x0._s_0.X;
  (this->WorldBounds).Min.field0_0x0._s_0.Z = (param_1->WorldBounds).Min.field0_0x0._s_0.Z;
  (this->WorldBounds).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->WorldBounds).Max.field0_0x0._s_0.Z;
  (this->WorldBounds).Max.field0_0x0._s_0.Y = (param_1->WorldBounds).Max.field0_0x0._s_0.Y;
  (this->WorldBounds).Max.field0_0x0._s_0.Z = dVar2;
  uVar3 = (param_1->WorldBounds).Pad[0];
  uVar4 = (param_1->WorldBounds).Pad[1];
  uVar5 = (param_1->WorldBounds).Pad[2];
  uVar6 = (param_1->WorldBounds).Pad[3];
  uVar7 = (param_1->WorldBounds).Pad[4];
  uVar8 = (param_1->WorldBounds).Pad[5];
  uVar9 = (param_1->WorldBounds).Pad[6];
  (this->WorldBounds).IsValid = (param_1->WorldBounds).IsValid;
  (this->WorldBounds).Pad[0] = uVar3;
  (this->WorldBounds).Pad[1] = uVar4;
  (this->WorldBounds).Pad[2] = uVar5;
  (this->WorldBounds).Pad[3] = uVar6;
  (this->WorldBounds).Pad[4] = uVar7;
  (this->WorldBounds).Pad[5] = uVar8;
  (this->WorldBounds).Pad[6] = uVar9;
  this->InstanceMinDrawDistance = param_1->InstanceMinDrawDistance;
  this->InstanceStartCullDistance = param_1->InstanceStartCullDistance;
  this->InstanceEndCullDistance = param_1->InstanceEndCullDistance;
  (this->Mobility).Value = (param_1->Mobility).Value;
  this->VirtualTextureRenderPassType = param_1->VirtualTextureRenderPassType;
  this->LightingChannels = param_1->LightingChannels;
  this->CustomDepthStencilWriteMask = param_1->CustomDepthStencilWriteMask;
  this->VirtualTextureCullMips = param_1->VirtualTextureCullMips;
  this->TranslucencySortPriority = param_1->TranslucencySortPriority;
  this->CustomDepthStencilValue = param_1->CustomDepthStencilValue;
  this->RayTracingGroupId = param_1->RayTracingGroupId;
  this->RayTracingGroupCullingPriority = param_1->RayTracingGroupCullingPriority;
  bVar10 = (this->bVisibleInRayTracing ^ param_1->bVisibleInRayTracing) & 1 ^ this->field_0xc1;
  this->field_0xc1 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0xc1) & 2 ^ bVar10;
  this->field_0xc1 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0xc1) & 4 ^ bVar10;
  this->field_0xc1 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0xc1) & 8 ^ bVar10;
  this->field_0xc1 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0xc1) & 0x10 ^ bVar10;
  this->field_0xc1 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0xc1) & 0x20 ^ bVar10;
  this->field_0xc1 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0xc1) & 0x40 ^ bVar10;
  this->field_0xc1 = bVar10;
  this->field_0xc1 = (bVar10 ^ param_1->field_0xc1) & 0x7f ^ param_1->field_0xc1;
  bVar10 = (this->bReceivesDecals ^ param_1->bReceivesDecals) & 1 ^ this->field_0xc2;
  this->field_0xc2 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0xc2) & 2 ^ bVar10;
  this->field_0xc2 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0xc2) & 4 ^ bVar10;
  this->field_0xc2 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0xc2) & 8 ^ bVar10;
  this->field_0xc2 = bVar10;
  this->field_0xc2 = (bVar10 ^ param_1->field_0xc2) & 0x10 ^ bVar10;
  this->WorldPositionOffsetDisableDistance = param_1->WorldPositionOffsetDisableDistance;
  this->ShadowCacheInvalidationBehavior = param_1->ShadowCacheInvalidationBehavior;
  (this->DetailMode).Value = (param_1->DetailMode).Value;
  return this;
}

