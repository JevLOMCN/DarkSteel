// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147286df0

UClass * __cdecl UMaterialExpressionAbsorptionMediumMaterialOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionAbsorptionMediumMaterialOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionAbsorptionMediumMaterialOutput,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionAbsorptionMediumMaterialOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionAbsorptionMediumMaterialOutput>,
               local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput.InnerSingleton
  ;
}

// UMaterialExpressionAbsorptionMediumMaterialOutput @ 14728bed0

UMaterialExpressionAbsorptionMediumMaterialOutput * __thiscall
UMaterialExpressionAbsorptionMediumMaterialOutput::UMaterialExpressionAbsorptionMediumMaterialOutput
          (UMaterialExpressionAbsorptionMediumMaterialOutput *this,FVTableHelper *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionAbsorptionMediumMaterialOutput__6B_;
  (this->TransmittanceColor).OutputIndex = 0;
  (this->TransmittanceColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TransmittanceColor).InputName.Number = 0;
  (this->TransmittanceColor).MaskR = 0;
  (this->TransmittanceColor).MaskG = 0;
  (this->TransmittanceColor).MaskB = 0;
  (this->TransmittanceColor).MaskA = 0;
  (this->TransmittanceColor).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionAbsorptionMediumMaterialOutput @ 14728d5c0

void __thiscall
UMaterialExpressionAbsorptionMediumMaterialOutput::
~UMaterialExpressionAbsorptionMediumMaterialOutput
          (UMaterialExpressionAbsorptionMediumMaterialOutput *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionAbsorptionMediumMaterialOutput__6B_;
  UMaterialExpressionCustomOutput::~UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this);
  return;
}

// GetPrivateStaticClass @ 14728ff50

UClass * __cdecl UMaterialExpressionAbsorptionMediumMaterialOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionAbsorptionMediumMaterialOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionAbsorptionMediumMaterialOutput,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionAbsorptionMediumMaterialOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionAbsorptionMediumMaterialOutput>,
               local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput.InnerSingleton
  ;
}

// StaticRegisterNativesUMaterialExpressionAbsorptionMediumMaterialOutput @ 147291380

void __cdecl
UMaterialExpressionAbsorptionMediumMaterialOutput::
StaticRegisterNativesUMaterialExpressionAbsorptionMediumMaterialOutput(void)

{
  return;
}

// UMaterialExpressionAbsorptionMediumMaterialOutput @ 148afa770

UMaterialExpressionAbsorptionMediumMaterialOutput * __thiscall
UMaterialExpressionAbsorptionMediumMaterialOutput::UMaterialExpressionAbsorptionMediumMaterialOutput
          (UMaterialExpressionAbsorptionMediumMaterialOutput *this,FObjectInitializer *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionAbsorptionMediumMaterialOutput__6B_;
  (this->TransmittanceColor).OutputIndex = 0;
  (this->TransmittanceColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TransmittanceColor).InputName.Number = 0;
  (this->TransmittanceColor).MaskR = 0;
  (this->TransmittanceColor).MaskG = 0;
  (this->TransmittanceColor).MaskB = 0;
  (this->TransmittanceColor).MaskA = 0;
  (this->TransmittanceColor).Expression = (UMaterialExpression *)0x0;
  return this;
}

// GetDisplayName @ 148b00770

FString * __thiscall
UMaterialExpressionAbsorptionMediumMaterialOutput::GetDisplayName
          (UMaterialExpressionAbsorptionMediumMaterialOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Absorption Medium");
  return __return_storage_ptr__;
}

// GetFunctionName @ 148b00b10

FString * __thiscall
UMaterialExpressionAbsorptionMediumMaterialOutput::GetFunctionName
          (UMaterialExpressionAbsorptionMediumMaterialOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"GetAbsorptionMediumMaterialOutput");
  return __return_storage_ptr__;
}

// GetNumOutputs @ 148b02150

int __thiscall
UMaterialExpressionAbsorptionMediumMaterialOutput::GetNumOutputs
          (UMaterialExpressionAbsorptionMediumMaterialOutput *this)

{
  return 1;
}

