// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147b2c000

UClass * __cdecl UAssetImportData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AssetImportData",
               &Z_Registration_Info_UClass_UAssetImportData.InnerSingleton,
               StaticRegisterNativesUAssetImportData,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UAssetImportData>,
               InternalVTableHelperCtorCaller<UAssetImportData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetImportData.InnerSingleton;
}

// UAssetImportData @ 147b3a700

UAssetImportData * __thiscall
UAssetImportData::UAssetImportData(UAssetImportData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAssetImportData__6B_;
  return this;
}

// UAssetImportData @ 147b3a730

UAssetImportData * __thiscall
UAssetImportData::UAssetImportData(UAssetImportData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAssetImportData__6B_;
  return this;
}

// ~UAssetImportData @ 147b3d500

void __thiscall UAssetImportData::~UAssetImportData(UAssetImportData *this)

{
  *(undefined ***)this = &___7UAssetImportData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147b6b760

UClass * __cdecl UAssetImportData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AssetImportData",
               &Z_Registration_Info_UClass_UAssetImportData.InnerSingleton,
               StaticRegisterNativesUAssetImportData,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UAssetImportData>,
               InternalVTableHelperCtorCaller<UAssetImportData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetImportData.InnerSingleton;
}

// IsEditorOnly @ 147b78010

bool __thiscall UAssetImportData::IsEditorOnly(UAssetImportData *this)

{
  return true;
}

// StaticRegisterNativesUAssetImportData @ 147b8eb30

void __cdecl UAssetImportData::StaticRegisterNativesUAssetImportData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

