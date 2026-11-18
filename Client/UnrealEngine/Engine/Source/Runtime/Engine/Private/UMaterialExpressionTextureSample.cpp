// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472c7410

UClass * __cdecl UMaterialExpressionTextureSample::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureSample.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureSample",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureSample.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTextureSample,0x200,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureSample>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureSample>,aFStackX_8,
               UMaterialExpressionTextureBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureSample.InnerSingleton;
}

// UMaterialExpressionTextureSample @ 1472e2160

UMaterialExpressionTextureSample * __thiscall
UMaterialExpressionTextureSample::UMaterialExpressionTextureSample
          (UMaterialExpressionTextureSample *this,FVTableHelper *param_1)

{
  byte *pbVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfe;
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
  (this->AutomaticViewMipBiasValue).OutputIndex = 0;
  (this->AutomaticViewMipBiasValue).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->AutomaticViewMipBiasValue).InputName.Number = 0;
  (this->AutomaticViewMipBiasValue).MaskR = 0;
  (this->AutomaticViewMipBiasValue).MaskG = 0;
  (this->AutomaticViewMipBiasValue).MaskB = 0;
  (this->AutomaticViewMipBiasValue).MaskA = 0;
  (this->AutomaticViewMipBiasValue).Expression = (UMaterialExpression *)0x0;
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureSample__6B_;
  FText::FText(&(this->ChannelNames).R);
  FText::FText(&(this->ChannelNames).G);
  FText::FText(&(this->ChannelNames).B);
  FText::FText(&(this->ChannelNames).A);
  return this;
}

// ~UMaterialExpressionTextureSample @ 1472e34e0

void __thiscall
UMaterialExpressionTextureSample::~UMaterialExpressionTextureSample
          (UMaterialExpressionTextureSample *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureSample__6B_;
  pIVar1 = (this->ChannelNames).A.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->ChannelNames).B.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->ChannelNames).G.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->ChannelNames).R.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureBase__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e5ca0

UClass * __cdecl UMaterialExpressionTextureSample::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureSample.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureSample",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureSample.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTextureSample,0x200,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureSample>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureSample>,local_res8,
               UMaterialExpressionTextureBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureSample.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTextureSample @ 1472e7870

void __cdecl
UMaterialExpressionTextureSample::StaticRegisterNativesUMaterialExpressionTextureSample(void)

{
  return;
}

// UMaterialExpressionTextureSample @ 148aff360

UMaterialExpressionTextureSample * __thiscall
UMaterialExpressionTextureSample::UMaterialExpressionTextureSample
          (UMaterialExpressionTextureSample *this,FObjectInitializer *param_1)

{
  UMaterialExpressionTextureBase::UMaterialExpressionTextureBase
            ((UMaterialExpressionTextureBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureSample__6B_;
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
  (this->AutomaticViewMipBiasValue).OutputIndex = 0;
  (this->AutomaticViewMipBiasValue).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->AutomaticViewMipBiasValue).InputName.Number = 0;
  (this->AutomaticViewMipBiasValue).MaskR = 0;
  (this->AutomaticViewMipBiasValue).MaskG = 0;
  (this->AutomaticViewMipBiasValue).MaskB = 0;
  (this->AutomaticViewMipBiasValue).MaskA = 0;
  (this->AutomaticViewMipBiasValue).Expression = (UMaterialExpression *)0x0;
  FText::FText(&(this->ChannelNames).R);
  FText::FText(&(this->ChannelNames).G);
  FText::FText(&(this->ChannelNames).B);
  FText::FText(&(this->ChannelNames).A);
  return this;
}

