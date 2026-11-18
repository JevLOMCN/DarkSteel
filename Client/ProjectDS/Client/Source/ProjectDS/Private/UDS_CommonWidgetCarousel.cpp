// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b46bb80

UClass * __cdecl UDS_CommonWidgetCarousel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonWidgetCarousel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonWidgetCarousel",
               &Z_Registration_Info_UClass_UDS_CommonWidgetCarousel.InnerSingleton,
               StaticRegisterNativesUDS_CommonWidgetCarousel,0x220,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CommonWidgetCarousel>,
               InternalVTableHelperCtorCaller<UDS_CommonWidgetCarousel>,local_res8,
               UCommonWidgetCarousel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonWidgetCarousel.InnerSingleton;
}

// UDS_CommonWidgetCarousel @ 14b4707b0

UDS_CommonWidgetCarousel * __thiscall
UDS_CommonWidgetCarousel::UDS_CommonWidgetCarousel
          (UDS_CommonWidgetCarousel *this,FVTableHelper *param_1)

{
  UCommonWidgetCarousel::UCommonWidgetCarousel((UCommonWidgetCarousel *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_CommonWidgetCarousel @ 14b472320

void __thiscall UDS_CommonWidgetCarousel::~UDS_CommonWidgetCarousel(UDS_CommonWidgetCarousel *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UCommonWidgetCarousel::~UCommonWidgetCarousel((UCommonWidgetCarousel *)this);
  return;
}

// GetPrivateStaticClass @ 14b4751e0

UClass * __cdecl UDS_CommonWidgetCarousel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonWidgetCarousel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonWidgetCarousel",
               &Z_Registration_Info_UClass_UDS_CommonWidgetCarousel.InnerSingleton,
               StaticRegisterNativesUDS_CommonWidgetCarousel,0x220,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CommonWidgetCarousel>,
               InternalVTableHelperCtorCaller<UDS_CommonWidgetCarousel>,local_res8,
               UCommonWidgetCarousel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonWidgetCarousel.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonWidgetCarousel @ 14b476c60

void __cdecl UDS_CommonWidgetCarousel::StaticRegisterNativesUDS_CommonWidgetCarousel(void)

{
  return;
}

// UDS_CommonWidgetCarousel @ 14bc83c80

UDS_CommonWidgetCarousel * __thiscall
UDS_CommonWidgetCarousel::UDS_CommonWidgetCarousel
          (UDS_CommonWidgetCarousel *this,FObjectInitializer *param_1)

{
  UCommonWidgetCarousel::UCommonWidgetCarousel((UCommonWidgetCarousel *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

