// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// StaticClass @ 14283bd90

UClass * __cdecl UScrollBarWidgetStyle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScrollBarWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"ScrollBarWidgetStyle",
               &Z_Registration_Info_UClass_UScrollBarWidgetStyle.InnerSingleton,
               StaticRegisterNativesUScrollBarWidgetStyle,0x680,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UScrollBarWidgetStyle>,
               InternalVTableHelperCtorCaller<UScrollBarWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScrollBarWidgetStyle.InnerSingleton;
}

// UScrollBarWidgetStyle @ 142848b60

UScrollBarWidgetStyle * __thiscall
UScrollBarWidgetStyle::UScrollBarWidgetStyle(UScrollBarWidgetStyle *this,FVTableHelper *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FScrollBarStyle::FScrollBarStyle(&this->ScrollBarStyle);
  return this;
}

// UScrollBarWidgetStyle @ 142848ba0

UScrollBarWidgetStyle * __thiscall
UScrollBarWidgetStyle::UScrollBarWidgetStyle
          (UScrollBarWidgetStyle *this,FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FScrollBarStyle::FScrollBarStyle(&this->ScrollBarStyle);
  return this;
}

// ~UScrollBarWidgetStyle @ 14284b1e0

void __thiscall UScrollBarWidgetStyle::~UScrollBarWidgetStyle(UScrollBarWidgetStyle *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FScrollBarStyle::~FScrollBarStyle(&this->ScrollBarStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  return;
}

// GetPrivateStaticClass @ 1428794a0

UClass * __cdecl UScrollBarWidgetStyle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScrollBarWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"ScrollBarWidgetStyle",
               &Z_Registration_Info_UClass_UScrollBarWidgetStyle.InnerSingleton,
               StaticRegisterNativesUScrollBarWidgetStyle,0x680,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UScrollBarWidgetStyle>,
               InternalVTableHelperCtorCaller<UScrollBarWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScrollBarWidgetStyle.InnerSingleton;
}

// GetStyle @ 14287aee0

FSlateWidgetStyle * __thiscall UScrollBarWidgetStyle::GetStyle(UScrollBarWidgetStyle *this)

{
  return (FSlateWidgetStyle *)&this->_padding_;
}

// StaticRegisterNativesUScrollBarWidgetStyle @ 14289d040

void __cdecl UScrollBarWidgetStyle::StaticRegisterNativesUScrollBarWidgetStyle(void)

{
  return;
}

