// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// StaticClass @ 14283c010

UClass * __cdecl USpinBoxWidgetStyle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpinBoxWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"SpinBoxWidgetStyle",
               &Z_Registration_Info_UClass_USpinBoxWidgetStyle.InnerSingleton,
               StaticRegisterNativesUSpinBoxWidgetStyle,0x550,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USpinBoxWidgetStyle>,
               InternalVTableHelperCtorCaller<USpinBoxWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpinBoxWidgetStyle.InnerSingleton;
}

// USpinBoxWidgetStyle @ 142848c60

USpinBoxWidgetStyle * __thiscall
USpinBoxWidgetStyle::USpinBoxWidgetStyle(USpinBoxWidgetStyle *this,FVTableHelper *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FSpinBoxStyle::FSpinBoxStyle(&this->SpinBoxStyle);
  return this;
}

// USpinBoxWidgetStyle @ 142848ca0

USpinBoxWidgetStyle * __thiscall
USpinBoxWidgetStyle::USpinBoxWidgetStyle(USpinBoxWidgetStyle *this,FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FSpinBoxStyle::FSpinBoxStyle(&this->SpinBoxStyle);
  return this;
}

// ~USpinBoxWidgetStyle @ 14284b260

void __thiscall USpinBoxWidgetStyle::~USpinBoxWidgetStyle(USpinBoxWidgetStyle *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FSpinBoxStyle::~FSpinBoxStyle(&this->SpinBoxStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  return;
}

// GetPrivateStaticClass @ 142879620

UClass * __cdecl USpinBoxWidgetStyle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpinBoxWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"SpinBoxWidgetStyle",
               &Z_Registration_Info_UClass_USpinBoxWidgetStyle.InnerSingleton,
               StaticRegisterNativesUSpinBoxWidgetStyle,0x550,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USpinBoxWidgetStyle>,
               InternalVTableHelperCtorCaller<USpinBoxWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpinBoxWidgetStyle.InnerSingleton;
}

// GetStyle @ 14287af00

FSlateWidgetStyle * __thiscall USpinBoxWidgetStyle::GetStyle(USpinBoxWidgetStyle *this)

{
  return (FSlateWidgetStyle *)&this->_padding_;
}

// StaticRegisterNativesUSpinBoxWidgetStyle @ 14289d060

void __cdecl USpinBoxWidgetStyle::StaticRegisterNativesUSpinBoxWidgetStyle(void)

{
  return;
}

