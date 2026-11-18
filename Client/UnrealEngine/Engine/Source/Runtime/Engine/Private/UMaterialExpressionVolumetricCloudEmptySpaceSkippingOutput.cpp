// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1472dd2d0

UClass * __cdecl UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionVolumetricCloudEmptySpaceSkippingOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput
                .InnerSingleton,
               StaticRegisterNativesUMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput,0xd8,
               8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput>
               ,local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput.
         InnerSingleton;
}

// UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput @ 1472e2ff0

UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput * __thiscall
UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput::
UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput
          (UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput *this,FVTableHelper *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput__6B_;
  (this->ContainsMatter).OutputIndex = 0;
  (this->ContainsMatter).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ContainsMatter).InputName.Number = 0;
  (this->ContainsMatter).MaskR = 0;
  (this->ContainsMatter).MaskG = 0;
  (this->ContainsMatter).MaskB = 0;
  (this->ContainsMatter).MaskA = 0;
  (this->ContainsMatter).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput @ 1472e3910

void __thiscall
UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput::
~UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput
          (UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput__6B_;
  UMaterialExpressionCustomOutput::~UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this);
  return;
}

// GetPrivateStaticClass @ 1472e71a0

UClass * __cdecl
UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionVolumetricCloudEmptySpaceSkippingOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput
                .InnerSingleton,
               StaticRegisterNativesUMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput,0xd8,
               8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput>
               ,local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput.
         InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput @ 1472e7a30

void __cdecl
UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput::
StaticRegisterNativesUMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput(void)

{
  return;
}

// UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput @ 148affb40

UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput * __thiscall
UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput::
UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput
          (UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput *this,
          FObjectInitializer *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput__6B_;
  (this->ContainsMatter).OutputIndex = 0;
  (this->ContainsMatter).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ContainsMatter).InputName.Number = 0;
  (this->ContainsMatter).MaskR = 0;
  (this->ContainsMatter).MaskG = 0;
  (this->ContainsMatter).MaskB = 0;
  (this->ContainsMatter).MaskA = 0;
  (this->ContainsMatter).Expression = (UMaterialExpression *)0x0;
  return this;
}

// GetDisplayName @ 148b00920

FString * __thiscall
UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput::GetDisplayName
          (UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Volumetric Cloud Empty Space Skipping Output");
  return __return_storage_ptr__;
}

// GetFunctionName @ 148b00cf0

FString * __thiscall
UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput::GetFunctionName
          (UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"GetVolumetricCloudEmptySpaceSkippingOutput");
  return __return_storage_ptr__;
}

// GetNumOutputs @ 148b021f0

int __thiscall
UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput::GetNumOutputs
          (UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput *this)

{
  return 1;
}

