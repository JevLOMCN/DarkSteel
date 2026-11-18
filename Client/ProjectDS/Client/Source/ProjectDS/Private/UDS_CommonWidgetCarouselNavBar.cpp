// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b46ca00

UClass * __cdecl UDS_CommonWidgetCarouselNavBar::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonWidgetCarouselNavBar.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonWidgetCarouselNavBar",
               &Z_Registration_Info_UClass_UDS_CommonWidgetCarouselNavBar.InnerSingleton,
               StaticRegisterNativesUDS_CommonWidgetCarouselNavBar,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CommonWidgetCarouselNavBar>,
               InternalVTableHelperCtorCaller<UDS_CommonWidgetCarouselNavBar>,local_res8,
               UCommonWidgetCarouselNavBar::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonWidgetCarouselNavBar.InnerSingleton;
}

// UDS_CommonWidgetCarouselNavBar @ 14b4707f0

UDS_CommonWidgetCarouselNavBar * __thiscall
UDS_CommonWidgetCarouselNavBar::UDS_CommonWidgetCarouselNavBar
          (UDS_CommonWidgetCarouselNavBar *this,FVTableHelper *param_1)

{
  UCommonWidgetCarouselNavBar::UCommonWidgetCarouselNavBar
            ((UCommonWidgetCarouselNavBar *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_CommonWidgetCarouselNavBar @ 14b472340

void __thiscall
UDS_CommonWidgetCarouselNavBar::~UDS_CommonWidgetCarouselNavBar
          (UDS_CommonWidgetCarouselNavBar *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UCommonWidgetCarouselNavBar::~UCommonWidgetCarouselNavBar((UCommonWidgetCarouselNavBar *)this);
  return;
}

// GetPrivateStaticClass @ 14b4752a0

UClass * __cdecl UDS_CommonWidgetCarouselNavBar::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonWidgetCarouselNavBar.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonWidgetCarouselNavBar",
               &Z_Registration_Info_UClass_UDS_CommonWidgetCarouselNavBar.InnerSingleton,
               StaticRegisterNativesUDS_CommonWidgetCarouselNavBar,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CommonWidgetCarouselNavBar>,
               InternalVTableHelperCtorCaller<UDS_CommonWidgetCarouselNavBar>,local_res8,
               UCommonWidgetCarouselNavBar::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonWidgetCarouselNavBar.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonWidgetCarouselNavBar @ 14b476c70

void __cdecl
UDS_CommonWidgetCarouselNavBar::StaticRegisterNativesUDS_CommonWidgetCarouselNavBar(void)

{
  return;
}

// UDS_CommonWidgetCarouselNavBar @ 14bc83cc0

UDS_CommonWidgetCarouselNavBar * __thiscall
UDS_CommonWidgetCarouselNavBar::UDS_CommonWidgetCarouselNavBar
          (UDS_CommonWidgetCarouselNavBar *this,FObjectInitializer *param_1)

{
  UCommonWidgetCarouselNavBar::UCommonWidgetCarouselNavBar
            ((UCommonWidgetCarouselNavBar *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

