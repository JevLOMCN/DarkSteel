// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// StaticClass @ 14d56ef90

UClass * __cdecl UCustomCameraNodeParameterProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomCameraNodeParameterProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CustomCameraNodeParameterProvider",
               &Z_Registration_Info_UClass_UCustomCameraNodeParameterProvider.InnerSingleton,
               StaticRegisterNativesUCustomCameraNodeParameterProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCustomCameraNodeParameterProvider>,
               InternalVTableHelperCtorCaller<UCustomCameraNodeParameterProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomCameraNodeParameterProvider.InnerSingleton;
}

// UCustomCameraNodeParameterProvider @ 14d58fbd0

UCustomCameraNodeParameterProvider * __thiscall
UCustomCameraNodeParameterProvider::UCustomCameraNodeParameterProvider
          (UCustomCameraNodeParameterProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UCustomCameraNodeParameterProvider__6B_;
  return this;
}

// UCustomCameraNodeParameterProvider @ 14d58fc00

UCustomCameraNodeParameterProvider * __thiscall
UCustomCameraNodeParameterProvider::UCustomCameraNodeParameterProvider
          (UCustomCameraNodeParameterProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UCustomCameraNodeParameterProvider__6B_;
  return this;
}

// ~UCustomCameraNodeParameterProvider @ 14d591e30

void __thiscall
UCustomCameraNodeParameterProvider::~UCustomCameraNodeParameterProvider
          (UCustomCameraNodeParameterProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14d5a9e90

UClass * __cdecl UCustomCameraNodeParameterProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomCameraNodeParameterProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CustomCameraNodeParameterProvider",
               &Z_Registration_Info_UClass_UCustomCameraNodeParameterProvider.InnerSingleton,
               StaticRegisterNativesUCustomCameraNodeParameterProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCustomCameraNodeParameterProvider>,
               InternalVTableHelperCtorCaller<UCustomCameraNodeParameterProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomCameraNodeParameterProvider.InnerSingleton;
}

// StaticRegisterNativesUCustomCameraNodeParameterProvider @ 14d5d0e50

void __cdecl
UCustomCameraNodeParameterProvider::StaticRegisterNativesUCustomCameraNodeParameterProvider(void)

{
  return;
}

