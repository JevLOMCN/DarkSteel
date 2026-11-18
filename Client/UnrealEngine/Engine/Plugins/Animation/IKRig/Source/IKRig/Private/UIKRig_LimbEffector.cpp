// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 5

// StaticClass @ 14df01880

UClass * __cdecl UIKRig_LimbEffector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_LimbEffector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_LimbEffector",
               &Z_Registration_Info_UClass_UIKRig_LimbEffector.InnerSingleton,
               StaticRegisterNativesUIKRig_LimbEffector,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRig_LimbEffector>,
               InternalVTableHelperCtorCaller<UIKRig_LimbEffector>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_LimbEffector.InnerSingleton;
}

// UIKRig_LimbEffector @ 14df1a850

UIKRig_LimbEffector * __thiscall
UIKRig_LimbEffector::UIKRig_LimbEffector(UIKRig_LimbEffector *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UIKRig_LimbEffector__6B_;
  (this->GoalName).ComparisonIndex = 0;
  (this->GoalName).Number = 0;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  return this;
}

// ~UIKRig_LimbEffector @ 14df1c8c0

void __thiscall UIKRig_LimbEffector::~UIKRig_LimbEffector(UIKRig_LimbEffector *this)

{
  this->_padding_ = (longlong)&___7UIKRig_LimbEffector__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3da80

UClass * __cdecl UIKRig_LimbEffector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_LimbEffector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_LimbEffector",
               &Z_Registration_Info_UClass_UIKRig_LimbEffector.InnerSingleton,
               StaticRegisterNativesUIKRig_LimbEffector,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRig_LimbEffector>,
               InternalVTableHelperCtorCaller<UIKRig_LimbEffector>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_LimbEffector.InnerSingleton;
}

// StaticRegisterNativesUIKRig_LimbEffector @ 14df5a300

void __cdecl UIKRig_LimbEffector::StaticRegisterNativesUIKRig_LimbEffector(void)

{
  return;
}

