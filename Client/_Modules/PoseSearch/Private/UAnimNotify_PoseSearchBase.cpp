// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 6

// StaticClass @ 14a8954b0

UClass * __cdecl UAnimNotify_PoseSearchBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PoseSearchBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotify_PoseSearchBase",
               &Z_Registration_Info_UClass_UAnimNotify_PoseSearchBase.InnerSingleton,
               StaticRegisterNativesUAnimNotify_PoseSearchBase,0x38,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify_PoseSearchBase>,
               InternalVTableHelperCtorCaller<UAnimNotify_PoseSearchBase>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PoseSearchBase.InnerSingleton;
}

// UAnimNotify_PoseSearchBase @ 14a8acda0

UAnimNotify_PoseSearchBase * __thiscall
UAnimNotify_PoseSearchBase::UAnimNotify_PoseSearchBase
          (UAnimNotify_PoseSearchBase *this,FVTableHelper *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  *(undefined ***)this = &___7UAnimNotify_PoseSearchBase__6B_;
  return this;
}

// UAnimNotify_PoseSearchBase @ 14a8acdd0

UAnimNotify_PoseSearchBase * __thiscall
UAnimNotify_PoseSearchBase::UAnimNotify_PoseSearchBase
          (UAnimNotify_PoseSearchBase *this,FObjectInitializer *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  *(undefined ***)this = &___7UAnimNotify_PoseSearchBase__6B_;
  return this;
}

// ~UAnimNotify_PoseSearchBase @ 14a8ae030

void __thiscall
UAnimNotify_PoseSearchBase::~UAnimNotify_PoseSearchBase(UAnimNotify_PoseSearchBase *this)

{
  *(undefined ***)this = &___7UAnimNotify_PoseSearchBase__6B_;
  UAnimNotify::~UAnimNotify((UAnimNotify *)this);
  return;
}

// GetPrivateStaticClass @ 14a8bcd90

UClass * __cdecl UAnimNotify_PoseSearchBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PoseSearchBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotify_PoseSearchBase",
               &Z_Registration_Info_UClass_UAnimNotify_PoseSearchBase.InnerSingleton,
               StaticRegisterNativesUAnimNotify_PoseSearchBase,0x38,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify_PoseSearchBase>,
               InternalVTableHelperCtorCaller<UAnimNotify_PoseSearchBase>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PoseSearchBase.InnerSingleton;
}

// StaticRegisterNativesUAnimNotify_PoseSearchBase @ 14a8ce2b0

void __cdecl UAnimNotify_PoseSearchBase::StaticRegisterNativesUAnimNotify_PoseSearchBase(void)

{
  return;
}

