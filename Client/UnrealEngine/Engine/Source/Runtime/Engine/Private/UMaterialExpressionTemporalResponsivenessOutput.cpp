// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1472db8d0

UClass * __cdecl UMaterialExpressionTemporalResponsivenessOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTemporalResponsivenessOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTemporalResponsivenessOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionTemporalResponsivenessOutput.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionTemporalResponsivenessOutput,
               0xd8,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTemporalResponsivenessOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTemporalResponsivenessOutput>,
               local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTemporalResponsivenessOutput.InnerSingleton;
}

// UMaterialExpressionTemporalResponsivenessOutput @ 1472e1c80

UMaterialExpressionTemporalResponsivenessOutput * __thiscall
UMaterialExpressionTemporalResponsivenessOutput::UMaterialExpressionTemporalResponsivenessOutput
          (UMaterialExpressionTemporalResponsivenessOutput *this,FVTableHelper *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionTemporalResponsivenessOutput__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionTemporalResponsivenessOutput @ 1472e33a0

void __thiscall
UMaterialExpressionTemporalResponsivenessOutput::~UMaterialExpressionTemporalResponsivenessOutput
          (UMaterialExpressionTemporalResponsivenessOutput *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionTemporalResponsivenessOutput__6B_;
  UMaterialExpressionCustomOutput::~UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this);
  return;
}

// GetPrivateStaticClass @ 1472e5520

UClass * __cdecl UMaterialExpressionTemporalResponsivenessOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTemporalResponsivenessOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTemporalResponsivenessOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionTemporalResponsivenessOutput.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionTemporalResponsivenessOutput,
               0xd8,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTemporalResponsivenessOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTemporalResponsivenessOutput>,
               local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTemporalResponsivenessOutput.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTemporalResponsivenessOutput @ 1472e77d0

void __cdecl
UMaterialExpressionTemporalResponsivenessOutput::
StaticRegisterNativesUMaterialExpressionTemporalResponsivenessOutput(void)

{
  return;
}

// UMaterialExpressionTemporalResponsivenessOutput @ 148aff060

UMaterialExpressionTemporalResponsivenessOutput * __thiscall
UMaterialExpressionTemporalResponsivenessOutput::UMaterialExpressionTemporalResponsivenessOutput
          (UMaterialExpressionTemporalResponsivenessOutput *this,FObjectInitializer *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionTemporalResponsivenessOutput__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  return this;
}

// GetDisplayName @ 148b00890

FString * __thiscall
UMaterialExpressionTemporalResponsivenessOutput::GetDisplayName
          (UMaterialExpressionTemporalResponsivenessOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TemporalResponsiveness");
  return __return_storage_ptr__;
}

// GetFunctionName @ 148b00c60

FString * __thiscall
UMaterialExpressionTemporalResponsivenessOutput::GetFunctionName
          (UMaterialExpressionTemporalResponsivenessOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"GetTemporalResponsivenessOutput");
  return __return_storage_ptr__;
}

// GetNumOutputs @ 148b021c0

int __thiscall
UMaterialExpressionTemporalResponsivenessOutput::GetNumOutputs
          (UMaterialExpressionTemporalResponsivenessOutput *this)

{
  return 1;
}

