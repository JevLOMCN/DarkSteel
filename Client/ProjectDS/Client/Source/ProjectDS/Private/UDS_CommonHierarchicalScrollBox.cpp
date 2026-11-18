// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b463200

UClass * __cdecl UDS_CommonHierarchicalScrollBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonHierarchicalScrollBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonHierarchicalScrollBox",
               &Z_Registration_Info_UClass_UDS_CommonHierarchicalScrollBox.InnerSingleton,
               StaticRegisterNativesUDS_CommonHierarchicalScrollBox,0xbf0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CommonHierarchicalScrollBox>,
               InternalVTableHelperCtorCaller<UDS_CommonHierarchicalScrollBox>,local_res8,
               UCommonHierarchicalScrollBox::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonHierarchicalScrollBox.InnerSingleton;
}

// UDS_CommonHierarchicalScrollBox @ 14b465820

UDS_CommonHierarchicalScrollBox * __thiscall
UDS_CommonHierarchicalScrollBox::UDS_CommonHierarchicalScrollBox
          (UDS_CommonHierarchicalScrollBox *this,FVTableHelper *param_1)

{
  UCommonHierarchicalScrollBox::UCommonHierarchicalScrollBox
            ((UCommonHierarchicalScrollBox *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_CommonHierarchicalScrollBox @ 14b466530

void __thiscall
UDS_CommonHierarchicalScrollBox::~UDS_CommonHierarchicalScrollBox
          (UDS_CommonHierarchicalScrollBox *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UCommonHierarchicalScrollBox::~UCommonHierarchicalScrollBox((UCommonHierarchicalScrollBox *)this);
  return;
}

// GetPrivateStaticClass @ 14b4680e0

UClass * __cdecl UDS_CommonHierarchicalScrollBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonHierarchicalScrollBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonHierarchicalScrollBox",
               &Z_Registration_Info_UClass_UDS_CommonHierarchicalScrollBox.InnerSingleton,
               StaticRegisterNativesUDS_CommonHierarchicalScrollBox,0xbf0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CommonHierarchicalScrollBox>,
               InternalVTableHelperCtorCaller<UDS_CommonHierarchicalScrollBox>,local_res8,
               UCommonHierarchicalScrollBox::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonHierarchicalScrollBox.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonHierarchicalScrollBox @ 14b468c60

void __cdecl
UDS_CommonHierarchicalScrollBox::StaticRegisterNativesUDS_CommonHierarchicalScrollBox(void)

{
  return;
}

// UDS_CommonHierarchicalScrollBox @ 14bc83550

UDS_CommonHierarchicalScrollBox * __thiscall
UDS_CommonHierarchicalScrollBox::UDS_CommonHierarchicalScrollBox
          (UDS_CommonHierarchicalScrollBox *this,FObjectInitializer *param_1)

{
  UCommonHierarchicalScrollBox::UCommonHierarchicalScrollBox
            ((UCommonHierarchicalScrollBox *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

