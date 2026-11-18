// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// StaticClass @ 146fe9a70

UClass * __cdecl UVisualLoggerExtension::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVisualLoggerExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"VisualLoggerExtension",
               &Z_Registration_Info_UClass_UVisualLoggerExtension.InnerSingleton,
               StaticRegisterNativesUVisualLoggerExtension,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UVisualLoggerExtension>,
               InternalVTableHelperCtorCaller<UVisualLoggerExtension>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVisualLoggerExtension.InnerSingleton;
}

// UVisualLoggerExtension @ 146fec650

UVisualLoggerExtension * __thiscall
UVisualLoggerExtension::UVisualLoggerExtension(UVisualLoggerExtension *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UVisualLoggerExtension__6B_;
  return this;
}

// UVisualLoggerExtension @ 146fec680

UVisualLoggerExtension * __thiscall
UVisualLoggerExtension::UVisualLoggerExtension
          (UVisualLoggerExtension *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UVisualLoggerExtension__6B_;
  return this;
}

// ~UVisualLoggerExtension @ 146feca40

void __thiscall UVisualLoggerExtension::~UVisualLoggerExtension(UVisualLoggerExtension *this)

{
  *(undefined ***)this = &___7UVisualLoggerExtension__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146ff0db0

UClass * __cdecl UVisualLoggerExtension::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVisualLoggerExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"VisualLoggerExtension",
               &Z_Registration_Info_UClass_UVisualLoggerExtension.InnerSingleton,
               StaticRegisterNativesUVisualLoggerExtension,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UVisualLoggerExtension>,
               InternalVTableHelperCtorCaller<UVisualLoggerExtension>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVisualLoggerExtension.InnerSingleton;
}

// StaticRegisterNativesUVisualLoggerExtension @ 146ff3d80

void __cdecl UVisualLoggerExtension::StaticRegisterNativesUVisualLoggerExtension(void)

{
  return;
}

