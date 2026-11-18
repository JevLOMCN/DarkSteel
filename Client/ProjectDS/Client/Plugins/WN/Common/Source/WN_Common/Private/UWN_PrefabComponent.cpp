// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 6

// StaticClass @ 149484f00

UClass * __cdecl UWN_PrefabComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UWN_PrefabComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_PrefabComponent",
               &Z_Registration_Info_UClass_UWN_PrefabComponent.InnerSingleton,
               StaticRegisterNativesUWN_PrefabComponent,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_PrefabComponent>,
               InternalVTableHelperCtorCaller<UWN_PrefabComponent>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_PrefabComponent.InnerSingleton;
}

// UWN_PrefabComponent @ 14948e7a0

UWN_PrefabComponent * __thiscall
UWN_PrefabComponent::UWN_PrefabComponent(UWN_PrefabComponent *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UWN_PrefabComponent__6B_;
  return this;
}

// UWN_PrefabComponent @ 14948e7d0

UWN_PrefabComponent * __thiscall
UWN_PrefabComponent::UWN_PrefabComponent(UWN_PrefabComponent *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UWN_PrefabComponent__6B_;
  return this;
}

// ~UWN_PrefabComponent @ 149490990

void __thiscall UWN_PrefabComponent::~UWN_PrefabComponent(UWN_PrefabComponent *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1494a1c00

UClass * __cdecl UWN_PrefabComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_PrefabComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_PrefabComponent",
               &Z_Registration_Info_UClass_UWN_PrefabComponent.InnerSingleton,
               StaticRegisterNativesUWN_PrefabComponent,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_PrefabComponent>,
               InternalVTableHelperCtorCaller<UWN_PrefabComponent>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_PrefabComponent.InnerSingleton;
}

// StaticRegisterNativesUWN_PrefabComponent @ 1494ae2f0

void __cdecl UWN_PrefabComponent::StaticRegisterNativesUWN_PrefabComponent(void)

{
  return;
}

