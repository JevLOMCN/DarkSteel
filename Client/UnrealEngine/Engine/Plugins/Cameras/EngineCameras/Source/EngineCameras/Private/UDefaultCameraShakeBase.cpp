// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 6

// StaticClass @ 14ad15ef0

UClass * __cdecl UDefaultCameraShakeBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDefaultCameraShakeBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"DefaultCameraShakeBase",
               &Z_Registration_Info_UClass_UDefaultCameraShakeBase.InnerSingleton,
               StaticRegisterNativesUDefaultCameraShakeBase,0xe0,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDefaultCameraShakeBase>,
               InternalVTableHelperCtorCaller<UDefaultCameraShakeBase>,local_res8,
               UCameraShakeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDefaultCameraShakeBase.InnerSingleton;
}

// UDefaultCameraShakeBase @ 14ad1e5b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UDefaultCameraShakeBase * __thiscall
UDefaultCameraShakeBase::UDefaultCameraShakeBase
          (UDefaultCameraShakeBase *this,FVTableHelper *param_1)

{
  UCameraShakeBase::UCameraShakeBase((UCameraShakeBase *)this,param_1);
  *(undefined ***)this = &___7UDefaultCameraShakeBase__6B_;
  return this;
}

// UDefaultCameraShakeBase @ 14ad1e5e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UDefaultCameraShakeBase * __thiscall
UDefaultCameraShakeBase::UDefaultCameraShakeBase
          (UDefaultCameraShakeBase *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,L"RootShakePattern");
  FVar1 = *pFVar2;
  pUVar3 = UPerlinNoiseCameraShakePattern::StaticClass();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar1,pUVar3,(TArrayView<FName_const_,int> *)0x0);
  UCameraShakeBase::UCameraShakeBase((UCameraShakeBase *)this,param_1);
  *(undefined ***)this = &___7UDefaultCameraShakeBase__6B_;
  return this;
}

// ~UDefaultCameraShakeBase @ 14ad1ef30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UDefaultCameraShakeBase::~UDefaultCameraShakeBase(UDefaultCameraShakeBase *this)

{
  *(undefined ***)this = &___7UDefaultCameraShakeBase__6B_;
  UCameraShakeBase::~UCameraShakeBase((UCameraShakeBase *)this);
  return;
}

// GetPrivateStaticClass @ 14ad21cb0

UClass * __cdecl UDefaultCameraShakeBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDefaultCameraShakeBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"DefaultCameraShakeBase",
               &Z_Registration_Info_UClass_UDefaultCameraShakeBase.InnerSingleton,
               StaticRegisterNativesUDefaultCameraShakeBase,0xe0,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDefaultCameraShakeBase>,
               InternalVTableHelperCtorCaller<UDefaultCameraShakeBase>,local_res8,
               UCameraShakeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDefaultCameraShakeBase.InnerSingleton;
}

// StaticRegisterNativesUDefaultCameraShakeBase @ 14ad23ea0

void __cdecl UDefaultCameraShakeBase::StaticRegisterNativesUDefaultCameraShakeBase(void)

{
  return;
}

