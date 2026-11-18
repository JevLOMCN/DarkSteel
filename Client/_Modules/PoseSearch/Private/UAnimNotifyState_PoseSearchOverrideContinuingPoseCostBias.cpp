// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 6

// StaticClass @ 14a894cf0

UClass * __cdecl UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias
                .InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias,0x38,8
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias>
               ,local_res8,UAnimNotifyState_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias.
         InnerSingleton;
}

// UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias @ 14a8acc80

UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias * __thiscall
UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::
UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias
          (UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias *this,FVTableHelper *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  this->CostAddend = -1.0;
  this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias__6B_;
  return this;
}

// UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias @ 14a8accb0

UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias * __thiscall
UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::
UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias
          (UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias *this,
          FObjectInitializer *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  this->CostAddend = -1.0;
  this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias__6B_;
  return this;
}

// ~UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias @ 14a8adfd0

void __thiscall
UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::
~UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias
          (UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias *this)

{
  this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchBase__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  return;
}

// GetPrivateStaticClass @ 14a8bcb50

UClass * __cdecl
UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias
                .InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias,0x38,8
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias>
               ,local_res8,UAnimNotifyState_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias.
         InnerSingleton;
}

// StaticRegisterNativesUAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias @ 14a8ce280

void __cdecl
UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::
StaticRegisterNativesUAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias(void)

{
  return;
}

