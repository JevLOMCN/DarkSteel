// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticStruct @ 1487019e0

UScriptStruct * __cdecl FSplineMeshComponentDescriptorBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSplineMeshComponentDescriptorBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSplineMeshComponentDescriptorBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase,
                         (UObject *)pUVar1,L"SplineMeshComponentDescriptorBase");
  }
  return Z_Registration_Info_UScriptStruct_FSplineMeshComponentDescriptorBase.OuterSingleton;
}

// FSplineMeshComponentDescriptorBase @ 1487111d0

FSplineMeshComponentDescriptorBase * __thiscall
FSplineMeshComponentDescriptorBase::FSplineMeshComponentDescriptorBase
          (FSplineMeshComponentDescriptorBase *this,FSplineMeshComponentDescriptorBase *param_1)

{
  UClass *pUVar1;
  byte bVar2;
  
  this->_padding_ = (longlong)&___7FSplineMeshComponentDescriptorBase__6B_;
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
  this->VirtualTextureCullMips = param_1->VirtualTextureCullMips;
  this->TranslucencySortPriority = param_1->TranslucencySortPriority;
  this->OverriddenLightMapRes = param_1->OverriddenLightMapRes;
  this->CustomDepthStencilValue = param_1->CustomDepthStencilValue;
  bVar2 = (this->bCastShadow ^ param_1->bCastShadow) & 1 ^ this->field_0x1c8;
  this->field_0x1c8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c8) & 2 ^ bVar2;
  this->field_0x1c8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c8) & 4 ^ bVar2;
  this->field_0x1c8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c8) & 8 ^ bVar2;
  this->field_0x1c8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c8) & 0x10 ^ bVar2;
  this->field_0x1c8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c8) & 0x20 ^ bVar2;
  this->field_0x1c8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c8) & 0x40 ^ bVar2;
  this->field_0x1c8 = bVar2;
  this->field_0x1c8 = (bVar2 ^ param_1->field_0x1c8) & 0x7f ^ param_1->field_0x1c8;
  bVar2 = (this->bAffectDynamicIndirectLightingWhileHidden ^
          param_1->bAffectDynamicIndirectLightingWhileHidden) & 1 ^ this->field_0x1c9;
  this->field_0x1c9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c9) & 2 ^ bVar2;
  this->field_0x1c9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c9) & 4 ^ bVar2;
  this->field_0x1c9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c9) & 8 ^ bVar2;
  this->field_0x1c9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c9) & 0x10 ^ bVar2;
  this->field_0x1c9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c9) & 0x20 ^ bVar2;
  this->field_0x1c9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c9) & 0x40 ^ bVar2;
  this->field_0x1c9 = bVar2;
  this->field_0x1c9 = (bVar2 ^ param_1->field_0x1c9) & 0x7f ^ param_1->field_0x1c9;
  bVar2 = (this->bHiddenInGame ^ param_1->bHiddenInGame) & 1 ^ this->field_0x1ca;
  this->field_0x1ca = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1ca) & 2 ^ bVar2;
  this->field_0x1ca = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1ca) & 4 ^ bVar2;
  this->field_0x1ca = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1ca) & 8 ^ bVar2;
  this->field_0x1ca = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1ca) & 0x10 ^ bVar2;
  this->field_0x1ca = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1ca) & 0x20 ^ bVar2;
  this->field_0x1ca = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1ca) & 0x40 ^ bVar2;
  this->field_0x1ca = bVar2;
  this->field_0x1ca = (bVar2 ^ param_1->field_0x1ca) & 0x7f ^ param_1->field_0x1ca;
  bVar2 = (this->bForceNavigationObstacle ^ param_1->bForceNavigationObstacle) & 1 ^
          this->field_0x1cb;
  this->field_0x1cb = bVar2;
  this->field_0x1cb = (bVar2 ^ param_1->field_0x1cb) & 2 ^ bVar2;
  this->WorldPositionOffsetDisableDistance = param_1->WorldPositionOffsetDisableDistance;
  this->ShadowCacheInvalidationBehavior = param_1->ShadowCacheInvalidationBehavior;
  (this->DetailMode).Value = (param_1->DetailMode).Value;
  return this;
}

