// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 6

// StaticClass @ 14a89f5e0

UClass * __cdecl UAnimNotifyState_PoseSearchBlockTransition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBlockTransition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchBlockTransition",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBlockTransition.InnerSingleton
               ,StaticRegisterNativesUAnimNotifyState_PoseSearchBlockTransition,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_PoseSearchBlockTransition>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchBlockTransition>,local_res8
               ,UAnimNotifyState_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBlockTransition.InnerSingleton;
}

// UAnimNotifyState_PoseSearchBlockTransition @ 14a8aca80

UAnimNotifyState_PoseSearchBlockTransition * __thiscall
UAnimNotifyState_PoseSearchBlockTransition::UAnimNotifyState_PoseSearchBlockTransition
          (UAnimNotifyState_PoseSearchBlockTransition *this,FVTableHelper *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  *(undefined ***)this = &___7UAnimNotifyState_PoseSearchBlockTransition__6B_;
  return this;
}

// UAnimNotifyState_PoseSearchBlockTransition @ 14a8acab0

UAnimNotifyState_PoseSearchBlockTransition * __thiscall
UAnimNotifyState_PoseSearchBlockTransition::UAnimNotifyState_PoseSearchBlockTransition
          (UAnimNotifyState_PoseSearchBlockTransition *this,FObjectInitializer *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  *(undefined ***)this = &___7UAnimNotifyState_PoseSearchBlockTransition__6B_;
  return this;
}

// ~UAnimNotifyState_PoseSearchBlockTransition @ 14a8adf10

void __thiscall
UAnimNotifyState_PoseSearchBlockTransition::~UAnimNotifyState_PoseSearchBlockTransition
          (UAnimNotifyState_PoseSearchBlockTransition *this)

{
  *(undefined ***)this = &___7UAnimNotifyState_PoseSearchBase__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  return;
}

// GetPrivateStaticClass @ 14a8bc790

UClass * __cdecl UAnimNotifyState_PoseSearchBlockTransition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBlockTransition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchBlockTransition",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBlockTransition.InnerSingleton
               ,StaticRegisterNativesUAnimNotifyState_PoseSearchBlockTransition,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_PoseSearchBlockTransition>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchBlockTransition>,local_res8
               ,UAnimNotifyState_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBlockTransition.InnerSingleton;
}

// StaticRegisterNativesUAnimNotifyState_PoseSearchBlockTransition @ 14a8ce230

void __cdecl
UAnimNotifyState_PoseSearchBlockTransition::
StaticRegisterNativesUAnimNotifyState_PoseSearchBlockTransition(void)

{
  return;
}

