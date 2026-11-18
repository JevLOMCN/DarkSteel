// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// StaticClass @ 14283bf10

UClass * __cdecl UScrollBoxWidgetStyle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScrollBoxWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"ScrollBoxWidgetStyle",
               &Z_Registration_Info_UClass_UScrollBoxWidgetStyle.InnerSingleton,
               StaticRegisterNativesUScrollBoxWidgetStyle,800,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UScrollBoxWidgetStyle>,
               InternalVTableHelperCtorCaller<UScrollBoxWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScrollBoxWidgetStyle.InnerSingleton;
}

// UScrollBoxWidgetStyle @ 142848be0

UScrollBoxWidgetStyle * __thiscall
UScrollBoxWidgetStyle::UScrollBoxWidgetStyle(UScrollBoxWidgetStyle *this,FVTableHelper *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FScrollBoxStyle::FScrollBoxStyle(&this->ScrollBoxStyle);
  return this;
}

// UScrollBoxWidgetStyle @ 142848c20

UScrollBoxWidgetStyle * __thiscall
UScrollBoxWidgetStyle::UScrollBoxWidgetStyle
          (UScrollBoxWidgetStyle *this,FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FScrollBoxStyle::FScrollBoxStyle(&this->ScrollBoxStyle);
  return this;
}

// ~UScrollBoxWidgetStyle @ 14284b220

void __thiscall UScrollBoxWidgetStyle::~UScrollBoxWidgetStyle(UScrollBoxWidgetStyle *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FScrollBoxStyle::~FScrollBoxStyle(&this->ScrollBoxStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  return;
}

// GetPrivateStaticClass @ 142879560

UClass * __cdecl UScrollBoxWidgetStyle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScrollBoxWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"ScrollBoxWidgetStyle",
               &Z_Registration_Info_UClass_UScrollBoxWidgetStyle.InnerSingleton,
               StaticRegisterNativesUScrollBoxWidgetStyle,800,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UScrollBoxWidgetStyle>,
               InternalVTableHelperCtorCaller<UScrollBoxWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScrollBoxWidgetStyle.InnerSingleton;
}

// GetStyle @ 14287aef0

FSlateWidgetStyle * __thiscall UScrollBoxWidgetStyle::GetStyle(UScrollBoxWidgetStyle *this)

{
  return (FSlateWidgetStyle *)&this->_padding_;
}

// StaticRegisterNativesUScrollBoxWidgetStyle @ 14289d050

void __cdecl UScrollBoxWidgetStyle::StaticRegisterNativesUScrollBoxWidgetStyle(void)

{
  return;
}

