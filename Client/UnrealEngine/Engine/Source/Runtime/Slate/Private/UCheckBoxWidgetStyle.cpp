// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// StaticClass @ 14283c6d0

UClass * __cdecl UCheckBoxWidgetStyle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCheckBoxWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"CheckBoxWidgetStyle",
               &Z_Registration_Info_UClass_UCheckBoxWidgetStyle.InnerSingleton,
               StaticRegisterNativesUCheckBoxWidgetStyle,0x980,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCheckBoxWidgetStyle>,
               InternalVTableHelperCtorCaller<UCheckBoxWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCheckBoxWidgetStyle.InnerSingleton;
}

// UCheckBoxWidgetStyle @ 142848860

UCheckBoxWidgetStyle * __thiscall
UCheckBoxWidgetStyle::UCheckBoxWidgetStyle(UCheckBoxWidgetStyle *this,FVTableHelper *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FCheckBoxStyle::FCheckBoxStyle(&this->CheckBoxStyle);
  return this;
}

// UCheckBoxWidgetStyle @ 1428488a0

UCheckBoxWidgetStyle * __thiscall
UCheckBoxWidgetStyle::UCheckBoxWidgetStyle(UCheckBoxWidgetStyle *this,FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FCheckBoxStyle::FCheckBoxStyle(&this->CheckBoxStyle);
  return this;
}

// ~UCheckBoxWidgetStyle @ 14284b060

void __thiscall UCheckBoxWidgetStyle::~UCheckBoxWidgetStyle(UCheckBoxWidgetStyle *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FCheckBoxStyle::~FCheckBoxStyle(&this->CheckBoxStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  return;
}

// GetPrivateStaticClass @ 142879020

UClass * __cdecl UCheckBoxWidgetStyle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCheckBoxWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"CheckBoxWidgetStyle",
               &Z_Registration_Info_UClass_UCheckBoxWidgetStyle.InnerSingleton,
               StaticRegisterNativesUCheckBoxWidgetStyle,0x980,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCheckBoxWidgetStyle>,
               InternalVTableHelperCtorCaller<UCheckBoxWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCheckBoxWidgetStyle.InnerSingleton;
}

// GetStyle @ 14287ae80

FSlateWidgetStyle * __thiscall UCheckBoxWidgetStyle::GetStyle(UCheckBoxWidgetStyle *this)

{
  return (FSlateWidgetStyle *)&this->_padding_;
}

// StaticRegisterNativesUCheckBoxWidgetStyle @ 14289cfe0

void __cdecl UCheckBoxWidgetStyle::StaticRegisterNativesUCheckBoxWidgetStyle(void)

{
  return;
}

