// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// StaticClass @ 14283c110

UClass * __cdecl UTextBlockWidgetStyle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextBlockWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"TextBlockWidgetStyle",
               &Z_Registration_Info_UClass_UTextBlockWidgetStyle.InnerSingleton,
               StaticRegisterNativesUTextBlockWidgetStyle,0x310,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTextBlockWidgetStyle>,
               InternalVTableHelperCtorCaller<UTextBlockWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextBlockWidgetStyle.InnerSingleton;
}

// UTextBlockWidgetStyle @ 142848ce0

UTextBlockWidgetStyle * __thiscall
UTextBlockWidgetStyle::UTextBlockWidgetStyle(UTextBlockWidgetStyle *this,FVTableHelper *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FTextBlockStyle::FTextBlockStyle(&this->TextBlockStyle);
  return this;
}

// UTextBlockWidgetStyle @ 142848d20

UTextBlockWidgetStyle * __thiscall
UTextBlockWidgetStyle::UTextBlockWidgetStyle
          (UTextBlockWidgetStyle *this,FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FTextBlockStyle::FTextBlockStyle(&this->TextBlockStyle);
  return this;
}

// ~UTextBlockWidgetStyle @ 14284b2a0

void __thiscall UTextBlockWidgetStyle::~UTextBlockWidgetStyle(UTextBlockWidgetStyle *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FTextBlockStyle::~FTextBlockStyle(&this->TextBlockStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  return;
}

// GetPrivateStaticClass @ 1428796e0

UClass * __cdecl UTextBlockWidgetStyle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextBlockWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"TextBlockWidgetStyle",
               &Z_Registration_Info_UClass_UTextBlockWidgetStyle.InnerSingleton,
               StaticRegisterNativesUTextBlockWidgetStyle,0x310,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTextBlockWidgetStyle>,
               InternalVTableHelperCtorCaller<UTextBlockWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextBlockWidgetStyle.InnerSingleton;
}

// GetStyle @ 14287af10

FSlateWidgetStyle * __thiscall UTextBlockWidgetStyle::GetStyle(UTextBlockWidgetStyle *this)

{
  return (FSlateWidgetStyle *)&this->_padding_;
}

// StaticRegisterNativesUTextBlockWidgetStyle @ 14289d070

void __cdecl UTextBlockWidgetStyle::StaticRegisterNativesUTextBlockWidgetStyle(void)

{
  return;
}

