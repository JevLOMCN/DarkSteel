// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b462c10

UClass * __cdecl UDS_CommonDateTimeTextBlock::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonDateTimeTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonDateTimeTextBlock",
               &Z_Registration_Info_UClass_UDS_CommonDateTimeTextBlock.InnerSingleton,
               StaticRegisterNativesUDS_CommonDateTimeTextBlock,0x430,0x10,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"CommonUI",
               InternalConstructor<UDS_CommonDateTimeTextBlock>,
               InternalVTableHelperCtorCaller<UDS_CommonDateTimeTextBlock>,local_res8,
               UCommonDateTimeTextBlock::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonDateTimeTextBlock.InnerSingleton;
}

// UDS_CommonDateTimeTextBlock @ 14b4656c0

UDS_CommonDateTimeTextBlock * __thiscall
UDS_CommonDateTimeTextBlock::UDS_CommonDateTimeTextBlock
          (UDS_CommonDateTimeTextBlock *this,FVTableHelper *param_1)

{
  UCommonDateTimeTextBlock::UCommonDateTimeTextBlock((UCommonDateTimeTextBlock *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// UDS_CommonDateTimeTextBlock @ 14b465700

UDS_CommonDateTimeTextBlock * __thiscall
UDS_CommonDateTimeTextBlock::UDS_CommonDateTimeTextBlock
          (UDS_CommonDateTimeTextBlock *this,FObjectInitializer *param_1)

{
  UCommonDateTimeTextBlock::UCommonDateTimeTextBlock((UCommonDateTimeTextBlock *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_CommonDateTimeTextBlock @ 14b4664c0

void __thiscall
UDS_CommonDateTimeTextBlock::~UDS_CommonDateTimeTextBlock(UDS_CommonDateTimeTextBlock *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UCommonDateTimeTextBlock::~UCommonDateTimeTextBlock((UCommonDateTimeTextBlock *)this);
  return;
}

// GetPrivateStaticClass @ 14b467ea0

UClass * __cdecl UDS_CommonDateTimeTextBlock::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonDateTimeTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonDateTimeTextBlock",
               &Z_Registration_Info_UClass_UDS_CommonDateTimeTextBlock.InnerSingleton,
               StaticRegisterNativesUDS_CommonDateTimeTextBlock,0x430,0x10,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"CommonUI",
               InternalConstructor<UDS_CommonDateTimeTextBlock>,
               InternalVTableHelperCtorCaller<UDS_CommonDateTimeTextBlock>,local_res8,
               UCommonDateTimeTextBlock::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonDateTimeTextBlock.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonDateTimeTextBlock @ 14b468c30

void __cdecl UDS_CommonDateTimeTextBlock::StaticRegisterNativesUDS_CommonDateTimeTextBlock(void)

{
  return;
}

