// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 1472cace0

UClass * __cdecl UMaterialExpressionRuntimeVirtualTextureSample::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureSample.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRuntimeVirtualTextureSample",
               &Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureSample.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureSample,
               0x188,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRuntimeVirtualTextureSample>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRuntimeVirtualTextureSample>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureSample.InnerSingleton;
}

// UMaterialExpressionRuntimeVirtualTextureSample @ 1472d2150

UMaterialExpressionRuntimeVirtualTextureSample * __thiscall
UMaterialExpressionRuntimeVirtualTextureSample::UMaterialExpressionRuntimeVirtualTextureSample
          (UMaterialExpressionRuntimeVirtualTextureSample *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->MaterialType = BaseColor;
  this->bSinglePhysicalSpace = true;
  this->bAdaptive = false;
  this->WorldPositionOriginType = Absolute;
  this->_padding_ = (longlong)&___7UMaterialExpressionRuntimeVirtualTextureSample__6B_;
  (this->Coordinates).OutputIndex = 0;
  (this->Coordinates).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates).InputName.Number = 0;
  (this->Coordinates).MaskR = 0;
  (this->Coordinates).MaskG = 0;
  (this->Coordinates).MaskB = 0;
  (this->Coordinates).MaskA = 0;
  (this->Coordinates).Expression = (UMaterialExpression *)0x0;
  (this->WorldPosition).OutputIndex = 0;
  (this->WorldPosition).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WorldPosition).InputName.Number = 0;
  (this->WorldPosition).MaskR = 0;
  (this->WorldPosition).MaskG = 0;
  (this->WorldPosition).MaskB = 0;
  (this->WorldPosition).MaskA = 0;
  (this->WorldPosition).Expression = (UMaterialExpression *)0x0;
  (this->MipValue).OutputIndex = 0;
  (this->MipValue).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->MipValue).InputName.Number = 0;
  (this->MipValue).MaskR = 0;
  (this->MipValue).MaskG = 0;
  (this->MipValue).MaskB = 0;
  (this->MipValue).MaskA = 0;
  (this->MipValue).Expression = (UMaterialExpression *)0x0;
  (this->DDX).OutputIndex = 0;
  (this->DDX).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DDX).InputName.Number = 0;
  (this->DDX).MaskR = 0;
  (this->DDX).MaskG = 0;
  (this->DDX).MaskB = 0;
  (this->DDX).MaskA = 0;
  (this->DDX).Expression = (UMaterialExpression *)0x0;
  (this->DDY).OutputIndex = 0;
  (this->DDY).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DDY).InputName.Number = 0;
  (this->DDY).MaskR = 0;
  (this->DDY).MaskG = 0;
  (this->DDY).MaskB = 0;
  (this->DDY).MaskA = 0;
  (this->DDY).Expression = (UMaterialExpression *)0x0;
  (this->VirtualTexture).field0_0x0.DebugPtr = (URuntimeVirtualTexture *)0x0;
  this->TextureAddressMode = '\0';
  this->MipValueMode = '\0';
  this->bEnableFeedback = true;
  return this;
}

// ~UMaterialExpressionRuntimeVirtualTextureSample @ 1472d42f0

