// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 6

// StaticClass @ 14df03160

UClass * __cdecl UIKRetargetOpControllerBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetOpControllerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetOpControllerBase",
               &Z_Registration_Info_UClass_UIKRetargetOpControllerBase.InnerSingleton,
               StaticRegisterNativesUIKRetargetOpControllerBase,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetOpControllerBase>,
               InternalVTableHelperCtorCaller<UIKRetargetOpControllerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetOpControllerBase.InnerSingleton;
}

// UIKRetargetOpControllerBase @ 14df19320

UIKRetargetOpControllerBase * __thiscall
UIKRetargetOpControllerBase::UIKRetargetOpControllerBase
          (UIKRetargetOpControllerBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->OpSettingsToControl = (FIKRetargetOpSettingsBase *)0x0;
  this->_padding_ = (longlong)&___7UIKRetargetOpControllerBase__6B_;
  return this;
}

// UIKRetargetOpControllerBase @ 14df19350

UIKRetargetOpControllerBase * __thiscall
UIKRetargetOpControllerBase::UIKRetargetOpControllerBase
          (UIKRetargetOpControllerBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->OpSettingsToControl = (FIKRetargetOpSettingsBase *)0x0;
  this->_padding_ = (longlong)&___7UIKRetargetOpControllerBase__6B_;
  return this;
}

// ~UIKRetargetOpControllerBase @ 14df1c300

void __thiscall
UIKRetargetOpControllerBase::~UIKRetargetOpControllerBase(UIKRetargetOpControllerBase *this)

{
  this->_padding_ = (longlong)&___7UIKRetargetOpControllerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3c6f0

UClass * __cdecl UIKRetargetOpControllerBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetOpControllerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetOpControllerBase",
               &Z_Registration_Info_UClass_UIKRetargetOpControllerBase.InnerSingleton,
               StaticRegisterNativesUIKRetargetOpControllerBase,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetOpControllerBase>,
               InternalVTableHelperCtorCaller<UIKRetargetOpControllerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetOpControllerBase.InnerSingleton;
}

// StaticRegisterNativesUIKRetargetOpControllerBase @ 14df59e20

void __cdecl UIKRetargetOpControllerBase::StaticRegisterNativesUIKRetargetOpControllerBase(void)

{
  return;
}

