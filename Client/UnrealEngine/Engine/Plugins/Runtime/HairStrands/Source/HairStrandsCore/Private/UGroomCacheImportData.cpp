// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// StaticClass @ 14df91970

UClass * __cdecl UGroomCacheImportData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomCacheImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomCacheImportData",
               &Z_Registration_Info_UClass_UGroomCacheImportData.InnerSingleton,
               StaticRegisterNativesUGroomCacheImportData,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGroomCacheImportData>,
               InternalVTableHelperCtorCaller<UGroomCacheImportData>,local_res8,
               UAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomCacheImportData.InnerSingleton;
}

// UGroomCacheImportData @ 14dfafc30

UGroomCacheImportData * __thiscall
UGroomCacheImportData::UGroomCacheImportData(UGroomCacheImportData *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  this->_padding_ = (longlong)&___7UGroomCacheImportData__6B_;
  (this->Settings).FrameStart = 0;
  (this->Settings).FrameEnd = 0;
  (this->Settings).GroomAsset.AssetPath.PackageName.ComparisonIndex = 0;
  (this->Settings).GroomAsset.AssetPath.PackageName.Number = 0;
  (this->Settings).GroomAsset.AssetPath.AssetName.ComparisonIndex = 0;
  (this->Settings).GroomAsset.AssetPath.AssetName.Number = 0;
  (this->Settings).GroomAsset.SubPathString.Data.ArrayNum = 0;
  (this->Settings).GroomAsset.SubPathString.Data.ArrayMax = 0;
  (this->Settings).bOverrideConversionSettings = false;
  (this->Settings).bImportGroomCache = true;
  (this->Settings).ImportType = All;
  (this->Settings).bSkipEmptyFrames = false;
  (this->Settings).bImportGroomAsset = true;
  (this->Settings).GroomAsset.SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Settings).ConversionSettings.Rotation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Settings).ConversionSettings.Rotation.field0_0x0._s_0.Y = (double)uVar1;
  (this->Settings).ConversionSettings.Rotation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Settings).ConversionSettings.Scale.field0_0x0._s_0.X = 1.0;
  (this->Settings).ConversionSettings.Scale.field0_0x0._s_0.Y = 1.0;
  (this->Settings).ConversionSettings.Scale.field0_0x0._s_0.Z = 1.0;
  return this;
}

// UGroomCacheImportData @ 14dfafcb0

UGroomCacheImportData * __thiscall
UGroomCacheImportData::UGroomCacheImportData
          (UGroomCacheImportData *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  this->_padding_ = (longlong)&___7UGroomCacheImportData__6B_;
  (this->Settings).FrameStart = 0;
  (this->Settings).FrameEnd = 0;
  (this->Settings).GroomAsset.AssetPath.PackageName.ComparisonIndex = 0;
  (this->Settings).GroomAsset.AssetPath.PackageName.Number = 0;
  (this->Settings).GroomAsset.AssetPath.AssetName.ComparisonIndex = 0;
  (this->Settings).GroomAsset.AssetPath.AssetName.Number = 0;
  (this->Settings).GroomAsset.SubPathString.Data.ArrayNum = 0;
  (this->Settings).GroomAsset.SubPathString.Data.ArrayMax = 0;
  (this->Settings).bOverrideConversionSettings = false;
  (this->Settings).bImportGroomCache = true;
  (this->Settings).ImportType = All;
  (this->Settings).bSkipEmptyFrames = false;
  (this->Settings).bImportGroomAsset = true;
  (this->Settings).GroomAsset.SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Settings).ConversionSettings.Rotation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Settings).ConversionSettings.Rotation.field0_0x0._s_0.Y = (double)uVar1;
  (this->Settings).ConversionSettings.Rotation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Settings).ConversionSettings.Scale.field0_0x0._s_0.X = 1.0;
  (this->Settings).ConversionSettings.Scale.field0_0x0._s_0.Y = 1.0;
  (this->Settings).ConversionSettings.Scale.field0_0x0._s_0.Z = 1.0;
  return this;
}

// ~UGroomCacheImportData @ 14dfb0e20

void __thiscall UGroomCacheImportData::~UGroomCacheImportData(UGroomCacheImportData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGroomCacheImportData__6B_;
  pFVar1 = (this->Settings).GroomAsset.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  return;
}

// GetPrivateStaticClass @ 14dfc85d0

UClass * __cdecl UGroomCacheImportData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomCacheImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomCacheImportData",
               &Z_Registration_Info_UClass_UGroomCacheImportData.InnerSingleton,
               StaticRegisterNativesUGroomCacheImportData,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGroomCacheImportData>,
               InternalVTableHelperCtorCaller<UGroomCacheImportData>,local_res8,
               UAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomCacheImportData.InnerSingleton;
}

// StaticRegisterNativesUGroomCacheImportData @ 14dfd8990

void __cdecl UGroomCacheImportData::StaticRegisterNativesUGroomCacheImportData(void)

{
  return;
}

