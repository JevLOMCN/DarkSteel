// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1472cdac0

UClass * __cdecl UMaterialExpressionRuntimeVirtualTextureOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRuntimeVirtualTextureOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureOutput.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureOutput,
               0x218,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRuntimeVirtualTextureOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRuntimeVirtualTextureOutput>,
               local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureOutput.InnerSingleton;
}

// UMaterialExpressionRuntimeVirtualTextureOutput @ 1472d1f00

UMaterialExpressionRuntimeVirtualTextureOutput * __thiscall
UMaterialExpressionRuntimeVirtualTextureOutput::UMaterialExpressionRuntimeVirtualTextureOutput
          (UMaterialExpressionRuntimeVirtualTextureOutput *this,FVTableHelper *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionRuntimeVirtualTextureOutput__6B_;
  (this->BaseColor).OutputIndex = 0;
  (this->BaseColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->BaseColor).InputName.Number = 0;
  (this->BaseColor).MaskR = 0;
  (this->BaseColor).MaskG = 0;
  (this->BaseColor).MaskB = 0;
  (this->BaseColor).MaskA = 0;
  (this->BaseColor).Expression = (UMaterialExpression *)0x0;
  (this->Specular).OutputIndex = 0;
  (this->Specular).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Specular).InputName.Number = 0;
  (this->Specular).MaskR = 0;
  (this->Specular).MaskG = 0;
  (this->Specular).MaskB = 0;
  (this->Specular).MaskA = 0;
  (this->Specular).Expression = (UMaterialExpression *)0x0;
  (this->Roughness).OutputIndex = 0;
  (this->Roughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Roughness).InputName.Number = 0;
  (this->Roughness).MaskR = 0;
  (this->Roughness).MaskG = 0;
  (this->Roughness).MaskB = 0;
  (this->Roughness).MaskA = 0;
  (this->Roughness).Expression = (UMaterialExpression *)0x0;
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  (this->WorldHeight).OutputIndex = 0;
  (this->WorldHeight).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WorldHeight).InputName.Number = 0;
  (this->WorldHeight).MaskR = 0;
  (this->WorldHeight).MaskG = 0;
  (this->WorldHeight).MaskB = 0;
  (this->WorldHeight).MaskA = 0;
  (this->WorldHeight).Expression = (UMaterialExpression *)0x0;
  (this->Opacity).OutputIndex = 0;
  (this->Opacity).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Opacity).InputName.Number = 0;
  (this->Opacity).MaskR = 0;
  (this->Opacity).MaskG = 0;
  (this->Opacity).MaskB = 0;
  (this->Opacity).MaskA = 0;
  (this->Opacity).Expression = (UMaterialExpression *)0x0;
  (this->Mask).OutputIndex = 0;
  (this->Mask).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Mask).InputName.Number = 0;
  (this->Mask).MaskR = 0;
  (this->Mask).MaskG = 0;
  (this->Mask).MaskB = 0;
  (this->Mask).MaskA = 0;
  (this->Mask).Expression = (UMaterialExpression *)0x0;
  (this->Displacement).OutputIndex = 0;
  (this->Displacement).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Displacement).InputName.Number = 0;
  (this->Displacement).MaskR = 0;
  (this->Displacement).MaskG = 0;
  (this->Displacement).MaskB = 0;
  (this->Displacement).MaskA = 0;
  (this->Displacement).Expression = (UMaterialExpression *)0x0;
  (this->Mask4).OutputIndex = 0;
  (this->Mask4).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Mask4).InputName.Number = 0;
  (this->Mask4).MaskR = 0;
  (this->Mask4).MaskG = 0;
  (this->Mask4).MaskB = 0;
  (this->Mask4).MaskA = 0;
  (this->Mask4).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionRuntimeVirtualTextureOutput @ 1472d42b0

void __thiscall
UMaterialExpressionRuntimeVirtualTextureOutput::~UMaterialExpressionRuntimeVirtualTextureOutput
          (UMaterialExpressionRuntimeVirtualTextureOutput *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionRuntimeVirtualTextureOutput__6B_;
  UMaterialExpressionCustomOutput::~UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this);
  return;
}

// GetPrivateStaticClass @ 1472d60f0

UClass * __cdecl UMaterialExpressionRuntimeVirtualTextureOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRuntimeVirtualTextureOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureOutput.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureOutput,
               0x218,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRuntimeVirtualTextureOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRuntimeVirtualTextureOutput>,
               local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureOutput.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureOutput @ 1472d87c0

