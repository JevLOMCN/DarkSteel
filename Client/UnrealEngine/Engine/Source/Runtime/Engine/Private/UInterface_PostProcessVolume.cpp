// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147284a40

UClass * __cdecl UInterface_PostProcessVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInterface_PostProcessVolume.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Interface_PostProcessVolume",
               &Z_Registration_Info_UClass_UInterface_PostProcessVolume.InnerSingleton,
               StaticRegisterNativesUInterface_PostProcessVolume,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterface_PostProcessVolume>,
               InternalVTableHelperCtorCaller<UInterface_PostProcessVolume>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterface_PostProcessVolume.InnerSingleton;
}

// UInterface_PostProcessVolume @ 14728b8e0

UInterface_PostProcessVolume * __thiscall
UInterface_PostProcessVolume::UInterface_PostProcessVolume
          (UInterface_PostProcessVolume *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterface_PostProcessVolume__6B_;
  return this;
}

// ~UInterface_PostProcessVolume @ 14728d260

void __thiscall
UInterface_PostProcessVolume::~UInterface_PostProcessVolume(UInterface_PostProcessVolume *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14728f5c0

UClass * __cdecl UInterface_PostProcessVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterface_PostProcessVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Interface_PostProcessVolume",
               &Z_Registration_Info_UClass_UInterface_PostProcessVolume.InnerSingleton,
               StaticRegisterNativesUInterface_PostProcessVolume,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterface_PostProcessVolume>,
               InternalVTableHelperCtorCaller<UInterface_PostProcessVolume>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterface_PostProcessVolume.InnerSingleton;
}

// StaticRegisterNativesUInterface_PostProcessVolume @ 147291250

void __cdecl UInterface_PostProcessVolume::StaticRegisterNativesUInterface_PostProcessVolume(void)

{
  return;
}

// UInterface_PostProcessVolume @ 147d79950

UInterface_PostProcessVolume * __thiscall
UInterface_PostProcessVolume::UInterface_PostProcessVolume
          (UInterface_PostProcessVolume *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterface_PostProcessVolume__6B_;
  return this;
}

