// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// StaticClass @ 14791c320

UClass * __cdecl URectLightComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URectLightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RectLightComponent",
               &Z_Registration_Info_UClass_URectLightComponent.InnerSingleton,
               StaticRegisterNativesURectLightComponent,0x420,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<URectLightComponent>,
               InternalVTableHelperCtorCaller<URectLightComponent>,local_res8,
               ULocalLightComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URectLightComponent.InnerSingleton;
}

// URectLightComponent @ 14792a0f0

URectLightComponent * __thiscall
URectLightComponent::URectLightComponent(URectLightComponent *this,FVTableHelper *param_1)

{
  ULocalLightComponent::ULocalLightComponent((ULocalLightComponent *)this,param_1);
  this->bLightRequiresBrokenEVMath = false;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->SourceTexture).field0_0x0.DebugPtr = (UTexture *)0x0;
  return this;
}

// URectLightComponent @ 14792a140

URectLightComponent * __thiscall
URectLightComponent::URectLightComponent(URectLightComponent *this,FObjectInitializer *param_1)

{
  ULocalLightComponent::ULocalLightComponent((ULocalLightComponent *)this,param_1);
  this->bLightRequiresBrokenEVMath = false;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  (this->SourceTexture).field0_0x0.DebugPtr = (UTexture *)0x0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->SourceTextureScale).field0_0x0 = (TVector2<float>_u_0)0x3f8000003f800000;
  this->SourceWidth = 64.0;
  this->SourceHeight = 64.0;
  (this->SourceTextureOffset).field0_0x0 = (TVector2<float>_u_0)0x0;
  this->BarnDoorAngle = 88.0;
  this->BarnDoorLength = 20.0;
  this->LightFunctionConeAngle = 0.0;
  return this;
}

// ~URectLightComponent @ 14792cdf0

void __thiscall URectLightComponent::~URectLightComponent(URectLightComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  ULocalLightComponent::~ULocalLightComponent((ULocalLightComponent *)this);
  return;
}

// BeginDestroy @ 147934940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall URectLightComponent::BeginDestroy(URectLightComponent *this)

{
  USceneComponent::BeginDestroy((USceneComponent *)this);
  BeginReleaseResource((FRenderResource *)&this->field_0x350,(FRenderCommandPipe *)0x0);
  FRenderCommandFence::BeginFence((FRenderCommandFence *)&this->field_0x3b0,RenderThread);
  return;
}

// ComputeLightBrightness @ 14793af90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall URectLightComponent::ComputeLightBrightness(URectLightComponent *this)

{
  char cVar1;
  float _Y;
  float fVar2;
  
  _Y = ULightComponent::ComputeLightBrightness((ULightComponent *)this);
  cVar1 = this->field_0x3c0;
  if (cVar1 == '\x01') {
    return _Y * __real_461c4000;
  }
  if (cVar1 == '\x04') {
    return _Y * this->SourceHeight * this->SourceWidth;
  }
  if (cVar1 == '\x02') {
    return _Y * ___real_4546f195;
  }
  if (cVar1 == '\x03') {
    fVar2 = powf(__real_40000000,_Y);
    fVar2 = fVar2 * __real_461c4000;
    if (this->bLightRequiresBrokenEVMath != false) {
      return _Y * fVar2;
    }
  }
  else {
    fVar2 = _Y * __real_41800000;
  }
  return fVar2;
}

// CreateSceneProxy @ 14793df60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLightSceneProxy * __thiscall URectLightComponent::CreateSceneProxy(URectLightComponent *this)

