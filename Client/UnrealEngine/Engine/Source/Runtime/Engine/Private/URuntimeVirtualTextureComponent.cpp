// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 32

// StaticClass @ 14791c020

UClass * __cdecl URuntimeVirtualTextureComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimeVirtualTextureComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimeVirtualTextureComponent",
               &Z_Registration_Info_UClass_URuntimeVirtualTextureComponent.InnerSingleton,
               StaticRegisterNativesURuntimeVirtualTextureComponent,0x2f0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<URuntimeVirtualTextureComponent>,
               InternalVTableHelperCtorCaller<URuntimeVirtualTextureComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimeVirtualTextureComponent.InnerSingleton;
}

// URuntimeVirtualTextureComponent @ 14792a390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

URuntimeVirtualTextureComponent * __thiscall
URuntimeVirtualTextureComponent::URuntimeVirtualTextureComponent
          (URuntimeVirtualTextureComponent *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this_00 = &(this->BoundsAlignActor).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->BoundsAlignActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->BoundsAlignActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->BoundsAlignActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->BoundsAlignActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->BoundsAlignActor).SoftObjectPtr,(FObjectPtr)&local_res8);
  this->ExpandBounds = 0.0;
  (this->VirtualTexture).field0_0x0.DebugPtr = (URuntimeVirtualTexture *)0x0;
  this->EnableInGamePerPlatform = false;
  this->bEnableForNaniteOnly = false;
  this->bUseMinMaterialQuality = false;
  this->MinInGameMaterialQuality = Low;
  this->bEnableScalability = false;
  this->ScalabilityGroup = 0;
  this->bHidePrimitives = false;
  (this->StreamingTexture).field0_0x0.DebugPtr = (UVirtualTextureBuilder *)0x0;
  this->StreamLowMips = 0;
  this->LossyCompressionAmount = '\0';
  this->bUseStreamingMipsFixedColor = false;
  this->bUseStreamingMipsOnly = false;
  this->UseStreamingMipsInEditorMode = Never;
  this->bUseStreamingMipsInEditor_DEPRECATED = false;
  *(undefined8 *)&this->HidePrimitivesDelegate = 0;
  *(undefined8 *)&(this->HidePrimitivesDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HidePrimitivesDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->HidePrimitivesDelegate).field_0x18 = 2;
  FRenderCommandFence::FRenderCommandFence(&this->DestroyFence);
  return this;
}

// URuntimeVirtualTextureComponent @ 14792a4a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

URuntimeVirtualTextureComponent * __thiscall
URuntimeVirtualTextureComponent::URuntimeVirtualTextureComponent
          (URuntimeVirtualTextureComponent *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this_00 = &(this->BoundsAlignActor).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->BoundsAlignActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->BoundsAlignActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->BoundsAlignActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->BoundsAlignActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->BoundsAlignActor).SoftObjectPtr,(FObjectPtr)&local_res8);
  this->ExpandBounds = 0.0;
  (this->VirtualTexture).field0_0x0.DebugPtr = (URuntimeVirtualTexture *)0x0;
  this->EnableInGamePerPlatform = true;
  this->bEnableForNaniteOnly = false;
  this->bUseMinMaterialQuality = false;
  this->MinInGameMaterialQuality = Low;
  this->bEnableScalability = false;
  this->ScalabilityGroup = 0;
  this->bHidePrimitives = false;
  (this->StreamingTexture).field0_0x0.DebugPtr = (UVirtualTextureBuilder *)0x0;
  this->StreamLowMips = 0;
  this->LossyCompressionAmount = '\0';
  this->bUseStreamingMipsFixedColor = false;
  this->bUseStreamingMipsOnly = false;
  this->UseStreamingMipsInEditorMode = Never;
  this->bUseStreamingMipsInEditor_DEPRECATED = false;
  *(undefined8 *)&this->HidePrimitivesDelegate = 0;
  *(undefined8 *)&(this->HidePrimitivesDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HidePrimitivesDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->HidePrimitivesDelegate).field_0x18 = 2;
  FRenderCommandFence::FRenderCommandFence(&this->DestroyFence);
  this->SceneProxy = (FRuntimeVirtualTextureSceneProxy *)0x0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 1;
  return this;
}

