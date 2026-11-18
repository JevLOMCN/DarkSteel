// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cb990

UClass * __cdecl UMaterialExpressionSparseVolumeTextureObjectParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSparseVolumeTextureObjectParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSparseVolumeTextureObjectParameter,0x1b0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSparseVolumeTextureObjectParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSparseVolumeTextureObjectParameter>
               ,local_res8,UMaterialExpressionSparseVolumeTextureSampleParameter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter.
         InnerSingleton;
}

// UMaterialExpressionSparseVolumeTextureObjectParameter @ 1472d3700

UMaterialExpressionSparseVolumeTextureObjectParameter * __thiscall
UMaterialExpressionSparseVolumeTextureObjectParameter::
UMaterialExpressionSparseVolumeTextureObjectParameter
          (UMaterialExpressionSparseVolumeTextureObjectParameter *this,FVTableHelper *param_1)

{
  UMaterialExpressionSparseVolumeTextureSample::UMaterialExpressionSparseVolumeTextureSample
            ((UMaterialExpressionSparseVolumeTextureSample *)this,param_1);
  *(undefined4 *)&this->field_0x1a8 = 0x20;
  *(undefined8 *)&this->field_0x188 = 0;
  *(undefined8 *)&this->field_0x190 = 0;
  *(undefined8 *)&this->field_0x198 = 0;
  *(undefined8 *)&this->field_0x1a0 = 0;
  *(undefined ***)this = &___7UMaterialExpressionSparseVolumeTextureObjectParameter__6B_;
  return this;
}

// ~UMaterialExpressionSparseVolumeTextureObjectParameter @ 1472d4780

void __thiscall
UMaterialExpressionSparseVolumeTextureObjectParameter::
~UMaterialExpressionSparseVolumeTextureObjectParameter
          (UMaterialExpressionSparseVolumeTextureObjectParameter *this)

{
  *(undefined ***)this = &___7UMaterialExpressionSparseVolumeTextureBase__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d7bf0

UClass * __cdecl UMaterialExpressionSparseVolumeTextureObjectParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSparseVolumeTextureObjectParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSparseVolumeTextureObjectParameter,0x1b0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSparseVolumeTextureObjectParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSparseVolumeTextureObjectParameter>
               ,local_res8,UMaterialExpressionSparseVolumeTextureSampleParameter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter.
         InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSparseVolumeTextureObjectParameter @ 1472d8a00

void __cdecl
UMaterialExpressionSparseVolumeTextureObjectParameter::
StaticRegisterNativesUMaterialExpressionSparseVolumeTextureObjectParameter(void)

{
  return;
}

// UMaterialExpressionSparseVolumeTextureObjectParameter @ 148afe9f0

UMaterialExpressionSparseVolumeTextureObjectParameter * __thiscall
UMaterialExpressionSparseVolumeTextureObjectParameter::
UMaterialExpressionSparseVolumeTextureObjectParameter
          (UMaterialExpressionSparseVolumeTextureObjectParameter *this,FObjectInitializer *param_1)

{
  UMaterialExpressionSparseVolumeTextureBase::UMaterialExpressionSparseVolumeTextureBase
            ((UMaterialExpressionSparseVolumeTextureBase *)this,param_1);
  *(undefined4 *)&this->field_0x1a8 = 0x20;
  this->field_0x84 = this->field_0x84 | 1;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined8 *)&this->field_0xc8 = 0;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined8 *)&this->field_0xe8 = 0;
  *(undefined8 *)&this->field_0xf0 = 0;
  *(undefined8 *)&this->field_0xf8 = 0;
  *(undefined8 *)&this->field_0x100 = 0;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined8 *)&this->field_0x128 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined8 *)&this->field_0x138 = 0;
  *(undefined8 *)&this->field_0x140 = 0;
  *(undefined8 *)&this->field_0x148 = 0;
  *(undefined8 *)&this->field_0x150 = 0;
  *(undefined8 *)&this->field_0x130 = 0;
  *(undefined8 *)&this->field_0x160 = 0;
  *(undefined8 *)&this->field_0x168 = 0;
  *(undefined8 *)&this->field_0x170 = 0;
  *(undefined8 *)&this->field_0x178 = 0;
  *(undefined8 *)&this->field_0x158 = 0;
  *(undefined8 *)&this->field_0x188 = 0;
  *(undefined8 *)&this->field_0x190 = 0;
  *(undefined8 *)&this->field_0x198 = 0;
  *(undefined8 *)&this->field_0x1a0 = 0;
  *(undefined ***)this = &___7UMaterialExpressionSparseVolumeTextureObjectParameter__6B_;
  return this;
}

