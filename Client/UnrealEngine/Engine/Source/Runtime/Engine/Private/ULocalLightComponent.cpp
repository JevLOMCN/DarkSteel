// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// StaticClass @ 14788a480

UClass * __cdecl ULocalLightComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalLightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LocalLightComponent",
               &Z_Registration_Info_UClass_ULocalLightComponent.InnerSingleton,
               StaticRegisterNativesULocalLightComponent,0x3e0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocalLightComponent>,
               InternalVTableHelperCtorCaller<ULocalLightComponent>,local_res8,
               ULightComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalLightComponent.InnerSingleton;
}

// ULocalLightComponent @ 1478a9f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

ULocalLightComponent * __thiscall
ULocalLightComponent::ULocalLightComponent(ULocalLightComponent *this,FVTableHelper *param_1)

{
  ULightComponent::ULightComponent((ULightComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined4 *)&this->LightmassSettings = 0x3f800000;
  *(undefined4 *)&(this->LightmassSettings).field_0x4 = 0x40000000;
  (this->LightmassSettings).field_0x8 = 0;
  return this;
}

// ULocalLightComponent @ 1478a9fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

ULocalLightComponent * __thiscall
ULocalLightComponent::ULocalLightComponent(ULocalLightComponent *this,FObjectInitializer *param_1)

{
  ULightComponent::ULightComponent((ULightComponent *)this,param_1);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x459c4000;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined4 *)&this->LightmassSettings = 0x3f800000;
  *(undefined4 *)&(this->LightmassSettings).field_0x4 = 0x40000000;
  (this->LightmassSettings).field_0x8 = 0;
  this->IntensityUnits = Unitless;
  this->Radius_DEPRECATED = 1024.0;
  this->AttenuationRadius = 1000.0;
  this->InverseExposureBlend = 0.0;
  return this;
}

// ~ULocalLightComponent @ 1478ac1a0

void __thiscall ULocalLightComponent::~ULocalLightComponent(ULocalLightComponent *this)

{
  this->_padding_ = (longlong)&ULightComponent::_vftable__for__UObject__;
  this->_padding_ = (longlong)&ULightComponent::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&ULightComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  FRenderCommandFence::~FRenderCommandFence((FRenderCommandFence *)&this->_padding_);
  FTexture::~FTexture((FTexture *)&this->_padding_);
  ULightComponentBase::~ULightComponentBase((ULightComponentBase *)this);
  return;
}

// AffectsBounds @ 1478b3900

bool __thiscall
ULocalLightComponent::AffectsBounds
          (ULocalLightComponent *this,TBoxSphereBounds<double,double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (param_1->Origin).field0_0x0._s_0.X - (double)this->_padding_;
  dVar2 = (param_1->Origin).field0_0x0._s_0.Z - (double)this->_padding_;
  dVar4 = (param_1->Origin).field0_0x0._s_0.Y - (double)this->_padding_;
  dVar1 = (double)this->AttenuationRadius + param_1->SphereRadius;
  return dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2 <= dVar1 * dVar1;
}

// GetBoundingBox @ 1478d0000

TBox<double> * __thiscall
ULocalLightComponent::GetBoundingBox
          (ULocalLightComponent *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (double)this->_padding_;
  dVar2 = (double)this->_padding_;
  dVar3 = (double)this->_padding_;
  dVar4 = (double)this->_padding_;
  dVar5 = (double)this->AttenuationRadius;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)this->_padding_ - dVar5;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1 - dVar5;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar4 - dVar5;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar5 + dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar5 + dVar3;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar5 + dVar4;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// GetBoundingSphere @ 1478d00c0

TSphere<double> * __thiscall
ULocalLightComponent::GetBoundingSphere
          (ULocalLightComponent *this,TSphere<double> *__return_storage_ptr__)

{
  float fVar1;
  double dVar2;
  
  dVar2 = (double)this->_padding_;
  fVar1 = this->AttenuationRadius;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = (double)this->_padding_;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z = (double)this->_padding_;
  __return_storage_ptr__->W = (double)fVar1;
  return __return_storage_ptr__;
}

