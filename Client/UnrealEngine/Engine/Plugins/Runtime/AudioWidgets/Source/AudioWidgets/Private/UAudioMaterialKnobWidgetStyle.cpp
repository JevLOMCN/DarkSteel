// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 7

// StaticClass @ 14d88fa80

UClass * __cdecl UAudioMaterialKnobWidgetStyle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialKnobWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialKnobWidgetStyle",
               &Z_Registration_Info_UClass_UAudioMaterialKnobWidgetStyle.InnerSingleton,
               StaticRegisterNativesUAudioMaterialKnobWidgetStyle,0x1f0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioMaterialKnobWidgetStyle>,
               InternalVTableHelperCtorCaller<UAudioMaterialKnobWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialKnobWidgetStyle.InnerSingleton;
}

// UAudioMaterialKnobWidgetStyle @ 14d8b8e20

UAudioMaterialKnobWidgetStyle * __thiscall
UAudioMaterialKnobWidgetStyle::UAudioMaterialKnobWidgetStyle
          (UAudioMaterialKnobWidgetStyle *this,FVTableHelper *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FAudioMaterialKnobStyle::FAudioMaterialKnobStyle(&this->KnobStyle);
  return this;
}

// UAudioMaterialKnobWidgetStyle @ 14d8b8e60

UAudioMaterialKnobWidgetStyle * __thiscall
UAudioMaterialKnobWidgetStyle::UAudioMaterialKnobWidgetStyle
          (UAudioMaterialKnobWidgetStyle *this,FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FAudioMaterialKnobStyle::FAudioMaterialKnobStyle(&this->KnobStyle);
  return this;
}

// ~UAudioMaterialKnobWidgetStyle @ 14d8c1270

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UAudioMaterialKnobWidgetStyle::~UAudioMaterialKnobWidgetStyle(UAudioMaterialKnobWidgetStyle *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  *(undefined ***)&(this->KnobStyle).TextBoxStyle = &___7FAudioTextBoxStyle__6B_;
  (this->KnobStyle).TextBoxStyle.BackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->KnobStyle).TextBoxStyle.BackgroundImage.ResourceHandle.Data.SharedReferenceCount
             .ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&(this->KnobStyle).TextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->KnobStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14d9337e0

UClass * __cdecl UAudioMaterialKnobWidgetStyle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialKnobWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialKnobWidgetStyle",
               &Z_Registration_Info_UClass_UAudioMaterialKnobWidgetStyle.InnerSingleton,
               StaticRegisterNativesUAudioMaterialKnobWidgetStyle,0x1f0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioMaterialKnobWidgetStyle>,
               InternalVTableHelperCtorCaller<UAudioMaterialKnobWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialKnobWidgetStyle.InnerSingleton;
}

// GetStyle @ 14d9370b0

FSlateWidgetStyle * __thiscall
UAudioMaterialKnobWidgetStyle::GetStyle(UAudioMaterialKnobWidgetStyle *this)

{
  return (FSlateWidgetStyle *)&this->_padding_;
}

// StaticRegisterNativesUAudioMaterialKnobWidgetStyle @ 14d971c10

void __cdecl UAudioMaterialKnobWidgetStyle::StaticRegisterNativesUAudioMaterialKnobWidgetStyle(void)

{
  return;
}

