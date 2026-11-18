// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147256dc0

UClass * __cdecl UAutoRTFMTestCameraShake::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutoRTFMTestCameraShake.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AutoRTFMTestCameraShake",
               &Z_Registration_Info_UClass_UAutoRTFMTestCameraShake.InnerSingleton,
               StaticRegisterNativesUAutoRTFMTestCameraShake,0xe0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAutoRTFMTestCameraShake>,
               InternalVTableHelperCtorCaller<UAutoRTFMTestCameraShake>,local_res8,
               UCameraShakeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutoRTFMTestCameraShake.InnerSingleton;
}

// UAutoRTFMTestCameraShake @ 14725d090

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UAutoRTFMTestCameraShake * __thiscall
UAutoRTFMTestCameraShake::UAutoRTFMTestCameraShake
          (UAutoRTFMTestCameraShake *this,FVTableHelper *param_1)

{
  UCameraShakeBase::UCameraShakeBase((UCameraShakeBase *)this,param_1);
  *(undefined ***)this = &___7UAutoRTFMTestCameraShake__6B_;
  return this;
}

// UAutoRTFMTestCameraShake @ 14725d0c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UAutoRTFMTestCameraShake * __thiscall
UAutoRTFMTestCameraShake::UAutoRTFMTestCameraShake
          (UAutoRTFMTestCameraShake *this,FObjectInitializer *param_1)

{
  UCameraShakeBase::UCameraShakeBase((UCameraShakeBase *)this,param_1);
  *(undefined ***)this = &___7UAutoRTFMTestCameraShake__6B_;
  return this;
}

// ~UAutoRTFMTestCameraShake @ 14725dda0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UAutoRTFMTestCameraShake::~UAutoRTFMTestCameraShake(UAutoRTFMTestCameraShake *this)

{
  *(undefined ***)this = &___7UAutoRTFMTestCameraShake__6B_;
  UCameraShakeBase::~UCameraShakeBase((UCameraShakeBase *)this);
  return;
}

// GetPrivateStaticClass @ 147260550

UClass * __cdecl UAutoRTFMTestCameraShake::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutoRTFMTestCameraShake.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AutoRTFMTestCameraShake",
               &Z_Registration_Info_UClass_UAutoRTFMTestCameraShake.InnerSingleton,
               StaticRegisterNativesUAutoRTFMTestCameraShake,0xe0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAutoRTFMTestCameraShake>,
               InternalVTableHelperCtorCaller<UAutoRTFMTestCameraShake>,local_res8,
               UCameraShakeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutoRTFMTestCameraShake.InnerSingleton;
}

// StaticRegisterNativesUAutoRTFMTestCameraShake @ 147260f10

void __cdecl UAutoRTFMTestCameraShake::StaticRegisterNativesUAutoRTFMTestCameraShake(void)

{
  return;
}

