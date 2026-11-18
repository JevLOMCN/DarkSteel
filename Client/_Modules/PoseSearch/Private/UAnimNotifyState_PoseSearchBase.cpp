// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 6

// StaticClass @ 14a89f3d0

UClass * __cdecl UAnimNotifyState_PoseSearchBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchBase",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBase.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_PoseSearchBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_PoseSearchBase>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchBase>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBase.InnerSingleton;
}

// UAnimNotifyState_PoseSearchBase @ 14a8aca20

UAnimNotifyState_PoseSearchBase * __thiscall
UAnimNotifyState_PoseSearchBase::UAnimNotifyState_PoseSearchBase
          (UAnimNotifyState_PoseSearchBase *this,FVTableHelper *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  *(undefined ***)this = &___7UAnimNotifyState_PoseSearchBase__6B_;
  return this;
}

// UAnimNotifyState_PoseSearchBase @ 14a8aca50

UAnimNotifyState_PoseSearchBase * __thiscall
UAnimNotifyState_PoseSearchBase::UAnimNotifyState_PoseSearchBase
          (UAnimNotifyState_PoseSearchBase *this,FObjectInitializer *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  *(undefined ***)this = &___7UAnimNotifyState_PoseSearchBase__6B_;
  return this;
}

// ~UAnimNotifyState_PoseSearchBase @ 14a8adef0

void __thiscall
UAnimNotifyState_PoseSearchBase::~UAnimNotifyState_PoseSearchBase
          (UAnimNotifyState_PoseSearchBase *this)

{
  *(undefined ***)this = &___7UAnimNotifyState_PoseSearchBase__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  return;
}

// GetPrivateStaticClass @ 14a8bc6d0

UClass * __cdecl UAnimNotifyState_PoseSearchBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchBase",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBase.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_PoseSearchBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_PoseSearchBase>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchBase>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBase.InnerSingleton;
}

// StaticRegisterNativesUAnimNotifyState_PoseSearchBase @ 14a8ce220

void __cdecl
UAnimNotifyState_PoseSearchBase::StaticRegisterNativesUAnimNotifyState_PoseSearchBase(void)

{
  return;
}