// ~URuntimeVirtualTextureComponent @ 14792cea0

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
URuntimeVirtualTextureComponent::~URuntimeVirtualTextureComponent
          (URuntimeVirtualTextureComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  FRenderCommandFence::~FRenderCommandFence(&this->DestroyFence);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->HidePrimitivesDelegate).field_0x8,
             *(int *)&(this->HidePrimitivesDelegate).field_0x10);
  pvVar1 = *(void **)&(this->HidePrimitivesDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HidePrimitivesDelegate);
  pvVar1 = *(void **)&(this->BoundsAlignActor).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// ApplyWorldOffset @ 147933180

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
URuntimeVirtualTextureComponent::ApplyWorldOffset
          (URuntimeVirtualTextureComponent *this,TVector<double> *param_1,bool param_2)

{
  USceneComponent::ApplyWorldOffset((USceneComponent *)this,param_1,param_2);
  UActorComponent::MarkRenderTransformDirty((UActorComponent *)this);
  return;
}

// BeginDestroy @ 147934b20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall URuntimeVirtualTextureComponent::BeginDestroy(URuntimeVirtualTextureComponent *this)

{
  USceneComponent::BeginDestroy((USceneComponent *)this);
  FRenderCommandFence::BeginFence(&this->DestroyFence,RenderThread);
  return;
}

// CalcBounds @ 147935f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __thiscall
URuntimeVirtualTextureComponent::CalcBounds
          (URuntimeVirtualTextureComponent *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,TTransform<double> *param_1)

{
  TVector<double>_u_0 local_c8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  undefined8 local_98;
  TMatrix<double> local_88;
  
  local_c8._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
  local_c8._s_0.Y = _UNK_150689678;
  local_c8._s_0.Z = ___xmm_3fe00000000000003fe0000000000000;
  dStack_b0 = _UNK_150689678;
  local_a8 = ___xmm_3fe00000000000003fe0000000000000;
  dStack_a0 = _UNK_150689678;
  local_98 = __real_3febb67ae8584caa;
  UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_88);
  UE::Math::TBoxSphereBounds<double,double>::TransformBy
            ((TBoxSphereBounds<double,double> *)&local_c8._s_0,__return_storage_ptr__,&local_88);
  return __return_storage_ptr__;
}

// CalculateStreamingTextureSettingsHash @ 1479381e0

ulong64 __thiscall
URuntimeVirtualTextureComponent::CalculateStreamingTextureSettingsHash
          (URuntimeVirtualTextureComponent *this)