void __thiscall
UMaterialExpressionRuntimeVirtualTextureSample::~UMaterialExpressionRuntimeVirtualTextureSample
          (UMaterialExpressionRuntimeVirtualTextureSample *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionRuntimeVirtualTextureSample__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// CanReferenceTexture @ 1472d5d30

bool __thiscall
UMaterialExpressionRuntimeVirtualTextureSample::CanReferenceTexture
          (UMaterialExpressionRuntimeVirtualTextureSample *this)

{
  return true;
}

// GetPrivateStaticClass @ 1472d6270

UClass * __cdecl UMaterialExpressionRuntimeVirtualTextureSample::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureSample.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRuntimeVirtualTextureSample",
               &Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureSample.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureSample,
               0x188,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRuntimeVirtualTextureSample>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRuntimeVirtualTextureSample>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureSample.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureSample @ 1472d87e0

void __cdecl
UMaterialExpressionRuntimeVirtualTextureSample::
StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureSample(void)

{
  return;
}

// UMaterialExpressionRuntimeVirtualTextureSample @ 148afdfc0

UMaterialExpressionRuntimeVirtualTextureSample * __thiscall
UMaterialExpressionRuntimeVirtualTextureSample::UMaterialExpressionRuntimeVirtualTextureSample
          (UMaterialExpressionRuntimeVirtualTextureSample *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->MaterialType = BaseColor;
  this->bSinglePhysicalSpace = true;
  this->bAdaptive = false;
  this->WorldPositionOriginType = Absolute;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionRuntimeVirtualTextureSample__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Coordinates).OutputIndex = 0;
  (this->Coordinates).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates).InputName.Number = 0;
  (this->Coordinates).MaskR = 0;
  (this->Coordinates).MaskG = 0;
  (this->Coordinates).MaskB = 0;
  (this->Coordinates).MaskA = 0;
  (this->Coordinates).Expression = (UMaterialExpression *)0x0;
  (this->WorldPosition).OutputIndex = 0;
  (this->WorldPosition).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WorldPosition).InputName.Number = 0;
  (this->WorldPosition).MaskR = 0;
  (this->WorldPosition).MaskG = 0;
  (this->WorldPosition).MaskB = 0;
  (this->WorldPosition).MaskA = 0;
  (this->WorldPosition).Expression = (UMaterialExpression *)0x0;
  (this->MipValue).OutputIndex = 0;
  (this->MipValue).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->MipValue).InputName.Number = 0;
  (this->MipValue).MaskR = 0;
  (this->MipValue).MaskG = 0;
  (this->MipValue).MaskB = 0;
  (this->MipValue).MaskA = 0;
  (this->MipValue).Expression = (UMaterialExpression *)0x0;
  (this->DDX).OutputIndex = 0;
  (this->DDX).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DDX).InputName.Number = 0;
  (this->DDX).MaskR = 0;
  (this->DDX).MaskG = 0;
  (this->DDX).MaskB = 0;
  (this->DDX).MaskA = 0;
  (this->DDX).Expression = (UMaterialExpression *)0x0;
  (this->DDY).OutputIndex = 0;
  (this->DDY).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DDY).InputName.Number = 0;
  (this->DDY).MaskR = 0;
  (this->DDY).MaskG = 0;
  (this->DDY).MaskB = 0;
  (this->DDY).MaskA = 0;
  (this->DDY).Expression = (UMaterialExpression *)0x0;
  (this->VirtualTexture).field0_0x0.DebugPtr = (URuntimeVirtualTexture *)0x0;
  this->TextureAddressMode = '\0';
  this->MipValueMode = '\0';
  this->bEnableFeedback = true;
  return this;
}

// GetReferencedTexture @ 148b023c0

UObject * __thiscall
UMaterialExpressionRuntimeVirtualTextureSample::GetReferencedTexture
          (UMaterialExpressionRuntimeVirtualTextureSample *this)

{
  return (UObject *)(this->VirtualTexture).field0_0x0.DebugPtr;
}

// GetSamplerSourceMode @ 148b024c0

ESamplerSourceMode __thiscall
UMaterialExpressionRuntimeVirtualTextureSample::GetSamplerSourceMode
          (UMaterialExpressionRuntimeVirtualTextureSample *this)

{
  uchar uVar1;
  ESamplerSourceMode EVar2;
  
  uVar1 = (this->TextureAddressMode).Value;
  if ((uVar1 == '\0') || (EVar2 = SSM_Wrap_WorldGroupSettings, uVar1 != '\x01')) {
    EVar2 = SSM_Clamp_WorldGroupSettings;
  }
  return EVar2;
}

// InitOutputs @ 148b024f0

void __thiscall
UMaterialExpressionRuntimeVirtualTextureSample::InitOutputs
          (UMaterialExpressionRuntimeVirtualTextureSample *this)

{
  return;
}

// InitVirtualTextureDependentSettings @ 148b02500

bool __thiscall
UMaterialExpressionRuntimeVirtualTextureSample::InitVirtualTextureDependentSettings
          (UMaterialExpressionRuntimeVirtualTextureSample *this)

{
  ERuntimeVirtualTextureMaterialType EVar1;
  ERuntimeVirtualTextureMaterialType EVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  URuntimeVirtualTexture *pUVar7;
  
  pUVar7 = (this->VirtualTexture).field0_0x0.DebugPtr;
  if (pUVar7 != (URuntimeVirtualTexture *)0x0) {
    EVar1 = pUVar7->MaterialType;
    EVar2 = this->MaterialType;
    bVar3 = this->bSinglePhysicalSpace;
    this->MaterialType = EVar1;
    bVar4 = pUVar7->bSinglePhysicalSpace;
    this->bSinglePhysicalSpace = bVar4;
    bVar5 = pUVar7->bAdaptive;
    bVar6 = this->bAdaptive;
    this->bAdaptive = bVar5;
    return EVar2 != EVar1 || (bVar3 != bVar4 || bVar6 != bVar5);
  }
  return false;
}

