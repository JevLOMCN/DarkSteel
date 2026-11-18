// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// StaticClass @ 149b9c6f0

UClass * __cdecl UPCGNamedRerouteBaseSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGNamedRerouteBaseSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGNamedRerouteBaseSettings",
               &Z_Registration_Info_UClass_UPCGNamedRerouteBaseSettings.InnerSingleton,
               StaticRegisterNativesUPCGNamedRerouteBaseSettings,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGNamedRerouteBaseSettings>,
               InternalVTableHelperCtorCaller<UPCGNamedRerouteBaseSettings>,local_res8,
               UPCGRerouteSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGNamedRerouteBaseSettings.InnerSingleton;
}

// UPCGNamedRerouteBaseSettings @ 149be7140

UPCGNamedRerouteBaseSettings * __thiscall
UPCGNamedRerouteBaseSettings::UPCGNamedRerouteBaseSettings
          (UPCGNamedRerouteBaseSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGNamedRerouteBaseSettings__6B_;
  return this;
}

// UPCGNamedRerouteBaseSettings @ 149be7170

UPCGNamedRerouteBaseSettings * __thiscall
UPCGNamedRerouteBaseSettings::UPCGNamedRerouteBaseSettings(UPCGNamedRerouteBaseSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar1);
  *(undefined ***)this = &___7UPCGNamedRerouteBaseSettings__6B_;
  return this;
}

// ~UPCGNamedRerouteBaseSettings @ 149be9ca0

void __thiscall
UPCGNamedRerouteBaseSettings::~UPCGNamedRerouteBaseSettings(UPCGNamedRerouteBaseSettings *this)

{
  *(undefined ***)this = &___7UPCGRerouteSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// GetPrivateStaticClass @ 149c25c10

UClass * __cdecl UPCGNamedRerouteBaseSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGNamedRerouteBaseSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGNamedRerouteBaseSettings",
               &Z_Registration_Info_UClass_UPCGNamedRerouteBaseSettings.InnerSingleton,
               StaticRegisterNativesUPCGNamedRerouteBaseSettings,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGNamedRerouteBaseSettings>,
               InternalVTableHelperCtorCaller<UPCGNamedRerouteBaseSettings>,local_res8,
               UPCGRerouteSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGNamedRerouteBaseSettings.InnerSingleton;
}

// StaticRegisterNativesUPCGNamedRerouteBaseSettings @ 149c354b0

void __cdecl UPCGNamedRerouteBaseSettings::StaticRegisterNativesUPCGNamedRerouteBaseSettings(void)

{
  return;
}

