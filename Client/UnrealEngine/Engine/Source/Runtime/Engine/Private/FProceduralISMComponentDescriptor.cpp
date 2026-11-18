// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 147d50160

UScriptStruct * __cdecl FProceduralISMComponentDescriptor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FProceduralISMComponentDescriptor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FProceduralISMComponentDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FProceduralISMComponentDescriptor,
                         (UObject *)pUVar1,L"ProceduralISMComponentDescriptor");
  }
  return Z_Registration_Info_UScriptStruct_FProceduralISMComponentDescriptor.OuterSingleton;
}

// FProceduralISMComponentDescriptor @ 147d78ef0

FProceduralISMComponentDescriptor * __thiscall
FProceduralISMComponentDescriptor::FProceduralISMComponentDescriptor
          (FProceduralISMComponentDescriptor *this)

{
  FLightingChannels *pFVar1;
  FLightingChannels *pFVar2;
  FLightingChannels FVar3;
  FSoftISMComponentDescriptor *pFVar4;
  undefined1 *this_00;
  undefined8 local_res8;
  undefined1 local_268 [520];
  void *local_60;
  ForAnyElementType local_50;
  int local_48;
  void *local_28;
  ForAnyElementType local_18;
  int local_10;
  
  this->_padding_ = (longlong)&___7FProceduralISMComponentDescriptor__6B_;
  this->Hash = 0;
  this_00 = &(this->StaticMesh).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->StaticMesh).SoftObjectPtr,(FObjectPtr)&local_res8);
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  pFVar2 = &this->LightingChannels;
  pFVar2->bChannel0 = '\x01';
  pFVar2->bChannel2 = '\0';
  pFVar2->bChannel1 = '\0';
  (this->OverlayMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->RuntimeVirtualTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeVirtualTextures).ArrayNum = 0;
  (this->RuntimeVirtualTextures).ArrayMax = 0;
  this->NumInstances = 0;
  this->NumCustomFloats = 0;
  (this->WorldBounds).IsValid = '\0';
  pFVar4 = FSoftISMComponentDescriptor::FSoftISMComponentDescriptor
                     ((FSoftISMComponentDescriptor *)local_268);
  operator=(this,pFVar4);
  local_268._0_8_ = &___7FSoftISMComponentDescriptor__6B_;
  DestructItems<TSoftObjectPtr<URuntimeVirtualTexture>,int>
            ((TSoftObjectPtr<URuntimeVirtualTexture> *)local_18.Data,local_10);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  DestructItems<TSoftObjectPtr<UMaterialInterface>,int>
            ((TSoftObjectPtr<UMaterialInterface> *)local_50.Data,local_48);
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  local_268._0_8_ = &___7FISMComponentDescriptorBase__6B_;
  FBodyInstance::~FBodyInstance((FBodyInstance *)(local_268 + 0x28));
  return this;
}

// ~FProceduralISMComponentDescriptor @ 147d7b620

void __thiscall
FProceduralISMComponentDescriptor::~FProceduralISMComponentDescriptor
          (FProceduralISMComponentDescriptor *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->RuntimeVirtualTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->StaticMesh).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

// operator= @ 147d7cb60

