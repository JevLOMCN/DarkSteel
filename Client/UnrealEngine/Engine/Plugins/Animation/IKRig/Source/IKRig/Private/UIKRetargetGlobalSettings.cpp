// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 6

// StaticClass @ 14dee9fc0

UClass * __cdecl UIKRetargetGlobalSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetGlobalSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetGlobalSettings",
               &Z_Registration_Info_UClass_UIKRetargetGlobalSettings.InnerSingleton,
               StaticRegisterNativesUIKRetargetGlobalSettings,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRetargetGlobalSettings>,
               InternalVTableHelperCtorCaller<UIKRetargetGlobalSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetGlobalSettings.InnerSingleton;
}

// UIKRetargetGlobalSettings @ 14df19200

UIKRetargetGlobalSettings * __thiscall
UIKRetargetGlobalSettings::UIKRetargetGlobalSettings
          (UIKRetargetGlobalSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UIKRetargetGlobalSettings__6B_;
  (this->Settings).bEnableRoot = true;
  (this->Settings).bEnableFK = true;
  (this->Settings).bEnableIK = true;
  (this->Settings).bEnablePost = true;
  (this->Settings).bCopyBasePose = false;
  (this->Settings).CopyBasePoseRoot.ComparisonIndex = 0;
  (this->Settings).CopyBasePoseRoot.Number = 0;
  (this->Settings).bWarping = false;
  (this->Settings).DirectionSource = Goals;
  (this->Settings).DirectionChain.Number = 0;
  (this->Settings).SourceScaleFactor = 1.0;
  (this->Settings).ForwardDirection = Y;
  (this->Settings).DirectionChain.ComparisonIndex = 0;
  (this->Settings).WarpForwards = 1.0;
  (this->Settings).SidewaysOffset = 0.0;
  (this->Settings).WarpSplay = 1.0;
  return this;
}

// UIKRetargetGlobalSettings @ 14df19260

UIKRetargetGlobalSettings * __thiscall
UIKRetargetGlobalSettings::UIKRetargetGlobalSettings
          (UIKRetargetGlobalSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UIKRetargetGlobalSettings__6B_;
  (this->Settings).bEnableRoot = true;
  (this->Settings).bEnableFK = true;
  (this->Settings).bEnableIK = true;
  (this->Settings).bEnablePost = true;
  (this->Settings).bCopyBasePose = false;
  (this->Settings).CopyBasePoseRoot.ComparisonIndex = 0;
  (this->Settings).CopyBasePoseRoot.Number = 0;
  (this->Settings).bWarping = false;
  (this->Settings).DirectionSource = Goals;
  (this->Settings).DirectionChain.Number = 0;
  (this->Settings).SourceScaleFactor = 1.0;
  (this->Settings).ForwardDirection = Y;
  (this->Settings).DirectionChain.ComparisonIndex = 0;
  (this->Settings).WarpForwards = 1.0;
  (this->Settings).SidewaysOffset = 0.0;
  (this->Settings).WarpSplay = 1.0;
  return this;
}

// ~UIKRetargetGlobalSettings @ 14df1c2c0

void __thiscall
UIKRetargetGlobalSettings::~UIKRetargetGlobalSettings(UIKRetargetGlobalSettings *this)

{
  this->_padding_ = (longlong)&___7UIKRetargetGlobalSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3c580

UClass * __cdecl UIKRetargetGlobalSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetGlobalSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetGlobalSettings",
               &Z_Registration_Info_UClass_UIKRetargetGlobalSettings.InnerSingleton,
               StaticRegisterNativesUIKRetargetGlobalSettings,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRetargetGlobalSettings>,
               InternalVTableHelperCtorCaller<UIKRetargetGlobalSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetGlobalSettings.InnerSingleton;
}

// StaticRegisterNativesUIKRetargetGlobalSettings @ 14df59dd0

void __cdecl UIKRetargetGlobalSettings::StaticRegisterNativesUIKRetargetGlobalSettings(void)

{
  return;
}

