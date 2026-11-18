// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// StaticClass @ 14df90450

UClass * __cdecl UGroomAssetImportData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomAssetImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomAssetImportData",
               &Z_Registration_Info_UClass_UGroomAssetImportData.InnerSingleton,
               StaticRegisterNativesUGroomAssetImportData,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGroomAssetImportData>,
               InternalVTableHelperCtorCaller<UGroomAssetImportData>,local_res8,
               UAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomAssetImportData.InnerSingleton;
}

// UGroomAssetImportData @ 14dfaf930

UGroomAssetImportData * __thiscall
UGroomAssetImportData::UGroomAssetImportData(UGroomAssetImportData *this,FVTableHelper *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  this->_padding_ = (longlong)&___7UGroomAssetImportData__6B_;
  (this->ImportOptions).field0_0x0.DebugPtr = (UGroomImportOptions *)0x0;
  (this->HairStrandsTexturesOptions).field0_0x0.DebugPtr = (UGroomCreateStrandsTexturesOptions *)0x0
  ;
  return this;
}

// UGroomAssetImportData @ 14dfaf970

UGroomAssetImportData * __thiscall
UGroomAssetImportData::UGroomAssetImportData
          (UGroomAssetImportData *this,FObjectInitializer *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  this->_padding_ = (longlong)&___7UGroomAssetImportData__6B_;
  (this->ImportOptions).field0_0x0.DebugPtr = (UGroomImportOptions *)0x0;
  (this->HairStrandsTexturesOptions).field0_0x0.DebugPtr = (UGroomCreateStrandsTexturesOptions *)0x0
  ;
  return this;
}

// ~UGroomAssetImportData @ 14dfb0c90

void __thiscall UGroomAssetImportData::~UGroomAssetImportData(UGroomAssetImportData *this)

{
  this->_padding_ = (longlong)&___7UGroomAssetImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  return;
}

// GetPrivateStaticClass @ 14dfc83b0

UClass * __cdecl UGroomAssetImportData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomAssetImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomAssetImportData",
               &Z_Registration_Info_UClass_UGroomAssetImportData.InnerSingleton,
               StaticRegisterNativesUGroomAssetImportData,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGroomAssetImportData>,
               InternalVTableHelperCtorCaller<UGroomAssetImportData>,local_res8,
               UAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomAssetImportData.InnerSingleton;
}

// StaticRegisterNativesUGroomAssetImportData @ 14dfd8930

void __cdecl UGroomAssetImportData::StaticRegisterNativesUGroomAssetImportData(void)

{
  return;
}

