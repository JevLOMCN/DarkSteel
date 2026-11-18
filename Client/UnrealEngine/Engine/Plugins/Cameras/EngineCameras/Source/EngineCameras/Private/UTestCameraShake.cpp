// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 6

// StaticClass @ 14ad151b0

UClass * __cdecl UTestCameraShake::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestCameraShake.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"TestCameraShake",
               &Z_Registration_Info_UClass_UTestCameraShake.InnerSingleton,
               StaticRegisterNativesUTestCameraShake,0xe0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTestCameraShake>,
               InternalVTableHelperCtorCaller<UTestCameraShake>,local_res8,
               UCameraShakeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestCameraShake.InnerSingleton;
}

// UTestCameraShake @ 14ad1ec00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UTestCameraShake * __thiscall
UTestCameraShake::UTestCameraShake(UTestCameraShake *this,FVTableHelper *param_1)

{
  UCameraShakeBase::UCameraShakeBase((UCameraShakeBase *)this,param_1);
  *(undefined ***)this = &___7UTestCameraShake__6B_;
  return this;
}

// UTestCameraShake @ 14ad1ec30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UTestCameraShake * __thiscall
UTestCameraShake::UTestCameraShake(UTestCameraShake *this,FObjectInitializer *param_1)

{
  UCameraShakeBase::UCameraShakeBase((UCameraShakeBase *)this,param_1);
  *(undefined ***)this = &___7UTestCameraShake__6B_;
  return this;
}

// ~UTestCameraShake @ 14ad1f030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UTestCameraShake::~UTestCameraShake(UTestCameraShake *this)

{
  *(undefined ***)this = &___7UTestCameraShake__6B_;
  UCameraShakeBase::~UCameraShakeBase((UCameraShakeBase *)this);
  return;
}

// GetPrivateStaticClass @ 14ad222b0

UClass * __cdecl UTestCameraShake::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestCameraShake.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"TestCameraShake",
               &Z_Registration_Info_UClass_UTestCameraShake.InnerSingleton,
               StaticRegisterNativesUTestCameraShake,0xe0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTestCameraShake>,
               InternalVTableHelperCtorCaller<UTestCameraShake>,local_res8,
               UCameraShakeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestCameraShake.InnerSingleton;
}

// StaticRegisterNativesUTestCameraShake @ 14ad23fe0

void __cdecl UTestCameraShake::StaticRegisterNativesUTestCameraShake(void)

{
  return;
}