// GetLightPosition @ 1478d5540

TVector4<double> * __thiscall
ULocalLightComponent::GetLightPosition
          (ULocalLightComponent *this,TVector4<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)this->_padding_;
  dVar2 = (double)this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// GetLightUnits @ 1478d5aa0

ELightUnits __thiscall ULocalLightComponent::GetLightUnits(ULocalLightComponent *this)

{
  return this->IntensityUnits;
}

// GetLightmassSettings @ 1478d5bf0

FLightmassLightSettings * __thiscall
ULocalLightComponent::GetLightmassSettings
          (ULocalLightComponent *this,FLightmassLightSettings *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  
  uVar2 = (this->LightmassSettings).field_0x8;
  uVar3 = *(undefined3 *)&(this->LightmassSettings).field_0x9;
  uVar1 = *(undefined4 *)&(this->LightmassSettings).field_0x4;
  __return_storage_ptr__->IndirectLightingSaturation =
       (float)*(undefined4 *)&(this->LightmassSettings).field_0x0;
  __return_storage_ptr__->ShadowExponent = (float)uVar1;
  __return_storage_ptr__->bUseAreaShadowsForStationaryLight = (bool)uVar2;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = uVar3;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1478d9830

UClass * __cdecl ULocalLightComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalLightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LocalLightComponent",
               &Z_Registration_Info_UClass_ULocalLightComponent.InnerSingleton,
               StaticRegisterNativesULocalLightComponent,0x3e0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocalLightComponent>,
               InternalVTableHelperCtorCaller<ULocalLightComponent>,local_res8,
               ULightComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalLightComponent.InnerSingleton;
}

// GetUnitsConversionFactor @ 1478ddc00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl
ULocalLightComponent::GetUnitsConversionFactor
          (ELightUnits param_1,ELightUnits param_2,float param_3)

{
  float fVar1;
  
  if (__real_3f7ff972 <= param_3) {
    param_3 = __real_3f7ff972;
  }
  if (param_3 <= __real_bf800000) {
    param_3 = __real_bf800000;
  }
  if (param_1 == param_2) {
    return __real_3f800000;
  }
  fVar1 = __real_3f800000;
  if ((param_1 != Nits) && (fVar1 = __real_461c4000, param_1 != Candelas)) {
    if (param_1 == Lumens) {
      fVar1 = __real_44c6f195 / (__real_3f800000 - param_3);
    }
    else {
      fVar1 = __real_41800000;
      if (param_1 == EV) {
        fVar1 = __real_461c4000;
      }
    }
  }
  if (param_2 == Nits) {
    return fVar1;
  }
  if (param_2 != Candelas) {
    if (param_2 == Lumens) {
      return fVar1 * (__real_3f800000 - param_3) * ___real_3a24b5be;
    }
    if (param_2 != EV) {
      return fVar1 * __real_3d800000;
    }
  }
  return fVar1 * __real_38d1b717;
}

