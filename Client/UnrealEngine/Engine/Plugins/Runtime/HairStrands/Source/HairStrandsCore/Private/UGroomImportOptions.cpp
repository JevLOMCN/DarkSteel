// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// StaticClass @ 14e031c50

UClass * __cdecl UGroomImportOptions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomImportOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomImportOptions",
               &Z_Registration_Info_UClass_UGroomImportOptions.InnerSingleton,
               StaticRegisterNativesUGroomImportOptions,0x68,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UGroomImportOptions>,
               InternalVTableHelperCtorCaller<UGroomImportOptions>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomImportOptions.InnerSingleton;
}

// UGroomImportOptions @ 14e03dfd0

UGroomImportOptions * __thiscall
UGroomImportOptions::UGroomImportOptions(UGroomImportOptions *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGroomImportOptions__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ConversionSettings).Rotation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ConversionSettings).Rotation.field0_0x0._s_0.Y = (double)uVar1;
  (this->ConversionSettings).Rotation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ConversionSettings).Scale.field0_0x0._s_0.X = 1.0;
  (this->ConversionSettings).Scale.field0_0x0._s_0.Y = 1.0;
  (this->ConversionSettings).Scale.field0_0x0._s_0.Z = 1.0;
  (this->InterpolationSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterpolationSettings).ArrayNum = 0;
  (this->InterpolationSettings).ArrayMax = 0;
  return this;
}

// UGroomImportOptions @ 14e03e030

UGroomImportOptions * __thiscall
UGroomImportOptions::UGroomImportOptions(UGroomImportOptions *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGroomImportOptions__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ConversionSettings).Rotation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ConversionSettings).Rotation.field0_0x0._s_0.Y = (double)uVar1;
  (this->ConversionSettings).Rotation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ConversionSettings).Scale.field0_0x0._s_0.X = 1.0;
  (this->ConversionSettings).Scale.field0_0x0._s_0.Y = 1.0;
  (this->ConversionSettings).Scale.field0_0x0._s_0.Z = 1.0;
  (this->InterpolationSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterpolationSettings).ArrayNum = 0;
  (this->InterpolationSettings).ArrayMax = 0;
  return this;
}

// ~UGroomImportOptions @ 14e03efa0

void __thiscall UGroomImportOptions::~UGroomImportOptions(UGroomImportOptions *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGroomImportOptions__6B_;
  pFVar1 = (this->InterpolationSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e052370

UClass * __cdecl UGroomImportOptions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomImportOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomImportOptions",
               &Z_Registration_Info_UClass_UGroomImportOptions.InnerSingleton,
               StaticRegisterNativesUGroomImportOptions,0x68,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UGroomImportOptions>,
               InternalVTableHelperCtorCaller<UGroomImportOptions>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomImportOptions.InnerSingleton;
}

// StaticRegisterNativesUGroomImportOptions @ 14e064cc0

void __cdecl UGroomImportOptions::StaticRegisterNativesUGroomImportOptions(void)

{
  return;
}

