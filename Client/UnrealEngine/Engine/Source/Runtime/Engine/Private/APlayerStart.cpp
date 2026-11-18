// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148332a60

UClass * __cdecl APlayerStart::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APlayerStart.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlayerStart",
               &Z_Registration_Info_UClass_APlayerStart.InnerSingleton,
               StaticRegisterNativesAPlayerStart,0x2f0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<APlayerStart>,
               InternalVTableHelperCtorCaller<APlayerStart>,local_res8,
               ANavigationObjectBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APlayerStart.InnerSingleton;
}

// APlayerStart @ 148349a00

APlayerStart * __thiscall APlayerStart::APlayerStart(APlayerStart *this,FVTableHelper *param_1)

{
  ANavigationObjectBase::ANavigationObjectBase((ANavigationObjectBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  (this->PlayerStartTag).ComparisonIndex = 0;
  (this->PlayerStartTag).Number = 0;
  return this;
}

// APlayerStart @ 148349a40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APlayerStart * __thiscall APlayerStart::APlayerStart(APlayerStart *this,FObjectInitializer *param_1)

{
  longlong lVar1;
  
  ANavigationObjectBase::ANavigationObjectBase((ANavigationObjectBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  (this->PlayerStartTag).ComparisonIndex = 0;
  (this->PlayerStartTag).Number = 0;
  lVar1 = this->_padding_;
  *(undefined4 *)(lVar1 + 0x56c) = 0x42200000;
  *(undefined4 *)(lVar1 + 0x568) = 0x42b80000;
  USceneComponent::SetShouldUpdatePhysicsVolume((USceneComponent *)this->_padding_,false);
  return this;
}

// ~APlayerStart @ 14834d260

void __thiscall APlayerStart::~APlayerStart(APlayerStart *this)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  ANavigationObjectBase::~ANavigationObjectBase((ANavigationObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 148386d50

UClass * __cdecl APlayerStart::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APlayerStart.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlayerStart",
               &Z_Registration_Info_UClass_APlayerStart.InnerSingleton,
               StaticRegisterNativesAPlayerStart,0x2f0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<APlayerStart>,
               InternalVTableHelperCtorCaller<APlayerStart>,local_res8,
               ANavigationObjectBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APlayerStart.InnerSingleton;
}

// StaticRegisterNativesAPlayerStart @ 1483af670

void __cdecl APlayerStart::StaticRegisterNativesAPlayerStart(void)

{
  return;
}

