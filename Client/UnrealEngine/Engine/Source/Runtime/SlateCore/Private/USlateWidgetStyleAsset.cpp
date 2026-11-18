// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 6

// StaticClass @ 14241e3a0

UClass * __cdecl USlateWidgetStyleAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateWidgetStyleAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateCore",L"SlateWidgetStyleAsset",
               &Z_Registration_Info_UClass_USlateWidgetStyleAsset.InnerSingleton,
               StaticRegisterNativesUSlateWidgetStyleAsset,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USlateWidgetStyleAsset>,
               InternalVTableHelperCtorCaller<USlateWidgetStyleAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateWidgetStyleAsset.InnerSingleton;
}

// USlateWidgetStyleAsset @ 14242e130

USlateWidgetStyleAsset * __thiscall
USlateWidgetStyleAsset::USlateWidgetStyleAsset(USlateWidgetStyleAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USlateWidgetStyleAsset__6B_;
  (this->CustomStyle).field0_0x0.DebugPtr = (USlateWidgetStyleContainerBase *)0x0;
  return this;
}

// USlateWidgetStyleAsset @ 14242e160

USlateWidgetStyleAsset * __thiscall
USlateWidgetStyleAsset::USlateWidgetStyleAsset
          (USlateWidgetStyleAsset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USlateWidgetStyleAsset__6B_;
  (this->CustomStyle).field0_0x0.DebugPtr = (USlateWidgetStyleContainerBase *)0x0;
  return this;
}

// ~USlateWidgetStyleAsset @ 14242f5a0

void __thiscall USlateWidgetStyleAsset::~USlateWidgetStyleAsset(USlateWidgetStyleAsset *this)

{
  this->_padding_ = (longlong)&___7USlateWidgetStyleAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14243f5f0

UClass * __cdecl USlateWidgetStyleAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateWidgetStyleAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateCore",L"SlateWidgetStyleAsset",
               &Z_Registration_Info_UClass_USlateWidgetStyleAsset.InnerSingleton,
               StaticRegisterNativesUSlateWidgetStyleAsset,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USlateWidgetStyleAsset>,
               InternalVTableHelperCtorCaller<USlateWidgetStyleAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateWidgetStyleAsset.InnerSingleton;
}

// StaticRegisterNativesUSlateWidgetStyleAsset @ 142452ad0

void __cdecl USlateWidgetStyleAsset::StaticRegisterNativesUSlateWidgetStyleAsset(void)

{
  return;
}

