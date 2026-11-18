// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 6

// StaticClass @ 14a894910

UClass * __cdecl UAnimNotifyState_PoseSearchModifyCost::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchModifyCost.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchModifyCost",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchModifyCost.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_PoseSearchModifyCost,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState_PoseSearchModifyCost>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchModifyCost>,local_res8,
               UAnimNotifyState_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchModifyCost.InnerSingleton;
}

// UAnimNotifyState_PoseSearchModifyCost @ 14a8acc20

UAnimNotifyState_PoseSearchModifyCost * __thiscall
UAnimNotifyState_PoseSearchModifyCost::UAnimNotifyState_PoseSearchModifyCost
          (UAnimNotifyState_PoseSearchModifyCost *this,FVTableHelper *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  this->CostAddend = -1.0;
  this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchModifyCost__6B_;
  return this;
}

// UAnimNotifyState_PoseSearchModifyCost @ 14a8acc50

UAnimNotifyState_PoseSearchModifyCost * __thiscall
UAnimNotifyState_PoseSearchModifyCost::UAnimNotifyState_PoseSearchModifyCost
          (UAnimNotifyState_PoseSearchModifyCost *this,FObjectInitializer *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  this->CostAddend = -1.0;
  this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchModifyCost__6B_;
  return this;
}

// ~UAnimNotifyState_PoseSearchModifyCost @ 14a8adfb0

void __thiscall
UAnimNotifyState_PoseSearchModifyCost::~UAnimNotifyState_PoseSearchModifyCost
          (UAnimNotifyState_PoseSearchModifyCost *this)

{
  this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchBase__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  return;
}

// GetPrivateStaticClass @ 14a8bca90

UClass * __cdecl UAnimNotifyState_PoseSearchModifyCost::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchModifyCost.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchModifyCost",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchModifyCost.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_PoseSearchModifyCost,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState_PoseSearchModifyCost>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchModifyCost>,local_res8,
               UAnimNotifyState_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchModifyCost.InnerSingleton;
}

// StaticRegisterNativesUAnimNotifyState_PoseSearchModifyCost @ 14a8ce270

void __cdecl
UAnimNotifyState_PoseSearchModifyCost::StaticRegisterNativesUAnimNotifyState_PoseSearchModifyCost
          (void)

{
  return;
}

