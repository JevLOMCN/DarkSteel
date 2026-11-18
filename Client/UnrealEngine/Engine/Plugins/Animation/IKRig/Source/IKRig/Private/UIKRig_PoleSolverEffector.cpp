// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 6

// StaticClass @ 14df08650

UClass * __cdecl UIKRig_PoleSolverEffector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_PoleSolverEffector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_PoleSolverEffector",
               &Z_Registration_Info_UClass_UIKRig_PoleSolverEffector.InnerSingleton,
               StaticRegisterNativesUIKRig_PoleSolverEffector,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRig_PoleSolverEffector>,
               InternalVTableHelperCtorCaller<UIKRig_PoleSolverEffector>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_PoleSolverEffector.InnerSingleton;
}

// UIKRig_PoleSolverEffector @ 14df1a940

UIKRig_PoleSolverEffector * __thiscall
UIKRig_PoleSolverEffector::UIKRig_PoleSolverEffector
          (UIKRig_PoleSolverEffector *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UIKRig_PoleSolverEffector__6B_;
  (this->GoalName).ComparisonIndex = 0;
  (this->GoalName).Number = 0;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  this->Alpha = 1.0;
  return this;
}

// UIKRig_PoleSolverEffector @ 14df1a980

UIKRig_PoleSolverEffector * __thiscall
UIKRig_PoleSolverEffector::UIKRig_PoleSolverEffector
          (UIKRig_PoleSolverEffector *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UIKRig_PoleSolverEffector__6B_;
  (this->GoalName).ComparisonIndex = 0;
  (this->GoalName).Number = 0;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  this->Alpha = 1.0;
  return this;
}

// ~UIKRig_PoleSolverEffector @ 14df1c920

void __thiscall
UIKRig_PoleSolverEffector::~UIKRig_PoleSolverEffector(UIKRig_PoleSolverEffector *this)

{
  this->_padding_ = (longlong)&___7UIKRig_PoleSolverEffector__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3dcb0

UClass * __cdecl UIKRig_PoleSolverEffector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_PoleSolverEffector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_PoleSolverEffector",
               &Z_Registration_Info_UClass_UIKRig_PoleSolverEffector.InnerSingleton,
               StaticRegisterNativesUIKRig_PoleSolverEffector,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRig_PoleSolverEffector>,
               InternalVTableHelperCtorCaller<UIKRig_PoleSolverEffector>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_PoleSolverEffector.InnerSingleton;
}

// StaticRegisterNativesUIKRig_PoleSolverEffector @ 14df5a330

void __cdecl UIKRig_PoleSolverEffector::StaticRegisterNativesUIKRig_PoleSolverEffector(void)

{
  return;
}