// FSplineMeshComponentDescriptorBase @ 1487114e0

FSplineMeshComponentDescriptorBase * __thiscall
FSplineMeshComponentDescriptorBase::FSplineMeshComponentDescriptorBase
          (FSplineMeshComponentDescriptorBase *this,ENoInit param_1)

{
  FLightingChannels *pFVar1;
  FLightingChannels *pFVar2;
  
  this->_padding_ = (longlong)&___7FSplineMeshComponentDescriptorBase__6B_;
  this->Hash = 0;
  (this->ComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  pFVar2 = &this->LightingChannels;
  pFVar2->bChannel0 = '\x01';
  pFVar2->bChannel2 = '\0';
  pFVar2->bChannel1 = '\0';
  FBodyInstance::FBodyInstance(&this->BodyInstance);
  return this;
}

// FSplineMeshComponentDescriptorBase @ 148711520

FSplineMeshComponentDescriptorBase * __thiscall
FSplineMeshComponentDescriptorBase::FSplineMeshComponentDescriptorBase
          (FSplineMeshComponentDescriptorBase *this)

{
  FLightingChannels *pFVar1;
  FLightingChannels *pFVar2;
  UClass *this_00;
  USplineMeshComponent *pUVar3;
  
  this->_padding_ = (longlong)&___7FSplineMeshComponentDescriptorBase__6B_;
  this->Hash = 0;
  (this->ComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  pFVar2 = &this->LightingChannels;
  pFVar2->bChannel0 = '\x01';
  pFVar2->bChannel2 = '\0';
  pFVar2->bChannel1 = '\0';
  FBodyInstance::FBodyInstance(&this->BodyInstance);
  this_00 = Z_Construct_UClass_USplineMeshComponent_NoRegister();
  pUVar3 = UClass::GetDefaultObject<USplineMeshComponent>(this_00);
  InitFrom(this,(UStaticMeshComponent *)pUVar3,true);
  return this;
}

// ~FSplineMeshComponentDescriptorBase @ 148714300

void __thiscall
FSplineMeshComponentDescriptorBase::~FSplineMeshComponentDescriptorBase
          (FSplineMeshComponentDescriptorBase *this)

{
  this->_padding_ = (longlong)&___7FSplineMeshComponentDescriptorBase__6B_;
  FBodyInstance::~FBodyInstance(&this->BodyInstance);
  return;
}

// operator= @ 148715380

FSplineMeshComponentDescriptorBase * __thiscall
FSplineMeshComponentDescriptorBase::operator=
          (FSplineMeshComponentDescriptorBase *this,FSplineMeshComponentDescriptorBase *param_1)

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
  this->VirtualTextureCullMips = param_1->VirtualTextureCullMips;
  this->TranslucencySortPriority = param_1->TranslucencySortPriority;
  this->OverriddenLightMapRes = param_1->OverriddenLightMapRes;
  this->CustomDepthStencilValue = param_1->CustomDepthStencilValue;
  bVar2 = (this->bCastShadow ^ param_1->bCastShadow) & 1 ^ this->field_0x1c8;
  this->field_0x1c8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c8) & 2 ^ bVar2;
  this->field_0x1c8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c8) & 4 ^ bVar2;
  this->field_0x1c8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c8) & 8 ^ bVar2;
  this->field_0x1c8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c8) & 0x10 ^ bVar2;
  this->field_0x1c8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c8) & 0x20 ^ bVar2;
  this->field_0x1c8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c8) & 0x40 ^ bVar2;
  this->field_0x1c8 = bVar2;
  this->field_0x1c8 = (bVar2 ^ param_1->field_0x1c8) & 0x7f ^ param_1->field_0x1c8;
  bVar2 = (this->bAffectDynamicIndirectLightingWhileHidden ^
          param_1->bAffectDynamicIndirectLightingWhileHidden) & 1 ^ this->field_0x1c9;
  this->field_0x1c9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c9) & 2 ^ bVar2;
  this->field_0x1c9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c9) & 4 ^ bVar2;
  this->field_0x1c9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c9) & 8 ^ bVar2;
  this->field_0x1c9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c9) & 0x10 ^ bVar2;
  this->field_0x1c9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c9) & 0x20 ^ bVar2;
  this->field_0x1c9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1c9) & 0x40 ^ bVar2;
  this->field_0x1c9 = bVar2;
  this->field_0x1c9 = (bVar2 ^ param_1->field_0x1c9) & 0x7f ^ param_1->field_0x1c9;
  bVar2 = (this->bHiddenInGame ^ param_1->bHiddenInGame) & 1 ^ this->field_0x1ca;
  this->field_0x1ca = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1ca) & 2 ^ bVar2;
  this->field_0x1ca = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1ca) & 4 ^ bVar2;
  this->field_0x1ca = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1ca) & 8 ^ bVar2;
  this->field_0x1ca = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1ca) & 0x10 ^ bVar2;
  this->field_0x1ca = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1ca) & 0x20 ^ bVar2;
  this->field_0x1ca = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1ca) & 0x40 ^ bVar2;
  this->field_0x1ca = bVar2;
  this->field_0x1ca = (bVar2 ^ param_1->field_0x1ca) & 0x7f ^ param_1->field_0x1ca;
  bVar2 = (this->bForceNavigationObstacle ^ param_1->bForceNavigationObstacle) & 1 ^
          this->field_0x1cb;
  this->field_0x1cb = bVar2;
  this->field_0x1cb = (bVar2 ^ param_1->field_0x1cb) & 2 ^ bVar2;
  this->WorldPositionOffsetDisableDistance = param_1->WorldPositionOffsetDisableDistance;
  this->ShadowCacheInvalidationBehavior = param_1->ShadowCacheInvalidationBehavior;
  (this->DetailMode).Value = (param_1->DetailMode).Value;
  return this;
}

