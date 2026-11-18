// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 6

// StaticClass @ 14a894df0

UClass * __cdecl UAnimNotifyState_PoseSearchSamplingEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingEvent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchSamplingEvent",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingEvent.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_PoseSearchSamplingEvent,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_PoseSearchSamplingEvent>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchSamplingEvent>,local_res8,
               UAnimNotifyState_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingEvent.InnerSingleton;
}

// UAnimNotifyState_PoseSearchSamplingEvent @ 14a8acd40

UAnimNotifyState_PoseSearchSamplingEvent * __thiscall
UAnimNotifyState_PoseSearchSamplingEvent::UAnimNotifyState_PoseSearchSamplingEvent
          (UAnimNotifyState_PoseSearchSamplingEvent *this,FVTableHelper *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  *(undefined ***)this = &___7UAnimNotifyState_PoseSearchSamplingEvent__6B_;
  return this;
}

// UAnimNotifyState_PoseSearchSamplingEvent @ 14a8acd70

UAnimNotifyState_PoseSearchSamplingEvent * __thiscall
UAnimNotifyState_PoseSearchSamplingEvent::UAnimNotifyState_PoseSearchSamplingEvent
          (UAnimNotifyState_PoseSearchSamplingEvent *this,FObjectInitializer *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  *(undefined ***)this = &___7UAnimNotifyState_PoseSearchSamplingEvent__6B_;
  return this;
}

// ~UAnimNotifyState_PoseSearchSamplingEvent @ 14a8ae010

void __thiscall
UAnimNotifyState_PoseSearchSamplingEvent::~UAnimNotifyState_PoseSearchSamplingEvent
          (UAnimNotifyState_PoseSearchSamplingEvent *this)

{
  *(undefined ***)this = &___7UAnimNotifyState_PoseSearchBase__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  return;
}

// GetPrivateStaticClass @ 14a8bccd0

UClass * __cdecl UAnimNotifyState_PoseSearchSamplingEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingEvent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchSamplingEvent",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingEvent.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_PoseSearchSamplingEvent,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_PoseSearchSamplingEvent>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchSamplingEvent>,local_res8,
               UAnimNotifyState_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingEvent.InnerSingleton;
}

// StaticRegisterNativesUAnimNotifyState_PoseSearchSamplingEvent @ 14a8ce2a0

void __cdecl
UAnimNotifyState_PoseSearchSamplingEvent::
StaticRegisterNativesUAnimNotifyState_PoseSearchSamplingEvent(void)

{
  return;
}

