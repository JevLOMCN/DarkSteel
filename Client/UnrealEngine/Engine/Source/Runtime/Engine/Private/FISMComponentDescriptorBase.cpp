// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticStruct @ 147d51d10

UScriptStruct * __cdecl FISMComponentDescriptorBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FISMComponentDescriptorBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FISMComponentDescriptorBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FISMComponentDescriptorBase,(UObject *)pUVar1,
                         L"ISMComponentDescriptorBase");
  }
  return Z_Registration_Info_UScriptStruct_FISMComponentDescriptorBase.OuterSingleton;
}

// FISMComponentDescriptorBase @ 147d781c0

FISMComponentDescriptorBase * __thiscall
FISMComponentDescriptorBase::FISMComponentDescriptorBase
          (FISMComponentDescriptorBase *this,FISMComponentDescriptorBase *param_1)

{
  UClass *pUVar1;
  byte bVar2;
  
  this->_padding_ = (longlong)&___7FISMComponentDescriptorBase__6B_;
  this->Hash = param_1->Hash;
  pUVar1 = (param_1->ComponentClass).Class.field0_0x0.DebugPtr;
  (this->ComponentClass).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Mobility).Value = (param_1->Mobility).Value;
  this->VirtualTextureRenderPassType = param_1->VirtualTextureRenderPassType;
  this->LightmapType = param_1->LightmapType;
  this->LightingChannels = param_1->LightingChannels;
  this->RayTracingGroupId = param_1->RayTracingGroupId;
  this->RayTracingGroupCullingPriority = param_1->RayTracingGroupCullingPriority;
  (this->bHasCustomNavigableGeometry).Value = (param_1->bHasCustomNavigableGeometry).Value;
  this->CustomDepthStencilWriteMask = param_1->CustomDepthStencilWriteMask;
  FBodyInstance::FBodyInstance(&this->BodyInstance,&param_1->BodyInstance);
  this->InstanceMinDrawDistance = param_1->InstanceMinDrawDistance;
  this->InstanceStartCullDistance = param_1->InstanceStartCullDistance;
  this->InstanceEndCullDistance = param_1->InstanceEndCullDistance;
  this->InstanceLODDistanceScale = param_1->InstanceLODDistanceScale;
  this->VirtualTextureCullMips = param_1->VirtualTextureCullMips;
  this->TranslucencySortPriority = param_1->TranslucencySortPriority;
  this->OverriddenLightMapRes = param_1->OverriddenLightMapRes;
  this->CustomDepthStencilValue = param_1->CustomDepthStencilValue;
  bVar2 = (this->bCastShadow ^ param_1->bCastShadow) & 1 ^ this->field_0x1d8;
  this->field_0x1d8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d8) & 2 ^ bVar2;
  this->field_0x1d8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d8) & 4 ^ bVar2;
  this->field_0x1d8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d8) & 8 ^ bVar2;
  this->field_0x1d8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d8) & 0x10 ^ bVar2;
  this->field_0x1d8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d8) & 0x20 ^ bVar2;
  this->field_0x1d8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d8) & 0x40 ^ bVar2;
  this->field_0x1d8 = bVar2;
  this->field_0x1d8 = (bVar2 ^ param_1->field_0x1d8) & 0x7f ^ param_1->field_0x1d8;
  bVar2 = (this->bCastContactShadow ^ param_1->bCastContactShadow) & 1 ^ this->field_0x1d9;
  this->field_0x1d9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d9) & 2 ^ bVar2;
  this->field_0x1d9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d9) & 4 ^ bVar2;
  this->field_0x1d9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d9) & 8 ^ bVar2;
  this->field_0x1d9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d9) & 0x10 ^ bVar2;
  this->field_0x1d9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d9) & 0x20 ^ bVar2;
  this->field_0x1d9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d9) & 0x40 ^ bVar2;
  this->field_0x1d9 = bVar2;
  this->field_0x1d9 = (bVar2 ^ param_1->field_0x1d9) & 0x7f ^ param_1->field_0x1d9;
  bVar2 = (this->bOverrideLightMapRes ^ param_1->bOverrideLightMapRes) & 1 ^ this->field_0x1da;
  this->field_0x1da = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1da) & 2 ^ bVar2;
  this->field_0x1da = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1da) & 4 ^ bVar2;
  this->field_0x1da = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1da) & 8 ^ bVar2;
  this->field_0x1da = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1da) & 0x10 ^ bVar2;
  this->field_0x1da = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1da) & 0x20 ^ bVar2;
  this->field_0x1da = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1da) & 0x40 ^ bVar2;
  this->field_0x1da = bVar2;
  this->field_0x1da = (bVar2 ^ param_1->field_0x1da) & 0x7f ^ param_1->field_0x1da;
  bVar2 = (this->bHiddenInGame ^ param_1->bHiddenInGame) & 1 ^ this->field_0x1db;
  this->field_0x1db = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1db) & 2 ^ bVar2;
  this->field_0x1db = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1db) & 4 ^ bVar2;
  this->field_0x1db = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1db) & 8 ^ bVar2;
  this->field_0x1db = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1db) & 0x10 ^ bVar2;
  this->field_0x1db = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1db) & 0x20 ^ bVar2;
  this->field_0x1db = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1db) & 0x40 ^ bVar2;
  this->field_0x1db = bVar2;
  this->field_0x1db = (bVar2 ^ param_1->field_0x1db) & 0x7f ^ param_1->field_0x1db;
  bVar2 = (this->bUseDefaultCollision ^ param_1->bUseDefaultCollision) & 1 ^ this->field_0x1dc;
  this->field_0x1dc = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1dc) & 2 ^ bVar2;
  this->field_0x1dc = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1dc) & 4 ^ bVar2;
  this->field_0x1dc = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1dc) & 8 ^ bVar2;
  this->field_0x1dc = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1dc) & 0x10 ^ bVar2;
  this->field_0x1dc = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1dc) & 0x20 ^ bVar2;
  this->field_0x1dc = bVar2;
  this->field_0x1dc = (bVar2 ^ param_1->field_0x1dc) & 0x40 ^ bVar2;
  this->WorldPositionOffsetDisableDistance = param_1->WorldPositionOffsetDisableDistance;
  this->NanitePixelProgrammableDistance = param_1->NanitePixelProgrammableDistance;
  this->ShadowCacheInvalidationBehavior = param_1->ShadowCacheInvalidationBehavior;
  (this->DetailMode).Value = (param_1->DetailMode).Value;
  return this;
}

