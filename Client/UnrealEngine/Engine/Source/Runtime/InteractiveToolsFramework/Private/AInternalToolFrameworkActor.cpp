// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14962e290

UClass * __cdecl AInternalToolFrameworkActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AInternalToolFrameworkActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InternalToolFrameworkActor",
               &Z_Registration_Info_UClass_AInternalToolFrameworkActor.InnerSingleton,
               StaticRegisterNativesAInternalToolFrameworkActor,0x2c8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AInternalToolFrameworkActor>,
               InternalVTableHelperCtorCaller<AInternalToolFrameworkActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AInternalToolFrameworkActor.InnerSingleton;
}

// AInternalToolFrameworkActor @ 149638a60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AInternalToolFrameworkActor * __thiscall
AInternalToolFrameworkActor::AInternalToolFrameworkActor
          (AInternalToolFrameworkActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->bIsSelectableInEditor = false;
  this->_padding_ = (longlong)&___7AInternalToolFrameworkActor__6B_;
  return this;
}

// AInternalToolFrameworkActor @ 149638a90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AInternalToolFrameworkActor * __thiscall
AInternalToolFrameworkActor::AInternalToolFrameworkActor
          (AInternalToolFrameworkActor *this,FObjectInitializer *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->bIsSelectableInEditor = false;
  this->_padding_ = (longlong)&___7AInternalToolFrameworkActor__6B_;
  return this;
}

// ~AInternalToolFrameworkActor @ 14963dd50

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
AInternalToolFrameworkActor::~AInternalToolFrameworkActor(AInternalToolFrameworkActor *this)

{
  this->_padding_ = (longlong)&___7AInternalToolFrameworkActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 1496554d0

UClass * __cdecl AInternalToolFrameworkActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AInternalToolFrameworkActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InternalToolFrameworkActor",
               &Z_Registration_Info_UClass_AInternalToolFrameworkActor.InnerSingleton,
               StaticRegisterNativesAInternalToolFrameworkActor,0x2c8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AInternalToolFrameworkActor>,
               InternalVTableHelperCtorCaller<AInternalToolFrameworkActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AInternalToolFrameworkActor.InnerSingleton;
}

// StaticRegisterNativesAInternalToolFrameworkActor @ 149664970

void __cdecl AInternalToolFrameworkActor::StaticRegisterNativesAInternalToolFrameworkActor(void)

{
  return;
}

