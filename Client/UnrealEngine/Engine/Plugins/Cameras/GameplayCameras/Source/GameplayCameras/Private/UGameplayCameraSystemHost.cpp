// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// StaticClass @ 14d5e20f0

UClass * __cdecl UGameplayCameraSystemHost::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayCameraSystemHost.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCameraSystemHost",
               &Z_Registration_Info_UClass_UGameplayCameraSystemHost.InnerSingleton,
               StaticRegisterNativesUGameplayCameraSystemHost,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayCameraSystemHost>,
               InternalVTableHelperCtorCaller<UGameplayCameraSystemHost>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayCameraSystemHost.InnerSingleton;
}

// UGameplayCameraSystemHost @ 14d5fe7d0

UGameplayCameraSystemHost * __thiscall
UGameplayCameraSystemHost::UGameplayCameraSystemHost
          (UGameplayCameraSystemHost *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGameplayCameraSystemHost__6B_;
  return this;
}

// UGameplayCameraSystemHost @ 14d5fe800

UGameplayCameraSystemHost * __thiscall
UGameplayCameraSystemHost::UGameplayCameraSystemHost
          (UGameplayCameraSystemHost *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGameplayCameraSystemHost__6B_;
  return this;
}

// ~UGameplayCameraSystemHost @ 14d600c70

void __thiscall
UGameplayCameraSystemHost::~UGameplayCameraSystemHost(UGameplayCameraSystemHost *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14d61c8a0

UClass * __cdecl UGameplayCameraSystemHost::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayCameraSystemHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCameraSystemHost",
               &Z_Registration_Info_UClass_UGameplayCameraSystemHost.InnerSingleton,
               StaticRegisterNativesUGameplayCameraSystemHost,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayCameraSystemHost>,
               InternalVTableHelperCtorCaller<UGameplayCameraSystemHost>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayCameraSystemHost.InnerSingleton;
}

// StaticRegisterNativesUGameplayCameraSystemHost @ 14d639310

void __cdecl UGameplayCameraSystemHost::StaticRegisterNativesUGameplayCameraSystemHost(void)

{
  return;
}

