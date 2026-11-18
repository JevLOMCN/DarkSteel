// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 6

// StaticClass @ 14deebad0

UClass * __cdecl UIKRig_SetTransformEffector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_SetTransformEffector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_SetTransformEffector",
               &Z_Registration_Info_UClass_UIKRig_SetTransformEffector.InnerSingleton,
               StaticRegisterNativesUIKRig_SetTransformEffector,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRig_SetTransformEffector>,
               InternalVTableHelperCtorCaller<UIKRig_SetTransformEffector>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_SetTransformEffector.InnerSingleton;
}

// UIKRig_SetTransformEffector @ 14df1aa00

UIKRig_SetTransformEffector * __thiscall
UIKRig_SetTransformEffector::UIKRig_SetTransformEffector
          (UIKRig_SetTransformEffector *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bEnablePosition = true;
  this->bEnableRotation = true;
  this->_padding_ = (longlong)&___7UIKRig_SetTransformEffector__6B_;
  this->Alpha = 1.0;
  return this;
}

// UIKRig_SetTransformEffector @ 14df1aa40

UIKRig_SetTransformEffector * __thiscall
UIKRig_SetTransformEffector::UIKRig_SetTransformEffector
          (UIKRig_SetTransformEffector *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bEnablePosition = true;
  this->bEnableRotation = true;
  this->_padding_ = (longlong)&___7UIKRig_SetTransformEffector__6B_;
  this->Alpha = 1.0;
  return this;
}

// ~UIKRig_SetTransformEffector @ 14df1c960

void __thiscall
UIKRig_SetTransformEffector::~UIKRig_SetTransformEffector(UIKRig_SetTransformEffector *this)

{
  this->_padding_ = (longlong)&___7UIKRig_SetTransformEffector__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3de20

UClass * __cdecl UIKRig_SetTransformEffector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_SetTransformEffector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_SetTransformEffector",
               &Z_Registration_Info_UClass_UIKRig_SetTransformEffector.InnerSingleton,
               StaticRegisterNativesUIKRig_SetTransformEffector,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRig_SetTransformEffector>,
               InternalVTableHelperCtorCaller<UIKRig_SetTransformEffector>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_SetTransformEffector.InnerSingleton;
}

// StaticRegisterNativesUIKRig_SetTransformEffector @ 14df5a350

void __cdecl UIKRig_SetTransformEffector::StaticRegisterNativesUIKRig_SetTransformEffector(void)

{
  return;
}

