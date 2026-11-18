// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 1472dd150

UClass * __cdecl UMaterialExpressionVolumetricAdvancedMaterialOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionVolumetricAdvancedMaterialOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionVolumetricAdvancedMaterialOutput,0x1f0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionVolumetricAdvancedMaterialOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionVolumetricAdvancedMaterialOutput>,
               local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput.
         InnerSingleton;
}

// UMaterialExpressionVolumetricAdvancedMaterialOutput @ 1472e2e60

UMaterialExpressionVolumetricAdvancedMaterialOutput * __thiscall
UMaterialExpressionVolumetricAdvancedMaterialOutput::
UMaterialExpressionVolumetricAdvancedMaterialOutput
          (UMaterialExpressionVolumetricAdvancedMaterialOutput *this,FVTableHelper *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->ConstMultiScatteringContribution = 0.5;
  this->_padding_ = (longlong)&___7UMaterialExpressionVolumetricAdvancedMaterialOutput__6B_;
  (this->PhaseG).OutputIndex = 0;
  (this->PhaseG).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PhaseG).InputName.Number = 0;
  (this->PhaseG).MaskR = 0;
  (this->PhaseG).MaskG = 0;
  (this->PhaseG).MaskB = 0;
  (this->PhaseG).MaskA = 0;
  (this->PhaseG).Expression = (UMaterialExpression *)0x0;
  (this->PhaseG2).OutputIndex = 0;
  (this->PhaseG2).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PhaseG2).InputName.Number = 0;
  (this->PhaseG2).MaskR = 0;
  (this->PhaseG2).MaskG = 0;
  (this->PhaseG2).MaskB = 0;
  (this->PhaseG2).MaskA = 0;
  (this->PhaseG2).Expression = (UMaterialExpression *)0x0;
  (this->PhaseBlend).OutputIndex = 0;
  (this->PhaseBlend).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PhaseBlend).InputName.Number = 0;
  (this->PhaseBlend).MaskR = 0;
  (this->PhaseBlend).MaskG = 0;
  (this->PhaseBlend).MaskB = 0;
  (this->PhaseBlend).MaskA = 0;
  (this->PhaseBlend).Expression = (UMaterialExpression *)0x0;
  (this->MultiScatteringContribution).OutputIndex = 0;
  (this->MultiScatteringContribution).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->MultiScatteringContribution).InputName.Number = 0;
  (this->MultiScatteringContribution).MaskR = 0;
  (this->MultiScatteringContribution).MaskG = 0;
  (this->MultiScatteringContribution).MaskB = 0;
  (this->MultiScatteringContribution).MaskA = 0;
  (this->MultiScatteringContribution).Expression = (UMaterialExpression *)0x0;
  (this->MultiScatteringOcclusion).OutputIndex = 0;
  (this->MultiScatteringOcclusion).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->MultiScatteringOcclusion).InputName.Number = 0;
  (this->MultiScatteringOcclusion).MaskR = 0;
  (this->MultiScatteringOcclusion).MaskG = 0;
  (this->MultiScatteringOcclusion).MaskB = 0;
  (this->MultiScatteringOcclusion).MaskA = 0;
  (this->MultiScatteringOcclusion).Expression = (UMaterialExpression *)0x0;
  (this->MultiScatteringEccentricity).OutputIndex = 0;
  (this->MultiScatteringEccentricity).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->MultiScatteringEccentricity).InputName.Number = 0;
  (this->MultiScatteringEccentricity).MaskR = 0;
  (this->MultiScatteringEccentricity).MaskG = 0;
  (this->MultiScatteringEccentricity).MaskB = 0;
  (this->MultiScatteringEccentricity).MaskA = 0;
  (this->MultiScatteringEccentricity).Expression = (UMaterialExpression *)0x0;
  (this->ConservativeDensity).OutputIndex = 0;
  (this->ConservativeDensity).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ConservativeDensity).InputName.Number = 0;
  (this->ConservativeDensity).MaskR = 0;
  (this->ConservativeDensity).MaskG = 0;
  (this->ConservativeDensity).MaskB = 0;
  (this->ConservativeDensity).MaskA = 0;
  (this->ConservativeDensity).Expression = (UMaterialExpression *)0x0;
  this->ConstPhaseG = 0.0;
  this->ConstPhaseG2 = 0.0;
  this->ConstPhaseBlend = 0.0;
  this->PerSamplePhaseEvaluation = false;
  this->MultiScatteringApproximationOctaveCount = 0;
  this->ConstMultiScatteringOcclusion = 0.5;
  this->ConstMultiScatteringEccentricity = 0.5;
  this->bGroundContribution = false;
  this->bGrayScaleMaterial = false;
  this->bRayMarchVolumeShadow = true;
  this->bClampMultiScatteringContribution = true;
  return this;
}

