// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147f0e560

UClass * __cdecl UMaterialExpressionSubstrateSlabBSDF::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateSlabBSDF.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateSlabBSDF",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateSlabBSDF.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateSlabBSDF,0x398,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateSlabBSDF>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateSlabBSDF>,local_res8,
               UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateSlabBSDF.InnerSingleton;
}

// UMaterialExpressionSubstrateSlabBSDF @ 147f2c950

UMaterialExpressionSubstrateSlabBSDF * __thiscall
UMaterialExpressionSubstrateSlabBSDF::UMaterialExpressionSubstrateSlabBSDF
          (UMaterialExpressionSubstrateSlabBSDF *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateSlabBSDF__6B_;
  (this->DiffuseAlbedo).OutputIndex = 0;
  (this->DiffuseAlbedo).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DiffuseAlbedo).InputName.Number = 0;
  (this->DiffuseAlbedo).MaskR = 0;
  (this->DiffuseAlbedo).MaskG = 0;
  (this->DiffuseAlbedo).MaskB = 0;
  (this->DiffuseAlbedo).MaskA = 0;
  (this->DiffuseAlbedo).Expression = (UMaterialExpression *)0x0;
  (this->F0).OutputIndex = 0;
  (this->F0).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->F0).InputName.Number = 0;
  (this->F0).MaskR = 0;
  (this->F0).MaskG = 0;
  (this->F0).MaskB = 0;
  (this->F0).MaskA = 0;
  (this->F0).Expression = (UMaterialExpression *)0x0;
  (this->F90).OutputIndex = 0;
  (this->F90).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->F90).InputName.Number = 0;
  (this->F90).MaskR = 0;
  (this->F90).MaskG = 0;
  (this->F90).MaskB = 0;
  (this->F90).MaskA = 0;
  (this->F90).Expression = (UMaterialExpression *)0x0;
  (this->Roughness).OutputIndex = 0;
  (this->Roughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Roughness).InputName.Number = 0;
  (this->Roughness).MaskR = 0;
  (this->Roughness).MaskG = 0;
  (this->Roughness).MaskB = 0;
  (this->Roughness).MaskA = 0;
  (this->Roughness).Expression = (UMaterialExpression *)0x0;
  (this->Anisotropy).OutputIndex = 0;
  (this->Anisotropy).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Anisotropy).InputName.Number = 0;
  (this->Anisotropy).MaskR = 0;
  (this->Anisotropy).MaskG = 0;
  (this->Anisotropy).MaskB = 0;
  (this->Anisotropy).MaskA = 0;
  (this->Anisotropy).Expression = (UMaterialExpression *)0x0;
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  (this->Tangent).OutputIndex = 0;
  (this->Tangent).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Tangent).InputName.Number = 0;
  (this->Tangent).MaskR = 0;
  (this->Tangent).MaskG = 0;
  (this->Tangent).MaskB = 0;
  (this->Tangent).MaskA = 0;
  (this->Tangent).Expression = (UMaterialExpression *)0x0;
  (this->SSSMFP).OutputIndex = 0;
  (this->SSSMFP).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->SSSMFP).InputName.Number = 0;
  (this->SSSMFP).MaskR = 0;
  (this->SSSMFP).MaskG = 0;
  (this->SSSMFP).MaskB = 0;
  (this->SSSMFP).MaskA = 0;
  (this->SSSMFP).Expression = (UMaterialExpression *)0x0;
  (this->SSSMFPScale).OutputIndex = 0;
  (this->SSSMFPScale).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->SSSMFPScale).InputName.Number = 0;
  (this->SSSMFPScale).MaskR = 0;
  (this->SSSMFPScale).MaskG = 0;
  (this->SSSMFPScale).MaskB = 0;
  (this->SSSMFPScale).MaskA = 0;
  (this->SSSMFPScale).Expression = (UMaterialExpression *)0x0;
  (this->SSSPhaseAnisotropy).OutputIndex = 0;
  (this->SSSPhaseAnisotropy).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->SSSPhaseAnisotropy).InputName.Number = 0;
  (this->SSSPhaseAnisotropy).MaskR = 0;
  (this->SSSPhaseAnisotropy).MaskG = 0;
  (this->SSSPhaseAnisotropy).MaskB = 0;
  (this->SSSPhaseAnisotropy).MaskA = 0;
  (this->SSSPhaseAnisotropy).Expression = (UMaterialExpression *)0x0;
  (this->EmissiveColor).OutputIndex = 0;
  (this->EmissiveColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->EmissiveColor).InputName.Number = 0;
  (this->EmissiveColor).MaskR = 0;
  (this->EmissiveColor).MaskG = 0;
  (this->EmissiveColor).MaskB = 0;
  (this->EmissiveColor).MaskA = 0;
  (this->EmissiveColor).Expression = (UMaterialExpression *)0x0;
  (this->SecondRoughness).OutputIndex = 0;
  (this->SecondRoughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->SecondRoughness).InputName.Number = 0;
  (this->SecondRoughness).MaskR = 0;
  (this->SecondRoughness).MaskG = 0;
  (this->SecondRoughness).MaskB = 0;
  (this->SecondRoughness).MaskA = 0;
  (this->SecondRoughness).Expression = (UMaterialExpression *)0x0;
  (this->SecondRoughnessWeight).OutputIndex = 0;
  (this->SecondRoughnessWeight).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->SecondRoughnessWeight).InputName.Number = 0;
  (this->SecondRoughnessWeight).MaskR = 0;
  (this->SecondRoughnessWeight).MaskG = 0;
  (this->SecondRoughnessWeight).MaskB = 0;
  (this->SecondRoughnessWeight).MaskA = 0;
  (this->SecondRoughnessWeight).Expression = (UMaterialExpression *)0x0;
  (this->FuzzRoughness).OutputIndex = 0;
  (this->FuzzRoughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->FuzzRoughness).InputName.Number = 0;
  (this->FuzzRoughness).MaskR = 0;
  (this->FuzzRoughness).MaskG = 0;
  (this->FuzzRoughness).MaskB = 0;
  (this->FuzzRoughness).MaskA = 0;
  (this->FuzzRoughness).Expression = (UMaterialExpression *)0x0;
  (this->FuzzAmount).OutputIndex = 0;
  (this->FuzzAmount).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->FuzzAmount).InputName.Number = 0;
  (this->FuzzAmount).MaskR = 0;
  (this->FuzzAmount).MaskG = 0;
  (this->FuzzAmount).MaskB = 0;
  (this->FuzzAmount).MaskA = 0;
  (this->FuzzAmount).Expression = (UMaterialExpression *)0x0;
  (this->FuzzColor).OutputIndex = 0;
  (this->FuzzColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->FuzzColor).InputName.Number = 0;
  (this->FuzzColor).MaskR = 0;
  (this->FuzzColor).MaskG = 0;
  (this->FuzzColor).MaskB = 0;
  (this->FuzzColor).MaskA = 0;
  (this->FuzzColor).Expression = (UMaterialExpression *)0x0;
  (this->GlintValue).OutputIndex = 0;
  (this->GlintValue).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->GlintValue).InputName.Number = 0;
  (this->GlintValue).MaskR = 0;
  (this->GlintValue).MaskG = 0;
  (this->GlintValue).MaskB = 0;
  (this->GlintValue).MaskA = 0;
  (this->GlintValue).Expression = (UMaterialExpression *)0x0;
  (this->GlintUV).OutputIndex = 0;
  (this->GlintUV).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->GlintUV).InputName.Number = 0;
  (this->GlintUV).MaskR = 0;
  (this->GlintUV).MaskG = 0;
  (this->GlintUV).MaskB = 0;
  (this->GlintUV).MaskA = 0;
  (this->GlintUV).Expression = (UMaterialExpression *)0x0;
  (this->SubsurfaceProfile).field0_0x0.DebugPtr = (USubsurfaceProfile *)0x0;
  (this->SpecularProfile).field0_0x0.DebugPtr = (USpecularProfile *)0x0;
  (this->SubSurfaceType).Value = '\0';
  return this;
}