{
  FLocalLightSceneProxy *this_00;
  float fVar1;
  undefined1 auVar2 [16];
  
  this_00 = ::operator_new(0x2a0);
  if (this_00 != (FLocalLightSceneProxy *)0x0) {
    FLocalLightSceneProxy::FLocalLightSceneProxy(this_00,(ULocalLightComponent *)this);
    *(undefined ***)this_00 = &___7FRectLightSceneProxy__6B_;
    *(float *)&this_00->field_0x268 = this->SourceWidth;
    *(float *)&this_00->field_0x26c = this->SourceHeight;
    fVar1 = this->BarnDoorAngle;
    if (__real_42b00000 <= this->BarnDoorAngle) {
      fVar1 = __real_42b00000;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    *(float *)(this_00 + 1) = fVar1;
    fVar1 = this->BarnDoorLength;
    if (this->BarnDoorLength <= __real_3dcccccd) {
      fVar1 = __real_3dcccccd;
    }
    *(float *)&this_00[1].field_0x4 = fVar1;
    *(TObjectPtr<UTexture>_u_0 *)&this_00[1].field_0x8 = (this->SourceTexture).field0_0x0;
    fVar1 = this->LightFunctionConeAngle;
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    else {
      if (__real_42b20000 <= fVar1) {
        fVar1 = __real_42b20000;
      }
      if (fVar1 <= 0.0) {
        fVar1 = 0.0;
      }
      fVar1 = tanf(fVar1 * __real_3c8efa36);
    }
    *(float *)&this_00[1].field_0x14 = fVar1;
    auVar2._0_8_ = this->SourceTextureScale;
    auVar2._8_8_ = this->SourceTextureOffset;
    auVar2 = minps(auVar2,___xmm_3f8000003f8000003f8000003f800000);
    auVar2 = maxps(auVar2,ZEXT816(0));
    *(undefined1 (*) [16])&this_00[1].field_0x20 = auVar2;
    *(undefined4 *)&this_00[1].field_0x10 = 0xffffffff;
    return (FLightSceneProxy *)this_00;
  }
  return (FLightSceneProxy *)0x0;
}

// GetLightType @ 147949bf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

ELightComponentType __thiscall URectLightComponent::GetLightType(URectLightComponent *this)

{
  return LightType_Rect;
}

// GetPrivateStaticClass @ 14794c220

UClass * __cdecl URectLightComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URectLightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RectLightComponent",
               &Z_Registration_Info_UClass_URectLightComponent.InnerSingleton,
               StaticRegisterNativesURectLightComponent,0x420,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<URectLightComponent>,
               InternalVTableHelperCtorCaller<URectLightComponent>,local_res8,
               ULocalLightComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URectLightComponent.InnerSingleton;
}

// GetUniformPenumbraSize @ 147950230

float __thiscall URectLightComponent::GetUniformPenumbraSize(URectLightComponent *this)

{
  float fVar1;
  
  if (this->field_0x3d8 != '\0') {
    return __real_3f800000;
  }
  fVar1 = SQRT(this->SourceHeight * this->SourceWidth);
  if (fVar1 == 0.0) {
    fVar1 = __real_3d4ccccd;
    if (__real_3f800000 <= __real_3d4ccccd) {
      fVar1 = __real_3f800000;
    }
    if (fVar1 <= __real_38d1b717) {
      fVar1 = __real_38d1b717;
    }
    return fVar1;
  }
  fVar1 = fVar1 * __real_3ba3d70a;
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= __real_38d1b717) {
    fVar1 = __real_38d1b717;
  }
  return fVar1;
}

// PostLoad @ 14795cd80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall URectLightComponent::PostLoad(URectLightComponent *this)

{
  longlong lVar1;
  char cVar2;
  FPackageFileVersion FVar3;
  float fVar4;
  
  UActorComponent::PostLoad((UActorComponent *)this);
  if (((*(longlong *)&this->field_0x2f0 != 0) && (this->field_0x1ab == '\0')) &&
     (*(longlong *)&this->field_0xa8 != 0)) {
    *(undefined8 *)&this->field_0x2f0 = 0;
  }
  *(undefined4 *)&this->field_0x2ac = 0xffffffff;
  cVar2 = (**(code **)(*(longlong *)this + 0x680))(this);
  if (cVar2 != '\x03') {
    fVar4 = *(float *)&this->field_0x274;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(float *)&this->field_0x274 = fVar4;
  }
  FVar3 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  fVar4 = __real_400ccccd;
  if ((*(int *)FVar3 < 0xe4) && (lVar1 = *(longlong *)&this->field_0x310, lVar1 != 0)) {
    *(float *)&this->field_0x274 = *(float *)&this->field_0x274 / *(float *)(lVar1 + 0x174);
    fVar4 = powf(*(float *)&this->field_0x31c,fVar4);
    *(float *)&this->field_0x31c = fVar4;
    *(float *)&this->field_0x31c = fVar4 / *(float *)(lVar1 + 0x174);
  }
  return;
}

// Serialize @ 147965990

void __thiscall URectLightComponent::Serialize(URectLightComponent *this,FArchive *param_1)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  ULocalLightComponent::Serialize((ULocalLightComponent *)this,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if ((iVar1 < 0xcb) && (this->field_0x3c0 == '\x03')) {
      this->bLightRequiresBrokenEVMath = true;
    }
  }
  return;
}

// Serialize @ 147965a00

void __thiscall
URectLightComponent::Serialize(URectLightComponent *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFortniteMainBranchObjectVersion::GUID);
  ULocalLightComponent::Serialize((ULocalLightComponent *)this,(FArchive *)this_00);
  if (this_00->ArIsLoading != 0) {
    iVar1 = FArchiveState::CustomVer(this_00,&FFortniteMainBranchObjectVersion::GUID);
    if ((iVar1 < 0xcb) && (this->field_0x3c0 == '\x03')) {
      this->bLightRequiresBrokenEVMath = true;
    }
  }
  return;
}

