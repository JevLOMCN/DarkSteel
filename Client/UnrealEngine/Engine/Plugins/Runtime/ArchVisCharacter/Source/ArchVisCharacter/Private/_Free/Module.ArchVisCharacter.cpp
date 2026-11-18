// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ArchVisCharacter
// Functions: 32

// `dynamic_initializer_for_'ModuleRegistrantArchVisCharacter'' @ 14144fc10

void __cdecl _dynamic_initializer_for__ModuleRegistrantArchVisCharacter__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ArchVisCharacter";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ArchVisCharacter",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FArchVisCharacterPlugin>::InitializeModule)
  ;
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharMovementComponent_h__Script_ArchVisCharacter_2397419000'' @ 14144fc60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharMovementComponent_h__Script_ArchVisCharacter_2397419000__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ArchVisCharacter",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharMovementComponent_h__Script_ArchVisCharacter_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharacter_h__Script_ArchVisCharacter_3205466773'' @ 14144fca0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharacter_h__Script_ArchVisCharacter_3205466773__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ArchVisCharacter",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharacter_h__Script_ArchVisCharacter_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ArchVisCharacter'' @ 14144fce0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ArchVisCharacter__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x268b2a1c;
  local_res8[0].DeclarationsHash = 0xad3df3f7;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ArchVisCharacter,L"/Script/ArchVisCharacter",
             &Z_Registration_Info_UPackage__Script_ArchVisCharacter,local_res8);
  return;
}

// Z_Construct_UClass_AArchVisCharacter @ 14f00d0f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AArchVisCharacter(void)

{
  if (Z_Registration_Info_UClass_AArchVisCharacter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AArchVisCharacter.OuterSingleton,
               &Z_Construct_UClass_AArchVisCharacter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AArchVisCharacter.OuterSingleton;
}

// Z_Construct_UPackage__Script_ArchVisCharacter @ 14f00d150

UPackage * __cdecl Z_Construct_UPackage__Script_ArchVisCharacter(void)

{
  if (Z_Registration_Info_UPackage__Script_ArchVisCharacter.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ArchVisCharacter.OuterSingleton,&PackageParams)
    ;
  }
  return Z_Registration_Info_UPackage__Script_ArchVisCharacter.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14f00d190

void * __thiscall
FArchVisCharacterPlugin::_scalar_deleting_destructor_(FArchVisCharacterPlugin *this,uint param_1)

{
  *this = (FArchVisCharacterPlugin)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UArchVisCharMovementComponent @ 14f00d1d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UArchVisCharMovementComponent(void)

{
  if (Z_Registration_Info_UClass_UArchVisCharMovementComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UArchVisCharMovementComponent.OuterSingleton,
               &Z_Construct_UClass_UArchVisCharMovementComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UArchVisCharMovementComponent.OuterSingleton;
}

// InternalConstructor<AArchVisCharacter> @ 14f00d760

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<AArchVisCharacter>(FObjectInitializer *param_1)

{
  ACharacter *this;
  FName FVar1;
  UClass *pUVar2;
  
  FVar1 = ACharacter::CharacterMovementComponentName;
  this = (ACharacter *)param_1->Obj;
  if (this != (ACharacter *)0x0) {
    pUVar2 = UArchVisCharMovementComponent::StaticClass();
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar1,pUVar2,(TArrayView<FName_const_,int> *)0x0);
    ACharacter::ACharacter(this,param_1);
    *(undefined ***)this = &AArchVisCharacter::_vftable__for__AActor__;
    *(undefined ***)&this->field_0x2c0 = &AArchVisCharacter::_vftable__for__INavAgentInterface__;
    *(undefined8 *)&this->field_0x678 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    *(undefined8 *)&this[1].field_0x48 = 0;
    *(undefined8 *)&this[1].field_0x50 = 0;
    FString::operator=((FString *)&this[1].field_0x18,L"Turn");
    FString::operator=((FString *)&this[1].field_0x28,L"TurnRate");
    FString::operator=((FString *)&this->field_0x678,L"LookUp");
    FString::operator=((FString *)&this[1].field_0x8,L"LookUpRate");
    FString::operator=((FString *)&this[1].field_0x38,L"MoveForward");
    FString::operator=((FString *)&this[1].field_0x48,L"MoveRight");
    *(uint *)&this->field_0x2c8 = *(uint *)&this->field_0x2c8 & 0xfffffff8;
    *(undefined4 *)&this[1].field_0x58 = 0x3ccccccd;
    *(undefined4 *)&this[1].field_0x5c = 0x3ccccccd;
  }
  return;
}

// InternalConstructor<UArchVisCharMovementComponent> @ 14f00d8e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UArchVisCharMovementComponent>(FObjectInitializer *param_1)

{
  UCharacterMovementComponent *this;
  
  this = (UCharacterMovementComponent *)param_1->Obj;
  if (this != (UCharacterMovementComponent *)0x0) {
    UCharacterMovementComponent::UCharacterMovementComponent(this,param_1);
    *(undefined ***)this = &UArchVisCharMovementComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UArchVisCharMovementComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UArchVisCharMovementComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x128 =
         &UArchVisCharMovementComponent::_vftable__for__UPawnMovementComponent__;
    *(undefined ***)&this->field_0x190 =
         &UArchVisCharMovementComponent::_vftable__for__IRVOAvoidanceInterface__;
    *(undefined ***)&this->field_0x198 =
         &UArchVisCharMovementComponent::_vftable__for__INetworkPredictionInterface__;
    *(undefined8 *)&this->field_0xff8 = 0x4072c00000000000;
    *(undefined8 *)(this + 1) = 0x4072c00000000000;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0x4072c00000000000;
    *(undefined8 *)&this[1].field_0x18 = 0x4072c00000000000;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0x4054000000000000;
    *(undefined8 *)&this[1].field_0x30 = 0x4059000000000000;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined4 *)&this[1].field_0x40 = 0xc2aa0000;
    *(undefined4 *)&this[1].field_0x44 = 0x42aa0000;
    *(undefined4 *)&this[1].field_0x48 = 0x40800000;
    *(undefined4 *)&this[1].field_0x4c = 0x43250000;
    *(undefined4 *)&this[1].field_0x50 = 0x43fa0000;
    this->BrakingDecelerationWalking = 0.0;
  }
  return;
}

// InternalVTableHelperCtorCaller<AArchVisCharacter> @ 14f00d9f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AArchVisCharacter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ACharacter *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AArchVisCharacter::GetPrivateStaticClass();
  this = (ACharacter *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ACharacter *)0x0) {
    ACharacter::ACharacter(this,param_1);
    *(undefined ***)this = &AArchVisCharacter::_vftable__for__AActor__;
    *(undefined ***)&this->field_0x2c0 = &AArchVisCharacter::_vftable__for__INavAgentInterface__;
    *(undefined8 *)&this->field_0x678 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    *(undefined8 *)&this[1].field_0x48 = 0;
    *(undefined8 *)&this[1].field_0x50 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UArchVisCharMovementComponent> @ 14f00db00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UArchVisCharMovementComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCharacterMovementComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UArchVisCharMovementComponent::GetPrivateStaticClass();
  this = (UCharacterMovementComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCharacterMovementComponent *)0x0) {
    UCharacterMovementComponent::UCharacterMovementComponent(this,param_1);
    *(undefined ***)this = &UArchVisCharMovementComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UArchVisCharMovementComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UArchVisCharMovementComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x128 =
         &UArchVisCharMovementComponent::_vftable__for__UPawnMovementComponent__;
    *(undefined ***)&this->field_0x190 =
         &UArchVisCharMovementComponent::_vftable__for__IRVOAvoidanceInterface__;
    *(undefined ***)&this->field_0x198 =
         &UArchVisCharMovementComponent::_vftable__for__INetworkPredictionInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// `vcall'{2536,{flat}}'_}' @ 14f00e058

/* [thunk]: __cdecl AArchVisCharacter::`vcall'{2536,{flat}}' }' */

void __thiscall AArchVisCharacter::_vcall__2536__flat______(AArchVisCharacter *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f00e05b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x9e8))();
  return;
}

