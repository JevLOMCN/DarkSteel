// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b46abb0

UClass * __cdecl UDS_CommonVisualAttachment::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonVisualAttachment.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonVisualAttachment",
               &Z_Registration_Info_UClass_UDS_CommonVisualAttachment.InnerSingleton,
               StaticRegisterNativesUDS_CommonVisualAttachment,0x220,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CommonVisualAttachment>,
               InternalVTableHelperCtorCaller<UDS_CommonVisualAttachment>,local_res8,
               UCommonVisualAttachment::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonVisualAttachment.InnerSingleton;
}

// UDS_CommonVisualAttachment @ 14b470730

UDS_CommonVisualAttachment * __thiscall
UDS_CommonVisualAttachment::UDS_CommonVisualAttachment
          (UDS_CommonVisualAttachment *this,FVTableHelper *param_1)

{
  UCommonVisualAttachment::UCommonVisualAttachment((UCommonVisualAttachment *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// UDS_CommonVisualAttachment @ 14b470770

UDS_CommonVisualAttachment * __thiscall
UDS_CommonVisualAttachment::UDS_CommonVisualAttachment
          (UDS_CommonVisualAttachment *this,FObjectInitializer *param_1)

{
  UCommonVisualAttachment::UCommonVisualAttachment((UCommonVisualAttachment *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_CommonVisualAttachment @ 14b472300

void __thiscall
UDS_CommonVisualAttachment::~UDS_CommonVisualAttachment(UDS_CommonVisualAttachment *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UCommonVisualAttachment::~UCommonVisualAttachment((UCommonVisualAttachment *)this);
  return;
}

// GetPrivateStaticClass @ 14b475120

UClass * __cdecl UDS_CommonVisualAttachment::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonVisualAttachment.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonVisualAttachment",
               &Z_Registration_Info_UClass_UDS_CommonVisualAttachment.InnerSingleton,
               StaticRegisterNativesUDS_CommonVisualAttachment,0x220,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CommonVisualAttachment>,
               InternalVTableHelperCtorCaller<UDS_CommonVisualAttachment>,local_res8,
               UCommonVisualAttachment::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonVisualAttachment.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonVisualAttachment @ 14b476c50

void __cdecl UDS_CommonVisualAttachment::StaticRegisterNativesUDS_CommonVisualAttachment(void)

{
  return;
}

