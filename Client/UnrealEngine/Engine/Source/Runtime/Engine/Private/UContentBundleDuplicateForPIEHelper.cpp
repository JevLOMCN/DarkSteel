// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a28c80

UClass * __cdecl UContentBundleDuplicateForPIEHelper::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContentBundleDuplicateForPIEHelper.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ContentBundleDuplicateForPIEHelper",
               &Z_Registration_Info_UClass_UContentBundleDuplicateForPIEHelper.InnerSingleton,
               StaticRegisterNativesUContentBundleDuplicateForPIEHelper,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UContentBundleDuplicateForPIEHelper>,
               InternalVTableHelperCtorCaller<UContentBundleDuplicateForPIEHelper>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContentBundleDuplicateForPIEHelper.InnerSingleton;
}

// UContentBundleDuplicateForPIEHelper @ 148a42280

UContentBundleDuplicateForPIEHelper * __thiscall
UContentBundleDuplicateForPIEHelper::UContentBundleDuplicateForPIEHelper
          (UContentBundleDuplicateForPIEHelper *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UContentBundleDuplicateForPIEHelper__6B_;
  return this;
}

// UContentBundleDuplicateForPIEHelper @ 148a422b0

UContentBundleDuplicateForPIEHelper * __thiscall
UContentBundleDuplicateForPIEHelper::UContentBundleDuplicateForPIEHelper
          (UContentBundleDuplicateForPIEHelper *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UContentBundleDuplicateForPIEHelper__6B_;
  return this;
}

// ~UContentBundleDuplicateForPIEHelper @ 148a44460

void __thiscall
UContentBundleDuplicateForPIEHelper::~UContentBundleDuplicateForPIEHelper
          (UContentBundleDuplicateForPIEHelper *this)

{
  *(undefined ***)this = &___7UContentBundleDuplicateForPIEHelper__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148a59bf0

UClass * __cdecl UContentBundleDuplicateForPIEHelper::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContentBundleDuplicateForPIEHelper.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ContentBundleDuplicateForPIEHelper",
               &Z_Registration_Info_UClass_UContentBundleDuplicateForPIEHelper.InnerSingleton,
               StaticRegisterNativesUContentBundleDuplicateForPIEHelper,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UContentBundleDuplicateForPIEHelper>,
               InternalVTableHelperCtorCaller<UContentBundleDuplicateForPIEHelper>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContentBundleDuplicateForPIEHelper.InnerSingleton;
}

// StaticRegisterNativesUContentBundleDuplicateForPIEHelper @ 148a6a2d0

void __cdecl
UContentBundleDuplicateForPIEHelper::StaticRegisterNativesUContentBundleDuplicateForPIEHelper(void)

{
  return;
}

