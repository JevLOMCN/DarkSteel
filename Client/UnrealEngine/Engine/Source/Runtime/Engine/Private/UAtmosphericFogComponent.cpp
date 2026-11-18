// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// StaticClass @ 14758c380

UClass * __cdecl UAtmosphericFogComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAtmosphericFogComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AtmosphericFogComponent",
               &Z_Registration_Info_UClass_UAtmosphericFogComponent.InnerSingleton,
               StaticRegisterNativesUAtmosphericFogComponent,0x360,0x10,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UAtmosphericFogComponent>,
               InternalVTableHelperCtorCaller<UAtmosphericFogComponent>,local_res8,
               USkyAtmosphereComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAtmosphericFogComponent.InnerSingleton;
}

// UAtmosphericFogComponent @ 1475a75d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UAtmosphericFogComponent * __thiscall
UAtmosphericFogComponent::UAtmosphericFogComponent
          (UAtmosphericFogComponent *this,FVTableHelper *param_1)

{
  USkyAtmosphereComponent::USkyAtmosphereComponent((USkyAtmosphereComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// UAtmosphericFogComponent @ 1475a7610

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UAtmosphericFogComponent * __thiscall
UAtmosphericFogComponent::UAtmosphericFogComponent
          (UAtmosphericFogComponent *this,FObjectInitializer *param_1)

{
  USkyAtmosphereComponent::USkyAtmosphereComponent((USkyAtmosphereComponent *)this,param_1);
  this->field_0x358 = 1;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  USkyAtmosphereComponent::SetPositionToMatchDeprecatedAtmosphericFog
            ((USkyAtmosphereComponent *)this);
  return this;
}

// ~UAtmosphericFogComponent @ 1475aa9a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAtmosphericFogComponent::~UAtmosphericFogComponent(UAtmosphericFogComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  USkyAtmosphereComponent::~USkyAtmosphereComponent((USkyAtmosphereComponent *)this);
  return;
}

// GetPrivateStaticClass @ 1475dba20

UClass * __cdecl UAtmosphericFogComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAtmosphericFogComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AtmosphericFogComponent",
               &Z_Registration_Info_UClass_UAtmosphericFogComponent.InnerSingleton,
               StaticRegisterNativesUAtmosphericFogComponent,0x360,0x10,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UAtmosphericFogComponent>,
               InternalVTableHelperCtorCaller<UAtmosphericFogComponent>,local_res8,
               USkyAtmosphereComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAtmosphericFogComponent.InnerSingleton;
}

// IsPostLoadThreadSafe @ 1475e2a50

bool __thiscall UAtmosphericFogComponent::IsPostLoadThreadSafe(UAtmosphericFogComponent *this)

{
  return true;
}

// Serialize @ 1475fa000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UAtmosphericFogComponent::Serialize(UAtmosphericFogComponent *this,FArchive *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStackY_d8 [32];
  uint local_a8 [2];
  FAllocation local_a0;
  undefined5 local_98;
  undefined4 uStack_93;
  undefined1 uStack_8f;
  undefined6 uStack_8e;
  uchar local_88 [8];
  uchar local_80 [8];
  FAllocation local_78;
  undefined5 local_70;
  undefined4 uStack_6b;
  undefined1 uStack_67;
  undefined6 uStack_66;
  uchar local_60 [8];
  uchar local_58 [8];
  FAllocation local_50;
  undefined5 local_48;
  undefined4 uStack_43;
  undefined1 uStack_3f;
  undefined6 uStack_3e;
  uchar local_38 [8];
  uchar local_30 [8];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  USkyAtmosphereComponent::Serialize((USkyAtmosphereComponent *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if ((iVar2 < 0x2e) && ((param_1->field_0x28 & 1) != 0)) {
    local_48 = 0;
    uStack_3e = 0;
    local_70 = 0;
    uStack_66 = 0;
    local_50.RawData = (void *)0x0;
    local_98 = 0;
    uStack_8e = 0;
    uStack_43 = 0xffffffff;
    uStack_3f = 0xff;
    local_38[0] = FIoChunkId::InvalidChunkId.Id[0];
    local_38[1] = FIoChunkId::InvalidChunkId.Id[1];
    local_38[2] = FIoChunkId::InvalidChunkId.Id[2];
    local_38[3] = FIoChunkId::InvalidChunkId.Id[3];
    local_38[4] = FIoChunkId::InvalidChunkId.Id[4];
    local_38[5] = FIoChunkId::InvalidChunkId.Id[5];
    local_38[6] = FIoChunkId::InvalidChunkId.Id[6];
    local_38[7] = FIoChunkId::InvalidChunkId.Id[7];
    local_30[0] = FIoChunkId::InvalidChunkId.Id[8];
    local_30[1] = FIoChunkId::InvalidChunkId.Id[9];
    local_30[2] = FIoChunkId::InvalidChunkId.Id[10];
    local_30[3] = FIoChunkId::InvalidChunkId.Id[0xb];
    local_78.RawData = (void *)0x0;
    uStack_6b = 0xffffffff;
    uStack_67 = 0xff;
    local_60[0] = FIoChunkId::InvalidChunkId.Id[0];
    local_60[1] = FIoChunkId::InvalidChunkId.Id[1];
    local_60[2] = FIoChunkId::InvalidChunkId.Id[2];
    local_60[3] = FIoChunkId::InvalidChunkId.Id[3];
    local_60[4] = FIoChunkId::InvalidChunkId.Id[4];
    local_60[5] = FIoChunkId::InvalidChunkId.Id[5];
    local_60[6] = FIoChunkId::InvalidChunkId.Id[6];
    local_60[7] = FIoChunkId::InvalidChunkId.Id[7];
    local_58[0] = FIoChunkId::InvalidChunkId.Id[8];
    local_58[1] = FIoChunkId::InvalidChunkId.Id[9];
    local_58[2] = FIoChunkId::InvalidChunkId.Id[10];
    local_58[3] = FIoChunkId::InvalidChunkId.Id[0xb];
    local_a0.RawData = (void *)0x0;
    uStack_93 = 0xffffffff;
    uStack_8f = 0xff;
    local_88[0] = FIoChunkId::InvalidChunkId.Id[0];
    local_88[1] = FIoChunkId::InvalidChunkId.Id[1];
    local_88[2] = FIoChunkId::InvalidChunkId.Id[2];
    local_88[3] = FIoChunkId::InvalidChunkId.Id[3];
    local_88[4] = FIoChunkId::InvalidChunkId.Id[4];
    local_88[5] = FIoChunkId::InvalidChunkId.Id[5];
    local_88[6] = FIoChunkId::InvalidChunkId.Id[6];
    local_88[7] = FIoChunkId::InvalidChunkId.Id[7];
    local_80[0] = FIoChunkId::InvalidChunkId.Id[8];
    local_80[1] = FIoChunkId::InvalidChunkId.Id[9];
    local_80[2] = FIoChunkId::InvalidChunkId.Id[10];
    local_80[3] = FIoChunkId::InvalidChunkId.Id[0xb];
    if (0x118 < *(int *)&param_1->field_0x40) {
      FBulkData::Serialize((FBulkData *)&local_50,param_1,(UObject *)this,false,1,None);
      FBulkData::Serialize((FBulkData *)&local_78,param_1,(UObject *)this,false,1,None);
    }
    FBulkData::Serialize((FBulkData *)&local_a0,param_1,(UObject *)this,false,1,None);
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_a8[0] = 0;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_a8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_a8);
      }
    }
    else {
      local_a8[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    USkyAtmosphereComponent::SetPositionToMatchDeprecatedAtmosphericFog
              ((USkyAtmosphereComponent *)this);
    USkyAtmosphereComponent::SetDummyStaticLightingGUIDs((USkyAtmosphereComponent *)this);
    FBulkData::~FBulkData((FBulkData *)&local_a0);
    FBulkData::~FBulkData((FBulkData *)&local_78);
    FBulkData::~FBulkData((FBulkData *)&local_50);
  }
  return;
}

// Serialize @ 1475fa1d0

void __thiscall
UAtmosphericFogComponent::Serialize(UAtmosphericFogComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUAtmosphericFogComponent @ 1475fed50

void __cdecl UAtmosphericFogComponent::StaticRegisterNativesUAtmosphericFogComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UAtmosphericFogComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDisableGroundScattering @ 147606930

void __cdecl
UAtmosphericFogComponent::execDisableGroundScattering
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execDisableSunDisk @ 1476069a0

void __cdecl
UAtmosphericFogComponent::execDisableSunDisk(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetAltitudeScale @ 147606b80

void __cdecl
UAtmosphericFogComponent::execSetAltitudeScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetDefaultBrightness @ 147606bf0

void __cdecl
UAtmosphericFogComponent::execSetDefaultBrightness(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetDefaultLightColor @ 147606c60

void __cdecl
UAtmosphericFogComponent::execSetDefaultLightColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_18 [16];
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetDensityMultiplier @ 147606cd0

void __cdecl
UAtmosphericFogComponent::execSetDensityMultiplier(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetDensityOffset @ 147606d40

void __cdecl
UAtmosphericFogComponent::execSetDensityOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetDistanceOffset @ 147606db0

void __cdecl
UAtmosphericFogComponent::execSetDistanceOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetDistanceScale @ 147606e20

void __cdecl
UAtmosphericFogComponent::execSetDistanceScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetFogMultiplier @ 147606e90

void __cdecl
UAtmosphericFogComponent::execSetFogMultiplier(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetPrecomputeParams @ 147606f00

void __cdecl
UAtmosphericFogComponent::execSetPrecomputeParams(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_18 [4];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetStartDistance @ 147607000

void __cdecl
UAtmosphericFogComponent::execSetStartDistance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetSunMultiplier @ 147607070

void __cdecl
UAtmosphericFogComponent::execSetSunMultiplier(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

