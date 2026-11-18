// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ca8a0

UClass * __cdecl UMaterialExpressionSkyAtmosphereLightDiskLuminance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSkyAtmosphereLightDiskLuminance",
               &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSkyAtmosphereLightDiskLuminance,0xf0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSkyAtmosphereLightDiskLuminance>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSkyAtmosphereLightDiskLuminance>,
               local_res8,UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance.
         InnerSingleton;
}

// UMaterialExpressionSkyAtmosphereLightDiskLuminance @ 1472d3040

UMaterialExpressionSkyAtmosphereLightDiskLuminance * __thiscall
UMaterialExpressionSkyAtmosphereLightDiskLuminance::
UMaterialExpressionSkyAtmosphereLightDiskLuminance
          (UMaterialExpressionSkyAtmosphereLightDiskLuminance *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSkyAtmosphereLightDiskLuminance__6B_;
  (this->DiskAngularDiameterOverride).OutputIndex = 0;
  (this->DiskAngularDiameterOverride).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DiskAngularDiameterOverride).InputName.Number = 0;
  (this->DiskAngularDiameterOverride).MaskR = 0;
  (this->DiskAngularDiameterOverride).MaskG = 0;
  (this->DiskAngularDiameterOverride).MaskB = 0;
  (this->DiskAngularDiameterOverride).MaskA = 0;
  (this->DiskAngularDiameterOverride).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionSkyAtmosphereLightDiskLuminance @ 1472d3090

UMaterialExpressionSkyAtmosphereLightDiskLuminance * __thiscall
UMaterialExpressionSkyAtmosphereLightDiskLuminance::
UMaterialExpressionSkyAtmosphereLightDiskLuminance
          (UMaterialExpressionSkyAtmosphereLightDiskLuminance *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSkyAtmosphereLightDiskLuminance__6B_;
  (this->DiskAngularDiameterOverride).OutputIndex = 0;
  (this->DiskAngularDiameterOverride).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DiskAngularDiameterOverride).InputName.Number = 0;
  (this->DiskAngularDiameterOverride).MaskR = 0;
  (this->DiskAngularDiameterOverride).MaskG = 0;
  (this->DiskAngularDiameterOverride).MaskB = 0;
  (this->DiskAngularDiameterOverride).MaskA = 0;
  (this->DiskAngularDiameterOverride).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionSkyAtmosphereLightDiskLuminance @ 1472d4660

void __thiscall
UMaterialExpressionSkyAtmosphereLightDiskLuminance::
~UMaterialExpressionSkyAtmosphereLightDiskLuminance
          (UMaterialExpressionSkyAtmosphereLightDiskLuminance *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSkyAtmosphereLightDiskLuminance__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472d7530

UClass * __cdecl UMaterialExpressionSkyAtmosphereLightDiskLuminance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSkyAtmosphereLightDiskLuminance",
               &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSkyAtmosphereLightDiskLuminance,0xf0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSkyAtmosphereLightDiskLuminance>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSkyAtmosphereLightDiskLuminance>,
               local_res8,UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance.
         InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSkyAtmosphereLightDiskLuminance @ 1472d8970

void __cdecl
UMaterialExpressionSkyAtmosphereLightDiskLuminance::
StaticRegisterNativesUMaterialExpressionSkyAtmosphereLightDiskLuminance(void)

{
  return;
}

