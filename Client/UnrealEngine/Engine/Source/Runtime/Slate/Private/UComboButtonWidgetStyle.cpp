// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// StaticClass @ 14283c8d0

UClass * __cdecl UComboButtonWidgetStyle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComboButtonWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"ComboButtonWidgetStyle",
               &Z_Registration_Info_UClass_UComboButtonWidgetStyle.InnerSingleton,
               StaticRegisterNativesUComboButtonWidgetStyle,0x590,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UComboButtonWidgetStyle>,
               InternalVTableHelperCtorCaller<UComboButtonWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComboButtonWidgetStyle.InnerSingleton;
}

// UComboButtonWidgetStyle @ 142848960

UComboButtonWidgetStyle * __thiscall
UComboButtonWidgetStyle::UComboButtonWidgetStyle
          (UComboButtonWidgetStyle *this,FVTableHelper *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FComboButtonStyle::FComboButtonStyle(&this->ComboButtonStyle);
  return this;
}

// UComboButtonWidgetStyle @ 1428489a0

UComboButtonWidgetStyle * __thiscall
UComboButtonWidgetStyle::UComboButtonWidgetStyle
          (UComboButtonWidgetStyle *this,FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FComboButtonStyle::FComboButtonStyle(&this->ComboButtonStyle);
  return this;
}

// ~UComboButtonWidgetStyle @ 14284b0e0

void __thiscall UComboButtonWidgetStyle::~UComboButtonWidgetStyle(UComboButtonWidgetStyle *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FComboButtonStyle::~FComboButtonStyle(&this->ComboButtonStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  return;
}

// GetPrivateStaticClass @ 1428791a0

UClass * __cdecl UComboButtonWidgetStyle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComboButtonWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"ComboButtonWidgetStyle",
               &Z_Registration_Info_UClass_UComboButtonWidgetStyle.InnerSingleton,
               StaticRegisterNativesUComboButtonWidgetStyle,0x590,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UComboButtonWidgetStyle>,
               InternalVTableHelperCtorCaller<UComboButtonWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComboButtonWidgetStyle.InnerSingleton;
}

// GetStyle @ 14287aea0

FSlateWidgetStyle * __thiscall UComboButtonWidgetStyle::GetStyle(UComboButtonWidgetStyle *this)

{
  return (FSlateWidgetStyle *)&this->_padding_;
}

// StaticRegisterNativesUComboButtonWidgetStyle @ 14289d000

void __cdecl UComboButtonWidgetStyle::StaticRegisterNativesUComboButtonWidgetStyle(void)

{
  return;
}