FProceduralISMComponentDescriptor * __thiscall
FProceduralISMComponentDescriptor::operator=
          (FProceduralISMComponentDescriptor *this,FSoftISMComponentDescriptor *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UMaterialInterface *pUVar7;
  FProceduralISMComponentDescriptor *pFVar8;
  byte bVar9;
  byte bVar10;
  FScriptContainerElement *pFVar11;
  byte bVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  UMaterialInterface *local_38;
  URuntimeVirtualTexture *local_30;
  
  this->InstanceMinDrawDistance = (int)param_1->_padding_;
  this->InstanceStartCullDistance = *(int *)((longlong)&param_1->_padding_ + 4);
  this->InstanceEndCullDistance = (int)param_1->_padding_;
  pUVar7 = TSoftObjectPtr<UMaterialInterface>::LoadSynchronous(&param_1->OverlayMaterial);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->OverlayMaterial).field0_0x0.DebugPtr = pUVar7;
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&this->StaticMesh,
             (TPersistentObjectPtr<FSoftObjectPath> *)&param_1->StaticMesh);
  (this->Mobility).Value = (uchar)param_1->_padding_;
  this->VirtualTextureRenderPassType =
       *(ERuntimeVirtualTextureMainPassType *)((longlong)&param_1->_padding_ + 1);
  this->LightingChannels = *(FLightingChannels *)((longlong)&param_1->_padding_ + 3);
  this->CustomDepthStencilWriteMask = *(ERendererStencilMask *)((longlong)&param_1->_padding_ + 2);
  this->VirtualTextureCullMips = (int)param_1->_padding_;
  this->TranslucencySortPriority = *(int *)((longlong)&param_1->_padding_ + 4);
  this->CustomDepthStencilValue = *(int *)((longlong)&param_1->_padding_ + 4);
  bVar9 = ((char)param_1->_padding_ * '\x02' ^ this->field_0xc1) & 2U ^ this->field_0xc1;
  this->field_0xc1 = bVar9;
  bVar9 = ((char)param_1->_padding_ * '\x02' ^ bVar9) & 4 ^ bVar9;
  this->field_0xc1 = bVar9;
  bVar9 = ((byte)param_1->_padding_ >> 2 ^ bVar9) & 8 ^ bVar9;
  this->field_0xc1 = bVar9;
  bVar9 = ((byte)param_1->_padding_ >> 2 ^ bVar9) & 0x10 ^ bVar9;
  this->field_0xc1 = bVar9;
  bVar9 = (*(char *)((longlong)&param_1->_padding_ + 1) << 5 ^ bVar9) & 0x20 ^ bVar9;
  this->field_0xc1 = bVar9;
  bVar9 = (bVar9 ^ *(byte *)((longlong)&param_1->_padding_ + 1)) & 0x40 ^ bVar9;
  this->field_0xc1 = bVar9;
  bVar12 = (*(byte *)((longlong)&param_1->_padding_ + 1) & 0xe0) << 2 | bVar9 & 0x7f;
  this->field_0xc1 = bVar12;
  bVar10 = *(byte *)((longlong)&param_1->_padding_ + 1) >> 7;
  bVar9 = bVar10 | this->field_0xc2 & 0xfe;
  this->bReceivesDecals = bVar10;
  bVar9 = (bVar9 ^ *(byte *)((longlong)&param_1->_padding_ + 2)) & 2 ^ bVar9;
  this->field_0xc2 = bVar9;
  bVar9 = (*(byte *)((longlong)&param_1->_padding_ + 2) >> 2 ^ bVar9) & 4 ^ bVar9;
  this->field_0xc2 = bVar9;
  bVar9 = (*(byte *)((longlong)&param_1->_padding_ + 3) >> 2 ^ bVar9) & 8 ^ bVar9;
  this->field_0xc2 = bVar9;
  this->field_0xc2 = (*(byte *)((longlong)&param_1->_padding_ + 3) >> 2 ^ bVar9) & 0x10 ^ bVar9;
  this->WorldPositionOffsetDisableDistance = (int)param_1->_padding_;
  this->ShadowCacheInvalidationBehavior = (EShadowCacheInvalidationBehavior)param_1->_padding_;
  (this->DetailMode).Value = *(uchar *)((longlong)&param_1->_padding_ + 1);
  this->field_0xc1 = (*(byte *)((longlong)&param_1->_padding_ + 2) >> 5 ^ bVar12) & 1 ^ bVar12;
  this->RayTracingGroupId = *(int *)((longlong)&param_1->_padding_ + 4);
  this->RayTracingGroupCullingPriority = (ERayTracingGroupCullingPriority)param_1->_padding_;
  iVar2 = (param_1->OverrideMaterials).ArrayNum;
  pFVar11 = (param_1->OverrideMaterials).AllocatorInstance.Data;
  pFVar1 = pFVar11 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((param_1->OverrideMaterials).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSoftObjectPtr<UMaterialInterface>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar1) break;
    local_38 = TSoftObjectPtr<UMaterialInterface>::LoadSynchronous
                         ((TSoftObjectPtr<UMaterialInterface> *)pFVar11);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_38 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38);
    }
    pFVar3 = (this->OverrideMaterials).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 <
        pFVar3 + (longlong)(this->OverrideMaterials).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FProceduralISMComponentDescriptor *)(*pcVar4)();
        return pFVar8;
      }
    }
    iVar6 = (this->OverrideMaterials).ArrayNum;
    if (iVar6 == (this->OverrideMaterials).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->OverrideMaterials).AllocatorInstance,
                         &(this->OverrideMaterials).ArrayMax);
    }
    (this->OverrideMaterials).ArrayNum = iVar6 + 1;
    *(UMaterialInterface **)((this->OverrideMaterials).AllocatorInstance.Data + (longlong)iVar6 * 8)
         = local_38;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_38 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38);
    }
    pFVar11 = pFVar11 + 0x28;
  }
  iVar2 = (param_1->RuntimeVirtualTextures).ArrayNum;
  pFVar11 = (param_1->RuntimeVirtualTextures).AllocatorInstance.Data;
  pFVar1 = pFVar11 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((param_1->RuntimeVirtualTextures).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSoftObjectPtr<URuntimeVirtualTexture>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar11 == pFVar1) break;
    local_30 = TSoftObjectPtr<URuntimeVirtualTexture>::LoadSynchronous
                         ((TSoftObjectPtr<URuntimeVirtualTexture> *)pFVar11);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_30 != (URuntimeVirtualTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_30);
    }
    pFVar3 = (this->RuntimeVirtualTextures).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_30) &&
       ((FScriptContainerElement *)&local_30 <
        pFVar3 + (longlong)(this->RuntimeVirtualTextures).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FProceduralISMComponentDescriptor *)(*pcVar4)();
        return pFVar8;
      }
    }
    iVar6 = (this->RuntimeVirtualTextures).ArrayNum;
    if (iVar6 == (this->RuntimeVirtualTextures).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->RuntimeVirtualTextures).AllocatorInstance,
                         &(this->RuntimeVirtualTextures).ArrayMax);
    }
    (this->RuntimeVirtualTextures).ArrayNum = iVar6 + 1;
    *(URuntimeVirtualTexture **)
     ((this->RuntimeVirtualTextures).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_30;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_30 != (URuntimeVirtualTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_30);
    }
    pFVar11 = pFVar11 + 0x28;
  }
  return this;
}