void __cdecl
UMaterialExpressionRuntimeVirtualTextureOutput::
StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureOutput(void)

{
  return;
}

// UMaterialExpressionRuntimeVirtualTextureOutput @ 148afde50

UMaterialExpressionRuntimeVirtualTextureOutput * __thiscall
UMaterialExpressionRuntimeVirtualTextureOutput::UMaterialExpressionRuntimeVirtualTextureOutput
          (UMaterialExpressionRuntimeVirtualTextureOutput *this,FObjectInitializer *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionRuntimeVirtualTextureOutput__6B_;
  (this->BaseColor).OutputIndex = 0;
  (this->BaseColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->BaseColor).InputName.Number = 0;
  (this->BaseColor).MaskR = 0;
  (this->BaseColor).MaskG = 0;
  (this->BaseColor).MaskB = 0;
  (this->BaseColor).MaskA = 0;
  (this->BaseColor).Expression = (UMaterialExpression *)0x0;
  (this->Specular).OutputIndex = 0;
  (this->Specular).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Specular).InputName.Number = 0;
  (this->Specular).MaskR = 0;
  (this->Specular).MaskG = 0;
  (this->Specular).MaskB = 0;
  (this->Specular).MaskA = 0;
  (this->Specular).Expression = (UMaterialExpression *)0x0;
  (this->Roughness).OutputIndex = 0;
  (this->Roughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Roughness).InputName.Number = 0;
  (this->Roughness).MaskR = 0;
  (this->Roughness).MaskG = 0;
  (this->Roughness).MaskB = 0;
  (this->Roughness).MaskA = 0;
  (this->Roughness).Expression = (UMaterialExpression *)0x0;
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  (this->WorldHeight).OutputIndex = 0;
  (this->WorldHeight).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WorldHeight).InputName.Number = 0;
  (this->WorldHeight).MaskR = 0;
  (this->WorldHeight).MaskG = 0;
  (this->WorldHeight).MaskB = 0;
  (this->WorldHeight).MaskA = 0;
  (this->WorldHeight).Expression = (UMaterialExpression *)0x0;
  (this->Opacity).OutputIndex = 0;
  (this->Opacity).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Opacity).InputName.Number = 0;
  (this->Opacity).MaskR = 0;
  (this->Opacity).MaskG = 0;
  (this->Opacity).MaskB = 0;
  (this->Opacity).MaskA = 0;
  (this->Opacity).Expression = (UMaterialExpression *)0x0;
  (this->Mask).OutputIndex = 0;
  (this->Mask).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Mask).InputName.Number = 0;
  (this->Mask).MaskR = 0;
  (this->Mask).MaskG = 0;
  (this->Mask).MaskB = 0;
  (this->Mask).MaskA = 0;
  (this->Mask).Expression = (UMaterialExpression *)0x0;
  (this->Displacement).OutputIndex = 0;
  (this->Displacement).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Displacement).InputName.Number = 0;
  (this->Displacement).MaskR = 0;
  (this->Displacement).MaskG = 0;
  (this->Displacement).MaskB = 0;
  (this->Displacement).MaskA = 0;
  (this->Displacement).Expression = (UMaterialExpression *)0x0;
  (this->Mask4).OutputIndex = 0;
  (this->Mask4).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Mask4).InputName.Number = 0;
  (this->Mask4).MaskR = 0;
  (this->Mask4).MaskG = 0;
  (this->Mask4).MaskB = 0;
  (this->Mask4).MaskA = 0;
  (this->Mask4).Expression = (UMaterialExpression *)0x0;
  return this;
}

// GetDisplayName @ 148b00800

FString * __thiscall
UMaterialExpressionRuntimeVirtualTextureOutput::GetDisplayName
          (UMaterialExpressionRuntimeVirtualTextureOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Runtime Virtual Texture");
  return __return_storage_ptr__;
}

// GetFunctionName @ 148b00bd0

FString * __thiscall
UMaterialExpressionRuntimeVirtualTextureOutput::GetFunctionName
          (UMaterialExpressionRuntimeVirtualTextureOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"GetVirtualTextureOutput");
  return __return_storage_ptr__;
}

// GetNumOutputs @ 148b02190

int __thiscall
UMaterialExpressionRuntimeVirtualTextureOutput::GetNumOutputs
          (UMaterialExpressionRuntimeVirtualTextureOutput *this)

{
  return 9;
}

