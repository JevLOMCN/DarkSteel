// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1472a5fb0

UClass * __cdecl UMaterialExpressionFirstPersonOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFirstPersonOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFirstPersonOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionFirstPersonOutput.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFirstPersonOutput,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFirstPersonOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFirstPersonOutput>,local_res8,
               UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFirstPersonOutput.InnerSingleton;
}

// UMaterialExpressionFirstPersonOutput @ 1472ad110

UMaterialExpressionFirstPersonOutput * __thiscall
UMaterialExpressionFirstPersonOutput::UMaterialExpressionFirstPersonOutput
          (UMaterialExpressionFirstPersonOutput *this,FVTableHelper *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->ConstFirstPersonInterpolationAlpha = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionFirstPersonOutput__6B_;
  (this->FirstPersonInterpolationAlpha).OutputIndex = 0;
  (this->FirstPersonInterpolationAlpha).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->FirstPersonInterpolationAlpha).InputName.Number = 0;
  (this->FirstPersonInterpolationAlpha).MaskR = 0;
  (this->FirstPersonInterpolationAlpha).MaskG = 0;
  (this->FirstPersonInterpolationAlpha).MaskB = 0;
  (this->FirstPersonInterpolationAlpha).MaskA = 0;
  (this->FirstPersonInterpolationAlpha).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionFirstPersonOutput @ 1472af750

void __thiscall
UMaterialExpressionFirstPersonOutput::~UMaterialExpressionFirstPersonOutput
          (UMaterialExpressionFirstPersonOutput *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionFirstPersonOutput__6B_;
  UMaterialExpressionCustomOutput::~UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this);
  return;
}

// GetPrivateStaticClass @ 1472b2420

UClass * __cdecl UMaterialExpressionFirstPersonOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFirstPersonOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFirstPersonOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionFirstPersonOutput.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFirstPersonOutput,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFirstPersonOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFirstPersonOutput>,local_res8,
               UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFirstPersonOutput.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionFirstPersonOutput @ 1472b4540

void __cdecl
UMaterialExpressionFirstPersonOutput::StaticRegisterNativesUMaterialExpressionFirstPersonOutput
          (void)

{
  return;
}

// UMaterialExpressionFirstPersonOutput @ 148afc2c0

UMaterialExpressionFirstPersonOutput * __thiscall
UMaterialExpressionFirstPersonOutput::UMaterialExpressionFirstPersonOutput
          (UMaterialExpressionFirstPersonOutput *this,FObjectInitializer *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->ConstFirstPersonInterpolationAlpha = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionFirstPersonOutput__6B_;
  (this->FirstPersonInterpolationAlpha).OutputIndex = 0;
  (this->FirstPersonInterpolationAlpha).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->FirstPersonInterpolationAlpha).InputName.Number = 0;
  (this->FirstPersonInterpolationAlpha).MaskR = 0;
  (this->FirstPersonInterpolationAlpha).MaskG = 0;
  (this->FirstPersonInterpolationAlpha).MaskB = 0;
  (this->FirstPersonInterpolationAlpha).MaskA = 0;
  (this->FirstPersonInterpolationAlpha).Expression = (UMaterialExpression *)0x0;
  return this;
}

// GetDisplayName @ 148b007a0

FString * __thiscall
UMaterialExpressionFirstPersonOutput::GetDisplayName
          (UMaterialExpressionFirstPersonOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"First Person Output");
  return __return_storage_ptr__;
}

// GetFunctionName @ 148b00b40

FString * __thiscall
UMaterialExpressionFirstPersonOutput::GetFunctionName
          (UMaterialExpressionFirstPersonOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"GetFirstPersonOutput");
  return __return_storage_ptr__;
}

// GetNumOutputs @ 148b02160

int __thiscall
UMaterialExpressionFirstPersonOutput::GetNumOutputs(UMaterialExpressionFirstPersonOutput *this)

{
  return 1;
}

