// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 10

// StaticClass @ 146325fb0

UClass * __cdecl UFieldSystemMetaDataProcessingResolution::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldSystemMetaDataProcessingResolution.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"FieldSystemMetaDataProcessingResolution",
               &Z_Registration_Info_UClass_UFieldSystemMetaDataProcessingResolution.InnerSingleton,
               StaticRegisterNativesUFieldSystemMetaDataProcessingResolution,200,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UFieldSystemMetaDataProcessingResolution>,
               InternalVTableHelperCtorCaller<UFieldSystemMetaDataProcessingResolution>,local_res8,
               UFieldSystemMetaData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldSystemMetaDataProcessingResolution.InnerSingleton;
}

// UFieldSystemMetaDataProcessingResolution @ 14632b010

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UFieldSystemMetaDataProcessingResolution * __thiscall
UFieldSystemMetaDataProcessingResolution::UFieldSystemMetaDataProcessingResolution
          (UFieldSystemMetaDataProcessingResolution *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// UFieldSystemMetaDataProcessingResolution @ 14632b050

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UFieldSystemMetaDataProcessingResolution * __thiscall
UFieldSystemMetaDataProcessingResolution::UFieldSystemMetaDataProcessingResolution
          (UFieldSystemMetaDataProcessingResolution *this,FObjectInitializer *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UFieldSystemMetaDataProcessingResolution @ 14632b970

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
UFieldSystemMetaDataProcessingResolution::~UFieldSystemMetaDataProcessingResolution
          (UFieldSystemMetaDataProcessingResolution *this)

{
  this->_padding_ = (longlong)&UFieldSystemMetaData::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UFieldSystemMetaData::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UFieldSystemMetaData::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 146330070

UClass * __cdecl UFieldSystemMetaDataProcessingResolution::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldSystemMetaDataProcessingResolution.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"FieldSystemMetaDataProcessingResolution",
               &Z_Registration_Info_UClass_UFieldSystemMetaDataProcessingResolution.InnerSingleton,
               StaticRegisterNativesUFieldSystemMetaDataProcessingResolution,200,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UFieldSystemMetaDataProcessingResolution>,
               InternalVTableHelperCtorCaller<UFieldSystemMetaDataProcessingResolution>,local_res8,
               UFieldSystemMetaData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldSystemMetaDataProcessingResolution.InnerSingleton;
}

// NewMetaData @ 1463331c0

FFieldSystemMetaData * __thiscall
UFieldSystemMetaDataProcessingResolution::NewMetaData
          (UFieldSystemMetaDataProcessingResolution *this)

{
  byte bVar1;
  FFieldSystemMetaData *pFVar2;
  
  pFVar2 = ::operator_new(0x10);
  if (pFVar2 != (FFieldSystemMetaData *)0x0) {
    bVar1 = (this->ResolutionType).Value;
    *pFVar2 = (FFieldSystemMetaData)&___7FFieldSystemMetaDataProcessingResolution__6B_;
    *(uint *)(pFVar2 + 1) = (uint)bVar1;
    return pFVar2;
  }
  return (FFieldSystemMetaData *)0x0;
}

// SetMetaDataaProcessingResolutionType @ 146333c60

UFieldSystemMetaDataProcessingResolution * __thiscall
UFieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType
          (UFieldSystemMetaDataProcessingResolution *this,EFieldResolutionType param_1)

{
  (this->ResolutionType).Value = (uchar)param_1;
  return this;
}

// StaticRegisterNativesUFieldSystemMetaDataProcessingResolution @ 146334250

void __cdecl
UFieldSystemMetaDataProcessingResolution::
StaticRegisterNativesUFieldSystemMetaDataProcessingResolution(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Type @ 1463346c0

EMetaType __thiscall
UFieldSystemMetaDataProcessingResolution::Type(UFieldSystemMetaDataProcessingResolution *this)

{
  return ECommandData_ProcessingResolution;
}

// execSetMetaDataaProcessingResolutionType @ 1463363e0

void __cdecl
UFieldSystemMetaDataProcessingResolution::execSetMetaDataaProcessingResolutionType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[4].field_0x20 = local_res8[0];
  *(UObject **)param_3 = param_1;
  return;
}

