// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 7

// StaticClass @ 14d890110

UClass * __cdecl UAudioMaterialSliderWidgetStyle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialSliderWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialSliderWidgetStyle",
               &Z_Registration_Info_UClass_UAudioMaterialSliderWidgetStyle.InnerSingleton,
               StaticRegisterNativesUAudioMaterialSliderWidgetStyle,0x180,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioMaterialSliderWidgetStyle>,
               InternalVTableHelperCtorCaller<UAudioMaterialSliderWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialSliderWidgetStyle.InnerSingleton;
}

// UAudioMaterialSliderWidgetStyle @ 14d8b93b0

UAudioMaterialSliderWidgetStyle * __thiscall
UAudioMaterialSliderWidgetStyle::UAudioMaterialSliderWidgetStyle
          (UAudioMaterialSliderWidgetStyle *this,FVTableHelper *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FAudioMaterialSliderStyle::FAudioMaterialSliderStyle(&this->SliderStyle);
  return this;
}

// UAudioMaterialSliderWidgetStyle @ 14d8b93f0

UAudioMaterialSliderWidgetStyle * __thiscall
UAudioMaterialSliderWidgetStyle::UAudioMaterialSliderWidgetStyle
          (UAudioMaterialSliderWidgetStyle *this,FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FAudioMaterialSliderStyle::FAudioMaterialSliderStyle(&this->SliderStyle);
  return this;
}

// ~UAudioMaterialSliderWidgetStyle @ 14d8c1480

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UAudioMaterialSliderWidgetStyle::~UAudioMaterialSliderWidgetStyle
          (UAudioMaterialSliderWidgetStyle *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  *(undefined ***)&(this->SliderStyle).TextBoxStyle = &___7FAudioTextBoxStyle__6B_;
  (this->SliderStyle).TextBoxStyle.BackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SliderStyle).TextBoxStyle.BackgroundImage.ResourceHandle.Data.
             SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&(this->SliderStyle).TextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->SliderStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14d933ae0

UClass * __cdecl UAudioMaterialSliderWidgetStyle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialSliderWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialSliderWidgetStyle",
               &Z_Registration_Info_UClass_UAudioMaterialSliderWidgetStyle.InnerSingleton,
               StaticRegisterNativesUAudioMaterialSliderWidgetStyle,0x180,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioMaterialSliderWidgetStyle>,
               InternalVTableHelperCtorCaller<UAudioMaterialSliderWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialSliderWidgetStyle.InnerSingleton;
}

// GetStyle @ 14d9370d0

FSlateWidgetStyle * __thiscall
UAudioMaterialSliderWidgetStyle::GetStyle(UAudioMaterialSliderWidgetStyle *this)

{
  return (FSlateWidgetStyle *)&this->_padding_;
}

// StaticRegisterNativesUAudioMaterialSliderWidgetStyle @ 14d971cb0

void __cdecl
UAudioMaterialSliderWidgetStyle::StaticRegisterNativesUAudioMaterialSliderWidgetStyle(void)

{
  return;
}