// operator== @ 1487178d0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FSplineMeshComponentDescriptorBase::operator==
          (FSplineMeshComponentDescriptorBase *this,FSplineMeshComponentDescriptorBase *param_1)

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
     (pUVar11 = Z_Construct_UClass_USplineMeshComponent_NoRegister(), pUVar11 != (UClass *)0x0)) {
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
     (pUVar11 = Z_Construct_UClass_USplineMeshComponent_NoRegister(), pUVar11 != (UClass *)0x0)) {
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
  if (((((pUVar15 == pUVar14) && ((this->Mobility).Value == (param_1->Mobility).Value)) &&
       (this->VirtualTextureRenderPassType == param_1->VirtualTextureRenderPassType)) &&
      ((this->LightmapType == param_1->LightmapType &&
       ((((byte)param_1->LightingChannels ^ (byte)this->LightingChannels) & 7) == 0)))) &&
     ((((this->RayTracingGroupId == param_1->RayTracingGroupId &&
        ((this->RayTracingGroupCullingPriority == param_1->RayTracingGroupCullingPriority &&
         ((this->bHasCustomNavigableGeometry).Value == (param_1->bHasCustomNavigableGeometry).Value)
         ))) && (this->CustomDepthStencilWriteMask == param_1->CustomDepthStencilWriteMask)) &&
      ((((this->VirtualTextureCullMips == param_1->VirtualTextureCullMips &&
         (this->TranslucencySortPriority == param_1->TranslucencySortPriority)) &&
        (this->OverriddenLightMapRes == param_1->OverriddenLightMapRes)) &&
       (this->CustomDepthStencilValue == param_1->CustomDepthStencilValue)))))) {
    uVar1 = this->field_0x1c8;
    uVar2 = param_1->field_0x1c8;
    if (((((((this->bCastShadow ^ param_1->bCastShadow) & 1) == 0) && (((uVar2 ^ uVar1) & 2) == 0))
         && ((((uVar2 ^ uVar1) & 8) == 0 &&
             ((((uVar2 ^ uVar1) & 4) == 0 && (((uVar2 ^ uVar1) & 0x10) == 0)))))) &&
        (((uVar2 ^ uVar1) & 0x20) == 0)) &&
       ((((uVar2 ^ uVar1) & 0x40) == 0 && (-1 < (char)(uVar2 ^ uVar1))))) {
      uVar1 = this->field_0x1c9;
      uVar2 = param_1->field_0x1c9;
      if (((((this->bAffectDynamicIndirectLightingWhileHidden ^
             param_1->bAffectDynamicIndirectLightingWhileHidden) & 1) == 0) &&
          (((((uVar2 ^ uVar1) & 2) == 0 && (((uVar2 ^ uVar1) & 4) == 0)) &&
           (((uVar2 ^ uVar1) & 8) == 0)))) &&
         (((((uVar2 ^ uVar1) & 0x10) == 0 && (((uVar2 ^ uVar1) & 0x40) == 0)) &&
          (((uVar2 ^ uVar1) & 0x20) == 0)))) {
        uVar3 = this->field_0x1ca;
        uVar4 = param_1->field_0x1ca;
        if ((((((this->bHiddenInGame ^ param_1->bHiddenInGame) & 1) == 0) &&
             (((uVar4 ^ uVar3) & 2) == 0)) &&
            ((((uVar4 ^ uVar3) & 4) == 0 &&
             ((((-1 < (char)(uVar2 ^ uVar1) && (((uVar4 ^ uVar3) & 8) == 0)) &&
               (((uVar4 ^ uVar3) & 0x10) == 0)) &&
              ((((uVar4 ^ uVar3) & 0x20) == 0 && (((uVar4 ^ uVar3) & 0x40) == 0)))))))) &&
           (-1 < (char)(uVar4 ^ uVar3))) {
          if (((((this->bForceNavigationObstacle ^ param_1->bForceNavigationObstacle) & 1) == 0) &&
              (((param_1->field_0x1cb ^ this->field_0x1cb) & 2) == 0)) &&
             ((this->WorldPositionOffsetDisableDistance ==
               param_1->WorldPositionOffsetDisableDistance &&
              ((this->ShadowCacheInvalidationBehavior == param_1->ShadowCacheInvalidationBehavior &&
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
  return false;
}

// operator!= @ 148717e30

bool __thiscall
FSplineMeshComponentDescriptorBase::operator!=
          (FSplineMeshComponentDescriptorBase *this,FSplineMeshComponentDescriptorBase *param_1)

{
  bool bVar1;
  
  bVar1 = operator==(this,param_1);
  return !bVar1;
}

// ComputeHash @ 14872c830

uint __thiscall
FSplineMeshComponentDescriptorBase::ComputeHash(FSplineMeshComponentDescriptorBase *this)

{
  UPackage *pUVar1;
  FArchiveCrc32 local_a8;
  
  FArchiveCrc32::FArchiveCrc32(&local_a8,0,(UObject *)0x0);
  this->Hash = 0;
  if (Z_Registration_Info_UScriptStruct_FSplineMeshComponentDescriptorBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSplineMeshComponentDescriptorBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase,
                         (UObject *)pUVar1,L"SplineMeshComponentDescriptorBase");
  }
  UScriptStruct::SerializeItem
            (Z_Registration_Info_UScriptStruct_FSplineMeshComponentDescriptorBase.OuterSingleton,
             (FArchive *)&local_a8,this,(void *)0x0);
  this->Hash = local_a8.CRC;
  FArchive::~FArchive((FArchive *)&local_a8);
  return local_a8.CRC;
}

// CreateComponent @ 14872e4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USplineMeshComponent * __thiscall
FSplineMeshComponentDescriptorBase::CreateComponent
          (FSplineMeshComponentDescriptorBase *this,UObject *param_1,FName param_2,
          EObjectFlags param_3)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  USplineMeshComponent *pUVar4;
  longlong *plVar5;
  UClass *pUVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar6 = (this->ComponentClass).Class.field0_0x0.DebugPtr;
  if (pUVar6 != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_USplineMeshComponent_NoRegister();
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
        goto LAB_14872e52b;
      }
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_14872e52b:
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar3 = Z_Construct_UClass_USplineMeshComponent_NoRegister();
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
  pUVar4 = (USplineMeshComponent *)
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

// InitComponent @ 1487445f0

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
FSplineMeshComponentDescriptorBase::InitComponent
          (FSplineMeshComponentDescriptorBase *this,USplineMeshComponent *param_1)

{
  byte bVar1;
  byte bVar2;
  
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
  *(char *)((longlong)&param_1->_padding_ + 1) = (char)this->VirtualTextureCullMips;
  *(int *)&param_1->_padding_ = this->TranslucencySortPriority;
  *(int *)&param_1->_padding_ = this->OverriddenLightMapRes;
  *(int *)((longlong)&param_1->_padding_ + 4) = this->CustomDepthStencilValue;
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 6);
  bVar1 = (bVar1 ^ this->bCastShadow) & 1 ^ bVar1;
  *(byte *)((longlong)&param_1->_padding_ + 6) = bVar1;
  bVar1 = (bVar1 ^ this->field_0x1c8) & 2 ^ bVar1;
  *(byte *)((longlong)&param_1->_padding_ + 6) = bVar1;
  bVar1 = (this->field_0x1c8 << 3 ^ bVar1) & 0x40 ^ bVar1;
  bVar2 = *(byte *)((longlong)&param_1->_padding_ + 7);
  *(byte *)((longlong)&param_1->_padding_ + 6) = bVar1;
  bVar1 = (this->field_0x1c8 << 3 ^ bVar1) & 0x20 ^ bVar1;
  *(byte *)((longlong)&param_1->_padding_ + 6) = bVar1;
  bVar2 = (this->bCastContactShadow ^ bVar2) & 1 ^ bVar2;
  *(byte *)((longlong)&param_1->_padding_ + 7) = bVar2;
  bVar2 = (this->field_0x1c8 * '\x02' ^ bVar2) & 0x40 ^ bVar2;
  *(byte *)((longlong)&param_1->_padding_ + 7) = bVar2;
  *(byte *)((longlong)&param_1->_padding_ + 7) =
       ((byte)this->field_0x1c8 >> 1 ^ bVar2) & 0x20 ^ bVar2;
  bVar1 = ((byte)this->field_0x1c8 >> 5 ^ bVar1) & 4 ^ bVar1;
  *(byte *)((longlong)&param_1->_padding_ + 6) = bVar1;
  bVar1 = (this->field_0x1c9 << 3 ^ bVar1) & 8 ^ bVar1;
  *(byte *)((longlong)&param_1->_padding_ + 6) = bVar1;
  *(byte *)((longlong)&param_1->_padding_ + 6) = (this->field_0x1c9 << 3 ^ bVar1) & 0x10 ^ bVar1;
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 4);
  bVar2 = *(byte *)((longlong)&param_1->_padding_ + 6);
  *(byte *)((longlong)&param_1->_padding_ + 4) = (this->field_0x1c9 << 4 ^ bVar1) & 0x40 ^ bVar1;
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 5);
  *(byte *)((longlong)&param_1->_padding_ + 6) = ((byte)this->field_0x1c9 >> 1 ^ bVar2) & 4 ^ bVar2;
  bVar2 = *(byte *)((longlong)&param_1->_padding_ + 1);
  *(byte *)((longlong)&param_1->_padding_ + 5) = ((byte)this->field_0x1c9 >> 1 ^ bVar1) & 8 ^ bVar1;
  *(byte *)((longlong)&param_1->_padding_ + 1) = (bVar2 ^ this->field_0x1c9) & 0x40 ^ bVar2;
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 1);
  *(byte *)((longlong)&param_1->_padding_ + 1) = (this->field_0x1ca << 3 ^ bVar1) & 8 ^ bVar1;
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 3);
  *(byte *)((longlong)&param_1->_padding_ + 3) = (bVar1 ^ this->field_0x1ca) & 2 ^ bVar1;
  USceneComponent::SetVisibleFlag((USceneComponent *)param_1,this->bVisible);
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 4);
  bVar2 = *(byte *)((longlong)&param_1->_padding_ + 4);
  *(byte *)((longlong)&param_1->_padding_ + 4) = ((byte)this->field_0x1c9 >> 4 ^ bVar1) & 8 ^ bVar1;
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 7);
  *(byte *)((longlong)&param_1->_padding_ + 4) = (bVar2 ^ this->field_0x1ca) & 8 ^ bVar2;
  bVar2 = *(byte *)((longlong)&param_1->_padding_ + 6);
  *(byte *)((longlong)&param_1->_padding_ + 7) = (this->bReverseCulling ^ bVar1) & 1 ^ bVar1;
  *(byte *)((longlong)&param_1->_padding_ + 6) = (this->field_0x1ca * '\x02' ^ bVar2) & 0x40 ^ bVar2
  ;
  UPrimitiveComponent::SetGenerateOverlapEvents
            ((UPrimitiveComponent *)param_1,this->bGenerateOverlapEvents);
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 5);
  bVar1 = ((byte)this->field_0x1ca >> 3 ^ bVar1) & 0x10 ^ bVar1;
  *(byte *)((longlong)&param_1->_padding_ + 5) = bVar1;
  *(byte *)((longlong)&param_1->_padding_ + 5) = (this->field_0x1cb << 5 ^ bVar1) & 0x20 ^ bVar1;
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 1);
  *(byte *)((longlong)&param_1->_padding_ + 1) =
       (this->bFillCollisionUnderneathForNavmesh ^ bVar1) & 1 ^ bVar1;
  *(int *)&param_1->_padding_ = this->WorldPositionOffsetDisableDistance;
  *(EShadowCacheInvalidationBehavior *)((longlong)&param_1->_padding_ + 1) =
       this->ShadowCacheInvalidationBehavior;
  *(uchar *)((longlong)&param_1->_padding_ + 4) = (this->DetailMode).Value;
  return;
}

