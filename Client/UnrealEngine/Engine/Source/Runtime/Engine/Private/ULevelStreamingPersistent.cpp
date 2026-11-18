// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1472844e0

UClass * __cdecl ULevelStreamingPersistent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelStreamingPersistent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreamingPersistent",
               &Z_Registration_Info_UClass_ULevelStreamingPersistent.InnerSingleton,
               StaticRegisterNativesULevelStreamingPersistent,0x1f0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelStreamingPersistent>,
               InternalVTableHelperCtorCaller<ULevelStreamingPersistent>,local_res8,
               ULevelStreaming::StaticClass,UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelStreamingPersistent.InnerSingleton;
}

// ULevelStreamingPersistent @ 14728b9d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevelStreamingPersistent * __thiscall
ULevelStreamingPersistent::ULevelStreamingPersistent
          (ULevelStreamingPersistent *this,FVTableHelper *param_1)

{
  ULevelStreaming::ULevelStreaming((ULevelStreaming *)this,param_1);
  *(undefined ***)this = &___7ULevelStreamingPersistent__6B_;
  return this;
}

// ~ULevelStreamingPersistent @ 14728d2d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULevelStreamingPersistent::~ULevelStreamingPersistent(ULevelStreamingPersistent *this)

{
  *(undefined ***)this = &___7ULevelStreamingPersistent__6B_;
  ULevelStreaming::~ULevelStreaming((ULevelStreaming *)this);
  return;
}

// GetPrivateStaticClass @ 14728f980

UClass * __cdecl ULevelStreamingPersistent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelStreamingPersistent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreamingPersistent",
               &Z_Registration_Info_UClass_ULevelStreamingPersistent.InnerSingleton,
               StaticRegisterNativesULevelStreamingPersistent,0x1f0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelStreamingPersistent>,
               InternalVTableHelperCtorCaller<ULevelStreamingPersistent>,local_res8,
               ULevelStreaming::StaticClass,UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelStreamingPersistent.InnerSingleton;
}

// ShouldBeLoaded @ 147291160

bool __thiscall ULevelStreamingPersistent::ShouldBeLoaded(ULevelStreamingPersistent *this)

{
  return true;
}

// ShouldBeVisible @ 147291170

bool __thiscall ULevelStreamingPersistent::ShouldBeVisible(ULevelStreamingPersistent *this)

{
  return true;
}

// StaticRegisterNativesULevelStreamingPersistent @ 1472912d0

void __cdecl ULevelStreamingPersistent::StaticRegisterNativesULevelStreamingPersistent(void)

{
  return;
}

// ULevelStreamingPersistent @ 147e56650

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevelStreamingPersistent * __thiscall
ULevelStreamingPersistent::ULevelStreamingPersistent
          (ULevelStreamingPersistent *this,FObjectInitializer *param_1)

{
  ULevelStreaming::ULevelStreaming((ULevelStreaming *)this,param_1);
  *(undefined ***)this = &___7ULevelStreamingPersistent__6B_;
  return this;
}