// operator== @ 147d7d790

bool __thiscall
FProceduralISMComponentDescriptor::operator==
          (FProceduralISMComponentDescriptor *this,FProceduralISMComponentDescriptor *param_1)

{
  uchar uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  bool bVar7;
  
  bVar7 = FSoftObjectPath::operator==
                    ((FSoftObjectPath *)&(this->StaticMesh).SoftObjectPtr.field_0x8,
                     (FSoftObjectPath *)&(param_1->StaticMesh).SoftObjectPtr.field_0x8);
  if (((((bVar7) &&
        (iVar6 = (this->OverrideMaterials).ArrayNum, iVar6 == (param_1->OverrideMaterials).ArrayNum)
        ) && (bVar7 = CompareItems<TObjectPtr<UMaterialInterface>,int>
                                ((TObjectPtr<UMaterialInterface> *)
                                 (this->OverrideMaterials).AllocatorInstance.Data,
                                 (TObjectPtr<UMaterialInterface> *)
                                 (param_1->OverrideMaterials).AllocatorInstance.Data,iVar6), bVar7))
      && (((this->OverlayMaterial).field0_0x0.DebugPtr ==
           (param_1->OverlayMaterial).field0_0x0.DebugPtr &&
          (iVar6 = (this->RuntimeVirtualTextures).ArrayNum,
          iVar6 == (param_1->RuntimeVirtualTextures).ArrayNum)))) &&
     ((bVar7 = CompareItems<TObjectPtr<URuntimeVirtualTexture>,int>
                         ((TObjectPtr<URuntimeVirtualTexture> *)
                          (this->RuntimeVirtualTextures).AllocatorInstance.Data,
                          (TObjectPtr<URuntimeVirtualTexture> *)
                          (param_1->RuntimeVirtualTextures).AllocatorInstance.Data,iVar6), bVar7 &&
      ((this->NumInstances == param_1->NumInstances &&
       (this->NumCustomFloats == param_1->NumCustomFloats)))))) {
    uVar1 = (param_1->WorldBounds).IsValid;
    if ((this->WorldBounds).IsValid == '\0') {
      if (uVar1 != '\0') {
        return false;
      }
    }
    else {
      if (uVar1 == '\0') {
        return false;
      }
      if ((param_1->WorldBounds).Min.field0_0x0._s_0.X != (this->WorldBounds).Min.field0_0x0._s_0.X)
      {
        return false;
      }
      if ((param_1->WorldBounds).Min.field0_0x0._s_0.Y != (this->WorldBounds).Min.field0_0x0._s_0.Y)
      {
        return false;
      }
      if ((param_1->WorldBounds).Min.field0_0x0._s_0.Z != (this->WorldBounds).Min.field0_0x0._s_0.Z)
      {
        return false;
      }
      if ((param_1->WorldBounds).Max.field0_0x0._s_0.X != (this->WorldBounds).Max.field0_0x0._s_0.X)
      {
        return false;
      }
      if ((param_1->WorldBounds).Max.field0_0x0._s_0.Y != (this->WorldBounds).Max.field0_0x0._s_0.Y)
      {
        return false;
      }
      if ((param_1->WorldBounds).Max.field0_0x0._s_0.Z != (this->WorldBounds).Max.field0_0x0._s_0.Z)
      {
        return false;
      }
    }
    if ((((this->InstanceMinDrawDistance == param_1->InstanceMinDrawDistance) &&
         (this->InstanceStartCullDistance == param_1->InstanceStartCullDistance)) &&
        (this->InstanceEndCullDistance == param_1->InstanceEndCullDistance)) &&
       ((((((this->Mobility).Value == (param_1->Mobility).Value &&
           (this->VirtualTextureRenderPassType == param_1->VirtualTextureRenderPassType)) &&
          (((((byte)param_1->LightingChannels ^ (byte)this->LightingChannels) & 7) == 0 &&
           ((this->CustomDepthStencilWriteMask == param_1->CustomDepthStencilWriteMask &&
            (this->VirtualTextureCullMips == param_1->VirtualTextureCullMips)))))) &&
         (this->TranslucencySortPriority == param_1->TranslucencySortPriority)) &&
        (this->CustomDepthStencilValue == param_1->CustomDepthStencilValue)))) {
      uVar2 = this->field_0xc1;
      uVar3 = param_1->field_0xc1;
      if ((((((uVar2 ^ uVar3) & 2) == 0) && (((uVar3 ^ uVar2) & 4) == 0)) &&
          (((uVar3 ^ uVar2) & 8) == 0)) &&
         (((((uVar3 ^ uVar2) & 0x10) == 0 && (((uVar3 ^ uVar2) & 0x20) == 0)) &&
          ((((uVar3 ^ uVar2) & 0x40) == 0 && (-1 < (char)(uVar3 ^ uVar2))))))) {
        uVar4 = this->field_0xc2;
        uVar5 = param_1->field_0xc2;
        if (((((((this->bReceivesDecals ^ param_1->bReceivesDecals) & 1) == 0) &&
              (((uVar5 ^ uVar4) & 2) == 0)) && (((uVar5 ^ uVar4) & 4) == 0)) &&
            ((((((uVar5 ^ uVar4) & 8) == 0 && (((uVar5 ^ uVar4) & 0x10) == 0)) &&
              (this->WorldPositionOffsetDisableDistance ==
               param_1->WorldPositionOffsetDisableDistance)) &&
             ((this->ShadowCacheInvalidationBehavior == param_1->ShadowCacheInvalidationBehavior &&
              ((this->DetailMode).Value == (param_1->DetailMode).Value)))))) &&
           ((((this->bVisibleInRayTracing ^ param_1->bVisibleInRayTracing) & 1) == 0 &&
            ((this->RayTracingGroupId == param_1->RayTracingGroupId &&
             (this->RayTracingGroupCullingPriority == param_1->RayTracingGroupCullingPriority))))))
        {
          return true;
        }
      }
    }
  }
  return false;
}