// UMaterialExpressionSubstrateSlabBSDF @ 147f2cc10

UMaterialExpressionSubstrateSlabBSDF * __thiscall
UMaterialExpressionSubstrateSlabBSDF::UMaterialExpressionSubstrateSlabBSDF
          (UMaterialExpressionSubstrateSlabBSDF *this,FObjectInitializer *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateSlabBSDF__6B_;
  (this->DiffuseAlbedo).OutputIndex = 0;
  (this->DiffuseAlbedo).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DiffuseAlbedo).InputName.Number = 0;
  (this->DiffuseAlbedo).MaskR = 0;
  (this->DiffuseAlbedo).MaskG = 0;
  (this->DiffuseAlbedo).MaskB = 0;
  (this->DiffuseAlbedo).MaskA = 0;
  (this->DiffuseAlbedo).Expression = (UMaterialExpression *)0x0;
  (this->F0).OutputIndex = 0;
  (this->F0).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->F0).InputName.Number = 0;
  (this->F0).MaskR = 0;
  (this->F0).MaskG = 0;
  (this->F0).MaskB = 0;
  (this->F0).MaskA = 0;
  (this->F0).Expression = (UMaterialExpression *)0x0;
  (this->F90).OutputIndex = 0;
  (this->F90).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->F90).InputName.Number = 0;
  (this->F90).MaskR = 0;
  (this->F90).MaskG = 0;
  (this->F90).MaskB = 0;
  (this->F90).MaskA = 0;
  (this->F90).Expression = (UMaterialExpression *)0x0;
  (this->Roughness).OutputIndex = 0;
  (this->Roughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Roughness).InputName.Number = 0;
  (this->Roughness).MaskR = 0;
  (this->Roughness).MaskG = 0;
  (this->Roughness).MaskB = 0;
  (this->Roughness).MaskA = 0;
  (this->Roughness).Expression = (UMaterialExpression *)0x0;
  (this->Anisotropy).OutputIndex = 0;
  (this->Anisotropy).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Anisotropy).InputName.Number = 0;
  (this->Anisotropy).MaskR = 0;
  (this->Anisotropy).MaskG = 0;
  (this->Anisotropy).MaskB = 0;
  (this->Anisotropy).MaskA = 0;
  (this->Anisotropy).Expression = (UMaterialExpression *)0x0;
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  (this->Tangent).OutputIndex = 0;
  (this->Tangent).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Tangent).InputName.Number = 0;
  (this->Tangent).MaskR = 0;
  (this->Tangent).MaskG = 0;
  (this->Tangent).MaskB = 0;
  (this->Tangent).MaskA = 0;
  (this->Tangent).Expression = (UMaterialExpression *)0x0;
  (this->SSSMFP).OutputIndex = 0;
  (this->SSSMFP).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->SSSMFP).InputName.Number = 0;
  (this->SSSMFP).MaskR = 0;
  (this->SSSMFP).MaskG = 0;
  (this->SSSMFP).MaskB = 0;
  (this->SSSMFP).MaskA = 0;
  (this->SSSMFP).Expression = (UMaterialExpression *)0x0;
  (this->SSSMFPScale).OutputIndex = 0;
  (this->SSSMFPScale).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->SSSMFPScale).InputName.Number = 0;
  (this->SSSMFPScale).MaskR = 0;
  (this->SSSMFPScale).MaskG = 0;
  (this->SSSMFPScale).MaskB = 0;
  (this->SSSMFPScale).MaskA = 0;
  (this->SSSMFPScale).Expression = (UMaterialExpression *)0x0;
  (this->SSSPhaseAnisotropy).OutputIndex = 0;
  (this->SSSPhaseAnisotropy).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->SSSPhaseAnisotropy).InputName.Number = 0;
  (this->SSSPhaseAnisotropy).MaskR = 0;
  (this->SSSPhaseAnisotropy).MaskG = 0;
  (this->SSSPhaseAnisotropy).MaskB = 0;
  (this->SSSPhaseAnisotropy).MaskA = 0;
  (this->SSSPhaseAnisotropy).Expression = (UMaterialExpression *)0x0;
  (this->EmissiveColor).OutputIndex = 0;
  (this->EmissiveColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->EmissiveColor).InputName.Number = 0;
  (this->EmissiveColor).MaskR = 0;
  (this->EmissiveColor).MaskG = 0;
  (this->EmissiveColor).MaskB = 0;
  (this->EmissiveColor).MaskA = 0;
  (this->EmissiveColor).Expression = (UMaterialExpression *)0x0;
  (this->SecondRoughness).OutputIndex = 0;
  (this->SecondRoughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->SecondRoughness).InputName.Number = 0;
  (this->SecondRoughness).MaskR = 0;
  (this->SecondRoughness).MaskG = 0;
  (this->SecondRoughness).MaskB = 0;
  (this->SecondRoughness).MaskA = 0;
  (this->SecondRoughness).Expression = (UMaterialExpression *)0x0;
  (this->SecondRoughnessWeight).OutputIndex = 0;
  (this->SecondRoughnessWeight).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->SecondRoughnessWeight).InputName.Number = 0;
  (this->SecondRoughnessWeight).MaskR = 0;
  (this->SecondRoughnessWeight).MaskG = 0;
  (this->SecondRoughnessWeight).MaskB = 0;
  (this->SecondRoughnessWeight).MaskA = 0;
  (this->SecondRoughnessWeight).Expression = (UMaterialExpression *)0x0;
  (this->FuzzRoughness).OutputIndex = 0;
  (this->FuzzRoughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->FuzzRoughness).InputName.Number = 0;
  (this->FuzzRoughness).MaskR = 0;
  (this->FuzzRoughness).MaskG = 0;
  (this->FuzzRoughness).MaskB = 0;
  (this->FuzzRoughness).MaskA = 0;
  (this->FuzzRoughness).Expression = (UMaterialExpression *)0x0;
  (this->FuzzAmount).OutputIndex = 0;
  (this->FuzzAmount).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->FuzzAmount).InputName.Number = 0;
  (this->FuzzAmount).MaskR = 0;
  (this->FuzzAmount).MaskG = 0;
  (this->FuzzAmount).MaskB = 0;
  (this->FuzzAmount).MaskA = 0;
  (this->FuzzAmount).Expression = (UMaterialExpression *)0x0;
  (this->FuzzColor).OutputIndex = 0;
  (this->FuzzColor).InputName.ComparisonIndex = 0;
  this->bUseSSSDiffusion = 1;
  uVar2 = (ulonglong)_tls_index;
  *(undefined8 *)&(this->FuzzColor).InputName.Number = 0;
  (this->FuzzColor).MaskR = 0;
  (this->FuzzColor).MaskG = 0;
  (this->FuzzColor).MaskB = 0;
  (this->FuzzColor).MaskA = 0;
  (this->FuzzColor).Expression = (UMaterialExpression *)0x0;
  (this->GlintValue).OutputIndex = 0;
  (this->GlintValue).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->GlintValue).InputName.Number = 0;
  (this->GlintValue).MaskR = 0;
  (this->GlintValue).MaskG = 0;
  (this->GlintValue).MaskB = 0;
  (this->GlintValue).MaskA = 0;
  (this->GlintValue).Expression = (UMaterialExpression *)0x0;
  (this->GlintUV).OutputIndex = 0;
  (this->GlintUV).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->GlintUV).InputName.Number = 0;
  (this->GlintUV).MaskR = 0;
  (this->GlintUV).MaskG = 0;
  (this->GlintUV).MaskB = 0;
  (this->GlintUV).MaskA = 0;
  (this->GlintUV).Expression = (UMaterialExpression *)0x0;
  (this->SubsurfaceProfile).field0_0x0.DebugPtr = (USubsurfaceProfile *)0x0;
  (this->SpecularProfile).field0_0x0.DebugPtr = (USpecularProfile *)0x0;
  pvVar1 = ThreadLocalStoragePointer;
  (this->SubSurfaceType).Value = '\x03';
  if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar2 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Substrate,L"MaterialExpressionSubstrate",
                 L"Substrate BSDFs",L"Substrate BSDFs");
      atexit(`UMaterialExpressionSubstrateSlabBSDF::UMaterialExpressionSubstrateSlabBSDF'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionSubstrateSlabBSDF @ 147f2f110

void __thiscall
UMaterialExpressionSubstrateSlabBSDF::~UMaterialExpressionSubstrateSlabBSDF
          (UMaterialExpressionSubstrateSlabBSDF *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateBSDF__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147f42e50

UClass * __cdecl UMaterialExpressionSubstrateSlabBSDF::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateSlabBSDF.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateSlabBSDF",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateSlabBSDF.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateSlabBSDF,0x398,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateSlabBSDF>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateSlabBSDF>,local_res8,
               UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateSlabBSDF.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSubstrateSlabBSDF @ 147f52bc0

void __cdecl
UMaterialExpressionSubstrateSlabBSDF::StaticRegisterNativesUMaterialExpressionSubstrateSlabBSDF
          (void)

{
  return;
}