// ~UMaterialExpressionVolumetricAdvancedMaterialOutput @ 1472e38d0

void __thiscall
UMaterialExpressionVolumetricAdvancedMaterialOutput::
~UMaterialExpressionVolumetricAdvancedMaterialOutput
          (UMaterialExpressionVolumetricAdvancedMaterialOutput *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionVolumetricAdvancedMaterialOutput__6B_;
  UMaterialExpressionCustomOutput::~UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this);
  return;
}

// GetPrivateStaticClass @ 1472e7020

UClass * __cdecl UMaterialExpressionVolumetricAdvancedMaterialOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionVolumetricAdvancedMaterialOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionVolumetricAdvancedMaterialOutput,0x1f0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionVolumetricAdvancedMaterialOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionVolumetricAdvancedMaterialOutput>,
               local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialOutput.
         InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionVolumetricAdvancedMaterialOutput @ 1472e7a10

void __cdecl
UMaterialExpressionVolumetricAdvancedMaterialOutput::
StaticRegisterNativesUMaterialExpressionVolumetricAdvancedMaterialOutput(void)

{
  return;
}

// __VTableCtorCaller @ 1472e9ce0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
UMaterialExpressionVolumetricAdvancedMaterialOutput::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMaterialExpressionCustomOutput *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UMaterialExpressionCustomOutput *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMaterialExpressionCustomOutput *)0x0) {
    UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput(this,param_1);
    *(undefined8 *)&this[2].field_0x68 = 0;
    *(undefined ***)this = &___7UMaterialExpressionVolumetricAdvancedMaterialOutput__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    *(undefined8 *)&this[1].field_0x48 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[1].field_0x60 = 0;
    *(undefined8 *)&this[1].field_0x68 = 0;
    *(undefined8 *)&this[1].field_0x70 = 0;
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined8 *)&this[1].field_0x80 = 0;
    *(undefined8 *)&this[1].field_0x88 = 0;
    *(undefined8 *)&this[1].field_0x90 = 0;
    *(undefined8 *)&this[1].field_0x98 = 0;
    *(undefined8 *)&this[1].field_0x78 = 0;
    *(undefined8 *)&this[1].field_0xa8 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0xa0 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined8 *)&this[2].field_0x30 = 0;
    *(undefined8 *)&this[2].field_0x38 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x48 = 0;
    *(undefined8 *)&this[2].field_0x50 = 0;
    *(undefined8 *)&this[2].field_0x58 = 0;
    *(undefined8 *)&this[2].field_0x60 = 0;
    *(undefined8 *)&this[2].field_0x40 = 0;
    *(undefined4 *)&this[2].field_0x70 = 0;
    this[2].field_0x74 = 0;
    *(undefined4 *)&this[2].field_0x78 = 0;
    *(undefined4 *)&this[2].field_0x7c = 0x3f000000;
    *(undefined4 *)&this[2].field_0x80 = 0x3f000000;
    *(undefined4 *)&this[2].field_0x84 = 0x3f000000;
    *(undefined4 *)&this[2].field_0x88 = 0x1010000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// UMaterialExpressionVolumetricAdvancedMaterialOutput @ 148aff9b0

