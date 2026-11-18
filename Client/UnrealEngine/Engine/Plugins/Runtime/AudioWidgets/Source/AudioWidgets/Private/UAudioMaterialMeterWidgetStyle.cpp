// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 7

// StaticClass @ 14d88fb80

UClass * __cdecl UAudioMaterialMeterWidgetStyle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialMeterWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialMeterWidgetStyle",
               &Z_Registration_Info_UClass_UAudioMaterialMeterWidgetStyle.InnerSingleton,
               StaticRegisterNativesUAudioMaterialMeterWidgetStyle,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioMaterialMeterWidgetStyle>,
               InternalVTableHelperCtorCaller<UAudioMaterialMeterWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialMeterWidgetStyle.InnerSingleton;
}

// UAudioMaterialMeterWidgetStyle @ 14d8b9150

UAudioMaterialMeterWidgetStyle * __thiscall
UAudioMaterialMeterWidgetStyle::UAudioMaterialMeterWidgetStyle
          (UAudioMaterialMeterWidgetStyle *this,FVTableHelper *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FAudioMaterialMeterStyle::FAudioMaterialMeterStyle(&this->MeterStyle);
  return this;
}

// UAudioMaterialMeterWidgetStyle @ 14d8b9190

UAudioMaterialMeterWidgetStyle * __thiscall
UAudioMaterialMeterWidgetStyle::UAudioMaterialMeterWidgetStyle
          (UAudioMaterialMeterWidgetStyle *this,FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FAudioMaterialMeterStyle::FAudioMaterialMeterStyle(&this->MeterStyle);
  return this;
}

// ~UAudioMaterialMeterWidgetStyle @ 14d8c1380

void __thiscall
UAudioMaterialMeterWidgetStyle::~UAudioMaterialMeterWidgetStyle
          (UAudioMaterialMeterWidgetStyle *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MeterStyle).Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->MeterStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14d933960

UClass * __cdecl UAudioMaterialMeterWidgetStyle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialMeterWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialMeterWidgetStyle",
               &Z_Registration_Info_UClass_UAudioMaterialMeterWidgetStyle.InnerSingleton,
               StaticRegisterNativesUAudioMaterialMeterWidgetStyle,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioMaterialMeterWidgetStyle>,
               InternalVTableHelperCtorCaller<UAudioMaterialMeterWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialMeterWidgetStyle.InnerSingleton;
}

// GetStyle @ 14d9370c0

FSlateWidgetStyle * __thiscall
UAudioMaterialMeterWidgetStyle::GetStyle(UAudioMaterialMeterWidgetStyle *this)

{
  return (FSlateWidgetStyle *)&this->_padding_;
}

// StaticRegisterNativesUAudioMaterialMeterWidgetStyle @ 14d971c60

void __cdecl
UAudioMaterialMeterWidgetStyle::StaticRegisterNativesUAudioMaterialMeterWidgetStyle(void)

{
  return;
}