// PushRadiusToRenderThread @ 1478e86e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULocalLightComponent::PushRadiusToRenderThread(ULocalLightComponent *this)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  UWorld *pUVar7;
  FUObjectItem *pFVar8;
  longlong lVar9;
  uint uVar10;
  FDestructionSentinel FStack_28;
  
  if ((this->_padding_ & 0x200000000) == 0) {
    if ((FLocalLightSceneProxy *)this->_padding_ == (FLocalLightSceneProxy *)0x0) {
      return;
    }
    FLocalLightSceneProxy::UpdateRadius_GameThread
              ((FLocalLightSceneProxy *)this->_padding_,this->AttenuationRadius);
    return;
  }
  if (((this->_padding_ & 3) == 3) &&
     (((this->_padding_ & 0x100) == 0 ||
      (pUVar7 = UActorComponent::GetWorld((UActorComponent *)this), pUVar7 == (UWorld *)0x0)))) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 | 1;
    if ((this->_padding_ & 0x10000) == 0) {
      pUVar7 = UActorComponent::GetWorld((UActorComponent *)this);
      if (pUVar7 == (UWorld *)0x0) {
        pFVar8 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
        if (((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
          UActorComponent::DoDeferredRenderUpdates_Concurrent((UActorComponent *)this);
        }
      }
      else {
        bVar3 = (bool)(**(code **)(this->_padding_ + 0x458))(this);
        UWorld::MarkActorComponentForNeededEndOfFrameUpdate(pUVar7,(UActorComponent *)this,bVar3);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &UActorComponent::MarkRenderStateDirtyEvent,(FWriteAccessScope *)&FStack_28);
    bVar3 = false;
    UActorComponent::MarkRenderStateDirtyEvent._28_4_ =
         UActorComponent::MarkRenderStateDirtyEvent._28_4_ + 1;
    uVar10 = UActorComponent::MarkRenderStateDirtyEvent._16_4_ - 1;
    if (-1 < (int)uVar10) {
      lVar9 = (longlong)(int)uVar10 << 4;
      bVar3 = false;
      do {
        uVar6 = 0;
        if ((int)uVar10 < (int)UActorComponent::MarkRenderStateDirtyEvent._16_4_) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((*(int *)(lVar9 + 8 + UActorComponent::MarkRenderStateDirtyEvent._8_8_) == 0) ||
            (*(longlong **)(lVar9 + UActorComponent::MarkRenderStateDirtyEvent._8_8_) ==
             (longlong *)0x0)) ||
           (cVar5 = (**(code **)(**(longlong **)
                                   (lVar9 + UActorComponent::MarkRenderStateDirtyEvent._8_8_) + 0x68
                                ))(), cVar5 == '\0')) {
          bVar3 = true;
        }
        lVar9 = lVar9 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    UActorComponent::MarkRenderStateDirtyEvent._28_4_ =
         UActorComponent::MarkRenderStateDirtyEvent._28_4_ + -1;
    if (bVar3) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &UActorComponent::MarkRenderStateDirtyEvent,false);
    }
    if (FStack_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
    }
  }
  return;
}

// SendRenderTransform_Concurrent @ 1478edbf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULocalLightComponent::SendRenderTransform_Concurrent(ULocalLightComponent *this)

{
  UWorld *pUVar1;
  
  if ((FLocalLightSceneProxy *)this->_padding_ != (FLocalLightSceneProxy *)0x0) {
    FLocalLightSceneProxy::UpdateRadius_GameThread
              ((FLocalLightSceneProxy *)this->_padding_,this->AttenuationRadius);
  }
  pUVar1 = (UWorld *)this->_padding_;
  if (pUVar1 == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  (**(code **)(pUVar1->Scene->_padding_ + 600))(pUVar1->Scene,this);
  UActorComponent::SendRenderTransform_Concurrent((UActorComponent *)this);
  return;
}

// Serialize @ 1478eeb40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ULocalLightComponent::Serialize(ULocalLightComponent *this,FArchive *param_1)

{
  ULightComponent::Serialize((ULightComponent *)this,param_1);
  if (*(int *)&param_1->field_0x40 < 0x154) {
    this->AttenuationRadius = this->Radius_DEPRECATED;
  }
  return;
}

// Serialize @ 1478eeb80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
ULocalLightComponent::Serialize(ULocalLightComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  ULightComponent::Serialize((ULightComponent *)this,pFVar1);
  if (*(int *)&pFVar1->field_0x40 < 0x154) {
    this->AttenuationRadius = this->Radius_DEPRECATED;
  }
  return;
}

// SetAttenuationRadius @ 1478efad0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULocalLightComponent::SetAttenuationRadius(ULocalLightComponent *this,float param_1)

{
  char cVar1;
  bool bVar2;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar2) || ((this->_padding_ & 1) == 0)) ||
      ((cVar1 = *(char *)((longlong)&this->_padding_ + 3), cVar1 != '\0' && (cVar1 != '\x01')))) &&
     (param_1 != this->AttenuationRadius)) {
    this->AttenuationRadius = param_1;
    if ((this->_padding_ & 0x200000000) != 0) {
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
      return;
    }
    if ((FLocalLightSceneProxy *)this->_padding_ != (FLocalLightSceneProxy *)0x0) {
      FLocalLightSceneProxy::UpdateRadius_GameThread
                ((FLocalLightSceneProxy *)this->_padding_,param_1);
    }
  }
  return;
}