{
  URuntimeVirtualTexture *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  if ((this->VirtualTexture).field0_0x0.DebugPtr == (URuntimeVirtualTexture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("VirtualTexture != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\RuntimeVirtualTextureComponent.cpp"
                       ,0x13e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  pUVar1 = (this->VirtualTexture).field0_0x0.DebugPtr;
  iVar4 = pUVar1->TileSize + 6;
  iVar7 = 10;
  if (iVar4 < 10) {
    iVar7 = iVar4;
  }
  uVar8 = 4;
  if (pUVar1->TileBorderSize < 4) {
    uVar8 = pUVar1->TileBorderSize;
  }
  iVar4 = 6;
  if (6 < iVar7) {
    iVar4 = iVar7;
  }
  uVar6 = 0;
  if (0 < (int)uVar8) {
    uVar6 = uVar8;
  }
  return (ulonglong)
         ((pUVar1->MaterialType & 0xf |
          0x10 << ((byte)iVar4 & 0x1f) & 0xfff0U | (uint)(pUVar1->LODGroup).Value << 0x14) << 4) |
         ((((ulonglong)((this->LossyCompressionAmount).Value & 0xf) * 2 |
           (ulonglong)(pUVar1->bUseLowQualityCompression & 1)) << 2 |
          (ulonglong)(pUVar1->bSinglePhysicalSpace & 1)) * 2 |
         (ulonglong)(pUVar1->bCompressTextures & 1)) << 0x20 | (ulonglong)((uVar6 & 7) << 0x15) | 2;
}

// CreateRenderState_Concurrent @ 14793d300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
URuntimeVirtualTextureComponent::CreateRenderState_Concurrent
          (URuntimeVirtualTextureComponent *this,FRegisterComponentContext *param_1)

{
  FSceneInterface *pFVar1;
  
  if ((this->VirtualTexture).field0_0x0.DebugPtr != (URuntimeVirtualTexture *)0x0) {
    pFVar1 = UActorComponent::GetScene((UActorComponent *)this);
    (**(code **)(pFVar1->_padding_ + 0x210))(pFVar1,this);
  }
  UActorComponent::CreateRenderState_Concurrent((UActorComponent *)this,param_1);
  return;
}

// DestroyRenderState_Concurrent @ 14793f5f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
URuntimeVirtualTextureComponent::DestroyRenderState_Concurrent
          (URuntimeVirtualTextureComponent *this)

{
  FSceneInterface *pFVar1;
  
  pFVar1 = UActorComponent::GetScene((UActorComponent *)this);
  (**(code **)(pFVar1->_padding_ + 0x218))(pFVar1,this);
  UActorComponent::DestroyRenderState_Concurrent((UActorComponent *)this);
  return;
}

// GetCustomMaterialData @ 1479488c0

TVector4<float> * __thiscall
URuntimeVirtualTextureComponent::GetCustomMaterialData
          (URuntimeVirtualTextureComponent *this,TVector4<float> *__return_storage_ptr__)

{
  URuntimeVirtualTexture *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pUVar1 = (this->VirtualTexture).field0_0x0.DebugPtr;
  if (pUVar1 == (URuntimeVirtualTexture *)0x0) {
    fVar2 = 0.0;
    fVar3 = 0.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
  }
  else {
    fVar2 = (pUVar1->CustomMaterialData).field0_0x0._s_0.X;
    fVar3 = (pUVar1->CustomMaterialData).field0_0x0._s_0.Y;
    fVar4 = (pUVar1->CustomMaterialData).field0_0x0._s_0.Z;
    fVar5 = (pUVar1->CustomMaterialData).field0_0x0._s_0.W;
  }
  *(ulonglong *)&__return_storage_ptr__->field0_0x0 = CONCAT44(fVar3,fVar2);
  *(ulonglong *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = CONCAT44(fVar5,fVar4);
  return __return_storage_ptr__;
}

// GetHidePrimitiveSettings @ 147949320

void __thiscall
URuntimeVirtualTextureComponent::GetHidePrimitiveSettings
          (URuntimeVirtualTextureComponent *this,bool *param_1,bool *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  *param_1 = this->bHidePrimitives;
  *param_2 = this->bHidePrimitives;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->HidePrimitivesDelegate
             ,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->HidePrimitivesDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->HidePrimitivesDelegate).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->HidePrimitivesDelegate).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->HidePrimitivesDelegate).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->HidePrimitivesDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->HidePrimitivesDelegate,
               false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// GetPriority @ 14794c140

EVTProducerPriority __thiscall
URuntimeVirtualTextureComponent::GetPriority(URuntimeVirtualTextureComponent *this)

{
  URuntimeVirtualTexture *pUVar1;
  code *pcVar2;
  bool bVar3;
  EVTProducerPriority EVar4;
  
  pUVar1 = (this->VirtualTexture).field0_0x0.DebugPtr;
  if (pUVar1 == (URuntimeVirtualTexture *)0x0) {
    return Normal;
  }
  if (pUVar1->bUseCustomPriority == false) {
    switch(pUVar1->MaterialType) {
    case BaseColor:
    case BaseColor_Normal_Roughness:
    case BaseColor_Normal_Specular:
    case BaseColor_Normal_Specular_YCoCg:
    case BaseColor_Normal_Specular_Mask_YCoCg:
      return High;
    case Mask4:
      return BelowNormal;
    case WorldHeight:
      return Low;
    case Displacement:
      return Lower;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\RuntimeVirtualTexture.cpp"
                       ,0x25c,L"");
    if (!bVar3) {
      return Normal;
    }
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  return pUVar1->CustomPriority;
}

// GetPrivateStaticClass @ 14794c460

UClass * __cdecl URuntimeVirtualTextureComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimeVirtualTextureComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimeVirtualTextureComponent",
               &Z_Registration_Info_UClass_URuntimeVirtualTextureComponent.InnerSingleton,
               StaticRegisterNativesURuntimeVirtualTextureComponent,0x2f0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<URuntimeVirtualTextureComponent>,
               InternalVTableHelperCtorCaller<URuntimeVirtualTextureComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimeVirtualTextureComponent.InnerSingleton;
}

// GetStreamingTextureStatus @ 14794f300

EStreamingTextureStatusFlags __thiscall
URuntimeVirtualTextureComponent::GetStreamingTextureStatus
          (URuntimeVirtualTextureComponent *this,EShadingPath param_1)

{
  URuntimeVirtualTexture *pUVar1;
  UVirtualTextureBuilder *pUVar2;
  UTexture2D *this_00;
  FVirtualTextureBuiltData *pFVar3;
  code *pcVar4;
  bool bVar5;
  EStreamingTextureStatusFlags EVar6;
  EPixelFormat EVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  FTexturePlatformData *pFVar11;
  int iVar12;
  TEnumAsByte<EPixelFormat> *pTVar13;
  uint uVar14;
  ulonglong local_res8;
  
  pUVar1 = (this->VirtualTexture).field0_0x0.DebugPtr;
  pUVar2 = (this->StreamingTexture).field0_0x0.DebugPtr;
  EVar6 = pUVar1 != (URuntimeVirtualTexture *)0x0 | HasStreamingTexture;
  if (pUVar2 == (UVirtualTextureBuilder *)0x0) {
    EVar6 = pUVar1 != (URuntimeVirtualTexture *)0x0;
  }
  if (EVar6 == (HasStreamingTexture|HasVirtualTexture)) {
    if ((param_1 != Mobile) || (lVar10 = 0x30, pUVar2->bSeparateTextureForMobile == false)) {
      lVar10 = 0x28;
    }
    this_00 = *(UTexture2D **)((longlong)&pUVar2->_padding_ + lVar10);
    if (this_00 == (UTexture2D *)0x0) {
      return InvalidStreamingTexture|HasStreamingTexture|HasVirtualTexture;
    }
    local_res8 = pUVar2->BuildHash & 0xfffffffbffffffff;
    if ((pUVar1 == (URuntimeVirtualTexture *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("VirtualTexture != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\RuntimeVirtualTextureComponent.cpp"
                           ,0x13e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    pUVar1 = (this->VirtualTexture).field0_0x0.DebugPtr;
    iVar8 = pUVar1->TileSize + 6;
    iVar12 = 10;
    if (iVar8 < 10) {
      iVar12 = iVar8;
    }
    uVar14 = 4;
    if (pUVar1->TileBorderSize < 4) {
      uVar14 = pUVar1->TileBorderSize;
    }
    iVar8 = 6;
    if (6 < iVar12) {
      iVar8 = iVar12;
    }
    iVar12 = 0;
    uVar9 = 0;
    if (0 < (int)uVar14) {
      uVar9 = uVar14;
    }
    if (((local_res8 ==
          (((((ulonglong)((this->LossyCompressionAmount).Value & 0xf) * 2 |
             (ulonglong)(pUVar1->bUseLowQualityCompression & 1)) << 2 |
            (ulonglong)(pUVar1->bSinglePhysicalSpace & 1)) * 2 |
           (ulonglong)(pUVar1->bCompressTextures & 1)) << 0x20 |
           (ulonglong)
           ((pUVar1->MaterialType & 0xf |
            0x10 << ((byte)iVar8 & 0x1f) & 0xfff0U | (uint)(pUVar1->LODGroup).Value << 0x14) << 4) |
           (ulonglong)((uVar9 & 7) << 0x15) | 2)) &&
        (pFVar11 = UTexture2D::GetPlatformData(this_00), pFVar11 != (FTexturePlatformData *)0x0)) &&
       (pFVar3 = pFVar11->VTData, pFVar3 != (FVirtualTextureBuiltData *)0x0)) {
      iVar8 = URuntimeVirtualTexture::GetLayerCount(pUVar1);
      if (0 < iVar8) {
        pTVar13 = pFVar3->LayerTypes;
        do {
          EVar7 = URuntimeVirtualTexture::GetLayerFormat(pUVar1,iVar12);
          if (pTVar13->Value != EVar7) goto LAB_14794f4b2;
          iVar12 = iVar12 + 1;
          pTVar13 = pTVar13 + 1;
          iVar8 = URuntimeVirtualTexture::GetLayerCount(pUVar1);
        } while (iVar12 < iVar8);
      }
    }
    else {
LAB_14794f4b2:
      EVar6 = NonMatchingStreamingTextureSettings|HasStreamingTexture|HasVirtualTexture;
    }
  }
  return EVar6;
}

// GetTexelSnapTransform @ 14794f600

TTransform<double> * __thiscall
URuntimeVirtualTextureComponent::GetTexelSnapTransform
          (URuntimeVirtualTextureComponent *this,TTransform<double> *__return_storage_ptr__)

{
  URuntimeVirtualTexture *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  
  dVar11 = 0.0;
  dVar10 = 0.0;
  if ((this->bSnapBoundsToLandscape != false) &&
     (pUVar1 = (this->VirtualTexture).field0_0x0.DebugPtr, pUVar1 != (URuntimeVirtualTexture *)0x0))
  {
    dVar5 = (double)this->_padding_;
    dVar11 = (double)this->_padding_;
    iVar9 = pUVar1->TileCount;
    iVar6 = URuntimeVirtualTexture::GetMaxTileCountLog2(pUVar1->bAdaptive);
    if (iVar9 < iVar6) {
      iVar6 = iVar9;
    }
    iVar8 = pUVar1->TileSize + 6;
    iVar9 = 10;
    if (iVar8 < 10) {
      iVar9 = iVar8;
    }
    iVar8 = 6;
    if (6 < iVar9) {
      iVar8 = iVar9;
    }
    bVar7 = 0;
    if (0 < iVar6) {
      bVar7 = (byte)iVar6;
    }
    dVar10 = __real_3ff0000000000000 / (double)((1 << ((byte)iVar8 & 0x1f)) << (bVar7 & 0x1f));
    dVar11 = dVar11 * __real_bfe0000000000000 * dVar10;
    dVar10 = dVar5 * __real_bfe0000000000000 * dVar10;
  }
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar3;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar4;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar10;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar11;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = 0.0;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar3;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar4;
  return __return_storage_ptr__;
}

// Invalidate @ 1479559d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
URuntimeVirtualTextureComponent::Invalidate
          (URuntimeVirtualTextureComponent *this,TBoxSphereBounds<double,double> *param_1,
          EVTInvalidatePriority param_2)

{
  URuntimeVirtualTexture *pUVar1;
  longlong lVar2;
  code *pcVar3;
  TConsoleVariableData<bool> *pTVar4;
  bool bVar5;
  FSceneInterface *pFVar6;
  FColor *pFVar7;
  longlong lVar8;
  undefined1 auStackY_138 [32];
  FName local_d8;
  FString local_d0;
  FName local_c0;
  TBoxSphereBounds<double,double> *local_b8;
  FString local_b0;
  TVector<double>_u_0 local_a0;
  double local_88;
  double local_80;
  double local_78;
  undefined1 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_d8 = (FName)((ulonglong)local_d8 & 0xffffffff00000000);
  local_b8 = param_1;
  pFVar6 = UActorComponent::GetScene((UActorComponent *)this);
  if (pFVar6 != (FSceneInterface *)0x0) {
    pFVar6 = UActorComponent::GetScene((UActorComponent *)this);
    (**(code **)(pFVar6->_padding_ + 0x230))(pFVar6,this,param_1);
    pTVar4 = CVarVTVisLogManualInvalidations.Ref;
    if (FVisualLogger::bIsRecording != 0) {
      bVar5 = IsInParallelGameThread();
      if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pTVar4->ShadowedValue[0] != false) && (FVisualLogger::bIsRecording != 0)) {
        pUVar1 = (this->VirtualTexture).field0_0x0.DebugPtr;
        if (pUVar1 != (URuntimeVirtualTexture *)0x0) {
          local_d8.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
          local_d8.Number = *(uint *)&pUVar1->field_0x1c;
          ::FName::ToString(&local_d8,&local_b0);
        }
        lVar2 = this->_padding_;
        if (*(int *)(lVar2 + 0x1f0) < 2) {
          local_c0 = *(FName *)(lVar2 + 0x18);
          ::FName::ToString(&local_c0,&local_d0);
        }
        else {
          local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d0.Data.ArrayNum = *(int *)(lVar2 + 0x1f0);
          lVar8 = (longlong)local_d0.Data.ArrayNum;
          local_d8 = *(FName *)(lVar2 + 0x1e8);
          if (local_d0.Data.ArrayNum == 0) {
            local_d0.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_d0.Data.ArrayNum,0,(ForAnyElementType *)&local_d0,
                       local_d0.Data.ArrayNum,&local_d0.Data.ArrayMax);
            memcpy(local_d0.Data.AllocatorInstance.Data,(void *)local_d8,lVar8 * 2);
          }
        }
        local_88 = (local_b8->BoxExtent).field0_0x0._s_0.X;
        local_80 = (local_b8->BoxExtent).field0_0x0._s_0.Y;
        local_a0._s_0.X = (local_b8->Origin).field0_0x0._s_0.X - local_88;
        local_78 = (local_b8->BoxExtent).field0_0x0._s_0.Z;
        local_88 = local_88 + (local_b8->Origin).field0_0x0._s_0.X;
        local_a0._s_0.Y = (local_b8->Origin).field0_0x0._s_0.Y - local_80;
        local_80 = local_80 + (local_b8->Origin).field0_0x0._s_0.Y;
        local_a0._s_0.Z = (local_b8->Origin).field0_0x0._s_0.Z - local_78;
        local_78 = local_78 + (local_b8->Origin).field0_0x0._s_0.Z;
        pFVar7 = &FColor::Green;
        if (param_2 == High) {
          pFVar7 = &FColor::Red;
        }
        local_70 = 1;
        FVisualLogger::BoxLogfImpl
                  ((UObject *)this,(FName *)&LogVirtualTexturing.field_0x4,Log,
                   (TBox<double> *)&local_a0._s_0,&UE::Math::TMatrix<double>::Identity,pFVar7,false,
                   L"Invalidate RVT for %s(%s) %s");
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
        if ((pUVar1 != (URuntimeVirtualTexture *)0x0) &&
           (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// IsActiveInWorld @ 147955e10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
URuntimeVirtualTextureComponent::IsActiveInWorld(URuntimeVirtualTextureComponent *this)

{
  uchar uVar1;
  UWorld *pUVar2;
  
  pUVar2 = (UWorld *)this->_padding_;
  if ((pUVar2 == (UWorld *)0x0) &&
     (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar2 == (UWorld *)0x0)
     ) {
    return false;
  }
  uVar1 = (pUVar2->WorldType).Value;
  if ((uVar1 != '\x01') && (1 < (byte)(uVar1 - 2))) {
    return false;
  }
  return true;
}

// IsEnabledInScene @ 1479561c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
URuntimeVirtualTextureComponent::IsEnabledInScene(URuntimeVirtualTextureComponent *this)

{
  uchar uVar1;
  Type TVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ERuntimeVirtualTextureMaterialQuality EVar6;
  EShaderPlatform EVar7;
  FSceneInterface *this_00;
  UWorld *pUVar8;
  FCachedSystemScalabilityCVars *pFVar9;
  
  this_00 = UActorComponent::GetScene((UActorComponent *)this);
  EVar7 = FSceneInterface::GetShaderPlatform(this_00);
  bVar4 = UseNanite(EVar7,true,true);
  if ((this->bEnableForNaniteOnly != false) && (!bVar4)) {
    return false;
  }
  bVar4 = RuntimeVirtualTexture::IsMaterialTypeSupported
                    (((this->VirtualTexture).field0_0x0.DebugPtr)->MaterialType,EVar7);
  if (!bVar4) {
    return false;
  }
  pUVar8 = (UWorld *)this->_padding_;
  if ((pUVar8 == (UWorld *)0x0) &&
     (pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar8 == (UWorld *)0x0)
     ) {
    return true;
  }
  uVar1 = (pUVar8->WorldType).Value;
  if ((uVar1 != '\x01') && (uVar1 != '\x03')) {
    return true;
  }
  if ((this->EnableInGamePerPlatform).Default == false) {
    return false;
  }
  if (this->bUseMinMaterialQuality == false) {
    return true;
  }
  pFVar9 = GetCachedScalabilityCVars();
  TVar2 = pFVar9->MaterialQualityLevel;
  if (TVar2 != Low) {
    if (TVar2 == High) {
      EVar6 = High;
      goto LAB_14795629c;
    }
    if (TVar2 == Medium) {
      EVar6 = Medium;
      goto LAB_14795629c;
    }
    if (TVar2 == Epic) {
      EVar6 = Epic;
      goto LAB_14795629c;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\RuntimeVirtualTextureComponent.cpp"
                       ,0xc9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  EVar6 = Low;
LAB_14795629c:
  return this->MinInGameMaterialQuality <= EVar6;
}

// IsReadyForFinishDestroy @ 147956660

bool __thiscall
URuntimeVirtualTextureComponent::IsReadyForFinishDestroy(URuntimeVirtualTextureComponent *this)

{
  bool bVar1;
  
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->DestroyFence);
  return bVar1;
}

// IsStreamingLowMips @ 1479568e0

bool __thiscall
URuntimeVirtualTextureComponent::IsStreamingLowMips
          (URuntimeVirtualTextureComponent *this,EShadingPath param_1)

{
  UVirtualTextureBuilder *this_00;
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  UVirtualTexture2D *pUVar3;
  longlong lVar4;
  
  if ((this->VirtualTexture).field0_0x0.DebugPtr == (URuntimeVirtualTexture *)0x0) {
    return false;
  }
  this_00 = (this->StreamingTexture).field0_0x0.DebugPtr;
  if (this_00 == (UVirtualTextureBuilder *)0x0) {
    return false;
  }
  pUVar3 = UVirtualTextureBuilder::GetVirtualTexture(this_00,param_1);
  pTVar1 = CVarVTStreamingMips.Ref;
  if (pUVar3 == (UVirtualTexture2D *)0x0) {
    return false;
  }
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 1;
  }
  if (pTVar1->ShadowedValue[lVar4] == false) {
    return false;
  }
  return true;
}

// IsStreamingLowMipsOnly @ 147956950

bool __thiscall
URuntimeVirtualTextureComponent::IsStreamingLowMipsOnly(URuntimeVirtualTextureComponent *this)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarVTStreamingMipsUseAlways.Ref;
  if (this->bUseStreamingMipsOnly != false) {
    return true;
  }
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 1;
  }
  if (pTVar1->ShadowedValue[lVar3] != false) {
    return true;
  }
  return false;
}

// IsStreamingTextureInvalid @ 1479569b0

bool __thiscall
URuntimeVirtualTextureComponent::IsStreamingTextureInvalid
          (URuntimeVirtualTextureComponent *this,EShadingPath param_1)

{
  EStreamingTextureStatusFlags EVar1;
  
  EVar1 = GetStreamingTextureStatus(this,param_1);
  if (((EVar1 & (HasStreamingTexture|HasVirtualTexture)) == (HasStreamingTexture|HasVirtualTexture))
     && ((EVar1 & (NonMatchingStreamingTextureSettings|InvalidStreamingTexture)) != None)) {
    return true;
  }
  return false;
}

// RequestPreload @ 147963980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
URuntimeVirtualTextureComponent::RequestPreload
          (URuntimeVirtualTextureComponent *this,TBoxSphereBounds<double,double> *param_1,
          int param_2)

{
  FSceneInterface *pFVar1;
  
  pFVar1 = UActorComponent::GetScene((UActorComponent *)this);
  if (pFVar1 != (FSceneInterface *)0x0) {
    pFVar1 = UActorComponent::GetScene((UActorComponent *)this);
    (**(code **)(pFVar1->_padding_ + 0x238))(pFVar1,this,param_1,param_2);
  }
  return;
}

// SendRenderTransform_Concurrent @ 147965810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
URuntimeVirtualTextureComponent::SendRenderTransform_Concurrent
          (URuntimeVirtualTextureComponent *this)

{
  FSceneInterface *pFVar1;
  
  if ((this->_padding_ & 2) != 0) {
    pFVar1 = UActorComponent::GetScene((UActorComponent *)this);
    (**(code **)(pFVar1->_padding_ + 0x210))(pFVar1,this);
  }
  UActorComponent::SendRenderTransform_Concurrent((UActorComponent *)this);
  return;
}

// Serialize @ 147965df0

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
URuntimeVirtualTextureComponent::Serialize(URuntimeVirtualTextureComponent *this,FArchive *param_1)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  USceneComponent::Serialize((USceneComponent *)this,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0xbd) {
      this->UseStreamingMipsInEditorMode =
           -(this->bUseStreamingMipsInEditor_DEPRECATED != false) & Always;
    }
  }
  return;
}

// Serialize @ 147965e60

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
URuntimeVirtualTextureComponent::Serialize
          (URuntimeVirtualTextureComponent *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFortniteMainBranchObjectVersion::GUID);
  USceneComponent::Serialize((USceneComponent *)this,(FArchive *)this_00);
  if (this_00->ArIsLoading != 0) {
    iVar1 = FArchiveState::CustomVer(this_00,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0xbd) {
      this->UseStreamingMipsInEditorMode =
           -(this->bUseStreamingMipsInEditor_DEPRECATED != false) & Always;
    }
  }
  return;
}

// SetVirtualTexture @ 14796d610

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
URuntimeVirtualTextureComponent::SetVirtualTexture
          (URuntimeVirtualTextureComponent *this,URuntimeVirtualTexture *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (URuntimeVirtualTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->VirtualTexture).field0_0x0.DebugPtr = param_1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// ShouldCreateRenderState @ 14796ebc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
URuntimeVirtualTextureComponent::ShouldCreateRenderState(URuntimeVirtualTextureComponent *this)

{
  uchar uVar1;
  bool bVar2;
  FStaticShaderPlatform FVar3;
  UWorld *pUVar4;
  FSceneInterface *this_00;
  
  pUVar4 = (UWorld *)this->_padding_;
  if ((pUVar4 == (UWorld *)0x0) &&
     (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar4 == (UWorld *)0x0)
     ) {
    return false;
  }
  uVar1 = (pUVar4->WorldType).Value;
  if ((uVar1 == '\x01') || ((byte)(uVar1 - 2) < 2)) {
    this_00 = UActorComponent::GetScene((UActorComponent *)this);
    FVar3.Platform = FSceneInterface::GetShaderPlatform(this_00);
    bVar2 = UseVirtualTexturing(FVar3);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesURuntimeVirtualTextureComponent @ 147970800

void __cdecl
URuntimeVirtualTextureComponent::StaticRegisterNativesURuntimeVirtualTextureComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execInvalidate @ 147982ff0

void __cdecl
URuntimeVirtualTextureComponent::execInvalidate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TBoxSphereBounds<double,double> *pTVar2;
  EVTInvalidatePriority local_res10 [8];
  TBoxSphereBounds<double,double> local_48;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = Normal;
  pTVar2 = &local_48;
  if ((TBoxSphereBounds<double,double> *)param_2->MostRecentPropertyAddress !=
      (TBoxSphereBounds<double,double> *)0x0) {
    pTVar2 = (TBoxSphereBounds<double,double> *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Invalidate((URuntimeVirtualTextureComponent *)param_1,pTVar2,local_res10[0]);
  return;
}

// execRequestPreload @ 1479876e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
URuntimeVirtualTextureComponent::execRequestPreload(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  FSceneInterface *pFVar3;
  uchar *puVar4;
  undefined4 local_res10 [2];
  uchar local_48 [64];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_res10[0] = 0;
  puVar4 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = UActorComponent::GetScene((UActorComponent *)param_1);
  if (pFVar3 != (FSceneInterface *)0x0) {
    pFVar3 = UActorComponent::GetScene((UActorComponent *)param_1);
    (**(code **)(pFVar3->_padding_ + 0x238))(pFVar3,param_1,puVar4,uVar2);
  }
  return;
}

