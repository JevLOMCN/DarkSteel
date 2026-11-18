// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// StaticClass @ 14283bb90

UClass * __cdecl UEditableTextWidgetStyle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableTextWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"EditableTextWidgetStyle",
               &Z_Registration_Info_UClass_UEditableTextWidgetStyle.InnerSingleton,
               StaticRegisterNativesUEditableTextWidgetStyle,0x2c0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEditableTextWidgetStyle>,
               InternalVTableHelperCtorCaller<UEditableTextWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableTextWidgetStyle.InnerSingleton;
}

// UEditableTextWidgetStyle @ 142848a60

UEditableTextWidgetStyle * __thiscall
UEditableTextWidgetStyle::UEditableTextWidgetStyle
          (UEditableTextWidgetStyle *this,FVTableHelper *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FEditableTextStyle::FEditableTextStyle(&this->EditableTextStyle);
  return this;
}

// UEditableTextWidgetStyle @ 142848aa0

UEditableTextWidgetStyle * __thiscall
UEditableTextWidgetStyle::UEditableTextWidgetStyle
          (UEditableTextWidgetStyle *this,FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FEditableTextStyle::FEditableTextStyle(&this->EditableTextStyle);
  return this;
}

// ~UEditableTextWidgetStyle @ 14284b160

void __thiscall UEditableTextWidgetStyle::~UEditableTextWidgetStyle(UEditableTextWidgetStyle *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FEditableTextStyle::~FEditableTextStyle(&this->EditableTextStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  return;
}

// GetPrivateStaticClass @ 142879320

UClass * __cdecl UEditableTextWidgetStyle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableTextWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"EditableTextWidgetStyle",
               &Z_Registration_Info_UClass_UEditableTextWidgetStyle.InnerSingleton,
               StaticRegisterNativesUEditableTextWidgetStyle,0x2c0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEditableTextWidgetStyle>,
               InternalVTableHelperCtorCaller<UEditableTextWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableTextWidgetStyle.InnerSingleton;
}

// GetStyle @ 14287aec0

FSlateWidgetStyle * __thiscall UEditableTextWidgetStyle::GetStyle(UEditableTextWidgetStyle *this)

{
  return (FSlateWidgetStyle *)&this->_padding_;
}

// StaticRegisterNativesUEditableTextWidgetStyle @ 14289d020

void __cdecl UEditableTextWidgetStyle::StaticRegisterNativesUEditableTextWidgetStyle(void)

{
  return;
}

