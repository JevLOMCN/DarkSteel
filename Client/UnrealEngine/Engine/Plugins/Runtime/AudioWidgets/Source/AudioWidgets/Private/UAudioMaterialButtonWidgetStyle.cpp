// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 7

// StaticClass @ 14d88fdc0

UClass * __cdecl UAudioMaterialButtonWidgetStyle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialButtonWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialButtonWidgetStyle",
               &Z_Registration_Info_UClass_UAudioMaterialButtonWidgetStyle.InnerSingleton,
               StaticRegisterNativesUAudioMaterialButtonWidgetStyle,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioMaterialButtonWidgetStyle>,
               InternalVTableHelperCtorCaller<UAudioMaterialButtonWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialButtonWidgetStyle.InnerSingleton;
}

// UAudioMaterialButtonWidgetStyle @ 14d8b8900

UAudioMaterialButtonWidgetStyle * __thiscall
UAudioMaterialButtonWidgetStyle::UAudioMaterialButtonWidgetStyle
          (UAudioMaterialButtonWidgetStyle *this,FVTableHelper *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FAudioMaterialButtonStyle::FAudioMaterialButtonStyle(&this->ButtonStyle);
  return this;
}

// UAudioMaterialButtonWidgetStyle @ 14d8b8940

UAudioMaterialButtonWidgetStyle * __thiscall
UAudioMaterialButtonWidgetStyle::UAudioMaterialButtonWidgetStyle
          (UAudioMaterialButtonWidgetStyle *this,FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FAudioMaterialButtonStyle::FAudioMaterialButtonStyle(&this->ButtonStyle);
  return this;
}

// ~UAudioMaterialButtonWidgetStyle @ 14d8c1130

void __thiscall
UAudioMaterialButtonWidgetStyle::~UAudioMaterialButtonWidgetStyle
          (UAudioMaterialButtonWidgetStyle *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->ButtonStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14d9335a0

UClass * __cdecl UAudioMaterialButtonWidgetStyle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialButtonWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialButtonWidgetStyle",
               &Z_Registration_Info_UClass_UAudioMaterialButtonWidgetStyle.InnerSingleton,
               StaticRegisterNativesUAudioMaterialButtonWidgetStyle,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioMaterialButtonWidgetStyle>,
               InternalVTableHelperCtorCaller<UAudioMaterialButtonWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialButtonWidgetStyle.InnerSingleton;
}

// GetStyle @ 14d9370a0

FSlateWidgetStyle * __thiscall
UAudioMaterialButtonWidgetStyle::GetStyle(UAudioMaterialButtonWidgetStyle *this)

{
  return (FSlateWidgetStyle *)&this->_padding_;
}

// StaticRegisterNativesUAudioMaterialButtonWidgetStyle @ 14d971bb0

void __cdecl
UAudioMaterialButtonWidgetStyle::StaticRegisterNativesUAudioMaterialButtonWidgetStyle(void)

{
  return;
}

