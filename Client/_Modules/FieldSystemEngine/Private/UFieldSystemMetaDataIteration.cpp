// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 10

// StaticClass @ 146325ef0

UClass * __cdecl UFieldSystemMetaDataIteration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldSystemMetaDataIteration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"FieldSystemMetaDataIteration",
               &Z_Registration_Info_UClass_UFieldSystemMetaDataIteration.InnerSingleton,
               StaticRegisterNativesUFieldSystemMetaDataIteration,200,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UFieldSystemMetaDataIteration>,
               InternalVTableHelperCtorCaller<UFieldSystemMetaDataIteration>,local_res8,
               UFieldSystemMetaData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldSystemMetaDataIteration.InnerSingleton;
}

// UFieldSystemMetaDataIteration @ 14632af90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UFieldSystemMetaDataIteration * __thiscall
UFieldSystemMetaDataIteration::UFieldSystemMetaDataIteration
          (UFieldSystemMetaDataIteration *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// UFieldSystemMetaDataIteration @ 14632afd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UFieldSystemMetaDataIteration * __thiscall
UFieldSystemMetaDataIteration::UFieldSystemMetaDataIteration
          (UFieldSystemMetaDataIteration *this,FObjectInitializer *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UFieldSystemMetaDataIteration @ 14632b940

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
UFieldSystemMetaDataIteration::~UFieldSystemMetaDataIteration(UFieldSystemMetaDataIteration *this)

{
  this->_padding_ = (longlong)&UFieldSystemMetaData::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UFieldSystemMetaData::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UFieldSystemMetaData::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14632ffb0

UClass * __cdecl UFieldSystemMetaDataIteration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldSystemMetaDataIteration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"FieldSystemMetaDataIteration",
               &Z_Registration_Info_UClass_UFieldSystemMetaDataIteration.InnerSingleton,
               StaticRegisterNativesUFieldSystemMetaDataIteration,200,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UFieldSystemMetaDataIteration>,
               InternalVTableHelperCtorCaller<UFieldSystemMetaDataIteration>,local_res8,
               UFieldSystemMetaData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldSystemMetaDataIteration.InnerSingleton;
}

// NewMetaData @ 146333180

FFieldSystemMetaData * __thiscall
UFieldSystemMetaDataIteration::NewMetaData(UFieldSystemMetaDataIteration *this)

{
  int iVar1;
  FFieldSystemMetaData *pFVar2;
  
  pFVar2 = ::operator_new(0x10);
  if (pFVar2 != (FFieldSystemMetaData *)0x0) {
    iVar1 = this->Iterations;
    *pFVar2 = (FFieldSystemMetaData)&___7FFieldSystemMetaDataIteration__6B_;
    *(int *)(pFVar2 + 1) = iVar1;
    return pFVar2;
  }
  return (FFieldSystemMetaData *)0x0;
}

// SetMetaDataIteration @ 146333c50

UFieldSystemMetaDataIteration * __thiscall
UFieldSystemMetaDataIteration::SetMetaDataIteration(UFieldSystemMetaDataIteration *this,int param_1)

{
  this->Iterations = param_1;
  return this;
}

// StaticRegisterNativesUFieldSystemMetaDataIteration @ 146334210

void __cdecl UFieldSystemMetaDataIteration::StaticRegisterNativesUFieldSystemMetaDataIteration(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UFieldSystemMetaDataIteration_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Type @ 1463346b0

EMetaType __thiscall UFieldSystemMetaDataIteration::Type(UFieldSystemMetaDataIteration *this)

{
  return ECommandData_Iteration;
}

// execSetMetaDataIteration @ 146336340

void __cdecl
UFieldSystemMetaDataIteration::execSetMetaDataIteration
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[4].field_0x20 = local_res8[0];
  *(UObject **)param_3 = param_1;
  return;
}

