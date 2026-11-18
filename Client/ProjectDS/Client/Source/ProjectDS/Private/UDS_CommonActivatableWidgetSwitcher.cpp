// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b4574a0

UClass * __cdecl UDS_CommonActivatableWidgetSwitcher::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonActivatableWidgetSwitcher.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonActivatableWidgetSwitcher",
               &Z_Registration_Info_UClass_UDS_CommonActivatableWidgetSwitcher.InnerSingleton,
               StaticRegisterNativesUDS_CommonActivatableWidgetSwitcher,0x290,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CommonActivatableWidgetSwitcher>,
               InternalVTableHelperCtorCaller<UDS_CommonActivatableWidgetSwitcher>,local_res8,
               UCommonActivatableWidgetSwitcher::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonActivatableWidgetSwitcher.InnerSingleton;
}

// UDS_CommonActivatableWidgetSwitcher @ 14b45ca90

UDS_CommonActivatableWidgetSwitcher * __thiscall
UDS_CommonActivatableWidgetSwitcher::UDS_CommonActivatableWidgetSwitcher
          (UDS_CommonActivatableWidgetSwitcher *this,FVTableHelper *param_1)

{
  UCommonActivatableWidgetSwitcher::UCommonActivatableWidgetSwitcher
            ((UCommonActivatableWidgetSwitcher *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// UDS_CommonActivatableWidgetSwitcher @ 14b45cad0

UDS_CommonActivatableWidgetSwitcher * __thiscall
UDS_CommonActivatableWidgetSwitcher::UDS_CommonActivatableWidgetSwitcher
          (UDS_CommonActivatableWidgetSwitcher *this,FObjectInitializer *param_1)

{
  UCommonActivatableWidgetSwitcher::UCommonActivatableWidgetSwitcher
            ((UCommonActivatableWidgetSwitcher *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_CommonActivatableWidgetSwitcher @ 14b45d180

void __thiscall
UDS_CommonActivatableWidgetSwitcher::~UDS_CommonActivatableWidgetSwitcher
          (UDS_CommonActivatableWidgetSwitcher *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UCommonActivatableWidgetSwitcher::~UCommonActivatableWidgetSwitcher
            ((UCommonActivatableWidgetSwitcher *)this);
  return;
}

// GetPrivateStaticClass @ 14b45ee00

UClass * __cdecl UDS_CommonActivatableWidgetSwitcher::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonActivatableWidgetSwitcher.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonActivatableWidgetSwitcher",
               &Z_Registration_Info_UClass_UDS_CommonActivatableWidgetSwitcher.InnerSingleton,
               StaticRegisterNativesUDS_CommonActivatableWidgetSwitcher,0x290,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CommonActivatableWidgetSwitcher>,
               InternalVTableHelperCtorCaller<UDS_CommonActivatableWidgetSwitcher>,local_res8,
               UCommonActivatableWidgetSwitcher::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonActivatableWidgetSwitcher.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonActivatableWidgetSwitcher @ 14b45f2a0

void __cdecl
UDS_CommonActivatableWidgetSwitcher::StaticRegisterNativesUDS_CommonActivatableWidgetSwitcher(void)

{
  return;
}

