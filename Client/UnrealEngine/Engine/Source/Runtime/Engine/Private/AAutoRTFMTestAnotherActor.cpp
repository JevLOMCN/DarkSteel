// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472569b0

UClass * __cdecl AAutoRTFMTestAnotherActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAutoRTFMTestAnotherActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AutoRTFMTestAnotherActor",
               &Z_Registration_Info_UClass_AAutoRTFMTestAnotherActor.InnerSingleton,
               StaticRegisterNativesAAutoRTFMTestAnotherActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AAutoRTFMTestAnotherActor>,
               InternalVTableHelperCtorCaller<AAutoRTFMTestAnotherActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAutoRTFMTestAnotherActor.InnerSingleton;
}

// AAutoRTFMTestAnotherActor @ 14725c810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AAutoRTFMTestAnotherActor * __thiscall
AAutoRTFMTestAnotherActor::AAutoRTFMTestAnotherActor
          (AAutoRTFMTestAnotherActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->Value = 0x2a;
  this->_padding_ = (longlong)&___7AAutoRTFMTestAnotherActor__6B_;
  return this;
}

// AAutoRTFMTestAnotherActor @ 14725c850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AAutoRTFMTestAnotherActor * __thiscall
AAutoRTFMTestAnotherActor::AAutoRTFMTestAnotherActor
          (AAutoRTFMTestAnotherActor *this,FObjectInitializer *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->Value = 0x2a;
  this->_padding_ = (longlong)&___7AAutoRTFMTestAnotherActor__6B_;
  return this;
}

// ~AAutoRTFMTestAnotherActor @ 14725d910

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
AAutoRTFMTestAnotherActor::~AAutoRTFMTestAnotherActor(AAutoRTFMTestAnotherActor *this)

{
  this->_padding_ = (longlong)&___7AAutoRTFMTestAnotherActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14725fb00

UClass * __cdecl AAutoRTFMTestAnotherActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAutoRTFMTestAnotherActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AutoRTFMTestAnotherActor",
               &Z_Registration_Info_UClass_AAutoRTFMTestAnotherActor.InnerSingleton,
               StaticRegisterNativesAAutoRTFMTestAnotherActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AAutoRTFMTestAnotherActor>,
               InternalVTableHelperCtorCaller<AAutoRTFMTestAnotherActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAutoRTFMTestAnotherActor.InnerSingleton;
}

// StaticRegisterNativesAAutoRTFMTestAnotherActor @ 147260dd0

void __cdecl AAutoRTFMTestAnotherActor::StaticRegisterNativesAAutoRTFMTestAnotherActor(void)

{
  return;
}