// SetIntensityUnits @ 1478f2f70

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
ULocalLightComponent::SetIntensityUnits(ULocalLightComponent *this,ELightUnits param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (this->IntensityUnits != param_1)) {
    this->IntensityUnits = param_1;
    ULightComponent::UpdateColorAndBrightness((ULightComponent *)this);
  }
  return;
}

// StaticRegisterNativesULocalLightComponent @ 1478f8060

void __cdecl ULocalLightComponent::StaticRegisterNativesULocalLightComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_ULocalLightComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetUnitsConversionFactor @ 147904cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ULocalLightComponent::execGetUnitsConversionFactor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  char local_res10 [8];
  char local_res18 [8];
  float local_res20 [2];
  
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  if (__real_3f7ff972 <= local_res20[0]) {
    local_res20[0] = __real_3f7ff972;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20[0] <= __real_bf800000) {
    local_res20[0] = __real_bf800000;
  }
  if (local_res10[0] == local_res18[0]) {
    *(float *)param_3 = __real_3f800000;
    return;
  }
  fVar2 = __real_3f800000;
  if ((local_res10[0] != '\x04') && (fVar2 = __real_461c4000, local_res10[0] != '\x01')) {
    if (local_res10[0] == '\x02') {
      fVar2 = __real_44c6f195 / (__real_3f800000 - local_res20[0]);
    }
    else {
      fVar2 = __real_41800000;
      if (local_res10[0] == '\x03') {
        fVar2 = __real_461c4000;
      }
    }
  }
  if (local_res18[0] == '\x04') {
LAB_147904e6f:
    *(float *)param_3 = fVar2;
    return;
  }
  if (local_res18[0] != '\x01') {
    if (local_res18[0] == '\x02') {
      *(float *)param_3 = fVar2 * (__real_3f800000 - local_res20[0]) * ___real_3a24b5be;
      return;
    }
    if (local_res18[0] != '\x03') {
      fVar2 = fVar2 * __real_3d800000;
      goto LAB_147904e6f;
    }
  }
  *(float *)param_3 = fVar2 * __real_38d1b717;
  return;
}

// execSetAttenuationRadius @ 1479090d0

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
ULocalLightComponent::execSetAttenuationRadius(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  FProperty *pFVar2;
  float fVar3;
  bool bVar4;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar4 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar4) || ((param_1[3].field_0x20 & 1) == 0)) ||
      ((param_1[10].field_0x1b != '\0' && (param_1[10].field_0x1b != '\x01')))) &&
     (fVar3 != *(float *)&param_1[0x18].field_0xc)) {
    bVar1 = param_1[0xf].field_0x24;
    *(float *)&param_1[0x18].field_0xc = fVar3;
    if ((bVar1 & 2) != 0) {
      UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
      return;
    }
    if (*(FLocalLightSceneProxy **)(param_1 + 0x15) != (FLocalLightSceneProxy *)0x0) {
      FLocalLightSceneProxy::UpdateRadius_GameThread
                (*(FLocalLightSceneProxy **)(param_1 + 0x15),fVar3);
    }
  }
  return;
}

// execSetIntensityUnits @ 14790e3a0

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
ULocalLightComponent::execSetIntensityUnits(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  char local_res10 [24];
  
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  cVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (*(char *)(param_1 + 0x18) != cVar2)) {
    *(char *)(param_1 + 0x18) = cVar2;
    ULightComponent::UpdateColorAndBrightness((ULightComponent *)param_1);
  }
  return;
}

