// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 6

// StaticClass @ 14df07e70

UClass * __cdecl UIKRig_FBIKEffector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_FBIKEffector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_FBIKEffector",
               &Z_Registration_Info_UClass_UIKRig_FBIKEffector.InnerSingleton,
               StaticRegisterNativesUIKRig_FBIKEffector,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRig_FBIKEffector>,
               InternalVTableHelperCtorCaller<UIKRig_FBIKEffector>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_FBIKEffector.InnerSingleton;
}

// UIKRig_FBIKEffector @ 14df1a7b0

UIKRig_FBIKEffector * __thiscall
UIKRig_FBIKEffector::UIKRig_FBIKEffector(UIKRig_FBIKEffector *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->StrengthAlpha = 1.0;
  this->_padding_ = (longlong)&___7UIKRig_FBIKEffector__6B_;
  (this->GoalName).ComparisonIndex = 0;
  (this->GoalName).Number = 0;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  this->ChainDepth = 0;
  this->PullChainAlpha = 1.0;
  this->PinRotation = 1.0;
  return this;
}

// UIKRig_FBIKEffector @ 14df1a800

UIKRig_FBIKEffector * __thiscall
UIKRig_FBIKEffector::UIKRig_FBIKEffector(UIKRig_FBIKEffector *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->StrengthAlpha = 1.0;
  this->_padding_ = (longlong)&___7UIKRig_FBIKEffector__6B_;
  (this->GoalName).ComparisonIndex = 0;
  (this->GoalName).Number = 0;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  this->ChainDepth = 0;
  this->PullChainAlpha = 1.0;
  this->PinRotation = 1.0;
  return this;
}

// ~UIKRig_FBIKEffector @ 14df1c8a0

void __thiscall UIKRig_FBIKEffector::~UIKRig_FBIKEffector(UIKRig_FBIKEffector *this)

{
  this->_padding_ = (longlong)&___7UIKRig_FBIKEffector__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3d9d0

UClass * __cdecl UIKRig_FBIKEffector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_FBIKEffector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_FBIKEffector",
               &Z_Registration_Info_UClass_UIKRig_FBIKEffector.InnerSingleton,
               StaticRegisterNativesUIKRig_FBIKEffector,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRig_FBIKEffector>,
               InternalVTableHelperCtorCaller<UIKRig_FBIKEffector>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_FBIKEffector.InnerSingleton;
}

// StaticRegisterNativesUIKRig_FBIKEffector @ 14df5a2f0

void __cdecl UIKRig_FBIKEffector::StaticRegisterNativesUIKRig_FBIKEffector(void)

{
  return;
}

