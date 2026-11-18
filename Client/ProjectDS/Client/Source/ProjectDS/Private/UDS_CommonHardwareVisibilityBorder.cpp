// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b460ac0

UClass * __cdecl UDS_CommonHardwareVisibilityBorder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonHardwareVisibilityBorder.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonHardwareVisibilityBorder",
               &Z_Registration_Info_UClass_UDS_CommonHardwareVisibilityBorder.InnerSingleton,
               StaticRegisterNativesUDS_CommonHardwareVisibilityBorder,0x400,0x10,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"CommonUI",
               InternalConstructor<UDS_CommonHardwareVisibilityBorder>,
               InternalVTableHelperCtorCaller<UDS_CommonHardwareVisibilityBorder>,local_res8,
               UCommonHardwareVisibilityBorder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonHardwareVisibilityBorder.InnerSingleton;
}

// UDS_CommonHardwareVisibilityBorder @ 14b4657e0

UDS_CommonHardwareVisibilityBorder * __thiscall
UDS_CommonHardwareVisibilityBorder::UDS_CommonHardwareVisibilityBorder
          (UDS_CommonHardwareVisibilityBorder *this,FVTableHelper *param_1)

{
  UCommonHardwareVisibilityBorder::UCommonHardwareVisibilityBorder
            ((UCommonHardwareVisibilityBorder *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_CommonHardwareVisibilityBorder @ 14b466510

void __thiscall
UDS_CommonHardwareVisibilityBorder::~UDS_CommonHardwareVisibilityBorder
          (UDS_CommonHardwareVisibilityBorder *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UCommonHardwareVisibilityBorder::~UCommonHardwareVisibilityBorder
            ((UCommonHardwareVisibilityBorder *)this);
  return;
}

// GetPrivateStaticClass @ 14b468020

UClass * __cdecl UDS_CommonHardwareVisibilityBorder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonHardwareVisibilityBorder.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonHardwareVisibilityBorder",
               &Z_Registration_Info_UClass_UDS_CommonHardwareVisibilityBorder.InnerSingleton,
               StaticRegisterNativesUDS_CommonHardwareVisibilityBorder,0x400,0x10,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"CommonUI",
               InternalConstructor<UDS_CommonHardwareVisibilityBorder>,
               InternalVTableHelperCtorCaller<UDS_CommonHardwareVisibilityBorder>,local_res8,
               UCommonHardwareVisibilityBorder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonHardwareVisibilityBorder.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonHardwareVisibilityBorder @ 14b468c50

void __cdecl
UDS_CommonHardwareVisibilityBorder::StaticRegisterNativesUDS_CommonHardwareVisibilityBorder(void)

{
  return;
}

// UDS_CommonHardwareVisibilityBorder @ 14bc83510

UDS_CommonHardwareVisibilityBorder * __thiscall
UDS_CommonHardwareVisibilityBorder::UDS_CommonHardwareVisibilityBorder
          (UDS_CommonHardwareVisibilityBorder *this,FObjectInitializer *param_1)

{
  UCommonHardwareVisibilityBorder::UCommonHardwareVisibilityBorder
            ((UCommonHardwareVisibilityBorder *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

