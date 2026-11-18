// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 6

// StaticClass @ 14a894f30

UClass * __cdecl UAnimNotifyState_PoseSearchSamplingAttribute::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingAttribute.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchSamplingAttribute",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingAttribute.
                InnerSingleton,StaticRegisterNativesUAnimNotifyState_PoseSearchSamplingAttribute,
               0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_PoseSearchSamplingAttribute>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchSamplingAttribute>,
               local_res8,UAnimNotifyState_PoseSearchSamplingEvent::StaticClass,UObject::StaticClass
              );
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingAttribute.InnerSingleton;
}

// UAnimNotifyState_PoseSearchSamplingAttribute @ 14a8acce0

UAnimNotifyState_PoseSearchSamplingAttribute * __thiscall
UAnimNotifyState_PoseSearchSamplingAttribute::UAnimNotifyState_PoseSearchSamplingAttribute
          (UAnimNotifyState_PoseSearchSamplingAttribute *this,FVTableHelper *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  *(undefined ***)this = &___7UAnimNotifyState_PoseSearchSamplingAttribute__6B_;
  return this;
}

// UAnimNotifyState_PoseSearchSamplingAttribute @ 14a8acd10

UAnimNotifyState_PoseSearchSamplingAttribute * __thiscall
UAnimNotifyState_PoseSearchSamplingAttribute::UAnimNotifyState_PoseSearchSamplingAttribute
          (UAnimNotifyState_PoseSearchSamplingAttribute *this,FObjectInitializer *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  *(undefined ***)this = &___7UAnimNotifyState_PoseSearchSamplingAttribute__6B_;
  return this;
}

// ~UAnimNotifyState_PoseSearchSamplingAttribute @ 14a8adff0

void __thiscall
UAnimNotifyState_PoseSearchSamplingAttribute::~UAnimNotifyState_PoseSearchSamplingAttribute
          (UAnimNotifyState_PoseSearchSamplingAttribute *this)

{
  *(undefined ***)this = &___7UAnimNotifyState_PoseSearchBase__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  return;
}

// GetPrivateStaticClass @ 14a8bcc10

UClass * __cdecl UAnimNotifyState_PoseSearchSamplingAttribute::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingAttribute.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchSamplingAttribute",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingAttribute.
                InnerSingleton,StaticRegisterNativesUAnimNotifyState_PoseSearchSamplingAttribute,
               0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_PoseSearchSamplingAttribute>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchSamplingAttribute>,
               local_res8,UAnimNotifyState_PoseSearchSamplingEvent::StaticClass,UObject::StaticClass
              );
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingAttribute.InnerSingleton;
}

// StaticRegisterNativesUAnimNotifyState_PoseSearchSamplingAttribute @ 14a8ce290

void __cdecl
UAnimNotifyState_PoseSearchSamplingAttribute::
StaticRegisterNativesUAnimNotifyState_PoseSearchSamplingAttribute(void)

{
  return;
}