// operator!= @ 147d7dba0

bool __thiscall
FProceduralISMComponentDescriptor::operator!=
          (FProceduralISMComponentDescriptor *this,FProceduralISMComponentDescriptor *param_1)

{
  bool bVar1;
  
  bVar1 = operator==(this,param_1);
  return !bVar1;
}

// ComputeHash @ 147d8fc30

uint __thiscall
FProceduralISMComponentDescriptor::ComputeHash(FProceduralISMComponentDescriptor *this)

{
  UPackage *pUVar1;
  FArchiveCrc32 local_a8;
  
  FArchiveCrc32::FArchiveCrc32(&local_a8,0,(UObject *)0x0);
  this->Hash = 0;
  if (Z_Registration_Info_UScriptStruct_FProceduralISMComponentDescriptor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FProceduralISMComponentDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FProceduralISMComponentDescriptor,
                         (UObject *)pUVar1,L"ProceduralISMComponentDescriptor");
  }
  UScriptStruct::SerializeItem
            (Z_Registration_Info_UScriptStruct_FProceduralISMComponentDescriptor.OuterSingleton,
             (FArchive *)&local_a8,this,(void *)0x0);
  this->Hash = local_a8.CRC;
  FArchive::~FArchive((FArchive *)&local_a8);
  return local_a8.CRC;
}

