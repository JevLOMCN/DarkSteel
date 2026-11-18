// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// StaticClass @ 14283c5d0

UClass * __cdecl UButtonWidgetStyle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UButtonWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"ButtonWidgetStyle",
               &Z_Registration_Info_UClass_UButtonWidgetStyle.InnerSingleton,
               StaticRegisterNativesUButtonWidgetStyle,0x3c0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UButtonWidgetStyle>,
               InternalVTableHelperCtorCaller<UButtonWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UButtonWidgetStyle.InnerSingleton;
}

// UButtonWidgetStyle @ 1428487e0

UButtonWidgetStyle * __thiscall
UButtonWidgetStyle::UButtonWidgetStyle(UButtonWidgetStyle *this,FVTableHelper *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FButtonStyle::FButtonStyle(&this->ButtonStyle);
  return this;
}

// UButtonWidgetStyle @ 142848820

UButtonWidgetStyle * __thiscall
UButtonWidgetStyle::UButtonWidgetStyle(UButtonWidgetStyle *this,FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FButtonStyle::FButtonStyle(&this->ButtonStyle);
  return this;
}

// ~UButtonWidgetStyle @ 14284b020

void __thiscall UButtonWidgetStyle::~UButtonWidgetStyle(UButtonWidgetStyle *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FButtonStyle::~FButtonStyle(&this->ButtonStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  return;
}

// GetPrivateStaticClass @ 142878f60

UClass * __cdecl UButtonWidgetStyle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UButtonWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"ButtonWidgetStyle",
               &Z_Registration_Info_UClass_UButtonWidgetStyle.InnerSingleton,
               StaticRegisterNativesUButtonWidgetStyle,0x3c0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UButtonWidgetStyle>,
               InternalVTableHelperCtorCaller<UButtonWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UButtonWidgetStyle.InnerSingleton;
}

// GetStyle @ 14287ae70

FSlateWidgetStyle * __thiscall UButtonWidgetStyle::GetStyle(UButtonWidgetStyle *this)

{
  return (FSlateWidgetStyle *)&this->_padding_;
}

// StaticRegisterNativesUButtonWidgetStyle @ 14289cfd0

void __cdecl UButtonWidgetStyle::StaticRegisterNativesUButtonWidgetStyle(void)

{
  return;
}

