// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147365c30

UClass * __cdecl UNullNavSysConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNullNavSysConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NullNavSysConfig",
               &Z_Registration_Info_UClass_UNullNavSysConfig.InnerSingleton,
               StaticRegisterNativesUNullNavSysConfig,0x58,8,CLASS_Intrinsic|CLASS_DefaultConfig,
               CASTCLASS_None,L"Engine",InternalConstructor<UNullNavSysConfig>,
               InternalVTableHelperCtorCaller<UNullNavSysConfig>,local_res8,
               UNavigationSystemConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNullNavSysConfig.InnerSingleton;
}

// UNullNavSysConfig @ 14737ce00

UNullNavSysConfig * __thiscall
UNullNavSysConfig::UNullNavSysConfig(UNullNavSysConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0x7fffffff;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x50 = 0;
  *(undefined ***)this = &___7UNullNavSysConfig__6B_;
  return this;
}

// UNullNavSysConfig @ 14737ce50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UNullNavSysConfig * __thiscall
UNullNavSysConfig::UNullNavSysConfig(UNullNavSysConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNavigationSystemConfig__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0x7fffffff;
  *(undefined4 *)&this->field_0x50 = 0;
  if (GEngine != (UEngine *)0x0) {
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)&this->field_0x28,
               (FSoftObjectPath *)&GEngine->NavigationSystemClassName);
  }
  *(undefined ***)this = &___7UNullNavSysConfig__6B_;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  FUtf8String::Reset((FUtf8String *)&this->field_0x38,0);
  return this;
}

// ~UNullNavSysConfig @ 14737dbe0

void __thiscall UNullNavSysConfig::~UNullNavSysConfig(UNullNavSysConfig *this)

{
  *(undefined ***)this = &___7UNavigationSystemConfig__6B_;
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1473a0d60

UClass * __cdecl UNullNavSysConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNullNavSysConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NullNavSysConfig",
               &Z_Registration_Info_UClass_UNullNavSysConfig.InnerSingleton,
               StaticRegisterNativesUNullNavSysConfig,0x58,8,CLASS_Intrinsic|CLASS_DefaultConfig,
               CASTCLASS_None,L"Engine",InternalConstructor<UNullNavSysConfig>,
               InternalVTableHelperCtorCaller<UNullNavSysConfig>,local_res8,
               UNavigationSystemConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNullNavSysConfig.InnerSingleton;
}

// StaticRegisterNativesUNullNavSysConfig @ 1473b8990

void __cdecl UNullNavSysConfig::StaticRegisterNativesUNullNavSysConfig(void)

{
  return;
}

