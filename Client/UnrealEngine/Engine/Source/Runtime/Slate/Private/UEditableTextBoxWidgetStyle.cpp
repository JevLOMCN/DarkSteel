// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// StaticClass @ 14283c9d0

UClass * __cdecl UEditableTextBoxWidgetStyle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableTextBoxWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"EditableTextBoxWidgetStyle",
               &Z_Registration_Info_UClass_UEditableTextBoxWidgetStyle.InnerSingleton,
               StaticRegisterNativesUEditableTextBoxWidgetStyle,0xcb0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEditableTextBoxWidgetStyle>,
               InternalVTableHelperCtorCaller<UEditableTextBoxWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableTextBoxWidgetStyle.InnerSingleton;
}

// UEditableTextBoxWidgetStyle @ 1428489e0

UEditableTextBoxWidgetStyle * __thiscall
UEditableTextBoxWidgetStyle::UEditableTextBoxWidgetStyle
          (UEditableTextBoxWidgetStyle *this,FVTableHelper *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FEditableTextBoxStyle::FEditableTextBoxStyle(&this->EditableTextBoxStyle);
  return this;
}

// UEditableTextBoxWidgetStyle @ 142848a20

UEditableTextBoxWidgetStyle * __thiscall
UEditableTextBoxWidgetStyle::UEditableTextBoxWidgetStyle
          (UEditableTextBoxWidgetStyle *this,FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FEditableTextBoxStyle::FEditableTextBoxStyle(&this->EditableTextBoxStyle);
  return this;
}

// ~UEditableTextBoxWidgetStyle @ 14284b120

void __thiscall
UEditableTextBoxWidgetStyle::~UEditableTextBoxWidgetStyle(UEditableTextBoxWidgetStyle *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&this->EditableTextBoxStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  return;
}

// GetPrivateStaticClass @ 142879260

UClass * __cdecl UEditableTextBoxWidgetStyle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableTextBoxWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"EditableTextBoxWidgetStyle",
               &Z_Registration_Info_UClass_UEditableTextBoxWidgetStyle.InnerSingleton,
               StaticRegisterNativesUEditableTextBoxWidgetStyle,0xcb0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEditableTextBoxWidgetStyle>,
               InternalVTableHelperCtorCaller<UEditableTextBoxWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableTextBoxWidgetStyle.InnerSingleton;
}

// GetStyle @ 14287aeb0

FSlateWidgetStyle * __thiscall
UEditableTextBoxWidgetStyle::GetStyle(UEditableTextBoxWidgetStyle *this)

{
  return (FSlateWidgetStyle *)&this->_padding_;
}

// StaticRegisterNativesUEditableTextBoxWidgetStyle @ 14289d010

void __cdecl UEditableTextBoxWidgetStyle::StaticRegisterNativesUEditableTextBoxWidgetStyle(void)

{
  return;
}

