// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 6

// StaticClass @ 14dee82b0

UClass * __cdecl UIKRig_BodyMoverEffector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_BodyMoverEffector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_BodyMoverEffector",
               &Z_Registration_Info_UClass_UIKRig_BodyMoverEffector.InnerSingleton,
               StaticRegisterNativesUIKRig_BodyMoverEffector,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRig_BodyMoverEffector>,
               InternalVTableHelperCtorCaller<UIKRig_BodyMoverEffector>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_BodyMoverEffector.InnerSingleton;
}

// UIKRig_BodyMoverEffector @ 14df1a6b0

UIKRig_BodyMoverEffector * __thiscall
UIKRig_BodyMoverEffector::UIKRig_BodyMoverEffector
          (UIKRig_BodyMoverEffector *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->InfluenceMultiplier = 1.0;
  this->_padding_ = (longlong)&___7UIKRig_BodyMoverEffector__6B_;
  (this->GoalName).ComparisonIndex = 0;
  (this->GoalName).Number = 0;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  return this;
}

// UIKRig_BodyMoverEffector @ 14df1a6f0

UIKRig_BodyMoverEffector * __thiscall
UIKRig_BodyMoverEffector::UIKRig_BodyMoverEffector
          (UIKRig_BodyMoverEffector *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->InfluenceMultiplier = 1.0;
  this->_padding_ = (longlong)&___7UIKRig_BodyMoverEffector__6B_;
  (this->GoalName).ComparisonIndex = 0;
  (this->GoalName).Number = 0;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  return this;
}

// ~UIKRig_BodyMoverEffector @ 14df1c860

void __thiscall UIKRig_BodyMoverEffector::~UIKRig_BodyMoverEffector(UIKRig_BodyMoverEffector *this)

{
  this->_padding_ = (longlong)&___7UIKRig_BodyMoverEffector__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3d870

UClass * __cdecl UIKRig_BodyMoverEffector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_BodyMoverEffector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_BodyMoverEffector",
               &Z_Registration_Info_UClass_UIKRig_BodyMoverEffector.InnerSingleton,
               StaticRegisterNativesUIKRig_BodyMoverEffector,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRig_BodyMoverEffector>,
               InternalVTableHelperCtorCaller<UIKRig_BodyMoverEffector>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_BodyMoverEffector.InnerSingleton;
}

// StaticRegisterNativesUIKRig_BodyMoverEffector @ 14df5a2d0

void __cdecl UIKRig_BodyMoverEffector::StaticRegisterNativesUIKRig_BodyMoverEffector(void)

{
  return;
}

