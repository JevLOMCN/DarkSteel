// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// StaticClass @ 14d535c80

UClass * __cdecl UHasCameraBuildStatus::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UHasCameraBuildStatus.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"HasCameraBuildStatus",
               &Z_Registration_Info_UClass_UHasCameraBuildStatus.InnerSingleton,
               StaticRegisterNativesUHasCameraBuildStatus,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UHasCameraBuildStatus>,
               InternalVTableHelperCtorCaller<UHasCameraBuildStatus>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHasCameraBuildStatus.InnerSingleton;
}

// UHasCameraBuildStatus @ 14d543c60

UHasCameraBuildStatus * __thiscall
UHasCameraBuildStatus::UHasCameraBuildStatus(UHasCameraBuildStatus *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UHasCameraBuildStatus__6B_;
  return this;
}

// UHasCameraBuildStatus @ 14d543c90

UHasCameraBuildStatus * __thiscall
UHasCameraBuildStatus::UHasCameraBuildStatus
          (UHasCameraBuildStatus *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UHasCameraBuildStatus__6B_;
  return this;
}

// ~UHasCameraBuildStatus @ 14d544c50

void __thiscall UHasCameraBuildStatus::~UHasCameraBuildStatus(UHasCameraBuildStatus *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14d558810

UClass * __cdecl UHasCameraBuildStatus::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHasCameraBuildStatus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"HasCameraBuildStatus",
               &Z_Registration_Info_UClass_UHasCameraBuildStatus.InnerSingleton,
               StaticRegisterNativesUHasCameraBuildStatus,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UHasCameraBuildStatus>,
               InternalVTableHelperCtorCaller<UHasCameraBuildStatus>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHasCameraBuildStatus.InnerSingleton;
}

// StaticRegisterNativesUHasCameraBuildStatus @ 14d568600

void __cdecl UHasCameraBuildStatus::StaticRegisterNativesUHasCameraBuildStatus(void)

{
  return;
}

