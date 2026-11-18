// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b8aa0

UClass * __cdecl UMaterialExpressionPerInstanceCustomData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPerInstanceCustomData",
               &Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPerInstanceCustomData,0xf0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPerInstanceCustomData>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPerInstanceCustomData>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData.InnerSingleton;
}

// UMaterialExpressionPerInstanceCustomData @ 1472c10b0

UMaterialExpressionPerInstanceCustomData * __thiscall
UMaterialExpressionPerInstanceCustomData::UMaterialExpressionPerInstanceCustomData
          (UMaterialExpressionPerInstanceCustomData *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionPerInstanceCustomData__6B_;
  (this->DefaultValue).OutputIndex = 0;
  (this->DefaultValue).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DefaultValue).InputName.Number = 0;
  (this->DefaultValue).MaskR = 0;
  (this->DefaultValue).MaskG = 0;
  (this->DefaultValue).MaskB = 0;
  (this->DefaultValue).MaskA = 0;
  (this->DefaultValue).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionPerInstanceCustomData @ 1472c1100

UMaterialExpressionPerInstanceCustomData * __thiscall
UMaterialExpressionPerInstanceCustomData::UMaterialExpressionPerInstanceCustomData
          (UMaterialExpressionPerInstanceCustomData *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionPerInstanceCustomData__6B_;
  (this->DefaultValue).OutputIndex = 0;
  (this->DefaultValue).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DefaultValue).InputName.Number = 0;
  (this->DefaultValue).MaskR = 0;
  (this->DefaultValue).MaskG = 0;
  (this->DefaultValue).MaskB = 0;
  (this->DefaultValue).MaskA = 0;
  (this->DefaultValue).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionPerInstanceCustomData @ 1472c24b0

void __thiscall
UMaterialExpressionPerInstanceCustomData::~UMaterialExpressionPerInstanceCustomData
          (UMaterialExpressionPerInstanceCustomData *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionPerInstanceCustomData__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c6130

UClass * __cdecl UMaterialExpressionPerInstanceCustomData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPerInstanceCustomData",
               &Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPerInstanceCustomData,0xf0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPerInstanceCustomData>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPerInstanceCustomData>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionPerInstanceCustomData @ 1472c7690

void __cdecl
UMaterialExpressionPerInstanceCustomData::
StaticRegisterNativesUMaterialExpressionPerInstanceCustomData(void)

{
  return;
}