// FISMComponentDescriptorBase @ 147d78610

FISMComponentDescriptorBase * __thiscall
FISMComponentDescriptorBase::FISMComponentDescriptorBase
          (FISMComponentDescriptorBase *this,ENoInit param_1)

{
  FLightingChannels *pFVar1;
  FLightingChannels *pFVar2;
  
  this->_padding_ = (longlong)&___7FISMComponentDescriptorBase__6B_;
  this->Hash = 0;
  (this->ComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  pFVar2 = &this->LightingChannels;
  pFVar2->bChannel0 = '\x01';
  pFVar2->bChannel2 = '\0';
  pFVar2->bChannel1 = '\0';
  FBodyInstance::FBodyInstance(&this->BodyInstance);
  return this;
}

// FISMComponentDescriptorBase @ 147d78650

FISMComponentDescriptorBase * __thiscall
FISMComponentDescriptorBase::FISMComponentDescriptorBase(FISMComponentDescriptorBase *this)

{
  FLightingChannels *pFVar1;
  FLightingChannels *pFVar2;
  UClass *this_00;
  UHierarchicalInstancedStaticMeshComponent *pUVar3;
  
  this->_padding_ = (longlong)&___7FISMComponentDescriptorBase__6B_;
  this->Hash = 0;
  (this->ComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  pFVar2 = &this->LightingChannels;
  pFVar2->bChannel0 = '\x01';
  pFVar2->bChannel2 = '\0';
  pFVar2->bChannel1 = '\0';
  FBodyInstance::FBodyInstance(&this->BodyInstance);
  this_00 = Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
  pUVar3 = UClass::GetDefaultObject<UHierarchicalInstancedStaticMeshComponent>(this_00);
  InitFrom(this,(UStaticMeshComponent *)pUVar3,true);
  return this;
}

// ~FISMComponentDescriptorBase @ 147d7b4b0

void __thiscall
FISMComponentDescriptorBase::~FISMComponentDescriptorBase(FISMComponentDescriptorBase *this)

{
  this->_padding_ = (longlong)&___7FISMComponentDescriptorBase__6B_;
  FBodyInstance::~FBodyInstance(&this->BodyInstance);
  return;
}

// operator= @ 147d7c660

FISMComponentDescriptorBase * __thiscall
FISMComponentDescriptorBase::operator=
          (FISMComponentDescriptorBase *this,FISMComponentDescriptorBase *param_1)

{
  UClass *pUVar1;
  byte bVar2;
  
  this->Hash = param_1->Hash;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->ComponentClass).Class.field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ComponentClass).Class.field0_0x0 = (param_1->ComponentClass).Class.field0_0x0;
  (this->Mobility).Value = (param_1->Mobility).Value;
  this->VirtualTextureRenderPassType = param_1->VirtualTextureRenderPassType;
  this->LightmapType = param_1->LightmapType;
  this->LightingChannels = param_1->LightingChannels;
  this->RayTracingGroupId = param_1->RayTracingGroupId;
  this->RayTracingGroupCullingPriority = param_1->RayTracingGroupCullingPriority;
  (this->bHasCustomNavigableGeometry).Value = (param_1->bHasCustomNavigableGeometry).Value;
  this->CustomDepthStencilWriteMask = param_1->CustomDepthStencilWriteMask;
  FBodyInstance::operator=(&this->BodyInstance,&param_1->BodyInstance);
  this->InstanceMinDrawDistance = param_1->InstanceMinDrawDistance;
  this->InstanceStartCullDistance = param_1->InstanceStartCullDistance;
  this->InstanceEndCullDistance = param_1->InstanceEndCullDistance;
  this->InstanceLODDistanceScale = param_1->InstanceLODDistanceScale;
  this->VirtualTextureCullMips = param_1->VirtualTextureCullMips;
  this->TranslucencySortPriority = param_1->TranslucencySortPriority;
  this->OverriddenLightMapRes = param_1->OverriddenLightMapRes;
  this->CustomDepthStencilValue = param_1->CustomDepthStencilValue;
  bVar2 = (this->bCastShadow ^ param_1->bCastShadow) & 1 ^ this->field_0x1d8;
  this->field_0x1d8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d8) & 2 ^ bVar2;
  this->field_0x1d8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d8) & 4 ^ bVar2;
  this->field_0x1d8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d8) & 8 ^ bVar2;
  this->field_0x1d8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d8) & 0x10 ^ bVar2;
  this->field_0x1d8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d8) & 0x20 ^ bVar2;
  this->field_0x1d8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d8) & 0x40 ^ bVar2;
  this->field_0x1d8 = bVar2;
  this->field_0x1d8 = (bVar2 ^ param_1->field_0x1d8) & 0x7f ^ param_1->field_0x1d8;
  bVar2 = (this->bCastContactShadow ^ param_1->bCastContactShadow) & 1 ^ this->field_0x1d9;
  this->field_0x1d9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d9) & 2 ^ bVar2;
  this->field_0x1d9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d9) & 4 ^ bVar2;
  this->field_0x1d9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d9) & 8 ^ bVar2;
  this->field_0x1d9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d9) & 0x10 ^ bVar2;
  this->field_0x1d9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d9) & 0x20 ^ bVar2;
  this->field_0x1d9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1d9) & 0x40 ^ bVar2;
  this->field_0x1d9 = bVar2;
  this->field_0x1d9 = (bVar2 ^ param_1->field_0x1d9) & 0x7f ^ param_1->field_0x1d9;
  bVar2 = (this->bOverrideLightMapRes ^ param_1->bOverrideLightMapRes) & 1 ^ this->field_0x1da;
  this->field_0x1da = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1da) & 2 ^ bVar2;
  this->field_0x1da = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1da) & 4 ^ bVar2;
  this->field_0x1da = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1da) & 8 ^ bVar2;
  this->field_0x1da = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1da) & 0x10 ^ bVar2;
  this->field_0x1da = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1da) & 0x20 ^ bVar2;
  this->field_0x1da = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1da) & 0x40 ^ bVar2;
  this->field_0x1da = bVar2;
  this->field_0x1da = (bVar2 ^ param_1->field_0x1da) & 0x7f ^ param_1->field_0x1da;
  bVar2 = (this->bHiddenInGame ^ param_1->bHiddenInGame) & 1 ^ this->field_0x1db;
  this->field_0x1db = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1db) & 2 ^ bVar2;
  this->field_0x1db = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1db) & 4 ^ bVar2;
  this->field_0x1db = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1db) & 8 ^ bVar2;
  this->field_0x1db = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1db) & 0x10 ^ bVar2;
  this->field_0x1db = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1db) & 0x20 ^ bVar2;
  this->field_0x1db = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1db) & 0x40 ^ bVar2;
  this->field_0x1db = bVar2;
  this->field_0x1db = (bVar2 ^ param_1->field_0x1db) & 0x7f ^ param_1->field_0x1db;
  bVar2 = (this->bUseDefaultCollision ^ param_1->bUseDefaultCollision) & 1 ^ this->field_0x1dc;
  this->field_0x1dc = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1dc) & 2 ^ bVar2;
  this->field_0x1dc = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1dc) & 4 ^ bVar2;
  this->field_0x1dc = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1dc) & 8 ^ bVar2;
  this->field_0x1dc = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1dc) & 0x10 ^ bVar2;
  this->field_0x1dc = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1dc) & 0x20 ^ bVar2;
  this->field_0x1dc = bVar2;
  this->field_0x1dc = (bVar2 ^ param_1->field_0x1dc) & 0x40 ^ bVar2;
  this->WorldPositionOffsetDisableDistance = param_1->WorldPositionOffsetDisableDistance;
  this->NanitePixelProgrammableDistance = param_1->NanitePixelProgrammableDistance;
  this->ShadowCacheInvalidationBehavior = param_1->ShadowCacheInvalidationBehavior;
  (this->DetailMode).Value = (param_1->DetailMode).Value;
  return this;
}

