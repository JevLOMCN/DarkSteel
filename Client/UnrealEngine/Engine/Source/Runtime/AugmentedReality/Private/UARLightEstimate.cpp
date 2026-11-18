// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 6

// StaticClass @ 14cf2a5e0

UClass * __cdecl UARLightEstimate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARLightEstimate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARLightEstimate",
               &Z_Registration_Info_UClass_UARLightEstimate.InnerSingleton,
               StaticRegisterNativesUARLightEstimate,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UARLightEstimate>,
               InternalVTableHelperCtorCaller<UARLightEstimate>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARLightEstimate.InnerSingleton;
}

// UARLightEstimate @ 14cf41c10

UARLightEstimate * __thiscall
UARLightEstimate::UARLightEstimate(UARLightEstimate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UARLightEstimate__6B_;
  return this;
}

// UARLightEstimate @ 14cf41c40

UARLightEstimate * __thiscall
UARLightEstimate::UARLightEstimate(UARLightEstimate *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UARLightEstimate__6B_;
  return this;
}

// ~UARLightEstimate @ 14cf444c0

void __thiscall UARLightEstimate::~UARLightEstimate(UARLightEstimate *this)

{
  *(undefined ***)this = &___7UARLightEstimate__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14cf54a40

UClass * __cdecl UARLightEstimate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARLightEstimate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARLightEstimate",
               &Z_Registration_Info_UClass_UARLightEstimate.InnerSingleton,
               StaticRegisterNativesUARLightEstimate,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UARLightEstimate>,
               InternalVTableHelperCtorCaller<UARLightEstimate>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARLightEstimate.InnerSingleton;
}

// StaticRegisterNativesUARLightEstimate @ 14cf611f0

void __cdecl UARLightEstimate::StaticRegisterNativesUARLightEstimate(void)

{
  return;
}