// SetBarnDoorAngle @ 147967320

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall URectLightComponent::SetBarnDoorAngle(URectLightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->field_0x98 & 1) == 0)) || (this->field_0x1ab != '\0')) &&
     (param_1 != this->BarnDoorAngle)) {
    if (__real_42b00000 <= param_1) {
      param_1 = __real_42b00000;
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    this->BarnDoorAngle = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetBarnDoorLength @ 147967390

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall URectLightComponent::SetBarnDoorLength(URectLightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->field_0x98 & 1) == 0)) || (this->field_0x1ab != '\0')) &&
     (param_1 != this->BarnDoorLength)) {
    if (param_1 <= __real_3dcccccd) {
      param_1 = __real_3dcccccd;
    }
    this->BarnDoorLength = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetSourceHeight @ 14796c2b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall URectLightComponent::SetSourceHeight(URectLightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->field_0x98 & 1) == 0)) || (this->field_0x1ab != '\0')) &&
     (param_1 != this->SourceHeight)) {
    this->SourceHeight = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetSourceTexture @ 14796c310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall URectLightComponent::SetSourceTexture(URectLightComponent *this,UTexture *param_1)

{
  UTexture *pUVar1;
  bool bVar2;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if ((param_1 == (UTexture *)0x0) || (param_1->VirtualTextureStreaming == '\0')) {
    bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
    if ((bVar2) || (((this->field_0x98 & 1) == 0 || (this->field_0x1ab != '\0')))) {
      pUVar1 = (this->SourceTexture).field0_0x0.DebugPtr;
      if (pUVar1 == (UTexture *)0x0) {
        bVar2 = param_1 == (UTexture *)0x0;
      }
      else {
        bVar2 = pUVar1 == param_1;
      }
      if (!bVar2) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTexture *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        (this->SourceTexture).field0_0x0.DebugPtr = param_1;
        UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
      }
    }
  }
  else if (2 < (byte)LogTemp._0_1_) {
    local_res10 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res10,&local_18);
    local_res10.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_res10.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&local_res10,&local_28);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// SetSourceWidth @ 14796c450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall URectLightComponent::SetSourceWidth(URectLightComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->field_0x98 & 1) == 0)) || (this->field_0x1ab != '\0')) &&
     (param_1 != this->SourceWidth)) {
    this->SourceWidth = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// StaticRegisterNativesURectLightComponent @ 1479707a0

void __cdecl URectLightComponent::StaticRegisterNativesURectLightComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_URectLightComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetBarnDoorAngle @ 147988e70

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
URectLightComponent::execSetBarnDoorAngle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float fVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar3 != *(float *)(param_1 + 0x19))) {
    if (__real_42b00000 <= fVar3) {
      fVar3 = __real_42b00000;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    *(float *)(param_1 + 0x19) = fVar3;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetBarnDoorLength @ 147988f50

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
URectLightComponent::execSetBarnDoorLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float fVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar3 != *(float *)&param_1[0x19].field_0x4)) {
    if (fVar3 <= __real_3dcccccd) {
      fVar3 = __real_3dcccccd;
    }
    *(float *)&param_1[0x19].field_0x4 = fVar3;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetSourceHeight @ 14798b190

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
URectLightComponent::execSetSourceHeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)&param_1[0x18].field_0x24)) {
    *(float *)&param_1[0x18].field_0x24 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetSourceTexture @ 14798b250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
URectLightComponent::execSetSourceTexture(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  bool bVar3;
  UObject *local_res10;
  FName local_res20;
  FString local_28;
  FString local_18;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 == (UObject *)0x0) || ((local_res10[6].field_0x26 & 4) == 0)) {
    bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
    if ((bVar3) || (((param_1[3].field_0x20 & 1) == 0 || (param_1[10].field_0x1b != '\0')))) {
      if (*(UObject **)&param_1[0x19].field_0x10 == (UObject *)0x0) {
        bVar3 = pUVar2 == (UObject *)0x0;
      }
      else {
        bVar3 = *(UObject **)&param_1[0x19].field_0x10 == pUVar2;
      }
      if (!bVar3) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        *(UObject **)&param_1[0x19].field_0x10 = pUVar2;
        UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
      }
    }
  }
  else if (2 < (byte)LogTemp._0_1_) {
    local_res20.ComparisonIndex.Value = *(uint *)&local_res10->field_0x18;
    local_res20.Number = *(uint *)&local_res10->field_0x1c;
    ::FName::ToString(&local_res20,&local_18);
    local_res20.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res20.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res20,&local_28);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// execSetSourceWidth @ 14798b3f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl URectLightComponent::execSetSourceWidth(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)&param_1[0x18].field_0x20)) {
    *(float *)&param_1[0x18].field_0x20 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