UMaterialExpressionVolumetricAdvancedMaterialOutput * __thiscall
UMaterialExpressionVolumetricAdvancedMaterialOutput::
UMaterialExpressionVolumetricAdvancedMaterialOutput
          (UMaterialExpressionVolumetricAdvancedMaterialOutput *this,FObjectInitializer *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->ConstMultiScatteringContribution = 0.5;
  this->_padding_ = (longlong)&___7UMaterialExpressionVolumetricAdvancedMaterialOutput__6B_;
  (this->PhaseG).OutputIndex = 0;
  (this->PhaseG).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PhaseG).InputName.Number = 0;
  (this->PhaseG).MaskR = 0;
  (this->PhaseG).MaskG = 0;
  (this->PhaseG).MaskB = 0;
  (this->PhaseG).MaskA = 0;
  (this->PhaseG).Expression = (UMaterialExpression *)0x0;
  (this->PhaseG2).OutputIndex = 0;
  (this->PhaseG2).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PhaseG2).InputName.Number = 0;
  (this->PhaseG2).MaskR = 0;
  (this->PhaseG2).MaskG = 0;
  (this->PhaseG2).MaskB = 0;
  (this->PhaseG2).MaskA = 0;
  (this->PhaseG2).Expression = (UMaterialExpression *)0x0;
  (this->PhaseBlend).OutputIndex = 0;
  (this->PhaseBlend).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PhaseBlend).InputName.Number = 0;
  (this->PhaseBlend).MaskR = 0;
  (this->PhaseBlend).MaskG = 0;
  (this->PhaseBlend).MaskB = 0;
  (this->PhaseBlend).MaskA = 0;
  (this->PhaseBlend).Expression = (UMaterialExpression *)0x0;
  (this->MultiScatteringContribution).OutputIndex = 0;
  (this->MultiScatteringContribution).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->MultiScatteringContribution).InputName.Number = 0;
  (this->MultiScatteringContribution).MaskR = 0;
  (this->MultiScatteringContribution).MaskG = 0;
  (this->MultiScatteringContribution).MaskB = 0;
  (this->MultiScatteringContribution).MaskA = 0;
  (this->MultiScatteringContribution).Expression = (UMaterialExpression *)0x0;
  (this->MultiScatteringOcclusion).OutputIndex = 0;
  (this->MultiScatteringOcclusion).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->MultiScatteringOcclusion).InputName.Number = 0;
  (this->MultiScatteringOcclusion).MaskR = 0;
  (this->MultiScatteringOcclusion).MaskG = 0;
  (this->MultiScatteringOcclusion).MaskB = 0;
  (this->MultiScatteringOcclusion).MaskA = 0;
  (this->MultiScatteringOcclusion).Expression = (UMaterialExpression *)0x0;
  (this->MultiScatteringEccentricity).OutputIndex = 0;
  (this->MultiScatteringEccentricity).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->MultiScatteringEccentricity).InputName.Number = 0;
  (this->MultiScatteringEccentricity).MaskR = 0;
  (this->MultiScatteringEccentricity).MaskG = 0;
  (this->MultiScatteringEccentricity).MaskB = 0;
  (this->MultiScatteringEccentricity).MaskA = 0;
  (this->MultiScatteringEccentricity).Expression = (UMaterialExpression *)0x0;
  (this->ConservativeDensity).OutputIndex = 0;
  (this->ConservativeDensity).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ConservativeDensity).InputName.Number = 0;
  (this->ConservativeDensity).MaskR = 0;
  (this->ConservativeDensity).MaskG = 0;
  (this->ConservativeDensity).MaskB = 0;
  (this->ConservativeDensity).MaskA = 0;
  (this->ConservativeDensity).Expression = (UMaterialExpression *)0x0;
  this->ConstPhaseG = 0.0;
  this->ConstPhaseG2 = 0.0;
  this->ConstPhaseBlend = 0.0;
  this->PerSamplePhaseEvaluation = false;
  this->MultiScatteringApproximationOctaveCount = 0;
  this->ConstMultiScatteringOcclusion = 0.5;
  this->ConstMultiScatteringEccentricity = 0.5;
  this->bGroundContribution = false;
  this->bGrayScaleMaterial = false;
  this->bRayMarchVolumeShadow = true;
  this->bClampMultiScatteringContribution = true;
  return this;
}

// GetDisplayName @ 148b008f0

FString * __thiscall
UMaterialExpressionVolumetricAdvancedMaterialOutput::GetDisplayName
          (UMaterialExpressionVolumetricAdvancedMaterialOutput *this,FString *__return_storage_ptr__
          )

{
  ::FString::FString(__return_storage_ptr__,L"Volumetric Advanced Ouput");
  return __return_storage_ptr__;
}

// GetFunctionName @ 148b00cc0

FString * __thiscall
UMaterialExpressionVolumetricAdvancedMaterialOutput::GetFunctionName
          (UMaterialExpressionVolumetricAdvancedMaterialOutput *this,FString *__return_storage_ptr__
          )

{
  ::FString::FString(__return_storage_ptr__,L"GetVolumetricAdvancedMaterialOutput");
  return __return_storage_ptr__;
}

// GetNumOutputs @ 148b021e0

int __thiscall
UMaterialExpressionVolumetricAdvancedMaterialOutput::GetNumOutputs
          (UMaterialExpressionVolumetricAdvancedMaterialOutput *this)

{
  return 7;
}