// operator== @ 147d7d2f0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FISMComponentDescriptorBase::operator==
          (FISMComponentDescriptorBase *this,FISMComponentDescriptorBase *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  UClass *pUVar6;
  bool bVar7;
  bool bVar8;
  Type TVar9;
  Type TVar10;
  UClass *pUVar11;
  FName FVar12;
  FName FVar13;
  UClass *pUVar14;
  UClass *pUVar15;
  
  pUVar6 = (this->ComponentClass).Class.field0_0x0.DebugPtr;
  pUVar14 = (UClass *)0x0;
  pUVar15 = pUVar14;
  if ((pUVar6 != (UClass *)0x0) &&
     (pUVar11 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister(),
     pUVar11 != (UClass *)0x0)) {
    iVar5 = (int)pUVar11->_padding_;
    if (((int)pUVar6->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar5 * 8) != &pUVar11->_padding_
       )) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      pUVar15 = (this->ComponentClass).Class.field0_0x0.DebugPtr;
    }
  }
  pUVar6 = (param_1->ComponentClass).Class.field0_0x0.DebugPtr;
  if ((pUVar6 != (UClass *)0x0) &&
     (pUVar11 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister(),
     pUVar11 != (UClass *)0x0)) {
    iVar5 = (int)pUVar11->_padding_;
    if (((int)pUVar6->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar5 * 8) != &pUVar11->_padding_
       )) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      pUVar14 = (param_1->ComponentClass).Class.field0_0x0.DebugPtr;
    }
  }
  if (((((((((pUVar15 == pUVar14) && ((this->Mobility).Value == (param_1->Mobility).Value)) &&
           (this->VirtualTextureRenderPassType == param_1->VirtualTextureRenderPassType)) &&
          ((this->LightmapType == param_1->LightmapType &&
           ((((byte)param_1->LightingChannels ^ (byte)this->LightingChannels) & 7) == 0)))) &&
         (this->RayTracingGroupId == param_1->RayTracingGroupId)) &&
        (((this->RayTracingGroupCullingPriority == param_1->RayTracingGroupCullingPriority &&
          ((this->bHasCustomNavigableGeometry).Value == (param_1->bHasCustomNavigableGeometry).Value
          )) && ((this->CustomDepthStencilWriteMask == param_1->CustomDepthStencilWriteMask &&
                 (((this->InstanceMinDrawDistance == param_1->InstanceMinDrawDistance &&
                   (this->InstanceStartCullDistance == param_1->InstanceStartCullDistance)) &&
                  (this->InstanceEndCullDistance == param_1->InstanceEndCullDistance)))))))) &&
       ((this->VirtualTextureCullMips == param_1->VirtualTextureCullMips &&
        (this->TranslucencySortPriority == param_1->TranslucencySortPriority)))) &&
      (this->OverriddenLightMapRes == param_1->OverriddenLightMapRes)) &&
     (this->CustomDepthStencilValue == param_1->CustomDepthStencilValue)) {
    uVar1 = this->field_0x1d8;
    uVar2 = param_1->field_0x1d8;
    if ((((((this->bCastShadow ^ param_1->bCastShadow) & 1) == 0) && (((uVar2 ^ uVar1) & 2) == 0))
        && ((((uVar2 ^ uVar1) & 4) == 0 &&
            (((((uVar2 ^ uVar1) & 8) == 0 && (((uVar2 ^ uVar1) & 0x10) == 0)) &&
             (((uVar2 ^ uVar1) & 0x20) == 0)))))) &&
       ((((uVar2 ^ uVar1) & 0x40) == 0 && (-1 < (char)(uVar2 ^ uVar1))))) {
      uVar1 = this->field_0x1d9;
      uVar2 = param_1->field_0x1d9;
      if ((((this->bCastContactShadow ^ param_1->bCastContactShadow) & 1) == 0) &&
         (((((uVar2 ^ uVar1) & 2) == 0 && (((uVar2 ^ uVar1) & 4) == 0)) &&
          ((((uVar2 ^ uVar1) & 8) == 0 &&
           ((((((uVar2 ^ uVar1) & 0x10) == 0 && (((uVar2 ^ uVar1) & 0x20) == 0)) &&
             (((uVar2 ^ uVar1) & 0x40) == 0)) && (-1 < (char)(uVar2 ^ uVar1))))))))) {
        uVar1 = this->field_0x1da;
        uVar2 = param_1->field_0x1da;
        if ((((((this->bOverrideLightMapRes ^ param_1->bOverrideLightMapRes) & 1) == 0) &&
             (((uVar2 ^ uVar1) & 2) == 0)) && (((uVar2 ^ uVar1) & 0x10) == 0)) &&
           (((uVar2 ^ uVar1) & 8) == 0)) {
          uVar3 = this->field_0x1db;
          uVar4 = param_1->field_0x1db;
          if (((((((this->bHiddenInGame ^ param_1->bHiddenInGame) & 1) == 0) &&
                (((uVar4 ^ uVar3) & 2) == 0)) &&
               ((((uVar4 ^ uVar3) & 4) == 0 &&
                (((((uVar2 ^ uVar1) & 0x20) == 0 && (((uVar2 ^ uVar1) & 0x40) == 0)) &&
                 (-1 < (char)(uVar2 ^ uVar1))))))) &&
              ((((uVar4 ^ uVar3) & 8) == 0 && (((uVar4 ^ uVar3) & 0x10) == 0)))) &&
             ((((uVar4 ^ uVar3) & 0x20) == 0 &&
              ((((uVar4 ^ uVar3) & 0x40) == 0 && (-1 < (char)(uVar4 ^ uVar3))))))) {
            uVar1 = this->field_0x1dc;
            uVar2 = param_1->field_0x1dc;
            if ((((((this->bUseDefaultCollision ^ param_1->bUseDefaultCollision) & 1) == 0) &&
                 (((((uVar2 ^ uVar1) & 2) == 0 && (((uVar2 ^ uVar1) & 4) == 0)) &&
                  (((uVar2 ^ uVar1) & 8) == 0)))) &&
                (((((uVar2 ^ uVar1) & 0x10) == 0 && (((uVar2 ^ uVar1) & 0x20) == 0)) &&
                 (((uVar2 ^ uVar1) & 0x40) == 0)))) &&
               (((this->WorldPositionOffsetDisableDistance ==
                  param_1->WorldPositionOffsetDisableDistance &&
                 (this->NanitePixelProgrammableDistance == param_1->NanitePixelProgrammableDistance)
                 ) && ((this->ShadowCacheInvalidationBehavior ==
                        param_1->ShadowCacheInvalidationBehavior &&
                       ((this->DetailMode).Value == (param_1->DetailMode).Value)))))) {
              TVar9 = FBodyInstance::GetCollisionEnabled_CheckOwner(&param_1->BodyInstance);
              TVar10 = FBodyInstance::GetCollisionEnabled_CheckOwner(&this->BodyInstance);
              if ((TVar10 == TVar9) &&
                 (bVar7 = FCollisionResponse::operator==
                                    (&(this->BodyInstance).CollisionResponses,
                                     &(param_1->BodyInstance).CollisionResponses), bVar7)) {
                bVar7 = FBodyInstance::DoesUseCollisionProfile(&param_1->BodyInstance);
                bVar8 = FBodyInstance::DoesUseCollisionProfile(&this->BodyInstance);
                if (bVar8 == bVar7) {
                  bVar7 = FBodyInstance::DoesUseCollisionProfile(&this->BodyInstance);
                  if (bVar7) {
                    FVar12 = FBodyInstance::GetCollisionProfileName(&param_1->BodyInstance);
                    FVar13 = FBodyInstance::GetCollisionProfileName(&this->BodyInstance);
                    if (*(longlong *)FVar13 != *(longlong *)FVar12) {
                      return false;
                    }
                  }
                  return true;
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// operator!= @ 147d7db80

bool __thiscall
FISMComponentDescriptorBase::operator!=
          (FISMComponentDescriptorBase *this,FISMComponentDescriptorBase *param_1)

{
  bool bVar1;
  
  bVar1 = operator==(this,param_1);
  return !bVar1;
}

// ComputeHash @ 147d8fb90

uint __thiscall FISMComponentDescriptorBase::ComputeHash(FISMComponentDescriptorBase *this)

{
  UPackage *pUVar1;
  FArchiveCrc32 local_a8;
  
  FArchiveCrc32::FArchiveCrc32(&local_a8,0,(UObject *)0x0);
  this->Hash = 0;
  if (Z_Registration_Info_UScriptStruct_FISMComponentDescriptorBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FISMComponentDescriptorBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FISMComponentDescriptorBase,(UObject *)pUVar1,
                         L"ISMComponentDescriptorBase");
  }
  UScriptStruct::SerializeItem
            (Z_Registration_Info_UScriptStruct_FISMComponentDescriptorBase.OuterSingleton,
             (FArchive *)&local_a8,this,(void *)0x0);
  this->Hash = local_a8.CRC;
  FArchive::~FArchive((FArchive *)&local_a8);
  return local_a8.CRC;
}

// CreateComponent @ 147d92ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInstancedStaticMeshComponent * __thiscall
FISMComponentDescriptorBase::CreateComponent
          (FISMComponentDescriptorBase *this,UObject *param_1,FName param_2,EObjectFlags param_3)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UInstancedStaticMeshComponent *pUVar4;
  longlong *plVar5;
  UClass *pUVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar6 = (this->ComponentClass).Class.field0_0x0.DebugPtr;
  if (pUVar6 != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar6->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pUVar6 = (this->ComponentClass).Class.field0_0x0.DebugPtr;
        goto LAB_147d92d0b;
      }
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_147d92d0b:
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar3 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
  CheckIsClassChildOf_Internal(pUVar3,pUVar6);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar6);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  pUVar4 = (UInstancedStaticMeshComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar5 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  (**(code **)(this->_padding_ + 0x18))(this,pUVar4);
  return pUVar4;
}

// DuplicateMaterialInterface @ 147d98fc0

UMaterialInterface * __cdecl
FISMComponentDescriptorBase::DuplicateMaterialInterface
          (UMaterialInterface *param_1,UObject *param_2)

{
  longlong lVar1;
  FName FVar2;
  UClass *pUVar3;
  UMaterialInterface *pUVar4;
  FName local_res8;
  
  lVar1 = param_1->_padding_;
  FVar2 = (FName)Z_Construct_UClass_UMaterialInterface_NoRegister();
  MakeUniqueObjectName
            ((UObject *)&local_res8,(UClass *)param_2,FVar2,(EUniqueObjectNameOptions)lVar1);
  pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  pUVar4 = (UMaterialInterface *)
           DuplicateObject_Internal(pUVar3,(UObject *)param_1,param_2,local_res8);
  return pUVar4;
}

// InitComponent @ 147dabc30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FISMComponentDescriptorBase::InitComponent
          (FISMComponentDescriptorBase *this,UInstancedStaticMeshComponent *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  UClass *pUVar4;
  byte bVar5;
  byte bVar6;
  
  *(uchar *)((longlong)&param_1->_padding_ + 3) = (this->Mobility).Value;
  *(ERuntimeVirtualTextureMainPassType *)((longlong)&param_1->_padding_ + 3) =
       this->VirtualTextureRenderPassType;
  UPrimitiveComponent::SetLightmapType((UPrimitiveComponent *)param_1,this->LightmapType);
  *(FLightingChannels *)&param_1->_padding_ = this->LightingChannels;
  *(int *)((longlong)&param_1->_padding_ + 4) = this->RayTracingGroupId;
  *(ERayTracingGroupCullingPriority *)((longlong)&param_1->_padding_ + 1) =
       this->RayTracingGroupCullingPriority;
  *(uchar *)((longlong)&param_1->_padding_ + 5) = (this->bHasCustomNavigableGeometry).Value;
  *(ERendererStencilMask *)((longlong)&param_1->_padding_ + 2) = this->CustomDepthStencilWriteMask;
  FBodyInstance::CopyBodyInstancePropertiesFrom
            ((FBodyInstance *)&param_1->_padding_,&this->BodyInstance);
  param_1->InstanceMinDrawDistance = this->InstanceMinDrawDistance;
  param_1->InstanceStartCullDistance = this->InstanceStartCullDistance;
  param_1->InstanceEndCullDistance = this->InstanceEndCullDistance;
  *(char *)((longlong)&param_1->_padding_ + 1) = (char)this->VirtualTextureCullMips;
  *(int *)&param_1->_padding_ = this->TranslucencySortPriority;
  *(int *)&param_1->_padding_ = this->OverriddenLightMapRes;
  *(int *)((longlong)&param_1->_padding_ + 4) = this->CustomDepthStencilValue;
  bVar5 = *(byte *)((longlong)&param_1->_padding_ + 6);
  bVar5 = (bVar5 ^ this->bCastShadow) & 1 ^ bVar5;
  *(byte *)((longlong)&param_1->_padding_ + 6) = bVar5;
  bVar5 = (bVar5 ^ this->field_0x1d8) & 2 ^ bVar5;
  *(byte *)((longlong)&param_1->_padding_ + 6) = bVar5;
  bVar5 = (bVar5 ^ this->field_0x1d8) & 4 ^ bVar5;
  *(byte *)((longlong)&param_1->_padding_ + 6) = bVar5;
  bVar5 = (bVar5 ^ this->field_0x1d8) & 8 ^ bVar5;
  *(byte *)((longlong)&param_1->_padding_ + 6) = bVar5;
  bVar5 = (bVar5 ^ this->field_0x1d8) & 0x10 ^ bVar5;
  *(byte *)((longlong)&param_1->_padding_ + 6) = bVar5;
  bVar5 = (bVar5 ^ this->field_0x1d8) & 0x20 ^ bVar5;
  *(byte *)((longlong)&param_1->_padding_ + 6) = bVar5;
  bVar5 = (bVar5 ^ this->field_0x1d8) & 0x40 ^ bVar5;
  *(byte *)((longlong)&param_1->_padding_ + 6) = bVar5;
  bVar6 = *(byte *)((longlong)&param_1->_padding_ + 7);
  *(byte *)((longlong)&param_1->_padding_ + 6) =
       (this->field_0x1d8 ^ bVar5) & 0x7f ^ this->field_0x1d8;
  bVar6 = (bVar6 ^ this->bCastContactShadow) & 1 ^ bVar6;
  *(byte *)((longlong)&param_1->_padding_ + 7) = bVar6;
  bVar6 = (bVar6 ^ this->field_0x1d9) & 2 ^ bVar6;
  *(byte *)((longlong)&param_1->_padding_ + 7) = bVar6;
  bVar6 = (bVar6 ^ this->field_0x1d9) & 4 ^ bVar6;
  *(byte *)((longlong)&param_1->_padding_ + 7) = bVar6;
  bVar6 = (bVar6 ^ this->field_0x1d9) & 8 ^ bVar6;
  *(byte *)((longlong)&param_1->_padding_ + 7) = bVar6;
  bVar6 = (bVar6 ^ this->field_0x1d9) & 0x10 ^ bVar6;
  *(byte *)((longlong)&param_1->_padding_ + 7) = bVar6;
  bVar6 = (bVar6 ^ this->field_0x1d9) & 0x20 ^ bVar6;
  *(byte *)((longlong)&param_1->_padding_ + 7) = bVar6;
  *(byte *)((longlong)&param_1->_padding_ + 7) = (bVar6 ^ this->field_0x1d9) & 0x40 ^ bVar6;
  bVar5 = *(byte *)((longlong)&param_1->_padding_ + 4);
  bVar5 = ((byte)this->field_0x1d9 >> 1 ^ bVar5) & 0x40 ^ bVar5;
  bVar6 = *(byte *)((longlong)&param_1->_padding_ + 6);
  *(byte *)((longlong)&param_1->_padding_ + 4) = bVar5;
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 5);
  *(byte *)((longlong)&param_1->_padding_ + 6) = (this->field_0x1da << 2 ^ bVar6) & 4 ^ bVar6;
  bVar6 = *(byte *)((longlong)&param_1->_padding_ + 1);
  *(byte *)((longlong)&param_1->_padding_ + 5) = (this->field_0x1da << 2 ^ bVar1) & 8 ^ bVar1;
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 1);
  *(byte *)((longlong)&param_1->_padding_ + 1) = (this->field_0x1da << 2 ^ bVar6) & 0x40 ^ bVar6;
  bVar6 = *(byte *)((longlong)&param_1->_padding_ + 3);
  *(byte *)((longlong)&param_1->_padding_ + 1) = (this->field_0x1db << 3 ^ bVar1) & 8 ^ bVar1;
  *(byte *)((longlong)&param_1->_padding_ + 3) = (bVar6 ^ this->field_0x1db) & 2 ^ bVar6;
  bVar5 = ((byte)this->field_0x1da >> 2 ^ bVar5) & 0x10 ^ bVar5;
  *(byte *)((longlong)&param_1->_padding_ + 4) = bVar5;
  *(byte *)((longlong)&param_1->_padding_ + 4) =
       ((byte)this->field_0x1da >> 2 ^ bVar5) & 0x20 ^ bVar5;
  USceneComponent::SetVisibleFlag((USceneComponent *)param_1,this->bVisible);
  bVar5 = *(byte *)((longlong)&param_1->_padding_ + 4);
  bVar6 = *(byte *)((longlong)&param_1->_padding_ + 5);
  *(byte *)((longlong)&param_1->_padding_ + 4) = ((byte)this->field_0x1da >> 2 ^ bVar5) & 8 ^ bVar5;
  bVar6 = (this->field_0x1db * '\x02' ^ bVar6) & 0x10 ^ bVar6;
  *(byte *)((longlong)&param_1->_padding_ + 5) = bVar6;
  *(byte *)((longlong)&param_1->_padding_ + 5) = (this->field_0x1db & 0xf0) << 3 | bVar6 & 0x7f;
  bVar5 = *(byte *)((longlong)&param_1->_padding_ + 4);
  bVar6 = *(byte *)((longlong)&param_1->_padding_ + 7);
  *(byte *)((longlong)&param_1->_padding_ + 4) = ((byte)this->field_0x1db >> 2 ^ bVar5) & 8 ^ bVar5;
  *(byte *)((longlong)&param_1->_padding_ + 7) = (this->bReverseCulling ^ bVar6) & 1 ^ bVar6;
  bVar6 = *(byte *)((longlong)&param_1->_padding_ + 6);
  param_1->bUseGpuLodSelection = this->bUseGpuLodSelection;
  *(byte *)((longlong)&param_1->_padding_ + 6) = (this->field_0x1dc << 6 ^ bVar6) & 0x40 ^ bVar6;
  UPrimitiveComponent::SetGenerateOverlapEvents
            ((UPrimitiveComponent *)param_1,this->bGenerateOverlapEvents);
  bVar5 = *(byte *)((longlong)&param_1->_padding_ + 5);
  bVar5 = (this->field_0x1dc << 2 ^ bVar5) & 0x10 ^ bVar5;
  *(byte *)((longlong)&param_1->_padding_ + 5) = bVar5;
  *(byte *)((longlong)&param_1->_padding_ + 5) = (this->field_0x1dc << 2 ^ bVar5) & 0x20 ^ bVar5;
  bVar5 = *(byte *)((longlong)&param_1->_padding_ + 1);
  bVar5 = (this->bFillCollisionUnderneathForNavmesh ^ bVar5) & 1 ^ bVar5;
  *(byte *)((longlong)&param_1->_padding_ + 1) = bVar5;
  *(byte *)((longlong)&param_1->_padding_ + 1) = ((byte)this->field_0x1dc >> 5 ^ bVar5) & 2 ^ bVar5;
  *(int *)&param_1->_padding_ = this->WorldPositionOffsetDisableDistance;
  *(float *)((longlong)&param_1->_padding_ + 4) = (float)this->NanitePixelProgrammableDistance;
  *(EShadowCacheInvalidationBehavior *)((longlong)&param_1->_padding_ + 1) =
       this->ShadowCacheInvalidationBehavior;
  *(uchar *)((longlong)&param_1->_padding_ + 4) = (this->DetailMode).Value;
  if (GISMComponentDescriptorCopiesCanEverAffectNavigation != false) {
    UActorComponent::SetCanEverAffectNavigation
              ((UActorComponent *)param_1,this->bCanEverAffectNavigation);
  }
  pUVar4 = Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
  iVar2 = (int)pUVar4->_padding_;
  if (((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
       == &pUVar4->_padding_)) && (param_1 != (UInstancedStaticMeshComponent *)0x0)) {
    uVar3 = (uint)param_1[1]._padding_;
    *(uint *)&param_1[1]._padding_ = (this->bEnableDensityScaling ^ uVar3) & 1 ^ uVar3;
    param_1->InstanceLODDistanceScale = this->InstanceLODDistanceScale;
  }
  return;
}

// InitFrom @ 147dac710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FISMComponentDescriptorBase::InitFrom
          (FISMComponentDescriptorBase *this,UStaticMeshComponent *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ELightmapType EVar4;
  UClass *pUVar5;
  TMatrix<double> *this_00;
  UClass *pUVar6;
  UObject *pUVar7;
  byte bVar8;
  byte bVar9;
  longlong *this_01;
  double dVar10;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_1 == (UStaticMeshComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Template",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ISMPartition\\ISMComponentDescriptor.cpp"
                       ,0x56,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->bEnableDiscardOnLoad = '\0';
  pUVar5 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
  pUVar6 = (UClass *)param_1->_padding_;
  iVar1 = (int)pUVar5->_padding_;
  if ((iVar1 <= (int)pUVar6->_padding_) &&
     ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) == &pUVar5->_padding_))
  {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->ComponentClass).Class.field0_0x0.DebugPtr = pUVar6;
  }
  (this->Mobility).Value = *(uchar *)((longlong)&param_1->_padding_ + 3);
  this->VirtualTextureRenderPassType =
       *(ERuntimeVirtualTextureMainPassType *)((longlong)&param_1->_padding_ + 3);
  EVar4 = UPrimitiveComponent::GetLightmapType((UPrimitiveComponent *)param_1);
  this->LightmapType = EVar4;
  this->LightingChannels = *(FLightingChannels *)&param_1->_padding_;
  this->RayTracingGroupId = *(int *)((longlong)&param_1->_padding_ + 4);
  this->RayTracingGroupCullingPriority =
       *(ERayTracingGroupCullingPriority *)((longlong)&param_1->_padding_ + 1);
  (this->bHasCustomNavigableGeometry).Value = *(uchar *)((longlong)&param_1->_padding_ + 5);
  this->CustomDepthStencilWriteMask = *(ERendererStencilMask *)((longlong)&param_1->_padding_ + 2);
  this->VirtualTextureCullMips = (int)*(char *)((longlong)&param_1->_padding_ + 1);
  this->TranslucencySortPriority = (int)param_1->_padding_;
  this->OverriddenLightMapRes = param_1->OverriddenLightMapRes;
  this->CustomDepthStencilValue = *(int *)((longlong)&param_1->_padding_ + 4);
  bVar8 = (this->bCastShadow ^ *(byte *)((longlong)&param_1->_padding_ + 6)) & 1 ^ this->field_0x1d8
  ;
  this->field_0x1d8 = bVar8;
  bVar8 = (bVar8 ^ *(byte *)((longlong)&param_1->_padding_ + 6)) & 2 ^ bVar8;
  this->field_0x1d8 = bVar8;
  bVar8 = (bVar8 ^ *(byte *)((longlong)&param_1->_padding_ + 6)) & 4 ^ bVar8;
  this->field_0x1d8 = bVar8;
  bVar8 = (bVar8 ^ *(byte *)((longlong)&param_1->_padding_ + 6)) & 8 ^ bVar8;
  this->field_0x1d8 = bVar8;
  bVar8 = (bVar8 ^ *(byte *)((longlong)&param_1->_padding_ + 6)) & 0x10 ^ bVar8;
  this->field_0x1d8 = bVar8;
  bVar8 = (bVar8 ^ *(byte *)((longlong)&param_1->_padding_ + 6)) & 0x20 ^ bVar8;
  this->field_0x1d8 = bVar8;
  bVar8 = (bVar8 ^ *(byte *)((longlong)&param_1->_padding_ + 6)) & 0x40 ^ bVar8;
  this->field_0x1d8 = bVar8;
  bVar9 = *(byte *)((longlong)&param_1->_padding_ + 6);
  this->field_0x1d8 = (bVar8 ^ bVar9) & 0x7f ^ bVar9;
  bVar9 = (this->bCastContactShadow ^ *(byte *)((longlong)&param_1->_padding_ + 7)) & 1 ^
          this->field_0x1d9;
  this->field_0x1d9 = bVar9;
  bVar9 = (bVar9 ^ *(byte *)((longlong)&param_1->_padding_ + 7)) & 2 ^ bVar9;
  this->field_0x1d9 = bVar9;
  bVar9 = (bVar9 ^ *(byte *)((longlong)&param_1->_padding_ + 7)) & 4 ^ bVar9;
  this->field_0x1d9 = bVar9;
  bVar9 = (bVar9 ^ *(byte *)((longlong)&param_1->_padding_ + 7)) & 8 ^ bVar9;
  this->field_0x1d9 = bVar9;
  bVar9 = (bVar9 ^ *(byte *)((longlong)&param_1->_padding_ + 7)) & 0x10 ^ bVar9;
  this->field_0x1d9 = bVar9;
  bVar9 = (bVar9 ^ *(byte *)((longlong)&param_1->_padding_ + 7)) & 0x20 ^ bVar9;
  this->field_0x1d9 = bVar9;
  bVar9 = (bVar9 ^ *(byte *)((longlong)&param_1->_padding_ + 7)) & 0x40 ^ bVar9;
  this->field_0x1d9 = bVar9;
  this->field_0x1d9 = (*(byte *)((longlong)&param_1->_padding_ + 4) & 0xc0) * '\x02' | bVar9 & 0x7f;
  bVar8 = (param_1->bOverrideLightMapRes ^ this->bOverrideLightMapRes) & 1 ^ this->field_0x1da;
  this->field_0x1da = bVar8;
  bVar8 = (*(byte *)((longlong)&param_1->_padding_ + 5) >> 2 ^ bVar8) & 2 ^ bVar8;
  this->field_0x1da = bVar8;
  bVar8 = (*(byte *)((longlong)&param_1->_padding_ + 1) >> 2 ^ bVar8) & 0x10 ^ bVar8;
  this->field_0x1da = bVar8;
  bVar9 = (*(byte *)((longlong)&param_1->_padding_ + 1) >> 3 ^ this->bHiddenInGame) & 1 ^
          this->field_0x1db;
  this->field_0x1db = bVar9;
  bVar9 = (bVar9 ^ *(byte *)((longlong)&param_1->_padding_ + 3)) & 2 ^ bVar9;
  this->field_0x1db = bVar9;
  bVar9 = ((byte)param_1->_padding_ >> 3 ^ bVar9) & 4 ^ bVar9;
  this->field_0x1db = bVar9;
  bVar9 = (*(byte *)((longlong)&param_1->_padding_ + 5) >> 1 ^ bVar9) & 8 ^ bVar9;
  this->field_0x1db = bVar9;
  bVar9 = (*(byte *)((longlong)&param_1->_padding_ + 5) >> 3 ^ bVar9) & 0x10 ^ bVar9;
  this->field_0x1db = bVar9;
  bVar8 = (*(char *)((longlong)&param_1->_padding_ + 4) << 2 ^ bVar8) & 0x20 ^ bVar8;
  this->field_0x1da = bVar8;
  bVar8 = (*(char *)((longlong)&param_1->_padding_ + 4) << 2 ^ bVar8) & 0x40 ^ bVar8;
  this->field_0x1da = bVar8;
  this->field_0x1da = (*(byte *)((longlong)&param_1->_padding_ + 4) & 0xe0) << 2 | bVar8 & 0x7f;
  this->field_0x1db = (param_1->field_0x5ac << 2 ^ bVar9) & 0x20 ^ bVar9;
  this->WorldPositionOffsetDisableDistance = param_1->WorldPositionOffsetDisableDistance;
  this->NanitePixelProgrammableDistance = (int)param_1->NanitePixelProgrammableDistance;
  this->ShadowCacheInvalidationBehavior =
       *(EShadowCacheInvalidationBehavior *)((longlong)&param_1->_padding_ + 1);
  (this->DetailMode).Value = *(uchar *)((longlong)&param_1->_padding_ + 4);
  this_00 = (TMatrix<double> *)(**(code **)(param_1->_padding_ + 0x808))(param_1,local_a8);
  dVar10 = UE::Math::TMatrix<double>::Determinant(this_00);
  this->bReverseCulling = param_1->bReverseCulling ^ dVar10 < 0.0;
  bVar9 = (param_1->bUseDefaultCollision ^ this->bUseDefaultCollision) & 1 ^ this->field_0x1dc;
  this->field_0x1dc = bVar9;
  bVar9 = (*(byte *)((longlong)&param_1->_padding_ + 3) >> 2 ^ bVar9) & 2 ^ bVar9;
  this->field_0x1dc = bVar9;
  bVar9 = ((byte)param_1->field_0x5ad >> 2 ^ bVar9) & 4 ^ bVar9;
  this->field_0x1dc = bVar9;
  bVar9 = ((byte)param_1->field_0x5ad >> 2 ^ bVar9) & 8 ^ bVar9;
  this->field_0x1dc = bVar9;
  bVar9 = (*(char *)((longlong)&param_1->_padding_ + 1) << 5 ^ bVar9) & 0x20 ^ bVar9;
  this->field_0x1dc = bVar9;
  bVar9 = (*(char *)((longlong)&param_1->_padding_ + 1) << 5 ^ bVar9) & 0x40 ^ bVar9;
  this->field_0x1dc = bVar9;
  if (GISMComponentDescriptorCopiesCanEverAffectNavigation != false) {
    this->field_0x1dc = (*(byte *)((longlong)&param_1->_padding_ + 2) >> 3 ^ bVar9) & 0x10 ^ bVar9;
  }
  pUVar6 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar6->_padding_)) && (param_1 != (UStaticMeshComponent *)0x0)) {
    this->InstanceMinDrawDistance = *(int *)((longlong)&param_1[1]._padding_ + 4);
    this->InstanceStartCullDistance = (int)param_1[1]._padding_;
    this->InstanceEndCullDistance = *(int *)((longlong)&param_1[1]._padding_ + 4);
    this->bUseGpuLodSelection = param_1[1]._padding_;
    pUVar6 = Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      this->field_0x1da =
           ((char)param_1[1]._padding_ << 2 ^ this->field_0x1da) & 4U ^ this->field_0x1da;
      this->InstanceLODDistanceScale = *(float *)&param_1[1]._padding_;
    }
  }
  if (param_2) {
    this_01 = &param_1->_padding_;
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
    if (pUVar7 == (UObject *)0x0) {
      FBodyInstance::CopyBodyInstancePropertiesFrom(&this->BodyInstance,(FBodyInstance *)this_01);
    }
    else {
      FBodyInstance::CopyRuntimeBodyInstancePropertiesFrom
                (&this->BodyInstance,(FBodyInstance *)this_01);
    }
  }
  return;
}

// PostLoadFixup @ 147db9490

void __thiscall
FISMComponentDescriptorBase::PostLoadFixup(FISMComponentDescriptorBase *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Loader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ISMPartition\\ISMComponentDescriptor.cpp"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FBodyInstance::FixupData(&this->BodyInstance,param_1);
  return;
}

