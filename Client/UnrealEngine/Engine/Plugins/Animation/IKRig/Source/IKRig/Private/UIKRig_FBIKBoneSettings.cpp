// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 6

// StaticClass @ 14df08770

UClass * __cdecl UIKRig_FBIKBoneSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_FBIKBoneSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_FBIKBoneSettings",
               &Z_Registration_Info_UClass_UIKRig_FBIKBoneSettings.InnerSingleton,
               StaticRegisterNativesUIKRig_FBIKBoneSettings,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRig_FBIKBoneSettings>,
               InternalVTableHelperCtorCaller<UIKRig_FBIKBoneSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_FBIKBoneSettings.InnerSingleton;
}

// UIKRig_FBIKBoneSettings @ 14df1a730

UIKRig_FBIKBoneSettings * __thiscall
UIKRig_FBIKBoneSettings::UIKRig_FBIKBoneSettings
          (UIKRig_FBIKBoneSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UIKRig_FBIKBoneSettings__6B_;
  (this->Bone).ComparisonIndex = 0;
  (this->Bone).Number = 0;
  this->RotationStiffness = 0.0;
  this->PositionStiffness = 0.0;
  this->MinX = 0.0;
  this->MaxX = 0.0;
  this->MinY = 0.0;
  this->MaxY = 0.0;
  this->MinZ = 0.0;
  this->MaxZ = 0.0;
  this->bUsePreferredAngles = false;
  return this;
}

// UIKRig_FBIKBoneSettings @ 14df1a770

UIKRig_FBIKBoneSettings * __thiscall
UIKRig_FBIKBoneSettings::UIKRig_FBIKBoneSettings
          (UIKRig_FBIKBoneSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UIKRig_FBIKBoneSettings__6B_;
  (this->Bone).ComparisonIndex = 0;
  (this->Bone).Number = 0;
  this->RotationStiffness = 0.0;
  this->PositionStiffness = 0.0;
  this->MinX = 0.0;
  this->MaxX = 0.0;
  this->MinY = 0.0;
  this->MaxY = 0.0;
  this->MinZ = 0.0;
  this->MaxZ = 0.0;
  this->bUsePreferredAngles = false;
  return this;
}

// ~UIKRig_FBIKBoneSettings @ 14df1c880

void __thiscall UIKRig_FBIKBoneSettings::~UIKRig_FBIKBoneSettings(UIKRig_FBIKBoneSettings *this)

{
  this->_padding_ = (longlong)&___7UIKRig_FBIKBoneSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3d920

UClass * __cdecl UIKRig_FBIKBoneSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_FBIKBoneSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_FBIKBoneSettings",
               &Z_Registration_Info_UClass_UIKRig_FBIKBoneSettings.InnerSingleton,
               StaticRegisterNativesUIKRig_FBIKBoneSettings,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRig_FBIKBoneSettings>,
               InternalVTableHelperCtorCaller<UIKRig_FBIKBoneSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_FBIKBoneSettings.InnerSingleton;
}

// StaticRegisterNativesUIKRig_FBIKBoneSettings @ 14df5a2e0

void __cdecl UIKRig_FBIKBoneSettings::StaticRegisterNativesUIKRig_FBIKBoneSettings(void)

{
  return;
}

