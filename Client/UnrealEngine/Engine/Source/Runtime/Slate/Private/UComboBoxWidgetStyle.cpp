// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// StaticClass @ 14283c7d0

UClass * __cdecl UComboBoxWidgetStyle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComboBoxWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"ComboBoxWidgetStyle",
               &Z_Registration_Info_UClass_UComboBoxWidgetStyle.InnerSingleton,
               StaticRegisterNativesUComboBoxWidgetStyle,0x5f0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UComboBoxWidgetStyle>,
               InternalVTableHelperCtorCaller<UComboBoxWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComboBoxWidgetStyle.InnerSingleton;
}

// UComboBoxWidgetStyle @ 1428488e0

UComboBoxWidgetStyle * __thiscall
UComboBoxWidgetStyle::UComboBoxWidgetStyle(UComboBoxWidgetStyle *this,FVTableHelper *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FComboBoxStyle::FComboBoxStyle(&this->ComboBoxStyle);
  return this;
}

// UComboBoxWidgetStyle @ 142848920

UComboBoxWidgetStyle * __thiscall
UComboBoxWidgetStyle::UComboBoxWidgetStyle(UComboBoxWidgetStyle *this,FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FComboBoxStyle::FComboBoxStyle(&this->ComboBoxStyle);
  return this;
}

// ~UComboBoxWidgetStyle @ 14284b0a0

void __thiscall UComboBoxWidgetStyle::~UComboBoxWidgetStyle(UComboBoxWidgetStyle *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FComboBoxStyle::~FComboBoxStyle(&this->ComboBoxStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  return;
}

// GetPrivateStaticClass @ 1428790e0

UClass * __cdecl UComboBoxWidgetStyle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComboBoxWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"ComboBoxWidgetStyle",
               &Z_Registration_Info_UClass_UComboBoxWidgetStyle.InnerSingleton,
               StaticRegisterNativesUComboBoxWidgetStyle,0x5f0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UComboBoxWidgetStyle>,
               InternalVTableHelperCtorCaller<UComboBoxWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComboBoxWidgetStyle.InnerSingleton;
}

// GetStyle @ 14287ae90

FSlateWidgetStyle * __thiscall UComboBoxWidgetStyle::GetStyle(UComboBoxWidgetStyle *this)

{
  return (FSlateWidgetStyle *)&this->_padding_;
}

// StaticRegisterNativesUComboBoxWidgetStyle @ 14289cff0

void __cdecl UComboBoxWidgetStyle::StaticRegisterNativesUComboBoxWidgetStyle(void)

{
  return;
}