// `vcall'{2544,{flat}}'_}' @ 14f00e068

/* [thunk]: __cdecl AArchVisCharacter::`vcall'{2544,{flat}}' }' */

void __thiscall AArchVisCharacter::_vcall__2544__flat______(AArchVisCharacter *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f00e06b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x9f0))();
  return;
}

// `vcall'{2552,{flat}}'_}' @ 14f00e078

/* [thunk]: __cdecl AArchVisCharacter::`vcall'{2552,{flat}}' }' */

void __thiscall AArchVisCharacter::_vcall__2552__flat______(AArchVisCharacter *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f00e07b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x9f8))();
  return;
}

// `vcall'{2560,{flat}}'_}' @ 14f00e088

/* [thunk]: __cdecl AArchVisCharacter::`vcall'{2560,{flat}}' }' */

void __thiscall AArchVisCharacter::_vcall__2560__flat______(AArchVisCharacter *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f00e08b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xa00))();
  return;
}

// `vcall'{2568,{flat}}'_}' @ 14f00e098

/* [thunk]: __cdecl AArchVisCharacter::`vcall'{2568,{flat}}' }' */

void __thiscall AArchVisCharacter::_vcall__2568__flat______(AArchVisCharacter *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f00e09b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xa08))();
  return;
}

// `vcall'{2576,{flat}}'_}' @ 14f00e0a8

/* [thunk]: __cdecl AArchVisCharacter::`vcall'{2576,{flat}}' }' */

void __thiscall AArchVisCharacter::_vcall__2576__flat______(AArchVisCharacter *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f00e0ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xa10))();
  return;
}

