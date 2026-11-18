// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticClass @ 146f0dbf0

UClass * __cdecl UEnvQueryContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryContext",
               &Z_Registration_Info_UClass_UEnvQueryContext.InnerSingleton,
               StaticRegisterNativesUEnvQueryContext,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryContext>,
               InternalVTableHelperCtorCaller<UEnvQueryContext>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryContext.InnerSingleton;
}

// UEnvQueryContext @ 146f2a380

UEnvQueryContext * __thiscall
UEnvQueryContext::UEnvQueryContext(UEnvQueryContext *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEnvQueryContext__6B_;
  return this;
}

// UEnvQueryContext @ 146f2a3b0

UEnvQueryContext * __thiscall
UEnvQueryContext::UEnvQueryContext(UEnvQueryContext *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEnvQueryContext__6B_;
  return this;
}

// ~UEnvQueryContext @ 146f2e870

void __thiscall UEnvQueryContext::~UEnvQueryContext(UEnvQueryContext *this)

{
  *(undefined ***)this = &___7UEnvQueryContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146f57ab0

UClass * __cdecl UEnvQueryContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryContext",
               &Z_Registration_Info_UClass_UEnvQueryContext.InnerSingleton,
               StaticRegisterNativesUEnvQueryContext,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryContext>,
               InternalVTableHelperCtorCaller<UEnvQueryContext>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryContext.InnerSingleton;
}

// ProvideContext @ 146f63580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnvQueryContext::ProvideContext
          (UEnvQueryContext *this,FEnvQueryInstance *param_1,FEnvQueryContextData *param_2)

{
  return;
}

// StaticRegisterNativesUEnvQueryContext @ 146f76c40

void __cdecl UEnvQueryContext::StaticRegisterNativesUEnvQueryContext(void)

{
  return;
}