// InitFrom @ 148744c20

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
FSplineMeshComponentDescriptorBase::InitFrom
          (FSplineMeshComponentDescriptorBase *this,UStaticMeshComponent *param_1,bool param_2)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  ELightmapType EVar5;
  UClass *pUVar6;
  TMatrix<double> *this_00;
  byte bVar7;
  byte bVar8;
  double dVar9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_1 == (UStaticMeshComponent *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Template",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SplineMeshComponentDescriptor.cpp"
                       ,0x4c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->bEnableDiscardOnLoad = '\0';
  pUVar6 = Z_Construct_UClass_USplineMeshComponent_NoRegister();
  pUVar2 = (UClass *)param_1->_padding_;
  iVar1 = (int)pUVar6->_padding_;
  if ((iVar1 <= (int)pUVar2->_padding_) &&
     ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_))
  {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ComponentClass).Class.field0_0x0.DebugPtr = pUVar2;
  }
  (this->Mobility).Value = *(uchar *)((longlong)&param_1->_padding_ + 3);
  this->VirtualTextureRenderPassType =
       *(ERuntimeVirtualTextureMainPassType *)((longlong)&param_1->_padding_ + 3);
  EVar5 = UPrimitiveComponent::GetLightmapType((UPrimitiveComponent *)param_1);
  this->LightmapType = EVar5;
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
  bVar7 = (this->bCastShadow ^ *(byte *)((longlong)&param_1->_padding_ + 6)) & 1 ^ this->field_0x1c8
  ;
  this->field_0x1c8 = bVar7;
  bVar7 = (bVar7 ^ *(byte *)((longlong)&param_1->_padding_ + 6)) & 2 ^ bVar7;
  this->field_0x1c8 = bVar7;
  bVar7 = (*(byte *)((longlong)&param_1->_padding_ + 6) >> 3 ^ bVar7) & 8 ^ bVar7;
  this->field_0x1c8 = bVar7;
  bVar7 = (*(byte *)((longlong)&param_1->_padding_ + 6) >> 3 ^ bVar7) & 4 ^ bVar7;
  this->field_0x1c8 = bVar7;
  bVar7 = (*(char *)((longlong)&param_1->_padding_ + 7) << 4 ^ bVar7) & 0x10 ^ bVar7;
  this->field_0x1c8 = bVar7;
  bVar7 = (*(byte *)((longlong)&param_1->_padding_ + 7) >> 1 ^ bVar7) & 0x20 ^ bVar7;
  this->field_0x1c8 = bVar7;
  bVar7 = (*(char *)((longlong)&param_1->_padding_ + 7) * '\x02' ^ bVar7) & 0x40 ^ bVar7;
  this->field_0x1c8 = bVar7;
  this->field_0x1c8 = (*(byte *)((longlong)&param_1->_padding_ + 6) & 0xfc) << 5 | bVar7 & 0x7f;
  bVar7 = (*(byte *)((longlong)&param_1->_padding_ + 6) >> 3 ^
          this->bAffectDynamicIndirectLightingWhileHidden) & 1 ^ this->field_0x1c9;
  this->field_0x1c9 = bVar7;
  bVar7 = (*(byte *)((longlong)&param_1->_padding_ + 6) >> 3 ^ bVar7) & 2 ^ bVar7;
  this->field_0x1c9 = bVar7;
  bVar7 = (*(byte *)((longlong)&param_1->_padding_ + 4) >> 4 ^ bVar7) & 4 ^ bVar7;
  this->field_0x1c9 = bVar7;
  bVar7 = (param_1->field_0x5ae * '\x02' ^ bVar7) & 8 ^ bVar7;
  this->field_0x1c9 = bVar7;
  bVar7 = (*(char *)((longlong)&param_1->_padding_ + 5) * '\x02' ^ bVar7) & 0x10 ^ bVar7;
  this->field_0x1c9 = bVar7;
  bVar7 = (bVar7 ^ *(byte *)((longlong)&param_1->_padding_ + 1)) & 0x40 ^ bVar7;
  this->field_0x1c9 = bVar7;
  bVar8 = (*(byte *)((longlong)&param_1->_padding_ + 1) >> 3 ^ this->bHiddenInGame) & 1 ^
          this->field_0x1ca;
  this->field_0x1ca = bVar8;
  bVar8 = (bVar8 ^ *(byte *)((longlong)&param_1->_padding_ + 3)) & 2 ^ bVar8;
  this->field_0x1ca = bVar8;
  bVar8 = ((byte)param_1->_padding_ >> 3 ^ bVar8) & 4 ^ bVar8;
  this->field_0x1ca = bVar8;
  this->field_0x1c9 = (*(byte *)((longlong)&param_1->_padding_ + 4) & 0xf8) << 4 | bVar7 & 0x7f;
  this->field_0x1ca = (bVar8 ^ param_1->field_0x5ac) & 8 ^ bVar8;
  this->WorldPositionOffsetDisableDistance = param_1->WorldPositionOffsetDisableDistance;
  this->ShadowCacheInvalidationBehavior =
       *(EShadowCacheInvalidationBehavior *)((longlong)&param_1->_padding_ + 1);
  (this->DetailMode).Value = *(uchar *)((longlong)&param_1->_padding_ + 4);
  this_00 = (TMatrix<double> *)(**(code **)(param_1->_padding_ + 0x808))(param_1,local_a8);
  dVar9 = UE::Math::TMatrix<double>::Determinant(this_00);
  bVar8 = param_1->bReverseCulling ^ dVar9 < 0.0;
  bVar7 = bVar8 << 4 | this->field_0x1ca & 0xef;
  this->bReverseCulling = bVar8;
  bVar7 = ((byte)param_1->field_0x5ae >> 1 ^ bVar7) & 0x20 ^ bVar7;
  this->field_0x1ca = bVar7;
  bVar7 = (*(char *)((longlong)&param_1->_padding_ + 3) << 3 ^ bVar7) & 0x40 ^ bVar7;
  this->field_0x1ca = bVar7;
  this->field_0x1ca = (param_1->field_0x5ad & 0xf0) << 3 | bVar7 & 0x7f;
  bVar7 = (param_1->bForceNavigationObstacle ^ this->bForceNavigationObstacle) & 1 ^
          this->field_0x1cb;
  this->field_0x1cb = bVar7;
  this->field_0x1cb = (*(char *)((longlong)&param_1->_padding_ + 1) * '\x02' ^ bVar7) & 2 ^ bVar7;
  if (param_2) {
    FBodyInstance::CopyBodyInstancePropertiesFrom
              (&this->BodyInstance,(FBodyInstance *)&param_1->_padding_);
  }
  return;
}

// PostLoadFixup @ 1487500f0

void __thiscall
FSplineMeshComponentDescriptorBase::PostLoadFixup
          (FSplineMeshComponentDescriptorBase *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Loader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SplineMeshComponentDescriptor.cpp"
                       ,0xa2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FBodyInstance::FixupData(&this->BodyInstance,param_1);
  return;
}

