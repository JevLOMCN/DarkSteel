// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Env
// Functions: 6

// StaticClass @ 14a0452d0

UClass * __cdecl UWN_UDS_Weather_Settings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_UDS_Weather_Settings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Env",L"WN_UDS_Weather_Settings",
               &Z_Registration_Info_UClass_UWN_UDS_Weather_Settings.InnerSingleton,
               StaticRegisterNativesUWN_UDS_Weather_Settings,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_UDS_Weather_Settings>,
               InternalVTableHelperCtorCaller<UWN_UDS_Weather_Settings>,local_res8,
               UPrimaryDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_UDS_Weather_Settings.InnerSingleton;
}

// UWN_UDS_Weather_Settings @ 14a047c10

UWN_UDS_Weather_Settings * __thiscall
UWN_UDS_Weather_Settings::UWN_UDS_Weather_Settings
          (UWN_UDS_Weather_Settings *this,FVTableHelper *param_1)

{
  UPrimaryDataAsset::UPrimaryDataAsset((UPrimaryDataAsset *)this,param_1);
  *(undefined ***)this = &___7UWN_UDS_Weather_Settings__6B_;
  return this;
}

// UWN_UDS_Weather_Settings @ 14a047c40

UWN_UDS_Weather_Settings * __thiscall
UWN_UDS_Weather_Settings::UWN_UDS_Weather_Settings
          (UWN_UDS_Weather_Settings *this,FObjectInitializer *param_1)

{
  UPrimaryDataAsset::UPrimaryDataAsset((UPrimaryDataAsset *)this,param_1);
  *(undefined ***)this = &___7UWN_UDS_Weather_Settings__6B_;
  return this;
}

// ~UWN_UDS_Weather_Settings @ 14a0486d0

void __thiscall UWN_UDS_Weather_Settings::~UWN_UDS_Weather_Settings(UWN_UDS_Weather_Settings *this)

{
  *(undefined ***)this = &___7UWN_UDS_Weather_Settings__6B_;
  UPrimaryDataAsset::~UPrimaryDataAsset((UPrimaryDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14a04b960

UClass * __cdecl UWN_UDS_Weather_Settings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_UDS_Weather_Settings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Env",L"WN_UDS_Weather_Settings",
               &Z_Registration_Info_UClass_UWN_UDS_Weather_Settings.InnerSingleton,
               StaticRegisterNativesUWN_UDS_Weather_Settings,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_UDS_Weather_Settings>,
               InternalVTableHelperCtorCaller<UWN_UDS_Weather_Settings>,local_res8,
               UPrimaryDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_UDS_Weather_Settings.InnerSingleton;
}

// StaticRegisterNativesUWN_UDS_Weather_Settings @ 14a04bb20

void __cdecl UWN_UDS_Weather_Settings::StaticRegisterNativesUWN_UDS_Weather_Settings(void)

{
  return;
}

