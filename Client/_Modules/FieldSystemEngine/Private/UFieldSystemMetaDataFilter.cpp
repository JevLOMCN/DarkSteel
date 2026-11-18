// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 10

// StaticClass @ 1463260b0

UClass * __cdecl UFieldSystemMetaDataFilter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldSystemMetaDataFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"FieldSystemMetaDataFilter",
               &Z_Registration_Info_UClass_UFieldSystemMetaDataFilter.InnerSingleton,
               StaticRegisterNativesUFieldSystemMetaDataFilter,200,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UFieldSystemMetaDataFilter>,
               InternalVTableHelperCtorCaller<UFieldSystemMetaDataFilter>,local_res8,
               UFieldSystemMetaData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldSystemMetaDataFilter.InnerSingleton;
}

// UFieldSystemMetaDataFilter @ 14632af10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UFieldSystemMetaDataFilter * __thiscall
UFieldSystemMetaDataFilter::UFieldSystemMetaDataFilter
          (UFieldSystemMetaDataFilter *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// UFieldSystemMetaDataFilter @ 14632af50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UFieldSystemMetaDataFilter * __thiscall
UFieldSystemMetaDataFilter::UFieldSystemMetaDataFilter
          (UFieldSystemMetaDataFilter *this,FObjectInitializer *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UFieldSystemMetaDataFilter @ 14632b910

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
UFieldSystemMetaDataFilter::~UFieldSystemMetaDataFilter(UFieldSystemMetaDataFilter *this)

{
  this->_padding_ = (longlong)&UFieldSystemMetaData::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UFieldSystemMetaData::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UFieldSystemMetaData::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14632fef0

UClass * __cdecl UFieldSystemMetaDataFilter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldSystemMetaDataFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"FieldSystemMetaDataFilter",
               &Z_Registration_Info_UClass_UFieldSystemMetaDataFilter.InnerSingleton,
               StaticRegisterNativesUFieldSystemMetaDataFilter,200,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UFieldSystemMetaDataFilter>,
               InternalVTableHelperCtorCaller<UFieldSystemMetaDataFilter>,local_res8,
               UFieldSystemMetaData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldSystemMetaDataFilter.InnerSingleton;
}

// NewMetaData @ 146333120

FFieldSystemMetaData * __thiscall
UFieldSystemMetaDataFilter::NewMetaData(UFieldSystemMetaDataFilter *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  FFieldSystemMetaData *pFVar4;
  
  pFVar4 = ::operator_new(0x18);
  if (pFVar4 != (FFieldSystemMetaData *)0x0) {
    bVar1 = (this->PositionType).Value;
    bVar2 = (this->ObjectType).Value;
    bVar3 = (this->FilterType).Value;
    *pFVar4 = (FFieldSystemMetaData)&___7FFieldSystemMetaDataFilter__6B_;
    *(uint *)(pFVar4 + 1) = (uint)bVar3;
    *(uint *)&pFVar4[1].field_0x4 = (uint)bVar2;
    *(uint *)(pFVar4 + 2) = (uint)bVar1;
    return pFVar4;
  }
  return (FFieldSystemMetaData *)0x0;
}

// SetMetaDataFilterType @ 146333c30

UFieldSystemMetaDataFilter * __thiscall
UFieldSystemMetaDataFilter::SetMetaDataFilterType
          (UFieldSystemMetaDataFilter *this,EFieldFilterType param_1,EFieldObjectType param_2,
          EFieldPositionType param_3)

{
  (this->FilterType).Value = (uchar)param_1;
  (this->ObjectType).Value = (uchar)param_2;
  (this->PositionType).Value = (uchar)param_3;
  return this;
}

// StaticRegisterNativesUFieldSystemMetaDataFilter @ 1463341d0

void __cdecl UFieldSystemMetaDataFilter::StaticRegisterNativesUFieldSystemMetaDataFilter(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UFieldSystemMetaDataFilter_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Type @ 1463346a0

EMetaType __thiscall UFieldSystemMetaDataFilter::Type(UFieldSystemMetaDataFilter *this)

{
  return ECommandData_Filter;
}

// execSetMetaDataFilterType @ 146336220

void __cdecl
UFieldSystemMetaDataFilter::execSetMetaDataFilterType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[4].field_0x20 = local_res8[0];
  param_1[4].field_0x21 = local_res10[0];
  param_1[4].field_0x22 = local_res18[0];
  *(UObject **)param_3 = param_1;
  return;
}

