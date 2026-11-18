// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// StaticClass @ 14283bc90

UClass * __cdecl UProgressWidgetStyle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProgressWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"ProgressWidgetStyle",
               &Z_Registration_Info_UClass_UProgressWidgetStyle.InnerSingleton,
               StaticRegisterNativesUProgressWidgetStyle,0x260,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UProgressWidgetStyle>,
               InternalVTableHelperCtorCaller<UProgressWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProgressWidgetStyle.InnerSingleton;
}

// UProgressWidgetStyle @ 142848ae0

UProgressWidgetStyle * __thiscall
UProgressWidgetStyle::UProgressWidgetStyle(UProgressWidgetStyle *this,FVTableHelper *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FProgressBarStyle::FProgressBarStyle(&this->ProgressBarStyle);
  return this;
}

// UProgressWidgetStyle @ 142848b20

UProgressWidgetStyle * __thiscall
UProgressWidgetStyle::UProgressWidgetStyle(UProgressWidgetStyle *this,FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FProgressBarStyle::FProgressBarStyle(&this->ProgressBarStyle);
  return this;
}

// ~UProgressWidgetStyle @ 14284b1a0

void __thiscall UProgressWidgetStyle::~UProgressWidgetStyle(UProgressWidgetStyle *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FProgressBarStyle::~FProgressBarStyle(&this->ProgressBarStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  return;
}

// GetPrivateStaticClass @ 1428793e0

UClass * __cdecl UProgressWidgetStyle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProgressWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"ProgressWidgetStyle",
               &Z_Registration_Info_UClass_UProgressWidgetStyle.InnerSingleton,
               StaticRegisterNativesUProgressWidgetStyle,0x260,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UProgressWidgetStyle>,
               InternalVTableHelperCtorCaller<UProgressWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProgressWidgetStyle.InnerSingleton;
}

// GetStyle @ 14287aed0

FSlateWidgetStyle * __thiscall UProgressWidgetStyle::GetStyle(UProgressWidgetStyle *this)

{
  return (FSlateWidgetStyle *)&this->_padding_;
}

// StaticRegisterNativesUProgressWidgetStyle @ 14289d030

void __cdecl UProgressWidgetStyle::StaticRegisterNativesUProgressWidgetStyle(void)

{
  return;
}

