// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 6

// StaticClass @ 14d981800

UClass * __cdecl UAudioComponentGroupExtension::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioComponentGroupExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioComponentGroupExtension",
               &Z_Registration_Info_UClass_UAudioComponentGroupExtension.InnerSingleton,
               StaticRegisterNativesUAudioComponentGroupExtension,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioComponentGroupExtension>,
               InternalVTableHelperCtorCaller<UAudioComponentGroupExtension>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioComponentGroupExtension.InnerSingleton;
}

// UAudioComponentGroupExtension @ 14d987b50

UAudioComponentGroupExtension * __thiscall
UAudioComponentGroupExtension::UAudioComponentGroupExtension
          (UAudioComponentGroupExtension *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAudioComponentGroupExtension__6B_;
  return this;
}

// UAudioComponentGroupExtension @ 14d987b80

UAudioComponentGroupExtension * __thiscall
UAudioComponentGroupExtension::UAudioComponentGroupExtension
          (UAudioComponentGroupExtension *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAudioComponentGroupExtension__6B_;
  return this;
}

// ~UAudioComponentGroupExtension @ 14d988750

void __thiscall
UAudioComponentGroupExtension::~UAudioComponentGroupExtension(UAudioComponentGroupExtension *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14d98dc60

UClass * __cdecl UAudioComponentGroupExtension::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioComponentGroupExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioComponentGroupExtension",
               &Z_Registration_Info_UClass_UAudioComponentGroupExtension.InnerSingleton,
               StaticRegisterNativesUAudioComponentGroupExtension,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioComponentGroupExtension>,
               InternalVTableHelperCtorCaller<UAudioComponentGroupExtension>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioComponentGroupExtension.InnerSingleton;
}

// StaticRegisterNativesUAudioComponentGroupExtension @ 14d993670

void __cdecl UAudioComponentGroupExtension::StaticRegisterNativesUAudioComponentGroupExtension(void)

{
  return;
}

