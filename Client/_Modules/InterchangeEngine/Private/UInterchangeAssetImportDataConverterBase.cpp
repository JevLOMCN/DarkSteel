// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 9

// StaticClass @ 14e4cc980

UClass * __cdecl UInterchangeAssetImportDataConverterBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAssetImportDataConverterBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeAssetImportDataConverterBase",
               &Z_Registration_Info_UClass_UInterchangeAssetImportDataConverterBase.InnerSingleton,
               StaticRegisterNativesUInterchangeAssetImportDataConverterBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeAssetImportDataConverterBase>,
               InternalVTableHelperCtorCaller<UInterchangeAssetImportDataConverterBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAssetImportDataConverterBase.InnerSingleton;
}

// UInterchangeAssetImportDataConverterBase @ 14e4d8340

UInterchangeAssetImportDataConverterBase * __thiscall
UInterchangeAssetImportDataConverterBase::UInterchangeAssetImportDataConverterBase
          (UInterchangeAssetImportDataConverterBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterchangeAssetImportDataConverterBase__6B_;
  return this;
}

// UInterchangeAssetImportDataConverterBase @ 14e4d8370

UInterchangeAssetImportDataConverterBase * __thiscall
UInterchangeAssetImportDataConverterBase::UInterchangeAssetImportDataConverterBase
          (UInterchangeAssetImportDataConverterBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterchangeAssetImportDataConverterBase__6B_;
  return this;
}

// ~UInterchangeAssetImportDataConverterBase @ 14e4dac70

void __thiscall
UInterchangeAssetImportDataConverterBase::~UInterchangeAssetImportDataConverterBase
          (UInterchangeAssetImportDataConverterBase *this)

{
  *(undefined ***)this = &___7UInterchangeAssetImportDataConverterBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CanConvertClass @ 14e4e5240

bool __thiscall
UInterchangeAssetImportDataConverterBase::CanConvertClass
          (UInterchangeAssetImportDataConverterBase *this,UClass *param_1,UClass *param_2)

{
  return false;
}

// ConvertImportData @ 14e4e64f0

bool __thiscall
UInterchangeAssetImportDataConverterBase::ConvertImportData
          (UInterchangeAssetImportDataConverterBase *this,UObject *param_1,FString *param_2)

{
  return false;
}

// ConvertImportData @ 14e4e6500

bool __thiscall
UInterchangeAssetImportDataConverterBase::ConvertImportData
          (UInterchangeAssetImportDataConverterBase *this,UObject *param_1,UClass *param_2,
          UObject **param_3)

{
  return false;
}

// GetPrivateStaticClass @ 14e4f7b90

UClass * __cdecl UInterchangeAssetImportDataConverterBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAssetImportDataConverterBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeAssetImportDataConverterBase",
               &Z_Registration_Info_UClass_UInterchangeAssetImportDataConverterBase.InnerSingleton,
               StaticRegisterNativesUInterchangeAssetImportDataConverterBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeAssetImportDataConverterBase>,
               InternalVTableHelperCtorCaller<UInterchangeAssetImportDataConverterBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAssetImportDataConverterBase.InnerSingleton;
}

// StaticRegisterNativesUInterchangeAssetImportDataConverterBase @ 14e50a9f0

void __cdecl
UInterchangeAssetImportDataConverterBase::
StaticRegisterNativesUInterchangeAssetImportDataConverterBase(void)

{
  return;
}

