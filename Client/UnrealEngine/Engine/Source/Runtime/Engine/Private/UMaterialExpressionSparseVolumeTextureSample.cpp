// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cb690

UClass * __cdecl UMaterialExpressionSparseVolumeTextureSample::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSample.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSparseVolumeTextureSample",
               &Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSample.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSparseVolumeTextureSample,
               0x188,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSparseVolumeTextureSample>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSparseVolumeTextureSample>,
               local_res8,UMaterialExpressionSparseVolumeTextureBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSample.InnerSingleton;
}

// UMaterialExpressionSparseVolumeTextureSample @ 1472d3750

UMaterialExpressionSparseVolumeTextureSample * __thiscall
UMaterialExpressionSparseVolumeTextureSample::UMaterialExpressionSparseVolumeTextureSample
          (UMaterialExpressionSparseVolumeTextureSample *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSparseVolumeTextureSample__6B_;
  this->_padding_ = 0;
  (this->Coordinates).OutputIndex = 0;
  (this->Coordinates).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates).InputName.Number = 0;
  (this->Coordinates).MaskR = 0;
  (this->Coordinates).MaskG = 0;
  (this->Coordinates).MaskB = 0;
  (this->Coordinates).MaskA = 0;
  (this->Coordinates).Expression = (UMaterialExpression *)0x0;
  (this->TextureObject).OutputIndex = 0;
  (this->TextureObject).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TextureObject).InputName.Number = 0;
  (this->TextureObject).MaskR = 0;
  (this->TextureObject).MaskG = 0;
  (this->TextureObject).MaskB = 0;
  (this->TextureObject).MaskA = 0;
  (this->TextureObject).Expression = (UMaterialExpression *)0x0;
  (this->MipValue).OutputIndex = 0;
  (this->MipValue).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->MipValue).InputName.Number = 0;
  (this->MipValue).MaskR = 0;
  (this->MipValue).MaskG = 0;
  (this->MipValue).MaskB = 0;
  (this->MipValue).MaskA = 0;
  (this->MipValue).Expression = (UMaterialExpression *)0x0;
  (this->CoordinatesDX).OutputIndex = 0;
  (this->CoordinatesDX).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->CoordinatesDX).InputName.Number = 0;
  (this->CoordinatesDX).MaskR = 0;
  (this->CoordinatesDX).MaskG = 0;
  (this->CoordinatesDX).MaskB = 0;
  (this->CoordinatesDX).MaskA = 0;
  (this->CoordinatesDX).Expression = (UMaterialExpression *)0x0;
  (this->CoordinatesDY).OutputIndex = 0;
  (this->CoordinatesDY).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->CoordinatesDY).InputName.Number = 0;
  (this->CoordinatesDY).MaskR = 0;
  (this->CoordinatesDY).MaskG = 0;
  (this->CoordinatesDY).MaskB = 0;
  (this->CoordinatesDY).MaskA = 0;
  (this->CoordinatesDY).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionSparseVolumeTextureSample @ 1472d47a0

void __thiscall
UMaterialExpressionSparseVolumeTextureSample::~UMaterialExpressionSparseVolumeTextureSample
          (UMaterialExpressionSparseVolumeTextureSample *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSparseVolumeTextureBase__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d7cb0

UClass * __cdecl UMaterialExpressionSparseVolumeTextureSample::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSample.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSparseVolumeTextureSample",
               &Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSample.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSparseVolumeTextureSample,
               0x188,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSparseVolumeTextureSample>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSparseVolumeTextureSample>,
               local_res8,UMaterialExpressionSparseVolumeTextureBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSample.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSparseVolumeTextureSample @ 1472d8a10

void __cdecl
UMaterialExpressionSparseVolumeTextureSample::
StaticRegisterNativesUMaterialExpressionSparseVolumeTextureSample(void)

{
  return;
}

// UMaterialExpressionSparseVolumeTextureSample @ 148afeb00

UMaterialExpressionSparseVolumeTextureSample * __thiscall
UMaterialExpressionSparseVolumeTextureSample::UMaterialExpressionSparseVolumeTextureSample
          (UMaterialExpressionSparseVolumeTextureSample *this,FObjectInitializer *param_1)

{
  UMaterialExpressionSparseVolumeTextureBase::UMaterialExpressionSparseVolumeTextureBase
            ((UMaterialExpressionSparseVolumeTextureBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSparseVolumeTextureSample__6B_;
  (this->Coordinates).OutputIndex = 0;
  (this->Coordinates).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates).InputName.Number = 0;
  (this->Coordinates).MaskR = 0;
  (this->Coordinates).MaskG = 0;
  (this->Coordinates).MaskB = 0;
  (this->Coordinates).MaskA = 0;
  (this->Coordinates).Expression = (UMaterialExpression *)0x0;
  (this->TextureObject).OutputIndex = 0;
  (this->TextureObject).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TextureObject).InputName.Number = 0;
  (this->TextureObject).MaskR = 0;
  (this->TextureObject).MaskG = 0;
  (this->TextureObject).MaskB = 0;
  (this->TextureObject).MaskA = 0;
  (this->TextureObject).Expression = (UMaterialExpression *)0x0;
  (this->MipValue).OutputIndex = 0;
  (this->MipValue).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->MipValue).InputName.Number = 0;
  (this->MipValue).MaskR = 0;
  (this->MipValue).MaskG = 0;
  (this->MipValue).MaskB = 0;
  (this->MipValue).MaskA = 0;
  (this->MipValue).Expression = (UMaterialExpression *)0x0;
  (this->CoordinatesDX).OutputIndex = 0;
  (this->CoordinatesDX).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->CoordinatesDX).InputName.Number = 0;
  (this->CoordinatesDX).MaskR = 0;
  (this->CoordinatesDX).MaskG = 0;
  (this->CoordinatesDX).MaskB = 0;
  (this->CoordinatesDX).MaskA = 0;
  (this->CoordinatesDX).Expression = (UMaterialExpression *)0x0;
  (this->CoordinatesDY).OutputIndex = 0;
  (this->CoordinatesDY).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->CoordinatesDY).InputName.Number = 0;
  (this->CoordinatesDY).MaskR = 0;
  (this->CoordinatesDY).MaskG = 0;
  (this->CoordinatesDY).MaskB = 0;
  (this->CoordinatesDY).MaskA = 0;
  (this->CoordinatesDY).Expression = (UMaterialExpression *)0x0;
  return this;
}

