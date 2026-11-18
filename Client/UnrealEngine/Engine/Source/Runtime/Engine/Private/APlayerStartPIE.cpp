// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1483359a0

UClass * __cdecl APlayerStartPIE::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APlayerStartPIE.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlayerStartPIE",
               &Z_Registration_Info_UClass_APlayerStartPIE.InnerSingleton,
               StaticRegisterNativesAPlayerStartPIE,0x2f0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APlayerStartPIE>,
               InternalVTableHelperCtorCaller<APlayerStartPIE>,local_res8,APlayerStart::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APlayerStartPIE.InnerSingleton;
}

// APlayerStartPIE @ 148349ab0

APlayerStartPIE * __thiscall
APlayerStartPIE::APlayerStartPIE(APlayerStartPIE *this,FVTableHelper *param_1)

{
  ANavigationObjectBase::ANavigationObjectBase((ANavigationObjectBase *)this,param_1);
  *(undefined8 *)&this->field_0x2e8 = 0;
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  return this;
}

// APlayerStartPIE @ 148349af0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APlayerStartPIE * __thiscall
APlayerStartPIE::APlayerStartPIE(APlayerStartPIE *this,FObjectInitializer *param_1)

{
  longlong lVar1;
  
  ANavigationObjectBase::ANavigationObjectBase((ANavigationObjectBase *)this,param_1);
  *(undefined ***)this = &APlayerStart::_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &APlayerStart::_vftable__for__INavAgentInterface__;
  *(undefined8 *)&this->field_0x2e8 = 0;
  lVar1 = *(longlong *)&this->field_0x2c8;
  *(undefined4 *)(lVar1 + 0x56c) = 0x42200000;
  *(undefined4 *)(lVar1 + 0x568) = 0x42b80000;
  USceneComponent::SetShouldUpdatePhysicsVolume(*(USceneComponent **)&this->field_0x2c8,false);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  return this;
}

// ~APlayerStartPIE @ 14834d290

void __thiscall APlayerStartPIE::~APlayerStartPIE(APlayerStartPIE *this)

{
  *(undefined ***)this = &APlayerStart::_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &APlayerStart::_vftable__for__INavAgentInterface__;
  ANavigationObjectBase::~ANavigationObjectBase((ANavigationObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 148386e10

UClass * __cdecl APlayerStartPIE::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APlayerStartPIE.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlayerStartPIE",
               &Z_Registration_Info_UClass_APlayerStartPIE.InnerSingleton,
               StaticRegisterNativesAPlayerStartPIE,0x2f0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APlayerStartPIE>,
               InternalVTableHelperCtorCaller<APlayerStartPIE>,local_res8,APlayerStart::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APlayerStartPIE.InnerSingleton;
}

// StaticRegisterNativesAPlayerStartPIE @ 1483af680

void __cdecl APlayerStartPIE::StaticRegisterNativesAPlayerStartPIE(void)

{
  return;
}

