// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b415aa0

UClass * __cdecl UDS_AnimNotify::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify",
               &Z_Registration_Info_UClass_UDS_AnimNotify.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_AnimNotify>,InternalVTableHelperCtorCaller<UDS_AnimNotify>,
               local_res8,UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify.InnerSingleton;
}

// UDS_AnimNotify @ 14b41af10

UDS_AnimNotify * __thiscall
UDS_AnimNotify::UDS_AnimNotify(UDS_AnimNotify *this,FVTableHelper *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  *(undefined ***)this = &___7UDS_AnimNotify__6B_;
  return this;
}

// ~UDS_AnimNotify @ 14b41b9c0

void __thiscall UDS_AnimNotify::~UDS_AnimNotify(UDS_AnimNotify *this)

{
  *(undefined ***)this = &___7UDS_AnimNotify__6B_;
  UAnimNotify::~UAnimNotify((UAnimNotify *)this);
  return;
}

// GetPrivateStaticClass @ 14b41d010

UClass * __cdecl UDS_AnimNotify::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify",
               &Z_Registration_Info_UClass_UDS_AnimNotify.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_AnimNotify>,InternalVTableHelperCtorCaller<UDS_AnimNotify>,
               local_res8,UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimNotify @ 14b41e160

void __cdecl UDS_AnimNotify::StaticRegisterNativesUDS_AnimNotify(void)

{
  return;
}

// UDS_AnimNotify @ 14b8b2080

UDS_AnimNotify * __thiscall
UDS_AnimNotify::UDS_AnimNotify(UDS_AnimNotify *this,FObjectInitializer *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  *(undefined ***)this = &___7UDS_AnimNotify__6B_;
  return this;
}