// `vector_deleting_destructor'`adjustor{704}' @ 14f00e0b8

/* [thunk]:public: virtual void * __ptr64 __cdecl AArchVisCharacter::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
AArchVisCharacter::_vector_deleting_destructor__adjustor_704__(AArchVisCharacter *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((AArchVisCharacter *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{296}' @ 14f00e0cc

/* [thunk]:public: virtual void * __ptr64 __cdecl UArchVisCharMovementComponent::`vector deleting
   destructor'`adjustor{296}' (unsigned int) __ptr64 */

void * __thiscall
UArchVisCharMovementComponent::_vector_deleting_destructor__adjustor_296__
          (UArchVisCharMovementComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UArchVisCharMovementComponent *)&this[-1].field_0xf68,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{400}' @ 14f00e0e0

/* [thunk]:public: virtual void * __ptr64 __cdecl UArchVisCharMovementComponent::`vector deleting
   destructor'`adjustor{400}' (unsigned int) __ptr64 */

void * __thiscall
UArchVisCharMovementComponent::_vector_deleting_destructor__adjustor_400__
          (UArchVisCharMovementComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UArchVisCharMovementComponent *)&this[-1].field_0xf00,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{408}' @ 14f00e0f4

/* [thunk]:public: virtual void * __ptr64 __cdecl UArchVisCharMovementComponent::`vector deleting
   destructor'`adjustor{408}' (unsigned int) __ptr64 */

void * __thiscall
UArchVisCharMovementComponent::_vector_deleting_destructor__adjustor_408__
          (UArchVisCharMovementComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UArchVisCharMovementComponent *)&this[-1].field_0xef8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14f00e108

/* [thunk]:public: virtual void * __ptr64 __cdecl UArchVisCharMovementComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UArchVisCharMovementComponent::_vector_deleting_destructor__adjustor_40__
          (UArchVisCharMovementComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UArchVisCharMovementComponent *)&this[-1].CurrentRotationalVelocity.Roll,
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f00e120

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AArchVisCharacter,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AArchVisCharacter,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f00e150

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
AArchVisCharacter::_scalar_deleting_destructor_(AArchVisCharacter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  pFVar1 = (this->MoveRightAxisName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MoveForwardAxisName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TurnAtRateAxisName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TurnAxisName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LookUpAtRateAxisName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LookUpAxisName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ACharacter::~ACharacter((ACharacter *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x6e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f00e230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UArchVisCharMovementComponent::_scalar_deleting_destructor_
          (UArchVisCharMovementComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x128 = &_vftable__for__UPawnMovementComponent__;
  *(undefined ***)&this->field_0x190 = &_vftable__for__IRVOAvoidanceInterface__;
  *(undefined ***)&this->field_0x198 = &_vftable__for__INetworkPredictionInterface__;
  UCharacterMovementComponent::~UCharacterMovementComponent((UCharacterMovementComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1090);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeArchVisCharMovementComponent @ 14f00e4b0

void __cdecl EmptyLinkFunctionForGeneratedCodeArchVisCharMovementComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeArchVisCharacter @ 14f00e4c0

void __cdecl EmptyLinkFunctionForGeneratedCodeArchVisCharacter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeArchVisCharacter_init @ 14f00e4d0

void __cdecl EmptyLinkFunctionForGeneratedCodeArchVisCharacter_init(void)

{
  return;
}

// Z_Construct_UClass_AArchVisCharacter_NoRegister @ 14f00f4f0

UClass * __cdecl Z_Construct_UClass_AArchVisCharacter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AArchVisCharacter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ArchVisCharacter",L"ArchVisCharacter",
               &Z_Registration_Info_UClass_AArchVisCharacter.InnerSingleton,
               AArchVisCharacter::StaticRegisterNativesAArchVisCharacter,0x6e0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<AArchVisCharacter>,
               InternalVTableHelperCtorCaller<AArchVisCharacter>,local_res8,ACharacter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AArchVisCharacter.InnerSingleton;
}

// Z_Construct_UClass_UArchVisCharMovementComponent_NoRegister @ 14f00f5b0

UClass * __cdecl Z_Construct_UClass_UArchVisCharMovementComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UArchVisCharMovementComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UCharacterMovementComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ArchVisCharacter",L"ArchVisCharMovementComponent",
               &Z_Registration_Info_UClass_UArchVisCharMovementComponent.InnerSingleton,
               UArchVisCharMovementComponent::StaticRegisterNativesUArchVisCharMovementComponent,
               0x1090,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UArchVisCharMovementComponent>,
               InternalVTableHelperCtorCaller<UArchVisCharMovementComponent>,local_res8,
               UCharacterMovementComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UArchVisCharMovementComponent.InnerSingleton;
}

// IMPLEMENT_MODULE_ArchVisCharacter @ 14f00f670

void __cdecl IMPLEMENT_MODULE_ArchVisCharacter(void)

{
  return;
}

