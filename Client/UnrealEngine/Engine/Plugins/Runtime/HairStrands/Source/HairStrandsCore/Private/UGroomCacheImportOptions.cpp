// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// StaticClass @ 14df91710

UClass * __cdecl UGroomCacheImportOptions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomCacheImportOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomCacheImportOptions",
               &Z_Registration_Info_UClass_UGroomCacheImportOptions.InnerSingleton,
               StaticRegisterNativesUGroomCacheImportOptions,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGroomCacheImportOptions>,
               InternalVTableHelperCtorCaller<UGroomCacheImportOptions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomCacheImportOptions.InnerSingleton;
}

// UGroomCacheImportOptions @ 14dfafd30

UGroomCacheImportOptions * __thiscall
UGroomCacheImportOptions::UGroomCacheImportOptions
          (UGroomCacheImportOptions *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGroomCacheImportOptions__6B_;
  (this->ImportSettings).FrameStart = 0;
  (this->ImportSettings).FrameEnd = 0;
  (this->ImportSettings).GroomAsset.AssetPath.PackageName.ComparisonIndex = 0;
  (this->ImportSettings).GroomAsset.AssetPath.PackageName.Number = 0;
  (this->ImportSettings).GroomAsset.AssetPath.AssetName.ComparisonIndex = 0;
  (this->ImportSettings).GroomAsset.AssetPath.AssetName.Number = 0;
  (this->ImportSettings).GroomAsset.SubPathString.Data.ArrayNum = 0;
  (this->ImportSettings).GroomAsset.SubPathString.Data.ArrayMax = 0;
  (this->ImportSettings).bOverrideConversionSettings = false;
  (this->ImportSettings).bImportGroomCache = true;
  (this->ImportSettings).ImportType = All;
  (this->ImportSettings).bSkipEmptyFrames = false;
  (this->ImportSettings).bImportGroomAsset = true;
  (this->ImportSettings).GroomAsset.SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ImportSettings).ConversionSettings.Rotation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ImportSettings).ConversionSettings.Rotation.field0_0x0._s_0.Y = (double)uVar1;
  (this->ImportSettings).ConversionSettings.Rotation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ImportSettings).ConversionSettings.Scale.field0_0x0._s_0.X = 1.0;
  (this->ImportSettings).ConversionSettings.Scale.field0_0x0._s_0.Y = 1.0;
  (this->ImportSettings).ConversionSettings.Scale.field0_0x0._s_0.Z = 1.0;
  return this;
}

// UGroomCacheImportOptions @ 14dfafdb0

UGroomCacheImportOptions * __thiscall
UGroomCacheImportOptions::UGroomCacheImportOptions
          (UGroomCacheImportOptions *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGroomCacheImportOptions__6B_;
  (this->ImportSettings).FrameStart = 0;
  (this->ImportSettings).FrameEnd = 0;
  (this->ImportSettings).GroomAsset.AssetPath.PackageName.ComparisonIndex = 0;
  (this->ImportSettings).GroomAsset.AssetPath.PackageName.Number = 0;
  (this->ImportSettings).GroomAsset.AssetPath.AssetName.ComparisonIndex = 0;
  (this->ImportSettings).GroomAsset.AssetPath.AssetName.Number = 0;
  (this->ImportSettings).GroomAsset.SubPathString.Data.ArrayNum = 0;
  (this->ImportSettings).GroomAsset.SubPathString.Data.ArrayMax = 0;
  (this->ImportSettings).bOverrideConversionSettings = false;
  (this->ImportSettings).bImportGroomCache = true;
  (this->ImportSettings).ImportType = All;
  (this->ImportSettings).bSkipEmptyFrames = false;
  (this->ImportSettings).bImportGroomAsset = true;
  (this->ImportSettings).GroomAsset.SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ImportSettings).ConversionSettings.Rotation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ImportSettings).ConversionSettings.Rotation.field0_0x0._s_0.Y = (double)uVar1;
  (this->ImportSettings).ConversionSettings.Rotation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ImportSettings).ConversionSettings.Scale.field0_0x0._s_0.X = 1.0;
  (this->ImportSettings).ConversionSettings.Scale.field0_0x0._s_0.Y = 1.0;
  (this->ImportSettings).ConversionSettings.Scale.field0_0x0._s_0.Z = 1.0;
  return this;
}

// ~UGroomCacheImportOptions @ 14dfb0e60

void __thiscall UGroomCacheImportOptions::~UGroomCacheImportOptions(UGroomCacheImportOptions *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGroomCacheImportOptions__6B_;
  pFVar1 = (this->ImportSettings).GroomAsset.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14dfc8690

UClass * __cdecl UGroomCacheImportOptions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomCacheImportOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomCacheImportOptions",
               &Z_Registration_Info_UClass_UGroomCacheImportOptions.InnerSingleton,
               StaticRegisterNativesUGroomCacheImportOptions,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGroomCacheImportOptions>,
               InternalVTableHelperCtorCaller<UGroomCacheImportOptions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomCacheImportOptions.InnerSingleton;
}

// StaticRegisterNativesUGroomCacheImportOptions @ 14dfd89a0

void __cdecl UGroomCacheImportOptions::StaticRegisterNativesUGroomCacheImportOptions(void)

{
  return;
}

